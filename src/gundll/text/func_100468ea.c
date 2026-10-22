/*
 * FUN_100468EA (6 B) - IAT jump thunk: jmp dword ptr [g_100490E8].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_100490E8;   /* slot 0x100490E8 */

__declspec(naked) void FUN_100468EA(void)
{
    __asm {
        jmp     dword ptr [g_100490E8]
    }
}
