/*
 * FUN_10046962 (6 B) - IAT jump thunk: jmp dword ptr [g_10049138].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_10049138;   /* slot 0x10049138 */

__declspec(naked) void FUN_10046962(void)
{
    __asm {
        jmp     dword ptr [g_10049138]
    }
}
