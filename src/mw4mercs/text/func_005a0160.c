/*
 * FUN_005a0160 (119 B) — Allocates 0xA8 bytes, initializes a state engine,
 * stores pointer in global DAT_007f2024.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void * __stdcall FUN_004084d0(unsigned int);
extern void __stdcall FUN_00501a20(int, ...);

__declspec(naked) void FUN_005a0160(void)
{
    

extern int DAT_007f2020;
extern int DAT_007f2030;
extern int DAT_007f2024;
__asm {
push    esi
        push    0xa8
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      label_fail

        mov eax, dword ptr [DAT_007f2020]
        mov ecx, dword ptr [DAT_007f2030]
        push    0x502c60
        push    0x5028b0
        push    0x675db0
        push    0x62ec80
        push    0x675d90
        push    eax
        push    0x62df30
        push    0x5a0210
        push    0
        push    0
        push    ecx
        push    0x783ac8
        push    0x4c5
        mov     ecx, esi
        call    FUN_00501a20
        mov     dword ptr [esi + 0xA4], 0x6039e0
        mov dword ptr [DAT_007f2024], esi
        pop     esi
        ret

label_fail:
        mov dword ptr [DAT_007f2024], 0x0
        pop     esi
        ret
    }


}
