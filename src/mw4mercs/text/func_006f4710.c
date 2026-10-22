/*
 * FUN_006F4710 — Heap name registry (319 B).
 *
 * Called by FUN_00415D70 (singleton_ctor) during singleton initialization.
 * Also called from other heap/name-registry paths.
 *
 * Registers a named heap entry in a global linked list + hash table.
 * Parameters:
 *   param_1 (ebp+0x08): name string (must be <= 127 chars)
 *   param_2 (ebp+0x0C): always 0 (unused flag/reserved)
 *   param_3 (ebp+0x10): parent heap pointer (must have magic 0x7FBADBAD at +0x0C)
 *
 * Returns: pointer to the heap entry (existing or newly allocated).
 *
 * __stdcall, RET 0xC (3 stack params).
 * CFLAGS: /O1
 */

/* ---- external functions ---- */
void __stdcall FUN_006FAB90(const char *msg);

/* __imp__malloc — IAT entry for malloc (from msvcrt.lib) */
extern int __imp__malloc;

/* __imp__stricmp — IAT entry for _stricmp (from msvcrt.lib) */
extern int __imp__stricmp;

/* ---- external globals ---- */
/* Global linked-list head of heap entries (0x00849328) */
extern int g_heap_list_head;
/* Hash table for fast name lookup (256 slots at 0x00848E90) */
extern int g_heap_hash_table[];

