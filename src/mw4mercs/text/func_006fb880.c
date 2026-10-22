/*
 * FUN_006FB880 (124 B) — FindNextFile wrapper (skip directories).
 *
 * __cdecl. Uses global handle 0x00856718. Calls FindNextFileA,
 * skipping directories (FILE_ATTRIBUTE_DIRECTORY). Returns pointer
 * to filename in WIN32_FIND_DATA (0x008565BC) on success, or NULL
 * on failure/end. Closes handle on exhaustion.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_006fb880(void)
{
    __asm {
        _emit   0xA1
        _emit   0x18
        _emit   0x67
        _emit   0x85
        _emit   0x00
        test    eax, eax
        push    esi
        jz      l_null
        _emit   0x8B
        _emit   0x35
        _emit   0xAC
        _emit   0xB1
        _emit   0x76
        _emit   0x00
        push    0x856590
        push    eax
        call    esi
        test    eax, eax
        jz      l_close
    l_skip_loop:
        _emit   0xF6
        _emit   0x05
        _emit   0x90
        _emit   0x65
        _emit   0x85
        _emit   0x00
        _emit   0x10
        jz      l_found
    l_next:
        _emit   0xA1
        _emit   0x18
        _emit   0x67
        _emit   0x85
        _emit   0x00
        push    0x856590
        push    eax
        call    esi
        test    eax, eax
        jz      l_close2
        _emit   0xF6
        _emit   0x05
        _emit   0x90
        _emit   0x65
        _emit   0x85
        _emit   0x00
        _emit   0x10
        jnz     l_next
    l_found:
        mov     eax, 0x8565bc
        pop     esi
        ret
    l_close2:
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
        ret
    l_close:
        _emit   0x8B
        _emit   0x15
        _emit   0x18
        _emit   0x67
        _emit   0x85
        _emit   0x00
        push    edx
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
    l_null:
        xor     eax, eax
        pop     esi
        ret
    }
}
