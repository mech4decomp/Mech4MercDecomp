/*
 * ZlogLib.dll - FUN_1000134b (0x1000134B, 12 B, __cdecl)
 * fflush(FILE*) wrapper.
 * Transcribed from ZlogLib.dll reference bytes.
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * FUN_1000134b (12 B) -- fflush(FILE*) wrapper. Calls the function pointer
 * stored at the IAT slot 0x10003018 (matches the naked reference).
 * FF742404 FF1530180010 59 C3
 * push [esp+4]; call [0x10003018]; pop ecx; ret
 */

#include <windows.h>

extern void (*g_10003018)(void);

__declspec(naked) void FUN_1000134b(void)
{
    __asm {
        push    dword ptr [esp + 0x4]
        call    dword ptr [g_10003018]
        pop     ecx
        ret
    }
}
