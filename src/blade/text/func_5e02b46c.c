/*
 * FUN_5e02b46c (23 B) - CRT float-init wrapper. Sets up the float
 * conversion function table (FUN_5e02b484), stores the result of
 * FUN_5e02b7c0 into DAT_5e77a86c, calls FUN_5e02b770, and clears
 * the FPU exception flags.
 *
 * __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_5e02b484(void);
extern int __cdecl FUN_5e02b7c0(void);
extern int g_5e77a86c;   /* DAT_5e77a86c */
extern void __cdecl FUN_5e02b770(void);

__declspec(naked) void FUN_5e02b46c(void)
{
    __asm {
        call    FUN_5e02b484
        call    FUN_5e02b7c0
        mov     dword ptr [g_5e77a86c], eax
        call    FUN_5e02b770
        fnclex
        ret
    }
}
