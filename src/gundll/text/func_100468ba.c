/*
 * FUN_100468BA (6 B) - IAT jump thunk: jmp dword ptr [g_100490CC].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_100490CC;   /* slot 0x100490CC */

__declspec(naked) void FUN_100468BA(void)
{
    __asm {
        jmp     dword ptr [g_100490CC]
    }
}
