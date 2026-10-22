/*
 * FUN_004AC0E0 (39 B) — cleanup: calls FUN_00415200 + FUN_004084e0 on global, then zeroes it.
 *
 * __cdecl, no params.
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_00415200(int this);
extern void __stdcall FUN_004084e0(int ptr);
extern int DAT_007da9a0;

__declspec(naked) void FUN_004ac0e0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [DAT_007da9a0]    ; mov esi, [0x007da9a0]
        test    esi, esi
        jz      l_zero
        mov     ecx, esi
        call    FUN_00415200
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
    l_zero:
        mov     dword ptr [DAT_007da9a0], 0x0    ; mov [0x007da9a0], 0
        pop     esi
        ret
    }
}
