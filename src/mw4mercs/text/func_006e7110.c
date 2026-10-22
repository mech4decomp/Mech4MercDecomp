/*
 * FUN_006E7110 (125 B) — Dialog checkbox enable/disable handler.
 *
 * __cdecl. Gets checkbox states from dialog items 0x4BA and 0x4B8
 * (BM_GETCHECK), enables/disables items 0x4BD and 0x4BE accordingly.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_006e7110(void)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x10]
        push    edi
        _emit   0x8B
        _emit   0x3D
        _emit   0xA4
        _emit   0xB5
        _emit   0x76
        _emit   0x00
        push    0x0
        push    0x0
        push    0x190
        push    0x4ba
        push    esi
        call    edi
        _emit   0x8B
        _emit   0x2D
        _emit   0x60
        _emit   0xB5
        _emit   0x76
        _emit   0x00
        push    eax
        call    ebp
        test    eax, eax
        jnz     l_enable1
        push    eax
        jmp     l_do_enable1
    l_enable1:
        push    1
    l_do_enable1:
        push    0x4bd
        push    esi
        call    edi
        _emit   0x8B
        _emit   0x1D
        _emit   0x44
        _emit   0xB5
        _emit   0x76
        _emit   0x00
        push    eax
        call    ebx
        push    0x0
        push    0x0
        push    0x190
        push    0x4b8
        push    esi
        call    edi
        push    eax
        call    ebp
        test    eax, eax
        jnz     l_enable2
        push    eax
        push    0x4be
        push    esi
        call    edi
        push    eax
        call    ebx
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    l_enable2:
        push    1
        push    0x4be
        push    esi
        call    edi
        push    eax
        call    ebx
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    }
}
