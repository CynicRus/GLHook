#ifndef MODELS_HPP_INCLUDED
#define MODELS_HPP_INCLUDED

#include <gl/gl.h>
#include <gl/glu.h>
#include <gl/glext.h>
#include <iostream>
#include <vector>

                                        /** Data Structures **/

struct DataFilter
{
    GLint ID;
    GLint X1, Y1, X2, Y2;
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
    GLint SX, SX;
    GLfloat X, Y, Z;
    GLint Stride, ID;

    struct Triangles
    {
        GLfloat X1, Y1, Z1;
        GLfloat X2, Y2, Z2;
        GLfloat X3, Y3, Z3;
    };
};

                                    /** Functions **/

int GLHook_PanelItemCheckSum(uint32_t BitsPerPixel = 32);


                                    /** Variables -- Data Holders **/

extern uint32_t Stride;
extern uint32_t Count;
extern uint32_t InfoDisplayed;

extern bool Overlay;
extern bool DrawModel;
extern bool TextureFound;
extern bool DrawAllStrides;

extern DataFilter AreaFilter;
extern PossibleItem PI;
extern PanelItem CurrentItem;                   //Stack alloc is much much faster!
extern std::vector<PanelItem> ListOfItems;      //Do not use pointers.. there is overhead with dereferencing && heap alloc.

extern Model CurrentModel;
extern std::vector<Model> ListOfModels;

#endif // MODELS_HPP_INCLUDED
