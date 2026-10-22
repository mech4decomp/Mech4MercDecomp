/*
 * FUN_005b8400 (39 B) — Destructor/cleanup for global 0x007f211c. If
 * non-null, calls FUN_00501b40() then frees via FUN_004084e0(); then
 * zeroes the global.
 *
 * __cdecl, no params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_00501b40(void);
extern void FUN_004084e0(void);

__declspec(naked) void FUN_005b8400(void)
{
    

extern int DAT_007f211c;
__asm {
push    esi
        mov esi, dword ptr [DAT_007f211c]
        test    esi, esi
        jz      L_1b
        mov     ecx, esi
        call    FUN_00501b40
        push    esi
        call    FUN_004084e0
        add     esp, 4
L_1b:
        mov dword ptr [DAT_007f211c], 0x0
        pop     esi
        ret
    }


}
