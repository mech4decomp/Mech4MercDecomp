/*
 * FUN_0058a05e (extent 0x58a05e-0x58ade6) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076d064;
extern float  g_0076d070;
extern float  g_0076d59c;
extern float  g_0077016c;
extern float  g_0077a198;
extern float  g_0077b63c;
extern float  g_0078235c;
extern float  g_007b220c;
extern int    g_007b540c;
extern float  g_007b5410;
extern int    g_007b8cd8;
extern int    g_007b8cdc;
extern int    g_007b8ce0;
extern int    g_007b8ce4;
extern int    g_007b8ce8;
extern int    g_007b8cec;
extern int    g_007b8cf0;
extern float  g_007b8d08;
extern float  g_007b8d0c;
extern float  g_007b8d10;
extern int    g_007b8d68;
extern int    g_007b8d6c;
extern int    g_007b8d70;
extern int    g_007b8d88;
extern int    g_007b8d8c;
extern int    g_007b8d90;
extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007dc700;
extern int    g_007dc728;
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_0040c9e0(void);
extern void __cdecl FUN_0040cb00(void);
extern void __cdecl FUN_0040d030(void);
extern void __cdecl FUN_0040d560(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_00419460(void);
extern void __cdecl FUN_00419480(void);
extern void __cdecl FUN_00419e70(void);
extern void __cdecl FUN_0041a070(void);
extern void __cdecl FUN_0041a160(void);
extern void __cdecl FUN_0041acb0(void);
extern void __cdecl FUN_0041afa0(void);
extern void __cdecl FUN_0041b680(void);
extern void __cdecl FUN_0041bb80(void);
extern void __cdecl FUN_0041c680(void);
extern void __cdecl FUN_0041c6e0(void);
extern void __cdecl FUN_0041c7d0(void);
extern void __cdecl FUN_0041c830(void);
extern void __cdecl FUN_004daa20(void);
extern void __cdecl FUN_004e2f40(void);
extern void __cdecl FUN_004e8dc0(void);
extern void __cdecl FUN_00507f90(void);
extern void __cdecl FUN_00589ff8(void);

__declspec(naked) void FUN_0058a05e(void)
{
    __asm {
        mov    edi, edi
        /* jump table (0x58A060-0x58A06F), emitted raw */
        __emit 0x75
        __emit 0x96
        __emit 0x58
        __emit 0x00
        __emit 0x68
        __emit 0x96
        __emit 0x58
        __emit 0x00
        __emit 0x5B
        __emit 0x96
        __emit 0x58
        __emit 0x00
        __emit 0x4E
        __emit 0x96
        __emit 0x58
        __emit 0x00
        mov    eax, dword ptr [g_007dab44]
        mov    edx, dword ptr [g_007dab40]
        sub    esp, 0x1b8
        push    ebx
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [eax]
        xor    ecx, edx
        mov    edx, dword ptr [ecx + 0xc]
        push    edi
        mov    edi, dword ptr [esi + 0xd8]
        xor    edx, 0x85739531
        mov    bl, byte ptr [edx + 0x17]
        push    0x7b9460
        lea    ecx, [esp + 0xe4]
        add    edi, 0x80
        call    FUN_00419460
        mov    eax, dword ptr [esi + 0x4c0]
        test    eax, eax
        je    L_a11b
        mov    ecx, dword ptr [esi + 0x4c4]
        test    ecx, ecx
        jne    L_a117
        test    bl, bl
        jne    L_a117
        mov    ecx, dword ptr [esi + 0x838]
        lea    eax, [esp + 0x194]
        push    eax
        call    FUN_00507f90
        push    eax
        lea    ecx, [esp + 0x120]
        call    FUN_00419460
        mov    ecx, dword ptr [esp + 0x128]
        mov    edx, dword ptr [esp + 0x138]
        mov    eax, dword ptr [esp + 0x148]
        mov    dword ptr [esp + 0xec], ecx
        mov    dword ptr [esp + 0xfc], edx
        mov    dword ptr [esp + 0x10c], eax
        jmp    L_a18c
L_a117:
        test    eax, eax
        jne    L_a16e
L_a11b:
        mov    eax, dword ptr [esi + 0x4c4]
        test    eax, eax
        je    L_a16e
        test    bl, bl
        jne    L_a16e
        lea    ecx, [esp + 0x194]
        push    ecx
        mov    ecx, dword ptr [esi + 0x83c]
        call    FUN_00507f90
        push    eax
        lea    ecx, [esp + 0x120]
        call    FUN_00419460
        mov    edx, dword ptr [esp + 0x128]
        mov    eax, dword ptr [esp + 0x138]
        mov    ecx, dword ptr [esp + 0x148]
        mov    dword ptr [esp + 0xec], edx
        mov    dword ptr [esp + 0xfc], eax
        jmp    L_a185
