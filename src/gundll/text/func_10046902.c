/*
 * FUN_10046902 (6 B) - IAT jump thunk: jmp dword ptr [g_100490F8].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_100490F8;   /* slot 0x100490F8 */

__declspec(naked) void FUN_10046902(void)
{
    __asm {
        jmp     dword ptr [g_100490F8]
    }
}
