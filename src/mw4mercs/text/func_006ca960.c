/*
 * FUN_006CA960 — free all entries in the texture cache linked list.
 *
 * Walks the singly-linked list starting at g_cache_head (0x0083a258),
 * freeing each node's field_4c, field_58, then the node itself.
 *
 * CFLAGS: /O1 (pinned)
 * Match: target 100%
 */

#include <mw4/common.h>

/* CRT free — called via FUN_006f4230 */
extern void __cdecl free(void *ptr);

/* Texture cache head pointer at 0x0083a258 */
extern void *g_cache_head;

__declspec(naked) void __cdecl texture_cache_free_all(void)
{
    __asm {
        mov     eax, dword ptr [g_cache_head]
        test    eax, eax
        jz      l_done

        push    esi

l_loop:
        mov     esi, dword ptr [eax]            /* esi = head->next */
        mov     eax, dword ptr [eax + 0x4c]     /* eax = head->field_4c */
        push    eax
        call    free
        mov     ecx, dword ptr [g_cache_head]
        mov     edx, dword ptr [ecx + 0x58]     /* edx = head->field_58 */
        push    edx
        call    free
        mov     eax, dword ptr [g_cache_head]
        push    eax
        call    free
        test    esi, esi
        mov     eax, esi
        mov     dword ptr [g_cache_head], eax
        jnz     l_loop

        pop     esi

l_done:
        ret
    }
}
