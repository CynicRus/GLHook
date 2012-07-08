#ifndef GLHOOK_HPP_INCLUDED
#define GLHOOK_HPP_INCLUDED

#include <gl/gl.h>
#include <gl/glu.h>


                                    /**         TYPEDEFS: Start         **/

typedef void (WINAPI *ptr_glAccum) (GLenum op, GLfloat value);
typedef void (WINAPI *ptr_glAlphaFunc) (GLenum func, GLclampf ref);
typedef GLboolean (WINAPI *ptr_glAreTexturesResident) (GLsizei n, const GLuint *textures, GLboolean *residences);
typedef void (WINAPI *ptr_glArrayElement) (GLint index);
typedef void (WINAPI *ptr_glBegin) (GLenum mode);
typedef void (WINAPI *ptr_glBindTexture) (GLenum target, GLuint texture);
typedef void (WINAPI *ptr_glBitmap) (GLSizei width, GLSizei height, GLfloat xorig, GLfloat yorig, GLfloat xmove, GLfloat ymove, const GLubyte *bitmap);
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
typedef void (WINAPI *ptr_glCopyTexSubImage2D) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei, height);
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
typedef void (WINAPI *ptr_glEvalCoord2d) (GLdouble u, GLdouble, v);
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

#endif // GLHOOK_HPP_INCLUDED
