/*
 * FUN_00602460 (7 B) — __fastcall accessor: returns this+0x2228.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00602460(void)
{
    __asm {
        lea     eax, [ecx+0x2228]
        ret
    }
}
