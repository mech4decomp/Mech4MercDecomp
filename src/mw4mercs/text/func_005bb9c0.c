/*
 * FUN_005bb9c0 (11 B) — no args, RET.
 *
 * Clears global 0x7B5518 to 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_005bb9c0(void)
{
    

extern int DAT_007b5518;
__asm {
        mov dword ptr [DAT_007b5518], 0x0
        ret
    }


}
