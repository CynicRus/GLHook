#include "RSHooks.hpp"

GLdouble CalculateAngle(GLdouble Size, GLdouble Distance)
{
    GLdouble Rad = 2.0 * atan2(Size / 2.0, Distance);
    return (180.0 * Rad) / 3.1415926535;
}

void PointOfView(GLdouble ObjectX, GLdouble ObjectY, GLdouble ObjectZ, GLdouble Roll, GLdouble Pitch, GLdouble Heading)
{
      optr_glRotated(Roll, 0.0, 0.0, 1.0);
      optr_glRotated(Pitch, 0.0, 1.0, 0.0);
      optr_glRotated(Heading, 1.0, 0.0, 0.0);
      optr_glTranslated(-ObjectX, -ObjectY, -ObjectZ);
}

void PolarView(GLdouble Distance, GLdouble Twist, GLdouble Elevation, GLdouble Azimuth)
{
      optr_glTranslated(0.0, 0.0, -Distance);
      optr_glRotated(-Twist, 0.0, 0.0, 1.0);
      optr_glRotated(-Elevation, 1.0, 0.0, 0.0);
      optr_glRotated(Azimuth, 0.0, 0.0, 1.0);
}

GLboolean WorldToScreen(GLfloat &X, GLfloat &Y, Vector3D World)
{
    GLint ViewPort[4];
    GLdouble Screen[3];
    GLdouble ModelViewMatrix[16];
    GLdouble ProjectionMatrix[16];

    glGetIntegerv(GL_VIEWPORT, ViewPort);
    glGetDoublev(GL_MODELVIEW_MATRIX, ModelViewMatrix);
    glGetDoublev(GL_PROJECTION_MATRIX, ProjectionMatrix);

	if(gluProject(World.X, World.Y, World.Z, ModelViewMatrix, ProjectionMatrix, ViewPort, &Screen[0], &Screen[1], &Screen[2]) == GL_TRUE)
	{
		X = Screen[0];
		Y = ViewPort[3] - Screen[1];
		return GL_TRUE;
	}
    return GL_FALSE;
}

GLboolean WorldToScreen(GLfloat &X, GLfloat &Y, Vector3D World, GLdouble* ModelViewMatrix, GLdouble* ProjectionMatrix)
{
    GLint ViewPort[4];
    GLdouble Screen[3];
    glGetIntegerv(GL_VIEWPORT, ViewPort);

	if(gluProject(World.X, World.Y, World.Z, ModelViewMatrix, ProjectionMatrix, ViewPort, &Screen[0], &Screen[1], &Screen[2]) == GL_TRUE)
	{
		X = Screen[0];
		Y = ViewPort[3] - Screen[1];
		return GL_TRUE;
	}
    return GL_FALSE;
}

GLboolean ScreenToWorld(GLfloat X, GLfloat Y, Vector3D &World)
{
    GLfloat Z = 0;
    GLint ViewPort[4];
    GLdouble Screen[3];
    GLdouble ModelViewMatrix[16];
    GLdouble ProjectionMatrix[16];

    glGetIntegerv(GL_VIEWPORT, ViewPort);
    glGetDoublev(GL_MODELVIEW_MATRIX, ModelViewMatrix);
    glGetDoublev(GL_PROJECTION_MATRIX, ProjectionMatrix);

    optr_glReadPixels(X, ViewPort[3] - Y - 1, 1, 1, GL_DEPTH_COMPONENT, GL_FLOAT, &Z);
    if (gluUnProject(X, ViewPort[3] - Y - 1, Z, ModelViewMatrix, ProjectionMatrix, ViewPort, &Screen[0], &Screen[1], &Screen[3]) == GL_TRUE)
    {
        World.X = Screen[0];
        World.Y = Screen[1];
        World.Z = Screen[2];
        return GL_TRUE;
    }
    return GL_FALSE;
}

GLboolean ScreenToWorld(GLfloat X, GLfloat Y, Vector3D &World, GLdouble* ModelViewMatrix, GLdouble* ProjectionMatrix)
{
    GLfloat Z = 0;
    GLint ViewPort[4];
    GLdouble Screen[3];
    glGetIntegerv(GL_VIEWPORT, ViewPort);

    optr_glReadPixels(X, ViewPort[3] - Y - 1, 1, 1, GL_DEPTH_COMPONENT, GL_FLOAT, &Z);
    if (gluUnProject(X, ViewPort[3] - Y - 1, Z, ModelViewMatrix, ProjectionMatrix, ViewPort, &Screen[0], &Screen[1], &Screen[3]) == GL_TRUE)
    {
        World.X = Screen[0];
        World.Y = Screen[1];
        World.Z = Screen[2];
        return GL_TRUE;
    }
    return GL_FALSE;
}

