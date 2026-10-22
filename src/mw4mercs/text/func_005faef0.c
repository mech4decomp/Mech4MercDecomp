/*
 * FUN_005faef0 (7 B) — __thiscall accessor: returns this+0x3c4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_005faef0(void)
{
    __asm {
        lea     eax, [ecx + 0x3c4]
        ret
    }
}
