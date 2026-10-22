/*
 * FUN_10046AD6 (6 B) - IAT jump thunk: jmp dword ptr [g_10049200].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_10049200;   /* slot 0x10049200 */

__declspec(naked) void FUN_10046AD6(void)
{
    __asm {
        jmp     dword ptr [g_10049200]
    }
}
