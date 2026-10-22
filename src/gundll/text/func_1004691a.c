/*
 * FUN_1004691A (6 B) - IAT jump thunk: jmp dword ptr [g_10049108].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_10049108;   /* slot 0x10049108 */

__declspec(naked) void FUN_1004691A(void)
{
    __asm {
        jmp     dword ptr [g_10049108]
    }
}
