/*
 * FUN_0075E34C (6 B) -- IAT thunk: jmp dword ptr [0x76b5bc].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_76b5bc;   /* IAT 0x0076b5bc */

__declspec(naked) void FUN_0075E34C(void)
{
    __asm {
        jmp     dword ptr [g_76b5bc]
    }
}
