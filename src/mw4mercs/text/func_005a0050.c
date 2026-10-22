/*
 * FUN_005a0050 (39 B) — Destructor/free companion to FUN_005a0000.
 * Calls FUN_004dd340 (thiscall with ESI), then frees via FUN_004084e0,
 * then zeros the global pointer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_004dd340(void);
extern void __stdcall FUN_004084e0(void *);

__declspec(naked) void FUN_005a0050(void)
{
    

extern int DAT_007f2020;
__asm {
push    esi
        mov esi, dword ptr [DAT_007f2020]
        test    esi, esi
        jz      label_zero
        mov     ecx, esi
        call    FUN_004dd340
        push    esi
        call    FUN_004084e0
        add     esp, 4

label_zero:
        mov dword ptr [DAT_007f2020], 0x0
        pop     esi
        ret
    }


}
