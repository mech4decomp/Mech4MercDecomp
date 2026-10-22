/*
 * FUN_005baf10 (39 B) — teardown of the StickyMover execution-state engine.
 *
 * If DAT_007f214c is non-null, calls FUN_004dd340() then frees via
 * FUN_004084e0, then clears DAT_007f214c to 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_004dd340(void);
extern void FUN_004084e0(void);

__declspec(naked) void FUN_005baf10(void)
{
    

extern int DAT_007f214c;
__asm {
push    esi
        mov esi, dword ptr [DAT_007f214c]
        test    esi, esi
        jz      L_2b
        mov     ecx, esi
        call    FUN_004dd340
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_2b:
        mov dword ptr [DAT_007f214c], 0x0
        pop     esi
        ret
    }


}
