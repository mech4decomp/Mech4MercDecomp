/*
 * FUN_00709c20 (12 B) — loads a global dword, pushes it, tail-calls
 * FUN_007098a0 (gosScript log/emit helper).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_00858a38;              /* DAT_00858a38 */
extern void __cdecl FUN_007098a0(void);

__declspec(naked) void FUN_00709c20(void)
{
    __asm {
        mov     eax, dword ptr [g_00858a38]
        push    eax
        call    FUN_007098a0
        ret
    }
}
