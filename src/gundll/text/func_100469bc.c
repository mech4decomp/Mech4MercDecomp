/*
 * FUN_100469BC (6 B) - IAT jump thunk: jmp dword ptr [g_10049174].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_10049174;   /* slot 0x10049174 */

__declspec(naked) void FUN_100469BC(void)
{
    __asm {
        jmp     dword ptr [g_10049174]
    }
}
