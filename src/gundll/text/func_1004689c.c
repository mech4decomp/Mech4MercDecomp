/*
 * FUN_1004689C (6 B) - IAT jump thunk: jmp dword ptr [g_100490B8].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_100490B8;   /* slot 0x100490B8 */

__declspec(naked) void FUN_1004689C(void)
{
    __asm {
        jmp     dword ptr [g_100490B8]
    }
}
