/*
 * FUN_10046ADC (6 B) - IAT jump thunk: jmp dword ptr [g_10049204].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_10049204;   /* slot 0x10049204 */

__declspec(naked) void FUN_10046ADC(void)
{
    __asm {
        jmp     dword ptr [g_10049204]
    }
}
