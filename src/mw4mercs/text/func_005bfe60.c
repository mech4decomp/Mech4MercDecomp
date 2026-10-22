/*
 * FUN_005bfe60 (39 B) — Teardown of global MechWarrior4::PlayerAI.
 *
 * If global DAT_007f22b8 is non-null, calls FUN_00501b40(this) then
 * frees it via FUN_004084e0. Clears DAT_007f22b8 to 0.
 *
 * __cdecl, RET 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_00501b40(void);
extern void FUN_004084e0(void *obj);

__declspec(naked) void FUN_005bfe60(void)
{
    

extern int DAT_007f22b8;
__asm {
push    esi
        mov esi, dword ptr [DAT_007f22b8]
        test    esi, esi
        jz      L_skip
        mov     ecx, esi
        call    FUN_00501b40
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_skip:
        mov dword ptr [DAT_007f22b8], 0x0
        pop     esi
        ret
    }


}
