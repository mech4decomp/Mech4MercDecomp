/*
 * FUN_100469A4 (6 B) - IAT jump thunk: jmp dword ptr [g_10049164].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_10049164;   /* slot 0x10049164 */

__declspec(naked) void FUN_100469A4(void)
{
    __asm {
        jmp     dword ptr [g_10049164]
    }
}
