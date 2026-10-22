/*
 * FUN_10046926 (6 B) - IAT jump thunk: jmp dword ptr [g_10049110].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_10049110;   /* slot 0x10049110 */

__declspec(naked) void FUN_10046926(void)
{
    __asm {
        jmp     dword ptr [g_10049110]
    }
}
