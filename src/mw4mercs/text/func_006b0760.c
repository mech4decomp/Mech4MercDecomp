/*
 * FUN_006B0760 (14 B) — Vtable 0x798C44 slot 13: conditional float return.
 *
 * If byte at this+0x1a is non-zero, returns float from global 0x76C5B0.
 * Otherwise returns float at this+0x0C.
 *
 * __thiscall (ECX = this).
 *
 * Disassembly:
 *   8A 41 1A          mov     al, [ecx+0x1a]
 *   84 C0             test    al, al
 *   74 07             je      +0x07 (return field_0C)
 *   D9 05 B0 C5 76 00 fld     dword ptr [0x76C5B0]
 *   C3                ret
 *   D9 41 0C          fld     dword ptr [ecx+0x0C]
 *   C3                ret
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_006b0760(void)
{
    __asm {
        mov     al, byte ptr [ecx + 0x1a]
        test    al, al
        je      l_return_field_0c
        _emit   0xD9
        _emit   0x05
        _emit   0xB0
        _emit   0xC5
        _emit   0x76
        _emit   0x00
        ret
    l_return_field_0c:
        fld     dword ptr [ecx + 0x0C]
        ret
    }
}
