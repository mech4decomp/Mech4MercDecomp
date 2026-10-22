/*
 * FUN_005bf5e0 (55 B) — plain function, no params, RET.
 *
 * Allocates 0x14 bytes via FUN_004084d0; if nonzero, calls
 * FUN_004151c0(0x47f, "MechWarrior4::GUIWeapon", DAT_007b8c10) and stores the
 * result in DAT_007f22b0; else stores 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_004084d0(void);
extern void FUN_004151c0(void);

__declspec(naked) void FUN_005bf5e0(void)
{
    

extern int DAT_007b8c10;
extern int DAT_007f22b0;
__asm {
push    0x14
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_5bf60c
        mov ecx, dword ptr [DAT_007b8c10]
        push    ecx
        push    0x787204
        push    0x47f
        mov     ecx, eax
        call    FUN_004151c0
        mov dword ptr [DAT_007f22b0], eax
        ret
    L_5bf60c:
        mov dword ptr [DAT_007f22b0], 0x0
        ret
    }


}
