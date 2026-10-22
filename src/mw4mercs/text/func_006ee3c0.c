/*
 * FUN_006EE3C0 (98 B) — UI helper: gets dialog item, sends message,
 * calls FUN_00512510, fills DAT_00842b10 with -1.
 *
 * __cdecl, 1 stack param (HWND).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00512510(int, int, void *);

__declspec(naked) void __cdecl FUN_006ee3c0(void)
{
    __asm {
        sub     esp, 0xc
        mov     eax, dword ptr [esp + 0x10]
        push    edi
        push    0
        push    0
        push    0x147
        push    0x41b
        push    eax
        mov     dword ptr [esp + 0x18], 0x15
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
        mov     dword ptr [esp + 0x14], eax
        lea     eax, [esp + 8]
        push    eax
        push    2
        lea     ecx, [esp + 0xc]
        lea     edx, [esp + 0x1c]
        push    0
        mov     dword ptr [esp + 0x14], ecx
        mov     dword ptr [esp + 0x18], edx
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
