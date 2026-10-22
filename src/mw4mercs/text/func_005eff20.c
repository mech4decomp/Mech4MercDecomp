/*
 * FUN_005eff20 (39 B) - Engine teardown.
 *
 * Loads DAT_007f25ac; if non-null, calls FUN_00501b40 (thiscall, ECX=this)
 * then frees it via FUN_004084e0. Clears DAT_007f25ac to 0.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_00501b40(void);
extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) void FUN_005eff20(void)
{
    

extern int DAT_007f25ac;
__asm {
push    esi
        mov esi, dword ptr [DAT_007f25ac]
        test    esi, esi
        jz      L_005eff3b

        mov     ecx, esi
        call    FUN_00501b40
        push    esi
        call    FUN_004084e0
        add     esp, 0x4

L_005eff3b:
        mov dword ptr [DAT_007f25ac], 0x0
        pop     esi
        ret
    }


}
