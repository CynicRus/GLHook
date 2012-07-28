#include "RSHooks.hpp"

GL_EXPORT __stdcall void GLHook_glBegin(GLenum mode)
{
	(*optr_glBegin) (mode);
}

GL_EXPORT __stdcall void GLHook_glBindTexture(GLenum target, GLuint texture)
{
    if (LogCalls) glLogCalls("glBindTexture: %d, %d\n", target, texture);

    if (target == GL_TEXTURE_RECTANGLE_NV)
    {
        TextureFound = texture;
        PI.TID = texture;
        (*optr_glBindTexture) (target, texture);
        PI.ID = GLHook_PanelItemCheckSum(32);
        return;
    }
	(*optr_glBindTexture) (target, texture);
}

GL_EXPORT __stdcall void GLHook_glDrawElements(GLenum mode, GLsizei count, GLenum type, const GLvoid *indices)
{
    if (LogCalls) glLogCalls("glDrawElements: %d, %i, %d, %i\n", mode, count, type, indices);
	(*optr_glDrawElements) (mode, count, type, indices);
}

GL_EXPORT __stdcall void GLHook_glDrawPixels(GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *pixels)
{
    if (LogCalls) glLogCalls("glDrawPixels: %i, %i, %d, %d, %i\n", width, height, format, type, pixels);
	(*optr_glDrawPixels) (width, height, format, type, pixels);
}

GL_EXPORT __stdcall void GLHook_glEnd(void)
{
    if (TextureFound)
    {
        if (PI.CoordCount == 4)
        {
            AreaFilter = {PI.TID, 550, 260, 740, 518};  //Filter out items by these coordinates and/or ID.

            CurrentItem.X = PI.SX[0];
            CurrentItem.Y = PI.SY[0];

            CurrentItem.SX[0] = PI.SX[0];
            CurrentItem.SY[0] = PI.SY[0];
            CurrentItem.SX[1] = PI.SX[1];
            CurrentItem.SY[1] = PI.SY[1];
            CurrentItem.SX[2] = PI.SX[2];
            CurrentItem.SY[2] = PI.SY[2];
            CurrentItem.SX[3] = PI.SX[3];
            CurrentItem.SY[3] = PI.SY[3];

            CurrentItem.ID = PI.ID;
            CurrentItem.TextureID = PI.TID;
            ListOfItems.push_back(CurrentItem);
        }
        PI.CoordCount = 0;
        TextureFound = false;
    }

	(*optr_glEnd) ();
}

GL_EXPORT __stdcall void GLHook_glRasterPos2i(GLint x, GLint y)
{
    if (LogCalls) glLogCalls("glRasterPos2i: %i, %i\n", x, y);
	(*optr_glRasterPos2i) (x, y);
}

GL_EXPORT __stdcall void GLHook_glVertex2i(GLint x, GLint y)
{
    if (LogCalls) glLogCalls("glVertex2i: %i, %i\n", x, y);

    if (TextureFound)
    {
        ++PI.CoordCount;
        int I = PI.CoordCount;
        if (I <= 4)
        {
            PI.SX[I - 1] = x;
            PI.SY[I - 1] = y;
        }
    }

	(*optr_glVertex2i) (x, y);
}

GL_EXPORT __stdcall BOOL GLHook_wglSwapBuffers(HDC hdc)
{
    Commands();
    if (LogCalls) glLogCalls("wglSwapBuffers");
    glColor4f(1.0f, 0.0f, 0.0f, 1.0f);

    if (Overlay)
    {
        for (std::vector<PanelItem>::iterator it = ListOfItems.begin(); it != ListOfItems.end(); it++)
        {
            if (it->X > AreaFilter.X1 && it->Y > AreaFilter.Y1 && it->X < AreaFilter.X2 && it->Y < AreaFilter.Y2)
            {
                glPrint(it->X, it->Y + 18, "%i", it->ID);
            }
        }
    }
    ListOfItems.clear();
	return (*optr_wglSwapBuffers) (hdc);
}
