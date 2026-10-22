/*
 * FUN_005bfdf0 (104 B) — Global MechWarrior4::PlayerAI init.
 *
 * Allocates 0xA4 bytes; on success calls FUN_00501a20 with a set of
 * constructor args and stores the result into global DAT_007f22b8.
 * On alloc failure stores 0.
 *
 * __cdecl, RET 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *FUN_004084d0(int size);
extern void *FUN_00501a20(int a, void *b, void *c, int d, void *e, void *f,
                          void *g, void *h, void *i, int j, void *k, void *l, void *m);

__declspec(naked) void FUN_005bfdf0(void)
{
    

extern int DAT_007f22b4;
extern int DAT_007f22c8;
extern int DAT_007f22b8;
__asm {
push    0xa4
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_fail
        mov ecx, dword ptr [DAT_007f22b4]
        mov edx, dword ptr [DAT_007f22c8]
        push    0x502c60
        push    0x5028b0
        push    0x502370
        push    0x0
        push    0x501eb0
        push    ecx
        push    0x678cb0
        push    0x5bfe90
        push    0x787280
        push    0x1
        push    edx
        push    0x7872d0
        push    0x4a7
        mov     ecx, eax
        call    FUN_00501a20
        mov dword ptr [DAT_007f22b8], eax
        ret
L_fail:
        mov dword ptr [DAT_007f22b8], 0x0
        ret
    }


}
