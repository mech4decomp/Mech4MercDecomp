/*
 * FUN_005b2120 (39 B) — Loads a global pointer (0x007f20f4), calls a
 * thiscall-style method on it, then frees it via FUN_004084e0 and clears
 * the global.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_00501b40(void);
extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) void FUN_005b2120(void)
{
    

extern int DAT_007f20f4;
__asm {
push    esi
        mov esi, dword ptr [DAT_007f20f4]
        test    esi, esi
        je      skip
        mov     ecx, esi
        call    FUN_00501b40
        push    esi
        call    FUN_004084e0
        add     esp, 4
skip:
        mov dword ptr [DAT_007f20f4], 0x0
        pop     esi
        ret
    }


}
