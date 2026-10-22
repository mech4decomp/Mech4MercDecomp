/*
 * FUN_00618100 (4 B) — __thiscall accessor: returns this + 0x40.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00618100(void)
{
    __asm {
        lea     eax, [ecx+0x40]
        ret
    }
}