L_a16e:
        mov    edx, dword ptr [edi + 0xc]
        mov    dword ptr [esp + 0xec], edx
        mov    eax, dword ptr [edi + 0x1c]
        mov    dword ptr [esp + 0xfc], eax
        mov    ecx, dword ptr [edi + 0x2c]
L_a185:
        mov    dword ptr [esp + 0x10c], ecx
L_a18c:
        push    edi
        lea    ecx, [esp + 0x38]
        call    FUN_0041acb0
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 0x110]
        mov    ecx, dword ptr [esi + 0x868]
        fmul    dword ptr [esp + 0x1c8]
        mov    eax, 1
        cmp    ecx, eax
        fld    st(0)
        fmul    dword ptr [esi + 0x430]
        fstp    dword ptr [esp + 0x68]
        fld    st(0)
        fmul    dword ptr [esi + 0x434]
        fstp    dword ptr [esp + 0x6c]
        fmul    dword ptr [esi + 0x438]
        fstp    dword ptr [esp + 0x70]
        jne    L_a1e8
        fld    dword ptr [esp + 0x68]
        fadd    dword ptr [esi + 0x850]
        fstp    dword ptr [esi + 0x850]
L_a1e8:
        cmp    dword ptr [esi + 0x864], eax
        jne    L_a200
        fld    dword ptr [esp + 0x68]
        fadd    dword ptr [esi + 0x84c]
        fstp    dword ptr [esi + 0x84c]
L_a200:
        push    edi
        lea    ecx, [esp + 0x14]
        call    FUN_00419480
        mov    ebx, dword ptr [esi + 0x99c]
        test    ebx, ebx
        je    L_a23f
        mov    eax, dword ptr [ebx + 0xe0]
        cmp    dword ptr [eax + 0x14], 6
        jne    L_a23f
        fld    dword ptr [esi + 0x16c]
        fcomp    dword ptr [g_0077b63c]
        fnstsw  ax
        test    ah, 0x41
        jne    L_a25c
        mov    dword ptr [esi + 0x16c], 0x41f00000
        jmp    L_a25c
L_a23f:
        fld    dword ptr [esi + 0x16c]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jne    L_a25c
        mov    dword ptr [esi + 0x16c], 0
L_a25c:
        fld    dword ptr [g_007b5410]
        mov    eax, dword ptr [esp + 0x1cc]
        fmul    dword ptr [esi + 0x184]
        push    edi
        push    eax
        lea    ecx, [esp + 0x7c]
        fmul    dword ptr [esp + 0x1d0]
        fmul    dword ptr [g_0076d070]
        fadd    dword ptr [esi + 0x16c]
        fstp    dword ptr [eax + 4]
        call    FUN_0041c680
        fld    dword ptr [esp + 0x74]
        lea    ecx, [esp + 0x74]
        fmul    dword ptr [esp + 0x1c8]
        push    ecx
        lea    edx, [esp + 0x14]
        push    edx
        fstp    dword ptr [esp + 0x7c]
        lea    ecx, [esp + 0x18]
        fld    dword ptr [esp + 0x80]
        fmul    dword ptr [esp + 0x1d0]
        fstp    dword ptr [esp + 0x80]
        fld    dword ptr [esp + 0x84]
        fmul    dword ptr [esp + 0x1d0]
        fstp    dword ptr [esp + 0x84]
        call    FUN_0040c9e0
        fld    dword ptr [g_007b5410]
        lea    eax, [esp + 0xe0]
        fmul    dword ptr [esi + 0x184]
        push    eax
        lea    ecx, [esp + 0x14]
        push    ecx
        fmul    dword ptr [esp + 0x1d0]
        lea    ecx, [esp + 0x154]
        fadd    dword ptr [esi + 0x16c]
        fstp    dword ptr [esi + 0x16c]
        call    FUN_0041c830
        lea    ecx, [esp + 0x164]
        call    FUN_00419e70
        lea    edx, [esp + 0x68]
        push    edx
        lea    ecx, [esp + 0x168]
        call    FUN_0041a070
        lea    eax, [esp + 0x164]
        push    eax
        lea    ecx, [esp + 0x150]
        push    ecx
        lea    ecx, [esp + 0x118]
        call    FUN_0041c7d0
        lea    edx, [esp + 0xe0]
        push    edx
        lea    eax, [esp + 0x114]
        push    eax
        lea    ecx, [esp + 0x18]
        call    FUN_0041c7d0
        mov    al, byte ptr [esi + 0x5c0]
        test    al, al
        je    L_a383
        fld    dword ptr [esi + 0x5c4]
        mov    byte ptr [esi + 0x5c0], 0
        fstp    dword ptr [esp + 0x34]
        jmp    L_a38f
