void GLHook_glAccum(GLenum op, GLfloat value)
{
	(*optr_glAccum) (op, value);
}

void GLHook_glAlphaFunc(GLenum func, GLclampf ref)
{
	(*optr_glAlphaFunc) (func, ref);
}

GLboolean GLHook_glAreTexturesResident(GLsizei n, const GLuint *textures, GLboolean *residences)
{
	return (*optr_glAreTexturesResident) (n, textures, residences);
}

void GLHook_glArrayElement(GLint index)
{
	(*optr_glArrayElement) (index);
}

void GLHook_glBegin(GLenum mode)
{
	(*optr_glBegin) (mode);
}

void GLHook_glBindTexture(GLenum target, GLuint texture)
{
	(*optr_glBindTexture) (target, texture);
}

void GLHook_glBitmap(GLsizei width, GLsizei height, GLfloat xorig, GLfloat yorig, GLfloat xmove, GLfloat ymove, const GLubyte *bitmap)
{
	(*optr_glBitmap) (width, height, xorig, yorig, xmove, ymove, bitmap);
}

void GLHook_glBlendFunc(GLenum sfactor, GLenum dfactor)
{
	(*optr_glBlendFunc) (sfactor, dfactor);
}

void GLHook_glCallList(GLuint list)
{
	(*optr_glCallList) (list);
}

void GLHook_glCallLists(GLsizei n, GLenum type, const GLvoid *lists)
{
	(*optr_glCallLists) (n, type, lists);
}

void GLHook_glClear(GLbitfield mask)
{
	(*optr_glClear) (mask);
}

void GLHook_glClearAccum(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
	(*optr_glClearAccum) (red, green, blue, alpha);
}

void GLHook_glClearColor(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha)
{
	(*optr_glClearColor) (red, green, blue, alpha);
}

void GLHook_glClearDepth(GLclampd depth)
{
	(*optr_glClearDepth) (depth);
}

void GLHook_glClearIndex(GLfloat c)
{
	(*optr_glClearIndex) (c);
}

void GLHook_glClearStencil(GLint s)
{
	(*optr_glClearStencil) (s);
}

void GLHook_glClipPlane(GLenum plane, const GLdouble *equation)
{
	(*optr_glClipPlane) (plane, equation);
}

void GLHook_glColor3b(GLbyte red, GLbyte green, GLbyte blue)
{
	(*optr_glColor3b) ( red,  green,  blue);
}

void GLHook_glColor3bv(const GLbyte *v)
{
	(*optr_glColor3bv) ( v);
}

void GLHook_glColor3d(GLdouble red, GLdouble green, GLdouble blue)
{
	(*optr_glColor3d) (red, green, blue);
}

void GLHook_glColor3dv(const GLdouble *v)
{
	(*optr_glColor3dv) (v);
}

void GLHook_glColor3f(GLfloat red, GLfloat green, GLfloat blue)
{
	(*optr_glColor3f) (red, green, blue);
}

void GLHook_glColor3fv(const GLfloat *v)
{
	(*optr_glColor3fv) (v);
}

void GLHook_glColor3i(GLint red, GLint green, GLint blue)
{
	(*optr_glColor3i) (red, green, blue);
}

void GLHook_glColor3iv(const GLint *v)
{
	(*optr_glColor3iv) (v);
}

void GLHook_glColor3s(GLshort red, GLshort green, GLshort blue)
{
	(*optr_glColor3s) (red, green, blue);
}

void GLHook_glColor3sv(const GLshort *v)
{
	(*optr_glColor3sv) (v);
}

void GLHook_glColor3ub(GLubyte red, GLubyte green, GLubyte blue)
{
	(*optr_glColor3ub) (red, green, blue);
}

void GLHook_glColor3ubv(const GLubyte *v)
{
	(*optr_glColor3ubv) (v);
}

void GLHook_glColor3ui(GLuint red, GLuint green, GLuint blue)
{
	(*optr_glColor3ui) (red, green, blue);
}

void GLHook_glColor3uiv(const GLuint *v)
{
	(*optr_glColor3uiv) (v);
}

void GLHook_glColor3us(GLushort red, GLushort green, GLushort blue)
{
	(*optr_glColor3us) (red, green, blue);
}

void GLHook_glColor3usv(const GLushort *v)
{
	(*optr_glColor3usv) (v);
}

void GLHook_glColor4b(GLbyte red, GLbyte green, GLbyte blue, GLbyte alpha)
{
	(*optr_glColor4b) ( red,  green,  blue,  alpha);
}

void GLHook_glColor4bv(const GLbyte *v)
{
	(*optr_glColor4bv) ( v);
}

void GLHook_glColor4d(GLdouble red, GLdouble green, GLdouble blue, GLdouble alpha)
{
	(*optr_glColor4d) (red, green, blue, alpha);
}

void GLHook_glColor4dv(const GLdouble *v)
{
	(*optr_glColor4dv) (v);
}

void GLHook_glColor4f(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
	(*optr_glColor4f) (red, green, blue, alpha);
}

void GLHook_glColor4fv(const GLfloat *v)
{
	(*optr_glColor4fv) (v);
}

void GLHook_glColor4i(GLint red, GLint green, GLint blue, GLint alpha)
{
	(*optr_glColor4i) (red, green, blue, alpha);
}

void GLHook_glColor4iv(const GLint *v)
{
	(*optr_glColor4iv) (v);
}

void GLHook_glColor4s(GLshort red, GLshort green, GLshort blue, GLshort alpha)
{
	(*optr_glColor4s) (red, green, blue, alpha);
}

void GLHook_glColor4sv(const GLshort *v)
{
	(*optr_glColor4sv) (v);
}

void GLHook_glColor4ub(GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha)
{
	(*optr_glColor4ub) (red, green, blue, alpha);
}

void GLHook_glColor4ubv(const GLubyte *v)
{
	(*optr_glColor4ubv) (v);
}

void GLHook_glColor4ui(GLuint red, GLuint green, GLuint blue, GLuint alpha)
{
	(*optr_glColor4ui) (red, green, blue, alpha);
}

