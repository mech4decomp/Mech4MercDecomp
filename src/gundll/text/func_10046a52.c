/*
 * FUN_10046A52 (6 B) - IAT jump thunk: jmp dword ptr [g_10049044].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_10049044;   /* slot 0x10049044 */

__declspec(naked) void FUN_10046A52(void)
{
    __asm {
        jmp     dword ptr [g_10049044]
    }
}
