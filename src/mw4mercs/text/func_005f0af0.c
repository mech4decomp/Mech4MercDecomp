/*
 * FUN_005f0af0 (101 B) — Allocates 0xa4 bytes; on success constructs an
 * object via FUN_00501a20 and stores it to global 0x007f25b8, else zeroes it.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int DAT_007dc8cc;
extern int DAT_007dc890;
extern void *DAT_007f25b8;

extern void *FUN_004084d0(unsigned int size);
extern void *FUN_00501a20(void);

__declspec(naked) void FUN_005f0af0(void)
{
    __asm {
        push    0xa4
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L1
        mov     ecx, dword ptr [DAT_007dc8cc]
        mov     edx, dword ptr [DAT_007dc890]
        push    0x502c60
        push    0x5028b0
        push    0x502370
        push    0x0
        push    0x501eb0
        push    ecx
        push    0x507620
        push    0x5f0b90
        push    0x0
        push    0x0
        push    edx
        push    0x78a208
        push    0x426
        mov     ecx, eax
        call    FUN_00501a20
        mov     dword ptr [DAT_007f25b8], eax
        ret
L1:
        mov     dword ptr [DAT_007f25b8], 0
        ret
    }
}