void GLHook_glColor4uiv(const GLuint *v)
{
	(*optr_glColor4uiv) (v);
}

void GLHook_glColor4us(GLushort red, GLushort green, GLushort blue, GLushort alpha)
{
	(*optr_glColor4us) (red, green, blue, alpha);
}

void GLHook_glColor4usv(const GLushort *v)
{
	(*optr_glColor4usv) (v);
}

void GLHook_glColorMask(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha)
{
	(*optr_glColorMask) (red, green, blue, alpha);
}

void GLHook_glColorMaterial(GLenum face, GLenum mode)
{
	(*optr_glColorMaterial) (face, mode);
}

void GLHook_glColorPointer(GLint size, GLenum type, GLsizei stride, const GLvoid *pointer)
{
	(*optr_glColorPointer) (size, type, stride, pointer);
}

void GLHook_glCopyPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum type)
{
	(*optr_glCopyPixels) (x, y, width, height, type);
}

void GLHook_glCopyTexImage1D(GLenum target, GLint level, GLenum internalFormat, GLint x, GLint y, GLsizei width, GLint border)
{
	(*optr_glCopyTexImage1D) (target, level, internalFormat, x, y, width, border);
}

void GLHook_glCopyTexImage2D(GLenum target, GLint level, GLenum internalFormat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border)
{
	(*optr_glCopyTexImage2D) (target, level, internalFormat, x, y, width, height, border);
}

void GLHook_glCopyTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width)
{
	(*optr_glCopyTexSubImage1D) (target, level, xoffset, x, y, width);
}

void GLHook_glCopyTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
	(*optr_glCopyTexSubImage2D) (target, level, xoffset, yoffset, x, y, width, height);
}

void GLHook_glCullFace(GLenum mode)
{
	(*optr_glCullFace) (mode);
}

void GLHook_glDeleteLists(GLuint list, GLsizei range)
{
	(*optr_glDeleteLists) (list, range);
}

void GLHook_glDeleteTextures(GLsizei n, const GLuint *textures)
{
	(*optr_glDeleteTextures) (n, textures);
}

void GLHook_glDepthFunc(GLenum func)
{
	(*optr_glDepthFunc) (func);
}

void GLHook_glDepthMask(GLboolean flag)
{
	(*optr_glDepthMask) (flag);
}

void GLHook_glDepthRange(GLclampd zNear, GLclampd zFar)
{
	(*optr_glDepthRange) (zNear, zFar);
}

void GLHook_glDisable(GLenum cap)
{
	(*optr_glDisable) (cap);
}

void GLHook_glDisableClientState(GLenum array)
{
	(*optr_glDisableClientState) (array);
}

void GLHook_glDrawArrays(GLenum mode, GLint first, GLsizei count)
{
	(*optr_glDrawArrays) (mode, first, count);
}

void GLHook_glDrawBuffer(GLenum mode)
{
	(*optr_glDrawBuffer) (mode);
}

void GLHook_glDrawElements(GLenum mode, GLsizei count, GLenum type, const GLvoid *indices)
{
	(*optr_glDrawElements) (mode, count, type, indices);
}

void GLHook_glDrawPixels(GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *pixels)
{
	(*optr_glDrawPixels) (width, height, format, type, pixels);
}

void GLHook_glEdgeFlag(GLboolean flag)
{
	(*optr_glEdgeFlag) (flag);
}

void GLHook_glEdgeFlagv(const GLboolean *flag)
{
	(*optr_glEdgeFlagv) (flag);
}

void GLHook_glEdgeFlagPointer(GLsizei stride, const GLvoid *pointer)
{
	(*optr_glEdgeFlagPointer) (stride, pointer);
}

void GLHook_glEnable(GLenum cap)
{
	(*optr_glEnable) (cap);
}

void GLHook_glEnableClientState(GLenum array)
{
	(*optr_glEnableClientState) (array);
}

void GLHook_glEnd(void)
{
	(*optr_glEnd) ();
}

void GLHook_glEndList(void)
{
	(*optr_glEndList) ();
}

void GLHook_glEvalCoord1d(GLdouble u)
{
	(*optr_glEvalCoord1d) (u);
}

void GLHook_glEvalCoord1dv(const GLdouble *u)
{
	(*optr_glEvalCoord1dv) (u);
}

void GLHook_glEvalCoord1f(GLfloat u)
{
	(*optr_glEvalCoord1f) (u);
}

void GLHook_glEvalCoord1fv(const GLfloat *u)
{
	(*optr_glEvalCoord1fv) (u);
}

void GLHook_glEvalCoord2d(GLdouble u, GLdouble v)
{
	(*optr_glEvalCoord2d) (u, v);
}

void GLHook_glEvalCoord2dv(const GLdouble *u)
{
	(*optr_glEvalCoord2dv) (u);
}

void GLHook_glEvalCoord2f(GLfloat u, GLfloat v)
{
	(*optr_glEvalCoord2f) (u, v);
}

void GLHook_glEvalCoord2fv(const GLfloat *u)
{
	(*optr_glEvalCoord2fv) (u);
}

void GLHook_glEvalMesh1(GLenum mode, GLint i1, GLint i2)
{
	(*optr_glEvalMesh1) (mode, i1, i2);
}

void GLHook_glEvalMesh2(GLenum mode, GLint i1, GLint i2, GLint j1, GLint j2)
{
	(*optr_glEvalMesh2) (mode, i1, i2, j1, j2);
}

void GLHook_glEvalPoint1(GLint i)
{
	(*optr_glEvalPoint1) (i);
}

void GLHook_glEvalPoint2(GLint i, GLint j)
{
	(*optr_glEvalPoint2) (i, j);
}

void GLHook_glFeedbackBuffer(GLsizei size, GLenum type, GLfloat *buffer)
{
	(*optr_glFeedbackBuffer) (size, type, buffer);
}

void GLHook_glFinish(void)
{
	(*optr_glFinish) ();
}

void GLHook_glFlush(void)
{
	(*optr_glFlush) ();
}

void GLHook_glFogf(GLenum pname, GLfloat param)
{
	(*optr_glFogf) (pname, param);
}

