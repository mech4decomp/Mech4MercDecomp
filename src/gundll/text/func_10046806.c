/*
 * FUN_10046806 (6 B) - IAT jump thunk: jmp dword ptr [g_100491A4].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_100491A4;   /* slot 0x100491A4 */

__declspec(naked) void FUN_10046806(void)
{
    __asm {
        jmp     dword ptr [g_100491A4]
    }
}
