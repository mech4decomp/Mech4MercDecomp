/*
 * FUN_1004688A (6 B) - IAT jump thunk: jmp dword ptr [g_100490AC].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_100490AC;   /* slot 0x100490AC */

__declspec(naked) void FUN_1004688A(void)
{
    __asm {
        jmp     dword ptr [g_100490AC]
    }
}
