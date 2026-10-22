// func_00554620 - thiscall: checks flags and conditionally calls vtable method + FUN_0054C4D0

#include "mw4/common.h"

extern void __cdecl FUN_0054C4D0(void);

__declspec(naked) void __stdcall func_00554620(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x384]
        mov     ecx, dword ptr [eax + 0x10]
        shr     ecx, 0x13
        test    cl, 1
        jne     L1
        mov     al, byte ptr [esi + 0x589]
        test    al, al
        jne     L1
        mov     al, byte ptr [esi + 0x5AC]
        test    al, al
        jne     L1
        mov     edx, dword ptr [esp + 8]
        mov     eax, dword ptr [edx + 0x10]
        test    eax, eax
        jle     L1
        mov     ecx, dword ptr [esi + 0xE0]
        mov     eax, dword ptr [ecx]
        push    0
        push    2
        call    dword ptr [eax + 4]
        push    3
        mov     ecx, esi
        call    FUN_0054C4D0
    L1:
        pop     esi
        ret     4
    }
}
