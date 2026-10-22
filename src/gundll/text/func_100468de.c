/*
 * FUN_100468DE (6 B) - IAT jump thunk: jmp dword ptr [g_100491C4].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_100491C4;   /* slot 0x100491C4 */

__declspec(naked) void FUN_100468DE(void)
{
    __asm {
        jmp     dword ptr [g_100491C4]
    }
}
