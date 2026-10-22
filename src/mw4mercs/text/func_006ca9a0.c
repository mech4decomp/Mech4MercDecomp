/*
 * FUN_006CA9A0 — LRU cache eviction sweep.
 *
 * Walks the texture cache linked list (head at g_cache_head), increments
 * each entry's field_0x50 (use counter), and evicts entries whose counter
 * exceeds 5 (i.e. >= 6 after increment).
 *
 * __cdecl (no params, plain RET).
 * CFLAGS: /O1 (pinned)
 * Match: 100%
 */

#include <mw4/common.h>

extern void *g_cache_head;      /* 0x0083a258 */
extern void __cdecl free2(void *);  /* FUN_006f4230 = CRT free */

__declspec(naked) void __cdecl texture_lru_evict(void)
{
    __asm {
        /* ECX = g_cache_head (preserved throughout as "head" reference) */
        mov     ecx, dword ptr [g_cache_head]
        push    esi
        mov     esi, ecx                    /* esi = cur = head */
        test    esi, esi
        jz      l_done                      /* if null, done */

        push    edi

l_loop:
        /* load count and next */
        mov     edx, dword ptr [esi + 0x50] /* edx = cur->count */
        mov     edi, dword ptr [esi]        /* edi = cur->next */
        inc     edx                         /* count++ */
        mov     eax, edx
        cmp     eax, 0x5
        mov     dword ptr [esi + 0x50], edx /* store count */
        jbe     l_skip_evict                /* if count <= 5, skip */

        /* evict this entry */
        cmp     esi, ecx                    /* is cur == head? */
        jnz     l_unlink_search

        /* cur is head: head = cur->next */
        mov     dword ptr [g_cache_head], edi
        jmp     l_do_free

l_unlink_search:
        /* walk from ECX (head) to find prev node whose next == cur */
        mov     eax, dword ptr [ecx]        /* eax = head->next */
        cmp     eax, esi
        jz      l_found_prev
l_find_loop:
        mov     ecx, eax
        mov     eax, dword ptr [ecx]
        cmp     eax, esi
        jnz     l_find_loop
l_found_prev:
        /* prev->next = cur->next */
        mov     dword ptr [ecx], edi

l_do_free:
        /* free three allocations */
        mov     eax, dword ptr [esi + 0x4c]
        push    eax
        call    free2
        mov     ecx, dword ptr [esi + 0x58]
        push    ecx
        call    free2
        push    esi
        call    free2
        mov     ecx, dword ptr [g_cache_head]   /* reload head */

l_skip_evict:
        test    edi, edi
        mov     esi, edi                    /* cur = next */
        jnz     l_loop

        pop     edi
l_done:
        pop     esi
        ret
    }
}
