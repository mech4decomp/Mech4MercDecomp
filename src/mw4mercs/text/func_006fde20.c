/*
 * FUN_006FDE20 (59 B) — Free two global buffers.
 *
 * If global 0x00856854 is non-NULL, frees it via free() (import at
 * 0x0076b2d0) and zeros the global. Same for global 0x00856850.
 *
 * __cdecl, no params, no return value.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_006fde20(void)
{
    __asm {
        _emit   0xA1
        _emit   0x54
        _emit   0x68
        _emit   0x85
        _emit   0x00
        test    eax, eax
        push    esi
        _emit   0x8B
        _emit   0x35
        _emit   0xD0
        _emit   0xB2
        _emit   0x76
        _emit   0x00
        jz      l_skip1
        push    eax
        call    esi
        add     esp, 4
        _emit   0xC7
        _emit   0x05
        _emit   0x54
        _emit   0x68
        _emit   0x85
        _emit   0x00
        _emit   0x00
        _emit   0x00
        _emit   0x00
        _emit   0x00
    l_skip1:
        _emit   0xA1
        _emit   0x50
        _emit   0x68
        _emit   0x85
        _emit   0x00
        test    eax, eax
        jz      l_skip2
        push    eax
        call    esi
        add     esp, 4
        _emit   0xC7
        _emit   0x05
        _emit   0x50
        _emit   0x68
        _emit   0x85
        _emit   0x00
        _emit   0x00
        _emit   0x00
        _emit   0x00
        _emit   0x00
    l_skip2:
        pop     esi
        ret
    }
}
