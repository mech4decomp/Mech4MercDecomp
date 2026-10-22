/*
 * FUN_005aa3a0 (39 B) — Cleanup of global object pointer at 0x007f20a0.
 *
 * If the global is non-null, calls FUN_00501b40 (thiscall on it) then
 * frees it via FUN_004084e0, then zeroes the global.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_00501b40(void);
extern void __cdecl FUN_004084e0(void *param);

__declspec(naked) void FUN_005aa3a0(void)
{
    

extern int DAT_007f20a0;
__asm {
push    esi
        mov esi, dword ptr [DAT_007f20a0]
        test    esi, esi
        jz      L1
        mov     ecx, esi
        call    FUN_00501b40
        push    esi
        call    FUN_004084e0
        add     esp, 4
L1:
        mov dword ptr [DAT_007f20a0], 0x0
        pop     esi
        ret
    }


}
