/*
 * FUN_100467F4 (6 B) - IAT jump thunk: jmp dword ptr [g_10049228].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_10049228;   /* slot 0x10049228 */

__declspec(naked) void FUN_100467F4(void)
{
    __asm {
        jmp     dword ptr [g_10049228]
    }
}
