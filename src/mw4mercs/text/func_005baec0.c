/*
 * FUN_005baec0 (77 B) — StickyMover::ExecutionStateEngine setup.
 *
 * Allocates 0x24 bytes via FUN_004084d0; if non-null, initializes an
 * execution-state engine via FUN_004dd270 and stores the pointer in
 * DAT_007f214c; otherwise stores 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_004084d0(void);
extern void FUN_004dd270(void);

__declspec(naked) void FUN_005baec0(void)
{
    

extern int DAT_007dc8c4;
extern int DAT_007f214c;
__asm {
push    esi
        push    0x24
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_01
        mov eax, dword ptr [DAT_007dc8c4]
        push    0x5052a0
        push    0x5baf40
        push    0x786f90
        push    0x1
        push    eax
        push    0x786fb0
        push    0x481
        mov     ecx, esi
        call    FUN_004dd270
        mov dword ptr [DAT_007f214c], esi
        pop     esi
        ret
L_01:
        mov dword ptr [DAT_007f214c], 0x0
        pop     esi
        ret
    }


}
