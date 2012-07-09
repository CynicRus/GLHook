#ifndef GLHOOK_HPP_INCLUDED
#define GLHOOK_HPP_INCLUDED

#include <gl/gl.h>
#include <gl/glu.h>


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
typedef void (WINAPI *ptr_glColor3dv) (const GLdouble *v);
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
typedef void (WINAPI *ptr_glCopyTexSubImage2D) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei, GLsizei height);
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
typedef void (WINAPI *ptr_glRasterPos4s) (GLshort x, GLshort y, GLshort z, GLshort);
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
typedef void (WINAPI *ptr_glVertex4f) (GLfloat x, GLfloat y, GLfloat z,GLfloat w);
typedef void (WINAPI *ptr_glVertex4fv) (const GLfloat *v);
typedef void (WINAPI *ptr_glVertex4i) (GLint x, GLint y, GLint z, GLint w);
typedef void (WINAPI *ptr_glVertex4iv) (const GLint *v);
typedef void (WINAPI *ptr_glVertex4s) (GLshort x, GLshort y, GLshort z, GLshort w);
typedef void (WINAPI *ptr_glVertex4sv) (const GLshort *v);
typedef void (WINAPI *ptr_glVertexPointer) (GLint size, GLenum type, GLsizei stride, const GLvoid *pointer);

typedef void (WINAPI *ptr_glViewport) (GLint x, GLint y, GLsizei width, GLsizei height);

                                    /**         TYPEDEFS: End.       **/
#endif // GLHOOK_HPP_INCLUDED
