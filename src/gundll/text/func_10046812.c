/*
 * FUN_10046812 (6 B) - IAT jump thunk: jmp dword ptr [g_100490FC].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_100490FC;   /* slot 0x100490FC */

__declspec(naked) void FUN_10046812(void)
{
    __asm {
        jmp     dword ptr [g_100490FC]
    }
}
