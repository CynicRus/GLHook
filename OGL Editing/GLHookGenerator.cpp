//#define _WIN32_WINNT 0x0403
#include <windows.h>
#include <iostream>
#include "Functions.hpp"
#include "Strings.hpp"

using namespace std;

StringArray GLTypes = StringArray("GLint ", "GLuint ", "GLenum ", "GLfloat ", "GLclampf ",
                                  "GLsizei ", "GLboolean ", "GLubyte ", "GLvoid ", "const ",
                                  "GLbitfield ", "GLclampd ", "GLdouble ", "GLshort ", "GLbyte",
                                  "GLushort ", "GLclampi ", "GLbitfield ", "void", "HDC ", "DWORD ",
                                  "LPGLYPHMETRICSFLOAT ", "FLOAT ", "DOUBLE ", "UINT", "INT ", "float ",
                                  "double ", "int ", "LPCSTR ", "LPSTR ", "LPTSTR ", "LPCTSTR ", "LPLAYERPLANEDESCRIPTOR ",
                                  "LPPIXELFORMATDESCRIPTOR", "PIXELFORMATDESCRIPTOR ", "HGLRC ", "COLORREF ", "BOOL ", "*",
                                  "**");

void CreateGLFunctionsFromTypedefs()
{
    StringArray FileContents;
    ifstream File("C:/Users/Brandon/Desktop/OGL Editing/GLTypedefs.hpp", std::ios::in);
    if (File.is_open())
    {
        string Line;
        while (getline(File, Line))
            FileContents(Line);
        File.close();
    }

    string Temp = string();
    string FuncType = string();
    string PtrStr = string();
    string Final = string();
    ReplacementFlags FalseFlags = ReplacementFlags(false, false);

    for (size_t I = 0; I < FileContents.Size(); I++)
    {
        if ((FileContents[I][0] == 't') && (FileContents[I][1] == 'y'))
        {
            FuncType = Copy(FileContents[I], 9, Pos("(WINAPI", FileContents[I], 9) - 9);
            Temp = Replace(FileContents[I], "typedef ", "", FalseFlags);
            Temp = Replace(Temp, "(WINAPI *ptr_", "", FalseFlags);
            PtrStr = Replace(Temp, ";", "", FalseFlags);
            PtrStr = Copy(PtrStr, Pos(" ", PtrStr, 0) + 2, PtrStr.end() - (PtrStr.begin() + Pos(" ", PtrStr, 0)) + 2);
            Temp = Replace(Temp, ";", "\n{\n\t", FalseFlags);
            Temp = Replace(Temp, ") (", "(", FalseFlags);
            PtrStr = ((FuncType[0] == 'c' && FuncType[1] == 'o') && (PtrStr[0] == 'G' && PtrStr[1] == 'L')) ? Copy(PtrStr, Pos(" ", PtrStr, 0) + 2, PtrStr.end() - PtrStr.begin() - 2) : PtrStr;
            Temp = (FuncType[0] == 'c' && FuncType[1] == 'o') ? Replace(Temp, " gl", " GLHook_gl", FalseFlags) : Replace(Temp, " ", " GLHook_", FalseFlags);
            Temp = "GL_EXPORT " + Temp;

            for (size_t J = 0; J < GLTypes.Size(); J++)
            {
                PtrStr = Replace(PtrStr, GLTypes[J], "", ReplacementFlags(true, false));
                PtrStr = Replace(PtrStr, "*params", "params", ReplacementFlags(true, false));
            }
            PtrStr = "(*optr_" + PtrStr + ";";
            PtrStr = ((FuncType != "void") ? "return " : "") + PtrStr;
            Temp += PtrStr + "\n}\n\n";
            Final += Temp;
        }
    }
    WriteFile("C:/Users/Brandon/Desktop/OGL Editing/GLFunctions.hpp", Final);
}

void CreateGLAddressesFromDefinitions()
{
    StringArray FileContents;
    ifstream File("C:/Users/Brandon/Desktop/OGL Editing/GLHook.def", std::ios::in);
    if (File.is_open())
    {
        string Line;
        while (getline(File, Line))
            FileContents(Line);
        File.close();
    }

    string Final = string();
    for (size_t I = 0; I < FileContents.Size(); I++)
    {
        if ((FileContents[I][0] != ';' ) && (Pos("LIBRARY", FileContents[I], 0) == -1) && (Pos("DESCRIPTION", FileContents[I], 0) == -1) && (Pos("EXPORTS", FileContents[I], 0) == -1))
        {
            StringArray Split = SplitString(FileContents[I], "=    ");
            for (size_t J = 0; J < Split.Size(); J++)
            {
                if (Split[J][0] != 'G' && Split[J][1] != 'L' && Split[J][2] != 'H')
                {
                    Final += "if ((optr_" + Split[J] + " = (ptr_" + Split[J] + ") GetProcAddress(OriginalGL, \"" + Split[J];
                    Final += "\")) == NULL)\n{\n\treturn false;\n}\n\n";
                }
            }
        }
    }
    WriteFile("C:/Users/Brandon/Desktop/OGL Editing/GLProcAddresses.hpp", Final);
}

