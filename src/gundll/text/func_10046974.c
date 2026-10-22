/*
 * FUN_10046974 (6 B) - IAT jump thunk: jmp dword ptr [g_10049144].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_10049144;   /* slot 0x10049144 */

__declspec(naked) void FUN_10046974(void)
{
    __asm {
        jmp     dword ptr [g_10049144]
    }
}
