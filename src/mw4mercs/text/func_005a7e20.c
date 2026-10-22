/*
 * FUN_005a7e20 (17 B) — Calls FUN_005f09f0() then FUN_005a7e40().
 *
 * __thiscall (ECX = this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005f09f0(void);
extern void __stdcall FUN_005a7e40(void);

__declspec(naked) void __stdcall FUN_005a7e20(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_005f09f0
        mov     ecx, esi
        call    FUN_005a7e40
        pop     esi
        ret
    }
}
