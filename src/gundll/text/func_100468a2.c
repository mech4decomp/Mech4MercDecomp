/*
 * FUN_100468A2 (6 B) - IAT jump thunk: jmp dword ptr [g_100490BC].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_100490BC;   /* slot 0x100490BC */

__declspec(naked) void FUN_100468A2(void)
{
    __asm {
        jmp     dword ptr [g_100490BC]
    }
}