GL_EXPORT __stdcall void GLHook_glBindBufferARB(GLenum target, GLuint buffer)
{
    BufferBound = true;
    CurrentBuffer.Type = target;
    CurrentBuffer.ID = buffer;

    (*optr_glBindBufferARB) (target, buffer);
}

GL_EXPORT __stdcall void GLHook_glBindTexture(GLenum target, GLuint texture)
{
    if (LogCalls) glLogCalls("glBindTexture: %d, %d\n", target, texture);

    if (target == GL_TEXTURE_RECTANGLE)     //GL_TEXTURE_2D
    {
        TextureFound = texture;
        PI.TID = texture;
        (*optr_glBindTexture) (target, texture);
        PI.ID = GLHook_PanelItemCheckSum(target, 32);
        return;
    }
    (*optr_glBindTexture) (target, texture);
}

GL_EXPORT __stdcall void GLHook_glBufferDataARB(GLenum target, GLsizeiptrARB size, const GLvoid *data, GLenum usage)
{
    if (BufferBound && CurrentBuffer.Type == target && target == GL_ARRAY_BUFFER)
    {
        BufferBound = false;
        CurrentBuffer.Size = size;
        CurrentBuffer.Usage = usage;
        ListOfBuffers.push_back(CurrentBuffer);
    }
    (*optr_glBufferDataARB) (target,  size, data, usage);
}

GL_EXPORT __stdcall void GLHook_glBufferSubDataARB(GLenum target, GLintptrARB offset, GLsizeiptrARB size, const GLvoid *data)
{
	(*optr_glBufferSubDataARB) (target,  offset,  size, data);
}

GL_EXPORT __stdcall void GLHook_glCallList(GLuint list)
{
    for (std::vector<FontChar>::iterator it = ListOfFonts.begin(); it != ListOfFonts.end(); ++it)
    {
        if (it->ID == list)
        {
            CurrentFontData.ID = it->ID;
            for (int I = 0; I < 4; I++)
            {
                CurrentFontData.Quad.VX[I] = it->Quad.VX[I];
                CurrentFontData.Quad.VY[I] = it->Quad.VY[I];
                CurrentFontData.Quad.TX[I] = it->Quad.TX[I];
                CurrentFontData.Quad.TY[I] = it->Quad.TY[I];
            }
            CurrentFontData.Symbol = (it->Symbol - 32);
            FontData.push_back(CurrentFontData);
            break;
        }
    }

	(*optr_glCallList) (list);
}

GL_EXPORT __stdcall void GLHook_glColor4ub(GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha)
{
    if (!red && !green && !blue)
    {
        CurrentFontData.Shadow = GL_TRUE;
        CurrentFontData.Rendering = GL_FALSE;
    }
    else
    {
        CurrentFontData.Shadow = GL_FALSE;
        CurrentFontData.Rendering = GL_TRUE;
    }

    CurrentFontData.Colour = {red, green, blue, alpha};

	(*optr_glColor4ub) (red, green, blue, alpha);
}

GL_EXPORT __stdcall void GLHook_glDrawElements(GLenum mode, GLsizei count, GLenum type, const GLvoid *indices)
{
    if (LogCalls) glLogCalls("glDrawElements: %d, %i, %d, %i\n", mode, count, type, indices);
    if (ModelRendering)
    {
        Model* ModelPtr = &ListOfModels.back();
        ModelPtr->ID = 0;
        ModelPtr->TriangleCount = count / 3;

        if (!ModelPtr->NullVertex)
        {
            const GLfloat* Pointer = static_cast<const GLfloat*>(ModelPtr->VertexPointer); //Can be used to iterate each vertex..
            ModelPtr->X = *Pointer + ModelPtr->Stride;
            ModelPtr->Y = *Pointer + ModelPtr->Stride + sizeof(GLfloat);
            ModelPtr->Z = *Pointer + ModelPtr->Stride + (2 * sizeof(GLfloat));
        }

        if ((ModelPtr->Stride == Stride) && Overlay)
            optr_glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
        else
            optr_glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
    }
    else
        optr_glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
    (*optr_glDrawElements) (mode, count, type, indices);
}

