/*
 * FUN_004f59f0 (3144 B) — MLR/Adept subsystem initializer. Allocates a
 * manager object (FUN_00501a20) and populates an array of sub-objects at
 * [obj+0x74] via repeated alloc(FUN_004084d0) + construct(FUN_005008e0) +
 * vtable-set + attach(FUN_00500ec0) sequences.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dc130;
extern int g_007dc8a8;
extern int g_007dc8cc;
extern int g_007dc690;
extern int g_007dc8a4;

extern void __cdecl FUN_006f4710(void);
extern void *__cdecl FUN_004084d0(unsigned int);
extern void __cdecl FUN_00501a20(void);
extern void __cdecl FUN_005008e0(void);
extern void __cdecl FUN_00500ec0(void);

__declspec(naked) void FUN_004f59f0(void)
{
    __asm {
        mov     eax, dword ptr [g_007dc130]
        push    eax
        push    0x0
        push    0x775978
        call    FUN_006f4710
        push    0xa4
        mov     dword ptr [g_007dc8a8], eax
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L5A62
        mov     ecx, dword ptr [g_007dc8cc]
        mov     edx, dword ptr [g_007dc690]
        push    0x509490
        push    0x5028b0
        push    0x509550
        push    0x0
        push    0x509000
        push    ecx
        push    0x508160
        push    0x4f6680
        push    0x0
        push    0x0
        push    edx
        push    0x775968
        push    0x1e6
        mov     ecx, eax
        call    FUN_00501a20
        mov     dword ptr [g_007dc8a4], eax
        jmp     L5A6C
L5A62:
        mov     dword ptr [g_007dc8a4], 0x0
L5A6C:
        push    esi
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L5A97
        push    0x7c
        push    0x2
        push    0x775958
        push    0x6
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775948
        jmp     L5A99
L5A97:
        xor     esi, esi
L5A99:
        mov     eax, dword ptr [g_007dc8a4]
        push    esi
        lea     ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L5AD4
        push    0x80
        push    0x2
        push    0x775938
        push    0x7
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775948
        jmp     L5AD6
L5AD4:
        xor     esi, esi
L5AD6:
        mov     ecx, dword ptr [g_007dc8a4]
        push    esi
        add     ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L5B12
        push    0x84
        push    0x2
        push    0x775924
        push    0x8
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775948
        jmp     L5B14
L5B12:
        xor     esi, esi
L5B14:
        mov     edx, dword ptr [g_007dc8a4]
        push    esi
        lea     ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L5B50
        push    0x88
        push    0x2
        push    0x775914
        push    0x9
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775948
        jmp     L5B52
L5B50:
        xor     esi, esi
L5B52:
        mov     eax, dword ptr [g_007dc8a4]
        push    esi
        lea     ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L5B8D
        push    0x8c
        push    0x2
        push    0x775908
        push    0xa
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775948
        jmp     L5B8F
L5B8D:
        xor     esi, esi
L5B8F:
        mov     ecx, dword ptr [g_007dc8a4]
        push    esi
        add     ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L5BCB
        push    0x90
        push    0x2
        push    0x7758f8
        push    0xb
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775948
        jmp     L5BCD
L5BCB:
        xor     esi, esi
L5BCD:
        mov     edx, dword ptr [g_007dc8a4]
        push    esi
        lea     ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L5C09
        push    0x94
        push    0x2
        push    0x7758e8
        push    0xc
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775948
        jmp     L5C0B
L5C09:
        xor     esi, esi
L5C0B:
        mov     eax, dword ptr [g_007dc8a4]
        push    esi
        lea     ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L5C46
        push    0x98
        push    0x2
        push    0x7758d8
        push    0xd
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775948
        jmp     L5C48
L5C46:
        xor     esi, esi
L5C48:
        mov     ecx, dword ptr [g_007dc8a4]
        push    esi
        add     ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L5C84
        push    0x9c
        push    0x2
        push    0x7758c4
        push    0xe
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775948
        jmp     L5C86
L5C84:
        xor     esi, esi
L5C86:
        mov     edx, dword ptr [g_007dc8a4]
        push    esi
        lea     ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L5CBF
        push    0x2c
        push    0x10
        push    0x7758b8
        push    0xf
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x7758a8
        jmp     L5CC1
L5CBF:
        xor     esi, esi
L5CC1:
        mov     eax, dword ptr [g_007dc8a4]
        push    esi
        lea     ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L5CFC
        push    0xa0
        push    0x2
        push    0x77588c
        push    0x10
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775948
        jmp     L5CFE
L5CFC:
        xor     esi, esi
L5CFE:
        mov     ecx, dword ptr [g_007dc8a4]
        push    esi
        add     ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L5D3A
        push    0xa4
        push    0x2
        push    0x775874
        push    0x11
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775948
        jmp     L5D3C
L5D3A:
        xor     esi, esi
L5D3C:
        mov     edx, dword ptr [g_007dc8a4]
        push    esi
        lea     ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L5D78
        push    0xa8
        push    0x2
        push    0x775858
        push    0x12
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775948
        jmp     L5D7A
L5D78:
        xor     esi, esi
L5D7A:
        mov     eax, dword ptr [g_007dc8a4]
        push    esi
        lea     ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L5DB5
        push    0xac
        push    0x2
        push    0x775840
        push    0x13
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775948
        jmp     L5DB7
L5DB5:
        xor     esi, esi
L5DB7:
        mov     ecx, dword ptr [g_007dc8a4]
        push    esi
        add     ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L5DF3
        push    0xb0
        push    0x2
        push    0x775828
        push    0x14
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775948
        jmp     L5DF5
L5DF3:
        xor     esi, esi
L5DF5:
        mov     edx, dword ptr [g_007dc8a4]
        push    esi
        lea     ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L5E31
        push    0xb4
        push    0x2
        push    0x77580c
        push    0x15
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775948
        jmp     L5E33
L5E31:
        xor     esi, esi
L5E33:
        mov     eax, dword ptr [g_007dc8a4]
        push    esi
        lea     ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L5E6E
        push    0xb8
        push    0x2
        push    0x7757f0
        push    0x16
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775948
        jmp     L5E70
L5E6E:
        xor     esi, esi
L5E70:
        mov     ecx, dword ptr [g_007dc8a4]
        push    esi
        add     ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L5EAC
        push    0xbc
        push    0x2
        push    0x7757d8
        push    0x17
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775948
        jmp     L5EAE
L5EAC:
        xor     esi, esi
L5EAE:
        mov     edx, dword ptr [g_007dc8a4]
        push    esi
        lea     ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L5EEA
        push    0xc0
        push    0x2
        push    0x7757bc
        push    0x18
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775948
        jmp     L5EEC
L5EEA:
        xor     esi, esi
L5EEC:
        mov     eax, dword ptr [g_007dc8a4]
        push    esi
        lea     ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L5F24
        push    0x3c
        push    0x10
        push    0x7757a8
        push    0x19
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x7758a8
        jmp     L5F26
L5F24:
        xor     esi, esi
L5F26:
        mov     ecx, dword ptr [g_007dc8a4]
        push    esi
        add     ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L5F62
        push    0xc4
        push    0x2
        push    0x775790
        push    0x1a
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775948
        jmp     L5F64
L5F62:
        xor     esi, esi
L5F64:
        mov     edx, dword ptr [g_007dc8a4]
        push    esi
        lea     ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L5FA0
        push    0xc8
        push    0x2
        push    0x77577c
        push    0x1b
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775948
        jmp     L5FA2
L5FA0:
        xor     esi, esi
L5FA2:
        mov     eax, dword ptr [g_007dc8a4]
        push    esi
        lea     ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L5FDD
        push    0xcc
        push    0x2
        push    0x775764
        push    0x1c
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775948
        jmp     L5FDF
L5FDD:
        xor     esi, esi
L5FDF:
        mov     ecx, dword ptr [g_007dc8a4]
        push    esi
        add     ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L601B
        push    0xd0
        push    0x2
        push    0x775750
        push    0x1d
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775948
        jmp     L601D
L601B:
        xor     esi, esi
L601D:
        mov     edx, dword ptr [g_007dc8a4]
        push    esi
        lea     ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L6059
        push    0xd4
        push    0x2
        push    0x77573c
        push    0x1e
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775948
        jmp     L605B
L6059:
        xor     esi, esi
L605B:
        mov     eax, dword ptr [g_007dc8a4]
        push    esi
        lea     ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L6096
        push    0xd8
        push    0x2
        push    0x775724
        push    0x1f
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775948
        jmp     L6098
L6096:
        xor     esi, esi
L6098:
        mov     ecx, dword ptr [g_007dc8a4]
        push    esi
        add     ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L60D4
        push    0xdc
        push    0x2
        push    0x775710
        push    0x20
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775948
        jmp     L60D6
L60D4:
        xor     esi, esi
L60D6:
        mov     edx, dword ptr [g_007dc8a4]
        push    esi
        lea     ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L6112
        push    0xe0
        push    0x2
        push    0x7756fc
        push    0x21
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775948
        jmp     L6114
L6112:
        xor     esi, esi
L6114:
        mov     eax, dword ptr [g_007dc8a4]
        push    esi
        lea     ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L614F
        push    0xe4
        push    0x2
        push    0x7756e4
        push    0x22
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775948
        jmp     L6151
L614F:
        xor     esi, esi
L6151:
        mov     ecx, dword ptr [g_007dc8a4]
        push    esi
        add     ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L618A
        push    0x4c
        push    0x10
        push    0x7756d4
        push    0x23
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x7758a8
        jmp     L618C
L618A:
        xor     esi, esi
L618C:
        mov     edx, dword ptr [g_007dc8a4]
        push    esi
        lea     ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L61C8
        push    0x104
        push    0xe
        push    0x7756c4
        push    0x24
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x7731e0
        jmp     L61CA
L61C8:
        xor     esi, esi
L61CA:
        mov     eax, dword ptr [g_007dc8a4]
        push    esi
        lea     ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L6205
        push    0x24
        push    0x231
        push    0x7756ac
        push    0x25
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x773cd0
        jmp     L6207
L6205:
        xor     esi, esi
L6207:
        mov     ecx, dword ptr [g_007dc8a4]
        push    esi
        add     ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L6243
        push    0x105
        push    0xe
        push    0x775698
        push    0x26
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x7731e0
        jmp     L6245
L6243:
        xor     esi, esi
L6245:
        mov     edx, dword ptr [g_007dc8a4]
        push    esi
        lea     ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L6281
        push    0x106
        push    0xe
        push    0x775684
        push    0x27
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x7731e0
        jmp     L6283
L6281:
        xor     esi, esi
L6283:
        mov     eax, dword ptr [g_007dc8a4]
        push    esi
        lea     ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L62BE
        push    0xe8
        push    0x2
        push    0x775674
        push    0x28
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775948
        jmp     L62C0
L62BE:
        xor     esi, esi
L62C0:
        mov     ecx, dword ptr [g_007dc8a4]
        push    esi
        add     ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L62FC
        push    0xec
        push    0x2
        push    0x775664
        push    0x29
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775948
        jmp     L62FE
L62FC:
        xor     esi, esi
L62FE:
        mov     edx, dword ptr [g_007dc8a4]
        push    esi
        lea     ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L633A
        push    0xf0
        push    0x2
        push    0x775650
        push    0x2a
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775948
        jmp     L633C
L633A:
        xor     esi, esi
L633C:
        mov     eax, dword ptr [g_007dc8a4]
        push    esi
        lea     ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L6377
        push    0xf4
        push    0x2
        push    0x775644
        push    0x2b
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775948
        jmp     L6379
L6377:
        xor     esi, esi
L6379:
        mov     ecx, dword ptr [g_007dc8a4]
        push    esi
        add     ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L63B5
        push    0xf8
        push    0x2
        push    0x77563c
        push    0x2c
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775948
        jmp     L63B7
L63B5:
        xor     esi, esi
L63B7:
        mov     edx, dword ptr [g_007dc8a4]
        push    esi
        lea     ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L63F0
        push    0x6c
        push    0x10
        push    0x775628
        push    0x2d
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x7758a8
        jmp     L63F2
L63F0:
        xor     esi, esi
L63F2:
        mov     eax, dword ptr [g_007dc8a4]
        push    esi
        lea     ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L642D
        push    0x107
        push    0xe
        push    0x77561c
        push    0x2e
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x7731e0
        jmp     L642F
L642D:
        xor     esi, esi
L642F:
        mov     ecx, dword ptr [g_007dc8a4]
        push    esi
        add     ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L6468
        push    0x5c
        push    0x10
        push    0x77560c
        push    0x2f
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x7758a8
        jmp     L646A
L6468:
        xor     esi, esi
L646A:
        mov     edx, dword ptr [g_007dc8a4]
        push    esi
        lea     ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L64A6
        push    0x114
        push    0x2
        push    0x7755f8
        push    0x30
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775948
        jmp     L64A8
L64A6:
        xor     esi, esi
L64A8:
        mov     eax, dword ptr [g_007dc8a4]
        push    esi
        lea     ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L64E3
        push    0x28
        push    0x231
        push    0x7755dc
        push    0x31
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x773cd0
        jmp     L64E5
L64E3:
        xor     esi, esi
L64E5:
        mov     ecx, dword ptr [g_007dc8a4]
        push    esi
        add     ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L6521
        push    0xfc
        push    0x2
        push    0x7755c8
        push    0x32
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775948
        jmp     L6523
L6521:
        xor     esi, esi
L6523:
        mov     edx, dword ptr [g_007dc8a4]
        push    esi
        lea     ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L655F
        push    0x100
        push    0x2
        push    0x7755ac
        push    0x33
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775948
        jmp     L6561
L655F:
        xor     esi, esi
L6561:
        mov     eax, dword ptr [g_007dc8a4]
        push    esi
        lea     ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L659C
        push    0x10c
        push    0x1
        push    0x775598
        push    0x34
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775588
        jmp     L659E
L659C:
        xor     esi, esi
L659E:
        mov     ecx, dword ptr [g_007dc8a4]
        push    esi
        add     ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L65DA
        push    0x110
        push    0x1
        push    0x77556c
        push    0x35
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775588
        jmp     L65DC
L65DA:
        xor     esi, esi
L65DC:
        mov     edx, dword ptr [g_007dc8a4]
        push    esi
        lea     ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L6626
        push    0x108
        push    0xe
        push    0x77555c
        push    0x36
        mov     ecx, esi
        call    FUN_005008e0
        mov     eax, dword ptr [g_007dc8a4]
        push    esi
        lea     ecx, [eax + 0x74]
        mov     dword ptr [esi], 0x7731e0
        call    FUN_00500ec0
        pop     esi
        ret
L6626:
        mov     eax, dword ptr [g_007dc8a4]
        xor     esi, esi
        push    esi
        lea     ecx, [eax + 0x74]
        call    FUN_00500ec0
        pop     esi
        ret
    }
}
