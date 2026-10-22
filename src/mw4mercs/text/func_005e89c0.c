/*
 * FUN_005e89c0 (7 B) - Returns float constant at 0x007895c4 in ST(0).
 *
 * No params, RET 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_005e89c0(void)
{
    

extern int DAT_007895c4;
__asm {
fld dword ptr [DAT_007895c4]
        ret
    }


}
