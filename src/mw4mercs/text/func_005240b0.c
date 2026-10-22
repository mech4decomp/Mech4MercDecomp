/*
 * FUN_005240B0 (70 B) — __stdcall, 3 params (ret 0xC).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int DAT_007dab44;   /* 0x007DAB44 */
extern int DAT_007dab40;   /* 0x007DAB40 */

__declspec(naked) void FUN_005240b0(void)
{
    __asm {
        mov     eax, dword ptr [esp+0xC]
        mov     ecx, dword ptr [eax]
        mov     eax, dword ptr [ecx]
        test    eax, eax
        jge     l_check2
        xor     eax, eax
        ret     0xC
    l_check2:
        cmp     eax, 0x18
        jl      l_body
        xor     eax, eax
        ret     0xC
    l_body:
        mov     edx, dword ptr [DAT_007dab44]   ; mov edx, [0x007DAB44]
        imul    eax, eax, 0x22AC
        mov     ecx, dword ptr [edx]
        xor     ecx, dword ptr [DAT_007dab40]   ; xor ecx, [0x007DAB40]
        mov     edx, dword ptr [ecx+0xC]
        xor     ecx, ecx
        xor     edx, 0x85739531
        mov     cl, byte ptr [edx+eax+0x205F35]
        mov     eax, ecx
        ret     0xC
    }
}
