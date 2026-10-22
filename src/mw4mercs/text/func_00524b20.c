/*
 * FUN_00524B20 (79 B) — __stdcall, 2 params (ret 8).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int DAT_007dab44;   /* 0x007DAB44 */
extern int DAT_007dab40;   /* 0x007DAB40 */

__declspec(naked) void FUN_00524b20(void)
{
    __asm {
        mov     eax, dword ptr [esp+4]
        mov     edx, dword ptr [eax+4]
        mov     ecx, dword ptr [eax+8]
        mov     eax, dword ptr [edx]
        test    eax, eax
        jge     l_check2
        mov     dword ptr [ecx], -1
    l_check2:
        cmp     eax, 0x18
        jl      l_body
        mov     dword ptr [ecx], -1
    l_body:
        mov     edx, dword ptr [DAT_007dab44]   ; mov edx, [0x007DAB44]
        imul    eax, eax, 0x22AC
        mov     edx, dword ptr [edx]
        xor     edx, dword ptr [DAT_007dab40]   ; xor edx, [0x007DAB40]
        mov     edx, dword ptr [edx+0xC]
        xor     edx, 0x85739531
        mov     eax, dword ptr [edx+eax+0x205F3C]
        mov     dword ptr [ecx], eax
        mov     eax, 1
        ret     8
    }
}
