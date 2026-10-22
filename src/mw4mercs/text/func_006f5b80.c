/*
 * FUN_006F5B80 (129 B) — Hash table lookup with callback (__thiscall).
 *
 * Hashes param_1 via vtable[0x10], masks with this->field_06 (16-bit),
 * indexes into hash table at this->field_08. Walks the bucket chain.
 * For each non-busy entry (bit 31 of flags clear), calls vtable[0x0C]
 * with the entry's data. If callback returns true and this->field_14
 * is non-null, calls it with the data. Then calls FUN_006F5D20 on
 * data+4. Returns non-zero if found.
 *
 * __thiscall (ECX = this), RET 8, 1 stack param.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006f5d20(void);

__declspec(naked) void FUN_006f5b80(void)
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
        and     edi, 0xFFFF
        and     edi, ecx
        mov     ecx, dword ptr [ebx + 8]
        shl     edi, 4
        mov     esi, dword ptr [edi + ecx]
        add     edi, ecx
        cmp     esi, edi
        jz      l_not_found
    l_loop:
        test    dword ptr [esi + 0x0C], 0x80000000
        jnz     l_next
        mov     edx, dword ptr [esp + 0x14]
        mov     ebp, dword ptr [esi + 8]
        push    edx
        push    ebp
        call    dword ptr [ebx + 0x0C]
        test    al, al
        jnz     l_found
    l_next:
        mov     esi, dword ptr [esi]
        cmp     esi, edi
        jne     l_loop
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        _emit   0xC2
        _emit   0x08
        _emit   0x00
    l_found:
        mov     ebx, dword ptr [ebx + 0x14]
        test    ebx, ebx
        jz      l_skip_cb
        push    ebp
        call    ebx
    l_skip_cb:
        test    ebp, ebp
        jnz     l_call_d20
    l_not_found:
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        ret     8
    l_call_d20:
        mov     eax, dword ptr [esp + 0x18]
        push    eax
        add     ebp, 4
        push    ebp
        _emit   0xE8
        _emit   0x26
        _emit   0x01
        _emit   0x00
        _emit   0x00
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     8
    }
}