void CreateGLExternsFromTypedefs()
{
    StringArray FileContents;
    ifstream File("C:/Users/Brandon/Desktop/OGL Editing/GLTypedefs.hpp", std::ios::in);
    if (File.is_open())
    {
        string Line;
        while (getline(File, Line))
            FileContents(Line);
        File.close();
    }

    string Temp = string();
    string Final = string();
    for (size_t I = 0; I < FileContents.Size(); I++)
    {
        int Position = Pos("*ptr_", FileContents[I], 0) + 5;
        if (FileContents[I][0] == 't' && FileContents[I][1] == 'y')
        {
            Temp = Copy(FileContents[I], Position + 1, Pos(") ", FileContents[I], Position) - Position);
            Final += "extern ptr_" + Pad(Temp, 27, " ", false) + "optr_" + Temp + ";\n";
        }
        else
        {
            Final += FileContents[I] + "\n";
            Final = Replace(Final, "TYPEDEFS", "NAMING", ReplacementFlags(false, false));
        }
    }
    WriteFile("C:/Users/Brandon/Desktop/OGL Editing/GLExterns.hpp", Final);
}

void CreateGLDefinitionsFromTypedefs()
{
    StringArray FileContents;
    ifstream File("C:/Users/Brandon/Desktop/OGL Editing/GLTypedefs.hpp", std::ios::in);
    if (File.is_open())
    {
        string Line;
        while (getline(File, Line))
            FileContents(Line);
        File.close();
    }

    string Temp = string();
    string Final = string();

    Final += ";     @Author : Brandon T.\n";
    Final += ";\n";
    Final += ";     @param  : GLHook Definition File.\n";
    Final += ";     @param  : Info From MSDN Documentation.\n\n\n";
    Final += "LIBRARY GLHook\n";
    Final += "DESCRIPTION \"GLHook Definition File\"\n";
    Final += "EXPORTS\n\n";

    for (size_t I = 0; I < FileContents.Size(); I++)
    {
        int Position = Pos("*ptr_", FileContents[I], 0) + 5;
        if (FileContents[I][0] == 't' && FileContents[I][1] == 'y')
        {
            Temp = Copy(FileContents[I], Position + 1, Pos(") ", FileContents[I], Position) - Position);
            Final += Pad(Temp, 27, " ", false) + "=    GLHook_" + Temp + ";\n";
        }
    }
    WriteFile("C:/Users/Brandon/Desktop/OGL Editing/GLHook.def", Final);
}

int main(int argc, char* argv[])
{
    StreamFlags(std::cout);

    CreateGLFunctionsFromTypedefs();
    CreateGLExternsFromTypedefs();
    CreateGLDefinitionsFromTypedefs();
    CreateGLAddressesFromDefinitions();
    CreateGLDefinitionsFromTypedefs();

    cin.get();
    return 0;
}

