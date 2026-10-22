/*
 * FUN_10046A6A (6 B) - IAT jump thunk: jmp dword ptr [g_10049034].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_10049034;   /* slot 0x10049034 */

__declspec(naked) void FUN_10046A6A(void)
{
    __asm {
        jmp     dword ptr [g_10049034]
    }
}
