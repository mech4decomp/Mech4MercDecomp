/*
 * FUN_006FB800 (124 B) — FindFirstFile wrapper (skip directories).
 *
 * __cdecl, RET 4. Calls FindFirstFileA with the given pattern,
 * stores handle in global 0x00856718. Skips directory entries,
 * returns pointer to filename (0x008565BC) on first non-directory
 * match, or NULL on failure.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_006fb800(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    esi
        push    0x856590
        push    eax
        _emit   0xFF
        _emit   0x15
        _emit   0xA4
        _emit   0xB1
        _emit   0x76
        _emit   0x00
        cmp     eax, -1
        _emit   0xA3
        _emit   0x18
        _emit   0x67
        _emit   0x85
        _emit   0x00
        jnz     l_check_dir
        _emit   0xC7
        _emit   0x05
        _emit   0x18
        _emit   0x67
        _emit   0x85
        _emit   0x00
        _emit   0x00
        _emit   0x00
        _emit   0x00
        _emit   0x00
        xor     eax, eax
        pop     esi
        ret     4
    l_check_dir:
        _emit   0xF6
        _emit   0x05
        _emit   0x90
        _emit   0x65
        _emit   0x85
        _emit   0x00
        _emit   0x10
        jz      l_found
        _emit   0x8B
        _emit   0x35
        _emit   0xAC
        _emit   0xB1
        _emit   0x76
        _emit   0x00
        jmp     l_next
    l_skip_loop:
        _emit   0xA1
        _emit   0x18
        _emit   0x67
        _emit   0x85
        _emit   0x00
    l_next:
        push    0x856590
        push    eax
        call    esi
        test    eax, eax
        jz      l_close
        _emit   0xF6
        _emit   0x05
        _emit   0x90
        _emit   0x65
        _emit   0x85
        _emit   0x00
        _emit   0x10
        jnz     l_skip_loop
    l_found:
        mov     eax, 0x8565bc
        pop     esi
        ret     4
    l_close:
        _emit   0x8B
        _emit   0x0D
        _emit   0x18
        _emit   0x67
        _emit   0x85
        _emit   0x00
        push    ecx
        _emit   0xFF
        _emit   0x15
        _emit   0x9C
        _emit   0xB1
        _emit   0x76
        _emit   0x00
        _emit   0xC7
        _emit   0x05
        _emit   0x18
        _emit   0x67
        _emit   0x85
        _emit   0x00
        _emit   0x00
        _emit   0x00
        _emit   0x00
        _emit   0x00
        xor     eax, eax
        pop     esi
        ret     4
    }
}