void GLHook_glFogfv(GLenum pname, const GLfloat *params)
{
	(*optr_glFogfv) (pname, params);
}

void GLHook_glFogi(GLenum pname, GLint param)
{
	(*optr_glFogi) (pname, param);
}

void GLHook_glFogiv(GLenum pname, const GLint *params)
{
	(*optr_glFogiv) (pname, params);
}

void GLHook_glFrontFace(GLenum mode)
{
	(*optr_glFrontFace) (mode);
}

void GLHook_glFrustum(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar)
{
	(*optr_glFrustum) (left, right, bottom, top, zNear, zFar);
}

GLuint GLHook_glGenLists(GLsizei range)
{
	return (*optr_glGenLists) (range);
}

void GLHook_glGenTextures(GLsizei n, GLuint *textures)
{
	(*optr_glGenTextures) (n, textures);
}

void GLHook_glGetBooleanv(GLenum pname, GLboolean *params)
{
	(*optr_glGetBooleanv) (pname, params);
}

void GLHook_glGetDoublev(GLenum pname, GLboolean *params)
{
	(*optr_glGetDoublev) (pname, params);
}

void GLHook_glGetFloatv(GLenum pname, GLboolean *params)
{
	(*optr_glGetFloatv) (pname, params);
}

void GLHook_glGetIntegerv(GLenum pname, GLboolean *params)
{
	(*optr_glGetIntegerv) (pname, params);
}

void GLHook_glGetClipPlane(GLenum plane, GLdouble *equation)
{
	(*optr_glGetClipPlane) (plane, equation);
}

GLenum GLHook_glGetError(void)
{
	return (*optr_glGetError) ();
}

void GLHook_glGetLightfv(GLenum light, GLenum pname, GLfloat *params)
{
	(*optr_glGetLightfv) (light, pname, params);
}

void GLHook_glGetLightiv(GLenum light, GLenum pname, GLint *params)
{
	(*optr_glGetLightiv) (light, pname, params);
}

void GLHook_glGetMapdv(GLenum target, GLenum query, GLdouble *v)
{
	(*optr_glGetMapdv) (target, query, v);
}

void GLHook_glGetMapfv(GLenum target, GLenum query, GLfloat *v)
{
	(*optr_glGetMapfv) (target, query, v);
}

void GLHook_glGetMapiv(GLenum target, GLenum query, GLint *v)
{
	(*optr_glGetMapiv) (target, query, v);
}

void GLHook_glGetMaterialfv(GLenum face, GLenum pname, GLfloat *params)
{
	(*optr_glGetMaterialfv) (face, pname, params);
}

void GLHook_glGetMaterialiv(GLenum face, GLenum pname, GLint *params)
{
	(*optr_glGetMaterialiv) (face, pname, params);
}

void GLHook_glGetPixelMapfv(GLenum map, GLfloat *values)
{
	(*optr_glGetPixelMapfv) (map, values);
}

void GLHook_glGetPixelMapuiv(GLenum map, GLuint *values)
{
	(*optr_glGetPixelMapuiv) (map, values);
}

void GLHook_glGetPixelMapusv(GLenum map, GLushort *values)
{
	(*optr_glGetPixelMapusv) (map, values);
}

void GLHook_glGetPointerv(GLenum pname, GLvoid **params)
{
	(*optr_glGetPointerv) (pname, params);
}

void GLHook_glGetPolygonStipple(GLubyte *mask)
{
	(*optr_glGetPolygonStipple) (mask);
}

const GLubyte* GLHook_GetString(GLenum name)
{
	return (*optr_glGetString) (name);
}

void GLHook_glGetTexEnvfv(GLenum target, GLenum pname, GLfloat *params)
{
	(*optr_glGetTexEnvfv) (target, pname, params);
}

void GLHook_glGetTexEnviv(GLenum target, GLenum pname, GLint *params)
{
	(*optr_glGetTexEnviv) (target, pname, params);
}

void GLHook_glGetTexGendv(GLenum coord, GLenum pname, GLdouble *params)
{
	(*optr_glGetTexGendv) (coord, pname, params);
}

void GLHook_glGetTexGenfv(GLenum coord, GLenum pname, GLfloat *params)
{
	(*optr_glGetTexGenfv) (coord, pname, params);
}

void GLHook_glGetTexGeniv(GLenum coord, GLenum pname, GLint *params)
{
	(*optr_glGetTexGeniv) (coord, pname, params);
}

void GLHook_glGetTexImage(GLenum target, GLint level, GLenum format, GLenum type, GLvoid *pixels)
{
	(*optr_glGetTexImage) (target, level, format, type, pixels);
}

void GLHook_glGetTexLevelParameterfv(GLenum target, GLint level, GLenum pname, GLfloat *params)
{
	(*optr_glGetTexLevelParameterfv) (target, level, pname, params);
}

void GLHook_glGetTexLevelParameteriv(GLenum target, GLint level, GLenum pname, GLint *params)
{
	(*optr_glGetTexLevelParameteriv) (target, level, pname, params);
}

void GLHook_glGetTexParameterfv(GLenum target, GLenum pname, GLfloat *params)
{
	(*optr_glGetTexParameterfv) (target, pname, params);
}

void GLHook_glGetTexParameteriv(GLenum target, GLenum pname, GLint *params)
{
	(*optr_glGetTexParameteriv) (target, pname, params);
}

void GLHook_glHint(GLenum target, GLenum mode)
{
	(*optr_glHint) (target, mode);
}

void GLHook_glIndexd(GLdouble c)
{
	(*optr_glIndexd) (c);
}

void GLHook_glIndexdv(const GLdouble *c)
{
	(*optr_glIndexdv) (c);
}

void GLHook_glIndexf(GLfloat c)
{
	(*optr_glIndexf) (c);
}

void GLHook_glIndexfv(const GLfloat *c)
{
	(*optr_glIndexfv) (c);
}

void GLHook_glIndexi(GLint c)
{
	(*optr_glIndexi) (c);
}

void GLHook_glIndexiv(const GLint *c)
{
	(*optr_glIndexiv) (c);
}

