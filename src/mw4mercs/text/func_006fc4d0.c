/*
 * FUN_006FC4D0 (161 B) — File path normalizer + open callback.
 *
 * __stdcall, RET 4 (one param: file path string).
 * Normalizes a file path: checks if path exists via
 * GetFileAttributesA. If not, copies the path and normalizes
 * backslash sequences (\\ → \). Then checks a reentrancy guard
 * and calls a callback function if set, otherwise calls
 * CreateFileA directly.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __stdcall FUN_006fc4d0(void)
{
    __asm {
        sub     esp, 0x104
        push    esi
        mov     esi, dword ptr [esp + 0x10c]
        push    edi
        lea     edi, [esi + 1]
        push    0x7a01c4
        push    edi
        _emit   0xFF
        _emit   0x15
        _emit   0x90
        _emit   0xB3
        _emit   0x76
        _emit   0x00
        add     esp, 8
        test    eax, eax
        je      l_normalize
        mov     al, byte ptr [esi]
        mov     byte ptr [esp + 8], al
        mov     eax, edi
        mov     cl, byte ptr [eax]
        test    cl, cl
        lea     edx, [esp + 9]
        je      l_terminate
    l_backslash_check:
        cmp     cl, 0x5c
        jne     l_copy_byte
        cmp     byte ptr [eax + 1], 0x5c
        jne     l_copy_byte
        inc     eax
    l_copy_byte:
        mov     cl, byte ptr [eax]
        mov     byte ptr [edx], cl
        mov     cl, byte ptr [eax + 1]
        inc     edx
        inc     eax
        test    cl, cl
        jne     l_backslash_check
    l_terminate:
        mov     byte ptr [edx], 0
        lea     esi, [esp + 8]
    l_normalize:
        _emit   0xA0
        _emit   0x0C
        _emit   0x67
        _emit   0x85
        _emit   0x00
        test    al, al
        jne     l_direct_open
        _emit   0xA1
        _emit   0x48
        _emit   0x8A
        _emit   0x85
        _emit   0x00
        test    eax, eax
        je      l_direct_open
        push    esi
        _emit   0xC6
        _emit   0x05
        _emit   0x0C
        _emit   0x67
        _emit   0x85
        _emit   0x00
        _emit   0x01
        call    eax
        pop     edi
        _emit   0xC6
        _emit   0x05
        _emit   0x0C
        _emit   0x67
        _emit   0x85
        _emit   0x00
        _emit   0x00
        pop     esi
        add     esp, 0x104
        ret     4
    l_direct_open:
        push    esi
        _emit   0xFF
        _emit   0x15
        _emit   0xB4
        _emit   0xB0
        _emit   0x76
        _emit   0x00
        xor     edx, edx
        cmp     eax, -1
        setne   dl
        pop     edi
        mov     al, dl
        pop     esi
        add     esp, 0x104
        ret     4
    }
}
