/*
 * FUN_10046A4C (6 B) - IAT jump thunk: jmp dword ptr [g_10049048].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_10049048;   /* slot 0x10049048 */

__declspec(naked) void FUN_10046A4C(void)
{
    __asm {
        jmp     dword ptr [g_10049048]
    }
}