void GLHook_glIndexs(GLshort c)
{
	(*optr_glIndexs) (c);
}

void GLHook_glIndexsv(const GLshort *c)
{
	(*optr_glIndexsv) (c);
}

void GLHook_glIndexMask(GLuint mask)
{
	(*optr_glIndexMask) (mask);
}

void GLHook_glIndexPointer(GLenum type, GLsizei stride, const GLvoid *pointer)
{
	(*optr_glIndexPointer) (type, stride, pointer);
}

void GLHook_glInitNames(void)
{
	(*optr_glInitNames) ();
}

void GLHook_glInterleavedArrays(GLenum format, GLsizei stride, const GLvoid *pointer)
{
	(*optr_glInterleavedArrays) (format, stride, pointer);
}

GLboolean GLHook_glIsEnabled(GLenum cap)
{
	return (*optr_glIsEnabled) (cap);
}

GLboolean GLHook_glIsList(GLuint list)
{
	return (*optr_glIsList) (list);
}

GLboolean GLHook_glIsTexture(GLuint texture)
{
	return (*optr_glIsTexture) (texture);
}

void GLHook_glLightf(GLenum light, GLenum pname, GLfloat param)
{
	(*optr_glLightf) (light, pname, param);
}

void GLHook_glLightfv(GLenum light, GLenum pname, const GLfloat *params)
{
	(*optr_glLightfv) (light, pname, params);
}

void GLHook_glLighti(GLenum light, GLenum pname, GLint param)
{
	(*optr_glLighti) (light, pname, param);
}

void GLHook_glLightiv(GLenum light, GLenum pname, const GLint *params)
{
	(*optr_glLightiv) (light, pname, params);
}

void GLHook_glLightModelf(GLenum pname, GLfloat *param)
{
	(*optr_glLightModelf) (pname, param);
}

void GLHook_glLightModelfv(GLenum pname, const GLfloat *params)
{
	(*optr_glLightModelfv) (pname, params);
}

void GLHook_glLightModeli(GLenum pname, GLint param)
{
	(*optr_glLightModeli) (pname, param);
}

void GLHook_glLightModeliv(GLenum pname, const GLint *params)
{
	(*optr_glLightModeliv) (pname, params);
}

void GLHook_glLineStipple(GLint factor, GLushort pattern)
{
	(*optr_glLineStipple) (factor, pattern);
}

void GLHook_glLineWidth(GLfloat width)
{
	(*optr_glLineWidth) (width);
}

void GLHook_glListBase(GLuint base)
{
	(*optr_glListBase) (base);
}

void GLHook_glLoadIdentity(void)
{
	(*optr_glLoadIdentity) ();
}

void GLHook_glLoadMatrixd(const GLdouble *m)
{
	(*optr_glLoadMatrixd) (m);
}

void GLHook_glLoadMatrixf(const GLfloat *m)
{
	(*optr_glLoadMatrixf) (m);
}

void GLHook_glLoadName(GLuint name)
{
	(*optr_glLoadName) (name);
}

void GLHook_glLogicOp(GLenum opcode)
{
	(*optr_glLogicOp) (opcode);
}

void GLHook_glMap1d(GLenum target, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble *points)
{
	(*optr_glMap1d) (target, u1, u2, stride, order, points);
}

void GLHook_glMap1f(GLenum target, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat *points)
{
	(*optr_glMap1f) (target, u1, u2, stride, order, points);
}

