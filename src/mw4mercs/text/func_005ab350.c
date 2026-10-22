/*
 * FUN_005ab350 (66 B) — __cdecl, no args.
 *
 * Cleanup routine: destroys the ClusterBombWeaponSubsystem object and frees
 * the four float-vector globals at 0x007f20b0..0x007f20c0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00501b40(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_005ab350(void)
{
    

extern int DAT_007f20c0;
__asm {
push    esi
        mov esi, dword ptr [DAT_007f20c0]
        test    esi, esi
        jz      L_ab36b
        mov     ecx, esi
        call    FUN_00501b40
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_ab36b:
        mov dword ptr [DAT_007f20c0], 0x0
        mov     esi, 0x7f20b0
L_ab37a:
        mov     eax, dword ptr [esi]
        push    eax
        call    FUN_004084e0
        add     esi, 0x4
        add     esp, 0x4
        cmp     esi, 0x7f20c0
        jl      L_ab37a
        pop     esi
        ret
    }


}
