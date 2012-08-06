#ifndef MODELS_HPP_INCLUDED
#define MODELS_HPP_INCLUDED

#include <gl/gl.h>
#include <gl/glu.h>
#include <gl/glext.h>
#include <iostream>
#include <vector>
#include <windows.h>

                                        /** Data Structures **/

struct RGBA
{
    GLubyte R, G, B, A;
};

struct DataFilter
{
    GLint ID;
    GLint X1, Y1, X2, Y2;
};

struct Angle
{
    struct
    {
        GLboolean Found;
        GLint VertexCount;
        GLfloat VX[4], VY[4];
        GLfloat DegreeAngle;
        GLfloat RadianAngle;
    } Compass;
};

struct FontInfo
{
    GLuint ID;
    RGBA Colour;
    GLfloat X, Y;
    GLchar Symbol;
    GLboolean Shadow;
    GLboolean Rendering;
    GLfloat Translate[3];
    struct
    {
        GLint VX[4], VY[4];
        GLint TX[4], TY[4];
    } Quad;
};

struct FontChar
{
    GLuint ID;
    GLchar Symbol;
    GLboolean LastFont;
    GLint TCount, VCount;
    struct
    {
        GLint VX[4], VY[4];
        GLint TX[4], TY[4];
    } Quad;
};

struct BufferObject
{
    GLint ID;
    GLsizei Size;
    GLboolean Reserved;
    GLenum Type, Usage;
    const GLvoid* BufferPointer;
};

struct PossibleItem
{
    GLint ID;
    GLint TID;
    GLint CoordCount;
    GLint SX[4], SY[4];
};

struct PanelItem
{
    GLint ID;
    GLint TextureID;
    GLint X, Y;
    GLint SX[4], SY[4];
};

struct Model
{
    GLint SX, SY;
    GLint X, Y, Z;
    GLuint Stride, ID;
    GLboolean NullVertex;
    const GLvoid* VertexPointer;
    GLint TriangleCount;
};

                                    /** Functions **/

int GLHook_PanelItemCheckSum(GLenum Target, uint32_t BitsPerPixel = 32);
uint32_t CRC32Value(int I);
uint32_t ModelCheckSum(unsigned char* Data, size_t Size);


                                    /** Variables -- Data Holders **/

extern uint32_t Stride;
extern uint32_t Count;
extern uint32_t FontListCount;
extern uint32_t InfoDisplayed;

extern bool Overlay;
extern bool FontFound;
extern bool BufferFound;
extern bool BufferBound;
extern bool TextureFound;
extern bool CompassFound;
extern bool DrawAllStrides;
extern bool ModelRendering;

extern DataFilter AreaFilter;

extern BufferObject CurrentBuffer;
extern std::vector<BufferObject> ListOfBuffers;

extern Angle CompassAngle;

extern PossibleItem PI;
extern PanelItem CurrentItem;
extern std::vector<PanelItem> ListOfItems;      //Do not use pointers..

extern FontChar CurrentFont;
extern std::vector<FontChar> ListOfFonts;

extern FontInfo CurrentFontData;
extern std::vector<FontInfo> FontData;

extern Model CurrentModel;
extern std::vector<Model> ListOfModels;

#endif // MODELS_HPP_INCLUDED