L_a383:
        fld    dword ptr [esp + 0x34]
        fadd    dword ptr [esp + 0x68]
        fstp    dword ptr [esp + 0x34]
L_a38f:
        fld    dword ptr [esp + 0x38]
        mov    edx, dword ptr [esi]
        fadd    dword ptr [esp + 0x6c]
        lea    eax, [esp + 0x8c]
        push    eax
        mov    eax, dword ptr [esp + 0x1cc]
        fstp    dword ptr [esp + 0x3c]
        lea    ecx, [esp + 0x84]
        fld    dword ptr [esp + 0x40]
        push    ecx
        fadd    dword ptr [esp + 0x78]
        push    eax
        mov    ecx, esi
        fstp    dword ptr [esp + 0x48]
        call    dword ptr [edx + 0x164]
        test    al, al
        je    L_a40f
        mov    ecx, dword ptr [esp + 0x90]
        mov    edx, dword ptr [esp + 0x8c]
        mov    eax, dword ptr [esp + 0x94]
        mov    dword ptr [esp + 0x38], ecx
        mov    ecx, dword ptr [esp + 0x80]
        mov    dword ptr [esp + 0x34], edx
        mov    edx, dword ptr [esp + 0x84]
        mov    dword ptr [esp + 0x3c], eax
        mov    eax, dword ptr [esp + 0x88]
        mov    dword ptr [esp + 0x10], ecx
        mov    dword ptr [esp + 0x14], edx
        mov    dword ptr [esp + 0x18], eax
L_a40f:
        mov    eax, dword ptr [esi + 0x10]
        and    eax, 7
        cmp    eax, 4
        je    L_a428
        test    eax, eax
        je    L_a428
        mov    dword ptr [esp + 0x64], 0x42200000
        jmp    L_a44b
L_a428:
        mov    eax, dword ptr [g_007b540c]
        test    eax, eax
        jne    L_a43b
        mov    dword ptr [esp + 0x64], 0x42200000
        jmp    L_a44b
L_a43b:
        fld    dword ptr [esi + 0x458]
        fadd    dword ptr [g_0076d59c]
        fstp    dword ptr [esp + 0x64]
L_a44b:
        mov    ecx, 0x7b8d08
        call    FUN_0040cb00
        fsqrt    
        mov    ecx, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esp + 0x18]
        mov    dword ptr [esp + 0x4c], ecx
        mov    dword ptr [esp + 0x54], edx
        lea    ecx, [esp + 0x158]
        lea    edx, [esp + 0x34]
        lea    eax, [esp + 0x4c]
        mov    dword ptr [esp + 0x9c], ecx
        push    edx
        lea    ecx, [esp + 0xb4]
        mov    dword ptr [esp + 0x9c], eax
        mov    dword ptr [esp + 0xa4], 0
        mov    dword ptr [esp + 0xac], esi
        mov    dword ptr [esp + 0xb0], 0x1000
        fdivr    dword ptr [g_0076d064]
        fld    st(0)
        fmul    dword ptr [g_007b8d08]
        fstp    dword ptr [esp + 0x5c]
        fld    st(0)
        fmul    dword ptr [g_007b8d0c]
        fstp    dword ptr [esp + 0x60]
        fmul    dword ptr [g_007b8d10]
        fstp    dword ptr [esp + 0x64]
        fld    dword ptr [esp + 0x18]
        fadd    dword ptr [esi + 0x458]
        fstp    dword ptr [esp + 0x54]
        call    FUN_0041a070
        mov    ecx, dword ptr [g_007dc728]
        lea    eax, [esp + 0x98]
        push    eax
        call    FUN_004e2f40
        mov    ecx, eax
        test    ecx, ecx
        jne    L_a688
        mov    eax, dword ptr [esi + 0x10]
        and    eax, 7
        cmp    eax, 4
        je    L_a514
        test    eax, eax
        jne    L_a63a
