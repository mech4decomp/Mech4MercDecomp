/*
 * FUN_005ece30 (39 B) — teardown for the WeaponMover subsystem.
 *
 * If global 0x007f25a0 is non-null, calls FUN_00501b40 (thiscall) then
 * operator delete FUN_004084e0, then zeroes the global.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_00501b40(void);
extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) void __cdecl FUN_005ece30(void)
{
    

extern int DAT_007f25a0;
__asm {
push    esi
        mov esi, dword ptr [DAT_007f25a0]
        test    esi, esi
        jz      done
        mov     ecx, esi
        call    FUN_00501b40
        push    esi
        call    FUN_004084e0
        add     esp, 4
done:
        mov dword ptr [DAT_007f25a0], 0x0
        pop     esi
        ret
    }


}
