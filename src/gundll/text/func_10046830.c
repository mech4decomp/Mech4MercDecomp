/*
 * FUN_10046830 (6 B) - IAT jump thunk: jmp dword ptr [g_1004906C].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_1004906C;   /* slot 0x1004906C */

__declspec(naked) void FUN_10046830(void)
{
    __asm {
        jmp     dword ptr [g_1004906C]
    }
}
