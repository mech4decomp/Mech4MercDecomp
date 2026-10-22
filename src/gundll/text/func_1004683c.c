/*
 * FUN_1004683C (6 B) - IAT jump thunk: jmp dword ptr [g_10049074].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_10049074;   /* slot 0x10049074 */

__declspec(naked) void FUN_1004683C(void)
{
    __asm {
        jmp     dword ptr [g_10049074]
    }
}
