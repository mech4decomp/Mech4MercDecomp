/*
 * FUN_006E72F0 (125 B) — Dialog item enable/disable based on selection state.
 *
 * Gets the selection state of two dialog items (0x4bb, 0x4b9) via
 * SendMessageA with CB_GETCURSEL (0x190/400). Enables/disables
 * associated items (0x4bf, 0x4c0) via EnableWindow.
 *
 * __cdecl (1 param: HWND), returns void.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_006e72f0(void)
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
        push    0
        push    0
        push    0x190
        push    0x4BB
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
        jnz     l_enable_1
        push    eax
        jmp     l_push_1
    l_enable_1:
        push    1
    l_push_1:
        push    0x4BF
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
        push    0
        push    0
        push    0x190
        push    0x4B9
        push    esi
        call    edi
        push    eax
        call    ebp
        test    eax, eax
        jnz     l_enable_2
        push    eax
        push    0x4C0
        push    esi
        call    edi
        push    eax
        call    ebx
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    l_enable_2:
        push    1
        push    0x4C0
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
