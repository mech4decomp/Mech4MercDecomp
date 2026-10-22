/*
 * FUN_100469B6 (6 B) - IAT jump thunk: jmp dword ptr [g_10049170].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_10049170;   /* slot 0x10049170 */

__declspec(naked) void FUN_100469B6(void)
{
    __asm {
        jmp     dword ptr [g_10049170]
    }
}
