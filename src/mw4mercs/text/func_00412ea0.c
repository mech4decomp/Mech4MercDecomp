/*
 * FUN_00412ea0 (17 B) — __fastcall method: calls FUN_00412f80() then
 * FUN_004155f0() on this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00412f80(void);
extern void __cdecl FUN_004155f0(void);

__declspec(naked) void FUN_00412ea0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_00412f80
        mov     ecx, esi
        call    FUN_004155f0
        pop     esi
        ret
    }
}