void GLHook_glMap2d(GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble *points)
{
	(*optr_glMap2d) (target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}

void GLHook_glMap2f(GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat *points)
{
	(*optr_glMap2f) (target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}

void GLHook_glMapGrid1d(GLint un, GLdouble u1, GLdouble u2)
{
	(*optr_glMapGrid1d) (un, u1, u2);
}

void GLHook_glMapGrid1f(GLint un, GLfloat u1, GLfloat u2)
{
	(*optr_glMapGrid1f) (un, u1, u2);
}

void GLHook_glMapGrid2d(GLint un, GLdouble u1, GLdouble u2, GLint vn, GLdouble v1, GLdouble v2)
{
	(*optr_glMapGrid2d) (un, u1, u2, vn, v1, v2);
}

void GLHook_glMapGrid2f(GLint un, GLfloat u1, GLfloat u2, GLint vn, GLfloat v1, GLfloat v2)
{
	(*optr_glMapGrid2f) (un, u1, u2, vn, v1, v2);
}

void GLHook_glMaterialf(GLenum face, GLenum pname, GLfloat param)
{
	(*optr_glMaterialf) (face, pname, param);
}

void GLHook_glMaterialfv(GLenum face, GLenum pname, const GLfloat *params)
{
	(*optr_glMaterialfv) (face, pname, params);
}

void GLHook_glMateriali(GLenum face, GLenum pname, GLint param)
{
	(*optr_glMateriali) (face, pname, param);
}

void GLHook_glMaterialiv(GLenum face, GLenum pname, const GLint *params)
{
	(*optr_glMaterialiv) (face, pname, params);
}

void GLHook_glMatrixMode(GLenum mode)
{
	(*optr_glMatrixMode) (mode);
}

void GLHook_glMultMatrixd(const GLdouble *m)
{
	(*optr_glMultMatrixd) (m);
}

void GLHook_glMultMatrixf(const GLdouble *m)
{
	(*optr_glMultMatrixf) (m);
}

void GLHook_glNewList(GLuint list, GLenum mode)
{
	(*optr_glNewList) (list, mode);
}

void GLHook_glNormal3b(GLbyte nx, GLbyte ny, GLbyte nz)
{
	(*optr_glNormal3b) ( nx,  ny,  nz);
}

void GLHook_glNormal3bv(const GLbyte *v)
{
	(*optr_glNormal3bv) ( v);
}

void GLHook_glNormal3d(GLdouble nx, GLdouble ny, GLdouble nz)
{
	(*optr_glNormal3d) (nx, ny, nz);
}

void GLHook_glNormal3dv(const GLdouble *v)
{
	(*optr_glNormal3dv) (v);
}

void GLHook_glNormal3f(GLfloat nx, GLfloat ny, GLfloat nz)
{
	(*optr_glNormal3f) (nx, ny, nz);
}

void GLHook_glNormal3fv(const GLfloat *v)
{
	(*optr_glNormal3fv) (v);
}

void GLHook_glNormal3i(GLint nx, GLint ny, GLint nz)
{
	(*optr_glNormal3i) (nx, ny, nz);
}

void GLHook_glNormal3iv(const GLint *v)
{
	(*optr_glNormal3iv) (v);
}

void GLHook_glNormal3s(GLshort nx, GLshort ny, GLshort nz)
{
	(*optr_glNormal3s) (nx, ny, nz);
}

void GLHook_glNormal3sv(const GLshort *v)
{
	(*optr_glNormal3sv) (v);
}

void GLHook_glNormalPointer(GLenum type, GLsizei stride, const GLvoid *pointer)
{
	(*optr_glNormalPointer) (type, stride, pointer);
}

void GLHook_glOrtho(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar)
{
	(*optr_glOrtho) (left, right, bottom, top, zNear, zFar);
}

void GLHook_glPassThrough(GLfloat token)
{
	(*optr_glPassThrough) (token);
}

void GLHook_glPixelMapfv(GLenum map, GLsizei mapsize, const GLfloat *values)
{
	(*optr_glPixelMapfv) (map, mapsize, values);
}

void GLHook_glPixelMapuiv(GLenum map, GLsizei mapsize, const GLuint *values)
{
	(*optr_glPixelMapuiv) (map, mapsize, values);
}

void GLHook_glPixelMapusv(GLenum map, GLsizei mapsize, const GLushort *values)
{
	(*optr_glPixelMapusv) (map, mapsize, values);
}

void GLHook_glPixelStoref(GLenum pname, GLfloat param)
{
	(*optr_glPixelStoref) (pname, param);
}

void GLHook_glPixelStorei(GLenum pname, GLint para)
{
	(*optr_glPixelStorei) (pname, para);
}

void GLHook_glPixelTransferf(GLenum pname, GLfloat param)
{
	(*optr_glPixelTransferf) (pname, param);
}

void GLHook_glPixelTransferi(GLenum pname, GLint param)
{
	(*optr_glPixelTransferi) (pname, param);
}

void GLHook_glPixelZoom(GLfloat xfactor, GLfloat yfactor)
{
	(*optr_glPixelZoom) (xfactor, yfactor);
}

void GLHook_glPointSize(GLfloat size)
{
	(*optr_glPointSize) (size);
}

void GLHook_glPolygonMode(GLenum face, GLenum mode)
{
	(*optr_glPolygonMode) (face, mode);
}

void GLHook_glPolygonOffset(GLfloat factor, GLfloat units)
{
	(*optr_glPolygonOffset) (factor, units);
}

void GLHook_glPolygonStipple(const GLubyte *mask)
{
	(*optr_glPolygonStipple) (mask);
}

void GLHook_glPopAttrib(void)
{
	(*optr_glPopAttrib) ();
}

void GLHook_glPopClientAttrib(void)
{
	(*optr_glPopClientAttrib) ();
}

void GLHook_glPopMatrix(void)
{
	(*optr_glPopMatrix) ();
}

void GLHook_glPopName(void)
{
	(*optr_glPopName) ();
}

void GLHook_glPrioritizeTextures(GLsizei n, const GLuint *textures, const GLclampf *priorities)
{
	(*optr_glPrioritizeTextures) (n, textures, priorities);
}

void GLHook_glPushAttrib(GLbitfield mask)
{
	(*optr_glPushAttrib) (mask);
}

void GLHook_glPushClientAttrib(GLbitfield mask)
{
	(*optr_glPushClientAttrib) (mask);
}

void GLHook_glPushMatrix(void)
{
	(*optr_glPushMatrix) ();
}

void GLHook_glPushName(GLuint name)
{
	(*optr_glPushName) (name);
}

void GLHook_glRasterPos2d(GLdouble x, GLdouble y)
{
	(*optr_glRasterPos2d) (x, y);
}

void GLHook_glRasterPos2dv(const GLdouble *v)
{
	(*optr_glRasterPos2dv) (v);
}

void GLHook_glRasterPos2f(GLfloat x, GLfloat y)
{
	(*optr_glRasterPos2f) (x, y);
}

void GLHook_glRasterPos2fv(const GLfloat *v)
{
	(*optr_glRasterPos2fv) (v);
}

void GLHook_glRasterPos2i(GLint x, GLint y)
{
	(*optr_glRasterPos2i) (x, y);
}

void GLHook_glRasterPos2iv(const GLint *v)
{
	(*optr_glRasterPos2iv) (v);
}

void GLHook_glRasterPos2s(GLshort x, GLshort y)
{
	(*optr_glRasterPos2s) (x, y);
}

void GLHook_glRasterPos2sv(const GLshort *v)
{
	(*optr_glRasterPos2sv) (v);
}

void GLHook_glRasterPos3d(GLdouble x, GLdouble y, GLdouble z)
{
	(*optr_glRasterPos3d) (x, y, z);
}

void GLHook_glRasterPos3dv(const GLdouble *v)
{
	(*optr_glRasterPos3dv) (v);
}

void GLHook_glRasterPos3f(GLfloat x, GLfloat y, GLfloat z)
{
	(*optr_glRasterPos3f) (x, y, z);
}

void GLHook_glRasterPos3fv(const GLfloat *v)
{
	(*optr_glRasterPos3fv) (v);
}

void GLHook_glRasterPos3i(GLint x, GLint y, GLint z)
{
	(*optr_glRasterPos3i) (x, y, z);
}

void GLHook_glRasterPos3iv(const GLint *v)
{
	(*optr_glRasterPos3iv) (v);
}

void GLHook_glRasterPos3s(GLshort x, GLshort y, GLshort z)
{
	(*optr_glRasterPos3s) (x, y, z);
}

void GLHook_glRasterPos3sv(const GLshort *v)
{
	(*optr_glRasterPos3sv) (v);
}

void GLHook_glRasterPos4d(GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
	(*optr_glRasterPos4d) (x, y, z, w);
}

void GLHook_glRasterPos4dv(const GLdouble *v)
{
	(*optr_glRasterPos4dv) (v);
}

void GLHook_glRasterPos4f(GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
	(*optr_glRasterPos4f) (x, y, z, w);
}

void GLHook_glRasterPos4fv(const GLfloat *v)
{
	(*optr_glRasterPos4fv) (v);
}

void GLHook_glRasterPos4i(GLint x, GLint y, GLint z, GLint w)
{
	(*optr_glRasterPos4i) (x, y, z, w);
}

void GLHook_glRasterPos4iv(const GLint *v)
{
	(*optr_glRasterPos4iv) (v);
}

void GLHook_glRasterPos4s(GLshort x, GLshort y, GLshort z, GLshort w)
{
	(*optr_glRasterPos4s) (x, y, z, w);
}

void GLHook_glRasterPos4sv(const GLshort *v)
{
	(*optr_glRasterPos4sv) (v);
}

void GLHook_glReadBuffer(GLenum mode)
{
	(*optr_glReadBuffer) (mode);
}

void GLHook_glReadPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid *pixels)
{
	(*optr_glReadPixels) (x, y, width, height, format, type, pixels);
}

void GLHook_glRectd(GLdouble x1, GLdouble y1, GLdouble x2, GLdouble y2)
{
	(*optr_glRectd) (x1, y1, x2, y2);
}

void GLHook_glRectdv(const GLdouble *v1, const GLdouble *v2)
{
	(*optr_glRectdv) (v1, v2);
}

void GLHook_glRectf(GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2)
{
	(*optr_glRectf) (x1, y1, x2, y2);
}

void GLHook_glRectfv(const GLfloat *v1, const GLfloat *v2)
{
	(*optr_glRectfv) (v1, v2);
}

void GLHook_glRecti(GLint x1, GLint y1, GLint x2, GLint y2)
{
	(*optr_glRecti) (x1, y1, x2, y2);
}

void GLHook_glRectiv(const GLint *v1, const GLint *v2)
{
	(*optr_glRectiv) (v1, v2);
}

void GLHook_glRects(GLshort x1, GLshort y1, GLshort x2, GLshort y2)
{
	(*optr_glRects) (x1, y1, x2, y2);
}

void GLHook_glRectsv(const GLshort *v1, const GLshort *v2)
{
	(*optr_glRectsv) (v1, v2);
}

GLint GLHook_glRenderMode(GLenum mode)
{
	return (*optr_glRenderMode) (mode);
}

void GLHook_glRotated(GLdouble angle, GLdouble x, GLdouble y, GLdouble z)
{
	(*optr_glRotated) (angle, x, y, z);
}

void GLHook_glRotatef(GLfloat angle, GLfloat x, GLfloat y, GLfloat z)
{
	(*optr_glRotatef) (angle, x, y, z);
}

void GLHook_glScaled(GLdouble x, GLdouble y, GLdouble z)
{
	(*optr_glScaled) (x, y, z);
}

void GLHook_glScalef(GLfloat x, GLfloat y, GLfloat z)
{
	(*optr_glScalef) (x, y, z);
}

void GLHook_glScissor(GLint x, GLint y, GLsizei width, GLsizei height)
{
	(*optr_glScissor) (x, y, width, height);
}

void GLHook_glSelectBuffer(GLsizei size, GLuint *buffer)
{
	(*optr_glSelectBuffer) (size, buffer);
}

void GLHook_glShadeModel(GLenum mode)
{
	(*optr_glShadeModel) (mode);
}

void GLHook_glStencilFunc(GLenum func, GLint ref, GLuint mask)
{
	(*optr_glStencilFunc) (func, ref, mask);
}

void GLHook_glStencilMask(GLuint mask)
{
	(*optr_glStencilMask) (mask);
}

void GLHook_glStencilOp(GLenum fail, GLenum zfail, GLenum zpass)
{
	(*optr_glStencilOp) (fail, zfail, zpass);
}

void GLHook_glTexCoord1d(GLdouble s)
{
	(*optr_glTexCoord1d) (s);
}

void GLHook_glTexCoord1dv(const GLdouble *v)
{
	(*optr_glTexCoord1dv) (v);
}

void GLHook_glTexCoord1f(GLfloat s)
{
	(*optr_glTexCoord1f) (s);
}

void GLHook_glTexCoord1fv(const GLfloat *v)
{
	(*optr_glTexCoord1fv) (v);
}

void GLHook_glTexCoord1i(GLint s)
{
	(*optr_glTexCoord1i) (s);
}

void GLHook_glTexCoord1iv(const GLint *v)
{
	(*optr_glTexCoord1iv) (v);
}

void GLHook_glTexCoord1s(GLshort s)
{
	(*optr_glTexCoord1s) (s);
}

void GLHook_glTexCoord1sv(const GLshort *v)
{
	(*optr_glTexCoord1sv) (v);
}

void GLHook_glTexCoord2d(GLdouble s, GLdouble t)
{
	(*optr_glTexCoord2d) (s, t);
}

void GLHook_glTexCoord2dv(const GLdouble *v)
{
	(*optr_glTexCoord2dv) (v);
}

void GLHook_glTexCoord2fv(const GLfloat *v)
{
	(*optr_glTexCoord2fv) (v);
}

void GLHook_glTexCoord2i(GLint s, GLint t)
{
	(*optr_glTexCoord2i) (s, t);
}

void GLHook_glTexCoord2iv(const GLint *v)
{
	(*optr_glTexCoord2iv) (v);
}

void GLHook_glTexCoord2s(GLshort s, GLshort t)
{
	(*optr_glTexCoord2s) (s, t);
}

void GLHook_glTexCoord2sv(const GLshort *v)
{
	(*optr_glTexCoord2sv) (v);
}

void GLHook_glTexCoord3d(GLdouble s, GLdouble t, GLdouble r)
{
	(*optr_glTexCoord3d) (s, t, r);
}

void GLHook_glTexCoord3dv(const GLdouble *v)
{
	(*optr_glTexCoord3dv) (v);
}

void GLHook_glTexCoord3f(GLfloat s, GLfloat t, GLfloat r)
{
	(*optr_glTexCoord3f) (s, t, r);
}

void GLHook_glTexCoord3fv(const GLfloat *v)
{
	(*optr_glTexCoord3fv) (v);
}

void GLHook_glTexCoord3i(GLint s, GLint t, GLint r)
{
	(*optr_glTexCoord3i) (s, t, r);
}

void GLHook_glTexCoord3iv(const GLint *v)
{
	(*optr_glTexCoord3iv) (v);
}

void GLHook_glTexCoord3s(GLshort s, GLshort t, GLshort r)
{
	(*optr_glTexCoord3s) (s, t, r);
}

void GLHook_glTexCoord3sv(const GLshort *v)
{
	(*optr_glTexCoord3sv) (v);
}

void GLHook_glTexCoord4d(GLdouble s, GLdouble t, GLdouble r, GLdouble q)
{
	(*optr_glTexCoord4d) (s, t, r, q);
}

void GLHook_glTexCoord4dv(const GLdouble *v)
{
	(*optr_glTexCoord4dv) (v);
}

void GLHook_glTexCoord4f(GLfloat s, GLfloat t, GLfloat r, GLfloat q)
{
	(*optr_glTexCoord4f) (s, t, r, q);
}

void GLHook_glTexCoord4fv(const GLfloat *v)
{
	(*optr_glTexCoord4fv) (v);
}

void GLHook_glTexCoord4i(GLint s, GLint t, GLint r, GLint q)
{
	(*optr_glTexCoord4i) (s, t, r, q);
}

void GLHook_glTexCoord4iv(const GLint *v)
{
	(*optr_glTexCoord4iv) (v);
}

void GLHook_glTexCoord4s(GLshort s, GLshort t, GLshort r, GLshort q)
{
	(*optr_glTexCoord4s) (s, t, r, q);
}

void GLHook_glTexCoord4sv(const GLshort *v)
{
	(*optr_glTexCoord4sv) (v);
}

void GLHook_glTexCoordPointer(GLint size, GLenum type, GLsizei stride, const GLvoid *pointer)
{
	(*optr_glTexCoordPointer) (size, type, stride, pointer);
}

void GLHook_glTexEnvf(GLenum target, GLenum pname, GLfloat param)
{
	(*optr_glTexEnvf) (target, pname, param);
}

void GLHook_glTexEnvfv(GLenum target, GLenum pname, const GLfloat *params)
{
	(*optr_glTexEnvfv) (target, pname, params);
}

void GLHook_glTexEnvi(GLenum target, GLenum pname, GLint param)
{
	(*optr_glTexEnvi) (target, pname, param);
}

void GLHook_glTexEnviv(GLenum target, GLenum pname, const GLint *params)
{
	(*optr_glTexEnviv) (target, pname, params);
}

void GLHook_glTexGend(GLenum coord, GLenum pname, GLdouble param)
{
	(*optr_glTexGend) (coord, pname, param);
}

void GLHook_glTexGendv(GLenum coord, GLenum pname, const GLdouble *params)
{
	(*optr_glTexGendv) (coord, pname, params);
}

void GLHook_glTexGenf(GLenum coord, GLenum pname, GLfloat param)
{
	(*optr_glTexGenf) (coord, pname, param);
}

void GLHook_glTexGenfv(GLenum coord, GLenum pname, const GLfloat *params)
{
	(*optr_glTexGenfv) (coord, pname, params);
}

void GLHook_glTexGeni(GLenum coord, GLenum pname, GLint param)
{
	(*optr_glTexGeni) (coord, pname, param);
}

void GLHook_glTexGeniv(GLenum coord, GLenum pname, const GLint *params)
{
	(*optr_glTexGeniv) (coord, pname, params);
}

void GLHook_glTexImage1D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLint format, GLenum type, const GLvoid *pixels)
{
	(*optr_glTexImage1D) (target, level, internalformat, width, border, format, type, pixels);
}

