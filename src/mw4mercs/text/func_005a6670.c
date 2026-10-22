/*
 * FUN_005a6670 (39 B) — Cleanup/teardown function.
 *
 * Loads a global pointer (DAT_007f206c), calls two subroutines on it if
 * non-null, then zeroes the global.
 *
 * __cdecl
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00501b40(void);
extern void __cdecl FUN_004084e0(int param);

__declspec(naked) void __cdecl FUN_005a6670(void)
{
    

extern int DAT_007f206c;
__asm {
push    esi
        mov esi, dword ptr [DAT_007f206c]
        test    esi, esi
        jz      zero_global
        mov     ecx, esi
        call    FUN_00501b40
        push    esi
        call    FUN_004084e0
        add     esp, 4
zero_global:
        mov dword ptr [DAT_007f206c], 0x0
        pop     esi
        ret
    }


}
