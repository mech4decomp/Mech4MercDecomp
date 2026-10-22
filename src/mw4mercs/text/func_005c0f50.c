/*
 * FUN_005c0f50 (39 B) — Destroys the global CombatAI singleton (DAT_007f23b0):
 * calls FUN_00501b40 (thiscall) then frees via FUN_004084e0, then zeroes it.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00501b40(void);
extern void __cdecl FUN_004084e0(void *);

__declspec(naked) void __stdcall FUN_005c0f50(void)
{
    

extern int DAT_007f23b0;
__asm {
push    esi
        mov esi, dword ptr [DAT_007f23b0]
        test    esi, esi
        jz      L_skip
        mov     ecx, esi
        call    FUN_00501b40
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_skip:
        mov dword ptr [DAT_007f23b0], 0x0
        pop     esi
        ret
    }


}
