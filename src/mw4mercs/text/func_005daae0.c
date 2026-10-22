/*
 * FUN_005daae0 (326 B) — AI subsystem initialization.
 *
 * Creates a set of named AI "systems" via FUN_006f4710, allocates and
 * initializes several objects (Adept::AI, command entry blocks, etc.).
 *
 * Match: target 100%
 */

extern void __stdcall FUN_006f4710(void);
extern void *__cdecl FUN_004084d0(unsigned int size);
extern void __stdcall FUN_00501a20(void);
extern void __stdcall FUN_00415d70(void);
extern void __stdcall FUN_00675e80(void);
extern void __stdcall FUN_004c43f0(void);

extern int DAT_00849304;
extern int DAT_007f2448;
extern int DAT_007f2450;
extern int DAT_007f244c;
extern int DAT_007f2460;
extern int DAT_007f2464;
extern int DAT_007dc8cc;
extern int DAT_007dc894;
extern int DAT_007f24d8;
extern int DAT_007f24cc;
extern int DAT_007dab04;
extern int DAT_007f24fc;

__declspec(naked) void FUN_005daae0(void)
{
    __asm {
        mov     eax, dword ptr [DAT_00849304]
        push    eax
        push    0x0
        push    0x78830c
        call    FUN_006f4710
        push    eax
        push    0x0
        push    0x788304
        mov     dword ptr [DAT_007f2448], eax
        call    FUN_006f4710
        mov     ecx, dword ptr [DAT_007f2448]
        push    ecx
        push    0x0
        push    0x7882f8
        mov     dword ptr [DAT_007f2450], eax
        call    FUN_006f4710
        mov     edx, dword ptr [DAT_007f2448]
        push    edx
        push    0x0
        push    0x7882ec
        mov     dword ptr [DAT_007f244c], eax
        call    FUN_006f4710
        mov     dword ptr [DAT_007f2460], eax
        mov     eax, dword ptr [DAT_007f2448]
        push    eax
        push    0x0
        push    0x7882dc
        call    FUN_006f4710
        push    0xa4
        mov     dword ptr [DAT_007f2464], eax
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_abab
        mov     ecx, dword ptr [DAT_007dc8cc]
        mov     edx, dword ptr [DAT_007dc894]
        push    0x502c60
        push    0x5028b0
        push    0x502370
        push    0x0
        push    0x501eb0
        push    ecx
        push    0x678cb0
        push    0x5dacd0
        push    0x0
        push    0x0
        push    edx
        push    0x7882d0
        push    0x495
        mov     ecx, eax
        call    FUN_00501a20
        mov     dword ptr [DAT_007f24d8], eax
        jmp     L_abb5
    L_abab:
        mov     dword ptr [DAT_007f24d8], 0
    L_abb5:
        push    esi
        push    0x2c
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_abe6
        mov     eax, dword ptr [DAT_00849304]
        push    eax
        push    0x7882b8
        push    0xa
        push    0x64
        push    0x28
        mov     ecx, esi
        call    FUN_00415d70
        mov     dword ptr [DAT_007f24cc], esi
        jmp     L_abf0
    L_abe6:
        mov     dword ptr [DAT_007f24cc], 0
    L_abf0:
        call    FUN_00675e80
        push    0x14c
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        pop     esi
        jz      L_ac1b
        mov     ecx, dword ptr [DAT_007dab04]
        push    ecx
        mov     ecx, eax
        call    FUN_004c43f0
        mov     dword ptr [DAT_007f24fc], eax
        ret
    L_ac1b:
        mov     dword ptr [DAT_007f24fc], 0
        ret
    }
}
