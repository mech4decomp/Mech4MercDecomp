/*
 * FUN_006EE100 (81 B) — Dialog helper: get item 0x419, send CB_SETCURSEL (0x147)
 * with value 0x26, then call FUN_00512510.
 *
 * __cdecl, 1 param (HWND).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00512510(int, int, void *);

__declspec(naked) void __cdecl FUN_006ee100(void)
{
    __asm {
        sub     esp, 0xC
        mov     eax, dword ptr [esp + 0x10]
        push    0
        push    0
        push    0x147
        push    0x419
        push    eax
        mov     dword ptr [esp + 0x14], 0x26
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
        mov     dword ptr [esp + 0x10], eax
        lea     eax, [esp + 4]
        push    eax
        push    2
        lea     ecx, [esp + 8]
        lea     edx, [esp + 0x18]
        push    0
        mov     dword ptr [esp + 0x10], ecx
        mov     dword ptr [esp + 0x14], edx
        call    FUN_00512510
        add     esp, 0xC
        ret
    }
}
