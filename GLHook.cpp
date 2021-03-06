#include "GLHook.hpp"

/**
  *     @Author : Brandon T.
  *
  *     @param  : Naming - GLHook Pointer Naming.
  *     @param  : Implementation - GLHook Functions.
  *     @param  : Info From MSDN Documentation.
  **/

                                    /**         VARIABLES: Start.        **/

HMODULE OriginalGL = 0;

                                    /**         VARIABLES: End.        **/


                                    /**         NAMING: Start.       **/

ptr_glAccum                    optr_glAccum;
ptr_glAlphaFunc                optr_glAlphaFunc;
ptr_glAreTexturesResident      optr_glAreTexturesResident;
ptr_glArrayElement             optr_glArrayElement;
ptr_glBegin                    optr_glBegin;
ptr_glBindBufferARB            optr_glBindBufferARB;
ptr_glBindTexture              optr_glBindTexture;
ptr_glBitmap                   optr_glBitmap;
ptr_glBlendFunc                optr_glBlendFunc;
ptr_glBufferDataARB            optr_glBufferDataARB;
ptr_glBufferSubDataARB         optr_glBufferSubDataARB;
ptr_glCallList                 optr_glCallList;
ptr_glCallLists                optr_glCallLists;
ptr_glClear                    optr_glClear;
ptr_glClearAccum               optr_glClearAccum;
ptr_glClearColor               optr_glClearColor;
ptr_glClearDepth               optr_glClearDepth;
ptr_glClearIndex               optr_glClearIndex;
ptr_glClearStencil             optr_glClearStencil;
ptr_glClipPlane                optr_glClipPlane;
ptr_glColor3b                  optr_glColor3b;
ptr_glColor3bv                 optr_glColor3bv;
ptr_glColor3d                  optr_glColor3d;
ptr_glColor3dv                 optr_glColor3dv;
ptr_glColor3f                  optr_glColor3f;
ptr_glColor3fv                 optr_glColor3fv;
ptr_glColor3i                  optr_glColor3i;
ptr_glColor3iv                 optr_glColor3iv;
ptr_glColor3s                  optr_glColor3s;
ptr_glColor3sv                 optr_glColor3sv;
ptr_glColor3ub                 optr_glColor3ub;
ptr_glColor3ubv                optr_glColor3ubv;
ptr_glColor3ui                 optr_glColor3ui;
ptr_glColor3uiv                optr_glColor3uiv;
ptr_glColor3us                 optr_glColor3us;
ptr_glColor3usv                optr_glColor3usv;
ptr_glColor4b                  optr_glColor4b;
ptr_glColor4bv                 optr_glColor4bv;
ptr_glColor4d                  optr_glColor4d;
ptr_glColor4dv                 optr_glColor4dv;
ptr_glColor4f                  optr_glColor4f;
ptr_glColor4fv                 optr_glColor4fv;
ptr_glColor4i                  optr_glColor4i;
ptr_glColor4iv                 optr_glColor4iv;
ptr_glColor4s                  optr_glColor4s;
ptr_glColor4sv                 optr_glColor4sv;
ptr_glColor4ub                 optr_glColor4ub;
ptr_glColor4ubv                optr_glColor4ubv;
ptr_glColor4ui                 optr_glColor4ui;
ptr_glColor4uiv                optr_glColor4uiv;
ptr_glColor4us                 optr_glColor4us;
ptr_glColor4usv                optr_glColor4usv;
ptr_glColorMask                optr_glColorMask;
ptr_glColorMaterial            optr_glColorMaterial;
ptr_glColorPointer             optr_glColorPointer;
ptr_glCopyPixels               optr_glCopyPixels;
ptr_glCopyTexImage1D           optr_glCopyTexImage1D;
ptr_glCopyTexImage2D           optr_glCopyTexImage2D;
ptr_glCopyTexSubImage1D        optr_glCopyTexSubImage1D;
ptr_glCopyTexSubImage2D        optr_glCopyTexSubImage2D;
ptr_glCullFace                 optr_glCullFace;
ptr_glDeleteLists              optr_glDeleteLists;
ptr_glDeleteTextures           optr_glDeleteTextures;
ptr_glDepthFunc                optr_glDepthFunc;
ptr_glDepthMask                optr_glDepthMask;
ptr_glDepthRange               optr_glDepthRange;
ptr_glDisable                  optr_glDisable;
ptr_glDisableClientState       optr_glDisableClientState;
ptr_glDrawArrays               optr_glDrawArrays;
ptr_glDrawBuffer               optr_glDrawBuffer;
ptr_glDrawElements             optr_glDrawElements;
ptr_glDrawPixels               optr_glDrawPixels;
ptr_glDebugEntry               optr_glDebugEntry;
ptr_glEdgeFlag                 optr_glEdgeFlag;
ptr_glEdgeFlagv                optr_glEdgeFlagv;
ptr_glEdgeFlagPointer          optr_glEdgeFlagPointer;
ptr_glEnable                   optr_glEnable;
ptr_glEnableClientState        optr_glEnableClientState;
ptr_glEnd                      optr_glEnd;
ptr_glEndList                  optr_glEndList;
ptr_glEvalCoord1d              optr_glEvalCoord1d;
ptr_glEvalCoord1dv             optr_glEvalCoord1dv;
ptr_glEvalCoord1f              optr_glEvalCoord1f;
ptr_glEvalCoord1fv             optr_glEvalCoord1fv;
ptr_glEvalCoord2d              optr_glEvalCoord2d;
ptr_glEvalCoord2dv             optr_glEvalCoord2dv;
ptr_glEvalCoord2f              optr_glEvalCoord2f;
ptr_glEvalCoord2fv             optr_glEvalCoord2fv;
ptr_glEvalMesh1                optr_glEvalMesh1;
ptr_glEvalMesh2                optr_glEvalMesh2;
ptr_glEvalPoint1               optr_glEvalPoint1;
ptr_glEvalPoint2               optr_glEvalPoint2;
ptr_glFeedbackBuffer           optr_glFeedbackBuffer;
ptr_glFinish                   optr_glFinish;
ptr_glFlush                    optr_glFlush;
ptr_glFogf                     optr_glFogf;
ptr_glFogfv                    optr_glFogfv;
ptr_glFogi                     optr_glFogi;
ptr_glFogiv                    optr_glFogiv;
ptr_glFrontFace                optr_glFrontFace;
ptr_glFrustum                  optr_glFrustum;
ptr_glGenBuffersARB            optr_glGenBuffersARB;
ptr_glGenLists                 optr_glGenLists;
ptr_glGenTextures              optr_glGenTextures;
ptr_glGetBooleanv              optr_glGetBooleanv;
ptr_glGetDoublev               optr_glGetDoublev;
ptr_glGetFloatv                optr_glGetFloatv;
ptr_glGetIntegerv              optr_glGetIntegerv;
ptr_glGetClipPlane             optr_glGetClipPlane;
ptr_glGetError                 optr_glGetError;
ptr_glGetLightfv               optr_glGetLightfv;
ptr_glGetLightiv               optr_glGetLightiv;
ptr_glGetMapdv                 optr_glGetMapdv;
ptr_glGetMapfv                 optr_glGetMapfv;
ptr_glGetMapiv                 optr_glGetMapiv;
ptr_glGetMaterialfv            optr_glGetMaterialfv;
ptr_glGetMaterialiv            optr_glGetMaterialiv;
ptr_glGetPixelMapfv            optr_glGetPixelMapfv;
ptr_glGetPixelMapuiv           optr_glGetPixelMapuiv;
ptr_glGetPixelMapusv           optr_glGetPixelMapusv;
ptr_glGetPointerv              optr_glGetPointerv;
ptr_glGetPolygonStipple        optr_glGetPolygonStipple;
ptr_glGetString                optr_glGetString;
ptr_glGetTexEnvfv              optr_glGetTexEnvfv;
ptr_glGetTexEnviv              optr_glGetTexEnviv;
ptr_glGetTexGendv              optr_glGetTexGendv;
ptr_glGetTexGenfv              optr_glGetTexGenfv;
ptr_glGetTexGeniv              optr_glGetTexGeniv;
ptr_glGetTexImage              optr_glGetTexImage;
ptr_glGetTexLevelParameterfv   optr_glGetTexLevelParameterfv;
ptr_glGetTexLevelParameteriv   optr_glGetTexLevelParameteriv;
ptr_glGetTexParameterfv        optr_glGetTexParameterfv;
ptr_glGetTexParameteriv        optr_glGetTexParameteriv;
ptr_glHint                     optr_glHint;
ptr_glIndexd                   optr_glIndexd;
ptr_glIndexdv                  optr_glIndexdv;
ptr_glIndexf                   optr_glIndexf;
ptr_glIndexfv                  optr_glIndexfv;
ptr_glIndexi                   optr_glIndexi;
ptr_glIndexiv                  optr_glIndexiv;
ptr_glIndexs                   optr_glIndexs;
ptr_glIndexsv                  optr_glIndexsv;
ptr_glIndexub                  optr_glIndexub;
ptr_glIndexubv                 optr_glIndexubv;
ptr_glIndexMask                optr_glIndexMask;
ptr_glIndexPointer             optr_glIndexPointer;
ptr_glInitNames                optr_glInitNames;
ptr_glInterleavedArrays        optr_glInterleavedArrays;
ptr_glIsEnabled                optr_glIsEnabled;
ptr_glIsList                   optr_glIsList;
ptr_glIsTexture                optr_glIsTexture;
ptr_glLightf                   optr_glLightf;
ptr_glLightfv                  optr_glLightfv;
ptr_glLighti                   optr_glLighti;
ptr_glLightiv                  optr_glLightiv;
ptr_glLightModelf              optr_glLightModelf;
ptr_glLightModelfv             optr_glLightModelfv;
ptr_glLightModeli              optr_glLightModeli;
ptr_glLightModeliv             optr_glLightModeliv;
ptr_glLineStipple              optr_glLineStipple;
ptr_glLineWidth                optr_glLineWidth;
ptr_glListBase                 optr_glListBase;
ptr_glLoadIdentity             optr_glLoadIdentity;
ptr_glLoadMatrixd              optr_glLoadMatrixd;
ptr_glLoadMatrixf              optr_glLoadMatrixf;
ptr_glLoadName                 optr_glLoadName;
ptr_glLogicOp                  optr_glLogicOp;
ptr_glMap1d                    optr_glMap1d;
ptr_glMap1f                    optr_glMap1f;
ptr_glMap2d                    optr_glMap2d;
ptr_glMap2f                    optr_glMap2f;
ptr_glMapGrid1d                optr_glMapGrid1d;
ptr_glMapGrid1f                optr_glMapGrid1f;
ptr_glMapGrid2d                optr_glMapGrid2d;
ptr_glMapGrid2f                optr_glMapGrid2f;
ptr_glMaterialf                optr_glMaterialf;
ptr_glMaterialfv               optr_glMaterialfv;
ptr_glMateriali                optr_glMateriali;
ptr_glMaterialiv               optr_glMaterialiv;
ptr_glMatrixMode               optr_glMatrixMode;
ptr_glMultiTexCoord2fARB       optr_glMultiTexCoord2fARB;
ptr_glMultMatrixd              optr_glMultMatrixd;
ptr_glMultMatrixf              optr_glMultMatrixf;
ptr_glNewList                  optr_glNewList;
ptr_glNormal3b                 optr_glNormal3b;
ptr_glNormal3bv                optr_glNormal3bv;
ptr_glNormal3d                 optr_glNormal3d;
ptr_glNormal3dv                optr_glNormal3dv;
ptr_glNormal3f                 optr_glNormal3f;
ptr_glNormal3fv                optr_glNormal3fv;
ptr_glNormal3i                 optr_glNormal3i;
ptr_glNormal3iv                optr_glNormal3iv;
ptr_glNormal3s                 optr_glNormal3s;
ptr_glNormal3sv                optr_glNormal3sv;
ptr_glNormalPointer            optr_glNormalPointer;
ptr_glOrtho                    optr_glOrtho;
ptr_glPassThrough              optr_glPassThrough;
ptr_glPixelMapfv               optr_glPixelMapfv;
ptr_glPixelMapuiv              optr_glPixelMapuiv;
ptr_glPixelMapusv              optr_glPixelMapusv;
ptr_glPixelStoref              optr_glPixelStoref;
ptr_glPixelStorei              optr_glPixelStorei;
ptr_glPixelTransferf           optr_glPixelTransferf;
ptr_glPixelTransferi           optr_glPixelTransferi;
ptr_glPixelZoom                optr_glPixelZoom;
ptr_glPointSize                optr_glPointSize;
ptr_glPolygonMode              optr_glPolygonMode;
ptr_glPolygonOffset            optr_glPolygonOffset;
ptr_glPolygonStipple           optr_glPolygonStipple;
ptr_glPopAttrib                optr_glPopAttrib;
ptr_glPopClientAttrib          optr_glPopClientAttrib;
ptr_glPopMatrix                optr_glPopMatrix;
ptr_glPopName                  optr_glPopName;
ptr_glPrioritizeTextures       optr_glPrioritizeTextures;
ptr_glPushAttrib               optr_glPushAttrib;
ptr_glPushClientAttrib         optr_glPushClientAttrib;
ptr_glPushMatrix               optr_glPushMatrix;
ptr_glPushName                 optr_glPushName;
ptr_glRasterPos2d              optr_glRasterPos2d;
ptr_glRasterPos2dv             optr_glRasterPos2dv;
ptr_glRasterPos2f              optr_glRasterPos2f;
ptr_glRasterPos2fv             optr_glRasterPos2fv;
ptr_glRasterPos2i              optr_glRasterPos2i;
ptr_glRasterPos2iv             optr_glRasterPos2iv;
ptr_glRasterPos2s              optr_glRasterPos2s;
ptr_glRasterPos2sv             optr_glRasterPos2sv;
ptr_glRasterPos3d              optr_glRasterPos3d;
ptr_glRasterPos3dv             optr_glRasterPos3dv;
ptr_glRasterPos3f              optr_glRasterPos3f;
ptr_glRasterPos3fv             optr_glRasterPos3fv;
ptr_glRasterPos3i              optr_glRasterPos3i;
ptr_glRasterPos3iv             optr_glRasterPos3iv;
ptr_glRasterPos3s              optr_glRasterPos3s;
ptr_glRasterPos3sv             optr_glRasterPos3sv;
ptr_glRasterPos4d              optr_glRasterPos4d;
ptr_glRasterPos4dv             optr_glRasterPos4dv;
ptr_glRasterPos4f              optr_glRasterPos4f;
ptr_glRasterPos4fv             optr_glRasterPos4fv;
ptr_glRasterPos4i              optr_glRasterPos4i;
ptr_glRasterPos4iv             optr_glRasterPos4iv;
ptr_glRasterPos4s              optr_glRasterPos4s;
ptr_glRasterPos4sv             optr_glRasterPos4sv;
ptr_glReadBuffer               optr_glReadBuffer;
ptr_glReadPixels               optr_glReadPixels;
ptr_glRectd                    optr_glRectd;
ptr_glRectdv                   optr_glRectdv;
ptr_glRectf                    optr_glRectf;
ptr_glRectfv                   optr_glRectfv;
ptr_glRecti                    optr_glRecti;
ptr_glRectiv                   optr_glRectiv;
ptr_glRects                    optr_glRects;
ptr_glRectsv                   optr_glRectsv;
ptr_glRenderMode               optr_glRenderMode;
ptr_glRotated                  optr_glRotated;
ptr_glRotatef                  optr_glRotatef;
ptr_glScaled                   optr_glScaled;
ptr_glScalef                   optr_glScalef;
ptr_glScissor                  optr_glScissor;
ptr_glSelectBuffer             optr_glSelectBuffer;
ptr_glShadeModel               optr_glShadeModel;
ptr_glStencilFunc              optr_glStencilFunc;
ptr_glStencilMask              optr_glStencilMask;
ptr_glStencilOp                optr_glStencilOp;
ptr_glTexCoord1d               optr_glTexCoord1d;
ptr_glTexCoord1dv              optr_glTexCoord1dv;
ptr_glTexCoord1f               optr_glTexCoord1f;
ptr_glTexCoord1fv              optr_glTexCoord1fv;
ptr_glTexCoord1i               optr_glTexCoord1i;
ptr_glTexCoord1iv              optr_glTexCoord1iv;
ptr_glTexCoord1s               optr_glTexCoord1s;
ptr_glTexCoord1sv              optr_glTexCoord1sv;
ptr_glTexCoord2d               optr_glTexCoord2d;
ptr_glTexCoord2dv              optr_glTexCoord2dv;
ptr_glTexCoord2f               optr_glTexCoord2f;
ptr_glTexCoord2fv              optr_glTexCoord2fv;
ptr_glTexCoord2i               optr_glTexCoord2i;
ptr_glTexCoord2iv              optr_glTexCoord2iv;
ptr_glTexCoord2s               optr_glTexCoord2s;
ptr_glTexCoord2sv              optr_glTexCoord2sv;
ptr_glTexCoord3d               optr_glTexCoord3d;
ptr_glTexCoord3dv              optr_glTexCoord3dv;
ptr_glTexCoord3f               optr_glTexCoord3f;
ptr_glTexCoord3fv              optr_glTexCoord3fv;
ptr_glTexCoord3i               optr_glTexCoord3i;
ptr_glTexCoord3iv              optr_glTexCoord3iv;
ptr_glTexCoord3s               optr_glTexCoord3s;
ptr_glTexCoord3sv              optr_glTexCoord3sv;
ptr_glTexCoord4d               optr_glTexCoord4d;
ptr_glTexCoord4dv              optr_glTexCoord4dv;
ptr_glTexCoord4f               optr_glTexCoord4f;
ptr_glTexCoord4fv              optr_glTexCoord4fv;
ptr_glTexCoord4i               optr_glTexCoord4i;
ptr_glTexCoord4iv              optr_glTexCoord4iv;
ptr_glTexCoord4s               optr_glTexCoord4s;
ptr_glTexCoord4sv              optr_glTexCoord4sv;
ptr_glTexCoordPointer          optr_glTexCoordPointer;
ptr_glTexEnvf                  optr_glTexEnvf;
ptr_glTexEnvfv                 optr_glTexEnvfv;
ptr_glTexEnvi                  optr_glTexEnvi;
ptr_glTexEnviv                 optr_glTexEnviv;
ptr_glTexGend                  optr_glTexGend;
ptr_glTexGendv                 optr_glTexGendv;
ptr_glTexGenf                  optr_glTexGenf;
ptr_glTexGenfv                 optr_glTexGenfv;
ptr_glTexGeni                  optr_glTexGeni;
ptr_glTexGeniv                 optr_glTexGeniv;
ptr_glTexImage1D               optr_glTexImage1D;
ptr_glTexImage2D               optr_glTexImage2D;
ptr_glTexParameterf            optr_glTexParameterf;
ptr_glTexParameterfv           optr_glTexParameterfv;
ptr_glTexParameteri            optr_glTexParameteri;
ptr_glTexParameteriv           optr_glTexParameteriv;
ptr_glTexSubImage1D            optr_glTexSubImage1D;
ptr_glTexSubImage2D            optr_glTexSubImage2D;
ptr_glTranslated               optr_glTranslated;
ptr_glTranslatef               optr_glTranslatef;
ptr_glVertex2d                 optr_glVertex2d;
ptr_glVertex2dv                optr_glVertex2dv;
ptr_glVertex2f                 optr_glVertex2f;
ptr_glVertex2fv                optr_glVertex2fv;
ptr_glVertex2i                 optr_glVertex2i;
ptr_glVertex2iv                optr_glVertex2iv;
ptr_glVertex2s                 optr_glVertex2s;
ptr_glVertex2sv                optr_glVertex2sv;
ptr_glVertex3d                 optr_glVertex3d;
ptr_glVertex3dv                optr_glVertex3dv;
ptr_glVertex3f                 optr_glVertex3f;
ptr_glVertex3fv                optr_glVertex3fv;
ptr_glVertex3i                 optr_glVertex3i;
ptr_glVertex3iv                optr_glVertex3iv;
ptr_glVertex3s                 optr_glVertex3s;
ptr_glVertex3sv                optr_glVertex3sv;
ptr_glVertex4d                 optr_glVertex4d;
ptr_glVertex4dv                optr_glVertex4dv;
ptr_glVertex4f                 optr_glVertex4f;
ptr_glVertex4fv                optr_glVertex4fv;
ptr_glVertex4i                 optr_glVertex4i;
ptr_glVertex4iv                optr_glVertex4iv;
ptr_glVertex4s                 optr_glVertex4s;
ptr_glVertex4sv                optr_glVertex4sv;
ptr_glVertexPointer            optr_glVertexPointer;
ptr_glViewport                 optr_glViewport;
ptr_wglChoosePixelFormat       optr_wglChoosePixelFormat;
ptr_wglCreateContext           optr_wglCreateContext;
ptr_wglCreateLayerContext      optr_wglCreateLayerContext;
ptr_wglCopyContext             optr_wglCopyContext;
ptr_wglDeleteContext           optr_wglDeleteContext;
ptr_wglDescribeLayerPlane      optr_wglDescribeLayerPlane;
ptr_wglDescribePixelFormat     optr_wglDescribePixelFormat;
ptr_wglGetCurrentContext       optr_wglGetCurrentContext;
ptr_wglGetCurrentDC            optr_wglGetCurrentDC;
ptr_wglGetDefaultProcAddress   optr_wglGetDefaultProcAddress;
ptr_wglGetLayerPaletteEntries  optr_wglGetLayerPaletteEntries;
ptr_wglGetPixelFormat          optr_wglGetPixelFormat;
ptr_wglGetProcAddress          optr_wglGetProcAddress;
ptr_wglMakeCurrent             optr_wglMakeCurrent;
ptr_wglRealizeLayerPalette     optr_wglRealizeLayerPalette;
ptr_wglSetLayerPaletteEntries  optr_wglSetLayerPaletteEntries;
ptr_wglSetPixelFormat          optr_wglSetPixelFormat;
ptr_wglShareLists              optr_wglShareLists;
ptr_wglSwapBuffers             optr_wglSwapBuffers;
ptr_wglSwapLayerBuffers        optr_wglSwapLayerBuffers;
ptr_wglSwapMultipleBuffers     optr_wglSwapMultipleBuffers;
ptr_wglUseFontBitmapsW         optr_wglUseFontBitmapsW;
ptr_wglUseFontBitmapsA         optr_wglUseFontBitmapsA;
ptr_wglUseFontOutlinesW        optr_wglUseFontOutlinesW;
ptr_wglUseFontOutlinesA        optr_wglUseFontOutlinesA;

                                    /**         NAMING: End.       **/

                                    /**         IMPLEMENTATION: Start.         **/

