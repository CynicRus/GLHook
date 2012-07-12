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
            Temp = "GL_EXPORT __stdcall " + Temp; //__stdcall added.

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
                //if (Split[J][0] != 'G' && Split[J][1] != 'L' && Split[J][2] != 'H' && Split[J][3] != 'O' && Split[J][4] != 'O' && Split[J][5] != 'K')
                if (Pos("GLHook", Split[J], 0) == -1)
                {
                    //Final += "MessageBox(NULL, \"" + Split[J] + "\", \"CrashReport\", 0);\n";
                    Final += "if ((optr_" + Split[J] + " = (ptr_" + Split[J] + ") GetProcAddress(OriginalGL, \"" + Split[J];
                    Final += "\")) == NULL)\n{\n\treturn false;\n}\n\n";

                    //Final += "\")) == NULL)\n{\n\t";
                    //Final += "MessageBox(NULL, \"" + Split[J] + "\", \"CrashReport\", 0);\n\t";
                    //Final += "return false;\n}\n\n";
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

void CreateGLNamingListFromExterns()
{
    StringArray FileContents;
    ifstream File("C:/Users/Brandon/Desktop/OGL Editing/GLExterns.hpp", std::ios::in);
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
        if (FileContents[I][0] == 'e')
            Final += Replace(FileContents[I], "extern ", "", ReplacementFlags(false, false)) + "\n";
    }
    WriteFile("C:/Users/Brandon/Desktop/OGL Editing/GLNamingList.hpp", Final);
}

void GLCompare()
{
    string ListOfGLExports = ReadFile("C:/Users/Brandon/Desktop/ListOfGLExports.hpp", false);
    string CurrentExports = ReadFile("C:/Users/Brandon/Desktop/CurrentExports.hpp", false);

    StringArray ListOfGLExportsSplit = SplitString(ListOfGLExports, "\n");
    StringArray CurrentExportsSplit = SplitString(CurrentExports, "\n");
    string Temp = string();
    string Final = string();

    for (size_t I = 0; I < ListOfGLExportsSplit.Size(); I++)
    {
        if (Pos(ListOfGLExportsSplit[I], CurrentExports, 0) == -1)
        {
            cout<<ListOfGLExportsSplit[I]<<endl;
        }
    }
}


int main(int argc, char* argv[])
{
    StreamFlags(std::cout);

    CreateGLFunctionsFromTypedefs();
    CreateGLExternsFromTypedefs();
    CreateGLDefinitionsFromTypedefs();
    CreateGLAddressesFromDefinitions();
    CreateGLDefinitionsFromTypedefs();
    CreateGLNamingListFromExterns();

    //GLCompare();

    cin.get();
    return 0;
}