void GLHook_glTexImage2D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLint format, GLenum type, const GLvoid *pixels)
{
	(*optr_glTexImage2D) (target, level, internalformat, width, height, border, format, type, pixels);
}

void GLHook_glTexParameterf(GLenum target, GLenum pname, GLfloat param)
{
	(*optr_glTexParameterf) (target, pname, param);
}

void GLHook_glTexParameterfv(GLenum target, GLenum pname, const GLfloat *params)
{
	(*optr_glTexParameterfv) (target, pname, params);
}

void GLHook_glTexParameteri(GLenum target, GLenum pname, GLint param)
{
	(*optr_glTexParameteri) (target, pname, param);
}

void GLHook_glTexParameteriv(GLenum target, GLenum pname, const GLint *params)
{
	(*optr_glTexParameteriv) (target, pname, params);
}

void GLHook_glTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const GLvoid *pixels)
{
	(*optr_glTexSubImage1D) (target, level, xoffset, width, format, type, pixels);
}

void GLHook_glTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type,const GLvoid *pixels)
{
	(*optr_glTexSubImage2D) (target, level, xoffset, yoffset, width, height, format, type,pixels);
}

void GLHook_glTranslated(GLdouble x, GLdouble y, GLdouble z)
{
	(*optr_glTranslated) (x, y, z);
}