GL_EXPORT __stdcall void GLHook_glAccum(GLenum op, GLfloat value)
{
	(*optr_glAccum) (op, value);
}

GL_EXPORT __stdcall void GLHook_glAlphaFunc(GLenum func, GLclampf ref)
{
	(*optr_glAlphaFunc) (func, ref);
}

GL_EXPORT __stdcall GLboolean GLHook_glAreTexturesResident(GLsizei n, const GLuint *textures, GLboolean *residences)
{
	return (*optr_glAreTexturesResident) (n, textures, residences);
}

GL_EXPORT __stdcall void GLHook_glArrayElement(GLint index)
{
	(*optr_glArrayElement) (index);
}

GL_EXPORT __stdcall void GLHook_glBegin(GLenum mode)
{
	(*optr_glBegin) (mode);
}

GL_EXPORT __stdcall void GLHook_glBitmap(GLsizei width, GLsizei height, GLfloat xorig, GLfloat yorig, GLfloat xmove, GLfloat ymove, const GLubyte *bitmap)
{
	(*optr_glBitmap) (width, height, xorig, yorig, xmove, ymove, bitmap);
}

GL_EXPORT __stdcall void GLHook_glBlendFunc(GLenum sfactor, GLenum dfactor)
{
	(*optr_glBlendFunc) (sfactor, dfactor);
}

GL_EXPORT __stdcall void GLHook_glCallLists(GLsizei n, GLenum type, const GLvoid *lists)
{
	(*optr_glCallLists) (n, type, lists);
}

GL_EXPORT __stdcall void GLHook_glClear(GLbitfield mask)
{
	(*optr_glClear) (mask);
}

GL_EXPORT __stdcall void GLHook_glClearAccum(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
	(*optr_glClearAccum) (red, green, blue, alpha);
}

GL_EXPORT __stdcall void GLHook_glClearColor(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha)
{
	(*optr_glClearColor) (red, green, blue, alpha);
}

GL_EXPORT __stdcall void GLHook_glClearDepth(GLclampd depth)
{
	(*optr_glClearDepth) (depth);
}

GL_EXPORT __stdcall void GLHook_glClearIndex(GLfloat c)
{
	(*optr_glClearIndex) (c);
}

GL_EXPORT __stdcall void GLHook_glClearStencil(GLint s)
{
	(*optr_glClearStencil) (s);
}

GL_EXPORT __stdcall void GLHook_glClipPlane(GLenum plane, const GLdouble *equation)
{
	(*optr_glClipPlane) (plane, equation);
}

GL_EXPORT __stdcall void GLHook_glColor3b(GLbyte red, GLbyte green, GLbyte blue)
{
	(*optr_glColor3b) ( red,  green,  blue);
}

GL_EXPORT __stdcall void GLHook_glColor3bv(const GLbyte *v)
{
	(*optr_glColor3bv) ( v);
}

GL_EXPORT __stdcall void GLHook_glColor3d(GLdouble red, GLdouble green, GLdouble blue)
{
	(*optr_glColor3d) (red, green, blue);
}

GL_EXPORT __stdcall void GLHook_glColor3dv(const GLdouble *v)
{
	(*optr_glColor3dv) (v);
}

GL_EXPORT __stdcall void GLHook_glColor3f(GLfloat red, GLfloat green, GLfloat blue)
{
	(*optr_glColor3f) (red, green, blue);
}

GL_EXPORT __stdcall void GLHook_glColor3fv(const GLfloat *v)
{
	(*optr_glColor3fv) (v);
}

GL_EXPORT __stdcall void GLHook_glColor3i(GLint red, GLint green, GLint blue)
{
	(*optr_glColor3i) (red, green, blue);
}

GL_EXPORT __stdcall void GLHook_glColor3iv(const GLint *v)
{
	(*optr_glColor3iv) (v);
}

GL_EXPORT __stdcall void GLHook_glColor3s(GLshort red, GLshort green, GLshort blue)
{
	(*optr_glColor3s) (red, green, blue);
}

GL_EXPORT __stdcall void GLHook_glColor3sv(const GLshort *v)
{
	(*optr_glColor3sv) (v);
}

GL_EXPORT __stdcall void GLHook_glColor3ub(GLubyte red, GLubyte green, GLubyte blue)
{
	(*optr_glColor3ub) (red, green, blue);
}

GL_EXPORT __stdcall void GLHook_glColor3ubv(const GLubyte *v)
{
	(*optr_glColor3ubv) (v);
}

GL_EXPORT __stdcall void GLHook_glColor3ui(GLuint red, GLuint green, GLuint blue)
{
	(*optr_glColor3ui) (red, green, blue);
}

GL_EXPORT __stdcall void GLHook_glColor3uiv(const GLuint *v)
{
	(*optr_glColor3uiv) (v);
}

GL_EXPORT __stdcall void GLHook_glColor3us(GLushort red, GLushort green, GLushort blue)
{
	(*optr_glColor3us) (red, green, blue);
}

GL_EXPORT __stdcall void GLHook_glColor3usv(const GLushort *v)
{
	(*optr_glColor3usv) (v);
}

GL_EXPORT __stdcall void GLHook_glColor4b(GLbyte red, GLbyte green, GLbyte blue, GLbyte alpha)
{
	(*optr_glColor4b) ( red,  green,  blue,  alpha);
}

GL_EXPORT __stdcall void GLHook_glColor4bv(const GLbyte *v)
{
	(*optr_glColor4bv) ( v);
}

GL_EXPORT __stdcall void GLHook_glColor4d(GLdouble red, GLdouble green, GLdouble blue, GLdouble alpha)
{
	(*optr_glColor4d) (red, green, blue, alpha);
}

GL_EXPORT __stdcall void GLHook_glColor4dv(const GLdouble *v)
{
	(*optr_glColor4dv) (v);
}

GL_EXPORT __stdcall void GLHook_glColor4f(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
	(*optr_glColor4f) (red, green, blue, alpha);
}

GL_EXPORT __stdcall void GLHook_glColor4fv(const GLfloat *v)
{
	(*optr_glColor4fv) (v);
}

GL_EXPORT __stdcall void GLHook_glColor4i(GLint red, GLint green, GLint blue, GLint alpha)
{
	(*optr_glColor4i) (red, green, blue, alpha);
}

GL_EXPORT __stdcall void GLHook_glColor4iv(const GLint *v)
{
	(*optr_glColor4iv) (v);
}

GL_EXPORT __stdcall void GLHook_glColor4s(GLshort red, GLshort green, GLshort blue, GLshort alpha)
{
	(*optr_glColor4s) (red, green, blue, alpha);
}

GL_EXPORT __stdcall void GLHook_glColor4sv(const GLshort *v)
{
	(*optr_glColor4sv) (v);
}

GL_EXPORT __stdcall void GLHook_glColor4ubv(const GLubyte *v)
{
	(*optr_glColor4ubv) (v);
}

GL_EXPORT __stdcall void GLHook_glColor4ui(GLuint red, GLuint green, GLuint blue, GLuint alpha)
{
	(*optr_glColor4ui) (red, green, blue, alpha);
}

GL_EXPORT __stdcall void GLHook_glColor4uiv(const GLuint *v)
{
	(*optr_glColor4uiv) (v);
}

GL_EXPORT __stdcall void GLHook_glColor4us(GLushort red, GLushort green, GLushort blue, GLushort alpha)
{
	(*optr_glColor4us) (red, green, blue, alpha);
}

GL_EXPORT __stdcall void GLHook_glColor4usv(const GLushort *v)
{
	(*optr_glColor4usv) (v);
}

GL_EXPORT __stdcall void GLHook_glColorMask(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha)
{
	(*optr_glColorMask) (red, green, blue, alpha);
}

GL_EXPORT __stdcall void GLHook_glColorMaterial(GLenum face, GLenum mode)
{
	(*optr_glColorMaterial) (face, mode);
}

GL_EXPORT __stdcall void GLHook_glColorPointer(GLint size, GLenum type, GLsizei stride, const GLvoid *pointer)
{
	(*optr_glColorPointer) (size, type, stride, pointer);
}

GL_EXPORT __stdcall void GLHook_glCopyPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum type)
{
	(*optr_glCopyPixels) (x, y, width, height, type);
}

GL_EXPORT __stdcall void GLHook_glCopyTexImage1D(GLenum target, GLint level, GLenum internalFormat, GLint x, GLint y, GLsizei width, GLint border)
{
	(*optr_glCopyTexImage1D) (target, level, internalFormat, x, y, width, border);
}

GL_EXPORT __stdcall void GLHook_glCopyTexImage2D(GLenum target, GLint level, GLenum internalFormat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border)
{
	(*optr_glCopyTexImage2D) (target, level, internalFormat, x, y, width, height, border);
}

GL_EXPORT __stdcall void GLHook_glCopyTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width)
{
	(*optr_glCopyTexSubImage1D) (target, level, xoffset, x, y, width);
}

GL_EXPORT __stdcall void GLHook_glCopyTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
	(*optr_glCopyTexSubImage2D) (target, level, xoffset, yoffset, x, y, width, height);
}

GL_EXPORT __stdcall void GLHook_glCullFace(GLenum mode)
{
	(*optr_glCullFace) (mode);
}

GL_EXPORT __stdcall void GLHook_glDeleteLists(GLuint list, GLsizei range)
{
	(*optr_glDeleteLists) (list, range);
}

GL_EXPORT __stdcall void GLHook_glDeleteTextures(GLsizei n, const GLuint *textures)
{
	(*optr_glDeleteTextures) (n, textures);
}

GL_EXPORT __stdcall void GLHook_glDepthFunc(GLenum func)
{
	(*optr_glDepthFunc) (func);
}

GL_EXPORT __stdcall void GLHook_glDepthMask(GLboolean flag)
{
	(*optr_glDepthMask) (flag);
}

GL_EXPORT __stdcall void GLHook_glDepthRange(GLclampd zNear, GLclampd zFar)
{
	(*optr_glDepthRange) (zNear, zFar);
}

GL_EXPORT __stdcall void GLHook_glDisable(GLenum cap)
{
	(*optr_glDisable) (cap);
}

GL_EXPORT __stdcall void GLHook_glDisableClientState(GLenum array)
{
	(*optr_glDisableClientState) (array);
}

GL_EXPORT __stdcall void GLHook_glDrawArrays(GLenum mode, GLint first, GLsizei count)
{
	(*optr_glDrawArrays) (mode, first, count);
}

GL_EXPORT __stdcall void GLHook_glDrawBuffer(GLenum mode)
{
	(*optr_glDrawBuffer) (mode);
}

GL_EXPORT __stdcall void GLHook_glDrawPixels(GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *pixels)
{
	(*optr_glDrawPixels) (width, height, format, type, pixels);
}

GL_EXPORT __stdcall void GLHook_glDebugEntry(DWORD dwArg1, DWORD dwArg2)
{
	(*optr_glDebugEntry) (dwArg1, dwArg2);
}

GL_EXPORT __stdcall void GLHook_glEdgeFlag(GLboolean flag)
{
	(*optr_glEdgeFlag) (flag);
}

GL_EXPORT __stdcall void GLHook_glEdgeFlagv(const GLboolean *flag)
{
	(*optr_glEdgeFlagv) (flag);
}

GL_EXPORT __stdcall void GLHook_glEdgeFlagPointer(GLsizei stride, const GLvoid *pointer)
{
	(*optr_glEdgeFlagPointer) (stride, pointer);
}

GL_EXPORT __stdcall void GLHook_glEnable(GLenum cap)
{
	(*optr_glEnable) (cap);
}

GL_EXPORT __stdcall void GLHook_glEnableClientState(GLenum array)
{
	(*optr_glEnableClientState) (array);
}

GL_EXPORT __stdcall void GLHook_glEvalCoord1d(GLdouble u)
{
	(*optr_glEvalCoord1d) (u);
}

GL_EXPORT __stdcall void GLHook_glEvalCoord1dv(const GLdouble *u)
{
	(*optr_glEvalCoord1dv) (u);
}

GL_EXPORT __stdcall void GLHook_glEvalCoord1f(GLfloat u)
{
	(*optr_glEvalCoord1f) (u);
}

GL_EXPORT __stdcall void GLHook_glEvalCoord1fv(const GLfloat *u)
{
	(*optr_glEvalCoord1fv) (u);
}

GL_EXPORT __stdcall void GLHook_glEvalCoord2d(GLdouble u, GLdouble v)
{
	(*optr_glEvalCoord2d) (u, v);
}

GL_EXPORT __stdcall void GLHook_glEvalCoord2dv(const GLdouble *u)
{
	(*optr_glEvalCoord2dv) (u);
}

GL_EXPORT __stdcall void GLHook_glEvalCoord2f(GLfloat u, GLfloat v)
{
	(*optr_glEvalCoord2f) (u, v);
}

GL_EXPORT __stdcall void GLHook_glEvalCoord2fv(const GLfloat *u)
{
	(*optr_glEvalCoord2fv) (u);
}

GL_EXPORT __stdcall void GLHook_glEvalMesh1(GLenum mode, GLint i1, GLint i2)
{
	(*optr_glEvalMesh1) (mode, i1, i2);
}

GL_EXPORT __stdcall void GLHook_glEvalMesh2(GLenum mode, GLint i1, GLint i2, GLint j1, GLint j2)
{
	(*optr_glEvalMesh2) (mode, i1, i2, j1, j2);
}

GL_EXPORT __stdcall void GLHook_glEvalPoint1(GLint i)
{
	(*optr_glEvalPoint1) (i);
}

