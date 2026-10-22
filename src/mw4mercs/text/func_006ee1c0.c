/*
 * FUN_006EE1C0 (107 B) — UI helper: gets dialog item, sends message,
 * calls FUN_00512510 and FUN_00518100.
 *
 * __cdecl, 1 stack param (HWND). Gets dialog item 0x41a, sends
 * WM_USER+0x47 (0x147), calls FUN_00512510, then calls FUN_00518100
 * with value 7.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00512510(int, int, void *);
extern void __fastcall FUN_00518100(void);

__declspec(naked) void __cdecl FUN_006ee1c0(void)
{
    __asm {
        sub     esp, 0xc
        mov     eax, dword ptr [esp + 0x10]
        push    0
        push    0
        push    0x147
        push    0x41a
        push    eax
        mov     dword ptr [esp + 0x14], 0x24
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
        push    2
        lea     ecx, [esp + 8]
        push    ecx
        _emit   0x8B
        _emit   0x0D
        _emit   0x68
        _emit   0xD2
        _emit   0x7D
        _emit   0x00
        mov     dword ptr [esp + 8], 7
        call    FUN_00518100
        add     esp, 0xc
        ret
    }
}
