/*
 * FUN_00599130 (78 B) — __thiscall recursive destructor for a linked list.
 *
 * Traverses a linked list (next at +0x08). For each node:
 *   - Recursively calls itself with node->field_0C
 *   - If node->field_10 is non-null, decrements the refcount byte at
 *     node->field_10[-1] and frees node->field_10 if refcount reaches 0
 *   - Frees the node itself via FUN_004084E0
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void __stdcall FUN_00599130(void)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, [esp + 0x0C]           ; esi = node
        test    esi, esi
        mov     ebx, ecx                    ; ebx = this
        je      L_done

        push    edi

    L_loop:
        mov     eax, [esi + 0x0C]           ; eax = node->field_0C (child)
        push    eax
        mov     ecx, ebx
        call    FUN_00599130                ; recurse into child

        mov     eax, [esi + 0x10]           ; eax = node->field_10 (refcounted buf)
        test    eax, eax
        mov     edi, [esi + 8]              ; edi = node->next
        je      L_free_node

        mov     cl, byte ptr [eax - 1]      ; cl = refcount byte before buffer
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_free_node

        push    eax
        call    FUN_004084e0                ; free(buffer)
        add     esp, 4

    L_free_node:
        test    esi, esi
        je      L_next
        push    esi
        call    FUN_004084e0                ; free(node)
        add     esp, 4

    L_next:
        test    edi, edi
        mov     esi, edi
        jne     L_loop

        pop     edi

    L_done:
        pop     esi
        pop     ebx
        ret     4
    }
}