GL_EXPORT __stdcall void GLHook_glEvalPoint2(GLint i, GLint j)
{
	(*optr_glEvalPoint2) (i, j);
}

GL_EXPORT __stdcall void GLHook_glFeedbackBuffer(GLsizei size, GLenum type, GLfloat *buffer)
{
	(*optr_glFeedbackBuffer) (size, type, buffer);
}

GL_EXPORT __stdcall void GLHook_glFinish(void)
{
	(*optr_glFinish) ();
}

GL_EXPORT __stdcall void GLHook_glFlush(void)
{
	(*optr_glFlush) ();
}

GL_EXPORT __stdcall void GLHook_glFogf(GLenum pname, GLfloat param)
{
	(*optr_glFogf) (pname, param);
}

GL_EXPORT __stdcall void GLHook_glFogfv(GLenum pname, const GLfloat *params)
{
	(*optr_glFogfv) (pname, params);
}

GL_EXPORT __stdcall void GLHook_glFogi(GLenum pname, GLint param)
{
	(*optr_glFogi) (pname, param);
}

GL_EXPORT __stdcall void GLHook_glFogiv(GLenum pname, const GLint *params)
{
	(*optr_glFogiv) (pname, params);
}

GL_EXPORT __stdcall void GLHook_glFrontFace(GLenum mode)
{
	(*optr_glFrontFace) (mode);
}

GL_EXPORT __stdcall void GLHook_glFrustum(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar)
{
	(*optr_glFrustum) (left, right, bottom, top, zNear, zFar);
}

GL_EXPORT __stdcall void GLHook_glGenTextures(GLsizei n, GLuint *textures)
{
	(*optr_glGenTextures) (n, textures);
}

GL_EXPORT __stdcall void GLHook_glGetBooleanv(GLenum pname, GLboolean *params)
{
	(*optr_glGetBooleanv) (pname, params);
}

GL_EXPORT __stdcall void GLHook_glGetDoublev(GLenum pname, GLboolean *params)
{
	(*optr_glGetDoublev) (pname, params);
}

GL_EXPORT __stdcall void GLHook_glGetFloatv(GLenum pname, GLboolean *params)
{
	(*optr_glGetFloatv) (pname, params);
}

GL_EXPORT __stdcall void GLHook_glGetIntegerv(GLenum pname, GLboolean *params)
{
	(*optr_glGetIntegerv) (pname, params);
}

GL_EXPORT __stdcall void GLHook_glGetClipPlane(GLenum plane, GLdouble *equation)
{
	(*optr_glGetClipPlane) (plane, equation);
}

GL_EXPORT __stdcall GLenum GLHook_glGetError(void)
{
	return (*optr_glGetError) ();
}

GL_EXPORT __stdcall void GLHook_glGetLightfv(GLenum light, GLenum pname, GLfloat *params)
{
	(*optr_glGetLightfv) (light, pname, params);
}

GL_EXPORT __stdcall void GLHook_glGetLightiv(GLenum light, GLenum pname, GLint *params)
{
	(*optr_glGetLightiv) (light, pname, params);
}

GL_EXPORT __stdcall void GLHook_glGetMapdv(GLenum target, GLenum query, GLdouble *v)
{
	(*optr_glGetMapdv) (target, query, v);
}

GL_EXPORT __stdcall void GLHook_glGetMapfv(GLenum target, GLenum query, GLfloat *v)
{
	(*optr_glGetMapfv) (target, query, v);
}

GL_EXPORT __stdcall void GLHook_glGetMapiv(GLenum target, GLenum query, GLint *v)
{
	(*optr_glGetMapiv) (target, query, v);
}

GL_EXPORT __stdcall void GLHook_glGetMaterialfv(GLenum face, GLenum pname, GLfloat *params)
{
	(*optr_glGetMaterialfv) (face, pname, params);
}

GL_EXPORT __stdcall void GLHook_glGetMaterialiv(GLenum face, GLenum pname, GLint *params)
{
	(*optr_glGetMaterialiv) (face, pname, params);
}

GL_EXPORT __stdcall void GLHook_glGetPixelMapfv(GLenum map, GLfloat *values)
{
	(*optr_glGetPixelMapfv) (map, values);
}

GL_EXPORT __stdcall void GLHook_glGetPixelMapuiv(GLenum map, GLuint *values)
{
	(*optr_glGetPixelMapuiv) (map, values);
}

GL_EXPORT __stdcall void GLHook_glGetPixelMapusv(GLenum map, GLushort *values)
{
	(*optr_glGetPixelMapusv) (map, values);
}

GL_EXPORT __stdcall void GLHook_glGetPointerv(GLenum pname, GLvoid **params)
{
	(*optr_glGetPointerv) (pname, params);
}

GL_EXPORT __stdcall void GLHook_glGetPolygonStipple(GLubyte *mask)
{
	(*optr_glGetPolygonStipple) (mask);
}

GL_EXPORT __stdcall const GLubyte* GLHook_glGetString(GLenum name)
{
	return (*optr_glGetString) (name);
}

GL_EXPORT __stdcall void GLHook_glGetTexEnvfv(GLenum target, GLenum pname, GLfloat *params)
{
	(*optr_glGetTexEnvfv) (target, pname, params);
}

GL_EXPORT __stdcall void GLHook_glGetTexEnviv(GLenum target, GLenum pname, GLint *params)
{
	(*optr_glGetTexEnviv) (target, pname, params);
}

GL_EXPORT __stdcall void GLHook_glGetTexGendv(GLenum coord, GLenum pname, GLdouble *params)
{
	(*optr_glGetTexGendv) (coord, pname, params);
}

GL_EXPORT __stdcall void GLHook_glGetTexGenfv(GLenum coord, GLenum pname, GLfloat *params)
{
	(*optr_glGetTexGenfv) (coord, pname, params);
}

GL_EXPORT __stdcall void GLHook_glGetTexGeniv(GLenum coord, GLenum pname, GLint *params)
{
	(*optr_glGetTexGeniv) (coord, pname, params);
}

GL_EXPORT __stdcall void GLHook_glGetTexImage(GLenum target, GLint level, GLenum format, GLenum type, GLvoid *pixels)
{
	(*optr_glGetTexImage) (target, level, format, type, pixels);
}

GL_EXPORT __stdcall void GLHook_glGetTexLevelParameterfv(GLenum target, GLint level, GLenum pname, GLfloat *params)
{
	(*optr_glGetTexLevelParameterfv) (target, level, pname, params);
}

GL_EXPORT __stdcall void GLHook_glGetTexLevelParameteriv(GLenum target, GLint level, GLenum pname, GLint *params)
{
	(*optr_glGetTexLevelParameteriv) (target, level, pname, params);
}

GL_EXPORT __stdcall void GLHook_glGetTexParameterfv(GLenum target, GLenum pname, GLfloat *params)
{
	(*optr_glGetTexParameterfv) (target, pname, params);
}

GL_EXPORT __stdcall void GLHook_glGetTexParameteriv(GLenum target, GLenum pname, GLint *params)
{
	(*optr_glGetTexParameteriv) (target, pname, params);
}

GL_EXPORT __stdcall void GLHook_glHint(GLenum target, GLenum mode)
{
	(*optr_glHint) (target, mode);
}

GL_EXPORT __stdcall void GLHook_glIndexd(GLdouble c)
{
	(*optr_glIndexd) (c);
}

GL_EXPORT __stdcall void GLHook_glIndexdv(const GLdouble *c)
{
	(*optr_glIndexdv) (c);
}

GL_EXPORT __stdcall void GLHook_glIndexf(GLfloat c)
{
	(*optr_glIndexf) (c);
}

GL_EXPORT __stdcall void GLHook_glIndexfv(const GLfloat *c)
{
	(*optr_glIndexfv) (c);
}

GL_EXPORT __stdcall void GLHook_glIndexi(GLint c)
{
	(*optr_glIndexi) (c);
}

GL_EXPORT __stdcall void GLHook_glIndexiv(const GLint *c)
{
	(*optr_glIndexiv) (c);
}

GL_EXPORT __stdcall void GLHook_glIndexs(GLshort c)
{
	(*optr_glIndexs) (c);
}

GL_EXPORT __stdcall void GLHook_glIndexsv(const GLshort *c)
{
	(*optr_glIndexsv) (c);
}

GL_EXPORT __stdcall void GLHook_glIndexub(GLubyte c)
{
	(*optr_glIndexub) (c);
}

GL_EXPORT __stdcall void GLHook_glIndexubv(const GLubyte *c)
{
	(*optr_glIndexubv) (c);
}

GL_EXPORT __stdcall void GLHook_glIndexMask(GLuint mask)
{
	(*optr_glIndexMask) (mask);
}

GL_EXPORT __stdcall void GLHook_glIndexPointer(GLenum type, GLsizei stride, const GLvoid *pointer)
{
	(*optr_glIndexPointer) (type, stride, pointer);
}

GL_EXPORT __stdcall void GLHook_glInitNames(void)
{
	(*optr_glInitNames) ();
}

GL_EXPORT __stdcall void GLHook_glInterleavedArrays(GLenum format, GLsizei stride, const GLvoid *pointer)
{
	(*optr_glInterleavedArrays) (format, stride, pointer);
}

GL_EXPORT __stdcall GLboolean GLHook_glIsEnabled(GLenum cap)
{
	return (*optr_glIsEnabled) (cap);
}

GL_EXPORT __stdcall GLboolean GLHook_glIsList(GLuint list)
{
	return (*optr_glIsList) (list);
}

GL_EXPORT __stdcall GLboolean GLHook_glIsTexture(GLuint texture)
{
	return (*optr_glIsTexture) (texture);
}

GL_EXPORT __stdcall void GLHook_glLightf(GLenum light, GLenum pname, GLfloat param)
{
	(*optr_glLightf) (light, pname, param);
}

GL_EXPORT __stdcall void GLHook_glLightfv(GLenum light, GLenum pname, const GLfloat *params)
{
	(*optr_glLightfv) (light, pname, params);
}

GL_EXPORT __stdcall void GLHook_glLighti(GLenum light, GLenum pname, GLint param)
{
	(*optr_glLighti) (light, pname, param);
}

GL_EXPORT __stdcall void GLHook_glLightiv(GLenum light, GLenum pname, const GLint *params)
{
	(*optr_glLightiv) (light, pname, params);
}

GL_EXPORT __stdcall void GLHook_glLightModelf(GLenum pname, GLfloat *param)
{
	(*optr_glLightModelf) (pname, param);
}

GL_EXPORT __stdcall void GLHook_glLightModelfv(GLenum pname, const GLfloat *params)
{
	(*optr_glLightModelfv) (pname, params);
}

GL_EXPORT __stdcall void GLHook_glLightModeli(GLenum pname, GLint param)
{
	(*optr_glLightModeli) (pname, param);
}

GL_EXPORT __stdcall void GLHook_glLightModeliv(GLenum pname, const GLint *params)
{
	(*optr_glLightModeliv) (pname, params);
}

GL_EXPORT __stdcall void GLHook_glLineStipple(GLint factor, GLushort pattern)
{
	(*optr_glLineStipple) (factor, pattern);
}

GL_EXPORT __stdcall void GLHook_glLineWidth(GLfloat width)
{
	(*optr_glLineWidth) (width);
}

GL_EXPORT __stdcall void GLHook_glListBase(GLuint base)
{
	(*optr_glListBase) (base);
}

GL_EXPORT __stdcall void GLHook_glLoadIdentity(void)
{
	(*optr_glLoadIdentity) ();
}

GL_EXPORT __stdcall void GLHook_glLoadMatrixd(const GLdouble *m)
{
	(*optr_glLoadMatrixd) (m);
}

GL_EXPORT __stdcall void GLHook_glLoadMatrixf(const GLfloat *m)
{
	(*optr_glLoadMatrixf) (m);
}

GL_EXPORT __stdcall void GLHook_glLoadName(GLuint name)
{
	(*optr_glLoadName) (name);
}

GL_EXPORT __stdcall void GLHook_glLogicOp(GLenum opcode)
{
	(*optr_glLogicOp) (opcode);
}

GL_EXPORT __stdcall void GLHook_glMap1d(GLenum target, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble *points)
{
	(*optr_glMap1d) (target, u1, u2, stride, order, points);
}

GL_EXPORT __stdcall void GLHook_glMap1f(GLenum target, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat *points)
{
	(*optr_glMap1f) (target, u1, u2, stride, order, points);
}

