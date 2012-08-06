#ifndef COMMANDS_HPP_INCLUDED
#define COMMANDS_HPP_INCLUDED

#include <windows.h>
#include "GLHook.hpp"
#include "Models.hpp"
#include <vector>
#include <fstream>
#include <cstdio>       //I really hate having to use variadic functions instead of templates.. //Todo: Fix it (glPrint).

extern GLuint Base;
extern bool LogCalls;
extern bool FontsBuilt;
extern bool DrawItem;

void Commands();
void BuildFonts(void);
void KillFont(void);
void glPrint(int X, int Y, const char *Format, ...);
void glLogCalls(const char *Format, ...);

#endif // COMMANDS_HPP_INCLUDED
