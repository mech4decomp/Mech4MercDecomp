/*
 * FUN_10046A1C (6 B) - IAT jump thunk: jmp dword ptr [g_10049010].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_10049010;   /* slot 0x10049010 */

__declspec(naked) void FUN_10046A1C(void)
{
    __asm {
        jmp     dword ptr [g_10049010]
    }
}