GL_EXPORT __stdcall void GLHook_glEnd(void)
{
    if (CompassFound)
    {
        CompassFound = false;
        CompassAngle.Compass.VertexCount = 0;
    }

    if (TextureFound)
    {
        if (PI.CoordCount == 4)
        {
            AreaFilter = {PI.TID, 550, 260, 740, 518};

            CurrentItem.ID = PI.ID;
            CurrentItem.X = PI.SX[0];
            CurrentItem.Y = PI.SY[0];
            CurrentItem.TextureID = PI.TID;

            for (int I = 0; I < 4; I++)
            {
                CurrentItem.SX[I] = PI.SX[I];
            }

            ListOfItems.push_back(CurrentItem);
        }
        PI.CoordCount = 0;
        TextureFound = false;
    }

    (*optr_glEnd) ();
}

GL_EXPORT __stdcall void GLHook_glEndList(void)
{
    if (FontFound)
    {
        CurrentFont.VCount = 0;
        CurrentFont.TCount = 0;
        CurrentFont.LastFont = false;
        if (!ListOfFonts.size())
            CurrentFont.Symbol = 32;
        else
            CurrentFont.Symbol = (!ListOfFonts.back().LastFont) ? ListOfFonts.back().Symbol + 1 : 32;

        if (++FontListCount >= 255)
        {
            CurrentFont.LastFont = true;
            FontListCount = 0;
            FontFound = false;
        }

        ListOfFonts.push_back(CurrentFont);
    }
	(*optr_glEndList) ();
}

GL_EXPORT __stdcall void GLHook_glGenBuffersARB(GLsizei n, GLuint *buffers)
{
	(*optr_glGenBuffersARB) (n, buffers);
}

GL_EXPORT __stdcall GLuint GLHook_glGenLists(GLsizei range)
{
    if (range == 256)
    {
        FontListCount = 0;
        FontFound = true;
    }
	return (*optr_glGenLists) (range);
}

GL_EXPORT __stdcall void GLHook_glMultiTexCoord2fARB(GLenum target, GLfloat s, GLfloat t)
{
    if (target == GL_TEXTURE0 && (s == 51 || t == 51))
    {
        CompassFound = true;
        CompassAngle.Compass.Found = true;
    }
	(*optr_glMultiTexCoord2fARB) (target, s, t);
}

GL_EXPORT __stdcall void GLHook_glNewList(GLuint list, GLenum mode)
{
    if (FontFound)
    {
        CurrentFont.ID = list;
    }
	(*optr_glNewList) (list, mode);
}

GL_EXPORT __stdcall void GLHook_glPopMatrix(void)
{
    if (ModelRendering)
    {
        GLfloat X = 0, Y = 0;
        Model* ModelPtr = &ListOfModels.back();
        Vector3D World = Vector3D(ModelPtr->X, ModelPtr->Y, ModelPtr->Z);
        if (WorldToScreen(X, Y, World))
        {
            ModelPtr->SX = X;
            ModelPtr->SY = Y;
        }
    }
    ModelRendering = false;
    (*optr_glPopMatrix) ();
}

GL_EXPORT __stdcall void GLHook_glTexCoord2f(GLfloat s,  GLfloat t)
{
    if (FontFound)
    {
        int I = ++CurrentFont.TCount;
        if (I < 5)
        {
            CurrentFont.Quad.TX[I - 1] = s;
            CurrentFont.Quad.TY[I - 1] = t;
        }
    }
	(*optr_glTexCoord2f) (s,  t);
}

GL_EXPORT __stdcall void GLHook_glTranslatef(GLfloat x, GLfloat y, GLfloat z)
{
    CurrentFontData.Translate[0] = x;
    CurrentFontData.Translate[1] = y;
    CurrentFontData.Translate[2] = z;
	(*optr_glTranslatef) (x, y, z);
}

GL_EXPORT __stdcall void GLHook_glVertex2f(GLfloat x, GLfloat y)
{
    if (CompassFound)
    {
        int I = ++CompassAngle.Compass.VertexCount;
        if (I < 5)
        {
            CompassAngle.Compass.VX[I - 1] = x;
            CompassAngle.Compass.VY[I - 1] = y;
        }
    }
	(*optr_glVertex2f) (x, y);
}

GL_EXPORT __stdcall void GLHook_glVertex2i(GLint x, GLint y)
{
    if (LogCalls) glLogCalls("glVertex2i: %i, %i\n", x, y);

    if (TextureFound)
    {
        int I = ++PI.CoordCount;
        if (I < 5)
        {
            PI.SX[I - 1] = x;
            PI.SY[I - 1] = y;
        }
    }

    if (FontFound)
    {
        int I = ++CurrentFont.VCount;
        if (I < 5)
        {
            CurrentFont.Quad.VX[I - 1] = x;
            CurrentFont.Quad.VY[I - 1] = y;
        }
    }

    (*optr_glVertex2i) (x, y);
}

