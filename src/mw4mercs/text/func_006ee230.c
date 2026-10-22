/*
 * FUN_006EE230 (127 B) — Dialog: get edit control text, convert to int,
 *                        call FUN_00512510 with two params.
 *
 * Gets text from dialog item 0x3f6 via SendMessageA (WM_GETTEXT=0x147,
 * then WM_GETTEXTLENGTH=0x148), converts to int via atoi, then calls
 * FUN_00512510(0, 2, &stack_struct).
 *
 * __cdecl (1 param: HWND), returns void.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_006ee230(void)
{
    __asm {
        sub     esp, 0x14
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0x20]
        push    edi
        _emit   0x8B
        _emit   0x3D
        _emit   0xA4
        _emit   0xB5
        _emit   0x76
        _emit   0x00
        push    0
        push    0
        push    0x147
        push    0x3F6
        push    esi
        mov     dword ptr [esp + 0x20], 0x1D
        call    edi
        _emit   0x8B
        _emit   0x1D
        _emit   0x60
        _emit   0xB5
        _emit   0x76
        _emit   0x00
        push    eax
        call    ebx
        lea     ecx, [esp + 0x18]
        push    ecx
        push    eax
        push    0x148
        push    0x3F6
        push    esi
        call    edi
        push    eax
        call    ebx
        lea     edx, [esp + 0x18]
        push    edx
        _emit   0xFF
        _emit   0x15
        _emit   0x18
        _emit   0xB3
        _emit   0x76
        _emit   0x00
        add     esp, 4
        lea     edx, [esp + 0x10]
        push    edx
        mov     dword ptr [esp + 0x28], eax
        push    2
        lea     eax, [esp + 0x14]
        lea     ecx, [esp + 0x2C]
        push    0
        mov     dword ptr [esp + 0x1C], eax
        mov     dword ptr [esp + 0x20], ecx
        _emit   0xE8
        _emit   0x68
        _emit   0x42
        _emit   0xE2
        _emit   0xFF
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x14
        ret
    }
}
