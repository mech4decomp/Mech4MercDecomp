/*
 * FUN_10046986 (6 B) - IAT jump thunk: jmp dword ptr [g_10049150].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_10049150;   /* slot 0x10049150 */

__declspec(naked) void FUN_10046986(void)
{
    __asm {
        jmp     dword ptr [g_10049150]
    }
}
