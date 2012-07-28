#include "Models.hpp"

uint32_t Stride = 12;
uint32_t Count = 0;
uint32_t InfoDisplayed = 0;
bool Overlay = false;
bool DrawModel = false;
bool TextureFound = false;
bool DrawAllStrides = false;

DataFilter AreaFilter;
PossibleItem PI;
PanelItem CurrentItem;
std::vector<PanelItem> ListOfItems;

Model CurrentModel;
std::vector<Model> ListOfModels;


/** Functions Implementation **/

int GLHook_PanelItemCheckSum(uint32_t BitsPerPixel)
{
    //if (Width == 36 && Height == 32) return true; //Inventory Items if the texture Data has these dimensions. Else it's a panel item.
    GLint Width = 0, Height = 0;
    glGetTexLevelParameteriv(GL_TEXTURE_RECTANGLE_NV, 0, GL_TEXTURE_WIDTH, &Width);
    glGetTexLevelParameteriv(GL_TEXTURE_RECTANGLE_NV, 0, GL_TEXTURE_HEIGHT, &Height);

    if (Width > 30 || Height > 30 || Width < 60 || Height < 60)
    {
        int Result = 0;
        int CheckSum = 0;
        std::vector<unsigned char> PixelData(((Width * BitsPerPixel + 31) / 32) * 4 * Height);
        glGetTexImage(GL_TEXTURE_RECTANGLE_NV, 0, BitsPerPixel > 24 ? GL_BGRA : GL_BGR, GL_UNSIGNED_BYTE, &PixelData[0]);

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
        Result = CheckSum;
        return Result;
    }
    return 0;
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

uint32_t CalculateBlockCRC32(uint32_t Count, unsigned char *Buffer)
{
    unsigned long ulCRC = 0;

    while (Count-- != 0)
    {
        unsigned long Tmp = (ulCRC >> 8) & 0x00FFFFFFL;
        unsigned long Tmp2 = CRC32Value((static_cast<int>(ulCRC) ^ *Buffer++) & 0xFF);
        ulCRC = Tmp ^ Tmp2;
    }
    return ulCRC;
}
