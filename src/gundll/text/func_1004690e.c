/*
 * FUN_1004690E (6 B) - IAT jump thunk: jmp dword ptr [g_100491B0].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_100491B0;   /* slot 0x100491B0 */

__declspec(naked) void FUN_1004690E(void)
{
    __asm {
        jmp     dword ptr [g_100491B0]
    }
}
