/*
 * FUN_005bb0b0 (39 B) — teardown of the StickyMover object.
 *
 * If DAT_007f2150 is non-null, calls FUN_00501b40() then frees via
 * FUN_004084e0, then clears DAT_007f2150 to 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_00501b40(void);
extern void FUN_004084e0(void);

__declspec(naked) void FUN_005bb0b0(void)
{
    

extern int DAT_007f2150;
__asm {
push    esi
        mov esi, dword ptr [DAT_007f2150]
        test    esi, esi
        jz      L_cb
        mov     ecx, esi
        call    FUN_00501b40
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_cb:
        mov dword ptr [DAT_007f2150], 0x0
        pop     esi
        ret
    }


}
