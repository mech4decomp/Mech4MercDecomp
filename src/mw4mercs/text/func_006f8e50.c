/*
 * FUN_006F8E50 (37 B) — Prepend a node to a doubly-linked list headed
 * by global 0x8493C8. Sets node->next = head, node->prev = 0.
 * If head != 0, sets head->prev = node. Then head = node.
 * Returns 1.
 *
 * __stdcall RET 4.
 *
 * Disassembly:
 *   8B 0D C8 93 84 00 mov     ecx, [0x8493C8]
 *   85 C9             test    ecx, ecx
 *   8B 44 24 04       mov     eax, [esp + 4]
 *   89 48 08          mov     [eax + 8], ecx
 *   C7 40 0C 00 00 00 00 mov   dword ptr [eax + 0xc], 0
 *   74 03             jz      set_head
 *   89 41 0C          mov     [ecx + 0xc], eax
 *   A3 C8 93 84 00    mov     [0x8493C8], eax
 *   B0 01             mov     al, 1
 *   C2 04 00          ret     4
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __stdcall FUN_006f8e50(void *node)
{
    __asm {
        _emit 0x8B
        _emit 0x0D
        _emit 0xC8
        _emit 0x93
        _emit 0x84
        _emit 0x00
        test    ecx, ecx
        mov     eax, dword ptr [esp + 4]
        mov     dword ptr [eax + 8], ecx
        mov     dword ptr [eax + 0xc], 0
        jz      set_head
        mov     dword ptr [ecx + 0xc], eax
set_head:
        _emit 0xA3
        _emit 0xC8
        _emit 0x93
        _emit 0x84
        _emit 0x00
        mov     al, 1
        ret     4
    }
}
