/*
 * FUN_10046AD0 (6 B) - IAT jump thunk: jmp dword ptr [g_100491F8].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_100491F8;   /* slot 0x100491F8 */

__declspec(naked) void FUN_10046AD0(void)
{
    __asm {
        jmp     dword ptr [g_100491F8]
    }
}
