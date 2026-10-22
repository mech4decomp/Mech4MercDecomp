/*
 * FUN_00600940 (7 B) — __fastcall accessor: returns this+0x221c.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00600940(void)
{
    __asm {
        lea     eax, [ecx+0x221c]
        ret
    }
}
