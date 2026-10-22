/*
 * FUN_005fc460 (39 B) — destroys the MWMover object at 0x007f26a4
 * (calls FUN_00501b40 then frees) and clears the global.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007f26a4;

extern void __cdecl FUN_00501b40(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_005fc460(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [g_007f26a4]
        test    esi, esi
        jz      loc_5fc47b
        mov     ecx, esi
        call    FUN_00501b40
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
loc_5fc47b:
        mov     dword ptr [g_007f26a4], 0x0
        pop     esi
        ret
    }
}
