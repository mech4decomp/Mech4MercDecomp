/*
 * FUN_1004685A (6 B) - IAT jump thunk: jmp dword ptr [g_1004908C].
 * (gaptext; import/function-pointer forwarder.)
 *
 * CFLAGS: /O1
 */

extern void *g_1004908C;   /* slot 0x1004908C */

__declspec(naked) void FUN_1004685A(void)
{
    __asm {
        jmp     dword ptr [g_1004908C]
    }
}