void GLHook_glTranslatef(GLfloat x, GLfloat y, GLfloat z)
{
	(*optr_glTranslatef) (x, y, z);
}

void GLHook_glVertex2d(GLdouble x, GLdouble y)
{
	(*optr_glVertex2d) (x, y);
}

void GLHook_glVertex2dv(const GLdouble *v)
{
	(*optr_glVertex2dv) (v);
}

void GLHook_glVertex2f(GLfloat x, GLfloat y)
{
	(*optr_glVertex2f) (x, y);
}

void GLHook_glVertex2fv(const GLfloat *v)
{
	(*optr_glVertex2fv) (v);
}

void GLHook_glVertex2i(GLint x, GLint y)
{
	(*optr_glVertex2i) (x, y);
}

void GLHook_glVertex2iv(const GLint *v)
{
	(*optr_glVertex2iv) (v);
}

void GLHook_glVertex2s(GLshort x, GLshort y)
{
	(*optr_glVertex2s) (x, y);
}

void GLHook_glVertex2sv(const GLshort *v)
{
	(*optr_glVertex2sv) (v);
}

void GLHook_glVertex3d(GLdouble x, GLdouble y, GLdouble z)
{
	(*optr_glVertex3d) (x, y, z);
}

void GLHook_glVertex3dv(const GLdouble *v)
{
	(*optr_glVertex3dv) (v);
}

