/*
 * FUN_005f74b0 (1178 B) — MWObject resource subsystem initializer.
 *
 * Allocates a 0xA8-byte object, initializes it via FUN_00501a20 (thiscall),
 * then registers a long series of resource objects (DeathEntityResource,
 * DestroyedEffectResource, VehicleTonnage, EyeSiteName, etc.) each via
 * FUN_005008e0 + FUN_00500ec0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(unsigned int size);
extern void *__cdecl FUN_00501a20(void);
extern void *__cdecl FUN_005008e0(void);
extern void *__cdecl FUN_00500ec0(void);

extern int DAT_007f26a0;
extern int DAT_007f26a4;
extern int DAT_007f268c;

__declspec(naked) void FUN_005f74b0(void)
{
    __asm {
        push    esi
        push    0xA8
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      A1
        mov     eax, dword ptr [DAT_007f26a0]
        mov     ecx, dword ptr [DAT_007f26a4]
        push    0x502C60
        push    0x5028B0
        push    0x62EFA0
        push    0x62EC80
        push    0x62E8E0
        push    eax
        push    0x62DF30
        push    0x5F7980
        push    0x78A908
        push    1
        push    ecx
        push    0x78AA4C
        push    0x490
        mov     ecx, esi
        call    FUN_00501a20
        mov     dword ptr [esi + 0xA4], 0x6039E0
        mov     dword ptr [DAT_007f268c], esi
        jmp     A2
A1:
        mov     dword ptr [DAT_007f268c], 0
A2:
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      B2
        push    0x64
        push    0x231
        push    0x78A830
        push    0xD
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x773CD0
        jmp     B3
B2:
        xor     esi, esi
B3:
        mov     edx, dword ptr [DAT_007f268c]
        push    esi
        lea     ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      C2
        push    0x68
        push    0x231
        push    0x78A818
        push    0xE
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x773CD0
        jmp     C3
C2:
        xor     esi, esi
C3:
        mov     eax, dword ptr [DAT_007f268c]
        push    esi
        lea     ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      D2
        push    0x54
        push    0x231
        push    0x78AA2C
        push    0xF
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x773CD0
        jmp     D3
D2:
        xor     esi, esi
D3:
        mov     ecx, dword ptr [DAT_007f268c]
        push    esi
        add     ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      E2
        push    0x58
        push    0x231
        push    0x78AA08
        push    0x10
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x773CD0
        jmp     E3
E2:
        xor     esi, esi
E3:
        mov     edx, dword ptr [DAT_007f268c]
        push    esi
        lea     ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      F2
        push    0x6C
        push    2
        push    0x78A9F8
        push    0x11
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775948
        jmp     F3
F2:
        xor     esi, esi
F3:
        mov     eax, dword ptr [DAT_007f268c]
        push    esi
        lea     ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      G2
        push    0x70
        push    2
        push    0x78A9E4
        push    0x12
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775948
        jmp     G3
G2:
        xor     esi, esi
G3:
        mov     ecx, dword ptr [DAT_007f268c]
        push    esi
        add     ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      H2
        push    0x188
        push    0xF
        push    0x78A9D8
        push    0x13
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x781900
        jmp     H3
H2:
        xor     esi, esi
H3:
        mov     edx, dword ptr [DAT_007f268c]
        push    esi
        lea     ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      I2
        push    0x60
        push    0x231
        push    0x78A9B8
        push    0x14
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x773CD0
        jmp     I3
I2:
        xor     esi, esi
I3:
        mov     eax, dword ptr [DAT_007f268c]
        push    esi
        lea     ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      J2
        push    0x7C
        push    2
        push    0x78A9A4
        push    0x15
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775948
        jmp     J3
J2:
        xor     esi, esi
J3:
        mov     ecx, dword ptr [DAT_007f268c]
        push    esi
        add     ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      K2
        push    0x80
        push    2
        push    0x78A990
        push    0x16
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775948
        jmp     K3
K2:
        xor     esi, esi
K3:
        mov     edx, dword ptr [DAT_007f268c]
        push    esi
        lea     ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      L2
        push    0x74
        push    1
        push    0x78A97C
        push    0x17
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775588
        jmp     L3
L2:
        xor     esi, esi
L3:
        mov     eax, dword ptr [DAT_007f268c]
        push    esi
        lea     ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      M2
        push    0x78
        push    1
        push    0x78A968
        push    0x18
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775588
        jmp     M3
M2:
        xor     esi, esi
M3:
        mov     ecx, dword ptr [DAT_007f268c]
        push    esi
        add     ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      N2
        push    0x288
        push    0x231
        push    0x78A950
        push    0x19
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x773CD0
        jmp     N3
N2:
        xor     esi, esi
N3:
        mov     edx, dword ptr [DAT_007f268c]
        push    esi
        lea     ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      O2
        push    0x84
        push    2
        push    0x78A93C
        push    0x1A
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775948
        jmp     O3
O2:
        xor     esi, esi
O3:
        mov     eax, dword ptr [DAT_007f268c]
        push    esi
        lea     ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      P2
        push    0x290
        push    0x231
        push    0x789E84
        push    0x1B
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x773CD0
        jmp     P3
P2:
        xor     esi, esi
P3:
        mov     ecx, dword ptr [DAT_007f268c]
        push    esi
        add     ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      Q2
        push    0x298
        push    1
        push    0x78A930
        push    0x1C
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775588
        jmp     Q3
Q2:
        xor     esi, esi
Q3:
        mov     edx, dword ptr [DAT_007f268c]
        push    esi
        lea     ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      R2
        push    0x28C
        push    0x231
        push    0x78A918
        push    0x1D
        mov     ecx, esi
        call    FUN_005008e0
        mov     eax, dword ptr [DAT_007f268c]
        push    esi
        lea     ecx, [eax + 0x74]
        mov     dword ptr [esi], 0x773CD0
        call    FUN_00500ec0
        pop     esi
        ret
R2:
        mov     eax, dword ptr [DAT_007f268c]
        xor     esi, esi
        push    esi
        lea     ecx, [eax + 0x74]
        call    FUN_00500ec0
        pop     esi
        ret
    }
}
