/*
 * FUN_00495480 (69 B) — __thiscall (ECX = this), RET 8 (2 stack params).
 * Calls FUN_004ac690(param1, param2), then sets a byte flag at
 * this->b0->field_18 + param1, and copies 12 bytes from param2
 * into this->b4 + param1 * 12.
 *
 * CFLAGS: /O1
 */

#include <windows.h>

extern void __fastcall FUN_004ac690(int param1, void *param2);

__declspec(naked) void __fastcall FUN_00495480(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 0x8]
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        push    edi
        mov     esi, ecx
        push    ebx
        call    FUN_004ac690
        mov     eax, dword ptr [esi + 0xb0]
        mov     ecx, dword ptr [eax + 0x18]
        lea     eax, [ecx + ebx]
        or      byte ptr [eax], 0x2
        mov     eax, dword ptr [esi + 0xb4]
        mov     ecx, dword ptr [edi]
        lea     edx, [ebx + ebx * 0x2]
        lea     eax, [eax + edx * 0x4]
        mov     edx, dword ptr [edi + 0x4]
        mov     dword ptr [eax], ecx
        mov     ecx, dword ptr [edi + 0x8]
        pop     edi
        pop     esi
        mov     dword ptr [eax + 0x4], edx
        mov     dword ptr [eax + 0x8], ecx
        pop     ebx
        ret     0x8
    }
}
