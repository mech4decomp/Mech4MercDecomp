// func_005475F0 - thiscall: iterates and processes object data, sets flag at [ebp+0x239DF0]

#include "mw4/common.h"

extern void __cdecl FUN_005404A0(void);

__declspec(naked) void __stdcall func_005475F0(void)
{
    __asm {
        push    ebx
        push    ebp
        mov     ebp, ecx
        mov     al, byte ptr [ebp + 0x16]
        test    al, al
        je      L1
        mov     ebx, dword ptr [ebp + 0x50]
        mov     eax, dword ptr [ebx + 0xE4]
        test    eax, eax
        je      L1
        mov     eax, dword ptr [ebx + 0xE8]
        push    esi
        xor     esi, esi
        test    eax, eax
        jle     L2
        push    edi
        lea     edi, [ebx + 0xFC]
    L3:
        push    esi
        mov     ecx, ebp
        call    FUN_005404A0
        fstp    dword ptr [edi]
        mov     eax, dword ptr [ebx + 0xE8]
        inc     esi
        add     edi, 0x50
        cmp     esi, eax
        jl      L3
        pop     edi
    L2:
        mov     byte ptr [ebp + 0x239DF0], 1
        pop     esi
    L1:
        pop     ebp
        pop     ebx
        ret
    }
}
