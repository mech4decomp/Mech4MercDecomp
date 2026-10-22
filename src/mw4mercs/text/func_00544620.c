// func_00544620 - thiscall: copies a string into a buffer, sets flag

#include "mw4/common.h"

extern void* __cdecl FUN_004084C0(void);

__declspec(naked) void __stdcall func_00544620(const char* str)
{
    

extern int DAT_007dd234;
__asm {
mov eax, dword ptr [DAT_007dd234]
        push    ebx
        mov     ebx, dword ptr [esp + 8]
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        or      ecx, 0xFFFFFFFF
        xor     eax, eax
        mov     edi, ebx
        repne   scasb
        not     ecx
        push    ecx
        mov     byte ptr [esi + 0x3532], 1
        call    FUN_004084C0
        or      ecx, 0xFFFFFFFF
        mov     edx, eax
        add     esp, 8
        mov     edi, ebx
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     dword ptr [esi + 0x204D20], edx
        mov     esi, edi
        shr     ecx, 2
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        pop     edi
        pop     esi
        pop     ebx
        ret     4
    }


}
