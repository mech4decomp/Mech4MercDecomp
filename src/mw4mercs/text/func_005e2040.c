/*
 * FUN_005e2040 (116 B) — Allocates a 0xA8-byte object via FUN_004084d0,
 * initializes it via FUN_00501a20 with a big argument list, stores a vtable
 * pointer at +0xA4, and records the result in DAT_007f2538.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *FUN_004084d0(unsigned int size);
extern void FUN_00501a20(void);

__declspec(naked) void FUN_005e2040(void)
{
    

extern int DAT_007f255c;
extern int DAT_007f2548;
extern int DAT_007f2538;
__asm {
push    esi
        push    0xA8
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_20a8
        mov eax, dword ptr [DAT_007f255c]
        mov ecx, dword ptr [DAT_007f2548]
        push    0x502C60
        push    0x5028B0
        push    0x675A60
        push    0x0
        push    0x675A40
        push    eax
        push    0x674B00
        push    0x5E20F0
        push    0x0
        push    0x0
        push    ecx
        push    0x788A28
        push    0x477
        mov     ecx, esi
        call    FUN_00501a20
        mov     dword ptr [esi + 0xA4], 0x5EF970
        mov dword ptr [DAT_007f2538], esi
        pop     esi
        ret
L_20a8:
        mov dword ptr [DAT_007f2538], 0x0
        pop     esi
        ret
    }


}
