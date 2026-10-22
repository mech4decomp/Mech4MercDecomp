/*
 * FUN_1004680C (6 B) - IAT jump thunk: jmp dword ptr [g_100490E4].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_100490E4;   /* slot 0x100490E4 */

__declspec(naked) void FUN_1004680C(void)
{
    __asm {
        jmp     dword ptr [g_100490E4]
    }
}
