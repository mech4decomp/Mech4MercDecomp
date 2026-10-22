/*
 * FUN_005e6650 (39 B) — if global 0x007f2558 is non-null, calls
 * FUN_00501b40(this) then frees it via FUN_004084e0; clears the global.
 *
 * __cdecl, no params, RET (plain).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_00501b40(void);
extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) void __cdecl FUN_005e6650(void)
{
    

extern int DAT_007f2558;
__asm {
push    esi
        mov esi, dword ptr [DAT_007f2558]
        test    esi, esi
        jz      L1
        mov     ecx, esi
        call    FUN_00501b40
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L1:
        mov dword ptr [DAT_007f2558], 0x0
        pop     esi
        ret
    }


}
