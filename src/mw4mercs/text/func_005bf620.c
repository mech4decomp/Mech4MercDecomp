/*
 * FUN_005bf620 (39 B) — plain function, no params, RET.
 *
 * If DAT_007f22b0 != 0, calls FUN_00415200(this) then FUN_004084e0(ptr), and
 * zeroes DAT_007f22b0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_00415200(void);
extern void FUN_004084e0(void);

__declspec(naked) void FUN_005bf620(void)
{
    

extern int DAT_007f22b0;
__asm {
push    esi
        mov esi, dword ptr [DAT_007f22b0]
        test    esi, esi
        jz      L_5bf63b
        mov     ecx, esi
        call    FUN_00415200
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
    L_5bf63b:
        mov dword ptr [DAT_007f22b0], 0x0
        pop     esi
        ret
    }


}
