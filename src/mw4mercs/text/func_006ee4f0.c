/*
 * FUN_006EE4F0 (104 B) — UI helper: gets dialog item, sends message,
 * calls FUN_00512510, fills DAT_00842b10 with -1.
 *
 * __cdecl, 1 stack param (HWND). Similar to FUN_006EE3C0 but with
 * different dialog item ID (0x41c) and initial value (0x17).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00512510(int, int, void *);

__declspec(naked) void __cdecl FUN_006ee4f0(void)
{
    __asm {
        sub     esp, 0xc
        mov     eax, dword ptr [esp + 0x10]
        push    edi
        push    0
        push    0
        push    0x147
        push    0x41c
        push    eax
        mov     dword ptr [esp + 0x18], 0x17
        _emit   0xFF
        _emit   0x15
        _emit   0xA4
        _emit   0xB5
        _emit   0x76
        _emit   0x00
        push    eax
        _emit   0xFF
        _emit   0x15
        _emit   0x60
        _emit   0xB5
        _emit   0x76
        _emit   0x00
        add     eax, 4
        lea     ecx, [eax + eax*4]
        mov     dword ptr [esp + 0x14], ecx
        lea     ecx, [esp + 8]
        push    ecx
        push    2
        lea     edx, [esp + 0xc]
        lea     eax, [esp + 0x1c]
        push    0
        mov     dword ptr [esp + 0x14], edx
        mov     dword ptr [esp + 0x18], eax
        call    FUN_00512510
        mov     ecx, 0x18
        or      eax, -1
        mov     edi, 0x842b10
        rep stosd
        pop     edi
        add     esp, 0xc
        ret
    }
}
