/*
 * FUN_005af670 (39 B) — destroys the global BombWeaponSubsystem at 0x007f20e4.
 * If non-null, calls FUN_00501b40 then frees via FUN_004084e0; clears global.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00501b40(void);
extern void __stdcall FUN_004084e0(void *p);

__declspec(naked) void __stdcall FUN_005af670(void)
{
    

extern int DAT_007f20e4;
__asm {
push    esi
        mov esi, dword ptr [DAT_007f20e4]
        test    esi, esi
        jz      L68b
        mov     ecx, esi
        call    FUN_00501b40
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L68b:
        mov dword ptr [DAT_007f20e4], 0x0
        pop     esi
        ret
    }


}
