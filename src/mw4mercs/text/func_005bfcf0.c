/*
 * FUN_005bfcf0 (77 B) — Global PlayerAI execution-state-engine init.
 *
 * Allocates 0x24 bytes; on success calls FUN_004dd270 with a set of
 * constructor args and stores the result into global DAT_007f22b4.
 * On alloc failure stores 0.
 *
 * __cdecl, RET 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *FUN_004084d0(int size);
extern void FUN_004dd270(int a, void *b, void *c, int d, void *e, void *f, void *g);

__declspec(naked) void FUN_005bfcf0(void)
{
    

extern int DAT_007dc8cc;
extern int DAT_007f22b4;
__asm {
push    esi
        push    0x24
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_fail
        mov eax, dword ptr [DAT_007dc8cc]
        push    0x5052a0
        push    0x5bfd70
        push    0x787268
        push    0x3
        push    eax
        push    0x7872a8
        push    0x4b7
        mov     ecx, esi
        call    FUN_004dd270
        mov dword ptr [DAT_007f22b4], esi
        pop     esi
        ret
L_fail:
        mov dword ptr [DAT_007f22b4], 0x0
        pop     esi
        ret
    }


}
