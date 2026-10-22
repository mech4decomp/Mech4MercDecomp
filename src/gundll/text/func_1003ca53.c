/*
 * FUN_1003ca53 (28 B) - __stdcall. If DAT_10076ba8 == 0, call
 * FUN_1003c66b(-3) and set DAT_10076ba8 = 1.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_10076ba8;            /* DAT_10076ba8 */
extern void __cdecl FUN_1003c66b(void);   /* rel32 call */

__declspec(naked) void __stdcall FUN_1003ca53(void)
{
    __asm {
        cmp     dword ptr [g_10076ba8], 0
        jnz     L_ret
        push    -3
        call    FUN_1003c66b
        pop     ecx
        mov     dword ptr [g_10076ba8], 1
L_ret:
        ret
    }
}
