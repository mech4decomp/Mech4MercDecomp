// func_005480C0 - thiscall: allocates buffer, copies data, null-terminates
// struct { void* ptr; void* end; void* cap; }* this

#include "mw4/common.h"

extern void* __cdecl FUN_004084D0(void);

__declspec(naked) void __stdcall func_005480C0(const void* src, int len)
{
    

extern int DAT_0076b28c;
__asm {
push    ebx
        mov     ebx, dword ptr [esp + 0xC]
        push    ebp
        mov     ebp, dword ptr [esp + 0xC]
        sub     ebx, ebp
        push    esi
        lea     esi, [ebx + 1]
        cmp     esi, -2
        push    edi
        mov     edi, ecx
        ja      L1
        test    esi, esi
        je      L2
        push    esi
        call    FUN_004084D0
        add     esp, 4
        jmp     L3
    L2:
        xor     eax, eax
    L3:
        mov     dword ptr [edi], eax
        mov     dword ptr [edi + 4], eax
        add     eax, esi
        mov     dword ptr [edi + 8], eax
    L1:
        mov     esi, dword ptr [edi]
        push    ebx
        push    ebp
        push    esi
        call dword ptr [DAT_0076b28c]
        mov     eax, dword ptr [esp + 0x24]
        sub     esi, ebp
        add     esp, 0xC
        add     eax, esi
        mov     dword ptr [edi + 4], eax
        pop     edi
        pop     esi
        pop     ebp
        mov     byte ptr [eax], 0
        pop     ebx
        ret     8
    }


}
