/*
 * FUN_0075DC2F (13 B) — IAT thunk block: int3 pad followed by two import
 * jumps through the IAT slots at 0x76b304 and 0x76b424.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_iat_76b304;
extern void *g_iat_76b424;

__declspec(naked) void FUN_0075DC2F(void)
{
    __asm {
        int     3
        jmp     dword ptr [g_iat_76b304]
        jmp     dword ptr [g_iat_76b424]
    }
}
