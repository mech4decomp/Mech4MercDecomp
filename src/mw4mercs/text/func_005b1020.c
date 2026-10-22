/*
 * FUN_005b1020 (119 B) — allocates a Helicopter object (0xA8 bytes) and
 * initializes it via FUN_00501a20, then stores the result in a global.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__stdcall FUN_004084d0(int size);
extern void __stdcall FUN_00501a20(void);

__declspec(naked) void __stdcall FUN_005b1020(void)
{
    

extern int DAT_007f20fc;
extern int DAT_007f2104;
extern int DAT_007f20f0;
__asm {
push    esi
        push    0xA8
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L108B
        mov eax, dword ptr [DAT_007f20fc]
        mov ecx, dword ptr [DAT_007f2104]
        push    0x502C60
        push    0x5028B0
        push    0x678670
        push    0x62EC80
        push    0x678650
        push    eax
        push    0x678600
        push    0x5B10D0
        push    0x0
        push    0x0
        push    ecx
        push    0x785F30
        push    0x42A
        mov     ecx, esi
        call    FUN_00501a20
        mov     dword ptr [esi + 0xA4], 0x6039E0
        mov dword ptr [DAT_007f20f0], esi
        pop     esi
        ret
L108B:
        mov dword ptr [DAT_007f20f0], 0x0
        pop     esi
        ret
    }


}
