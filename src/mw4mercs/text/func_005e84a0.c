// func_005e84a0 - thiscall(2 args): assert via FUN_006fab90, then call FUN_005fbc80

#include "mw4/common.h"

extern int __cdecl FUN_006fab90(int);
extern void __cdecl FUN_005fbc80(void);

__declspec(naked) void __stdcall func_005e84a0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    esi
        push    0x76d414
        mov     esi, ecx
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L1
        int     3
    L1:
        mov     eax, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [ebp + 0x8]
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_005fbc80
        pop     esi
        pop     ebp
        ret     0x8
    }
}
