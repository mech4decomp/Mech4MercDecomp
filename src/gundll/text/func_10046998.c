/*
 * FUN_10046998 (6 B) - IAT jump thunk: jmp dword ptr [g_1004915C].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_1004915C;   /* slot 0x1004915C */

__declspec(naked) void FUN_10046998(void)
{
    __asm {
        jmp     dword ptr [g_1004915C]
    }
}