L_a514:
        cmp    dword ptr [g_007b540c], 2
        jne    L_a63a
        mov    al, byte ptr [esi + 0x930]
        test    al, al
        jne    L_a63a
        mov    al, byte ptr [esi + 0x931]
        test    al, al
        jne    L_a63a
        fld    dword ptr [esp + 0x1c8]
        mov    ecx, dword ptr [edi + 0xc]
        fadd    dword ptr [g_0077a198]
        mov    eax, dword ptr [edi + 0x2c]
        mov    edx, dword ptr [edi + 0x1c]
        mov    dword ptr [esp + 0x1c], ecx
        mov    ecx, dword ptr [g_007b8d68]
        fstp    dword ptr [esp + 0xc]
        fld    dword ptr [esp + 0xc]
        mov    dword ptr [esp + 0x24], eax
        fmul    dword ptr [esi + 0x184]
        mov    dword ptr [esp + 0x20], edx
        mov    edx, dword ptr [g_007b8d70]
        push    edi
        fmul    dword ptr [g_007b5410]
        lea    eax, [esp + 0x2c]
        mov    dword ptr [esp + 0x2c], ecx
        push    eax
        fmul    dword ptr [g_0076d070]
        lea    ecx, [esp + 0x48]
        mov    dword ptr [esp + 0x38], edx
        fadd    dword ptr [esi + 0x16c]
        fstp    dword ptr [esp + 0x34]
        call    FUN_0041c680
        fld    dword ptr [esp + 0x40]
        lea    edx, [esp + 0x98]
        fmul    dword ptr [esp + 0xc]
        push    edx
        fstp    dword ptr [esp + 0x44]
        fld    dword ptr [esp + 0x48]
        fmul    dword ptr [esp + 0x10]
        fstp    dword ptr [esp + 0x48]
        fld    dword ptr [esp + 0x4c]
        fmul    dword ptr [esp + 0x10]
        fstp    dword ptr [esp + 0x4c]
        fld    dword ptr [esp + 0x44]
        fadd    dword ptr [esp + 0x20]
        fld    dword ptr [esp + 0x24]
        fadd    dword ptr [esp + 0x48]
        fstp    dword ptr [esp + 0x24]
        fld    dword ptr [esp + 0x28]
        fadd    dword ptr [esp + 0x4c]
        fstp    dword ptr [esp + 0x28]
        mov    ecx, dword ptr [esp + 0x28]
        mov    dword ptr [esp + 0x58], ecx
        mov    ecx, dword ptr [g_007dc728]
        fstp    dword ptr [esp + 0x50]
        fld    dword ptr [esp + 0x24]
        fadd    dword ptr [esi + 0x458]
        fstp    dword ptr [esp + 0x54]
        fld    dword ptr [esi + 0x458]
        fadd    dword ptr [g_0078235c]
        fstp    dword ptr [esp + 0x68]
        call    FUN_004e2f40
        test    eax, eax
        jne    L_a63a
        mov    ecx, dword ptr [esi + 0xe0]
        mov    eax, dword ptr [ecx]
        push    0
        push    9
        call    dword ptr [eax + 4]
L_a63a:
        mov    ecx, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esp + 0x14]
        mov    eax, dword ptr [esp + 0x18]
        mov    dword ptr [esp + 0xbc], ecx
        lea    ecx, [esp + 0xb0]
        mov    dword ptr [esp + 0xcc], edx
        push    ecx
        lea    edx, [esi + 0x168]
        push    edx
        lea    ecx, [esi + 0x198]
        mov    dword ptr [esp + 0xe4], eax
        call    FUN_0041c680
        mov    byte ptr [esi + 0x930], 0
        mov    byte ptr [esi + 0x931], 0
        jmp    L_a825
