/*
 * FUN_005a01e0 (39 B) — Destructor/free companion to FUN_005a0160.
 * Calls FUN_00501b40 (thiscall with ESI), then frees via FUN_004084e0,
 * then zeros the global pointer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00501b40(void);
extern void __stdcall FUN_004084e0(void *);

__declspec(naked) void FUN_005a01e0(void)
{
    

extern int DAT_007f2024;
__asm {
push    esi
        mov esi, dword ptr [DAT_007f2024]
        test    esi, esi
        jz      label_zero
        mov     ecx, esi
        call    FUN_00501b40
        push    esi
        call    FUN_004084e0
        add     esp, 4

label_zero:
        mov dword ptr [DAT_007f2024], 0x0
        pop     esi
        ret
    }


}
