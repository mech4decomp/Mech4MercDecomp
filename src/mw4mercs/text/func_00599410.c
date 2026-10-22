/*
 * FUN_005991b0 (107 B) — __fastcall BST string search.
 *
 * Searches a binary search tree for a node matching the given key string.
 * ecx points to an object whose first field is a pointer to the tree root.
 * The root node's field_4 is the first node to search.
 *
 * Tree node layout:
 *   0x00: (implicit, node address is the key)
 *   0x04: (unknown, used as initial search pointer)
 *   0x08: right child
 *   0x0C: left child
 *   0x10: pointer to key string
 *
 * If found, *out_result = found node.
 * If not found, *out_result = last visited node (parent where insertion would go).
 * If tree is empty (root->field_4 == NULL), *out_result = root.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_005991b0(void)
{
    __asm {
        push    ebp
        mov     ebp, [ecx]                  ; ebp = root pointer (*ecx)
        push    edi
        mov     edi, [ebp + 4]              ; edi = root->field_4 (first node)
        test    edi, edi
        je      L_null_root

        mov     eax, [esp + 0x10]           ; eax = param2 (key ptr)
        mov     edx, [eax]                  ; edx = *key_ptr (search key string)
        push    ebx
        push    esi

    L_loop:
        mov     eax, [edi + 0x10]           ; eax = node->key_string
        mov     esi, edx                    ; esi = search key
    L_strcmp:
        mov     bl, [eax]                   ; bl = node_key[0]
        mov     cl, bl
        cmp     bl, [esi]                   ; compare first byte
        jne     L_cmp_result
        test    cl, cl                      ; end of string?
        je      L_equal
        mov     bl, [eax + 1]               ; compare second byte
        mov     cl, bl
        cmp     bl, [esi + 1]
        jne     L_cmp_result
        add     eax, 2
        add     esi, 2
        test    cl, cl
        jne     L_strcmp

    L_equal:
        xor     eax, eax
        jmp     L_check

    L_cmp_result:
        sbb     eax, eax
        sbb     eax, -1                     ; eax = -1 (less) or 1 (greater)

    L_check:
        test    eax, eax
        jl      L_go_left
        mov     ebp, edi                    ; save current node
        mov     edi, [edi + 8]              ; go right
        jmp     L_continue
    L_go_left:
        mov     edi, [edi + 0x0C]           ; go left
    L_continue:
        test    edi, edi
        jne     L_loop

        ; Not found — return last visited node
        mov     eax, [esp + 0x14]           ; eax = param1 (output ptr)
        pop     esi
        pop     ebx
        pop     edi
        mov     [eax], ebp                  ; *out_result = last visited node
        pop     ebp
        ret     8

    L_null_root:
        mov     eax, [esp + 0x0C]           ; eax = param1 (output ptr)
        pop     edi
        mov     [eax], ebp                  ; *out_result = root
        pop     ebp
        ret     8
    }
}