GL_EXPORT __stdcall void GLHook_glMap2d(GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble *points)
{
	(*optr_glMap2d) (target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}

GL_EXPORT __stdcall void GLHook_glMap2f(GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat *points)
{
	(*optr_glMap2f) (target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}

GL_EXPORT __stdcall void GLHook_glMapGrid1d(GLint un, GLdouble u1, GLdouble u2)
{
	(*optr_glMapGrid1d) (un, u1, u2);
}

GL_EXPORT __stdcall void GLHook_glMapGrid1f(GLint un, GLfloat u1, GLfloat u2)
{
	(*optr_glMapGrid1f) (un, u1, u2);
}

GL_EXPORT __stdcall void GLHook_glMapGrid2d(GLint un, GLdouble u1, GLdouble u2, GLint vn, GLdouble v1, GLdouble v2)
{
	(*optr_glMapGrid2d) (un, u1, u2, vn, v1, v2);
}

GL_EXPORT __stdcall void GLHook_glMapGrid2f(GLint un, GLfloat u1, GLfloat u2, GLint vn, GLfloat v1, GLfloat v2)
{
	(*optr_glMapGrid2f) (un, u1, u2, vn, v1, v2);
}

GL_EXPORT __stdcall void GLHook_glMaterialf(GLenum face, GLenum pname, GLfloat param)
{
	(*optr_glMaterialf) (face, pname, param);
}

GL_EXPORT __stdcall void GLHook_glMaterialfv(GLenum face, GLenum pname, const GLfloat *params)
{
	(*optr_glMaterialfv) (face, pname, params);
}

GL_EXPORT __stdcall void GLHook_glMateriali(GLenum face, GLenum pname, GLint param)
{
	(*optr_glMateriali) (face, pname, param);
}

GL_EXPORT __stdcall void GLHook_glMaterialiv(GLenum face, GLenum pname, const GLint *params)
{
	(*optr_glMaterialiv) (face, pname, params);
}

GL_EXPORT __stdcall void GLHook_glMatrixMode(GLenum mode)
{
	(*optr_glMatrixMode) (mode);
}

GL_EXPORT __stdcall void GLHook_glMultMatrixd(const GLdouble *m)
{
	(*optr_glMultMatrixd) (m);
}

GL_EXPORT __stdcall void GLHook_glMultMatrixf(const GLdouble *m)
{
	(*optr_glMultMatrixf) (m);
}

GL_EXPORT __stdcall void GLHook_glNormal3b(GLbyte nx, GLbyte ny, GLbyte nz)
{
	(*optr_glNormal3b) ( nx,  ny,  nz);
}

GL_EXPORT __stdcall void GLHook_glNormal3bv(const GLbyte *v)
{
	(*optr_glNormal3bv) ( v);
}

GL_EXPORT __stdcall void GLHook_glNormal3d(GLdouble nx, GLdouble ny, GLdouble nz)
{
	(*optr_glNormal3d) (nx, ny, nz);
}

GL_EXPORT __stdcall void GLHook_glNormal3dv(const GLdouble *v)
{
	(*optr_glNormal3dv) (v);
}

GL_EXPORT __stdcall void GLHook_glNormal3f(GLfloat nx, GLfloat ny, GLfloat nz)
{
	(*optr_glNormal3f) (nx, ny, nz);
}

GL_EXPORT __stdcall void GLHook_glNormal3fv(const GLfloat *v)
{
	(*optr_glNormal3fv) (v);
}

GL_EXPORT __stdcall void GLHook_glNormal3i(GLint nx, GLint ny, GLint nz)
{
	(*optr_glNormal3i) (nx, ny, nz);
}

GL_EXPORT __stdcall void GLHook_glNormal3iv(const GLint *v)
{
	(*optr_glNormal3iv) (v);
}

GL_EXPORT __stdcall void GLHook_glNormal3s(GLshort nx, GLshort ny, GLshort nz)
{
	(*optr_glNormal3s) (nx, ny, nz);
}

GL_EXPORT __stdcall void GLHook_glNormal3sv(const GLshort *v)
{
	(*optr_glNormal3sv) (v);
}

GL_EXPORT __stdcall void GLHook_glNormalPointer(GLenum type, GLsizei stride, const GLvoid *pointer)
{
	(*optr_glNormalPointer) (type, stride, pointer);
}

GL_EXPORT __stdcall void GLHook_glOrtho(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar)
{
	(*optr_glOrtho) (left, right, bottom, top, zNear, zFar);
}

GL_EXPORT __stdcall void GLHook_glPassThrough(GLfloat token)
{
	(*optr_glPassThrough) (token);
}

GL_EXPORT __stdcall void GLHook_glPixelMapfv(GLenum map, GLsizei mapsize, const GLfloat *values)
{
	(*optr_glPixelMapfv) (map, mapsize, values);
}

GL_EXPORT __stdcall void GLHook_glPixelMapuiv(GLenum map, GLsizei mapsize, const GLuint *values)
{
	(*optr_glPixelMapuiv) (map, mapsize, values);
}

GL_EXPORT __stdcall void GLHook_glPixelMapusv(GLenum map, GLsizei mapsize, const GLushort *values)
{
	(*optr_glPixelMapusv) (map, mapsize, values);
}

GL_EXPORT __stdcall void GLHook_glPixelStoref(GLenum pname, GLfloat param)
{
	(*optr_glPixelStoref) (pname, param);
}

GL_EXPORT __stdcall void GLHook_glPixelStorei(GLenum pname, GLint para)
{
	(*optr_glPixelStorei) (pname, para);
}

GL_EXPORT __stdcall void GLHook_glPixelTransferf(GLenum pname, GLfloat param)
{
	(*optr_glPixelTransferf) (pname, param);
}

GL_EXPORT __stdcall void GLHook_glPixelTransferi(GLenum pname, GLint param)
{
	(*optr_glPixelTransferi) (pname, param);
}

GL_EXPORT __stdcall void GLHook_glPixelZoom(GLfloat xfactor, GLfloat yfactor)
{
	(*optr_glPixelZoom) (xfactor, yfactor);
}

GL_EXPORT __stdcall void GLHook_glPointSize(GLfloat size)
{
	(*optr_glPointSize) (size);
}

GL_EXPORT __stdcall void GLHook_glPolygonMode(GLenum face, GLenum mode)
{
	(*optr_glPolygonMode) (face, mode);
}

GL_EXPORT __stdcall void GLHook_glPolygonOffset(GLfloat factor, GLfloat units)
{
	(*optr_glPolygonOffset) (factor, units);
}

GL_EXPORT __stdcall void GLHook_glPolygonStipple(const GLubyte *mask)
{
	(*optr_glPolygonStipple) (mask);
}

GL_EXPORT __stdcall void GLHook_glPopAttrib(void)
{
	(*optr_glPopAttrib) ();
}

GL_EXPORT __stdcall void GLHook_glPopClientAttrib(void)
{
	(*optr_glPopClientAttrib) ();
}

GL_EXPORT __stdcall void GLHook_glPopName(void)
{
	(*optr_glPopName) ();
}

GL_EXPORT __stdcall void GLHook_glPrioritizeTextures(GLsizei n, const GLuint *textures, const GLclampf *priorities)
{
	(*optr_glPrioritizeTextures) (n, textures, priorities);
}

GL_EXPORT __stdcall void GLHook_glPushAttrib(GLbitfield mask)
{
	(*optr_glPushAttrib) (mask);
}

GL_EXPORT __stdcall void GLHook_glPushClientAttrib(GLbitfield mask)
{
	(*optr_glPushClientAttrib) (mask);
}

GL_EXPORT __stdcall void GLHook_glPushMatrix(void)
{
	(*optr_glPushMatrix) ();
}

GL_EXPORT __stdcall void GLHook_glPushName(GLuint name)
{
	(*optr_glPushName) (name);
}

GL_EXPORT __stdcall void GLHook_glRasterPos2d(GLdouble x, GLdouble y)
{
	(*optr_glRasterPos2d) (x, y);
}

GL_EXPORT __stdcall void GLHook_glRasterPos2dv(const GLdouble *v)
{
	(*optr_glRasterPos2dv) (v);
}

GL_EXPORT __stdcall void GLHook_glRasterPos2f(GLfloat x, GLfloat y)
{
	(*optr_glRasterPos2f) (x, y);
}

GL_EXPORT __stdcall void GLHook_glRasterPos2fv(const GLfloat *v)
{
	(*optr_glRasterPos2fv) (v);
}

GL_EXPORT __stdcall void GLHook_glRasterPos2i(GLint x, GLint y)
{
	(*optr_glRasterPos2i) (x, y);
}

GL_EXPORT __stdcall void GLHook_glRasterPos2iv(const GLint *v)
{
	(*optr_glRasterPos2iv) (v);
}

GL_EXPORT __stdcall void GLHook_glRasterPos2s(GLshort x, GLshort y)
{
	(*optr_glRasterPos2s) (x, y);
}

GL_EXPORT __stdcall void GLHook_glRasterPos2sv(const GLshort *v)
{
	(*optr_glRasterPos2sv) (v);
}

GL_EXPORT __stdcall void GLHook_glRasterPos3d(GLdouble x, GLdouble y, GLdouble z)
{
	(*optr_glRasterPos3d) (x, y, z);
}

GL_EXPORT __stdcall void GLHook_glRasterPos3dv(const GLdouble *v)
{
	(*optr_glRasterPos3dv) (v);
}

GL_EXPORT __stdcall void GLHook_glRasterPos3f(GLfloat x, GLfloat y, GLfloat z)
{
	(*optr_glRasterPos3f) (x, y, z);
}

GL_EXPORT __stdcall void GLHook_glRasterPos3fv(const GLfloat *v)
{
	(*optr_glRasterPos3fv) (v);
}

GL_EXPORT __stdcall void GLHook_glRasterPos3i(GLint x, GLint y, GLint z)
{
	(*optr_glRasterPos3i) (x, y, z);
}

GL_EXPORT __stdcall void GLHook_glRasterPos3iv(const GLint *v)
{
	(*optr_glRasterPos3iv) (v);
}

GL_EXPORT __stdcall void GLHook_glRasterPos3s(GLshort x, GLshort y, GLshort z)
{
	(*optr_glRasterPos3s) (x, y, z);
}

GL_EXPORT __stdcall void GLHook_glRasterPos3sv(const GLshort *v)
{
	(*optr_glRasterPos3sv) (v);
}

GL_EXPORT __stdcall void GLHook_glRasterPos4d(GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
	(*optr_glRasterPos4d) (x, y, z, w);
}

GL_EXPORT __stdcall void GLHook_glRasterPos4dv(const GLdouble *v)
{
	(*optr_glRasterPos4dv) (v);
}

GL_EXPORT __stdcall void GLHook_glRasterPos4f(GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
	(*optr_glRasterPos4f) (x, y, z, w);
}

GL_EXPORT __stdcall void GLHook_glRasterPos4fv(const GLfloat *v)
{
	(*optr_glRasterPos4fv) (v);
}

GL_EXPORT __stdcall void GLHook_glRasterPos4i(GLint x, GLint y, GLint z, GLint w)
{
	(*optr_glRasterPos4i) (x, y, z, w);
}

GL_EXPORT __stdcall void GLHook_glRasterPos4iv(const GLint *v)
{
	(*optr_glRasterPos4iv) (v);
}

GL_EXPORT __stdcall void GLHook_glRasterPos4s(GLshort x, GLshort y, GLshort z, GLshort w)
{
	(*optr_glRasterPos4s) (x, y, z, w);
}

GL_EXPORT __stdcall void GLHook_glRasterPos4sv(const GLshort *v)
{
	(*optr_glRasterPos4sv) (v);
}

GL_EXPORT __stdcall void GLHook_glReadBuffer(GLenum mode)
{
	(*optr_glReadBuffer) (mode);
}

GL_EXPORT __stdcall void GLHook_glReadPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid *pixels)
{
	(*optr_glReadPixels) (x, y, width, height, format, type, pixels);
}

GL_EXPORT __stdcall void GLHook_glRectd(GLdouble x1, GLdouble y1, GLdouble x2, GLdouble y2)
{
	(*optr_glRectd) (x1, y1, x2, y2);
}

GL_EXPORT __stdcall void GLHook_glRectdv(const GLdouble *v1, const GLdouble *v2)
{
	(*optr_glRectdv) (v1, v2);
}

GL_EXPORT __stdcall void GLHook_glRectf(GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2)
{
	(*optr_glRectf) (x1, y1, x2, y2);
}

GL_EXPORT __stdcall void GLHook_glRectfv(const GLfloat *v1, const GLfloat *v2)
{
	(*optr_glRectfv) (v1, v2);
}

GL_EXPORT __stdcall void GLHook_glRecti(GLint x1, GLint y1, GLint x2, GLint y2)
{
	(*optr_glRecti) (x1, y1, x2, y2);
}

GL_EXPORT __stdcall void GLHook_glRectiv(const GLint *v1, const GLint *v2)
{
	(*optr_glRectiv) (v1, v2);
}

GL_EXPORT __stdcall void GLHook_glRects(GLshort x1, GLshort y1, GLshort x2, GLshort y2)
{
	(*optr_glRects) (x1, y1, x2, y2);
}

GL_EXPORT __stdcall void GLHook_glRectsv(const GLshort *v1, const GLshort *v2)
{
	(*optr_glRectsv) (v1, v2);
}

GL_EXPORT __stdcall GLint GLHook_glRenderMode(GLenum mode)
{
	return (*optr_glRenderMode) (mode);
}

GL_EXPORT __stdcall void GLHook_glRotated(GLdouble angle, GLdouble x, GLdouble y, GLdouble z)
{
	(*optr_glRotated) (angle, x, y, z);
}

GL_EXPORT __stdcall void GLHook_glRotatef(GLfloat angle, GLfloat x, GLfloat y, GLfloat z)
{
	(*optr_glRotatef) (angle, x, y, z);
}

GL_EXPORT __stdcall void GLHook_glScaled(GLdouble x, GLdouble y, GLdouble z)
{
	(*optr_glScaled) (x, y, z);
}

GL_EXPORT __stdcall void GLHook_glScalef(GLfloat x, GLfloat y, GLfloat z)
{
	(*optr_glScalef) (x, y, z);
}

GL_EXPORT __stdcall void GLHook_glScissor(GLint x, GLint y, GLsizei width, GLsizei height)
{
	(*optr_glScissor) (x, y, width, height);
}

GL_EXPORT __stdcall void GLHook_glSelectBuffer(GLsizei size, GLuint *buffer)
{
	(*optr_glSelectBuffer) (size, buffer);
}

GL_EXPORT __stdcall void GLHook_glShadeModel(GLenum mode)
{
	(*optr_glShadeModel) (mode);
}

GL_EXPORT __stdcall void GLHook_glStencilFunc(GLenum func, GLint ref, GLuint mask)
{
	(*optr_glStencilFunc) (func, ref, mask);
}

GL_EXPORT __stdcall void GLHook_glStencilMask(GLuint mask)
{
	(*optr_glStencilMask) (mask);
}

GL_EXPORT __stdcall void GLHook_glStencilOp(GLenum fail, GLenum zfail, GLenum zpass)
{
	(*optr_glStencilOp) (fail, zfail, zpass);
}

GL_EXPORT __stdcall void GLHook_glTexCoord1d(GLdouble s)
{
	(*optr_glTexCoord1d) (s);
}

GL_EXPORT __stdcall void GLHook_glTexCoord1dv(const GLdouble *v)
{
	(*optr_glTexCoord1dv) (v);
}

GL_EXPORT __stdcall void GLHook_glTexCoord1f(GLfloat s)
{
	(*optr_glTexCoord1f) (s);
}

GL_EXPORT __stdcall void GLHook_glTexCoord1fv(const GLfloat *v)
{
	(*optr_glTexCoord1fv) (v);
}

GL_EXPORT __stdcall void GLHook_glTexCoord1i(GLint s)
{
	(*optr_glTexCoord1i) (s);
}

GL_EXPORT __stdcall void GLHook_glTexCoord1iv(const GLint *v)
{
	(*optr_glTexCoord1iv) (v);
}

GL_EXPORT __stdcall void GLHook_glTexCoord1s(GLshort s)
{
	(*optr_glTexCoord1s) (s);
}

GL_EXPORT __stdcall void GLHook_glTexCoord1sv(const GLshort *v)
{
	(*optr_glTexCoord1sv) (v);
}

GL_EXPORT __stdcall void GLHook_glTexCoord2d(GLdouble s, GLdouble t)
{
	(*optr_glTexCoord2d) (s, t);
}

GL_EXPORT __stdcall void GLHook_glTexCoord2dv(const GLdouble *v)
{
	(*optr_glTexCoord2dv) (v);
}

GL_EXPORT __stdcall void GLHook_glTexCoord2fv(const GLfloat *v)
{
	(*optr_glTexCoord2fv) (v);
}

GL_EXPORT __stdcall void GLHook_glTexCoord2i(GLint s, GLint t)
{
	(*optr_glTexCoord2i) (s, t);
}

GL_EXPORT __stdcall void GLHook_glTexCoord2iv(const GLint *v)
{
	(*optr_glTexCoord2iv) (v);
}

GL_EXPORT __stdcall void GLHook_glTexCoord2s(GLshort s, GLshort t)
{
	(*optr_glTexCoord2s) (s, t);
}

GL_EXPORT __stdcall void GLHook_glTexCoord2sv(const GLshort *v)
{
	(*optr_glTexCoord2sv) (v);
}

GL_EXPORT __stdcall void GLHook_glTexCoord3d(GLdouble s, GLdouble t, GLdouble r)
{
	(*optr_glTexCoord3d) (s, t, r);
}

GL_EXPORT __stdcall void GLHook_glTexCoord3dv(const GLdouble *v)
{
	(*optr_glTexCoord3dv) (v);
}

GL_EXPORT __stdcall void GLHook_glTexCoord3f(GLfloat s, GLfloat t, GLfloat r)
{
	(*optr_glTexCoord3f) (s, t, r);
}

GL_EXPORT __stdcall void GLHook_glTexCoord3fv(const GLfloat *v)
{
	(*optr_glTexCoord3fv) (v);
}

GL_EXPORT __stdcall void GLHook_glTexCoord3i(GLint s, GLint t, GLint r)
{
	(*optr_glTexCoord3i) (s, t, r);
}

GL_EXPORT __stdcall void GLHook_glTexCoord3iv(const GLint *v)
{
	(*optr_glTexCoord3iv) (v);
}

GL_EXPORT __stdcall void GLHook_glTexCoord3s(GLshort s, GLshort t, GLshort r)
{
	(*optr_glTexCoord3s) (s, t, r);
}

GL_EXPORT __stdcall void GLHook_glTexCoord3sv(const GLshort *v)
{
	(*optr_glTexCoord3sv) (v);
}

GL_EXPORT __stdcall void GLHook_glTexCoord4d(GLdouble s, GLdouble t, GLdouble r, GLdouble q)
{
	(*optr_glTexCoord4d) (s, t, r, q);
}

GL_EXPORT __stdcall void GLHook_glTexCoord4dv(const GLdouble *v)
{
	(*optr_glTexCoord4dv) (v);
}

GL_EXPORT __stdcall void GLHook_glTexCoord4f(GLfloat s, GLfloat t, GLfloat r, GLfloat q)
{
	(*optr_glTexCoord4f) (s, t, r, q);
}

GL_EXPORT __stdcall void GLHook_glTexCoord4fv(const GLfloat *v)
{
	(*optr_glTexCoord4fv) (v);
}

GL_EXPORT __stdcall void GLHook_glTexCoord4i(GLint s, GLint t, GLint r, GLint q)
{
	(*optr_glTexCoord4i) (s, t, r, q);
}

GL_EXPORT __stdcall void GLHook_glTexCoord4iv(const GLint *v)
{
	(*optr_glTexCoord4iv) (v);
}

GL_EXPORT __stdcall void GLHook_glTexCoord4s(GLshort s, GLshort t, GLshort r, GLshort q)
{
	(*optr_glTexCoord4s) (s, t, r, q);
}

GL_EXPORT __stdcall void GLHook_glTexCoord4sv(const GLshort *v)
{
	(*optr_glTexCoord4sv) (v);
}

GL_EXPORT __stdcall void GLHook_glTexCoordPointer(GLint size, GLenum type, GLsizei stride, const GLvoid *pointer)
{
	(*optr_glTexCoordPointer) (size, type, stride, pointer);
}

GL_EXPORT __stdcall void GLHook_glTexEnvf(GLenum target, GLenum pname, GLfloat param)
{
	(*optr_glTexEnvf) (target, pname, param);
}

GL_EXPORT __stdcall void GLHook_glTexEnvfv(GLenum target, GLenum pname, const GLfloat *params)
{
	(*optr_glTexEnvfv) (target, pname, params);
}

GL_EXPORT __stdcall void GLHook_glTexEnvi(GLenum target, GLenum pname, GLint param)
{
	(*optr_glTexEnvi) (target, pname, param);
}

GL_EXPORT __stdcall void GLHook_glTexEnviv(GLenum target, GLenum pname, const GLint *params)
{
	(*optr_glTexEnviv) (target, pname, params);
}

GL_EXPORT __stdcall void GLHook_glTexGend(GLenum coord, GLenum pname, GLdouble param)
{
	(*optr_glTexGend) (coord, pname, param);
}

GL_EXPORT __stdcall void GLHook_glTexGendv(GLenum coord, GLenum pname, const GLdouble *params)
{
	(*optr_glTexGendv) (coord, pname, params);
}

GL_EXPORT __stdcall void GLHook_glTexGenf(GLenum coord, GLenum pname, GLfloat param)
{
	(*optr_glTexGenf) (coord, pname, param);
}

GL_EXPORT __stdcall void GLHook_glTexGenfv(GLenum coord, GLenum pname, const GLfloat *params)
{
	(*optr_glTexGenfv) (coord, pname, params);
}

GL_EXPORT __stdcall void GLHook_glTexGeni(GLenum coord, GLenum pname, GLint param)
{
	(*optr_glTexGeni) (coord, pname, param);
}

GL_EXPORT __stdcall void GLHook_glTexGeniv(GLenum coord, GLenum pname, const GLint *params)
{
	(*optr_glTexGeniv) (coord, pname, params);
}

GL_EXPORT __stdcall void GLHook_glTexImage1D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLint format, GLenum type, const GLvoid *pixels)
{
	(*optr_glTexImage1D) (target, level, internalformat, width, border, format, type, pixels);
}

GL_EXPORT __stdcall void GLHook_glTexImage2D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLint format, GLenum type, const GLvoid *pixels)
{
	(*optr_glTexImage2D) (target, level, internalformat, width, height, border, format, type, pixels);
}

GL_EXPORT __stdcall void GLHook_glTexParameterf(GLenum target, GLenum pname, GLfloat param)
{
	(*optr_glTexParameterf) (target, pname, param);
}

GL_EXPORT __stdcall void GLHook_glTexParameterfv(GLenum target, GLenum pname, const GLfloat *params)
{
	(*optr_glTexParameterfv) (target, pname, params);
}

GL_EXPORT __stdcall void GLHook_glTexParameteri(GLenum target, GLenum pname, GLint param)
{
	(*optr_glTexParameteri) (target, pname, param);
}

GL_EXPORT __stdcall void GLHook_glTexParameteriv(GLenum target, GLenum pname, const GLint *params)
{
	(*optr_glTexParameteriv) (target, pname, params);
}

GL_EXPORT __stdcall void GLHook_glTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const GLvoid *pixels)
{
	(*optr_glTexSubImage1D) (target, level, xoffset, width, format, type, pixels);
}

GL_EXPORT __stdcall void GLHook_glTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type,const GLvoid *pixels)
{
	(*optr_glTexSubImage2D) (target, level, xoffset, yoffset, width, height, format, type,pixels);
}

