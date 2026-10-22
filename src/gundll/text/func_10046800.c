/*
 * FUN_10046800 (6 B) - IAT jump thunk: jmp dword ptr [g_100491A8].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_100491A8;   /* slot 0x100491A8 */

__declspec(naked) void FUN_10046800(void)
{
    __asm {
        jmp     dword ptr [g_100491A8]
    }
}
