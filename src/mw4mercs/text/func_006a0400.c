/*
 * FUN_006a0400 (3 B) — stub: __stdcall RET 0x10 (4 args), no body.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_006a0400(void)
{
    __asm {
        ret     0x10
    }
}
