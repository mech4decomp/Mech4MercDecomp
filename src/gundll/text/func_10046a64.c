/*
 * FUN_10046A64 (6 B) - IAT jump thunk: jmp dword ptr [g_10049038].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_10049038;   /* slot 0x10049038 */

__declspec(naked) void FUN_10046A64(void)
{
    __asm {
        jmp     dword ptr [g_10049038]
    }
}
