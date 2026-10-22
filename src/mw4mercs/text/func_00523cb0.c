/*
 * FUN_00523CB0 (91 B) — __stdcall, 3 params (ret 0xC).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int DAT_007dab44;   /* 0x007DAB44 */
extern int DAT_007dab40;   /* 0x007DAB40 */
extern void __cdecl FUN_00546550(void);

__declspec(naked) void FUN_00523cb0(void)
{
    __asm {
        mov     ecx, dword ptr [esp+0xC]
        mov     eax, dword ptr [ecx]
        mov     eax, dword ptr [eax]
        test    eax, eax
        mov     ecx, dword ptr [ecx+4]
        mov     ecx, dword ptr [ecx]
        jge     l_check2
        xor     eax, eax
        ret     0xC
    l_check2:
        cmp     eax, 0x18
        jl      l_check3
        xor     eax, eax
        ret     0xC
    l_check3:
        test    ecx, ecx
        jge     l_check4
        xor     eax, eax
        ret     0xC
    l_check4:
        cmp     ecx, 8
        jle     l_body
        xor     eax, eax
        ret     0xC
    l_body:
        mov     edx, dword ptr [DAT_007dab44]   ; mov edx, [0x007DAB44]
        push    ecx
        mov     ecx, dword ptr [DAT_007dab40]   ; mov ecx, [0x007DAB40]
        push    eax
        mov     eax, dword ptr [edx]
        xor     eax, ecx
        mov     ecx, dword ptr [eax+0xC]
        xor     ecx, 0x85739531
        call    FUN_00546550
        mov     eax, 1
        ret     0xC
    }
}
