/*
 * FUN_00404ac0 (5 B) -- returns 0, __stdcall with 3 dwords of args (RET 0xc).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00404ac0(void)
{
    __asm {
        xor     eax, eax
        ret     0xc
    }
}
