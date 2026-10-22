/*
 * FUN_1004687E (6 B) - IAT jump thunk: jmp dword ptr [g_100490A4].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_100490A4;   /* slot 0x100490A4 */

__declspec(naked) void FUN_1004687E(void)
{
    __asm {
        jmp     dword ptr [g_100490A4]
    }
}