GL_EXPORT __stdcall void GLHook_glVertexPointer(GLint size, GLenum type, GLsizei stride, const GLvoid *pointer)
{
    if (LogCalls) glLogCalls("glVertexPointer: %i, %d, %i, %i\n", size, type, stride, pointer);
    ModelRendering = true;
    CurrentModel.Stride = stride;
    CurrentModel.NullVertex = (pointer == NULL);
    CurrentModel.VertexPointer = pointer;   //Store Our Pointer for later calculations.
    ListOfModels.push_back(CurrentModel);

    (*optr_glVertexPointer) (size, type, stride, pointer);
}

GL_EXPORT __stdcall PROC GLHook_wglGetProcAddress(LPCSTR lpszProc)
{
    std::string FunctionCalled(lpszProc);
    if (FunctionCalled == "glBindBufferARB")
    {
        optr_glBindBufferARB = (ptr_glBindBufferARB) optr_wglGetProcAddress(lpszProc);
        return (FARPROC) GLHook_glBindBufferARB;
    }
    else if (FunctionCalled == "glBufferDataARB")
    {
        optr_glBufferDataARB = (ptr_glBufferDataARB) optr_wglGetProcAddress(lpszProc);
        return (FARPROC) GLHook_glBufferDataARB;
    }
    else if (FunctionCalled == "glBufferSubDataARB")
    {
        optr_glBufferSubDataARB = (ptr_glBufferSubDataARB) optr_wglGetProcAddress(lpszProc);
        return (FARPROC) GLHook_glBufferSubDataARB;
    }
    else if (FunctionCalled == "glMultiTexCoord2fARB")
    {
        optr_glMultiTexCoord2fARB = (ptr_glMultiTexCoord2fARB) optr_wglGetProcAddress(lpszProc);
        return (FARPROC) GLHook_glMultiTexCoord2fARB;
    }
    return (*optr_wglGetProcAddress) (lpszProc);
}

GL_EXPORT __stdcall BOOL GLHook_wglSwapBuffers(HDC hdc)
{
    Commands();
    if (LogCalls) glLogCalls("wglSwapBuffers");

    if (Overlay)
    {
        glColor4f(0.0f, 1.0f, 1.0f, 1.0f);

        for (std::vector<PanelItem>::iterator it = ListOfItems.begin(); it != ListOfItems.end(); ++it)
        {
            if (it->X > AreaFilter.X1 && it->Y > AreaFilter.Y1 && it->X < AreaFilter.X2 && it->Y < AreaFilter.Y2)
            {
                glPrint(it->X, it->Y + 18, "%i", it->ID);
            }
        }

        for (std::vector<Model>::iterator it = ListOfModels.begin(); it != ListOfModels.end(); ++it)
        {
            if ((Overlay && (it->Stride == Stride)) || (Overlay && DrawAllStrides))
            {
                glPrint(it->SX, it->SY + 224, "%i", it->ID);
            }
        }

        for (std::vector<FontInfo>::iterator it = FontData.begin(); it != FontData.end(); ++it)
        {
            if (it->Colour.R != 0 && it->Colour.G != 0 && it->Colour.B != 0)    //Remove this later.. Just for testing.
            {
                glPrint(it->Translate[0] + it->Quad.VX[1], it->Translate[1] + it->Quad.VY[1], "%c", it->Symbol);
            }
        }

        if (CompassAngle.Compass.Found)
        {
            CompassAngle.Compass.RadianAngle = 0;
            CompassAngle.Compass.DegreeAngle = 0;
            if (CompassAngle.Compass.VX[3] - CompassAngle.Compass.VX[0])
            {
                CompassAngle.Compass.RadianAngle = atan2f(CompassAngle.Compass.VY[3] - CompassAngle.Compass.VY[0], CompassAngle.Compass.VX[3] - CompassAngle.Compass.VX[0]);
                CompassAngle.Compass.RadianAngle += CompassAngle.Compass.RadianAngle < 1 ? (2 * 3.1415926535) : 0; //A bit buggy. Degress is more accurate.
                CompassAngle.Compass.DegreeAngle = (CompassAngle.Compass.RadianAngle * (180 / 3.1415926535));
            }
            glPrint(518, 48, "Deg: %f", CompassAngle.Compass.DegreeAngle);
            glPrint(518, 58, "Rad: %f", CompassAngle.Compass.RadianAngle);
        }
    }

    FontData.clear();
    ListOfItems.clear();
    ListOfModels.clear();
    CompassAngle.Compass.Found = false;

    return (*optr_wglSwapBuffers) (hdc);
}
