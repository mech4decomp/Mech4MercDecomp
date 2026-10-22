/*
 * FUN_006F6370 (149 B) — Hash table lookup with callback.
 *
 * __thiscall (ECX = this), RET 8 (two stack params).
 * Looks up a key in a hash table. Calls vtable[0x10] to get hash,
 * walks the chain, calls vtable[0xc] as comparator. On match,
 * copies 16 bytes from the found entry and calls vtable[0x14]
 * callback if present.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __fastcall FUN_006f6370(void)
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
        je      l_not_found2
    l_chain:
        test    dword ptr [esi + 0xc], 0x80000000
        jne     l_next
        mov     edx, dword ptr [esp + 0x14]
        mov     ebp, dword ptr [esi + 8]
        push    edx
        push    ebp
        call    dword ptr [ebx + 0xc]
        test    al, al
        jne     l_found
    l_next:
        mov     esi, dword ptr [esi]
        cmp     esi, edi
        jne     l_chain
    l_not_found:
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        ret     8
    l_found:
        mov     ebx, dword ptr [ebx + 0x14]
        test    ebx, ebx
        je      l_check_ebp
        push    ebp
        call    ebx
    l_check_ebp:
        test    ebp, ebp
        jne     l_copy
    l_not_found2:
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        ret     8
    l_copy:
        mov     eax, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [esp + 0x18]
        add     eax, 8
        mov     edx, dword ptr [eax]
        mov     dword ptr [ecx], edx
        mov     edx, dword ptr [eax + 4]
        mov     dword ptr [ecx + 4], edx
        mov     edx, dword ptr [eax + 8]
        mov     eax, dword ptr [eax + 0xc]
        pop     edi
        pop     esi
        mov     dword ptr [ecx + 8], edx
        pop     ebp
        mov     dword ptr [ecx + 0xc], eax
        mov     al, 1
        pop     ebx
        ret     8
    }
}
