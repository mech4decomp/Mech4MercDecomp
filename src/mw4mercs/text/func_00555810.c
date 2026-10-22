// func_00555810 - thiscall: checks flags, allocates memory, conditionally calls FUN_0054C4D0

#include "mw4/common.h"

extern void* __cdecl FUN_0061ACF0(void);
extern int __cdecl FUN_0061AD20(void);
extern void __cdecl FUN_0054C4D0(void);

__declspec(naked) void __stdcall func_00555810(void)
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
        push    0x8000
        call    FUN_0061ACF0
        mov     ecx, eax
        call    FUN_0061AD20
        test    al, al
        je      L1
        mov     edx, dword ptr [esp + 8]
        mov     eax, dword ptr [edx + 0x10]
        test    eax, eax
        jle     L1
        push    8
        mov     ecx, esi
        call    FUN_0054C4D0
    L1:
        pop     esi
        ret     4
    }
}
