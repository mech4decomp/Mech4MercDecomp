/*
 * FUN_005b9020 (140 B) — MechWarrior4::Sensor singleton init.
 *
 * Allocates 0xa8 bytes; if non-null, constructs via FUN_00501a20
 * (thiscall), sets [this+0xa4]=0x5f0a60, stores in global 0x007f2140.
 * Otherwise stores 0. Then registers a "Sensor" log stream via
 * FUN_006f4710 and stores result in global 0x007f2138.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(unsigned int size);
extern void __stdcall FUN_00501a20(void *param);
extern void *__cdecl FUN_006f4710(const char *name, int a, void *b);

__declspec(naked) void __stdcall FUN_005b9020(void)
{
    

extern int DAT_007f213c;
extern int DAT_007f25b4;
extern int DAT_007f2140;
extern int DAT_00849304;
extern int DAT_007f2138;
__asm {
push    esi
        push    0xa8
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_zero
        mov eax, dword ptr [DAT_007f213c]
        mov ecx, dword ptr [DAT_007f25b4]
        push    0x502c60
        push    0x5028b0
        push    0x674890
        push    0x0
        push    0x674770
        push    eax
        push    0x6746e0
        push    0x5b90f0
        push    0x0
        push    0x0
        push    ecx
        push    0x786cfc
        push    0x485
        mov     ecx, esi
        call    FUN_00501a20
        mov     dword ptr [esi + 0xa4], 0x5f0a60
        mov dword ptr [DAT_007f2140], esi
        jmp     L_common
L_zero:
        mov dword ptr [DAT_007f2140], 0x0
L_common:
        mov edx, dword ptr [DAT_00849304]
        push    edx
        push    0x0
        push    0x786cf4
        call    FUN_006f4710
        mov dword ptr [DAT_007f2138], eax
        pop     esi
        ret
    }


}
