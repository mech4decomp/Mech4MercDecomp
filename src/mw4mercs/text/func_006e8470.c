/*
 * FUN_006E8470 (189 B) — Dialog: enable/disable controls based on text content.
 *
 * Gets selection state of dialog item 0x3F0 via SendMessageA (CB_GETCURSEL=0xF0).
 * Enables item 0x3F1 if selection == 1. Gets text from items 0x3F1 and 0x3EF.
 * Enables item 0x408 if both text buffers are non-empty OR selection is 1.
 *
 * __cdecl (1 param: HWND), returns void.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_006e8470(void)
{
    __asm {
        sub     esp, 0x200
        push    ebx
        mov     ebx, dword ptr [esp + 0x208]
        push    ebp
        _emit   0x8B
        _emit   0x2D
        _emit   0xA4
        _emit   0xB5
        _emit   0x76
        _emit   0x00
        push    esi
        push    edi
        push    0
        push    0
        push    0xF0
        push    0x3F0
        push    ebx
        call    ebp
        push    eax
        _emit   0xFF
        _emit   0x15
        _emit   0x60
        _emit   0xB5
        _emit   0x76
        _emit   0x00
        mov     esi, eax
        dec     esi
        neg     esi
        sbb     esi, esi
        inc     esi
        push    esi
        push    0x3F1
        push    ebx
        call    ebp
        push    eax
        _emit   0xFF
        _emit   0x15
        _emit   0x44
        _emit   0xB5
        _emit   0x76
        _emit   0x00
        _emit   0x8B
        _emit   0x3D
        _emit   0x9C
        _emit   0xB5
        _emit   0x76
        _emit   0x00
        push    0x100
        lea     eax, [esp + 0x114]
        push    eax
        push    0x3F1
        push    ebx
        call    edi
        push    0x100
        lea     ecx, [esp + 0x14]
        push    ecx
        push    0x3EF
        push    ebx
        call    edi
        or      ecx, -1
        xor     eax, eax
        lea     edi, [esp + 0x10]
        repne   scasb
        not     ecx
        dec     ecx
        jz      l_disable
        or      ecx, -1
        lea     edi, [esp + 0x110]
        repne   scasb
        not     ecx
        dec     ecx
        jnz     l_enable
        test    esi, esi
        jnz     l_disable
    l_enable:
        mov     eax, 1
        jmp     l_apply
    l_disable:
        xor     eax, eax
    l_apply:
        push    eax
        push    0x408
        push    ebx
        call    ebp
        push    eax
        _emit   0xFF
        _emit   0x15
        _emit   0x44
        _emit   0xB5
        _emit   0x76
        _emit   0x00
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x200
        ret
    }
}
