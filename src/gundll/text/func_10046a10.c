/*
 * FUN_10046A10 (6 B) - IAT jump thunk: jmp dword ptr [g_1004904C].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_1004904C;   /* slot 0x1004904C */

__declspec(naked) void FUN_10046A10(void)
{
    __asm {
        jmp     dword ptr [g_1004904C]
    }
}
