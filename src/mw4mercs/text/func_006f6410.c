/*
 * FUN_006F6410 (121 B) — Hash table lookup with callback.
 *
 * __thiscall (ECX = this), RET 4. Hashes the input param via
 * vtable[0x10], masks to bucket index, walks the bucket's linked
 * list, calling vtable[0xc] on each non-flagged node. If callback
 * returns true, optionally calls vtable[0x14] and returns
 * node->field_0xc + 0x18. Returns 0 if not found.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_006f6410(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     ebx, ecx
        push    eax
        call    dword ptr [ebx + 0x10]
        xor     ecx, ecx
        mov     cx, word ptr [ebx + 6]
        mov     edi, eax
        and     edi, 0xffff
        and     edi, ecx
        mov     ecx, dword ptr [ebx + 8]
        shl     edi, 4
        mov     esi, dword ptr [edi + ecx]
        add     edi, ecx
        cmp     esi, edi
        jz      l_not_found2
    l_loop:
        test    dword ptr [esi + 0xc], 0x80000000
        jnz     l_next
        mov     edx, dword ptr [esp + 0x14]
        mov     ebp, dword ptr [esi + 8]
        push    edx
        push    ebp
        call    dword ptr [ebx + 0xc]
        test    al, al
        jnz     l_found
    l_next:
        mov     esi, dword ptr [esi]
        cmp     esi, edi
        jnz     l_loop
    l_not_found:
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        ret     4
    l_found:
        mov     ebx, dword ptr [ebx + 0x14]
        test    ebx, ebx
        jz      l_check_ebp
        push    ebp
        call    ebx
    l_check_ebp:
        test    ebp, ebp
        jnz     l_return
    l_not_found2:
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        ret     4
    l_return:
        mov     eax, dword ptr [ebp + 0xc]
        pop     edi
        pop     esi
        pop     ebp
        add     eax, 0x18
        pop     ebx
        ret     4
    }
}