GL_EXPORT __stdcall void GLHook_glTranslated(GLdouble x, GLdouble y, GLdouble z)
{
	(*optr_glTranslated) (x, y, z);
}

GL_EXPORT __stdcall void GLHook_glVertex2d(GLdouble x, GLdouble y)
{
	(*optr_glVertex2d) (x, y);
}

GL_EXPORT __stdcall void GLHook_glVertex2dv(const GLdouble *v)
{
	(*optr_glVertex2dv) (v);
}

GL_EXPORT __stdcall void GLHook_glVertex2fv(const GLfloat *v)
{
	(*optr_glVertex2fv) (v);
}

GL_EXPORT __stdcall void GLHook_glVertex2iv(const GLint *v)
{
	(*optr_glVertex2iv) (v);
}

GL_EXPORT __stdcall void GLHook_glVertex2s(GLshort x, GLshort y)
{
	(*optr_glVertex2s) (x, y);
}

GL_EXPORT __stdcall void GLHook_glVertex2sv(const GLshort *v)
{
	(*optr_glVertex2sv) (v);
}

GL_EXPORT __stdcall void GLHook_glVertex3d(GLdouble x, GLdouble y, GLdouble z)
{
	(*optr_glVertex3d) (x, y, z);
}

GL_EXPORT __stdcall void GLHook_glVertex3dv(const GLdouble *v)
{
	(*optr_glVertex3dv) (v);
}

GL_EXPORT __stdcall void GLHook_glVertex3f(GLfloat x, GLfloat y, GLfloat z)
{
	(*optr_glVertex3f) (x, y, z);
}

GL_EXPORT __stdcall void GLHook_glVertex3fv(const GLfloat *v)
{
	(*optr_glVertex3fv) (v);
}

GL_EXPORT __stdcall void GLHook_glVertex3i(GLint x, GLint y, GLint z)
{
	(*optr_glVertex3i) (x, y, z);
}

GL_EXPORT __stdcall void GLHook_glVertex3iv(const GLint *v)
{
	(*optr_glVertex3iv) (v);
}

GL_EXPORT __stdcall void GLHook_glVertex3s(GLshort x, GLshort y, GLshort z)
{
	(*optr_glVertex3s) (x, y, z);
}

GL_EXPORT __stdcall void GLHook_glVertex3sv(const GLshort *v)
{
	(*optr_glVertex3sv) (v);
}

GL_EXPORT __stdcall void GLHook_glVertex4d(GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
	(*optr_glVertex4d) (x, y, z, w);
}

GL_EXPORT __stdcall void GLHook_glVertex4dv(const GLdouble *v)
{
	(*optr_glVertex4dv) (v);
}

GL_EXPORT __stdcall void GLHook_glVertex4f(GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
	(*optr_glVertex4f) (x, y, z, w);
}

GL_EXPORT __stdcall void GLHook_glVertex4fv(const GLfloat *v)
{
	(*optr_glVertex4fv) (v);
}

GL_EXPORT __stdcall void GLHook_glVertex4i(GLint x, GLint y, GLint z, GLint w)
{
	(*optr_glVertex4i) (x, y, z, w);
}

GL_EXPORT __stdcall void GLHook_glVertex4iv(const GLint *v)
{
	(*optr_glVertex4iv) (v);
}

GL_EXPORT __stdcall void GLHook_glVertex4s(GLshort x, GLshort y, GLshort z, GLshort w)
{
	(*optr_glVertex4s) (x, y, z, w);
}

GL_EXPORT __stdcall void GLHook_glVertex4sv(const GLshort *v)
{
	(*optr_glVertex4sv) (v);
}

GL_EXPORT __stdcall void GLHook_glViewport(GLint x, GLint y, GLsizei width, GLsizei height)
{
	(*optr_glViewport) (x, y, width, height);
}

GL_EXPORT __stdcall int GLHook_wglChoosePixelFormat(HDC hdc, const PIXELFORMATDESCRIPTOR *ppfd)
{
	return (*optr_wglChoosePixelFormat) (hdc, ppfd);
}

GL_EXPORT __stdcall HGLRC GLHook_wglCreateContext(HDC hdc)
{
	return (*optr_wglCreateContext) (hdc);
}

GL_EXPORT __stdcall HGLRC GLHook_wglCreateLayerContext(HDC hdc, int iLayerPlane)
{
	return (*optr_wglCreateLayerContext) (hdc, iLayerPlane);
}

GL_EXPORT __stdcall BOOL GLHook_wglCopyContext(HGLRC hglrcSrc, HGLRC hglrcDst, UINT mask)
{
	return (*optr_wglCopyContext) (hglrcSrc, hglrcDst,  mask);
}

GL_EXPORT __stdcall BOOL GLHook_wglDeleteContext(HGLRC hglrc)
{
	return (*optr_wglDeleteContext) (hglrc);
}

GL_EXPORT __stdcall BOOL GLHook_wglDescribeLayerPlane(HDC hdc, int iPixelFormat, int iLayerPlane, UINT nBytes, LPLAYERPLANEDESCRIPTOR plpd)
{
	return (*optr_wglDescribeLayerPlane) (hdc, iPixelFormat, iLayerPlane,  nBytes, plpd);
}

GL_EXPORT __stdcall int GLHook_wglDescribePixelFormat(HDC hdc, int iPixelFormat, UINT nBytes, LPPIXELFORMATDESCRIPTOR ppfd)
{
	return (*optr_wglDescribePixelFormat) (hdc, iPixelFormat,  nBytes,  ppfd);
}

GL_EXPORT __stdcall HGLRC GLHook_wglGetCurrentContext(void)
{
	return (*optr_wglGetCurrentContext) ();
}

GL_EXPORT __stdcall HDC GLHook_wglGetCurrentDC(void)
{
	return (*optr_wglGetCurrentDC) ();
}

GL_EXPORT __stdcall PROC GLHook_wglGetDefaultProcAddress(LPCSTR lpszProc)
{
	return (*optr_wglGetDefaultProcAddress) (lpszProc);
}

GL_EXPORT __stdcall int GLHook_wglGetLayerPaletteEntries(HDC hdc, int iLayerPlane, int iStart, int cEntries, COLORREF *pcr)
{
	return (*optr_wglGetLayerPaletteEntries) (hdc, iLayerPlane, iStart, cEntries, pcr);
}

GL_EXPORT __stdcall int GLHook_wglGetPixelFormat(HDC hdc)
{
	return (*optr_wglGetPixelFormat) (hdc);
}

GL_EXPORT __stdcall BOOL GLHook_wglMakeCurrent(HDC hdc, HGLRC hglrc)
{
	return (*optr_wglMakeCurrent) (hdc, hglrc);
}

GL_EXPORT __stdcall BOOL GLHook_wglRealizeLayerPalette(HDC hdc, int iLayerPlane, BOOL bRealize)
{
	return (*optr_wglRealizeLayerPalette) (hdc, iLayerPlane, bRealize);
}

GL_EXPORT __stdcall int GLHook_wglSetLayerPaletteEntries(HDC hdc, int iLayerPlane, int iStart, int cEntries, const COLORREF *pcr)
{
	return (*optr_wglSetLayerPaletteEntries) (hdc, iLayerPlane, iStart, cEntries, pcr);
}

GL_EXPORT __stdcall BOOL GLHook_wglSetPixelFormat(HDC hdc, int iPixelFormat, const PIXELFORMATDESCRIPTOR *ppfd)
{
	return (*optr_wglSetPixelFormat) (hdc, iPixelFormat, ppfd);
}

GL_EXPORT __stdcall BOOL GLHook_wglShareLists(HGLRC hglrc1, HGLRC hglrc2)
{
	return (*optr_wglShareLists) (hglrc1, hglrc2);
}

GL_EXPORT __stdcall BOOL GLHook_wglSwapLayerBuffers(HDC hdc, UINT fuPlanes)
{
	return (*optr_wglSwapLayerBuffers) (hdc,  fuPlanes);
}

GL_EXPORT __stdcall void GLHook_wglSwapMultipleBuffers(DWORD dwArg1, DWORD dwArg2)
{
	(*optr_wglSwapMultipleBuffers) (dwArg1, dwArg2);
}

GL_EXPORT __stdcall BOOL GLHook_wglUseFontBitmapsW(HDC hdc, DWORD first, DWORD count, DWORD listBase)
{
	return (*optr_wglUseFontBitmapsW) (hdc, first, count, listBase);
}

GL_EXPORT __stdcall BOOL GLHook_wglUseFontBitmapsA(HDC hdc, DWORD first, DWORD count, DWORD listBase)
{
	return (*optr_wglUseFontBitmapsA) (hdc, first, count, listBase);
}

GL_EXPORT __stdcall BOOL GLHook_wglUseFontOutlinesW(HDC hdc, DWORD first, DWORD count, DWORD listBase, FLOAT deviation, FLOAT extrusion, int format, LPGLYPHMETRICSFLOAT lpgmf)
{
	return (*optr_wglUseFontOutlinesW) (hdc, first, count, listBase, deviation, extrusion, format, lpgmf);
}

GL_EXPORT __stdcall BOOL GLHook_wglUseFontOutlinesA(HDC hdc, DWORD first, DWORD count, DWORD listBase, FLOAT deviation, FLOAT extrusion, int format, LPGLYPHMETRICSFLOAT lpgmf)
{
	return (*optr_wglUseFontOutlinesA) (hdc, first, count, listBase, deviation, extrusion, format, lpgmf);
}


