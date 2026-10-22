/*
 * FUN_006CD710 — free all linked-list entries in a hash table at
 *   0x0083EDE8 (0x100 slots, each slot is a singly-linked list head),
 *   then sets DAT_0083F5E8 = 0.
 *
 * __cdecl, RET 0.
 *
 * CFLAGS: /O1 (pinned)
 * Match: target 100%
 */

#include <mw4/common.h>

/* FUN_006F4230 — gos_Free: __stdcall, RET 4. */
extern void __stdcall gos_free(void *ptr);

__declspec(naked) void __cdecl func_006cd710(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, 0x83ede8
    L_slot:
        mov     eax, dword ptr [edi]
        test    eax, eax
        jz      L_next
    L_chain:
        mov     esi, dword ptr [eax]
        push    eax
        call    gos_free
        test    esi, esi
        mov     eax, esi
        jnz     L_chain
    L_next:
        mov     dword ptr [edi], 0
        add     edi, 4
        cmp     edi, 0x83f1e8
        jl      L_slot
        pop     edi
        _emit 0xC7
        _emit 0x05
        _emit 0xE8
        _emit 0xF5
        _emit 0x83
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        pop     esi
        ret
    }
}
