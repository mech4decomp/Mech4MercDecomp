/*
 * FUN_100469AA (6 B) - IAT jump thunk: jmp dword ptr [g_10049168].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_10049168;   /* slot 0x10049168 */

__declspec(naked) void FUN_100469AA(void)
{
    __asm {
        jmp     dword ptr [g_10049168]
    }
}
