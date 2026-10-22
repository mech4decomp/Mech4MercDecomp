/*
 * FUN_1004682A (6 B) - IAT jump thunk: jmp dword ptr [g_10049068].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_10049068;   /* slot 0x10049068 */

__declspec(naked) void FUN_1004682A(void)
{
    __asm {
        jmp     dword ptr [g_10049068]
    }
}
