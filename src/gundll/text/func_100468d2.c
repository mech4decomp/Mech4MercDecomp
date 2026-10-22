/*
 * FUN_100468D2 (6 B) - IAT jump thunk: jmp dword ptr [g_100490DC].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_100490DC;   /* slot 0x100490DC */

__declspec(naked) void FUN_100468D2(void)
{
    __asm {
        jmp     dword ptr [g_100490DC]
    }
}