L_a688:
        fld    dword ptr [esp + 0x64]
        fabs    
        fld    dword ptr [g_007b220c]
        fcompp    
        fnstsw  ax
        test    ah, 1
        jne    L_a721
        mov    eax, dword ptr [g_007dc700]
        mov    ecx, dword ptr [ecx + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        jne    L_a721
        fld    dword ptr [esi + 0x16c]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jne    L_a721
        mov    eax, dword ptr [edi + 0x1c]
        fld    dword ptr [edi + 0xc]
        mov    ecx, dword ptr [edi + 0x2c]
        fstp    dword ptr [esp + 0xbc]
        fld    dword ptr [esi + 0x19c]
        mov    edx, eax
        fcomp    dword ptr [g_0076c5b0]
        mov    dword ptr [esp + 0x2c], eax
        mov    eax, ecx
        mov    dword ptr [esp + 0xdc], eax
        mov    dword ptr [esp + 0x30], ecx
        fnstsw  ax
        mov    dword ptr [esp + 0xcc], edx
        test    ah, 0x41
        jne    L_a70d
        mov    dword ptr [esi + 0x19c], 0
L_a70d:
        lea    ecx, [esp + 0xb0]
        push    ecx
        lea    edx, [esi + 0x198]
        push    edx
        jmp    L_a81a
L_a721:
        fld    dword ptr [esp + 0x58]
        lea    eax, [esp + 0x28]
        fmul    dword ptr [esp + 0x64]
        push    eax
        lea    ecx, [esp + 0x50]
        push    ecx
        fstp    dword ptr [esp + 0x30]
        lea    ecx, [esp + 0x18]
        fld    dword ptr [esp + 0x64]
        fmul    dword ptr [esp + 0x6c]
        fstp    dword ptr [esp + 0x34]
        fld    dword ptr [esp + 0x68]
        fmul    dword ptr [esp + 0x6c]
        fstp    dword ptr [esp + 0x38]
        call    FUN_0040c9e0
        test    ebx, ebx
        fld    dword ptr [edi + 0xc]
        fsubr    dword ptr [esp + 0x10]
        mov    edx, dword ptr [edi + 0x1c]
        fld    dword ptr [esp + 0x14]
        mov    eax, dword ptr [edi + 0x2c]
        mov    dword ptr [esp + 0x2c], edx
        fsub    dword ptr [esp + 0x2c]
        mov    dword ptr [esp + 0x30], eax
        fstp    dword ptr [esp + 0x20]
        fld    dword ptr [esp + 0x18]
        fsub    dword ptr [esp + 0x30]
        fstp    dword ptr [esp + 0x24]
        fld    dword ptr [esp + 0x1c8]
        fdivr    dword ptr [g_0076d064]
        fstp    dword ptr [esp + 0xc]
        fmul    dword ptr [esp + 0xc]
        fstp    dword ptr [esp + 0x1c]
        fld    dword ptr [esp + 0xc]
        fmul    dword ptr [esp + 0x20]
        fld    dword ptr [esp + 0x24]
        fmul    dword ptr [esp + 0xc]
        fstp    dword ptr [esp + 0x24]
        je    L_a7c2
        mov    ecx, dword ptr [ebx + 0xe0]
        cmp    dword ptr [ecx + 0x14], 6
        je    L_a7d7
L_a7c2:
        fcom    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jne    L_a7d7
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [g_0076c5b0]
L_a7d7:
        mov    edx, dword ptr [esp + 0x10]
        fstp    dword ptr [esi + 0x19c]
        mov    eax, dword ptr [esp + 0x14]
        mov    ecx, dword ptr [esp + 0x18]
        mov    dword ptr [esp + 0xbc], edx
        mov    edx, dword ptr [esp + 0x1c]
        mov    dword ptr [esp + 0xcc], eax
        lea    eax, [esi + 0x198]
        mov    dword ptr [eax], edx
        lea    edx, [esp + 0xb0]
        mov    dword ptr [esp + 0xdc], ecx
        mov    ecx, dword ptr [esp + 0x24]
        push    edx
        mov    dword ptr [eax + 8], ecx
        push    eax
L_a81a:
        lea    ecx, [esi + 0x168]
        call    FUN_0041c6e0
L_a825:
        lea    eax, [esp + 0xb0]
        push    eax
        mov    ecx, esi
        call    FUN_004daa20
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0x1b8
        ret    0xc
        sub    esp, 0x130
        mov    eax, dword ptr [esp + 0x138]
        fld    dword ptr [esp + 0x134]
        fmul    dword ptr [eax]
        push    esi
        push    edi
        mov    esi, ecx
        mov    edi, dword ptr [esi + 0xd8]
        fstp    dword ptr [esp + 0x8c]
        fld    dword ptr [esp + 0x13c]
        add    edi, 0x80
        fmul    dword ptr [eax + 4]
        push    edi
        lea    ecx, [esp + 0xf4]
        fstp    dword ptr [esp + 0x94]
        fld    dword ptr [esp + 0x140]
        fmul    dword ptr [eax + 8]
        lea    eax, [esp + 0x90]
        push    eax
        fstp    dword ptr [esp + 0x9c]
        call    FUN_0041c680
        mov    ecx, dword ptr [edi + 0xc]
        mov    dword ptr [esp + 0x40], ecx
        mov    edx, dword ptr [edi + 0x1c]
        mov    dword ptr [esp + 0x44], edx
        mov    eax, dword ptr [edi + 0x2c]
        lea    ecx, [esp + 0xf0]
        push    ecx
        lea    edx, [esp + 0x44]
        push    edx
        lea    ecx, [esp + 0x48]
        mov    dword ptr [esp + 0x50], eax
        call    FUN_0040c9e0
        mov    ecx, dword ptr [g_007b8ce8]
        mov    eax, dword ptr [g_007b8cec]
        mov    edx, dword ptr [g_007b8cf0]
        mov    dword ptr [esp + 0xc], ecx
        push    edi
        lea    ecx, [esp + 0x10]
        mov    dword ptr [esp + 0x14], eax
        mov    dword ptr [esp + 0x18], edx
        call    FUN_0041acb0
        fld    dword ptr [esp + 0x13c]
        mov    eax, dword ptr [esp + 0x144]
        fmul    dword ptr [eax + 4]
        lea    ecx, [esp + 0x98]
        push    ecx
        mov    ecx, dword ptr [esp + 0x140]
        fadd    dword ptr [esp + 0x10]
        lea    edx, [esp + 0xe8]
        push    edx
        fstp    dword ptr [esp + 0x14]
        push    ecx
        fld    dword ptr [esp + 0x148]
        mov    ecx, esi
        fmul    dword ptr [eax]
        fadd    dword ptr [esp + 0x1c]
        fstp    dword ptr [esp + 0x1c]
        fld    dword ptr [esp + 0x148]
        fmul    dword ptr [eax + 8]
        mov    eax, dword ptr [esi]
        fadd    dword ptr [esp + 0x20]
        fstp    dword ptr [esp + 0x20]
        call    dword ptr [eax + 0x164]
        test    al, al
        je    L_a98a
        mov    edx, dword ptr [esp + 0x9c]
        mov    ecx, dword ptr [esp + 0xa0]
        mov    eax, dword ptr [esp + 0x98]
        mov    dword ptr [esp + 0x10], edx
        lea    edx, [esp + 0xe4]
        mov    dword ptr [esp + 0x14], ecx
        push    edx
        lea    ecx, [esp + 0x44]
        mov    dword ptr [esp + 0x10], eax
        call    FUN_0040c410
L_a98a:
        mov    eax, dword ptr [esi + 0x458]
        push    0x7b8d08
        lea    ecx, [esp + 0x5c]
        mov    dword ptr [esp + 0x68], eax
        call    FUN_0040d560
        lea    ecx, [esp + 0x40]
        push    ecx
        lea    ecx, [esp + 0x50]
        call    FUN_0040c410
        fld    dword ptr [esp + 0x50]
        fadd    dword ptr [g_0077016c]
        lea    ecx, [esp + 0x74]
        lea    edx, [esp + 0x4c]
        lea    eax, [esp + 0xfc]
        push    ecx
        fstp    dword ptr [esp + 0x54]
        mov    ecx, dword ptr [g_007dc728]
        mov    dword ptr [esp + 0x78], edx
        mov    dword ptr [esp + 0x7c], eax
        mov    dword ptr [esp + 0x80], 0
        mov    dword ptr [esp + 0x88], esi
        mov    dword ptr [esp + 0x8c], 0x1000
        call    FUN_004e2f40
        test    eax, eax
        mov    edx, dword ptr [g_007b8d68]
        mov    ecx, dword ptr [g_007b8d6c]
        mov    dword ptr [esp + 0x18], edx
        mov    edx, dword ptr [g_007b8d70]
        mov    dword ptr [esp + 0x1c], ecx
        mov    dword ptr [esp + 0x20], edx
        jne    L_aaa7
        mov    ecx, dword ptr [g_007dc728]
        lea    eax, [esp + 0x74]
        push    eax
        mov    dword ptr [esp + 0x68], 0x461c4000
        call    FUN_004e2f40
        test    eax, eax
        je    L_aa6d
        mov    edx, dword ptr [esp + 0x64]
        lea    ecx, [esp + 0x40]
        push    ecx
        push    edx
        lea    ecx, [esp + 0x54]
        call    FUN_004e8dc0
        mov    eax, dword ptr [esp + 0x78]
        mov    ecx, dword ptr [eax]
        mov    dword ptr [esp + 0x18], ecx
        mov    edx, dword ptr [eax + 4]
        mov    dword ptr [esp + 0x1c], edx
        mov    eax, dword ptr [eax + 8]
        mov    dword ptr [esp + 0x20], eax
        jmp    L_aad2
L_aa6d:
        lea    ecx, [esp + 0x24]
        push    ecx
        lea    ecx, [esp + 0x5c]
        mov    dword ptr [esp + 0x28], 0
        mov    dword ptr [esp + 0x2c], 0x3f800000
        mov    dword ptr [esp + 0x30], 0
        call    FUN_0040d560
        mov    ecx, dword ptr [g_007dc728]
        lea    edx, [esp + 0x74]
        push    edx
        call    FUN_004e2f40
        test    eax, eax
        je    L_aad2
L_aaa7:
        mov    ecx, dword ptr [esp + 0x64]
        lea    eax, [esp + 0x40]
        push    eax
        push    ecx
        lea    ecx, [esp + 0x54]
        call    FUN_004e8dc0
        mov    eax, dword ptr [esp + 0x78]
        mov    edx, dword ptr [eax]
        mov    dword ptr [esp + 0x18], edx
        mov    ecx, dword ptr [eax + 4]
        mov    dword ptr [esp + 0x1c], ecx
        mov    edx, dword ptr [eax + 8]
        mov    dword ptr [esp + 0x20], edx
L_aad2:
        push    edi
        lea    eax, [esp + 0x1c]
        push    eax
        lea    ecx, [esp + 0x70]
        call    FUN_0041c6e0
        fld    dword ptr [esp + 0x6c]
        fcomp    dword ptr [g_0076c5b0]
        mov    dword ptr [esp + 0x3c], 0
        mov    dword ptr [esp + 8], 0
        fnstsw  ax
        test    ah, 0x40
        jne    L_ab1e
        fld    dword ptr [esp + 0x68]
        fld    dword ptr [esp + 0x6c]
        fpatan    
        fstp    dword ptr [esp + 0x3c]
        fld    dword ptr [esp + 0x70]
        fld    dword ptr [esp + 0x6c]
        fpatan    
        fstp    dword ptr [esp + 8]
L_ab1e:
        lea    ecx, [esp + 0x40]
        push    ecx
        lea    ecx, [esp + 0x10c]
        call    FUN_0040d030
        lea    edx, [esp + 0xc]
        push    edx
        lea    ecx, [esp + 0x10c]
        call    FUN_0041a070
        lea    eax, [esp + 0x108]
        push    eax
        mov    ecx, esi
        call    FUN_004daa20
        mov    eax, dword ptr [esi + 0x2f4]
        mov    cl, byte ptr [eax + 0x1d]
        test    cl, cl
        je    L_addb
        mov    eax, dword ptr [eax + 0x14]
        cmp    eax, 0x1e
        jl    L_acb7
        cmp    eax, 0x21
        jg    L_acb7
        fld    dword ptr [esi + 0x600]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        je    L_addb
        mov    edx, dword ptr [esi + 0x78]
        lea    ecx, [esi + 0x78]
        call    dword ptr [edx + 4]
        fld    dword ptr [esp + 0x3c]
        mov    ecx, dword ptr [esp + 8]
        fchs    
        mov    edi, eax
        fstp    dword ptr [esp + 0x2c]
        mov    eax, dword ptr [g_007b8ce8]
        lea    edx, [esp + 0x24]
        mov    dword ptr [esp + 0x28], ecx
        push    edx
        lea    ecx, [esp + 0xa8]
        mov    dword ptr [esp + 0x28], eax
        call    FUN_0041afa0
        fld    dword ptr [esi + 0x604]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jne    L_ac37
        fld    dword ptr [esi + 0x604]
        fcomp    dword ptr [edi + 0x318]
        fnstsw  ax
        test    ah, 1
        je    L_abfb
        fld    dword ptr [esi + 0x604]
        fdiv    dword ptr [edi + 0x310]
        fstp    dword ptr [esp + 8]
        jmp    L_ac03
L_abfb:
        mov    dword ptr [esp + 8], 0x3f800000
L_ac03:
        mov    eax, dword ptr [esp + 8]
        push    eax
        lea    ecx, [esp + 0xa8]
        push    ecx
        lea    edi, [esi + 0x60c]
        push    0x7b8cd8
        mov    ecx, edi
        call    FUN_0041bb80
        fld    dword ptr [esi + 0x604]
        fsub    dword ptr [esp + 0x13c]
        fstp    dword ptr [esi + 0x604]
        jmp    L_ac5f
L_ac37:
        mov    edx, dword ptr [g_007b8cd8]
        mov    eax, dword ptr [g_007b8cdc]
        mov    ecx, dword ptr [g_007b8ce0]
        lea    edi, [esi + 0x60c]
        mov    dword ptr [edi], edx
        mov    edx, dword ptr [g_007b8ce4]
        mov    dword ptr [edi + 4], eax
        mov    dword ptr [edi + 8], ecx
        mov    dword ptr [edi + 0xc], edx
L_ac5f:
        mov    ecx, dword ptr [g_007b8d8c]
        mov    eax, dword ptr [g_007b8d88]
        mov    edx, dword ptr [g_007b8d90]
        mov    dword ptr [esp + 0x34], ecx
        push    edi
        lea    ecx, [esp + 0xb8]
        mov    dword ptr [esp + 0x34], eax
        mov    dword ptr [esp + 0x3c], edx
        call    FUN_0041a160
        mov    eax, dword ptr [esp + 0x30]
        mov    ecx, dword ptr [esp + 0x34]
        mov    edx, dword ptr [esp + 0x38]
        mov    dword ptr [esp + 0xc0], eax
        lea    eax, [esp + 0xb4]
        mov    dword ptr [esp + 0xd0], ecx
        mov    dword ptr [esp + 0xe0], edx
        push    eax
        jmp    L_add0
L_acb7:
        mov    edx, dword ptr [esi + 0x78]
        lea    ecx, [esi + 0x78]
        call    dword ptr [edx + 4]
        fld    dword ptr [esp + 0x3c]
        mov    ecx, dword ptr [esp + 8]
        fchs    
        mov    edi, eax
        fstp    dword ptr [esp + 0x2c]
        mov    eax, dword ptr [g_007b8ce8]
        lea    edx, [esp + 0x24]
        mov    dword ptr [esp + 0x28], ecx
        push    edx
        lea    ecx, [esp + 0xa8]
        mov    dword ptr [esp + 0x28], eax
        call    FUN_0041afa0
        fld    dword ptr [esi + 0x600]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jne    L_ad6b
        fld    dword ptr [esi + 0x600]
        fcomp    dword ptr [edi + 0x30c]
        fnstsw  ax
        test    ah, 1
        je    L_ad26
        fld    dword ptr [esi + 0x600]
        fdiv    dword ptr [edi + 0x30c]
        fstp    dword ptr [esp + 8]
        jmp    L_ad2e
L_ad26:
        mov    dword ptr [esp + 8], 0x3f800000
L_ad2e:
        mov    eax, dword ptr [esp + 8]
        push    eax
        lea    ecx, [esi + 0x5f0]
        push    ecx
        lea    edx, [esp + 0xac]
        lea    edi, [esi + 0x60c]
        push    edx
        mov    ecx, edi
        call    FUN_0041bb80
        mov    ecx, edi
        call    FUN_0041b680
        fld    dword ptr [esi + 0x600]
        fsub    dword ptr [esp + 0x13c]
        fstp    dword ptr [esi + 0x600]
        jmp    L_ad7d
L_ad6b:
        lea    eax, [esp + 0x24]
        lea    edi, [esi + 0x60c]
        push    eax
        mov    ecx, edi
        call    FUN_0041afa0
L_ad7d:
        mov    ecx, dword ptr [g_007b8d88]
        mov    edx, dword ptr [g_007b8d8c]
        mov    eax, dword ptr [g_007b8d90]
        mov    dword ptr [esp + 0x30], ecx
        push    edi
        lea    ecx, [esp + 0xb8]
        mov    dword ptr [esp + 0x38], edx
        mov    dword ptr [esp + 0x3c], eax
        call    FUN_0041a160
        mov    ecx, dword ptr [esp + 0x30]
        mov    edx, dword ptr [esp + 0x34]
        mov    eax, dword ptr [esp + 0x38]
        mov    dword ptr [esp + 0xc0], ecx
        lea    ecx, [esp + 0xb4]
        mov    dword ptr [esp + 0xd0], edx
        mov    dword ptr [esp + 0xe0], eax
        push    ecx
L_add0:
        mov    ecx, dword ptr [esi + 0x82c]
        call    FUN_004daa20
L_addb:
        pop    edi
        pop    esi
        add    esp, 0x130
        ret    0xc
        nop    
        nop    
        nop    
        nop    
    }
}
