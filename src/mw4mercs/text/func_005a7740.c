/*
 * FUN_005a7740 (39 B) — Cleanup function for light entity manager.
 *
 * Destroys the object at DAT_007f2078 if non-null, then zeros the global.
 *
 * __cdecl (no params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00501b40(void);
extern void __stdcall FUN_004084e0(void *ptr);

__declspec(naked) void __cdecl FUN_005a7740(void)
{
    

extern int DAT_007f2078;
__asm {
push    esi
        mov esi, dword ptr [DAT_007f2078]
        test    esi, esi
        jz      skip_delete

        mov     ecx, esi
        call    FUN_00501b40
        push    esi
        call    FUN_004084e0
        add     esp, 0x4

skip_delete:
        mov dword ptr [DAT_007f2078], 0x0
        pop     esi
        ret
    }


}
