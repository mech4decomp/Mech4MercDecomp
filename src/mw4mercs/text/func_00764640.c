/*
 * FUN_00764640 (6 B) -- IAT thunk: jmp dword ptr [0x76b0e0].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_76b0e0;   /* IAT 0x0076b0e0 */

__declspec(naked) void FUN_00764640(void)
{
    __asm {
        jmp     dword ptr [g_76b0e0]
    }
}
