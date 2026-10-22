/*
 * FUN_5e02eae6 (74 B) - codepage lookup. Maps -2/-3/-4 to GetOEMCP /
 * GetACP / DAT_5e77aa8c, setting DAT_5e77aa40 accordingly.
 *
 * __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_5e77aa40;   /* DAT_5e77aa40 */
extern int g_5e77aa8c;   /* DAT_5e77aa8c */
extern int *g_5e0350c0;  /* IAT: GetOEMCP */
extern int *g_5e0350bc;  /* IAT: GetACP */

__declspec(naked) void FUN_5e02eae6(void)
{
    __asm {
        mov     eax, dword ptr [esp+4]
        and     dword ptr [g_5e77aa40], 0
        cmp     eax, -2
        jnz     Lb06
        mov     dword ptr [g_5e77aa40], 1
        jmp     dword ptr [g_5e0350c0]
    Lb06:
        cmp     eax, -3
        jnz     Lb1b
        mov     dword ptr [g_5e77aa40], 1
        jmp     dword ptr [g_5e0350bc]
    Lb1b:
        cmp     eax, -4
        jnz     Lb2f
        mov     eax, [g_5e77aa8c]
        mov     dword ptr [g_5e77aa40], 1
    Lb2f:
        ret
    }
}
