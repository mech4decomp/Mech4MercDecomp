/*
 * FUN_006F23A0 (24 B) — Load float from this+0x188, convert to double,
 * adjust ECX by +0xF8, call FUN_006f3960.
 *
 * __fastcall (ECX = this).
 *
 * Disassembly:
 *   D9 81 88 01 00 00    fld     dword ptr [ecx + 0x188]
 *   83 EC 08             sub     esp, 8
 *   81 C1 F8 00 00 00    add     ecx, 0xf8
 *   DD 1C 24             fstp    qword ptr [esp]
 *   E8 A9 15 00 00       call    0x006f3960
 *   C3                   ret
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

void __fastcall FUN_006f3960(int, double);

__declspec(naked) void __fastcall FUN_006f23a0(int this)
{
    __asm {
        fld     dword ptr [ecx + 0x188]
        sub     esp, 8
        add     ecx, 0xf8
        fstp    qword ptr [esp]
        call    FUN_006f3960
        ret
    }
}
