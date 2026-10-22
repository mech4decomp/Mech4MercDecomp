/*
 * FUN_005ba8b0 (39 B) — global NarcWeapon singleton destructor.
 *
 * If DAT_007f2144 is non-null, calls FUN_00501b40 (this=ESI) then frees
 * the object via FUN_004084e0. Clears DAT_007f2144 to 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_00501b40(void);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void __stdcall FUN_005ba8b0(void)
{
    

extern int DAT_007f2144;
__asm {
push    esi
        mov esi, dword ptr [DAT_007f2144]
        test    esi, esi
        jz      L_clear
        mov     ecx, esi
        call    FUN_00501b40
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_clear:
        mov dword ptr [DAT_007f2144], 0x0
        pop     esi
        ret
    }


}
