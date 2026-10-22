/*
 * FUN_100468B4 (6 B) - IAT jump thunk: jmp dword ptr [g_100490C8].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_100490C8;   /* slot 0x100490C8 */

__declspec(naked) void FUN_100468B4(void)
{
    __asm {
        jmp     dword ptr [g_100490C8]
    }
}
