/*
 * FUN_100469EC (6 B) - IAT jump thunk: jmp dword ptr [g_10049194].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_10049194;   /* slot 0x10049194 */

__declspec(naked) void FUN_100469EC(void)
{
    __asm {
        jmp     dword ptr [g_10049194]
    }
}
