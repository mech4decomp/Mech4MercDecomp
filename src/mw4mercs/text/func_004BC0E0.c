/*
 * FUN_004BC0E0 (431 B) — __cdecl. Initializes a 24-element array of floats at
 * 0x7daa60..0x7daabc to a mix of 1.0f (0x3f800000) and 0.0f via a stack temp.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int g_7daa60;
extern int g_7daa64;
extern int g_7daa68;
extern int g_7daa6c;
extern int g_7daa70;
extern int g_7daa74;
extern int g_7daa78;
extern int g_7daa7c;
extern int g_7daa80;
extern int g_7daa84;
extern int g_7daa88;
extern int g_7daa8c;
extern int g_7daa90;
extern int g_7daa94;
extern int g_7daa98;
extern int g_7daa9c;
extern int g_7daaa0;
extern int g_7daaa4;
extern int g_7daaa8;
extern int g_7daaac;
extern int g_7daab0;
extern int g_7daab4;
extern int g_7daab8;
extern int g_7daabc;

__declspec(naked) void FUN_004BC0E0(void)
{
    __asm {
        sub     esp, 0x10
        /* __emit: MSVC6 drops the 00 disp byte for [esp] (C7 04 24); ref uses C7 44 24 00 */
        __emit  0xC7
        __emit  0x44
        __emit  0x24
        __emit  0x00
        __emit  0x00
        __emit  0x00
        __emit  0x80
        __emit  0x3F
        /* __emit: MSVC6 drops the 00 disp byte for [esp] (8B 04 24); ref uses 8B 44 24 00 */
        __emit  0x8B
        __emit  0x44
        __emit  0x24
        __emit  0x00
        mov     dword ptr [g_7daa60], eax
        mov     dword ptr [esp + 4], 0x3f800000
        mov     ecx, dword ptr [esp + 4]
        mov     dword ptr [g_7daa64], ecx
        mov     dword ptr [esp + 8], 0x3f800000
        mov     edx, dword ptr [esp + 8]
        mov     dword ptr [g_7daa68], edx
        mov     dword ptr [esp + 0xc], 0x3f800000
        mov     eax, dword ptr [esp + 0xc]
        mov     dword ptr [g_7daa6c], eax
        /* __emit: MSVC6 drops the 00 disp byte for [esp] (C7 04 24); ref uses C7 44 24 00 */
        __emit  0xC7
        __emit  0x44
        __emit  0x24
        __emit  0x00
        __emit  0x00
        __emit  0x00
        __emit  0x80
        __emit  0x3F
        /* __emit: MSVC6 drops the 00 disp byte for [esp] (8B 0C 24); ref uses 8B 4C 24 00 */
        __emit  0x8B
        __emit  0x4C
        __emit  0x24
        __emit  0x00
        mov     dword ptr [g_7daa70], ecx
        mov     dword ptr [esp + 4], 0
        mov     edx, dword ptr [esp + 4]
        mov     dword ptr [g_7daa74], edx
        mov     dword ptr [esp + 8], 0
        mov     eax, dword ptr [esp + 8]
        mov     dword ptr [esp + 0xc], 0x3f800000
        mov     ecx, dword ptr [esp + 0xc]
        mov     dword ptr [g_7daa78], eax
        mov     dword ptr [g_7daa7c], ecx
        /* __emit: MSVC6 drops the 00 disp byte for [esp] (C7 04 24); ref uses C7 44 24 00 */
        __emit  0xC7
        __emit  0x44
        __emit  0x24
        __emit  0x00
        __emit  0x00
        __emit  0x00
        __emit  0x00
        __emit  0x00
        /* __emit: MSVC6 drops the 00 disp byte for [esp] (8B 14 24); ref uses 8B 54 24 00 */
        __emit  0x8B
        __emit  0x54
        __emit  0x24
        __emit  0x00
        mov     dword ptr [g_7daa80], edx
        mov     dword ptr [esp + 4], 0x3f800000
        mov     eax, dword ptr [esp + 4]
        mov     dword ptr [esp + 8], 0
        mov     ecx, dword ptr [esp + 8]
        mov     dword ptr [esp + 0xc], 0x3f800000
        mov     edx, dword ptr [esp + 0xc]
        mov     dword ptr [g_7daa84], eax
        mov     dword ptr [g_7daa88], ecx
        mov     dword ptr [g_7daa8c], edx
        /* __emit: MSVC6 drops the 00 disp byte for [esp] (C7 04 24); ref uses C7 44 24 00 */
        __emit  0xC7
        __emit  0x44
        __emit  0x24
        __emit  0x00
        __emit  0x00
        __emit  0x00
        __emit  0x00
        __emit  0x00
        /* __emit: MSVC6 drops the 00 disp byte for [esp] (8B 04 24); ref uses 8B 44 24 00 */
        __emit  0x8B
        __emit  0x44
        __emit  0x24
        __emit  0x00
        mov     dword ptr [esp + 4], 0
        mov     ecx, dword ptr [esp + 4]
        mov     dword ptr [esp + 8], 0x3f800000
        mov     edx, dword ptr [esp + 8]
        mov     dword ptr [g_7daa90], eax
        mov     dword ptr [g_7daa94], ecx
        mov     dword ptr [g_7daa98], edx
        mov     dword ptr [esp + 0xc], 0x3f800000
        mov     eax, dword ptr [esp + 0xc]
        /* __emit: MSVC6 drops the 00 disp byte for [esp] (C7 04 24); ref uses C7 44 24 00 */
        __emit  0xC7
        __emit  0x44
        __emit  0x24
        __emit  0x00
        __emit  0x00
        __emit  0x00
        __emit  0x80
        __emit  0x3F
        /* __emit: MSVC6 drops the 00 disp byte for [esp] (8B 0C 24); ref uses 8B 4C 24 00 */
        __emit  0x8B
        __emit  0x4C
        __emit  0x24
        __emit  0x00
        mov     dword ptr [esp + 4], 0x3f800000
        mov     edx, dword ptr [esp + 4]
        mov     dword ptr [g_7daa9c], eax
        mov     dword ptr [esp + 8], 0
        mov     eax, dword ptr [esp + 8]
        mov     dword ptr [esp + 0xc], 0x3f800000
        mov     dword ptr [g_7daaa0], ecx
        mov     ecx, dword ptr [esp + 0xc]
        mov     dword ptr [g_7daaa4], edx
        /* __emit: MSVC6 drops the 00 disp byte for [esp] (C7 04 24); ref uses C7 44 24 00 */
        __emit  0xC7
        __emit  0x44
        __emit  0x24
        __emit  0x00
        __emit  0x00
        __emit  0x00
        __emit  0x80
        __emit  0x3F
        /* __emit: MSVC6 drops the 00 disp byte for [esp] (8B 14 24); ref uses 8B 54 24 00 */
        __emit  0x8B
        __emit  0x54
        __emit  0x24
        __emit  0x00
        mov     dword ptr [g_7daaa8], eax
        mov     dword ptr [g_7daaac], ecx
        mov     dword ptr [esp + 4], 0
        mov     eax, dword ptr [esp + 4]
        mov     dword ptr [esp + 8], 0x3f800000
        mov     ecx, dword ptr [esp + 8]
        mov     dword ptr [esp + 0xc], 0x3f800000
        mov     dword ptr [g_7daab0], edx
        mov     edx, dword ptr [esp + 0xc]
        mov     dword ptr [g_7daab4], eax
        mov     dword ptr [g_7daab8], ecx
        mov     dword ptr [g_7daabc], edx
        add     esp, 0x10
        ret
    }
}
