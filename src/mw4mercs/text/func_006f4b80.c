/*
 * FUN_006F4B80 (117 B) — Pool memory deallocator (VirtualFree chain).
 *
 * __cdecl, RET 4. Validates each pool block header (magic 0x534F472A,
 * high-word checks), then calls VirtualFree twice (MEM_RELEASE +
 * MEM_DECOMMIT) on each block. Walks the linked list via +0x08.
 * Asserts (INT3) on invalid header.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_006f4b80(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    edi
        mov     edi, dword ptr [ebp + 8]
        test    edi, edi
        jz      l_done
        push    ebx
        _emit   0x8B
        _emit   0x1D
        _emit   0x50
        _emit   0xB1
        _emit   0x76
        _emit   0x00
        push    esi
    l_loop:
        mov     eax, dword ptr [edi + 0x10]
        mov     ecx, dword ptr [edi + 0xc]
        xor     ecx, eax
        test    ecx, 0xffff0000
        jnz     l_assert
        xor     eax, edi
        test    eax, 0xffff0000
        jnz     l_assert
        mov     ecx, dword ptr [edi + 4]
        mov     eax, 0xffff
        _emit   0x85
        _emit   0xC8
        jnz     l_assert
        test    dword ptr [edi + 8], eax
        jnz     l_assert
        cmp     dword ptr [edi], 0x534f472a
        jz      l_valid
    l_assert:
        _emit   0xA1
        _emit   0x34
        _emit   0x93
        _emit   0x84
        _emit   0x00
        mov     esi, dword ptr [ebp + 8]
        int     3
    l_valid:
        mov     esi, dword ptr [edi + 8]
        push    0x4000
        push    0x0
        push    edi
        call    ebx
        push    0x8000
        push    0x0
        push    edi
        call    ebx
        test    esi, esi
        mov     edi, esi
        mov     dword ptr [ebp + 8], edi
        jnz     l_loop
        pop     esi
        pop     ebx
    l_done:
        pop     edi
        pop     ebp
        ret     4
    }
}
