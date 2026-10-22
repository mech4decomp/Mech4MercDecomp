/*
 * FUN_006CC6E0 — free a singly-linked list starting at field_08.
 *   Walks the list (each node has next at +0x04), frees each node
 *   via FUN_006F4230.
 *
 * __fastcall (ECX = this), RET 0.
 *
 * CFLAGS: /O1 (pinned)
 * Match: target 100%
 */

#include <mw4/common.h>

/* FUN_006F4230 — gos_Free: __stdcall, RET 4. */
extern void __stdcall gos_free(void *ptr);

__declspec(naked) void __fastcall func_006cc6e0(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 8]
        test    eax, eax
        jz      L_done
        push    esi
    L_loop:
        mov     esi, dword ptr [eax + 4]
        push    eax
        call    gos_free
        test    esi, esi
        mov     eax, esi
        jnz     L_loop
        pop     esi
    L_done:
        ret
    }
}
