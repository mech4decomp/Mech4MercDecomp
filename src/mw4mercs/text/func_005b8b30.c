/*
 * FUN_005b8b30 (39 B) — RET (no params).
 *
 * Frees the object in DAT_007f2120 (via FUN_00501b40 + FUN_004084e0) and
 * clears the global.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_00501b40(void);
extern void __fastcall FUN_004084e0(void);

__declspec(naked) void __fastcall FUN_005b8b30(void)
{
    

extern int DAT_007f2120;
__asm {
push    esi
        mov esi, dword ptr [DAT_007f2120]
        test    esi, esi
        jz      L_8b4b
        mov     ecx, esi
        call    FUN_00501b40
        push    esi
        call    FUN_004084e0
        add     esp, 4
    L_8b4b:
        mov dword ptr [DAT_007f2120], 0x0
        pop     esi
        ret
    }


}
