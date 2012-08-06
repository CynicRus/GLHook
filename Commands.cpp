#include "Commands.hpp"

GLuint Base;
bool LogCalls = false;
bool FontsBuilt = false;

void Commands()
{
    int Keys[] = {VK_F1, VK_F2, VK_F3, VK_F4, VK_F5, VK_F6, VK_F7, VK_F8, VK_F9, VK_F10, VK_F11};

    for (size_t I = 0; I < sizeof(Keys)/sizeof(int); I++)
    {
        if (GetAsyncKeyState(Keys[I]) & 1)
        {
            switch (Keys[I])
            {
                case VK_F1: Stride = 12; break;
                case VK_F2: Stride = 16; break;
                case VK_F3: Stride = 20; break;
                case VK_F4: Stride = 24; break;
                case VK_F5: Stride = 28; break;
                case VK_F6: Stride = 36; break;
                case VK_F7: Stride = 40; break;
                case VK_F8: DrawAllStrides = !DrawAllStrides; break;
                case VK_F9: InfoDisplayed++; break;
                case VK_F10: LogCalls = !LogCalls; break;
                case VK_F11: Overlay = !Overlay; break;
            }
        }
    }
}

void BuildFonts()
{
    HDC DC = wglGetCurrentDC();
    Base = optr_glGenLists(96);
    HFONT hFont = CreateFont(-MulDiv(8, GetDeviceCaps(DC, LOGPIXELSY), 72), 0, 0, 0, FW_NORMAL, false, false, false, ANSI_CHARSET, OUT_TT_PRECIS, CLIP_DEFAULT_PRECIS, PROOF_QUALITY, FF_DONTCARE | DEFAULT_PITCH, "Arial");
    HFONT hOldFont = (HFONT) SelectObject(DC, hFont);
    wglUseFontBitmaps(DC, 32, 96, Base);
    SelectObject(DC, hOldFont);
    DeleteObject(hFont);
    FontsBuilt = true;
}

void KillFont(void)
{
    optr_glDeleteLists(Base, 96);
}

void glPrint(int X, int Y, const char *Format, ...)
{
    if (!FontsBuilt) BuildFonts();
    if (Format == NULL) return;

    optr_glRasterPos2i(X, Y);

    char Text[256];
    va_list	ap;

    va_start(ap, Format);
    vsprintf(Text, Format, ap);
    va_end(ap);

    optr_glPushAttrib(GL_LIST_BIT);
    optr_glListBase(Base - 32);
    optr_glCallLists(strlen(Text), GL_UNSIGNED_BYTE, Text);
    optr_glPopAttrib();
}

void glLogCalls(const char *Format, ...)
{
    if (Format == NULL) return;
    char Text[256];
    va_list ap;

    va_start(ap, Format);
    vsprintf(Text, Format, ap);
    va_end(ap);

    std::ofstream File;
    File.open("C:/Users/Brandon/Desktop/GLHookLog.txt", std::ios::app);
    if (File.is_open())
    {
        File << Text;
        File.close();
    }
}
