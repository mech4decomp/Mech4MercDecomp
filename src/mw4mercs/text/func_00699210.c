/*
 * FUN_00699210 (17 B) — calls FUN_006991D0, multiplies the top of the FPU
 * stack by the integer argument, calls FUN_0075DB4A, returns 4 (__stdcall).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006991D0(void);
extern void __cdecl FUN_0075DB4A(void);

__declspec(naked) void FUN_00699210(void)
{
    __asm {
        call    FUN_006991D0
        fimul   dword ptr [esp+4]
        call    FUN_0075DB4A
        ret     4
    }
}
