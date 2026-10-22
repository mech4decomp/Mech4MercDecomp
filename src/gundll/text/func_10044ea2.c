/* src/modules/gundll/crt/func_10044ea2.c
 * FUN_10044ea2 (46 B) - __stdcall. One-time init guard.
 * Match: target 100%
 */

extern int g_10075808;                 /* DAT_10075808 */
extern void __cdecl FUN_10039b19(void); /* rel32 call */
extern void __cdecl FUN_10044ee6(void); /* rel32 call */
extern void __cdecl FUN_10039b7a(void); /* rel32 call */

__declspec(naked) void __stdcall FUN_10044ea2(void)
{
    __asm {
        cmp     dword ptr [g_10075808], 0
        jnz     L_ecf
        push    0xb
        call    FUN_10039b19
        cmp     dword ptr [g_10075808], 0
        pop     ecx
        jnz     L_ec7
        call    FUN_10044ee6
        inc     dword ptr [g_10075808]
L_ec7:
        push    0xb
        call    FUN_10039b7a
        pop     ecx
L_ecf:
        ret
    }
}
