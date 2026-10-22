/*
 * FUN_10038212 (23 B) — __stdcall.
 * Calls FUN_1003822a, stores FUN_1003b066() result to global 0x100754b0,
 * calls FUN_1003b016, clears FPU exception flags.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1003822a(void);
extern unsigned int __cdecl FUN_1003b066(void);
extern void __cdecl FUN_1003b016(void);
extern unsigned int g_100754b0;

__declspec(naked) void __stdcall FUN_10038212(void)
{
    __asm {
        call    FUN_1003822a
        call    FUN_1003b066
        mov     dword ptr [g_100754b0], eax
        call    FUN_1003b016
        fnclex
        ret
    }
}
