/*
 * FUN_006F23C0 (24 B) — Load float from this+0x18C, convert to double,
 * adjust ECX by +0x10C, call FUN_006f3960.
 *
 * __fastcall (ECX = this).
 *
 * Disassembly:
 *   D9 81 8C 01 00 00    fld     dword ptr [ecx + 0x18c]
 *   83 EC 08             sub     esp, 8
 *   81 C1 0C 01 00 00    add     ecx, 0x10c
 *   DD 1C 24             fstp    qword ptr [esp]
 *   E8 89 15 00 00       call    0x006f3960
 *   C3                   ret
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

void __fastcall FUN_006f3960(int, double);

__declspec(naked) void __fastcall FUN_006f23c0(int this)
{
    __asm {
        fld     dword ptr [ecx + 0x18c]
        sub     esp, 8
        add     ecx, 0x10c
        fstp    qword ptr [esp]
        call    FUN_006f3960
        ret
    }
}
