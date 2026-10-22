/*
 * FUN_100467EE (6 B) - IAT jump thunk: jmp dword ptr [g_10049224].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_10049224;   /* slot 0x10049224 */

__declspec(naked) void FUN_100467EE(void)
{
    __asm {
        jmp     dword ptr [g_10049224]
    }
}
