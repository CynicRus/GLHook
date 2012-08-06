#include "Models.hpp"

uint32_t Stride = 12;
uint32_t Count = 0;
uint32_t FontListCount = 0;
uint32_t InfoDisplayed = 0;
bool Overlay = false;
bool FontFound = false;
bool BufferFound = false;
bool BufferBound = false;
bool TextureFound = false;
bool CompassFound = false;
bool DrawAllStrides = false;
bool ModelRendering = false;

DataFilter AreaFilter;

BufferObject CurrentBuffer;
std::vector<BufferObject> ListOfBuffers;

Angle CompassAngle;

PossibleItem PI;
PanelItem CurrentItem;
std::vector<PanelItem> ListOfItems;

FontChar CurrentFont;
std::vector<FontChar> ListOfFonts;

FontInfo CurrentFontData;
std::vector<FontInfo> FontData;

Model CurrentModel;
std::vector<Model> ListOfModels;


/** Functions Implementation **/

int GLHook_PanelItemCheckSum(GLenum Target, uint32_t BitsPerPixel)
{
    GLint Width = 0, Height = 0; int Result = 0; int CheckSum = 0;
    glGetTexLevelParameteriv(Target, 0, GL_TEXTURE_WIDTH, &Width);
    glGetTexLevelParameteriv(Target, 0, GL_TEXTURE_HEIGHT, &Height);
    std::vector<unsigned char> PixelData(((Width * BitsPerPixel + 31) / 32) * 4 * Height);
    glGetTexImage(Target, 0, BitsPerPixel > 24 ? GL_BGRA : GL_BGR, GL_UNSIGNED_BYTE, &PixelData[0]);

    unsigned char* BuffPos = static_cast<unsigned char*>(&PixelData[0]);
    Height = (Height < 0 ? -Height : Height);

    for (int I = 12; I < Height; I++)       //Starts at 12 so that it doesn't include the digits.
    {
        for (int J = 0; J < Width; J++)
        {
            Result += *(BuffPos++);
            Result += *(BuffPos++);
            Result += *(BuffPos++);
            CheckSum += (BitsPerPixel > 24 ? *(BuffPos++) : 0);
        }
        if (BitsPerPixel == 24)
            BuffPos += Width % 4;
    }

    return CheckSum;
}

uint32_t CRC32Value(int I)
{
    uint32_t Result = I;
    for (int J = 8; J > 0; J--)
    {
        if (Result & 1)
            Result = (Result >> 1) ^ 0xEDB88320;
        else
            Result >>= 1;
    }
    return Result;
}

uint32_t ModelCheckSum(unsigned char* Data, size_t Size)
{
    uint32_t Result = 0;
    for (; Size != 0; Size--)
    {
        uint32_t Tmp = (Result >> 8) & 0x00FFFFFF;
        uint32_t Tmp2 = CRC32Value((static_cast<int>(Result) ^ *Data++) & 0xFF);
        Result = Tmp ^ Tmp2;
    }
    return Result;
}
