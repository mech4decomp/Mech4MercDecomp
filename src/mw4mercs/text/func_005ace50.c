/*
 * FUN_005ace50 (77 B) — no args.
 *
 * Allocates 0x24 bytes via FUN_004084d0; if non-null, calls
 * FUN_004dd270(0x49a, "CameraShip::ExecutionStateEngine", DAT_007dc8cc, 1,
 * &DAT_00785988, &LAB_005aced0, FUN_005052a0) and stores the pointer in
 * DAT_007f20d4; else stores 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(int size);
extern void __fastcall FUN_004dd270(void *this, int a, const char *b, int c,
                                    void *d, void *e, void *f);

__declspec(naked) void __fastcall FUN_005ace50(void)
{
    

extern int DAT_007dc8cc;
extern int DAT_007f20d4;
__asm {
push    esi
        push    0x24
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      L_91
        mov eax, dword ptr [DAT_007dc8cc]
        push    0x5052a0
        push    0x5aced0
        push    0x785988
        push    1
        push    eax
        push    0x7859a4
        push    0x49a
        mov     ecx, esi
        call    FUN_004dd270
        mov dword ptr [DAT_007f20d4], esi
        pop     esi
        ret
L_91:
        mov dword ptr [DAT_007f20d4], 0x0
        pop     esi
        ret
    }


}
