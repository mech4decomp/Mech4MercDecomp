/*
 * FUN_10046A28 (6 B) - IAT jump thunk: jmp dword ptr [g_10049008].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_10049008;   /* slot 0x10049008 */

__declspec(naked) void FUN_10046A28(void)
{
    __asm {
        jmp     dword ptr [g_10049008]
    }
}
