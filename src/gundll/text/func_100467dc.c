/*
 * FUN_100467DC (6 B) - IAT jump thunk: jmp dword ptr [g_10049210].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_10049210;   /* slot 0x10049210 */

__declspec(naked) void FUN_100467DC(void)
{
    __asm {
        jmp     dword ptr [g_10049210]
    }
}
