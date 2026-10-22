/*
 * FUN_10002208 (74 B) — dispatch on a special sentinel arg (-2/-3/-4):
 * sets the 0x10005528 flag and tail-jumps into an IAT handler, or loads
 * 0x10005558 for -4.
 *
 * __cdecl, 1 arg.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_10005528;                                /* 0x10005528 */
extern int g_10005558;                                /* 0x10005558 */
extern void *g_10004080;                              /* IAT 0x10004080 */
extern void *g_1000407c;                              /* IAT 0x1000407c */

__declspec(naked) void *__cdecl FUN_10002208(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        and     dword ptr [g_10005528], 0
        cmp     eax, -2
        jnz     L2228
        mov     dword ptr [g_10005528], 1
        jmp     dword ptr [g_10004080]
L2228:
        cmp     eax, -3
        jnz     L223D
        mov     dword ptr [g_10005528], 1
        jmp     dword ptr [g_1000407c]
L223D:
        cmp     eax, -4
        jnz     L2251
        mov     eax, dword ptr [g_10005558]
        mov     dword ptr [g_10005528], 1
L2251:
        ret
    }
}
