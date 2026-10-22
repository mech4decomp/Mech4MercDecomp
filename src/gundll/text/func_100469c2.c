/*
 * FUN_100469C2 (6 B) - IAT jump thunk: jmp dword ptr [g_10049178].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_10049178;   /* slot 0x10049178 */

__declspec(naked) void FUN_100469C2(void)
{
    __asm {
        jmp     dword ptr [g_10049178]
    }
}
