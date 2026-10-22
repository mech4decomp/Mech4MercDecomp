/*
 * FUN_005a71e0 (39 B) — Destructor/cleanup for the explosive weapon object.
 *
 * Loads global pointer at 0x007f2074. If non-null, calls
 * FUN_00501b40() on it, then frees via FUN_004084e0 (operator delete).
 * Finally sets the global to NULL.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __fastcall FUN_00501b40(void);
extern void __cdecl FUN_004084e0(void *);

__declspec(naked) void __fastcall FUN_005a71e0(void)
{
    

extern int DAT_007f2074;
__asm {
push    esi
        mov esi, dword ptr [DAT_007f2074]
        test    esi, esi
        jz      skip_free
        mov     ecx, esi
        call    FUN_00501b40
        push    esi
        call    FUN_004084e0
        add     esp, 4
skip_free:
        mov dword ptr [DAT_007f2074], 0x0
        pop     esi
        ret
    }


}
