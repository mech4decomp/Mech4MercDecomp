/*
 * FUN_005e2e40 (39 B) — global SRMWeaponSubsystem destructor.
 *
 * Loads global 0x7f2544; if non-null calls FUN_00501b40 (this) then
 * frees via FUN_004084e0. Clears global 0x7f2544.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_00501b40(void *this);
extern void __stdcall FUN_004084e0(void *p);

__declspec(naked) void FUN_005e2e40(void)
{
    

extern int DAT_007f2544;
__asm {
push    esi
        mov esi, dword ptr [DAT_007f2544]
        test    esi, esi
        jz      clear
        mov     ecx, esi
        call    FUN_00501b40
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
clear:
        mov dword ptr [DAT_007f2544], 0x0
        pop     esi
        ret
    }


}