void GLHook_glVertex3f(GLfloat x, GLfloat y, GLfloat z)
{
	(*optr_glVertex3f) (x, y, z);
}

void GLHook_glVertex3fv(const GLfloat *v)
{
	(*optr_glVertex3fv) (v);
}

void GLHook_glVertex3i(GLint x, GLint y, GLint z)
{
	(*optr_glVertex3i) (x, y, z);
}

void GLHook_glVertex3iv(const GLint *v)
{
	(*optr_glVertex3iv) (v);
}

void GLHook_glVertex3s(GLshort x, GLshort y, GLshort z)
{
	(*optr_glVertex3s) (x, y, z);
}

void GLHook_glVertex3sv(const GLshort *v)
{
	(*optr_glVertex3sv) (v);
}

void GLHook_glVertex4d(GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
	(*optr_glVertex4d) (x, y, z, w);
}

void GLHook_glVertex4dv(const GLdouble *v)
{
	(*optr_glVertex4dv) (v);
}

void GLHook_glVertex4f(GLfloat x, GLfloat y, GLfloat z,GLfloat w)
{
	(*optr_glVertex4f) (x, y, z,w);
}

void GLHook_glVertex4fv(const GLfloat *v)
{
	(*optr_glVertex4fv) (v);
}

void GLHook_glVertex4i(GLint x, GLint y, GLint z, GLint w)
{
	(*optr_glVertex4i) (x, y, z, w);
}

void GLHook_glVertex4iv(const GLint *v)
{
	(*optr_glVertex4iv) (v);
}

void GLHook_glVertex4s(GLshort x, GLshort y, GLshort z, GLshort w)
{
	(*optr_glVertex4s) (x, y, z, w);
}

void GLHook_glVertex4sv(const GLshort *v)
{
	(*optr_glVertex4sv) (v);
}

void GLHook_glVertexPointer(GLint size, GLenum type, GLsizei stride, const GLvoid *pointer)
{
	(*optr_glVertexPointer) (size, type, stride, pointer);
}

void GLHook_glViewport(GLint x, GLint y, GLsizei width, GLsizei height)
{
	(*optr_glViewport) (x, y, width, height);
}

void GLHook_wglChoosePixelFormat(void)
{
	(*optr_wglChoosePixelFormat) ();
}

void GLHook_wglCopyContext(void)
{
	(*optr_wglCopyContext) ();
}

void GLHook_wglCreateContext(void)
{
	(*optr_wglCreateContext) ();
}

void GLHook_wglCreateLayerContext(void)
{
	(*optr_wglCreateLayerContext) ();
}

void GLHook_wglDeleteContext(void)
{
	(*optr_wglDeleteContext) ();
}

void GLHook_wglDescribeLayerPlane(void)
{
	(*optr_wglDescribeLayerPlane) ();
}

void GLHook_wglDescribePixelFormat(void)
{
	(*optr_wglDescribePixelFormat) ();
}

HGLRC GLHook_wglGetCurrentContext(void)
{
	return (*optr_wglGetCurrentContext) ();
}

HDC GLHook_wglGetCurrentDC(void)
{
	return (*optr_wglGetCurrentDC) ();
}

void GLHook_wglGetDefaultProcAddress(void)
{
	(*optr_wglGetDefaultProcAddress) ();
}

void GLHook_wglGetLayerPaletteEntries(void)
{
	(*optr_wglGetLayerPaletteEntries) ();
}

void GLHook_wglGetPixelFormat(void)
{
	(*optr_wglGetPixelFormat) ();
}

PROC GLHook_wglGetProcAddress(LPCSTR lpszProc)
{
	return (*optr_wglGetProcAddress) (lpszProc);
}

void GLHook_wglMakeCurrent(void)
{
	(*optr_wglMakeCurrent) ();
}

void GLHook_wglRealizeLayerPalette(void)
{
	(*optr_wglRealizeLayerPalette) ();
}

void GLHook_wglSetLayerPaletteEntries(void)
{
	(*optr_wglSetLayerPaletteEntries) ();
}

void GLHook_wglSetPixelFormat(void)
{
	(*optr_wglSetPixelFormat) ();
}

void GLHook_wglShareLists(void)
{
	(*optr_wglShareLists) ();
}

void GLHook_wglSwapBuffers(HDC hdc)
{
	(*optr_wglSwapBuffers) (hdc);
}

void GLHook_wglSwapLayerBuffers(void)
{
	(*optr_wglSwapLayerBuffers) ();
}

BOOL GLHook_wglUseFontBitmapsA(HDC hdc, DWORD first, DWORD count, DWORD listBase)
{
	return (*optr_wglUseFontBitmapsA) (hdc, first, count, listBase);
}

void GLHook_wglUseFontBitmapsW(HDC hdc, DWORD first, DWORD count, DWORD listBase)
{
	(*optr_wglUseFontBitmapsW) (hdc, first, count, listBase);
}

BOOL GLHook_wglUseFontOutlinesA(HDC hdc, DWORD first, DWORD count, DWORD listBase, FLOAT deviation, FLOAT extrusion, int format, LPGLYPHMETRICSFLOAT lpgmf)
{
	return (*optr_wglUseFontOutlinesA) (hdc, first, count, listBase, deviation, extrusion, format, lpgmf);
}

void GLHook_wglUseFontOutlinesW(HDC hdc, DWORD first, DWORD count, DWORD listBase, FLOAT deviation, FLOAT extrusion, int format, LPGLYPHMETRICSFLOAT lpgmf)
{
	(*optr_wglUseFontOutlinesW) (hdc, first, count, listBase, deviation, extrusion, format, lpgmf);
}