/*
std::vector<std::vector<RGB>::iterator> CalculateRowPtrs(Bitmaps& BMP)
{
    std::vector<std::vector<RGB>::iterator> Result;
    for (int I = 0; I < BMP.Height() - 1; I++)
        Result.push_back(BMP.PixelsBegin() + BMP.Width() * I);

    return Result;
}

std::vector<std::vector<bool>> CalculateBitmapSkipCoords(Bitmaps& BMP)
{
    std::vector<RGB>::iterator Ptr = BMP.PixelsBegin();
    std::vector<std::vector<bool>> Result(BMP.Height(), std::vector<bool>(BMP.Width()));

    for (int Y = 0; Y < BMP.Height() - 1; Y++)
    {
        for (int X = 0; X < BMP.Width() - 1; X++)
        {
            if ((Ptr->RGBA.R == 0) && (Ptr->RGBA.G == 0) && (Ptr->RGBA.B == 0))
                Result[Y][X] = true;
            else
                Result[Y][X] = false;
            ++Ptr;
        }
    }
    return Result;
}

bool FindBitmapTolerance(Bitmaps& BMP, Bitmaps& BitmapToFind, Point& P, Box Area, int Tolerance)
{
    Finder F;
    std::vector<std::vector<RGB>::iterator> MainRowData = CalculateRowPtrs(BMP);
    std::vector<std::vector<RGB>::iterator> BitmapRowData = CalculateRowPtrs(BitmapToFind);
    int BmpW = BitmapToFind.Width() - 1;
    int BmpH = BitmapToFind.Height() - 1;
    int dX = Area.Width() - BmpW;
    int dY = Area.Height() - BmpH;

    std::vector<std::vector<bool>> SkipCoords = CalculateBitmapSkipCoords(BitmapToFind);

    for (int I = 0; I < dY; I++)
    {
        for (int J = 0; J < dX; J++)
        {
            for (int Y = 0; Y < BmpH; Y++)
            {
                for (int X = 0; X < BmpW; X++)
                {
                    if (!SkipCoords[Y][X])
                        if (!F.SimilarColors(BitmapRowData[Y][X], MainRowData[Y + I][X + J], Tolerance))
                            goto Skip;
                }
            }
            P(J + Area.X1, I + Area.Y1);
            return true;
            Skip:
                continue;
        }
    }
    P(-1, -1);
    return false;
}

bool FindBitmapToleranceX(Bitmaps& BMP, Bitmaps& BitmapToFind, Point& P, Box Area, int Tolerance)
{
    Finder F;
    int BmpW = BitmapToFind.Width() - 1;
    int BmpH = BitmapToFind.Height() - 1;
    int dX = Area.Width() - BmpW;
    int dY = Area.Height() - BmpH;

    for (int I = 0; I < dY; I++)
    {
        for (int J = 0; J < dX; J++)
        {
            for (int Y = 0; Y < BmpH; Y++)
            {
                for (int X = 0; X < BmpW; X++)
                {
                    if (BitmapToFind.GetPixel(X, Y).Color != 0)
                        if (!F.SimilarColors(BitmapToFind.GetPixel(X, Y), BMP.GetPixel(X + J, Y + I), Tolerance))
                            goto Skip;
                }
            }
            P(J + Area.X1, I + Area.Y1);
            return true;
            Skip:
                continue;
        }
    }
    P(-1, -1);
    return false;
}

void PrintMultiMapKeyIndicies(std::multimap<std::string, int> &Tracker, const std::string &Key)
{
    std::multimap<std::string, int>::iterator it;
    std::multimap<std::string, int>::iterator last;


    it = Tracker.find(Key);
    if (it == Tracker.end())
    {
        std::cout<< "Key Not Found!" <<std::endl;
        return;
    }

    std::cout<< "The Key: "<< Key <<" is located at the following Indicies:\n" <<std::endl;
    last = Tracker.upper_bound(Key);

    for (; it != last; ++it)
        std::cout<< it->second <<std::endl;
}

void SendString(HWND Handle, string Text)
{
    int Length = Text.size();
    for (int I = 0; I < Length; I++)
        PostMessage(Handle, WM_CHAR, Text[I], 0);
}

void Mouse(HWND Handle, short X, short Y, bool ClickLeft)
{
    UINT UP = ClickLeft ? WM_LBUTTONUP : WM_RBUTTONUP;
    UINT DOWN = ClickLeft ? WM_LBUTTONDOWN : WM_RBUTTONDOWN;
    WPARAM wParam = ClickLeft ? MK_LBUTTON : MK_RBUTTON;

    PostMessage(Handle, DOWN, wParam, MAKELPARAM(X, Y));
    PostMessage(Handle, UP, wParam, MAKELPARAM(X, Y));
}

bool FindColorTolerance(HDC DC, RGB Color, Point P, Box Area, int Tolerance)
{
    Bitmaps BMP(DC, Area);
    Finder F;
    for (int I = 0; I < BMP.Height(); I++)
    {
        for (int J = 0; J < BMP.Width(); J++)
        {
            if (F.SimilarColors(BMP.GetPixel(J, I), Color, Tolerance))
            {
                P(J, I);
                return true;
            }
        }
    }
    return false;
}

bool FindColorsTolerance(HDC DC, PointArray& PA, RGB Color, Box Area, int Tolerance)
{
    Bitmaps BMP(DC, Area);
    Finder F;
    for (int I = 0; I < BMP.Height(); I++)
    {
        for (int J = 0; J < BMP.Width(); J++)
        {
            if (F.SimilarColors(BMP.GetPixel(J, I), Color, Tolerance))
                PA(Point(J, I));
        }
    }
    return (!PA.Empty());
}
*/
