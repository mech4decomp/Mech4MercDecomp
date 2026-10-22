/*
 * FUN_00545660 (148 B) — __stdcall, RET 4.
 *
 * CFLAGS: /O1
 */

#include <windows.h>

extern int __fastcall FUN_0041fd80(int param_1);

extern int DAT_007dab44;
extern int DAT_007dab40;

__declspec(naked) int __stdcall FUN_00545660(int param_1)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        test    esi, esi
        jl      l_return0
        cmp     esi, 7
        jg      l_return0
        mov     eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [eax]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0xc]
        xor     ecx, 0x85739531
        jz      l_return0
        mov     edx, dword ptr [eax + 0xc]
        xor     edx, 0x85739531
        mov     ecx, dword ptr [edx + esi*4 + 0x204d00]
        test    ecx, ecx
        jz      l_return0
        mov     eax, dword ptr [eax + 0xc]
        xor     eax, 0x85739531
        mov     ecx, dword ptr [eax + esi*4 + 0x204d00]
        call    FUN_0041fd80
        test    eax, eax
        jz      l_return0
        mov     ecx, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [ecx]
        xor     eax, dword ptr [DAT_007dab40]
        mov     edx, dword ptr [eax + 0xc]
        xor     edx, 0x85739531
        mov     ecx, dword ptr [edx + esi*4 + 0x204d00]
        call    FUN_0041fd80
        mov     ecx, dword ptr [eax + 0x520]
        test    ecx, ecx
        jz      l_return0
        mov     eax, 1
        pop     esi
        ret     4
    l_return0:
        xor     eax, eax
        pop     esi
        ret     4
    }
}
