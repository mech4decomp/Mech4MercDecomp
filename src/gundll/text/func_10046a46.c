/*
 * FUN_10046A46 (6 B) - IAT jump thunk: jmp dword ptr [g_10049058].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_10049058;   /* slot 0x10049058 */

__declspec(naked) void FUN_10046A46(void)
{
    __asm {
        jmp     dword ptr [g_10049058]
    }
}
