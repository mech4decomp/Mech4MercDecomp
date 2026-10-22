/*
 * FUN_005b82e0 (39 B) — Destructor/cleanup for global 0x007f2118. If
 * non-null, calls FUN_004dd340() then frees via FUN_004084e0(); then
 * zeroes the global.
 *
 * __cdecl, no params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_004dd340(void);
extern void FUN_004084e0(void);

__declspec(naked) void FUN_005b82e0(void)
{
    

extern int DAT_007f2118;
__asm {
push    esi
        mov esi, dword ptr [DAT_007f2118]
        test    esi, esi
        jz      L_fb
        mov     ecx, esi
        call    FUN_004dd340
        push    esi
        call    FUN_004084e0
        add     esp, 4
L_fb:
        mov dword ptr [DAT_007f2118], 0x0
        pop     esi
        ret
    }


}
