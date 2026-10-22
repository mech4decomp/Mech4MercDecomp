/*
 * FUN_00494960 (37 B) — __fastcall (ECX = this).
 * Walks linked list at field_14 calling vtable[4] (offset 0x10)
 * on each node, then clears bit 0 of field_9c.
 *
 * CFLAGS: /O1
 */

#include <windows.h>

__declspec(naked) void __fastcall FUN_00494960(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, ecx
        mov     esi, dword ptr [edi + 0x14]
    l_loop_head:
        test    esi, esi
        jz      l_clear
        mov     ecx, dword ptr [esi]
        test    ecx, ecx
        mov     esi, dword ptr [esi + 0x4]
        jz      l_clear
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0x10]
        jmp     l_loop_head
    l_clear:
        and     dword ptr [edi + 0x9c], 0xfffffffe
        pop     edi
        pop     esi
        ret
    }
}
