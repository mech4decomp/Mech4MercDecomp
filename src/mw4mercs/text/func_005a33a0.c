/*
 * FUN_005a33a0 (39 B) — Cleanup/destructor for the armor system.
 *
 * If the global at 0x007F2040 is non-null, calls FUN_00501b40 on it,
 * then frees it with FUN_004084e0. Sets the global to null.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00501b40(void);
extern void __stdcall FUN_004084e0(void *ptr);

__declspec(naked) void FUN_005a33a0(void)
{
    

extern int DAT_007f2040;
__asm {
push    esi
        mov esi, dword ptr [DAT_007f2040]
        test    esi, esi
        jz      L_skip
        mov     ecx, esi
        call    FUN_00501b40
        push    esi
        call    FUN_004084e0
        add     esp, 4
L_skip:
        mov dword ptr [DAT_007f2040], 0x0
        pop     esi
        ret
    }


}
