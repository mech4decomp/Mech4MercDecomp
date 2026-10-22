/*
 * FUN_100469D4 (6 B) - IAT jump thunk: jmp dword ptr [g_10049184].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_10049184;   /* slot 0x10049184 */

__declspec(naked) void FUN_100469D4(void)
{
    __asm {
        jmp     dword ptr [g_10049184]
    }
}
