/*
 * FUN_005b8390 (101 B) — Allocates 0xA4 bytes via FUN_004084d0; if non-null,
 * calls FUN_00501a20(...) to construct a "MechWarrior4::Path" and stores the
 * result in global 0x007f211c; else stores 0.
 *
 * __cdecl, no params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_004084d0(void);
extern void FUN_00501a20(void);

__declspec(naked) void FUN_005b8390(void)
{
    

extern int DAT_007dc8cc;
extern int DAT_007dc690;
extern int DAT_007f211c;
__asm {
push    0xA4
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_ea
        mov ecx, dword ptr [DAT_007dc8cc]
        mov edx, dword ptr [DAT_007dc690]
        push    0x502C60
        push    0x5028B0
        push    0x502370
        push    0
        push    0x501EB0
        push    ecx
        push    0x679940
        push    0x5B8430
        push    0
        push    0
        push    edx
        push    0x786A00
        push    0x488
        mov     ecx, eax
        call    FUN_00501a20
        mov dword ptr [DAT_007f211c], eax
        ret
L_ea:
        mov dword ptr [DAT_007f211c], 0x0
        ret
    }


}
