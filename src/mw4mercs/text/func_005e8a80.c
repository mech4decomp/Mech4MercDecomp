/*
 * FUN_005e8a80 (486 B) - Static init/constructor for the BeamEntity subsystem.
 * Allocates a 0xA4-byte object via FUN_00501a20, then constructs several
 * sub-objects (BeamDistance, TargetPoint, BeamHitSFX, BeamStatus,
 * HitEffectResource, DamageDecalResource) and registers them.
 *
 * No params, RET 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(unsigned int size);
extern void FUN_00501a20(void);
extern void FUN_005013f0(void);
extern void FUN_005016b0(void);
extern void FUN_005008e0(void);
extern void FUN_00500ec0(void);

__declspec(naked) void FUN_005e8a80(void)
{
    

extern int DAT_007dc8cc;
extern int DAT_007dc690;
extern int DAT_007f257c;
__asm {
push    0xA4
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_005e8ad8
        mov ecx, dword ptr [DAT_007dc8cc]
        mov edx, dword ptr [DAT_007dc690]
        push    0x502C60
        push    0x5028B0
        push    0x692680
        push    0
        push    0x692560
        push    ecx
        push    0
        push    0x5E8CA0
        push    0
        push    0
        push    edx
        push    0x78978C
        push    0x46C
        mov     ecx, eax
        call    FUN_00501a20
        mov dword ptr [DAT_007f257c], eax
        jmp     L_005e8ae2
    L_005e8ad8:
        mov dword ptr [DAT_007f257c], 0x0
    L_005e8ae2:
        push    esi
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      L_005e8b10
        push    0x170
        push    2
        push    0x78977C
        push    6
        mov     ecx, esi
        call    FUN_005013f0
        mov     dword ptr [esi], 0x7731FC
        jmp     L_005e8b12
    L_005e8b10:
        xor     esi, esi
    L_005e8b12:
        mov eax, dword ptr [DAT_007f257c]
        push    esi
        lea     ecx, [eax + 0x44]
        call    FUN_005016b0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      L_005e8b4d
        push    0x17C
        push    5
        push    0x789770
        push    7
        mov     ecx, esi
        call    FUN_005013f0
        mov     dword ptr [esi], 0x789760
        jmp     L_005e8b4f
    L_005e8b4d:
        xor     esi, esi
    L_005e8b4f:
        mov ecx, dword ptr [DAT_007f257c]
        push    esi
        add     ecx, 0x44
        call    FUN_005016b0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      L_005e8b8b
        push    0x168
        push    1
        push    0x789754
        push    8
        mov     ecx, esi
        call    FUN_005013f0
        mov     dword ptr [esi], 0x773234
        jmp     L_005e8b8d
    L_005e8b8b:
        xor     esi, esi
    L_005e8b8d:
        mov edx, dword ptr [DAT_007f257c]
        push    esi
        lea     ecx, [edx + 0x44]
        call    FUN_005016b0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      L_005e8bc9
        push    0x16C
        push    0xE
        push    0x789748
        push    9
        mov     ecx, esi
        call    FUN_005013f0
        mov     dword ptr [esi], 0x775474
        jmp     L_005e8bcb
    L_005e8bc9:
        xor     esi, esi
    L_005e8bcb:
        mov eax, dword ptr [DAT_007f257c]
        push    esi
        lea     ecx, [eax + 0x44]
        call    FUN_005016b0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      L_005e8c06
        push    0x20
        push    0x231
        push    0x789734
        push    6
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x773CD0
        jmp     L_005e8c08
    L_005e8c06:
        xor     esi, esi
    L_005e8c08:
        mov ecx, dword ptr [DAT_007f257c]
        push    esi
        add     ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      L_005e8c53
        push    0x24
        push    0x231
        push    0x789720
        push    7
        mov     ecx, esi
        call    FUN_005008e0
        mov edx, dword ptr [DAT_007f257c]
        push    esi
        lea     ecx, [edx + 0x74]
        mov     dword ptr [esi], 0x773CD0
        call    FUN_00500ec0
        pop     esi
        ret
    L_005e8c53:
        mov edx, dword ptr [DAT_007f257c]
        xor     esi, esi
        push    esi
        lea     ecx, [edx + 0x74]
        call    FUN_00500ec0
        pop     esi
        ret
    }


}
