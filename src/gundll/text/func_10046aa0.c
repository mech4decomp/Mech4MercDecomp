/*
 * FUN_10046AA0 (6 B) - IAT jump thunk: jmp dword ptr [g_10049234].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_10049234;   /* slot 0x10049234 */

__declspec(naked) void FUN_10046AA0(void)
{
    __asm {
        jmp     dword ptr [g_10049234]
    }
}
