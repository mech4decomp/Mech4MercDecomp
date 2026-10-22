/*
 * FUN_004a87e0 (39 B) — MLR ShardCloud destructor: if the global registry
 * slot g_007da994 is non-null, calls FUN_00415200 (dtor) then frees the
 * object via FUN_004084e0, and clears the slot.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007da994;
extern void __cdecl FUN_00415200(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_004a87e0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [g_007da994]
        test    esi, esi
        jz      L_4a87fb
        mov     ecx, esi
        call    FUN_00415200
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_4a87fb:
        mov     dword ptr [g_007da994], 0x0
        pop     esi
        ret
    }
}
