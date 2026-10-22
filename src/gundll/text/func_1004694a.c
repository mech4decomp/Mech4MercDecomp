/*
 * FUN_1004694A (6 B) - IAT jump thunk: jmp dword ptr [g_10049128].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_10049128;   /* slot 0x10049128 */

__declspec(naked) void FUN_1004694A(void)
{
    __asm {
        jmp     dword ptr [g_10049128]
    }
}