GL_EXPORT bool __stdcall Initialize(void)
{
    if (!OriginalGL)
    {
        char Root[MAX_PATH];
        GetSystemDirectory(Root, MAX_PATH);
        strcat(Root, "\\opengl32.dll");

        OriginalGL = LoadLibraryA(Root);
        if (!OriginalGL) return false;

        if ((optr_glAccum = (ptr_glAccum) GetProcAddress(OriginalGL, "glAccum")) == NULL)
        {
            return false;
        }

        if ((optr_glAlphaFunc = (ptr_glAlphaFunc) GetProcAddress(OriginalGL, "glAlphaFunc")) == NULL)
        {
            return false;
        }

        if ((optr_glAreTexturesResident = (ptr_glAreTexturesResident) GetProcAddress(OriginalGL, "glAreTexturesResident")) == NULL)
        {
            return false;
        }

        if ((optr_glArrayElement = (ptr_glArrayElement) GetProcAddress(OriginalGL, "glArrayElement")) == NULL)
        {
            return false;
        }

        if ((optr_glBegin = (ptr_glBegin) GetProcAddress(OriginalGL, "glBegin")) == NULL)
        {
            return false;
        }

        if ((optr_glBindTexture = (ptr_glBindTexture) GetProcAddress(OriginalGL, "glBindTexture")) == NULL)
        {
            return false;
        }

        if ((optr_glBitmap = (ptr_glBitmap) GetProcAddress(OriginalGL, "glBitmap")) == NULL)
        {
            return false;
        }

        if ((optr_glBlendFunc = (ptr_glBlendFunc) GetProcAddress(OriginalGL, "glBlendFunc")) == NULL)
        {
            return false;
        }

        if ((optr_glCallList = (ptr_glCallList) GetProcAddress(OriginalGL, "glCallList")) == NULL)
        {
            return false;
        }

        if ((optr_glCallLists = (ptr_glCallLists) GetProcAddress(OriginalGL, "glCallLists")) == NULL)
        {
            return false;
        }

        if ((optr_glClear = (ptr_glClear) GetProcAddress(OriginalGL, "glClear")) == NULL)
        {
            return false;
        }

        if ((optr_glClearAccum = (ptr_glClearAccum) GetProcAddress(OriginalGL, "glClearAccum")) == NULL)
        {
            return false;
        }

        if ((optr_glClearColor = (ptr_glClearColor) GetProcAddress(OriginalGL, "glClearColor")) == NULL)
        {
            return false;
        }

        if ((optr_glClearDepth = (ptr_glClearDepth) GetProcAddress(OriginalGL, "glClearDepth")) == NULL)
        {
            return false;
        }

        if ((optr_glClearIndex = (ptr_glClearIndex) GetProcAddress(OriginalGL, "glClearIndex")) == NULL)
        {
            return false;
        }

        if ((optr_glClearStencil = (ptr_glClearStencil) GetProcAddress(OriginalGL, "glClearStencil")) == NULL)
        {
            return false;
        }

        if ((optr_glClipPlane = (ptr_glClipPlane) GetProcAddress(OriginalGL, "glClipPlane")) == NULL)
        {
            return false;
        }

        if ((optr_glColor3b = (ptr_glColor3b) GetProcAddress(OriginalGL, "glColor3b")) == NULL)
        {
            return false;
        }

        if ((optr_glColor3bv = (ptr_glColor3bv) GetProcAddress(OriginalGL, "glColor3bv")) == NULL)
        {
            return false;
        }

        if ((optr_glColor3d = (ptr_glColor3d) GetProcAddress(OriginalGL, "glColor3d")) == NULL)
        {
            return false;
        }

        if ((optr_glColor3dv = (ptr_glColor3dv) GetProcAddress(OriginalGL, "glColor3dv")) == NULL)
        {
            return false;
        }

        if ((optr_glColor3f = (ptr_glColor3f) GetProcAddress(OriginalGL, "glColor3f")) == NULL)
        {
            return false;
        }

        if ((optr_glColor3fv = (ptr_glColor3fv) GetProcAddress(OriginalGL, "glColor3fv")) == NULL)
        {
            return false;
        }

        if ((optr_glColor3i = (ptr_glColor3i) GetProcAddress(OriginalGL, "glColor3i")) == NULL)
        {
            return false;
        }

        if ((optr_glColor3iv = (ptr_glColor3iv) GetProcAddress(OriginalGL, "glColor3iv")) == NULL)
        {
            return false;
        }

        if ((optr_glColor3s = (ptr_glColor3s) GetProcAddress(OriginalGL, "glColor3s")) == NULL)
        {
            return false;
        }

        if ((optr_glColor3sv = (ptr_glColor3sv) GetProcAddress(OriginalGL, "glColor3sv")) == NULL)
        {
            return false;
        }

        if ((optr_glColor3ub = (ptr_glColor3ub) GetProcAddress(OriginalGL, "glColor3ub")) == NULL)
        {
            return false;
        }

        if ((optr_glColor3ubv = (ptr_glColor3ubv) GetProcAddress(OriginalGL, "glColor3ubv")) == NULL)
        {
            return false;
        }

        if ((optr_glColor3ui = (ptr_glColor3ui) GetProcAddress(OriginalGL, "glColor3ui")) == NULL)
        {
            return false;
        }

        if ((optr_glColor3uiv = (ptr_glColor3uiv) GetProcAddress(OriginalGL, "glColor3uiv")) == NULL)
        {
            return false;
        }

        if ((optr_glColor3us = (ptr_glColor3us) GetProcAddress(OriginalGL, "glColor3us")) == NULL)
        {
            return false;
        }

        if ((optr_glColor3usv = (ptr_glColor3usv) GetProcAddress(OriginalGL, "glColor3usv")) == NULL)
        {
            return false;
        }

        if ((optr_glColor4b = (ptr_glColor4b) GetProcAddress(OriginalGL, "glColor4b")) == NULL)
        {
            return false;
        }

        if ((optr_glColor4bv = (ptr_glColor4bv) GetProcAddress(OriginalGL, "glColor4bv")) == NULL)
        {
            return false;
        }

        if ((optr_glColor4d = (ptr_glColor4d) GetProcAddress(OriginalGL, "glColor4d")) == NULL)
        {
            return false;
        }

        if ((optr_glColor4dv = (ptr_glColor4dv) GetProcAddress(OriginalGL, "glColor4dv")) == NULL)
        {
            return false;
        }

        if ((optr_glColor4f = (ptr_glColor4f) GetProcAddress(OriginalGL, "glColor4f")) == NULL)
        {
            return false;
        }

        if ((optr_glColor4fv = (ptr_glColor4fv) GetProcAddress(OriginalGL, "glColor4fv")) == NULL)
        {
            return false;
        }

        if ((optr_glColor4i = (ptr_glColor4i) GetProcAddress(OriginalGL, "glColor4i")) == NULL)
        {
            return false;
        }

        if ((optr_glColor4iv = (ptr_glColor4iv) GetProcAddress(OriginalGL, "glColor4iv")) == NULL)
        {
            return false;
        }

        if ((optr_glColor4s = (ptr_glColor4s) GetProcAddress(OriginalGL, "glColor4s")) == NULL)
        {
            return false;
        }

        if ((optr_glColor4sv = (ptr_glColor4sv) GetProcAddress(OriginalGL, "glColor4sv")) == NULL)
        {
            return false;
        }

        if ((optr_glColor4ub = (ptr_glColor4ub) GetProcAddress(OriginalGL, "glColor4ub")) == NULL)
        {
            return false;
        }

        if ((optr_glColor4ubv = (ptr_glColor4ubv) GetProcAddress(OriginalGL, "glColor4ubv")) == NULL)
        {
            return false;
        }

        if ((optr_glColor4ui = (ptr_glColor4ui) GetProcAddress(OriginalGL, "glColor4ui")) == NULL)
        {
            return false;
        }

        if ((optr_glColor4uiv = (ptr_glColor4uiv) GetProcAddress(OriginalGL, "glColor4uiv")) == NULL)
        {
            return false;
        }

        if ((optr_glColor4us = (ptr_glColor4us) GetProcAddress(OriginalGL, "glColor4us")) == NULL)
        {
            return false;
        }

        if ((optr_glColor4usv = (ptr_glColor4usv) GetProcAddress(OriginalGL, "glColor4usv")) == NULL)
        {
            return false;
        }

        if ((optr_glColorMask = (ptr_glColorMask) GetProcAddress(OriginalGL, "glColorMask")) == NULL)
        {
            return false;
        }

        if ((optr_glColorMaterial = (ptr_glColorMaterial) GetProcAddress(OriginalGL, "glColorMaterial")) == NULL)
        {
            return false;
        }

        if ((optr_glColorPointer = (ptr_glColorPointer) GetProcAddress(OriginalGL, "glColorPointer")) == NULL)
        {
            return false;
        }

        if ((optr_glCopyPixels = (ptr_glCopyPixels) GetProcAddress(OriginalGL, "glCopyPixels")) == NULL)
        {
            return false;
        }

        if ((optr_glCopyTexImage1D = (ptr_glCopyTexImage1D) GetProcAddress(OriginalGL, "glCopyTexImage1D")) == NULL)
        {
            return false;
        }

        if ((optr_glCopyTexImage2D = (ptr_glCopyTexImage2D) GetProcAddress(OriginalGL, "glCopyTexImage2D")) == NULL)
        {
            return false;
        }

        if ((optr_glCopyTexSubImage1D = (ptr_glCopyTexSubImage1D) GetProcAddress(OriginalGL, "glCopyTexSubImage1D")) == NULL)
        {
            return false;
        }

        if ((optr_glCopyTexSubImage2D = (ptr_glCopyTexSubImage2D) GetProcAddress(OriginalGL, "glCopyTexSubImage2D")) == NULL)
        {
            return false;
        }

        if ((optr_glCullFace = (ptr_glCullFace) GetProcAddress(OriginalGL, "glCullFace")) == NULL)
        {
            return false;
        }

        if ((optr_glDeleteLists = (ptr_glDeleteLists) GetProcAddress(OriginalGL, "glDeleteLists")) == NULL)
        {
            return false;
        }

        if ((optr_glDeleteTextures = (ptr_glDeleteTextures) GetProcAddress(OriginalGL, "glDeleteTextures")) == NULL)
        {
            return false;
        }

        if ((optr_glDepthFunc = (ptr_glDepthFunc) GetProcAddress(OriginalGL, "glDepthFunc")) == NULL)
        {
            return false;
        }

        if ((optr_glDepthMask = (ptr_glDepthMask) GetProcAddress(OriginalGL, "glDepthMask")) == NULL)
        {
            return false;
        }

        if ((optr_glDepthRange = (ptr_glDepthRange) GetProcAddress(OriginalGL, "glDepthRange")) == NULL)
        {
            return false;
        }

        if ((optr_glDisable = (ptr_glDisable) GetProcAddress(OriginalGL, "glDisable")) == NULL)
        {
            return false;
        }

        if ((optr_glDisableClientState = (ptr_glDisableClientState) GetProcAddress(OriginalGL, "glDisableClientState")) == NULL)
        {
            return false;
        }

        if ((optr_glDrawArrays = (ptr_glDrawArrays) GetProcAddress(OriginalGL, "glDrawArrays")) == NULL)
        {
            return false;
        }

        if ((optr_glDrawBuffer = (ptr_glDrawBuffer) GetProcAddress(OriginalGL, "glDrawBuffer")) == NULL)
        {
            return false;
        }

        if ((optr_glDrawElements = (ptr_glDrawElements) GetProcAddress(OriginalGL, "glDrawElements")) == NULL)
        {
            return false;
        }

        if ((optr_glDrawPixels = (ptr_glDrawPixels) GetProcAddress(OriginalGL, "glDrawPixels")) == NULL)
        {
            return false;
        }

        if ((optr_glDebugEntry = (ptr_glDebugEntry) GetProcAddress(OriginalGL, "glDebugEntry")) == NULL)
        {
            return false;
        }

        if ((optr_glEdgeFlag = (ptr_glEdgeFlag) GetProcAddress(OriginalGL, "glEdgeFlag")) == NULL)
        {
            return false;
        }

        if ((optr_glEdgeFlagv = (ptr_glEdgeFlagv) GetProcAddress(OriginalGL, "glEdgeFlagv")) == NULL)
        {
            return false;
        }

        if ((optr_glEdgeFlagPointer = (ptr_glEdgeFlagPointer) GetProcAddress(OriginalGL, "glEdgeFlagPointer")) == NULL)
        {
            return false;
        }

        if ((optr_glEnable = (ptr_glEnable) GetProcAddress(OriginalGL, "glEnable")) == NULL)
        {
            return false;
        }

        if ((optr_glEnableClientState = (ptr_glEnableClientState) GetProcAddress(OriginalGL, "glEnableClientState")) == NULL)
        {
            return false;
        }

        if ((optr_glEnd = (ptr_glEnd) GetProcAddress(OriginalGL, "glEnd")) == NULL)
        {
            return false;
        }

        if ((optr_glEndList = (ptr_glEndList) GetProcAddress(OriginalGL, "glEndList")) == NULL)
        {
            return false;
        }

        if ((optr_glEvalCoord1d = (ptr_glEvalCoord1d) GetProcAddress(OriginalGL, "glEvalCoord1d")) == NULL)
        {
            return false;
        }

        if ((optr_glEvalCoord1dv = (ptr_glEvalCoord1dv) GetProcAddress(OriginalGL, "glEvalCoord1dv")) == NULL)
        {
            return false;
        }

        if ((optr_glEvalCoord1f = (ptr_glEvalCoord1f) GetProcAddress(OriginalGL, "glEvalCoord1f")) == NULL)
        {
            return false;
        }

        if ((optr_glEvalCoord1fv = (ptr_glEvalCoord1fv) GetProcAddress(OriginalGL, "glEvalCoord1fv")) == NULL)
        {
            return false;
        }

        if ((optr_glEvalCoord2d = (ptr_glEvalCoord2d) GetProcAddress(OriginalGL, "glEvalCoord2d")) == NULL)
        {
            return false;
        }

        if ((optr_glEvalCoord2dv = (ptr_glEvalCoord2dv) GetProcAddress(OriginalGL, "glEvalCoord2dv")) == NULL)
        {
            return false;
        }

        if ((optr_glEvalCoord2f = (ptr_glEvalCoord2f) GetProcAddress(OriginalGL, "glEvalCoord2f")) == NULL)
        {
            return false;
        }

        if ((optr_glEvalCoord2fv = (ptr_glEvalCoord2fv) GetProcAddress(OriginalGL, "glEvalCoord2fv")) == NULL)
        {
            return false;
        }

        if ((optr_glEvalMesh1 = (ptr_glEvalMesh1) GetProcAddress(OriginalGL, "glEvalMesh1")) == NULL)
        {
            return false;
        }

        if ((optr_glEvalMesh2 = (ptr_glEvalMesh2) GetProcAddress(OriginalGL, "glEvalMesh2")) == NULL)
        {
            return false;
        }

        if ((optr_glEvalPoint1 = (ptr_glEvalPoint1) GetProcAddress(OriginalGL, "glEvalPoint1")) == NULL)
        {
            return false;
        }

        if ((optr_glEvalPoint2 = (ptr_glEvalPoint2) GetProcAddress(OriginalGL, "glEvalPoint2")) == NULL)
        {
            return false;
        }

        if ((optr_glFeedbackBuffer = (ptr_glFeedbackBuffer) GetProcAddress(OriginalGL, "glFeedbackBuffer")) == NULL)
        {
            return false;
        }

        if ((optr_glFinish = (ptr_glFinish) GetProcAddress(OriginalGL, "glFinish")) == NULL)
        {
            return false;
        }

        if ((optr_glFlush = (ptr_glFlush) GetProcAddress(OriginalGL, "glFlush")) == NULL)
        {
            return false;
        }

        if ((optr_glFogf = (ptr_glFogf) GetProcAddress(OriginalGL, "glFogf")) == NULL)
        {
            return false;
        }

        if ((optr_glFogfv = (ptr_glFogfv) GetProcAddress(OriginalGL, "glFogfv")) == NULL)
        {
            return false;
        }

        if ((optr_glFogi = (ptr_glFogi) GetProcAddress(OriginalGL, "glFogi")) == NULL)
        {
            return false;
        }

        if ((optr_glFogiv = (ptr_glFogiv) GetProcAddress(OriginalGL, "glFogiv")) == NULL)
        {
            return false;
        }

        if ((optr_glFrontFace = (ptr_glFrontFace) GetProcAddress(OriginalGL, "glFrontFace")) == NULL)
        {
            return false;
        }

        if ((optr_glFrustum = (ptr_glFrustum) GetProcAddress(OriginalGL, "glFrustum")) == NULL)
        {
            return false;
        }

        if ((optr_glGenLists = (ptr_glGenLists) GetProcAddress(OriginalGL, "glGenLists")) == NULL)
        {
            return false;
        }

        if ((optr_glGenTextures = (ptr_glGenTextures) GetProcAddress(OriginalGL, "glGenTextures")) == NULL)
        {
            return false;
        }

        if ((optr_glGetBooleanv = (ptr_glGetBooleanv) GetProcAddress(OriginalGL, "glGetBooleanv")) == NULL)
        {
            return false;
        }

        if ((optr_glGetDoublev = (ptr_glGetDoublev) GetProcAddress(OriginalGL, "glGetDoublev")) == NULL)
        {
            return false;
        }

        if ((optr_glGetFloatv = (ptr_glGetFloatv) GetProcAddress(OriginalGL, "glGetFloatv")) == NULL)
        {
            return false;
        }

        if ((optr_glGetIntegerv = (ptr_glGetIntegerv) GetProcAddress(OriginalGL, "glGetIntegerv")) == NULL)
        {
            return false;
        }

        if ((optr_glGetClipPlane = (ptr_glGetClipPlane) GetProcAddress(OriginalGL, "glGetClipPlane")) == NULL)
        {
            return false;
        }

        if ((optr_glGetError = (ptr_glGetError) GetProcAddress(OriginalGL, "glGetError")) == NULL)
        {
            return false;
        }

        if ((optr_glGetLightfv = (ptr_glGetLightfv) GetProcAddress(OriginalGL, "glGetLightfv")) == NULL)
        {
            return false;
        }

        if ((optr_glGetLightiv = (ptr_glGetLightiv) GetProcAddress(OriginalGL, "glGetLightiv")) == NULL)
        {
            return false;
        }

        if ((optr_glGetMapdv = (ptr_glGetMapdv) GetProcAddress(OriginalGL, "glGetMapdv")) == NULL)
        {
            return false;
        }

        if ((optr_glGetMapfv = (ptr_glGetMapfv) GetProcAddress(OriginalGL, "glGetMapfv")) == NULL)
        {
            return false;
        }

        if ((optr_glGetMapiv = (ptr_glGetMapiv) GetProcAddress(OriginalGL, "glGetMapiv")) == NULL)
        {
            return false;
        }

        if ((optr_glGetMaterialfv = (ptr_glGetMaterialfv) GetProcAddress(OriginalGL, "glGetMaterialfv")) == NULL)
        {
            return false;
        }

        if ((optr_glGetMaterialiv = (ptr_glGetMaterialiv) GetProcAddress(OriginalGL, "glGetMaterialiv")) == NULL)
        {
            return false;
        }

        if ((optr_glGetPixelMapfv = (ptr_glGetPixelMapfv) GetProcAddress(OriginalGL, "glGetPixelMapfv")) == NULL)
        {
            return false;
        }

        if ((optr_glGetPixelMapuiv = (ptr_glGetPixelMapuiv) GetProcAddress(OriginalGL, "glGetPixelMapuiv")) == NULL)
        {
            return false;
        }

        if ((optr_glGetPixelMapusv = (ptr_glGetPixelMapusv) GetProcAddress(OriginalGL, "glGetPixelMapusv")) == NULL)
        {
            return false;
        }

        if ((optr_glGetPointerv = (ptr_glGetPointerv) GetProcAddress(OriginalGL, "glGetPointerv")) == NULL)
        {
            return false;
        }

        if ((optr_glGetPolygonStipple = (ptr_glGetPolygonStipple) GetProcAddress(OriginalGL, "glGetPolygonStipple")) == NULL)
        {
            return false;
        }

        if ((optr_glGetString = (ptr_glGetString) GetProcAddress(OriginalGL, "glGetString")) == NULL)
        {
            return false;
        }

        if ((optr_glGetTexEnvfv = (ptr_glGetTexEnvfv) GetProcAddress(OriginalGL, "glGetTexEnvfv")) == NULL)
        {
            return false;
        }

        if ((optr_glGetTexEnviv = (ptr_glGetTexEnviv) GetProcAddress(OriginalGL, "glGetTexEnviv")) == NULL)
        {
            return false;
        }

        if ((optr_glGetTexGendv = (ptr_glGetTexGendv) GetProcAddress(OriginalGL, "glGetTexGendv")) == NULL)
        {
            return false;
        }

        if ((optr_glGetTexGenfv = (ptr_glGetTexGenfv) GetProcAddress(OriginalGL, "glGetTexGenfv")) == NULL)
        {
            return false;
        }

        if ((optr_glGetTexGeniv = (ptr_glGetTexGeniv) GetProcAddress(OriginalGL, "glGetTexGeniv")) == NULL)
        {
            return false;
        }

        if ((optr_glGetTexImage = (ptr_glGetTexImage) GetProcAddress(OriginalGL, "glGetTexImage")) == NULL)
        {
            return false;
        }

        if ((optr_glGetTexLevelParameterfv = (ptr_glGetTexLevelParameterfv) GetProcAddress(OriginalGL, "glGetTexLevelParameterfv")) == NULL)
        {
            return false;
        }

        if ((optr_glGetTexLevelParameteriv = (ptr_glGetTexLevelParameteriv) GetProcAddress(OriginalGL, "glGetTexLevelParameteriv")) == NULL)
        {
            return false;
        }

        if ((optr_glGetTexParameterfv = (ptr_glGetTexParameterfv) GetProcAddress(OriginalGL, "glGetTexParameterfv")) == NULL)
        {
            return false;
        }

        if ((optr_glGetTexParameteriv = (ptr_glGetTexParameteriv) GetProcAddress(OriginalGL, "glGetTexParameteriv")) == NULL)
        {
            return false;
        }

        if ((optr_glHint = (ptr_glHint) GetProcAddress(OriginalGL, "glHint")) == NULL)
        {
            return false;
        }

        if ((optr_glIndexd = (ptr_glIndexd) GetProcAddress(OriginalGL, "glIndexd")) == NULL)
        {
            return false;
        }

        if ((optr_glIndexdv = (ptr_glIndexdv) GetProcAddress(OriginalGL, "glIndexdv")) == NULL)
        {
            return false;
        }

        if ((optr_glIndexf = (ptr_glIndexf) GetProcAddress(OriginalGL, "glIndexf")) == NULL)
        {
            return false;
        }

        if ((optr_glIndexfv = (ptr_glIndexfv) GetProcAddress(OriginalGL, "glIndexfv")) == NULL)
        {
            return false;
        }

        if ((optr_glIndexi = (ptr_glIndexi) GetProcAddress(OriginalGL, "glIndexi")) == NULL)
        {
            return false;
        }

        if ((optr_glIndexiv = (ptr_glIndexiv) GetProcAddress(OriginalGL, "glIndexiv")) == NULL)
        {
            return false;
        }

        if ((optr_glIndexs = (ptr_glIndexs) GetProcAddress(OriginalGL, "glIndexs")) == NULL)
        {
            return false;
        }

        if ((optr_glIndexsv = (ptr_glIndexsv) GetProcAddress(OriginalGL, "glIndexsv")) == NULL)
        {
            return false;
        }

        if ((optr_glIndexub = (ptr_glIndexub) GetProcAddress(OriginalGL, "glIndexub")) == NULL)
        {
            return false;
        }

        if ((optr_glIndexubv = (ptr_glIndexubv) GetProcAddress(OriginalGL, "glIndexubv")) == NULL)
        {
            return false;
        }

        if ((optr_glIndexMask = (ptr_glIndexMask) GetProcAddress(OriginalGL, "glIndexMask")) == NULL)
        {
            return false;
        }

        if ((optr_glIndexPointer = (ptr_glIndexPointer) GetProcAddress(OriginalGL, "glIndexPointer")) == NULL)
        {
            return false;
        }

        if ((optr_glInitNames = (ptr_glInitNames) GetProcAddress(OriginalGL, "glInitNames")) == NULL)
        {
            return false;
        }

        if ((optr_glInterleavedArrays = (ptr_glInterleavedArrays) GetProcAddress(OriginalGL, "glInterleavedArrays")) == NULL)
        {
            return false;
        }

        if ((optr_glIsEnabled = (ptr_glIsEnabled) GetProcAddress(OriginalGL, "glIsEnabled")) == NULL)
        {
            return false;
        }

        if ((optr_glIsList = (ptr_glIsList) GetProcAddress(OriginalGL, "glIsList")) == NULL)
        {
            return false;
        }

        if ((optr_glIsTexture = (ptr_glIsTexture) GetProcAddress(OriginalGL, "glIsTexture")) == NULL)
        {
            return false;
        }

        if ((optr_glLightf = (ptr_glLightf) GetProcAddress(OriginalGL, "glLightf")) == NULL)
        {
            return false;
        }

        if ((optr_glLightfv = (ptr_glLightfv) GetProcAddress(OriginalGL, "glLightfv")) == NULL)
        {
            return false;
        }

        if ((optr_glLighti = (ptr_glLighti) GetProcAddress(OriginalGL, "glLighti")) == NULL)
        {
            return false;
        }

        if ((optr_glLightiv = (ptr_glLightiv) GetProcAddress(OriginalGL, "glLightiv")) == NULL)
        {
            return false;
        }

        if ((optr_glLightModelf = (ptr_glLightModelf) GetProcAddress(OriginalGL, "glLightModelf")) == NULL)
        {
            return false;
        }

        if ((optr_glLightModelfv = (ptr_glLightModelfv) GetProcAddress(OriginalGL, "glLightModelfv")) == NULL)
        {
            return false;
        }

        if ((optr_glLightModeli = (ptr_glLightModeli) GetProcAddress(OriginalGL, "glLightModeli")) == NULL)
        {
            return false;
        }

        if ((optr_glLightModeliv = (ptr_glLightModeliv) GetProcAddress(OriginalGL, "glLightModeliv")) == NULL)
        {
            return false;
        }

        if ((optr_glLineStipple = (ptr_glLineStipple) GetProcAddress(OriginalGL, "glLineStipple")) == NULL)
        {
            return false;
        }

        if ((optr_glLineWidth = (ptr_glLineWidth) GetProcAddress(OriginalGL, "glLineWidth")) == NULL)
        {
            return false;
        }

        if ((optr_glListBase = (ptr_glListBase) GetProcAddress(OriginalGL, "glListBase")) == NULL)
        {
            return false;
        }

        if ((optr_glLoadIdentity = (ptr_glLoadIdentity) GetProcAddress(OriginalGL, "glLoadIdentity")) == NULL)
        {
            return false;
        }

        if ((optr_glLoadMatrixd = (ptr_glLoadMatrixd) GetProcAddress(OriginalGL, "glLoadMatrixd")) == NULL)
        {
            return false;
        }

        if ((optr_glLoadMatrixf = (ptr_glLoadMatrixf) GetProcAddress(OriginalGL, "glLoadMatrixf")) == NULL)
        {
            return false;
        }

        if ((optr_glLoadName = (ptr_glLoadName) GetProcAddress(OriginalGL, "glLoadName")) == NULL)
        {
            return false;
        }

        if ((optr_glLogicOp = (ptr_glLogicOp) GetProcAddress(OriginalGL, "glLogicOp")) == NULL)
        {
            return false;
        }

        if ((optr_glMap1d = (ptr_glMap1d) GetProcAddress(OriginalGL, "glMap1d")) == NULL)
        {
            return false;
        }

        if ((optr_glMap1f = (ptr_glMap1f) GetProcAddress(OriginalGL, "glMap1f")) == NULL)
        {
            return false;
        }

        if ((optr_glMap2d = (ptr_glMap2d) GetProcAddress(OriginalGL, "glMap2d")) == NULL)
        {
            return false;
        }

        if ((optr_glMap2f = (ptr_glMap2f) GetProcAddress(OriginalGL, "glMap2f")) == NULL)
        {
            return false;
        }

        if ((optr_glMapGrid1d = (ptr_glMapGrid1d) GetProcAddress(OriginalGL, "glMapGrid1d")) == NULL)
        {
            return false;
        }

        if ((optr_glMapGrid1f = (ptr_glMapGrid1f) GetProcAddress(OriginalGL, "glMapGrid1f")) == NULL)
        {
            return false;
        }

        if ((optr_glMapGrid2d = (ptr_glMapGrid2d) GetProcAddress(OriginalGL, "glMapGrid2d")) == NULL)
        {
            return false;
        }

        if ((optr_glMapGrid2f = (ptr_glMapGrid2f) GetProcAddress(OriginalGL, "glMapGrid2f")) == NULL)
        {
            return false;
        }

        if ((optr_glMaterialf = (ptr_glMaterialf) GetProcAddress(OriginalGL, "glMaterialf")) == NULL)
        {
            return false;
        }

        if ((optr_glMaterialfv = (ptr_glMaterialfv) GetProcAddress(OriginalGL, "glMaterialfv")) == NULL)
        {
            return false;
        }

        if ((optr_glMateriali = (ptr_glMateriali) GetProcAddress(OriginalGL, "glMateriali")) == NULL)
        {
            return false;
        }

        if ((optr_glMaterialiv = (ptr_glMaterialiv) GetProcAddress(OriginalGL, "glMaterialiv")) == NULL)
        {
            return false;
        }

        if ((optr_glMatrixMode = (ptr_glMatrixMode) GetProcAddress(OriginalGL, "glMatrixMode")) == NULL)
        {
            return false;
        }

        if ((optr_glMultMatrixd = (ptr_glMultMatrixd) GetProcAddress(OriginalGL, "glMultMatrixd")) == NULL)
        {
            return false;
        }

        if ((optr_glMultMatrixf = (ptr_glMultMatrixf) GetProcAddress(OriginalGL, "glMultMatrixf")) == NULL)
        {
            return false;
        }

        if ((optr_glNewList = (ptr_glNewList) GetProcAddress(OriginalGL, "glNewList")) == NULL)
        {
            return false;
        }

        if ((optr_glNormal3b = (ptr_glNormal3b) GetProcAddress(OriginalGL, "glNormal3b")) == NULL)
        {
            return false;
        }

        if ((optr_glNormal3bv = (ptr_glNormal3bv) GetProcAddress(OriginalGL, "glNormal3bv")) == NULL)
        {
            return false;
        }

        if ((optr_glNormal3d = (ptr_glNormal3d) GetProcAddress(OriginalGL, "glNormal3d")) == NULL)
        {
            return false;
        }

        if ((optr_glNormal3dv = (ptr_glNormal3dv) GetProcAddress(OriginalGL, "glNormal3dv")) == NULL)
        {
            return false;
        }

        if ((optr_glNormal3f = (ptr_glNormal3f) GetProcAddress(OriginalGL, "glNormal3f")) == NULL)
        {
            return false;
        }

        if ((optr_glNormal3fv = (ptr_glNormal3fv) GetProcAddress(OriginalGL, "glNormal3fv")) == NULL)
        {
            return false;
        }

        if ((optr_glNormal3i = (ptr_glNormal3i) GetProcAddress(OriginalGL, "glNormal3i")) == NULL)
        {
            return false;
        }

        if ((optr_glNormal3iv = (ptr_glNormal3iv) GetProcAddress(OriginalGL, "glNormal3iv")) == NULL)
        {
            return false;
        }

        if ((optr_glNormal3s = (ptr_glNormal3s) GetProcAddress(OriginalGL, "glNormal3s")) == NULL)
        {
            return false;
        }

        if ((optr_glNormal3sv = (ptr_glNormal3sv) GetProcAddress(OriginalGL, "glNormal3sv")) == NULL)
        {
            return false;
        }

        if ((optr_glNormalPointer = (ptr_glNormalPointer) GetProcAddress(OriginalGL, "glNormalPointer")) == NULL)
        {
            return false;
        }

        if ((optr_glOrtho = (ptr_glOrtho) GetProcAddress(OriginalGL, "glOrtho")) == NULL)
        {
            return false;
        }

        if ((optr_glPassThrough = (ptr_glPassThrough) GetProcAddress(OriginalGL, "glPassThrough")) == NULL)
        {
            return false;
        }

        if ((optr_glPixelMapfv = (ptr_glPixelMapfv) GetProcAddress(OriginalGL, "glPixelMapfv")) == NULL)
        {
            return false;
        }

        if ((optr_glPixelMapuiv = (ptr_glPixelMapuiv) GetProcAddress(OriginalGL, "glPixelMapuiv")) == NULL)
        {
            return false;
        }

        if ((optr_glPixelMapusv = (ptr_glPixelMapusv) GetProcAddress(OriginalGL, "glPixelMapusv")) == NULL)
        {
            return false;
        }

        if ((optr_glPixelStoref = (ptr_glPixelStoref) GetProcAddress(OriginalGL, "glPixelStoref")) == NULL)
        {
            return false;
        }

        if ((optr_glPixelStorei = (ptr_glPixelStorei) GetProcAddress(OriginalGL, "glPixelStorei")) == NULL)
        {
            return false;
        }

        if ((optr_glPixelTransferf = (ptr_glPixelTransferf) GetProcAddress(OriginalGL, "glPixelTransferf")) == NULL)
        {
            return false;
        }

        if ((optr_glPixelTransferi = (ptr_glPixelTransferi) GetProcAddress(OriginalGL, "glPixelTransferi")) == NULL)
        {
            return false;
        }

        if ((optr_glPixelZoom = (ptr_glPixelZoom) GetProcAddress(OriginalGL, "glPixelZoom")) == NULL)
        {
            return false;
        }

        if ((optr_glPointSize = (ptr_glPointSize) GetProcAddress(OriginalGL, "glPointSize")) == NULL)
        {
            return false;
        }

        if ((optr_glPolygonMode = (ptr_glPolygonMode) GetProcAddress(OriginalGL, "glPolygonMode")) == NULL)
        {
            return false;
        }

        if ((optr_glPolygonOffset = (ptr_glPolygonOffset) GetProcAddress(OriginalGL, "glPolygonOffset")) == NULL)
        {
            return false;
        }

        if ((optr_glPolygonStipple = (ptr_glPolygonStipple) GetProcAddress(OriginalGL, "glPolygonStipple")) == NULL)
        {
            return false;
        }

        if ((optr_glPopAttrib = (ptr_glPopAttrib) GetProcAddress(OriginalGL, "glPopAttrib")) == NULL)
        {
            return false;
        }

        if ((optr_glPopClientAttrib = (ptr_glPopClientAttrib) GetProcAddress(OriginalGL, "glPopClientAttrib")) == NULL)
        {
            return false;
        }

        if ((optr_glPopMatrix = (ptr_glPopMatrix) GetProcAddress(OriginalGL, "glPopMatrix")) == NULL)
        {
            return false;
        }

        if ((optr_glPopName = (ptr_glPopName) GetProcAddress(OriginalGL, "glPopName")) == NULL)
        {
            return false;
        }

        if ((optr_glPrioritizeTextures = (ptr_glPrioritizeTextures) GetProcAddress(OriginalGL, "glPrioritizeTextures")) == NULL)
        {
            return false;
        }

        if ((optr_glPushAttrib = (ptr_glPushAttrib) GetProcAddress(OriginalGL, "glPushAttrib")) == NULL)
        {
            return false;
        }

        if ((optr_glPushClientAttrib = (ptr_glPushClientAttrib) GetProcAddress(OriginalGL, "glPushClientAttrib")) == NULL)
        {
            return false;
        }

        if ((optr_glPushMatrix = (ptr_glPushMatrix) GetProcAddress(OriginalGL, "glPushMatrix")) == NULL)
        {
            return false;
        }

        if ((optr_glPushName = (ptr_glPushName) GetProcAddress(OriginalGL, "glPushName")) == NULL)
        {
            return false;
        }

        if ((optr_glRasterPos2d = (ptr_glRasterPos2d) GetProcAddress(OriginalGL, "glRasterPos2d")) == NULL)
        {
            return false;
        }

        if ((optr_glRasterPos2dv = (ptr_glRasterPos2dv) GetProcAddress(OriginalGL, "glRasterPos2dv")) == NULL)
        {
            return false;
        }

        if ((optr_glRasterPos2f = (ptr_glRasterPos2f) GetProcAddress(OriginalGL, "glRasterPos2f")) == NULL)
        {
            return false;
        }

        if ((optr_glRasterPos2fv = (ptr_glRasterPos2fv) GetProcAddress(OriginalGL, "glRasterPos2fv")) == NULL)
        {
            return false;
        }

        if ((optr_glRasterPos2i = (ptr_glRasterPos2i) GetProcAddress(OriginalGL, "glRasterPos2i")) == NULL)
        {
            return false;
        }

        if ((optr_glRasterPos2iv = (ptr_glRasterPos2iv) GetProcAddress(OriginalGL, "glRasterPos2iv")) == NULL)
        {
            return false;
        }

        if ((optr_glRasterPos2s = (ptr_glRasterPos2s) GetProcAddress(OriginalGL, "glRasterPos2s")) == NULL)
        {
            return false;
        }

        if ((optr_glRasterPos2sv = (ptr_glRasterPos2sv) GetProcAddress(OriginalGL, "glRasterPos2sv")) == NULL)
        {
            return false;
        }

        if ((optr_glRasterPos3d = (ptr_glRasterPos3d) GetProcAddress(OriginalGL, "glRasterPos3d")) == NULL)
        {
            return false;
        }

        if ((optr_glRasterPos3dv = (ptr_glRasterPos3dv) GetProcAddress(OriginalGL, "glRasterPos3dv")) == NULL)
        {
            return false;
        }

        if ((optr_glRasterPos3f = (ptr_glRasterPos3f) GetProcAddress(OriginalGL, "glRasterPos3f")) == NULL)
        {
            return false;
        }

        if ((optr_glRasterPos3fv = (ptr_glRasterPos3fv) GetProcAddress(OriginalGL, "glRasterPos3fv")) == NULL)
        {
            return false;
        }

        if ((optr_glRasterPos3i = (ptr_glRasterPos3i) GetProcAddress(OriginalGL, "glRasterPos3i")) == NULL)
        {
            return false;
        }

        if ((optr_glRasterPos3iv = (ptr_glRasterPos3iv) GetProcAddress(OriginalGL, "glRasterPos3iv")) == NULL)
        {
            return false;
        }

        if ((optr_glRasterPos3s = (ptr_glRasterPos3s) GetProcAddress(OriginalGL, "glRasterPos3s")) == NULL)
        {
            return false;
        }

        if ((optr_glRasterPos3sv = (ptr_glRasterPos3sv) GetProcAddress(OriginalGL, "glRasterPos3sv")) == NULL)
        {
            return false;
        }

        if ((optr_glRasterPos4d = (ptr_glRasterPos4d) GetProcAddress(OriginalGL, "glRasterPos4d")) == NULL)
        {
            return false;
        }

        if ((optr_glRasterPos4dv = (ptr_glRasterPos4dv) GetProcAddress(OriginalGL, "glRasterPos4dv")) == NULL)
        {
            return false;
        }

        if ((optr_glRasterPos4f = (ptr_glRasterPos4f) GetProcAddress(OriginalGL, "glRasterPos4f")) == NULL)
        {
            return false;
        }

        if ((optr_glRasterPos4fv = (ptr_glRasterPos4fv) GetProcAddress(OriginalGL, "glRasterPos4fv")) == NULL)
        {
            return false;
        }

        if ((optr_glRasterPos4i = (ptr_glRasterPos4i) GetProcAddress(OriginalGL, "glRasterPos4i")) == NULL)
        {
            return false;
        }

        if ((optr_glRasterPos4iv = (ptr_glRasterPos4iv) GetProcAddress(OriginalGL, "glRasterPos4iv")) == NULL)
        {
            return false;
        }

        if ((optr_glRasterPos4s = (ptr_glRasterPos4s) GetProcAddress(OriginalGL, "glRasterPos4s")) == NULL)
        {
            return false;
        }

        if ((optr_glRasterPos4sv = (ptr_glRasterPos4sv) GetProcAddress(OriginalGL, "glRasterPos4sv")) == NULL)
        {
            return false;
        }

        if ((optr_glReadBuffer = (ptr_glReadBuffer) GetProcAddress(OriginalGL, "glReadBuffer")) == NULL)
        {
            return false;
        }

        if ((optr_glReadPixels = (ptr_glReadPixels) GetProcAddress(OriginalGL, "glReadPixels")) == NULL)
        {
            return false;
        }

        if ((optr_glRectd = (ptr_glRectd) GetProcAddress(OriginalGL, "glRectd")) == NULL)
        {
            return false;
        }

        if ((optr_glRectdv = (ptr_glRectdv) GetProcAddress(OriginalGL, "glRectdv")) == NULL)
        {
            return false;
        }

        if ((optr_glRectf = (ptr_glRectf) GetProcAddress(OriginalGL, "glRectf")) == NULL)
        {
            return false;
        }

        if ((optr_glRectfv = (ptr_glRectfv) GetProcAddress(OriginalGL, "glRectfv")) == NULL)
        {
            return false;
        }

        if ((optr_glRecti = (ptr_glRecti) GetProcAddress(OriginalGL, "glRecti")) == NULL)
        {
            return false;
        }

        if ((optr_glRectiv = (ptr_glRectiv) GetProcAddress(OriginalGL, "glRectiv")) == NULL)
        {
            return false;
        }

        if ((optr_glRects = (ptr_glRects) GetProcAddress(OriginalGL, "glRects")) == NULL)
        {
            return false;
        }

        if ((optr_glRectsv = (ptr_glRectsv) GetProcAddress(OriginalGL, "glRectsv")) == NULL)
        {
            return false;
        }

        if ((optr_glRenderMode = (ptr_glRenderMode) GetProcAddress(OriginalGL, "glRenderMode")) == NULL)
        {
            return false;
        }

        if ((optr_glRotated = (ptr_glRotated) GetProcAddress(OriginalGL, "glRotated")) == NULL)
        {
            return false;
        }

        if ((optr_glRotatef = (ptr_glRotatef) GetProcAddress(OriginalGL, "glRotatef")) == NULL)
        {
            return false;
        }

        if ((optr_glScaled = (ptr_glScaled) GetProcAddress(OriginalGL, "glScaled")) == NULL)
        {
            return false;
        }

        if ((optr_glScalef = (ptr_glScalef) GetProcAddress(OriginalGL, "glScalef")) == NULL)
        {
            return false;
        }

        if ((optr_glScissor = (ptr_glScissor) GetProcAddress(OriginalGL, "glScissor")) == NULL)
        {
            return false;
        }

        if ((optr_glSelectBuffer = (ptr_glSelectBuffer) GetProcAddress(OriginalGL, "glSelectBuffer")) == NULL)
        {
            return false;
        }

        if ((optr_glShadeModel = (ptr_glShadeModel) GetProcAddress(OriginalGL, "glShadeModel")) == NULL)
        {
            return false;
        }

        if ((optr_glStencilFunc = (ptr_glStencilFunc) GetProcAddress(OriginalGL, "glStencilFunc")) == NULL)
        {
            return false;
        }

        if ((optr_glStencilMask = (ptr_glStencilMask) GetProcAddress(OriginalGL, "glStencilMask")) == NULL)
        {
            return false;
        }

        if ((optr_glStencilOp = (ptr_glStencilOp) GetProcAddress(OriginalGL, "glStencilOp")) == NULL)
        {
            return false;
        }

        if ((optr_glTexCoord1d = (ptr_glTexCoord1d) GetProcAddress(OriginalGL, "glTexCoord1d")) == NULL)
        {
            return false;
        }

        if ((optr_glTexCoord1dv = (ptr_glTexCoord1dv) GetProcAddress(OriginalGL, "glTexCoord1dv")) == NULL)
        {
            return false;
        }

        if ((optr_glTexCoord1f = (ptr_glTexCoord1f) GetProcAddress(OriginalGL, "glTexCoord1f")) == NULL)
        {
            return false;
        }

        if ((optr_glTexCoord1fv = (ptr_glTexCoord1fv) GetProcAddress(OriginalGL, "glTexCoord1fv")) == NULL)
        {
            return false;
        }

        if ((optr_glTexCoord1i = (ptr_glTexCoord1i) GetProcAddress(OriginalGL, "glTexCoord1i")) == NULL)
        {
            return false;
        }

        if ((optr_glTexCoord1iv = (ptr_glTexCoord1iv) GetProcAddress(OriginalGL, "glTexCoord1iv")) == NULL)
        {
            return false;
        }

        if ((optr_glTexCoord1s = (ptr_glTexCoord1s) GetProcAddress(OriginalGL, "glTexCoord1s")) == NULL)
        {
            return false;
        }

        if ((optr_glTexCoord1sv = (ptr_glTexCoord1sv) GetProcAddress(OriginalGL, "glTexCoord1sv")) == NULL)
        {
            return false;
        }

        if ((optr_glTexCoord2d = (ptr_glTexCoord2d) GetProcAddress(OriginalGL, "glTexCoord2d")) == NULL)
        {
            return false;
        }

        if ((optr_glTexCoord2dv = (ptr_glTexCoord2dv) GetProcAddress(OriginalGL, "glTexCoord2dv")) == NULL)
        {
            return false;
        }

        if ((optr_glTexCoord2f = (ptr_glTexCoord2f) GetProcAddress(OriginalGL, "glTexCoord2f")) == NULL)
        {
            return false;
        }

        if ((optr_glTexCoord2fv = (ptr_glTexCoord2fv) GetProcAddress(OriginalGL, "glTexCoord2fv")) == NULL)
        {
            return false;
        }

        if ((optr_glTexCoord2i = (ptr_glTexCoord2i) GetProcAddress(OriginalGL, "glTexCoord2i")) == NULL)
        {
            return false;
        }

        if ((optr_glTexCoord2iv = (ptr_glTexCoord2iv) GetProcAddress(OriginalGL, "glTexCoord2iv")) == NULL)
        {
            return false;
        }

        if ((optr_glTexCoord2s = (ptr_glTexCoord2s) GetProcAddress(OriginalGL, "glTexCoord2s")) == NULL)
        {
            return false;
        }

        if ((optr_glTexCoord2sv = (ptr_glTexCoord2sv) GetProcAddress(OriginalGL, "glTexCoord2sv")) == NULL)
        {
            return false;
        }

        if ((optr_glTexCoord3d = (ptr_glTexCoord3d) GetProcAddress(OriginalGL, "glTexCoord3d")) == NULL)
        {
            return false;
        }

        if ((optr_glTexCoord3dv = (ptr_glTexCoord3dv) GetProcAddress(OriginalGL, "glTexCoord3dv")) == NULL)
        {
            return false;
        }

        if ((optr_glTexCoord3f = (ptr_glTexCoord3f) GetProcAddress(OriginalGL, "glTexCoord3f")) == NULL)
        {
            return false;
        }

        if ((optr_glTexCoord3fv = (ptr_glTexCoord3fv) GetProcAddress(OriginalGL, "glTexCoord3fv")) == NULL)
        {
            return false;
        }

        if ((optr_glTexCoord3i = (ptr_glTexCoord3i) GetProcAddress(OriginalGL, "glTexCoord3i")) == NULL)
        {
            return false;
        }

        if ((optr_glTexCoord3iv = (ptr_glTexCoord3iv) GetProcAddress(OriginalGL, "glTexCoord3iv")) == NULL)
        {
            return false;
        }

        if ((optr_glTexCoord3s = (ptr_glTexCoord3s) GetProcAddress(OriginalGL, "glTexCoord3s")) == NULL)
        {
            return false;
        }

        if ((optr_glTexCoord3sv = (ptr_glTexCoord3sv) GetProcAddress(OriginalGL, "glTexCoord3sv")) == NULL)
        {
            return false;
        }

        if ((optr_glTexCoord4d = (ptr_glTexCoord4d) GetProcAddress(OriginalGL, "glTexCoord4d")) == NULL)
        {
            return false;
        }

        if ((optr_glTexCoord4dv = (ptr_glTexCoord4dv) GetProcAddress(OriginalGL, "glTexCoord4dv")) == NULL)
        {
            return false;
        }

        if ((optr_glTexCoord4f = (ptr_glTexCoord4f) GetProcAddress(OriginalGL, "glTexCoord4f")) == NULL)
        {
            return false;
        }

        if ((optr_glTexCoord4fv = (ptr_glTexCoord4fv) GetProcAddress(OriginalGL, "glTexCoord4fv")) == NULL)
        {
            return false;
        }

        if ((optr_glTexCoord4i = (ptr_glTexCoord4i) GetProcAddress(OriginalGL, "glTexCoord4i")) == NULL)
        {
            return false;
        }

        if ((optr_glTexCoord4iv = (ptr_glTexCoord4iv) GetProcAddress(OriginalGL, "glTexCoord4iv")) == NULL)
        {
            return false;
        }

        if ((optr_glTexCoord4s = (ptr_glTexCoord4s) GetProcAddress(OriginalGL, "glTexCoord4s")) == NULL)
        {
            return false;
        }

        if ((optr_glTexCoord4sv = (ptr_glTexCoord4sv) GetProcAddress(OriginalGL, "glTexCoord4sv")) == NULL)
        {
            return false;
        }

        if ((optr_glTexCoordPointer = (ptr_glTexCoordPointer) GetProcAddress(OriginalGL, "glTexCoordPointer")) == NULL)
        {
            return false;
        }

        if ((optr_glTexEnvf = (ptr_glTexEnvf) GetProcAddress(OriginalGL, "glTexEnvf")) == NULL)
        {
            return false;
        }

        if ((optr_glTexEnvfv = (ptr_glTexEnvfv) GetProcAddress(OriginalGL, "glTexEnvfv")) == NULL)
        {
            return false;
        }

        if ((optr_glTexEnvi = (ptr_glTexEnvi) GetProcAddress(OriginalGL, "glTexEnvi")) == NULL)
        {
            return false;
        }

        if ((optr_glTexEnviv = (ptr_glTexEnviv) GetProcAddress(OriginalGL, "glTexEnviv")) == NULL)
        {
            return false;
        }

        if ((optr_glTexGend = (ptr_glTexGend) GetProcAddress(OriginalGL, "glTexGend")) == NULL)
        {
            return false;
        }

        if ((optr_glTexGendv = (ptr_glTexGendv) GetProcAddress(OriginalGL, "glTexGendv")) == NULL)
        {
            return false;
        }

        if ((optr_glTexGenf = (ptr_glTexGenf) GetProcAddress(OriginalGL, "glTexGenf")) == NULL)
        {
            return false;
        }

        if ((optr_glTexGenfv = (ptr_glTexGenfv) GetProcAddress(OriginalGL, "glTexGenfv")) == NULL)
        {
            return false;
        }

        if ((optr_glTexGeni = (ptr_glTexGeni) GetProcAddress(OriginalGL, "glTexGeni")) == NULL)
        {
            return false;
        }

        if ((optr_glTexGeniv = (ptr_glTexGeniv) GetProcAddress(OriginalGL, "glTexGeniv")) == NULL)
        {
            return false;
        }

        if ((optr_glTexImage1D = (ptr_glTexImage1D) GetProcAddress(OriginalGL, "glTexImage1D")) == NULL)
        {
            return false;
        }

        if ((optr_glTexImage2D = (ptr_glTexImage2D) GetProcAddress(OriginalGL, "glTexImage2D")) == NULL)
        {
            return false;
        }

        if ((optr_glTexParameterf = (ptr_glTexParameterf) GetProcAddress(OriginalGL, "glTexParameterf")) == NULL)
        {
            return false;
        }

        if ((optr_glTexParameterfv = (ptr_glTexParameterfv) GetProcAddress(OriginalGL, "glTexParameterfv")) == NULL)
        {
            return false;
        }

        if ((optr_glTexParameteri = (ptr_glTexParameteri) GetProcAddress(OriginalGL, "glTexParameteri")) == NULL)
        {
            return false;
        }

        if ((optr_glTexParameteriv = (ptr_glTexParameteriv) GetProcAddress(OriginalGL, "glTexParameteriv")) == NULL)
        {
            return false;
        }

        if ((optr_glTexSubImage1D = (ptr_glTexSubImage1D) GetProcAddress(OriginalGL, "glTexSubImage1D")) == NULL)
        {
            return false;
        }

        if ((optr_glTexSubImage2D = (ptr_glTexSubImage2D) GetProcAddress(OriginalGL, "glTexSubImage2D")) == NULL)
        {
            return false;
        }

        if ((optr_glTranslated = (ptr_glTranslated) GetProcAddress(OriginalGL, "glTranslated")) == NULL)
        {
            return false;
        }

        if ((optr_glTranslatef = (ptr_glTranslatef) GetProcAddress(OriginalGL, "glTranslatef")) == NULL)
        {
            return false;
        }

        if ((optr_glVertex2d = (ptr_glVertex2d) GetProcAddress(OriginalGL, "glVertex2d")) == NULL)
        {
            return false;
        }

        if ((optr_glVertex2dv = (ptr_glVertex2dv) GetProcAddress(OriginalGL, "glVertex2dv")) == NULL)
        {
            return false;
        }

        if ((optr_glVertex2f = (ptr_glVertex2f) GetProcAddress(OriginalGL, "glVertex2f")) == NULL)
        {
            return false;
        }

        if ((optr_glVertex2fv = (ptr_glVertex2fv) GetProcAddress(OriginalGL, "glVertex2fv")) == NULL)
        {
            return false;
        }

        if ((optr_glVertex2i = (ptr_glVertex2i) GetProcAddress(OriginalGL, "glVertex2i")) == NULL)
        {
            return false;
        }

        if ((optr_glVertex2iv = (ptr_glVertex2iv) GetProcAddress(OriginalGL, "glVertex2iv")) == NULL)
        {
            return false;
        }

        if ((optr_glVertex2s = (ptr_glVertex2s) GetProcAddress(OriginalGL, "glVertex2s")) == NULL)
        {
            return false;
        }

        if ((optr_glVertex2sv = (ptr_glVertex2sv) GetProcAddress(OriginalGL, "glVertex2sv")) == NULL)
        {
            return false;
        }

        if ((optr_glVertex3d = (ptr_glVertex3d) GetProcAddress(OriginalGL, "glVertex3d")) == NULL)
        {
            return false;
        }

        if ((optr_glVertex3dv = (ptr_glVertex3dv) GetProcAddress(OriginalGL, "glVertex3dv")) == NULL)
        {
            return false;
        }

        if ((optr_glVertex3f = (ptr_glVertex3f) GetProcAddress(OriginalGL, "glVertex3f")) == NULL)
        {
            return false;
        }

        if ((optr_glVertex3fv = (ptr_glVertex3fv) GetProcAddress(OriginalGL, "glVertex3fv")) == NULL)
        {
            return false;
        }

        if ((optr_glVertex3i = (ptr_glVertex3i) GetProcAddress(OriginalGL, "glVertex3i")) == NULL)
        {
            return false;
        }

        if ((optr_glVertex3iv = (ptr_glVertex3iv) GetProcAddress(OriginalGL, "glVertex3iv")) == NULL)
        {
            return false;
        }

        if ((optr_glVertex3s = (ptr_glVertex3s) GetProcAddress(OriginalGL, "glVertex3s")) == NULL)
        {
            return false;
        }

        if ((optr_glVertex3sv = (ptr_glVertex3sv) GetProcAddress(OriginalGL, "glVertex3sv")) == NULL)
        {
            return false;
        }

        if ((optr_glVertex4d = (ptr_glVertex4d) GetProcAddress(OriginalGL, "glVertex4d")) == NULL)
        {
            return false;
        }

        if ((optr_glVertex4dv = (ptr_glVertex4dv) GetProcAddress(OriginalGL, "glVertex4dv")) == NULL)
        {
            return false;
        }

        if ((optr_glVertex4f = (ptr_glVertex4f) GetProcAddress(OriginalGL, "glVertex4f")) == NULL)
        {
            return false;
        }

        if ((optr_glVertex4fv = (ptr_glVertex4fv) GetProcAddress(OriginalGL, "glVertex4fv")) == NULL)
        {
            return false;
        }

        if ((optr_glVertex4i = (ptr_glVertex4i) GetProcAddress(OriginalGL, "glVertex4i")) == NULL)
        {
            return false;
        }

        if ((optr_glVertex4iv = (ptr_glVertex4iv) GetProcAddress(OriginalGL, "glVertex4iv")) == NULL)
        {
            return false;
        }

        if ((optr_glVertex4s = (ptr_glVertex4s) GetProcAddress(OriginalGL, "glVertex4s")) == NULL)
        {
            return false;
        }

        if ((optr_glVertex4sv = (ptr_glVertex4sv) GetProcAddress(OriginalGL, "glVertex4sv")) == NULL)
        {
            return false;
        }

        if ((optr_glVertexPointer = (ptr_glVertexPointer) GetProcAddress(OriginalGL, "glVertexPointer")) == NULL)
        {
            return false;
        }

        if ((optr_glViewport = (ptr_glViewport) GetProcAddress(OriginalGL, "glViewport")) == NULL)
        {
            return false;
        }

        if ((optr_wglChoosePixelFormat = (ptr_wglChoosePixelFormat) GetProcAddress(OriginalGL, "wglChoosePixelFormat")) == NULL)
        {
            return false;
        }

        if ((optr_wglCreateContext = (ptr_wglCreateContext) GetProcAddress(OriginalGL, "wglCreateContext")) == NULL)
        {
            return false;
        }

        if ((optr_wglCreateLayerContext = (ptr_wglCreateLayerContext) GetProcAddress(OriginalGL, "wglCreateLayerContext")) == NULL)
        {
            return false;
        }

        if ((optr_wglCopyContext = (ptr_wglCopyContext) GetProcAddress(OriginalGL, "wglCopyContext")) == NULL)
        {
            return false;
        }

        if ((optr_wglDeleteContext = (ptr_wglDeleteContext) GetProcAddress(OriginalGL, "wglDeleteContext")) == NULL)
        {
            return false;
        }

        if ((optr_wglDescribeLayerPlane = (ptr_wglDescribeLayerPlane) GetProcAddress(OriginalGL, "wglDescribeLayerPlane")) == NULL)
        {
            return false;
        }

        if ((optr_wglDescribePixelFormat = (ptr_wglDescribePixelFormat) GetProcAddress(OriginalGL, "wglDescribePixelFormat")) == NULL)
        {
            return false;
        }

        if ((optr_wglGetCurrentContext = (ptr_wglGetCurrentContext) GetProcAddress(OriginalGL, "wglGetCurrentContext")) == NULL)
        {
            return false;
        }

        if ((optr_wglGetCurrentDC = (ptr_wglGetCurrentDC) GetProcAddress(OriginalGL, "wglGetCurrentDC")) == NULL)
        {
            return false;
        }

        if ((optr_wglGetDefaultProcAddress = (ptr_wglGetDefaultProcAddress) GetProcAddress(OriginalGL, "wglGetDefaultProcAddress")) == NULL)
        {
            return false;
        }

        if ((optr_wglGetLayerPaletteEntries = (ptr_wglGetLayerPaletteEntries) GetProcAddress(OriginalGL, "wglGetLayerPaletteEntries")) == NULL)
        {
            return false;
        }

        if ((optr_wglGetPixelFormat = (ptr_wglGetPixelFormat) GetProcAddress(OriginalGL, "wglGetPixelFormat")) == NULL)
        {
            return false;
        }

        if ((optr_wglGetProcAddress = (ptr_wglGetProcAddress) GetProcAddress(OriginalGL, "wglGetProcAddress")) == NULL)
        {
            return false;
        }

        if ((optr_wglMakeCurrent = (ptr_wglMakeCurrent) GetProcAddress(OriginalGL, "wglMakeCurrent")) == NULL)
        {
            return false;
        }

        if ((optr_wglRealizeLayerPalette = (ptr_wglRealizeLayerPalette) GetProcAddress(OriginalGL, "wglRealizeLayerPalette")) == NULL)
        {
            return false;
        }

        if ((optr_wglSetLayerPaletteEntries = (ptr_wglSetLayerPaletteEntries) GetProcAddress(OriginalGL, "wglSetLayerPaletteEntries")) == NULL)
        {
            return false;
        }

        if ((optr_wglSetPixelFormat = (ptr_wglSetPixelFormat) GetProcAddress(OriginalGL, "wglSetPixelFormat")) == NULL)
        {
            return false;
        }

        if ((optr_wglShareLists = (ptr_wglShareLists) GetProcAddress(OriginalGL, "wglShareLists")) == NULL)
        {
            return false;
        }

        if ((optr_wglSwapBuffers = (ptr_wglSwapBuffers) GetProcAddress(OriginalGL, "wglSwapBuffers")) == NULL)
        {
            return false;
        }

        if ((optr_wglSwapLayerBuffers = (ptr_wglSwapLayerBuffers) GetProcAddress(OriginalGL, "wglSwapLayerBuffers")) == NULL)
        {
            return false;
        }

        if ((optr_wglSwapMultipleBuffers = (ptr_wglSwapMultipleBuffers) GetProcAddress(OriginalGL, "wglSwapMultipleBuffers")) == NULL)
        {
            return false;
        }

        if ((optr_wglUseFontBitmapsW = (ptr_wglUseFontBitmapsW) GetProcAddress(OriginalGL, "wglUseFontBitmapsW")) == NULL)
        {
            return false;
        }

        if ((optr_wglUseFontBitmapsA = (ptr_wglUseFontBitmapsA) GetProcAddress(OriginalGL, "wglUseFontBitmapsA")) == NULL)
        {
            return false;
        }

        if ((optr_wglUseFontOutlinesW = (ptr_wglUseFontOutlinesW) GetProcAddress(OriginalGL, "wglUseFontOutlinesW")) == NULL)
        {
            return false;
        }

        if ((optr_wglUseFontOutlinesA = (ptr_wglUseFontOutlinesA) GetProcAddress(OriginalGL, "wglUseFontOutlinesA")) == NULL)
        {
            return false;
        }
    }
    return true;
}

GL_EXPORT bool __stdcall DeInitialize(void)
{
    //KillFont();
    if (FreeLibrary(OriginalGL))
    {
        OriginalGL = NULL;
    }
    return false;
}
