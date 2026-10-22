/*
 * FUN_10046860 (6 B) - IAT jump thunk: jmp dword ptr [g_10049090].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_10049090;   /* slot 0x10049090 */

__declspec(naked) void FUN_10046860(void)
{
    __asm {
        jmp     dword ptr [g_10049090]
    }
}
