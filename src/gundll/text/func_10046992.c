/*
 * FUN_10046992 (6 B) - IAT jump thunk: jmp dword ptr [g_10049158].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_10049158;   /* slot 0x10049158 */

__declspec(naked) void FUN_10046992(void)
{
    __asm {
        jmp     dword ptr [g_10049158]
    }
}
