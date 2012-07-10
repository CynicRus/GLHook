#ifndef GLHOOK_HPP_INCLUDED
#define GLHOOK_HPP_INCLUDED

/**
  *     @Author : Brandon T.
  *
  *     @param  : Typdefs - GLHook Pointers.
  *     @param  : Naming - GLHook Pointer Naming.
  *     @param  : Info From MSDN Documentation.
  **/

#include <gl/gl.h>
#include <gl/glu.h>
#include <windows.h>
#include <iostream>

#ifdef BUILD_DLL
    #define DLL_EXPORT __declspec(dllexport)
#else
    #define DLL_EXPORT __declspec(dllimport)
#endif

#define GL_EXPORT extern "C" DLL_EXPORT


                                    /**         VARIABLES: Start.        **/

extern HMODULE OriginalGL;
GL_EXPORT bool Initialize(void);
GL_EXPORT bool DeInitialize(void);

                                    /**         VARIABLES: End.        **/

                                    /**         TYPEDEFS: Start.         **/

typedef void (WINAPI *ptr_glAccum) (GLenum op, GLfloat value);
typedef void (WINAPI *ptr_glAlphaFunc) (GLenum func, GLclampf ref);
typedef GLboolean (WINAPI *ptr_glAreTexturesResident) (GLsizei n, const GLuint *textures, GLboolean *residences);
typedef void (WINAPI *ptr_glArrayElement) (GLint index);
typedef void (WINAPI *ptr_glBegin) (GLenum mode);
typedef void (WINAPI *ptr_glBindTexture) (GLenum target, GLuint texture);
typedef void (WINAPI *ptr_glBitmap) (GLsizei width, GLsizei height, GLfloat xorig, GLfloat yorig, GLfloat xmove, GLfloat ymove, const GLubyte *bitmap);
typedef void (WINAPI *ptr_glBlendFunc) (GLenum sfactor, GLenum dfactor);
typedef void (WINAPI *ptr_glCallList) (GLuint list);
typedef void (WINAPI *ptr_glCallLists) (GLsizei n, GLenum type, const GLvoid *lists);
typedef void (WINAPI *ptr_glClear) (GLbitfield mask);
typedef void (WINAPI *ptr_glClearAccum) (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
typedef void (WINAPI *ptr_glClearColor) (GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);
typedef void (WINAPI *ptr_glClearDepth) (GLclampd depth);
typedef void (WINAPI *ptr_glClearIndex) (GLfloat c);
typedef void (WINAPI *ptr_glClearStencil) (GLint s);
typedef void (WINAPI *ptr_glClipPlane) (GLenum plane, const GLdouble *equation);


                                    /**         TYPEDEFS: Colour Functions         **/

typedef void (WINAPI *ptr_glColor3b) (GLbyte red, GLbyte green, GLbyte blue);
typedef void (WINAPI *ptr_glColor3bv) (const GLbyte *v);
typedef void (WINAPI *ptr_glColor3d) (GLdouble red, GLdouble green, GLdouble blue);
typedef void (WINAPI *ptr_glColor3dv) (const GLdouble *v);
typedef void (WINAPI *ptr_glColor3f) (GLfloat red, GLfloat green, GLfloat blue);
typedef void (WINAPI *ptr_glColor3fv) (const GLfloat *v);
typedef void (WINAPI *ptr_glColor3i) (GLint red, GLint green, GLint blue);
typedef void (WINAPI *ptr_glColor3iv) (const GLint *v);
typedef void (WINAPI *ptr_glColor3s) (GLshort red, GLshort green, GLshort blue);
typedef void (WINAPI *ptr_glColor3sv) (const GLshort *v);
typedef void (WINAPI *ptr_glColor3ub) (GLubyte red, GLubyte green, GLubyte blue);
typedef void (WINAPI *ptr_glColor3ubv) (const GLubyte *v);
typedef void (WINAPI *ptr_glColor3ui) (GLuint red, GLuint green, GLuint blue);
typedef void (WINAPI *ptr_glColor3uiv) (const GLuint *v);
typedef void (WINAPI *ptr_glColor3us) (GLushort red, GLushort green, GLushort blue);
typedef void (WINAPI *ptr_glColor3usv) (const GLushort *v);

typedef void (WINAPI *ptr_glColor4b) (GLbyte red, GLbyte green, GLbyte blue, GLbyte alpha);
typedef void (WINAPI *ptr_glColor4bv) (const GLbyte *v);
typedef void (WINAPI *ptr_glColor4d) (GLdouble red, GLdouble green, GLdouble blue, GLdouble alpha);
typedef void (WINAPI *ptr_glColor4dv) (const GLdouble *v);
typedef void (WINAPI *ptr_glColor4f) (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
typedef void (WINAPI *ptr_glColor4fv) (const GLfloat *v);
typedef void (WINAPI *ptr_glColor4i) (GLint red, GLint green, GLint blue, GLint alpha);
typedef void (WINAPI *ptr_glColor4iv) (const GLint *v);
typedef void (WINAPI *ptr_glColor4s) (GLshort red, GLshort green, GLshort blue, GLshort alpha);
typedef void (WINAPI *ptr_glColor4sv) (const GLshort *v);
typedef void (WINAPI *ptr_glColor4ub) (GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha);
typedef void (WINAPI *ptr_glColor4ubv) (const GLubyte *v);
typedef void (WINAPI *ptr_glColor4ui) (GLuint red, GLuint green, GLuint blue, GLuint alpha);
typedef void (WINAPI *ptr_glColor4uiv) (const GLuint *v);
typedef void (WINAPI *ptr_glColor4us) (GLushort red, GLushort green, GLushort blue, GLushort alpha);
typedef void (WINAPI *ptr_glColor4usv) (const GLushort *v);
typedef void (WINAPI *ptr_glColorMask) (GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);
typedef void (WINAPI *ptr_glColorMaterial) (GLenum face, GLenum mode);
typedef void (WINAPI *ptr_glColorPointer) (GLint size, GLenum type, GLsizei stride, const GLvoid *pointer);


                                    /**         TYPEDEFS: Continued         **/


typedef void (WINAPI *ptr_glCopyPixels) (GLint x, GLint y, GLsizei width, GLsizei height, GLenum type);
typedef void (WINAPI *ptr_glCopyTexImage1D) (GLenum target, GLint level, GLenum internalFormat, GLint x, GLint y, GLsizei width, GLint border);
typedef void (WINAPI *ptr_glCopyTexImage2D) (GLenum target, GLint level, GLenum internalFormat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
typedef void (WINAPI *ptr_glCopyTexSubImage1D) (GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
typedef void (WINAPI *ptr_glCopyTexSubImage2D) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (WINAPI *ptr_glCullFace) (GLenum mode);
typedef void (WINAPI *ptr_glDeleteLists) (GLuint list, GLsizei range);
typedef void (WINAPI *ptr_glDeleteTextures) (GLsizei n, const GLuint *textures);
typedef void (WINAPI *ptr_glDepthFunc) (GLenum func);
typedef void (WINAPI *ptr_glDepthMask) (GLboolean flag);
typedef void (WINAPI *ptr_glDepthRange) (GLclampd zNear, GLclampd zFar);
typedef void (WINAPI *ptr_glDisable) (GLenum cap);
typedef void (WINAPI *ptr_glDisableClientState) (GLenum array);
typedef void (WINAPI *ptr_glDrawArrays) (GLenum mode, GLint first, GLsizei count);
typedef void (WINAPI *ptr_glDrawBuffer) (GLenum mode);
typedef void (WINAPI *ptr_glDrawElements) (GLenum mode, GLsizei count, GLenum type, const GLvoid *indices);
typedef void (WINAPI *ptr_glDrawPixels) (GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *pixels);


                                    /**         TYPEDEFS: EdgeFlag Functions         **/

typedef void (WINAPI *ptr_glEdgeFlag) (GLboolean flag);
typedef void (WINAPI *ptr_glEdgeFlagv) (const GLboolean *flag);
typedef void (WINAPI *ptr_glEdgeFlagPointer) (GLsizei stride, const GLvoid *pointer);


                                    /**         TYPEDEFS: Continued         **/

typedef void (WINAPI *ptr_glEnable) (GLenum cap);
typedef void (WINAPI *ptr_glEnableClientState) (GLenum array);
typedef void (WINAPI *ptr_glEnd) (void);
typedef void (WINAPI *ptr_glEndList) (void);


                                    /**         TYPEDEFS: Eval Coordinate Functions         **/

typedef void (WINAPI *ptr_glEvalCoord1d) (GLdouble u);
typedef void (WINAPI *ptr_glEvalCoord1dv) (const GLdouble *u);
typedef void (WINAPI *ptr_glEvalCoord1f) (GLfloat u);
typedef void (WINAPI *ptr_glEvalCoord1fv) (const GLfloat *u);
typedef void (WINAPI *ptr_glEvalCoord2d) (GLdouble u, GLdouble v);
typedef void (WINAPI *ptr_glEvalCoord2dv) (const GLdouble *u);
typedef void (WINAPI *ptr_glEvalCoord2f) (GLfloat u, GLfloat v);
typedef void (WINAPI *ptr_glEvalCoord2fv) (const GLfloat *u);


                                    /**         TYPEDEFS: Eval Mesh Functions         **/

typedef void (WINAPI *ptr_glEvalMesh1) (GLenum mode, GLint i1, GLint i2);
typedef void (WINAPI *ptr_glEvalMesh2) (GLenum mode, GLint i1, GLint i2, GLint j1, GLint j2);


                                    /**         TYPEDEFS: Eval Point Functions         **/

typedef void (WINAPI *ptr_glEvalPoint1) (GLint i);
typedef void (WINAPI *ptr_glEvalPoint2) (GLint i, GLint j);


                                    /**         TYPEDEFS: Continued         **/

typedef void (WINAPI *ptr_glFeedbackBuffer) (GLsizei size, GLenum type, GLfloat *buffer);
typedef void (WINAPI *ptr_glFinish) (void);
typedef void (WINAPI *ptr_glFlush) (void);


                                    /**         TYPEDEFS: Fog Functions         **/

typedef void (WINAPI *ptr_glFogf) (GLenum pname, GLfloat param);
typedef void (WINAPI *ptr_glFogfv) (GLenum pname, const GLfloat *params);
typedef void (WINAPI *ptr_glFogi) (GLenum pname, GLint param);
typedef void (WINAPI *ptr_glFogiv) (GLenum pname, const GLint *params);


                                    /**         TYPEDEFS: Continued         **/

typedef void (WINAPI *ptr_glFrontFace) (GLenum mode);
typedef void (WINAPI *ptr_glFrustum) (GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar);
typedef GLuint (WINAPI *ptr_glGenLists) (GLsizei range);
typedef void (WINAPI *ptr_glGenTextures) (GLsizei n, GLuint *textures);


                                    /**         TYPEDEFS: Get Functions        **/

typedef void (WINAPI *ptr_glGetBooleanv) (GLenum pname, GLboolean *params);
typedef void (WINAPI *ptr_glGetDoublev) (GLenum pname, GLboolean *params);
typedef void (WINAPI *ptr_glGetFloatv) (GLenum pname, GLboolean *params);
typedef void (WINAPI *ptr_glGetIntegerv) (GLenum pname, GLboolean *params);


                                    /**         TYPEDEFS: Get Functions        **/

typedef void (WINAPI *ptr_glGetClipPlane) (GLenum plane, GLdouble *equation);
typedef GLenum (WINAPI *ptr_glGetError) (void);


                                    /**         TYPEDEFS: Get Light Functions        **/

typedef void (WINAPI *ptr_glGetLightfv) (GLenum light, GLenum pname, GLfloat *params);
typedef void (WINAPI *ptr_glGetLightiv) (GLenum light, GLenum pname, GLint *params);


                                    /**         TYPEDEFS: Get Map Functions        **/

typedef void (WINAPI *ptr_glGetMapdv) (GLenum target, GLenum query, GLdouble *v);
typedef void (WINAPI *ptr_glGetMapfv) (GLenum target, GLenum query, GLfloat *v);
typedef void (WINAPI *ptr_glGetMapiv) (GLenum target, GLenum query, GLint *v);


                                    /**         TYPEDEFS: Get Material Functions        **/

typedef void (WINAPI *ptr_glGetMaterialfv) (GLenum face, GLenum pname, GLfloat *params);
typedef void (WINAPI *ptr_glGetMaterialiv) (GLenum face, GLenum pname, GLint *params);


                                    /**         TYPEDEFS: Get PixelMap Functions        **/

typedef void (WINAPI *ptr_glGetPixelMapfv) (GLenum map, GLfloat *values);
typedef void (WINAPI *ptr_glGetPixelMapuiv) (GLenum map, GLuint *values);
typedef void (WINAPI *ptr_glGetPixelMapusv) (GLenum map, GLushort *values);


                                    /**         TYPEDEFS: Continued        **/

typedef void (WINAPI *ptr_glGetPointerv) (GLenum pname, GLvoid **params);
typedef void (WINAPI *ptr_glGetPolygonStipple) (GLubyte *mask);
typedef const GLubyte* (WINAPI *ptr_glGetString) (GLenum name);


                                    /**         TYPEDEFS: GetTexENV/GetTexGEN Functions        **/

typedef void (WINAPI *ptr_glGetTexEnvfv) (GLenum target, GLenum pname, GLfloat *params);
typedef void (WINAPI *ptr_glGetTexEnviv) (GLenum target, GLenum pname, GLint *params);
typedef void (WINAPI *ptr_glGetTexGendv) (GLenum coord, GLenum pname, GLdouble *params);
typedef void (WINAPI *ptr_glGetTexGenfv) (GLenum coord, GLenum pname, GLfloat *params);
typedef void (WINAPI *ptr_glGetTexGeniv) (GLenum coord, GLenum pname, GLint *params);


                                    /**         TYPEDEFS: Continued        **/

typedef void (WINAPI *ptr_glGetTexImage) (GLenum target, GLint level, GLenum format, GLenum type, GLvoid *pixels);
typedef void (WINAPI *ptr_glGetTexLevelParameterfv) (GLenum target, GLint level, GLenum pname, GLfloat *params);
typedef void (WINAPI *ptr_glGetTexLevelParameteriv) (GLenum target, GLint level, GLenum pname, GLint *params);
typedef void (WINAPI *ptr_glGetTexParameterfv) (GLenum target, GLenum pname, GLfloat *params);
typedef void (WINAPI *ptr_glGetTexParameteriv) (GLenum target, GLenum pname, GLint *params);
typedef void (WINAPI *ptr_glHint) (GLenum target, GLenum mode);


                                    /**         TYPEDEFS: Index Functions        **/

typedef void (WINAPI *ptr_glIndexd) (GLdouble c);
typedef void (WINAPI *ptr_glIndexdv) (const GLdouble *c);
typedef void (WINAPI *ptr_glIndexf) (GLfloat c);
typedef void (WINAPI *ptr_glIndexfv) (const GLfloat *c);
typedef void (WINAPI *ptr_glIndexi) (GLint c);
typedef void (WINAPI *ptr_glIndexiv) (const GLint *c);
typedef void (WINAPI *ptr_glIndexs) (GLshort c);
typedef void (WINAPI *ptr_glIndexsv) (const GLshort *c);


                                    /**         TYPEDEFS: Continued        **/

typedef void (WINAPI *ptr_glIndexMask) (GLuint mask);
typedef void (WINAPI *ptr_glIndexPointer) (GLenum type, GLsizei stride, const GLvoid *pointer);
typedef void (WINAPI *ptr_glInitNames) (void);
typedef void (WINAPI *ptr_glInterleavedArrays) (GLenum format, GLsizei stride, const GLvoid *pointer);
typedef GLboolean (WINAPI *ptr_glIsEnabled) (GLenum cap);
typedef GLboolean (WINAPI *ptr_glIsList) (GLuint list);
typedef GLboolean (WINAPI *ptr_glIsTexture) (GLuint texture);


                                    /**         TYPEDEFS: Light Functions        **/

typedef void (WINAPI *ptr_glLightf) (GLenum light, GLenum pname, GLfloat param);
typedef void (WINAPI *ptr_glLightfv) (GLenum light, GLenum pname, const GLfloat *params);
typedef void (WINAPI *ptr_glLighti) (GLenum light, GLenum pname, GLint param);
typedef void (WINAPI *ptr_glLightiv) (GLenum light, GLenum pname, const GLint *params);
typedef void (WINAPI *ptr_glLightModelf) (GLenum pname, GLfloat *param);
typedef void (WINAPI *ptr_glLightModelfv) (GLenum pname, const GLfloat *params);
typedef void (WINAPI *ptr_glLightModeli) (GLenum pname, GLint param);
typedef void (WINAPI *ptr_glLightModeliv) (GLenum pname, const GLint *params);


                                    /**         TYPEDEFS: Continued        **/

typedef void (WINAPI *ptr_glLineStipple) (GLint factor, GLushort pattern);
typedef void (WINAPI *ptr_glLineWidth) (GLfloat width);
typedef void (WINAPI *ptr_glListBase) (GLuint base);
typedef void (WINAPI *ptr_glLoadIdentity) (void);
typedef void (WINAPI *ptr_glLoadMatrixd) (const GLdouble *m);
typedef void (WINAPI *ptr_glLoadMatrixf) (const GLfloat *m);
typedef void (WINAPI *ptr_glLoadName) (GLuint name);
typedef void (WINAPI *ptr_glLogicOp) (GLenum opcode);


                                    /**         TYPEDEFS: Map#/Material Functions        **/

typedef void (WINAPI *ptr_glMap1d) (GLenum target, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble *points);
typedef void (WINAPI *ptr_glMap1f) (GLenum target, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat *points);
typedef void (WINAPI *ptr_glMap2d) (GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble *points);
typedef void (WINAPI *ptr_glMap2f) (GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat *points);
typedef void (WINAPI *ptr_glMapGrid1d) (GLint un, GLdouble u1, GLdouble u2);
typedef void (WINAPI *ptr_glMapGrid1f) (GLint un, GLfloat u1, GLfloat u2);
typedef void (WINAPI *ptr_glMapGrid2d) (GLint un, GLdouble u1, GLdouble u2, GLint vn, GLdouble v1, GLdouble v2);
typedef void (WINAPI *ptr_glMapGrid2f) (GLint un, GLfloat u1, GLfloat u2, GLint vn, GLfloat v1, GLfloat v2);
typedef void (WINAPI *ptr_glMaterialf) (GLenum face, GLenum pname, GLfloat param);
typedef void (WINAPI *ptr_glMaterialfv) (GLenum face, GLenum pname, const GLfloat *params);
typedef void (WINAPI *ptr_glMateriali) (GLenum face, GLenum pname, GLint param);
typedef void (WINAPI *ptr_glMaterialiv) (GLenum face, GLenum pname, const GLint *params);


                                    /**         TYPEDEFS: Continued        **/

typedef void (WINAPI *ptr_glMatrixMode) (GLenum mode);
typedef void (WINAPI *ptr_glMultMatrixd) (const GLdouble *m);
typedef void (WINAPI *ptr_glMultMatrixf) (const GLdouble *m);
typedef void (WINAPI *ptr_glNewList) (GLuint list, GLenum mode);


                                    /**         TYPEDEFS: Normal/Coordinate Functions        **/

typedef void (WINAPI *ptr_glNormal3b) (GLbyte nx, GLbyte ny, GLbyte nz);
typedef void (WINAPI *ptr_glNormal3bv) (const GLbyte *v);
typedef void (WINAPI *ptr_glNormal3d) (GLdouble nx, GLdouble ny, GLdouble nz);
typedef void (WINAPI *ptr_glNormal3dv) (const GLdouble *v);
typedef void (WINAPI *ptr_glNormal3f) (GLfloat nx, GLfloat ny, GLfloat nz);
typedef void (WINAPI *ptr_glNormal3fv) (const GLfloat *v);
typedef void (WINAPI *ptr_glNormal3i) (GLint nx, GLint ny, GLint nz);
typedef void (WINAPI *ptr_glNormal3iv) (const GLint *v);
typedef void (WINAPI *ptr_glNormal3s) (GLshort nx, GLshort ny, GLshort nz);
typedef void (WINAPI *ptr_glNormal3sv) (const GLshort *v);
typedef void (WINAPI *ptr_glNormalPointer) (GLenum type, GLsizei stride, const GLvoid *pointer);

typedef void (WINAPI *ptr_glOrtho) (GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar);
typedef void (WINAPI *ptr_glPassThrough) (GLfloat token);


                                    /**         TYPEDEFS: Pixel Functions        **/

typedef void (WINAPI *ptr_glPixelMapfv) (GLenum map, GLsizei mapsize, const GLfloat *values);
typedef void (WINAPI *ptr_glPixelMapuiv) (GLenum map, GLsizei mapsize, const GLuint *values);
typedef void (WINAPI *ptr_glPixelMapusv) (GLenum map, GLsizei mapsize, const GLushort *values);
typedef void (WINAPI *ptr_glPixelStoref) (GLenum pname, GLfloat param);
typedef void (WINAPI *ptr_glPixelStorei) (GLenum pname, GLint para);
typedef void (WINAPI *ptr_glPixelTransferf) (GLenum pname, GLfloat param);
typedef void (WINAPI *ptr_glPixelTransferi) (GLenum pname, GLint param);
typedef void (WINAPI *ptr_glPixelZoom) (GLfloat xfactor, GLfloat yfactor);


                                    /**         TYPEDEFS: Continued        **/

typedef void (WINAPI *ptr_glPointSize) (GLfloat size);
typedef void (WINAPI *ptr_glPolygonMode) (GLenum face, GLenum mode);
typedef void (WINAPI *ptr_glPolygonOffset) (GLfloat factor, GLfloat units);
typedef void (WINAPI *ptr_glPolygonStipple) (const GLubyte *mask);
typedef void (WINAPI *ptr_glPopAttrib) (void);
typedef void (WINAPI *ptr_glPopClientAttrib) (void);
typedef void (WINAPI *ptr_glPopMatrix) (void);
typedef void (WINAPI *ptr_glPopName) (void);
typedef void (WINAPI *ptr_glPrioritizeTextures) (GLsizei n, const GLuint *textures, const GLclampf *priorities);
typedef void (WINAPI *ptr_glPushAttrib) (GLbitfield mask);
typedef void (WINAPI *ptr_glPushClientAttrib) (GLbitfield mask);
typedef void (WINAPI *ptr_glPushMatrix) (void);
typedef void (WINAPI *ptr_glPushName) (GLuint name);


                                    /**         TYPEDEFS: Raster Functions        **/

typedef void (WINAPI *ptr_glRasterPos2d) (GLdouble x, GLdouble y);
typedef void (WINAPI *ptr_glRasterPos2dv) (const GLdouble *v);
typedef void (WINAPI *ptr_glRasterPos2f) (GLfloat x, GLfloat y);
typedef void (WINAPI *ptr_glRasterPos2fv) (const GLfloat *v);
typedef void (WINAPI *ptr_glRasterPos2i) (GLint x, GLint y);
typedef void (WINAPI *ptr_glRasterPos2iv) (const GLint *v);
typedef void (WINAPI *ptr_glRasterPos2s) (GLshort x, GLshort y);
typedef void (WINAPI *ptr_glRasterPos2sv) (const GLshort *v);
typedef void (WINAPI *ptr_glRasterPos3d) (GLdouble x, GLdouble y, GLdouble z);
typedef void (WINAPI *ptr_glRasterPos3dv) (const GLdouble *v);
typedef void (WINAPI *ptr_glRasterPos3f) (GLfloat x, GLfloat y, GLfloat z);
typedef void (WINAPI *ptr_glRasterPos3fv) (const GLfloat *v);
typedef void (WINAPI *ptr_glRasterPos3i) (GLint x, GLint y, GLint z);
typedef void (WINAPI *ptr_glRasterPos3iv) (const GLint *v);
typedef void (WINAPI *ptr_glRasterPos3s) (GLshort x, GLshort y, GLshort z);
typedef void (WINAPI *ptr_glRasterPos3sv) (const GLshort *v);
typedef void (WINAPI *ptr_glRasterPos4d) (GLdouble x, GLdouble y, GLdouble z, GLdouble w);
typedef void (WINAPI *ptr_glRasterPos4dv) (const GLdouble *v);
typedef void (WINAPI *ptr_glRasterPos4f) (GLfloat x, GLfloat y, GLfloat z, GLfloat w);
typedef void (WINAPI *ptr_glRasterPos4fv) (const GLfloat *v);
typedef void (WINAPI *ptr_glRasterPos4i) (GLint x, GLint y, GLint z, GLint w);
typedef void (WINAPI *ptr_glRasterPos4iv) (const GLint *v);
typedef void (WINAPI *ptr_glRasterPos4s) (GLshort x, GLshort y, GLshort z, GLshort w);
typedef void (WINAPI *ptr_glRasterPos4sv) (const GLshort *v);


                                    /**         TYPEDEFS: Continued        **/

typedef void (WINAPI *ptr_glReadBuffer) (GLenum mode);
typedef void (WINAPI *ptr_glReadPixels) (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid *pixels);


                                    /**         TYPEDEFS: Rect/Render/Rotate/Scale Functions        **/

typedef void (WINAPI *ptr_glRectd) (GLdouble x1, GLdouble y1, GLdouble x2, GLdouble y2);
typedef void (WINAPI *ptr_glRectdv) (const GLdouble *v1, const GLdouble *v2);
typedef void (WINAPI *ptr_glRectf) (GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2);
typedef void (WINAPI *ptr_glRectfv) (const GLfloat *v1, const GLfloat *v2);
typedef void (WINAPI *ptr_glRecti) (GLint x1, GLint y1, GLint x2, GLint y2);
typedef void (WINAPI *ptr_glRectiv) (const GLint *v1, const GLint *v2);
typedef void (WINAPI *ptr_glRects) (GLshort x1, GLshort y1, GLshort x2, GLshort y2);
typedef void (WINAPI *ptr_glRectsv) (const GLshort *v1, const GLshort *v2);
typedef GLint (WINAPI *ptr_glRenderMode) (GLenum mode);
typedef void (WINAPI *ptr_glRotated) (GLdouble angle, GLdouble x, GLdouble y, GLdouble z);
typedef void (WINAPI *ptr_glRotatef) (GLfloat angle, GLfloat x, GLfloat y, GLfloat z);
typedef void (WINAPI *ptr_glScaled) (GLdouble x, GLdouble y, GLdouble z);
typedef void (WINAPI *ptr_glScalef) (GLfloat x, GLfloat y, GLfloat z);


                                    /**         TYPEDEFS: Continued        **/

typedef void (WINAPI *ptr_glScissor) (GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (WINAPI *ptr_glSelectBuffer) (GLsizei size, GLuint *buffer);
typedef void (WINAPI *ptr_glShadeModel) (GLenum mode);
typedef void (WINAPI *ptr_glStencilFunc) (GLenum func, GLint ref, GLuint mask);
typedef void (WINAPI *ptr_glStencilMask) (GLuint mask);
typedef void (WINAPI *ptr_glStencilOp) (GLenum fail, GLenum zfail, GLenum zpass);


                                    /**         TYPEDEFS: Tex Functions        **/

typedef void (WINAPI *ptr_glTexCoord1d) (GLdouble s);
typedef void (WINAPI *ptr_glTexCoord1dv) (const GLdouble *v);
typedef void (WINAPI *ptr_glTexCoord1f) (GLfloat s);
typedef void (WINAPI *ptr_glTexCoord1fv) (const GLfloat *v);
typedef void (WINAPI *ptr_glTexCoord1i) (GLint s);
typedef void (WINAPI *ptr_glTexCoord1iv) (const GLint *v);
typedef void (WINAPI *ptr_glTexCoord1s) (GLshort s);
typedef void (WINAPI *ptr_glTexCoord1sv) (const GLshort *v);
typedef void (WINAPI *ptr_glTexCoord2d) (GLdouble s, GLdouble t);
typedef void (WINAPI *ptr_glTexCoord2dv) (const GLdouble *v);
typedef void (WINAPI *ptr_glTexCoord2fv) (const GLfloat *v);
typedef void (WINAPI *ptr_glTexCoord2i) (GLint s, GLint t);
typedef void (WINAPI *ptr_glTexCoord2iv) (const GLint *v);
typedef void (WINAPI *ptr_glTexCoord2s) (GLshort s, GLshort t);
typedef void (WINAPI *ptr_glTexCoord2sv) (const GLshort *v);
typedef void (WINAPI *ptr_glTexCoord3d) (GLdouble s, GLdouble t, GLdouble r);
typedef void (WINAPI *ptr_glTexCoord3dv) (const GLdouble *v);
typedef void (WINAPI *ptr_glTexCoord3f) (GLfloat s, GLfloat t, GLfloat r);
typedef void (WINAPI *ptr_glTexCoord3fv) (const GLfloat *v);
typedef void (WINAPI *ptr_glTexCoord3i) (GLint s, GLint t, GLint r);
typedef void (WINAPI *ptr_glTexCoord3iv) (const GLint *v);
typedef void (WINAPI *ptr_glTexCoord3s) (GLshort s, GLshort t, GLshort r);
typedef void (WINAPI *ptr_glTexCoord3sv) (const GLshort *v);
typedef void (WINAPI *ptr_glTexCoord4d) (GLdouble s, GLdouble t, GLdouble r, GLdouble q);
typedef void (WINAPI *ptr_glTexCoord4dv) (const GLdouble *v);
typedef void (WINAPI *ptr_glTexCoord4f) (GLfloat s, GLfloat t, GLfloat r, GLfloat q);
typedef void (WINAPI *ptr_glTexCoord4fv) (const GLfloat *v);
typedef void (WINAPI *ptr_glTexCoord4i) (GLint s, GLint t, GLint r, GLint q);
typedef void (WINAPI *ptr_glTexCoord4iv) (const GLint *v);
typedef void (WINAPI *ptr_glTexCoord4s) (GLshort s, GLshort t, GLshort r, GLshort q);
typedef void (WINAPI *ptr_glTexCoord4sv) (const GLshort *v);
typedef void (WINAPI *ptr_glTexCoordPointer) (GLint size, GLenum type, GLsizei stride, const GLvoid *pointer);
typedef void (WINAPI *ptr_glTexEnvf) (GLenum target, GLenum pname, GLfloat param);
typedef void (WINAPI *ptr_glTexEnvfv) (GLenum target, GLenum pname, const GLfloat *params);
typedef void (WINAPI *ptr_glTexEnvi) (GLenum target, GLenum pname, GLint param);
typedef void (WINAPI *ptr_glTexEnviv) (GLenum target, GLenum pname, const GLint *params);
typedef void (WINAPI *ptr_glTexGend) (GLenum coord, GLenum pname, GLdouble param);
typedef void (WINAPI *ptr_glTexGendv) (GLenum coord, GLenum pname, const GLdouble *params);
typedef void (WINAPI *ptr_glTexGenf) (GLenum coord, GLenum pname, GLfloat param);
typedef void (WINAPI *ptr_glTexGenfv) (GLenum coord, GLenum pname, const GLfloat *params);
typedef void (WINAPI *ptr_glTexGeni) (GLenum coord, GLenum pname, GLint param);
typedef void (WINAPI *ptr_glTexGeniv) (GLenum coord, GLenum pname, const GLint *params);
typedef void (WINAPI *ptr_glTexImage1D) (GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLint format, GLenum type, const GLvoid *pixels);
typedef void (WINAPI *ptr_glTexImage2D) (GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLint format, GLenum type, const GLvoid *pixels);
typedef void (WINAPI *ptr_glTexParameterf) (GLenum target, GLenum pname, GLfloat param);
typedef void (WINAPI *ptr_glTexParameterfv) (GLenum target, GLenum pname, const GLfloat *params);
typedef void (WINAPI *ptr_glTexParameteri) (GLenum target, GLenum pname, GLint param);
typedef void (WINAPI *ptr_glTexParameteriv) (GLenum target, GLenum pname, const GLint *params);
typedef void (WINAPI *ptr_glTexSubImage1D) (GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const GLvoid *pixels);
typedef void (WINAPI *ptr_glTexSubImage2D) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type,const GLvoid *pixels);


                                    /**         TYPEDEFS: Translate/Vertex Functions       **/

typedef void (WINAPI *ptr_glTranslated) (GLdouble x, GLdouble y, GLdouble z);
typedef void (WINAPI *ptr_glTranslatef) (GLfloat x, GLfloat y, GLfloat z);
typedef void (WINAPI *ptr_glVertex2d) (GLdouble x, GLdouble y);
typedef void (WINAPI *ptr_glVertex2dv) (const GLdouble *v);
typedef void (WINAPI *ptr_glVertex2f) (GLfloat x, GLfloat y);
typedef void (WINAPI *ptr_glVertex2fv) (const GLfloat *v);
typedef void (WINAPI *ptr_glVertex2i) (GLint x, GLint y);
typedef void (WINAPI *ptr_glVertex2iv) (const GLint *v);
typedef void (WINAPI *ptr_glVertex2s) (GLshort x, GLshort y);
typedef void (WINAPI *ptr_glVertex2sv) (const GLshort *v);
typedef void (WINAPI *ptr_glVertex3d) (GLdouble x, GLdouble y, GLdouble z);
typedef void (WINAPI *ptr_glVertex3dv) (const GLdouble *v);
typedef void (WINAPI *ptr_glVertex3f) (GLfloat x, GLfloat y, GLfloat z);
typedef void (WINAPI *ptr_glVertex3fv) (const GLfloat *v);
typedef void (WINAPI *ptr_glVertex3i) (GLint x, GLint y, GLint z);
typedef void (WINAPI *ptr_glVertex3iv) (const GLint *v);
typedef void (WINAPI *ptr_glVertex3s) (GLshort x, GLshort y, GLshort z);
typedef void (WINAPI *ptr_glVertex3sv) (const GLshort *v);
typedef void (WINAPI *ptr_glVertex4d) (GLdouble x, GLdouble y, GLdouble z, GLdouble w);
typedef void (WINAPI *ptr_glVertex4dv) (const GLdouble *v);
typedef void (WINAPI *ptr_glVertex4f) (GLfloat x, GLfloat y, GLfloat z, GLfloat w);
typedef void (WINAPI *ptr_glVertex4fv) (const GLfloat *v);
typedef void (WINAPI *ptr_glVertex4i) (GLint x, GLint y, GLint z, GLint w);
typedef void (WINAPI *ptr_glVertex4iv) (const GLint *v);
typedef void (WINAPI *ptr_glVertex4s) (GLshort x, GLshort y, GLshort z, GLshort w);
typedef void (WINAPI *ptr_glVertex4sv) (const GLshort *v);
typedef void (WINAPI *ptr_glVertexPointer) (GLint size, GLenum type, GLsizei stride, const GLvoid *pointer);

typedef void (WINAPI *ptr_glViewport) (GLint x, GLint y, GLsizei width, GLsizei height);


                                    /**         TYPEDEFS: WGL Functions       **/

typedef int (WINAPI *ptr_wglChoosePixelFormat) (HDC hdc, const PIXELFORMATDESCRIPTOR *ppfd);
typedef HGLRC (WINAPI *ptr_wglCreateContext) (HDC hdc);
typedef HGLRC (WINAPI *ptr_wglCreateLayerContext) (HDC hdc, int iLayerPlane);
typedef BOOL (WINAPI *ptr_wglCopyContext) (HGLRC hglrcSrc, HGLRC hglrcDst, UINT mask);
typedef BOOL (WINAPI *ptr_wglDeleteContext) (HGLRC hglrc);
typedef BOOL (WINAPI *ptr_wglDescribeLayerPlane) (HDC hdc, int iPixelFormat, int iLayerPlane, UINT nBytes, LPLAYERPLANEDESCRIPTOR plpd);
typedef int (WINAPI *ptr_wglDescribePixelFormat) (HDC hdc, int iPixelFormat, UINT nBytes, LPPIXELFORMATDESCRIPTOR ppfd);
typedef HGLRC (WINAPI *ptr_wglGetCurrentContext) (void);
typedef HDC (WINAPI *ptr_wglGetCurrentDC) (void);
typedef PROC (WINAPI *ptr_wglGetDefaultProcAddress) (LPCSTR lpszProc);
typedef int (WINAPI *ptr_wglGetLayerPaletteEntries) (HDC hdc, int iLayerPlane, int iStart, int cEntries, COLORREF *pcr);
typedef int (WINAPI *ptr_wglGetPixelFormat) (HDC hdc);
typedef PROC (WINAPI *ptr_wglGetProcAddress) (LPCSTR lpszProc);
typedef BOOL (WINAPI *ptr_wglMakeCurrent) (HDC hdc, HGLRC hglrc);
typedef BOOL (WINAPI *ptr_wglRealizeLayerPalette) (HDC hdc, int iLayerPlane, BOOL bRealize);
typedef int (WINAPI *ptr_wglSetLayerPaletteEntries) (HDC hdc, int iLayerPlane, int iStart, int cEntries, const COLORREF *pcr);
typedef BOOL (WINAPI *ptr_wglSetPixelFormat) (HDC hdc, int iPixelFormat, const PIXELFORMATDESCRIPTOR *ppfd);
typedef BOOL (WINAPI *ptr_wglShareLists) (HGLRC hglrc1, HGLRC hglrc2);
typedef BOOL (WINAPI *ptr_wglSwapBuffers) (HDC hdc);
typedef BOOL (WINAPI *ptr_wglSwapLayerBuffers) (HDC hdc, UINT fuPlanes);
typedef BOOL (WINAPI *ptr_wglUseFontBitmapsW) (HDC hdc, DWORD first, DWORD count, DWORD listBase);
typedef BOOL (WINAPI *ptr_wglUseFontBitmapsA) (HDC hdc, DWORD first, DWORD count, DWORD listBase);
typedef BOOL (WINAPI *ptr_wglUseFontOutlinesW) (HDC hdc, DWORD first, DWORD count, DWORD listBase, FLOAT deviation, FLOAT extrusion, int format, LPGLYPHMETRICSFLOAT lpgmf);
typedef BOOL (WINAPI *ptr_wglUseFontOutlinesA) (HDC hdc, DWORD first, DWORD count, DWORD listBase, FLOAT deviation, FLOAT extrusion, int format, LPGLYPHMETRICSFLOAT lpgmf);

                                    /**         TYPEDEFS: End.       **/



                                    /**         NAMING: Start.       **/

extern ptr_glAccum                    optr_glAccum;
extern ptr_glAlphaFunc                optr_glAlphaFunc;
extern ptr_glAreTexturesResident      optr_glAreTexturesResident;
extern ptr_glArrayElement             optr_glArrayElement;
extern ptr_glBegin                    optr_glBegin;
extern ptr_glBindTexture              optr_glBindTexture;
extern ptr_glBitmap                   optr_glBitmap;
extern ptr_glBlendFunc                optr_glBlendFunc;
extern ptr_glCallList                 optr_glCallList;
extern ptr_glCallLists                optr_glCallLists;
extern ptr_glClear                    optr_glClear;
extern ptr_glClearAccum               optr_glClearAccum;
extern ptr_glClearColor               optr_glClearColor;
extern ptr_glClearDepth               optr_glClearDepth;
extern ptr_glClearIndex               optr_glClearIndex;
extern ptr_glClearStencil             optr_glClearStencil;
extern ptr_glClipPlane                optr_glClipPlane;


                                    /**         NAMING: Colour Functions         **/

extern ptr_glColor3b                  optr_glColor3b;
extern ptr_glColor3bv                 optr_glColor3bv;
extern ptr_glColor3d                  optr_glColor3d;
extern ptr_glColor3dv                 optr_glColor3dv;
extern ptr_glColor3f                  optr_glColor3f;
extern ptr_glColor3fv                 optr_glColor3fv;
extern ptr_glColor3i                  optr_glColor3i;
extern ptr_glColor3iv                 optr_glColor3iv;
extern ptr_glColor3s                  optr_glColor3s;
extern ptr_glColor3sv                 optr_glColor3sv;
extern ptr_glColor3ub                 optr_glColor3ub;
extern ptr_glColor3ubv                optr_glColor3ubv;
extern ptr_glColor3ui                 optr_glColor3ui;
extern ptr_glColor3uiv                optr_glColor3uiv;
extern ptr_glColor3us                 optr_glColor3us;
extern ptr_glColor3usv                optr_glColor3usv;

extern ptr_glColor4b                  optr_glColor4b;
extern ptr_glColor4bv                 optr_glColor4bv;
extern ptr_glColor4d                  optr_glColor4d;
extern ptr_glColor4dv                 optr_glColor4dv;
extern ptr_glColor4f                  optr_glColor4f;
extern ptr_glColor4fv                 optr_glColor4fv;
extern ptr_glColor4i                  optr_glColor4i;
extern ptr_glColor4iv                 optr_glColor4iv;
extern ptr_glColor4s                  optr_glColor4s;
extern ptr_glColor4sv                 optr_glColor4sv;
extern ptr_glColor4ub                 optr_glColor4ub;
extern ptr_glColor4ubv                optr_glColor4ubv;
extern ptr_glColor4ui                 optr_glColor4ui;
extern ptr_glColor4uiv                optr_glColor4uiv;
extern ptr_glColor4us                 optr_glColor4us;
extern ptr_glColor4usv                optr_glColor4usv;
extern ptr_glColorMask                optr_glColorMask;
extern ptr_glColorMaterial            optr_glColorMaterial;
extern ptr_glColorPointer             optr_glColorPointer;


                                    /**         NAMING: Continued         **/


extern ptr_glCopyPixels               optr_glCopyPixels;
extern ptr_glCopyTexImage1D           optr_glCopyTexImage1D;
extern ptr_glCopyTexImage2D           optr_glCopyTexImage2D;
extern ptr_glCopyTexSubImage1D        optr_glCopyTexSubImage1D;
extern ptr_glCopyTexSubImage2D        optr_glCopyTexSubImage2D;
extern ptr_glCullFace                 optr_glCullFace;
extern ptr_glDeleteLists              optr_glDeleteLists;
extern ptr_glDeleteTextures           optr_glDeleteTextures;
extern ptr_glDepthFunc                optr_glDepthFunc;
extern ptr_glDepthMask                optr_glDepthMask;
extern ptr_glDepthRange               optr_glDepthRange;
extern ptr_glDisable                  optr_glDisable;
extern ptr_glDisableClientState       optr_glDisableClientState;
extern ptr_glDrawArrays               optr_glDrawArrays;
extern ptr_glDrawBuffer               optr_glDrawBuffer;
extern ptr_glDrawElements             optr_glDrawElements;
extern ptr_glDrawPixels               optr_glDrawPixels;


                                    /**         NAMING: EdgeFlag Functions         **/

extern ptr_glEdgeFlag                 optr_glEdgeFlag;
extern ptr_glEdgeFlagv                optr_glEdgeFlagv;
extern ptr_glEdgeFlagPointer          optr_glEdgeFlagPointer;


                                    /**         NAMING: Continued         **/

extern ptr_glEnable                   optr_glEnable;
extern ptr_glEnableClientState        optr_glEnableClientState;
extern ptr_glEnd                      optr_glEnd;
extern ptr_glEndList                  optr_glEndList;


                                    /**         NAMING: Eval Coordinate Functions         **/

extern ptr_glEvalCoord1d              optr_glEvalCoord1d;
extern ptr_glEvalCoord1dv             optr_glEvalCoord1dv;
extern ptr_glEvalCoord1f              optr_glEvalCoord1f;
extern ptr_glEvalCoord1fv             optr_glEvalCoord1fv;
extern ptr_glEvalCoord2d              optr_glEvalCoord2d;
extern ptr_glEvalCoord2dv             optr_glEvalCoord2dv;
extern ptr_glEvalCoord2f              optr_glEvalCoord2f;
extern ptr_glEvalCoord2fv             optr_glEvalCoord2fv;


                                    /**         NAMING: Eval Mesh Functions         **/

extern ptr_glEvalMesh1                optr_glEvalMesh1;
extern ptr_glEvalMesh2                optr_glEvalMesh2;


                                    /**         NAMING: Eval Point Functions         **/

extern ptr_glEvalPoint1               optr_glEvalPoint1;
extern ptr_glEvalPoint2               optr_glEvalPoint2;


                                    /**         NAMING: Continued         **/

extern ptr_glFeedbackBuffer           optr_glFeedbackBuffer;
extern ptr_glFinish                   optr_glFinish;
extern ptr_glFlush                    optr_glFlush;


                                    /**         NAMING: Fog Functions         **/

extern ptr_glFogf                     optr_glFogf;
extern ptr_glFogfv                    optr_glFogfv;
extern ptr_glFogi                     optr_glFogi;
extern ptr_glFogiv                    optr_glFogiv;


                                    /**         NAMING: Continued         **/

extern ptr_glFrontFace                optr_glFrontFace;
extern ptr_glFrustum                  optr_glFrustum;
extern ptr_glGenLists                 optr_glGenLists;
extern ptr_glGenTextures              optr_glGenTextures;


                                    /**         NAMING: Get Functions        **/

extern ptr_glGetBooleanv              optr_glGetBooleanv;
extern ptr_glGetDoublev               optr_glGetDoublev;
extern ptr_glGetFloatv                optr_glGetFloatv;
extern ptr_glGetIntegerv              optr_glGetIntegerv;


                                    /**         NAMING: Get Functions        **/

extern ptr_glGetClipPlane             optr_glGetClipPlane;
extern ptr_glGetError                 optr_glGetError;


                                    /**         NAMING: Get Light Functions        **/

extern ptr_glGetLightfv               optr_glGetLightfv;
extern ptr_glGetLightiv               optr_glGetLightiv;


                                    /**         NAMING: Get Map Functions        **/

extern ptr_glGetMapdv                 optr_glGetMapdv;
extern ptr_glGetMapfv                 optr_glGetMapfv;
extern ptr_glGetMapiv                 optr_glGetMapiv;


                                    /**         NAMING: Get Material Functions        **/

extern ptr_glGetMaterialfv            optr_glGetMaterialfv;
extern ptr_glGetMaterialiv            optr_glGetMaterialiv;


                                    /**         NAMING: Get PixelMap Functions        **/

extern ptr_glGetPixelMapfv            optr_glGetPixelMapfv;
extern ptr_glGetPixelMapuiv           optr_glGetPixelMapuiv;
extern ptr_glGetPixelMapusv           optr_glGetPixelMapusv;


                                    /**         NAMING: Continued        **/

extern ptr_glGetPointerv              optr_glGetPointerv;
extern ptr_glGetPolygonStipple        optr_glGetPolygonStipple;
extern ptr_glGetString                optr_glGetString;


                                    /**         NAMING: GetTexENV/GetTexGEN Functions        **/

extern ptr_glGetTexEnvfv              optr_glGetTexEnvfv;
extern ptr_glGetTexEnviv              optr_glGetTexEnviv;
extern ptr_glGetTexGendv              optr_glGetTexGendv;
extern ptr_glGetTexGenfv              optr_glGetTexGenfv;
extern ptr_glGetTexGeniv              optr_glGetTexGeniv;


                                    /**         NAMING: Continued        **/

extern ptr_glGetTexImage              optr_glGetTexImage;
extern ptr_glGetTexLevelParameterfv   optr_glGetTexLevelParameterfv;
extern ptr_glGetTexLevelParameteriv   optr_glGetTexLevelParameteriv;
extern ptr_glGetTexParameterfv        optr_glGetTexParameterfv;
extern ptr_glGetTexParameteriv        optr_glGetTexParameteriv;
extern ptr_glHint                     optr_glHint;


                                    /**         NAMING: Index Functions        **/

extern ptr_glIndexd                   optr_glIndexd;
extern ptr_glIndexdv                  optr_glIndexdv;
extern ptr_glIndexf                   optr_glIndexf;
extern ptr_glIndexfv                  optr_glIndexfv;
extern ptr_glIndexi                   optr_glIndexi;
extern ptr_glIndexiv                  optr_glIndexiv;
extern ptr_glIndexs                   optr_glIndexs;
extern ptr_glIndexsv                  optr_glIndexsv;


                                    /**         NAMING: Continued        **/

extern ptr_glIndexMask                optr_glIndexMask;
extern ptr_glIndexPointer             optr_glIndexPointer;
extern ptr_glInitNames                optr_glInitNames;
extern ptr_glInterleavedArrays        optr_glInterleavedArrays;
extern ptr_glIsEnabled                optr_glIsEnabled;
extern ptr_glIsList                   optr_glIsList;
extern ptr_glIsTexture                optr_glIsTexture;


                                    /**         NAMING: Light Functions        **/

extern ptr_glLightf                   optr_glLightf;
extern ptr_glLightfv                  optr_glLightfv;
extern ptr_glLighti                   optr_glLighti;
extern ptr_glLightiv                  optr_glLightiv;
extern ptr_glLightModelf              optr_glLightModelf;
extern ptr_glLightModelfv             optr_glLightModelfv;
extern ptr_glLightModeli              optr_glLightModeli;
extern ptr_glLightModeliv             optr_glLightModeliv;


                                    /**         NAMING: Continued        **/

extern ptr_glLineStipple              optr_glLineStipple;
extern ptr_glLineWidth                optr_glLineWidth;
extern ptr_glListBase                 optr_glListBase;
extern ptr_glLoadIdentity             optr_glLoadIdentity;
extern ptr_glLoadMatrixd              optr_glLoadMatrixd;
extern ptr_glLoadMatrixf              optr_glLoadMatrixf;
extern ptr_glLoadName                 optr_glLoadName;
extern ptr_glLogicOp                  optr_glLogicOp;


                                    /**         NAMING: Map#/Material Functions        **/

extern ptr_glMap1d                    optr_glMap1d;
extern ptr_glMap1f                    optr_glMap1f;
extern ptr_glMap2d                    optr_glMap2d;
extern ptr_glMap2f                    optr_glMap2f;
extern ptr_glMapGrid1d                optr_glMapGrid1d;
extern ptr_glMapGrid1f                optr_glMapGrid1f;
extern ptr_glMapGrid2d                optr_glMapGrid2d;
extern ptr_glMapGrid2f                optr_glMapGrid2f;
extern ptr_glMaterialf                optr_glMaterialf;
extern ptr_glMaterialfv               optr_glMaterialfv;
extern ptr_glMateriali                optr_glMateriali;
extern ptr_glMaterialiv               optr_glMaterialiv;


                                    /**         NAMING: Continued        **/

extern ptr_glMatrixMode               optr_glMatrixMode;
extern ptr_glMultMatrixd              optr_glMultMatrixd;
extern ptr_glMultMatrixf              optr_glMultMatrixf;
extern ptr_glNewList                  optr_glNewList;


                                    /**         NAMING: Normal/Coordinate Functions        **/

extern ptr_glNormal3b                 optr_glNormal3b;
extern ptr_glNormal3bv                optr_glNormal3bv;
extern ptr_glNormal3d                 optr_glNormal3d;
extern ptr_glNormal3dv                optr_glNormal3dv;
extern ptr_glNormal3f                 optr_glNormal3f;
extern ptr_glNormal3fv                optr_glNormal3fv;
extern ptr_glNormal3i                 optr_glNormal3i;
extern ptr_glNormal3iv                optr_glNormal3iv;
extern ptr_glNormal3s                 optr_glNormal3s;
extern ptr_glNormal3sv                optr_glNormal3sv;
extern ptr_glNormalPointer            optr_glNormalPointer;

extern ptr_glOrtho                    optr_glOrtho;
extern ptr_glPassThrough              optr_glPassThrough;


                                    /**         NAMING: Pixel Functions        **/

extern ptr_glPixelMapfv               optr_glPixelMapfv;
extern ptr_glPixelMapuiv              optr_glPixelMapuiv;
extern ptr_glPixelMapusv              optr_glPixelMapusv;
extern ptr_glPixelStoref              optr_glPixelStoref;
extern ptr_glPixelStorei              optr_glPixelStorei;
extern ptr_glPixelTransferf           optr_glPixelTransferf;
extern ptr_glPixelTransferi           optr_glPixelTransferi;
extern ptr_glPixelZoom                optr_glPixelZoom;


                                    /**         NAMING: Continued        **/

extern ptr_glPointSize                optr_glPointSize;
extern ptr_glPolygonMode              optr_glPolygonMode;
extern ptr_glPolygonOffset            optr_glPolygonOffset;
extern ptr_glPolygonStipple           optr_glPolygonStipple;
extern ptr_glPopAttrib                optr_glPopAttrib;
extern ptr_glPopClientAttrib          optr_glPopClientAttrib;
extern ptr_glPopMatrix                optr_glPopMatrix;
extern ptr_glPopName                  optr_glPopName;
extern ptr_glPrioritizeTextures       optr_glPrioritizeTextures;
extern ptr_glPushAttrib               optr_glPushAttrib;
extern ptr_glPushClientAttrib         optr_glPushClientAttrib;
extern ptr_glPushMatrix               optr_glPushMatrix;
extern ptr_glPushName                 optr_glPushName;


                                    /**         NAMING: Raster Functions        **/

extern ptr_glRasterPos2d              optr_glRasterPos2d;
extern ptr_glRasterPos2dv             optr_glRasterPos2dv;
extern ptr_glRasterPos2f              optr_glRasterPos2f;
extern ptr_glRasterPos2fv             optr_glRasterPos2fv;
extern ptr_glRasterPos2i              optr_glRasterPos2i;
extern ptr_glRasterPos2iv             optr_glRasterPos2iv;
extern ptr_glRasterPos2s              optr_glRasterPos2s;
extern ptr_glRasterPos2sv             optr_glRasterPos2sv;
extern ptr_glRasterPos3d              optr_glRasterPos3d;
extern ptr_glRasterPos3dv             optr_glRasterPos3dv;
extern ptr_glRasterPos3f              optr_glRasterPos3f;
extern ptr_glRasterPos3fv             optr_glRasterPos3fv;
extern ptr_glRasterPos3i              optr_glRasterPos3i;
extern ptr_glRasterPos3iv             optr_glRasterPos3iv;
extern ptr_glRasterPos3s              optr_glRasterPos3s;
extern ptr_glRasterPos3sv             optr_glRasterPos3sv;
extern ptr_glRasterPos4d              optr_glRasterPos4d;
extern ptr_glRasterPos4dv             optr_glRasterPos4dv;
extern ptr_glRasterPos4f              optr_glRasterPos4f;
extern ptr_glRasterPos4fv             optr_glRasterPos4fv;
extern ptr_glRasterPos4i              optr_glRasterPos4i;
extern ptr_glRasterPos4iv             optr_glRasterPos4iv;
extern ptr_glRasterPos4s              optr_glRasterPos4s;
extern ptr_glRasterPos4sv             optr_glRasterPos4sv;


                                    /**         NAMING: Continued        **/

extern ptr_glReadBuffer               optr_glReadBuffer;
extern ptr_glReadPixels               optr_glReadPixels;


                                    /**         NAMING: Rect/Render/Rotate/Scale Functions        **/

extern ptr_glRectd                    optr_glRectd;
extern ptr_glRectdv                   optr_glRectdv;
extern ptr_glRectf                    optr_glRectf;
extern ptr_glRectfv                   optr_glRectfv;
extern ptr_glRecti                    optr_glRecti;
extern ptr_glRectiv                   optr_glRectiv;
extern ptr_glRects                    optr_glRects;
extern ptr_glRectsv                   optr_glRectsv;
extern ptr_glRenderMode               optr_glRenderMode;
extern ptr_glRotated                  optr_glRotated;
extern ptr_glRotatef                  optr_glRotatef;
extern ptr_glScaled                   optr_glScaled;
extern ptr_glScalef                   optr_glScalef;


                                    /**         NAMING: Continued        **/

extern ptr_glScissor                  optr_glScissor;
extern ptr_glSelectBuffer             optr_glSelectBuffer;
extern ptr_glShadeModel               optr_glShadeModel;
extern ptr_glStencilFunc              optr_glStencilFunc;
extern ptr_glStencilMask              optr_glStencilMask;
extern ptr_glStencilOp                optr_glStencilOp;


                                    /**         NAMING: Tex Functions        **/

extern ptr_glTexCoord1d               optr_glTexCoord1d;
extern ptr_glTexCoord1dv              optr_glTexCoord1dv;
extern ptr_glTexCoord1f               optr_glTexCoord1f;
extern ptr_glTexCoord1fv              optr_glTexCoord1fv;
extern ptr_glTexCoord1i               optr_glTexCoord1i;
extern ptr_glTexCoord1iv              optr_glTexCoord1iv;
extern ptr_glTexCoord1s               optr_glTexCoord1s;
extern ptr_glTexCoord1sv              optr_glTexCoord1sv;
extern ptr_glTexCoord2d               optr_glTexCoord2d;
extern ptr_glTexCoord2dv              optr_glTexCoord2dv;
extern ptr_glTexCoord2fv              optr_glTexCoord2fv;
extern ptr_glTexCoord2i               optr_glTexCoord2i;
extern ptr_glTexCoord2iv              optr_glTexCoord2iv;
extern ptr_glTexCoord2s               optr_glTexCoord2s;
extern ptr_glTexCoord2sv              optr_glTexCoord2sv;
extern ptr_glTexCoord3d               optr_glTexCoord3d;
extern ptr_glTexCoord3dv              optr_glTexCoord3dv;
extern ptr_glTexCoord3f               optr_glTexCoord3f;
extern ptr_glTexCoord3fv              optr_glTexCoord3fv;
extern ptr_glTexCoord3i               optr_glTexCoord3i;
extern ptr_glTexCoord3iv              optr_glTexCoord3iv;
extern ptr_glTexCoord3s               optr_glTexCoord3s;
extern ptr_glTexCoord3sv              optr_glTexCoord3sv;
extern ptr_glTexCoord4d               optr_glTexCoord4d;
extern ptr_glTexCoord4dv              optr_glTexCoord4dv;
extern ptr_glTexCoord4f               optr_glTexCoord4f;
extern ptr_glTexCoord4fv              optr_glTexCoord4fv;
extern ptr_glTexCoord4i               optr_glTexCoord4i;
extern ptr_glTexCoord4iv              optr_glTexCoord4iv;
extern ptr_glTexCoord4s               optr_glTexCoord4s;
extern ptr_glTexCoord4sv              optr_glTexCoord4sv;
extern ptr_glTexCoordPointer          optr_glTexCoordPointer;
extern ptr_glTexEnvf                  optr_glTexEnvf;
extern ptr_glTexEnvfv                 optr_glTexEnvfv;
extern ptr_glTexEnvi                  optr_glTexEnvi;
extern ptr_glTexEnviv                 optr_glTexEnviv;
extern ptr_glTexGend                  optr_glTexGend;
extern ptr_glTexGendv                 optr_glTexGendv;
extern ptr_glTexGenf                  optr_glTexGenf;
extern ptr_glTexGenfv                 optr_glTexGenfv;
extern ptr_glTexGeni                  optr_glTexGeni;
extern ptr_glTexGeniv                 optr_glTexGeniv;
extern ptr_glTexImage1D               optr_glTexImage1D;
extern ptr_glTexImage2D               optr_glTexImage2D;
extern ptr_glTexParameterf            optr_glTexParameterf;
extern ptr_glTexParameterfv           optr_glTexParameterfv;
extern ptr_glTexParameteri            optr_glTexParameteri;
extern ptr_glTexParameteriv           optr_glTexParameteriv;
extern ptr_glTexSubImage1D            optr_glTexSubImage1D;
extern ptr_glTexSubImage2D            optr_glTexSubImage2D;


                                    /**         NAMING: Translate/Vertex Functions       **/

extern ptr_glTranslated               optr_glTranslated;
extern ptr_glTranslatef               optr_glTranslatef;
extern ptr_glVertex2d                 optr_glVertex2d;
extern ptr_glVertex2dv                optr_glVertex2dv;
extern ptr_glVertex2f                 optr_glVertex2f;
extern ptr_glVertex2fv                optr_glVertex2fv;
extern ptr_glVertex2i                 optr_glVertex2i;
extern ptr_glVertex2iv                optr_glVertex2iv;
extern ptr_glVertex2s                 optr_glVertex2s;
extern ptr_glVertex2sv                optr_glVertex2sv;
extern ptr_glVertex3d                 optr_glVertex3d;
extern ptr_glVertex3dv                optr_glVertex3dv;
extern ptr_glVertex3f                 optr_glVertex3f;
extern ptr_glVertex3fv                optr_glVertex3fv;
extern ptr_glVertex3i                 optr_glVertex3i;
extern ptr_glVertex3iv                optr_glVertex3iv;
extern ptr_glVertex3s                 optr_glVertex3s;
extern ptr_glVertex3sv                optr_glVertex3sv;
extern ptr_glVertex4d                 optr_glVertex4d;
extern ptr_glVertex4dv                optr_glVertex4dv;
extern ptr_glVertex4f                 optr_glVertex4f;
extern ptr_glVertex4fv                optr_glVertex4fv;
extern ptr_glVertex4i                 optr_glVertex4i;
extern ptr_glVertex4iv                optr_glVertex4iv;
extern ptr_glVertex4s                 optr_glVertex4s;
extern ptr_glVertex4sv                optr_glVertex4sv;
extern ptr_glVertexPointer            optr_glVertexPointer;

extern ptr_glViewport                 optr_glViewport;


                                    /**         NAMING: WGL Functions       **/

extern ptr_wglChoosePixelFormat       optr_wglChoosePixelFormat;
extern ptr_wglCreateContext           optr_wglCreateContext;
extern ptr_wglCreateLayerContext      optr_wglCreateLayerContext;
extern ptr_wglCopyContext             optr_wglCopyContext;
extern ptr_wglDeleteContext           optr_wglDeleteContext;
extern ptr_wglDescribeLayerPlane      optr_wglDescribeLayerPlane;
extern ptr_wglDescribePixelFormat     optr_wglDescribePixelFormat;
extern ptr_wglGetCurrentContext       optr_wglGetCurrentContext;
extern ptr_wglGetCurrentDC            optr_wglGetCurrentDC;
extern ptr_wglGetDefaultProcAddress   optr_wglGetDefaultProcAddress;
extern ptr_wglGetLayerPaletteEntries  optr_wglGetLayerPaletteEntries;
extern ptr_wglGetPixelFormat          optr_wglGetPixelFormat;
extern ptr_wglGetProcAddress          optr_wglGetProcAddress;
extern ptr_wglMakeCurrent             optr_wglMakeCurrent;
extern ptr_wglRealizeLayerPalette     optr_wglRealizeLayerPalette;
extern ptr_wglSetLayerPaletteEntries  optr_wglSetLayerPaletteEntries;
extern ptr_wglSetPixelFormat          optr_wglSetPixelFormat;
extern ptr_wglShareLists              optr_wglShareLists;
extern ptr_wglSwapBuffers             optr_wglSwapBuffers;
extern ptr_wglSwapLayerBuffers        optr_wglSwapLayerBuffers;
extern ptr_wglUseFontBitmapsW         optr_wglUseFontBitmapsW;
extern ptr_wglUseFontBitmapsA         optr_wglUseFontBitmapsA;
extern ptr_wglUseFontOutlinesW        optr_wglUseFontOutlinesW;
extern ptr_wglUseFontOutlinesA        optr_wglUseFontOutlinesA;

                                    /**         NAMING: End.       **/

#endif // GLHOOK_HPP_INCLUDED
