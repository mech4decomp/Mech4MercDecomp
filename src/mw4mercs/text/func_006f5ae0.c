/*
 * FUN_006F5AE0 (137 B) — Hash table lookup with callback (__thiscall).
 *
 * Hashes param_1 via vtable[0x10], masks with this->field_06 (16-bit),
 * indexes into hash table at this->field_08. Walks the bucket chain.
 * For each non-busy entry (bit 31 of flags clear), calls vtable[0x0C]
 * with the entry's data. If callback returns true and this->field_14
 * is non-null, calls it with the data. Returns true if found.
 *
 * __thiscall (ECX = this), RET 4, 1 stack param.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_006f5ae0(void)
{
    __asm {
        push    ecx
        mov     eax, dword ptr [esp + 8]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     ebx, ecx
        push    eax
        call    dword ptr [ebx + 0x10]
        xor     ecx, ecx
        mov     cx, word ptr [ebx + 6]
        mov     esi, eax
        and     esi, 0xFFFF
        mov     dword ptr [esp + 0x10], 0
        and     esi, ecx
        mov     ecx, dword ptr [ebx + 8]
        shl     esi, 4
        mov     edi, dword ptr [esi + ecx]
        add     esi, ecx
        cmp     edi, esi
        jz      l_done
    l_loop:
        test    dword ptr [edi + 0x0C], 0x80000000
        jnz     l_next
        mov     edx, dword ptr [esp + 0x18]
        mov     ebp, dword ptr [edi + 8]
        push    edx
        push    ebp
        call    dword ptr [ebx + 0x0C]
        test    al, al
        jnz     l_found
    l_next:
        mov     edi, dword ptr [edi]
        cmp     edi, esi
        jne     l_loop
        mov     ecx, dword ptr [esp + 0x10]
        pop     edi
        pop     esi
        xor     eax, eax
        test    ecx, ecx
        pop     ebp
        setnz   al
        pop     ebx
        pop     ecx
        ret     4
    l_found:
        mov     ebx, dword ptr [ebx + 0x14]
        test    ebx, ebx
        jz      l_store
        push    ebp
        call    ebx
    l_store:
        mov     dword ptr [esp + 0x10], ebp
    l_done:
        mov     ecx, dword ptr [esp + 0x10]
        pop     edi
        pop     esi
        xor     eax, eax
        test    ecx, ecx
        pop     ebp
        setnz   al
        pop     ebx
        pop     ecx
        ret     4
    }
}
