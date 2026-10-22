/*
 * FUN_005e9db0 (868 B) — RET 0. Initializes a Torso object and a series
 * of parameter objects (TwistSpeed, PitchSpeed, ... CageRatioAngle).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__stdcall FUN_004084d0(int size);
extern void __stdcall FUN_00501a20(int a, void *b, void *c, int d, int e, void *f, void *g, void *h, void *i, int j, void *k, void *l, void *m);
extern void __stdcall FUN_005008e0(int a, void *b, int c, int d);
extern void __stdcall FUN_00500ec0(void *param);

__declspec(naked) void __stdcall FUN_005e9db0(void)
{
    

extern int DAT_007f25b0;
extern int DAT_007f25b4;
extern int DAT_007f2584;
__asm {
push    esi
        push    0xa8
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_9E18
        mov eax, dword ptr [DAT_007f25b0]
        mov ecx, dword ptr [DAT_007f25b4]
        push    0x502c60
        push    0x5028b0
        push    0x692740
        push    0x0
        push    0x692720
        push    eax
        push    0x6746e0
        push    0x5ea150
        push    0x0
        push    0x0
        push    ecx
        push    0x789918
        push    0x46a
        mov     ecx, esi
        call    FUN_00501a20
        mov     dword ptr [esi + 0xa4], 0x5f0a60
        mov dword ptr [DAT_007f2584], esi
        jmp     L_9E22
L_9E18:
        mov dword ptr [DAT_007f2584], 0x0
L_9E22:
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_9E4F
        push    0x634
        push    0x2
        push    0x78990c
        push    0xb
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775948
        jmp     L_9E51
L_9E4F:
        xor     esi, esi
L_9E51:
        mov edx, dword ptr [DAT_007f2584]
        push    esi
        lea     ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_9E8D
        push    0x638
        push    0x2
        push    0x7864fc
        push    0xc
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775948
        jmp     L_9E8F
L_9E8D:
        xor     esi, esi
L_9E8F:
        mov eax, dword ptr [DAT_007f2584]
        push    esi
        lea     ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_9ECA
        push    0x63c
        push    0x2
        push    0x789900
        push    0xd
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775948
        jmp     L_9ECC
L_9ECA:
        xor     esi, esi
L_9ECC:
        mov ecx, dword ptr [DAT_007f2584]
        push    esi
        add     ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_9F08
        push    0x640
        push    0x2
        push    0x7898f4
        push    0xe
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775948
        jmp     L_9F0A
L_9F08:
        xor     esi, esi
L_9F0A:
        mov edx, dword ptr [DAT_007f2584]
        push    esi
        lea     ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_9F43
        push    0x34
        push    0xf
        push    0x7898e4
        push    0xf
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x781900
        jmp     L_9F45
L_9F43:
        xor     esi, esi
L_9F45:
        mov eax, dword ptr [DAT_007f2584]
        push    esi
        lea     ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_9F80
        push    0x134
        push    0xf
        push    0x7898d4
        push    0x10
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x781900
        jmp     L_9F82
L_9F80:
        xor     esi, esi
L_9F82:
        mov ecx, dword ptr [DAT_007f2584]
        push    esi
        add     ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_9FBE
        push    0x234
        push    0xf
        push    0x7898c0
        push    0x11
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x781900
        jmp     L_9FC0
L_9FBE:
        xor     esi, esi
L_9FC0:
        mov edx, dword ptr [DAT_007f2584]
        push    esi
        lea     ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_9FFC
        push    0x334
        push    0xf
        push    0x7898ac
        push    0x12
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x781900
        jmp     L_9FFE
L_9FFC:
        xor     esi, esi
L_9FFE:
        mov eax, dword ptr [DAT_007f2584]
        push    esi
        lea     ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_A039
        push    0x434
        push    0xf
        push    0x78989c
        push    0x13
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x781900
        jmp     L_A03B
L_A039:
        xor     esi, esi
L_A03B:
        mov ecx, dword ptr [DAT_007f2584]
        push    esi
        add     ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_A077
        push    0x644
        push    0x2
        push    0x78988c
        push    0x14
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775948
        jmp     L_A079
L_A077:
        xor     esi, esi
L_A079:
        mov edx, dword ptr [DAT_007f2584]
        push    esi
        lea     ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_A0B5
        push    0x534
        push    0xf
        push    0x78987c
        push    0x15
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x781900
        jmp     L_A0B7
L_A0B5:
        xor     esi, esi
L_A0B7:
        mov eax, dword ptr [DAT_007f2584]
        push    esi
        lea     ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_A101
        push    0x648
        push    0x2
        push    0x78986c
        push    0x16
        mov     ecx, esi
        call    FUN_005008e0
        mov ecx, dword ptr [DAT_007f2584]
        push    esi
        add     ecx, 0x74
        mov     dword ptr [esi], 0x775948
        call    FUN_00500ec0
        pop     esi
        ret
L_A101:
        mov ecx, dword ptr [DAT_007f2584]
        xor     esi, esi
        push    esi
        add     ecx, 0x74
        call    FUN_00500ec0
        pop     esi
        ret
    }


}
