// func_005e7890 - thiscall: assert("Not implemented") then forward to func_005e7b90
// FUN_006fab90 is the assert/log helper (returns nonzero on failure -> INT3).

#include "mw4/common.h"

extern int __cdecl FUN_006fab90(const char *msg);
extern void __cdecl FUN_005e7b90(void);

__declspec(naked) void __stdcall func_005e7890(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    esi
        push    0x76d414
        mov     esi, ecx
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      L1
        int     3
    L1:
        mov     eax, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [ebp + 0x8]
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_005e7b90
        pop     esi
        pop     ebp
        ret     8
    }
}