__declspec(naked) void __stdcall heap_name_register(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ebx
        push    esi
        push    edi

        /* ---- Validate param_1 (name string) ---- */
        mov     edi, dword ptr [ebp + 8]        /* EDI = name */
        test    edi, edi
        je      l_check_name_fail               /* if NULL, assert */

        /* strlen(name) */
        or      ecx, 0xffffffff                 /* ECX = -1 */
        xor     eax, eax
        repne   scasb                           /* scan for null */
        not     ecx                             /* ECX = strlen + 1 */
        dec     ecx                             /* ECX = strlen */
        cmp     ecx, 0x7f
        jbe     l_name_ok                       /* if strlen <= 127, ok */

    l_check_name_fail:
        push    0x79f94c                        /* "Invalid heap name" */
        call    FUN_006FAB90
        add     esp, 4
        test    eax, eax
        je      l_name_ok
        int     3                               /* assert failure */

    l_name_ok:
        /* ---- Validate param_3 (parent heap pointer) ---- */
        mov     edi, dword ptr [ebp + 0x10]     /* EDI = parent */
        test    edi, edi
        je      l_parent_ok                     /* if NULL, skip check */
        cmp     dword ptr [edi + 0x0c], 0x7fbadbad
        je      l_parent_ok                     /* if magic matches, ok */

        push    0x79f934                        /* "Parent Heap is invalid" */
        call    FUN_006FAB90
        add     esp, 4
        test    eax, eax
        je      l_parent_ok
        int     3                               /* assert failure */

    l_parent_ok:
        /* ---- Search linked list for matching name ---- */
        mov     esi, dword ptr [g_heap_list_head] /* ESI = list head */
        xor     ebx, ebx                        /* EBX = prev = NULL */
        test    edi, edi
        je      l_search_start                  /* if no parent, use global head */
        mov     esi, dword ptr [edi + 8]        /* ESI = parent->field_08 (sub-list head) */

    l_search_start:
        test    esi, esi
        je      l_alloc_new                     /* if list empty, allocate */

    l_search_loop:
        mov     ecx, dword ptr [ebp + 8]        /* ECX = name */
        lea     eax, [esi + 0x14]               /* EAX = entry->name (at +0x14) */
        push    eax
        push    ecx
        call    dword ptr [__imp__stricmp]      /* _stricmp(name, entry->name) */
        add     esp, 8
        test    eax, eax
        je      l_found                         /* if match, return existing */

        mov     ebx, esi                        /* EBX = prev = current */
        mov     esi, dword ptr [esi + 4]        /* ESI = entry->next */
        test    esi, esi
        jne     l_search_loop

        /* ---- Allocate new entry ---- */
    l_alloc_new:
        push    0x95                            /* size = 149 bytes */
        call    dword ptr [__imp__malloc]
        mov     edx, eax                        /* EDX = new entry */
        xor     eax, eax
        add     esp, 4

        /* Initialize entry fields */
        cmp     edi, eax                        /* if parent == NULL */
        mov     dword ptr [edx + 4], eax        /* entry->next = NULL */
        mov     dword ptr [edx + 0x0c], 0x7fbadbad /* entry->magic = 0x7FBADBAD */
        mov     dword ptr [edx], edi            /* entry->parent = parent */
        je      l_link_no_parent

        /* Parent exists: link after parent */
        mov     ecx, dword ptr [edi + 8]        /* ECX = parent->field_08 */
        mov     dword ptr [edx + 4], ecx        /* entry->next = parent->field_08 */
        mov     dword ptr [edi + 8], edx        /* parent->field_08 = entry */
        jmp     l_copy_name

    l_found:
        inc     dword ptr [esi + 0x10]          /* entry->refcount++ */
        pop     edi
        mov     eax, esi                        /* return existing entry */
        pop     esi
        pop     ebx
        pop     ebp
        ret     0x0c

    l_link_no_parent:
        /* No parent: link into global list */
        cmp     ebx, eax                        /* if prev == NULL */
        je      l_new_head
        mov     dword ptr [ebx + 4], edx        /* prev->next = entry */
        jmp     l_copy_name

    l_new_head:
        mov     dword ptr [g_heap_list_head], edx /* list head = entry */

    l_copy_name:
        /* Copy name string into entry at offset +0x14 */
        mov     edi, dword ptr [ebp + 8]        /* EDI = name */
        or      ecx, 0xffffffff
        mov     dword ptr [edx + 8], eax        /* entry->field_08 = NULL */
        xor     eax, eax
        repne   scasb
        not     ecx                             /* ECX = strlen + 1 */
        sub     edi, ecx                        /* EDI = start of name */
        mov     eax, ecx                        /* EAX = strlen + 1 */
        shr     ecx, 2                          /* ECX = dword count */
        mov     esi, edi                        /* ESI = source */
        lea     ebx, [edx + 0x14]              /* EBX = dest (entry->name) */
        mov     dword ptr [edx + 0x10], 1       /* entry->refcount = 1 */
        mov     edi, ebx                        /* EDI = dest */
        rep     movsd                           /* copy dwords */
        mov     ecx, eax
        and     ecx, 3
        rep     movsb                           /* copy remaining bytes */

        /* ---- Insert into hash table (linear probe) ---- */
        mov     cl, 1                           /* CL = hash probe index */
        mov     byte ptr [ebp + 8], cl          /* save probe index */

    l_hash_loop:
        mov     eax, dword ptr [ebp + 8]        /* EAX = probe index (zero-extended) */
        mov     esi, eax
        and     esi, 0xff                       /* ESI = probe index & 0xFF */
        mov     edi, dword ptr [g_heap_hash_table + esi*4] /* EDI = hash_table[probe] */
        test    edi, edi
        je      l_hash_insert                   /* if empty slot, insert */

        inc     cl                              /* next probe */
        cmp     cl, 0xfd
        mov     byte ptr [ebp + 8], cl
        jb      l_hash_loop                     /* if < 0xFD, continue probing */

        /* Hash table full (all 253 slots occupied) — return without hash entry */
        pop     edi
        pop     esi
        mov     eax, edx
        pop     ebx
        pop     ebp
        ret     0x0c

    l_hash_insert:
        /* Insert into hash table */
        pop     edi
        and     eax, 0xff                       /* EAX = probe index */
        pop     esi
        mov     dword ptr [g_heap_hash_table + eax*4], edx /* hash_table[probe] = entry */
        mov     byte ptr [edx + 0x94], cl       /* entry->hash_index = probe */
        mov     eax, edx
        pop     ebx
        pop     ebp
        ret     0x0c
    }
}
