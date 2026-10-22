/*
 * FUN_100468E4 (6 B) - IAT jump thunk: jmp dword ptr [g_100491C0].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_100491C0;   /* slot 0x100491C0 */

__declspec(naked) void FUN_100468E4(void)
{
    __asm {
        jmp     dword ptr [g_100491C0]
    }
}
