/*
 * FUN_006EE2B0 (145 B) — Dialog item text getter.
 *
 * __cdecl. Gets text from a dialog item (handle in param1).
 * Calls GetDlgItemTextA twice (first to get length, then to get text),
 * then calls CharToOemA on the result, then calls a function at
 * 0x512510 with the result.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_00512510(void);

__declspec(naked) void __cdecl FUN_006ee2b0(void)
{
    __asm {
        sub     esp, 0x18
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0x24]
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
        push    0x4dc
        push    esi
        mov     dword ptr [esp + 0x24], 0x3d
        mov     dword ptr [esp + 0x20], 0
        call    edi
        _emit   0x8B
        _emit   0x1D
        _emit   0x60
        _emit   0xB5
        _emit   0x76
        _emit   0x00
        push    eax
        call    ebx
        test    eax, eax
        jne     l_second_call
        mov     dword ptr [esp + 0xc], eax
        jmp     l_convert
    l_second_call:
        lea     ecx, [esp + 0x1c]
        push    ecx
        push    eax
        push    0x148
        push    0x4dc
        push    esi
        call    edi
        push    eax
        call    ebx
        lea     edx, [esp + 0x1c]
        push    edx
        _emit   0xFF
        _emit   0x15
        _emit   0x18
        _emit   0xB3
        _emit   0x76
        _emit   0x00
        add     esp, 4
        mov     dword ptr [esp + 0xc], eax
    l_convert:
        lea     edx, [esp + 0x14]
        push    edx
        push    2
        lea     eax, [esp + 0x18]
        lea     ecx, [esp + 0x14]
        push    0
        mov     dword ptr [esp + 0x20], eax
        mov     dword ptr [esp + 0x24], ecx
        call    FUN_00512510
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x18
        ret
    }
}
