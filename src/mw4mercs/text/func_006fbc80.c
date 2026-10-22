/*
 * FUN_006FBC80 (88 B) — File existence check: uses either a callback at
 * 0x00858BA8 or FindFirstFileA/FindClose.
 *
 * __cdecl, RET 4 (1 param: filename). Returns 0xFFFFFFFF on failure,
 * or a value from the callback / global 0x00856330.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_006fbc80(void)
{
    __asm {
        _emit   0xA1
        _emit   0xA8
        _emit   0x8B
        _emit   0x85
        _emit   0x00
        sub     esp, 0x24
        test    eax, eax
        jz      l_findfile
        mov     edx, dword ptr [esp + 0x28]
        ; lea ecx, [esp] -- force 4-byte encoding
        _emit   0x8D
        _emit   0x4C
        _emit   0x24
        _emit   0x00
        push    ecx
        push    0
        push    edx
        call    eax
        test    eax, eax
        jz      l_fail
        mov     eax, dword ptr [esp + 0x20]
        add     esp, 0x24
        ret     4
    l_findfile:
        mov     eax, dword ptr [esp + 0x28]
        push    0x856310
        push    eax
        _emit   0xFF
        _emit   0x15
        _emit   0xA4
        _emit   0xB1
        _emit   0x76
        _emit   0x00
        cmp     eax, -1
        jz      l_fail
        push    eax
        _emit   0xFF
        _emit   0x15
        _emit   0x9C
        _emit   0xB1
        _emit   0x76
        _emit   0x00
        _emit   0xA1
        _emit   0x30
        _emit   0x63
        _emit   0x85
        _emit   0x00
        add     esp, 0x24
        ret     4
    l_fail:
        or      eax, -1
        add     esp, 0x24
        ret     4
    }
}
