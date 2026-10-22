/*
 * FUN_005b68d0 (39 B) — global FlareWeapon destructor/cleanup.
 * If global handle non-null, calls FUN_00501b40 then frees via FUN_004084e0,
 * then clears the global handle.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00501b40(void);
extern void __stdcall FUN_004084e0(void *p);

__declspec(naked) void __stdcall FUN_005b68d0(void)
{
    

extern int DAT_007f2108;
__asm {
push    esi
        mov esi, dword ptr [DAT_007f2108]
        test    esi, esi
        jz      L_68eb
        mov     ecx, esi
        call    FUN_00501b40
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_68eb:
        mov dword ptr [DAT_007f2108], 0x0
        pop     esi
        ret
    }


}
