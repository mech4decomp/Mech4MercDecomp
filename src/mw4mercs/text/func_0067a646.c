/*
 * FUN_0067a646 (extent 0x67a646-0x67aeaf) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076d598;
extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007dd234;
extern int    g_007f23b0;
extern int    g_007f23d8;
extern int    g_007f24d8;
extern int    g_007f25c0;
extern char   g_0080dab4;
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_00547ba0(void);
extern void __cdecl FUN_005480c0(void);
extern void __cdecl FUN_00557f60(void);
extern void __cdecl FUN_005c1990(void);
extern void __cdecl FUN_005cbe50(void);
extern void __cdecl FUN_005cbf80(void);
extern void __cdecl FUN_005db570(void);
extern void __cdecl FUN_005e1c30(void);
extern void __cdecl FUN_005fb7d0(void);
extern void __cdecl FUN_005fb8e0(void);
extern void __cdecl FUN_005fd700(void);
extern void __cdecl FUN_0061c190(void);
extern void __cdecl FUN_0061c1a0(void);
extern void __cdecl FUN_0065d700(void);
extern void __cdecl FUN_0065d710(void);
extern void __cdecl FUN_0065d720(void);
extern void __cdecl FUN_0065d730(void);
extern void __cdecl FUN_0065d740(void);
extern void __cdecl FUN_0065d750(void);
extern void __cdecl FUN_0065d760(void);
extern void __cdecl FUN_0065d770(void);
extern void __cdecl FUN_0065d780(void);
extern void __cdecl FUN_0065e2a0(void);
extern void __cdecl FUN_0067a500(void);
extern void __cdecl FUN_0067a540(void);
extern void __cdecl FUN_0067a640(void);
extern void __cdecl FUN_0067aeb0(void);
extern void __cdecl FUN_0067b020(void);
extern void __cdecl FUN_0067b250(void);
extern void __cdecl FUN_0067b470(void);
extern void __cdecl FUN_0067b5a0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_0061c1a0(void);
extern void __cdecl FUN_0065d720(void);
extern void __cdecl FUN_0065d740(void);
extern void __cdecl FUN_0065d760(void);

__declspec(naked) void FUN_0067a646(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        call    FUN_0067a500
        test    eax, eax
        jne    L_a65c
        xor    al, al
        ret    
L_a65c:
        call    FUN_0067a500
        mov    edx, dword ptr [eax + 0x564]
        xor    ecx, ecx
        test    edx, edx
        sete    cl
        mov    al, cl
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        call    FUN_0067a500
        test    eax, eax
        je    L_a699
        push    0
        push    0
        call    FUN_0067a500
        mov    ecx, eax
        call    FUN_00557f60
L_a699:
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        call    FUN_0067a500
        test    eax, eax
        jne    L_a6ac
        xor    al, al
        ret    
L_a6ac:
        call    FUN_0067a500
        mov    edx, dword ptr [eax + 0x564]
        xor    ecx, ecx
        cmp    edx, 1
        sete    cl
        mov    al, cl
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        call    FUN_0067a500
        test    eax, eax
        je    L_a709
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, dword ptr [g_007dab40]
        mov    edx, dword ptr [ecx + 0xc]
        xor    edx, 0x85739531
        mov    eax, dword ptr [edx + 0x50]
        mov    ecx, dword ptr [eax + 0x5c]
        test    ecx, ecx
        je    L_a709
        push    0
        push    1
        call    FUN_0067a500
        mov    ecx, eax
        call    FUN_00557f60
L_a709:
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        call    FUN_0067a500
        test    eax, eax
        je    L_a736
        call    FUN_0067a500
        cmp    dword ptr [eax + 0x564], 5
        jne    L_a736
        call    FUN_0067a640
        mov    cl, byte ptr [eax + 0xc]
        test    cl, cl
        jne    L_a736
        mov    al, 1
        ret    
L_a736:
        xor    al, al
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x18
        call    FUN_0067a500
        test    eax, eax
        je    L_a7ba
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, dword ptr [g_007dab40]
        mov    edx, dword ptr [ecx + 0xc]
        xor    edx, 0x85739531
        mov    eax, dword ptr [edx + 0x50]
        mov    ecx, dword ptr [eax + 0x5c]
        test    ecx, ecx
        je    L_a7ba
        call    FUN_0067a540
        mov    eax, dword ptr [eax + 0xd8]
        mov    ecx, dword ptr [eax + 0xac]
        fld    dword ptr [eax + 0x8c]
        add    eax, 0x80
        __emit 0xD9  // FPU dword ptr [esp] (explicit disp8=0)
__emit 0x5C
__emit 0x24
__emit 0x00
        __emit 0x8D  // 141 eax, [esp] (explicit disp8=0)
__emit 0x44
__emit 0x24
__emit 0x00
        push    eax
        mov    edx, ecx
        push    5
        mov    dword ptr [esp + 0x1c], ecx
        mov    dword ptr [esp + 0x10], edx
        mov    dword ptr [esp + 0xc], 0x43480000
        call    FUN_0067a500
        mov    ecx, eax
        call    FUN_00557f60
        call    FUN_0067a640
        mov    byte ptr [eax + 0xc], 0
L_a7ba:
        add    esp, 0x18
        ret    
        nop    
        nop    
        call    FUN_0067a500
        test    eax, eax
        je    L_a7e7
        call    FUN_0067a500
        cmp    dword ptr [eax + 0x564], 5
        jne    L_a7e7
        call    FUN_0067a640
        mov    ecx, eax
        mov    dl, byte ptr [ecx + 0xc]
        mov    al, 1
        cmp    dl, al
        je    L_a7e9
L_a7e7:
        xor    al, al
L_a7e9:
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x18
        call    FUN_0067a500
        test    eax, eax
        je    L_a86a
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, dword ptr [g_007dab40]
        mov    edx, dword ptr [ecx + 0xc]
        xor    edx, 0x85739531
        mov    eax, dword ptr [edx + 0x50]
        mov    ecx, dword ptr [eax + 0x5c]
        test    ecx, ecx
        je    L_a86a
        call    FUN_0067a540
        mov    eax, dword ptr [eax + 0xd8]
        mov    ecx, dword ptr [eax + 0xac]
        fld    dword ptr [eax + 0x8c]
        add    eax, 0x80
        __emit 0xD9  // FPU dword ptr [esp] (explicit disp8=0)
__emit 0x5C
__emit 0x24
__emit 0x00
        __emit 0x8D  // 141 eax, [esp] (explicit disp8=0)
__emit 0x44
__emit 0x24
__emit 0x00
        push    eax
        mov    edx, ecx
        push    5
        mov    dword ptr [esp + 0x1c], ecx
        mov    dword ptr [esp + 0x10], edx
        mov    dword ptr [esp + 0xc], 0x43480000
        call    FUN_0067a500
        mov    ecx, eax
        call    FUN_00557f60
        call    FUN_0067a640
        mov    byte ptr [eax + 0xc], 1
L_a86a:
        add    esp, 0x18
        ret    
        nop    
        nop    
        jmp    FUN_0061c1a0
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        call    FUN_0061c1a0
        test    al, al
        je    L_a894
        push    0
        call    FUN_0061c190
        add    esp, 4
        ret    
L_a894:
        push    1
        call    FUN_0061c190
        pop    ecx
        ret    
        nop    
        nop    
        nop    
        xor    al, al
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 8
        push    ebx
        push    ebp
        push    esi
        push    edi
        call    FUN_0067a540
        test    eax, eax
        je    L_a9e0
        call    FUN_0067a500
        test    eax, eax
        je    L_a9e0
        call    FUN_0067a640
        cmp    dword ptr [eax + 0x10], -1
        jne    L_a8ee
        call    FUN_0067a540
        mov    esi, eax
        call    FUN_0067a640
        mov    ecx, dword ptr [esi + 0x30]
        mov    dword ptr [eax + 0x10], ecx
L_a8ee:
        mov    edx, dword ptr [g_007dab44]
        mov    edi, dword ptr [g_007dab40]
        mov    eax, dword ptr [edx]
        xor    eax, edi
        mov    eax, dword ptr [eax + 0x10]
        xor    eax, 0x85739531
        mov    edi, dword ptr [eax + 0x1c]
        add    eax, 0x18
        xor    ebp, ebp
        test    edi, edi
        mov    dword ptr [esp + 0x14], eax
        mov    esi, edi
        jbe    L_a9a3
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x10], eax
        lea    ebx, [eax + 0x18]
L_a925:
        call    FUN_0067a640
        mov    ecx, dword ptr [ebx]
        cmp    ecx, dword ptr [eax + 0x10]
        je    L_a93b
        inc    ebp
        add    ebx, 0x1c
        cmp    ebp, edi
        jb    L_a925
        jmp    L_a99f
L_a93b:
        lea    esi, [ebp + 1]
        cmp    esi, edi
        jb    L_a948
        xor    esi, esi
        cmp    esi, edi
        jae    L_a99f
L_a948:
        mov    eax, dword ptr [esp + 0x10]
        lea    edx, [esi*8]
        sub    edx, esi
        mov    ecx, dword ptr [eax + edx*4 + 0x14]
        call    FUN_0041fd80
        mov    ebx, eax
L_a960:
        test    ebx, ebx
        je    L_a976
        mov    eax, dword ptr [g_007f25c0]
        mov    ecx, dword ptr [ebx + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        jne    L_a99f
L_a976:
        inc    esi
        cmp    esi, edi
        jae    L_a995
        mov    edx, dword ptr [esp + 0x10]
        lea    ecx, [esi*8]
        sub    ecx, esi
        mov    ecx, dword ptr [edx + ecx*4 + 0x14]
        call    FUN_0041fd80
        mov    ebx, eax
        jmp    L_a997
L_a995:
        xor    esi, esi
L_a997:
        cmp    esi, ebp
        je    L_a9e0
        cmp    esi, edi
        jb    L_a960
L_a99f:
        mov    eax, dword ptr [esp + 0x14]
L_a9a3:
        cmp    esi, edi
        jae    L_a9e0
        mov    edx, dword ptr [eax]
        lea    ecx, [esi*8]
        sub    ecx, esi
        mov    esi, dword ptr [edx + ecx*4 + 0x14]
        mov    ecx, esi
        call    FUN_0041fd80
        mov    ecx, dword ptr [g_007f25c0]
        push    ecx
        mov    ecx, dword ptr [eax + 4]
        call    FUN_00415230
        test    al, al
        je    L_a9e0
        mov    ecx, esi
        call    FUN_0041fd80
        push    eax
        call    FUN_0067b5a0
        add    esp, 4
L_a9e0:
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 8
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        call    FUN_0067a500
        test    eax, eax
        je    L_aa2e
        call    FUN_0067a500
        mov    ecx, dword ptr [eax + 0x384]
        test    ecx, ecx
        je    L_aa2e
        call    FUN_0067a500
        mov    ecx, dword ptr [eax + 0x384]
        call    FUN_005fb8e0
        fcomp    dword ptr [g_0076d598]
        fnstsw  ax
        test    ah, 0x40
        je    L_aa2b
        mov    eax, 1
        ret    
L_aa2b:
        xor    eax, eax
        ret    
L_aa2e:
        xor    al, al
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        call    FUN_0067a500
        test    eax, eax
        je    L_aa92
        call    FUN_0067a500
        mov    ecx, dword ptr [eax + 0x384]
        test    ecx, ecx
        je    L_aa92
        call    FUN_0067a500
        mov    esi, dword ptr [eax + 0x384]
        mov    ecx, esi
        call    FUN_005fb8e0
        fcomp    dword ptr [g_0076d598]
        fnstsw  ax
        test    ah, 0x40
        je    L_aa86
        push    0xc0000000
        mov    ecx, esi
        call    FUN_005fb7d0
        pop    esi
        ret    
L_aa86:
        push    0xbf800000
        mov    ecx, esi
        call    FUN_005fb7d0
L_aa92:
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    al, byte ptr [g_0080dab4]
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, dword ptr [g_007dab40]
        mov    edx, dword ptr [ecx + 0x20]
        xor    edx, 0x85739531
        lea    eax, [ecx + 0x20]
        push    edi
        je    L_ab7b
        mov    cl, byte ptr [g_0080dab4]
        test    cl, cl
        jne    L_ab7b
        mov    ecx, dword ptr [eax]
        xor    ecx, 0x85739531
        mov    byte ptr [g_0080dab4], 1
        call    FUN_005fd700
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, dword ptr [g_007dab40]
        mov    eax, dword ptr [ecx + 0x10]
        xor    eax, 0x85739531
        mov    ecx, dword ptr [eax + 0x54]
        test    ecx, ecx
        jle    L_ab7b
        mov    edi, dword ptr [eax + 0x50]
        push    ebx
        push    esi
        add    edi, 0x14
        mov    ebx, ecx
L_ab18:
        mov    ecx, dword ptr [edi]
        call    FUN_0041fd80
        mov    esi, eax
        test    esi, esi
        je    L_ab73
        mov    eax, dword ptr [g_007f24d8]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        je    L_ab3e
        mov    ecx, esi
        call    FUN_005db570
L_ab3e:
        mov    eax, dword ptr [g_007f23d8]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        je    L_ab5a
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 0x1c4]
L_ab5a:
        mov    eax, dword ptr [g_007f23b0]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        je    L_ab73
        mov    ecx, esi
        call    FUN_005c1990
L_ab73:
        add    edi, 0x1c
        dec    ebx
        jne    L_ab18
        pop    esi
        pop    ebx
L_ab7b:
        pop    edi
        ret    
        nop    
        nop    
        nop    
        call    FUN_0065d780
        test    eax, eax
        jne    L_ab8c
        xor    al, al
        ret    
L_ab8c:
        call    FUN_0065d780
        mov    ecx, eax
        call    FUN_0065d700
        dec    eax
        neg    eax
        sbb    eax, eax
        inc    eax
        ret    
        nop    
        push    esi
        call    FUN_0065d780
        mov    esi, eax
        test    esi, esi
        je    L_abcc
        mov    ecx, esi
        call    FUN_0065d700
        cmp    eax, 1
        je    L_abc3
        push    1
        mov    ecx, esi
        call    FUN_0065d710
        pop    esi
        ret    
L_abc3:
        push    0
        mov    ecx, esi
        call    FUN_0065d710
L_abcc:
        pop    esi
        ret    
        nop    
        nop    
        call    FUN_0065d780
        test    eax, eax
        jne    L_abdc
        xor    al, al
        ret    
L_abdc:
        call    FUN_0065d780
        mov    ecx, eax
        call    FUN_0065d700
        sub    eax, 2
        neg    eax
        sbb    eax, eax
        inc    eax
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        call    FUN_0065d780
        mov    esi, eax
        test    esi, esi
        je    L_ac2c
        mov    ecx, esi
        call    FUN_0065d700
        cmp    eax, 2
        je    L_ac23
        push    2
        mov    ecx, esi
        call    FUN_0065d710
        pop    esi
        ret    
L_ac23:
        push    0
        mov    ecx, esi
        call    FUN_0065d710
L_ac2c:
        pop    esi
        ret    
        nop    
        nop    
        call    FUN_0065d780
        test    eax, eax
        jne    L_ac3c
        xor    al, al
        ret    
L_ac3c:
        mov    ecx, eax
        jmp    FUN_0065d720
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        call    FUN_0065d780
        mov    esi, eax
        test    esi, esi
        je    L_ac7b
        mov    ecx, esi
        call    FUN_0065d720
        cmp    al, 1
        jne    L_ac72
        push    0
        mov    ecx, esi
        call    FUN_0065d730
        pop    esi
        ret    
L_ac72:
        push    1
        mov    ecx, esi
        call    FUN_0065d730
L_ac7b:
        pop    esi
        ret    
        nop    
        nop    
        nop    
        call    FUN_0065d780
        test    eax, eax
        jne    L_ac8c
        xor    al, al
        ret    
L_ac8c:
        mov    ecx, eax
        jmp    FUN_0065d740
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        call    FUN_0065d780
        mov    esi, eax
        test    esi, esi
        je    L_accb
        mov    ecx, esi
        call    FUN_0065d740
        cmp    al, 1
        jne    L_acc2
        push    0
        mov    ecx, esi
        call    FUN_0065d750
        pop    esi
        ret    
L_acc2:
        push    1
        mov    ecx, esi
        call    FUN_0065d750
L_accb:
        pop    esi
        ret    
        nop    
        nop    
        nop    
        call    FUN_0065d780
        test    eax, eax
        jne    L_acdc
        xor    al, al
        ret    
L_acdc:
        mov    ecx, eax
        jmp    FUN_0065d760
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        call    FUN_0065d780
        mov    esi, eax
        test    esi, esi
        je    L_ad1b
        mov    ecx, esi
        call    FUN_0065d760
        cmp    al, 1
        jne    L_ad12
        push    0
        mov    ecx, esi
        call    FUN_0065d770
        pop    esi
        ret    
L_ad12:
        push    1
        mov    ecx, esi
        call    FUN_0065d770
L_ad1b:
        pop    esi
        ret    
        nop    
        nop    
        nop    
        sub    esp, 0x20
        push    esi
        push    edi
        call    FUN_0067a640
        test    eax, eax
        je    L_adc8
        call    FUN_0067a540
        test    eax, eax
        je    L_adc8
        mov    eax, dword ptr [g_007dd234]
        push    eax
        call    FUN_006f4950
        lea    ecx, [esp + 0xc]
        push    ecx
        lea    edx, [esp + 0xf]
        push    edx
        lea    ecx, [esp + 0x20]
        mov    dword ptr [esp + 0x18], 0
        mov    dword ptr [esp + 0x1c], 0
        mov    dword ptr [esp + 0x14], 0
        call    FUN_00547ba0
        mov    edx, dword ptr [esp + 0x2c]
        or    ecx, 0xffffffff
        xor    eax, eax
        mov    edi, edx
        repne scasb
        not    ecx
        dec    ecx
        add    ecx, edx
        push    ecx
        push    edx
        lea    ecx, [esp + 0x18]
        call    FUN_005480c0
        lea    eax, [esp + 0x10]
        push    eax
        call    FUN_0067b020
        mov    ecx, dword ptr [esp + 0x1c]
        mov    esi, eax
        mov    eax, dword ptr [esp + 0x14]
        add    esp, 4
        sub    ecx, eax
        push    ecx
        push    eax
        lea    ecx, [esp + 0x20]
        call    FUN_005e1c30
        mov    eax, dword ptr [esp + 0x30]
        test    eax, eax
        je    L_aded
        cmp    eax, 3
        je    L_add2
        call    FUN_006f49a0
L_adc8:
        pop    edi
        xor    eax, eax
        pop    esi
        add    esp, 0x20
        ret    8
L_add2:
        push    esi
        call    FUN_0067b470
        add    esp, 4
        call    FUN_006f49a0
        pop    edi
        mov    eax, 1
        pop    esi
        add    esp, 0x20
        ret    8
L_aded:
        push    0
        lea    edx, [esp + 0x14]
        push    esi
        push    edx
        call    FUN_0067aeb0
        add    esp, 0xc
        mov    edi, eax
        call    FUN_0067a640
        cmp    edi, eax
        je    L_ae1b
        mov    ecx, dword ptr [esp + 0x2c]
        mov    edx, dword ptr [edi + 4]
        push    ecx
        mov    ecx, dword ptr [edi]
        push    edx
        push    ecx
        mov    ecx, eax
        call    FUN_0065e2a0
L_ae1b:
        mov    eax, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esp + 0x18]
        sub    edx, eax
        push    edx
        push    eax
        lea    ecx, [esp + 0x20]
        call    FUN_005e1c30
        call    FUN_0067a640
        mov    edx, eax
        mov    eax, dword ptr [esp + 0x2c]
        or    ecx, 0xffffffff
        push    eax
        xor    eax, eax
        mov    edi, 0x76cb8c
        repne scasb
        not    ecx
        dec    ecx
        add    ecx, 0x76cb8c
        push    ecx
        push    0x76cb8c
        mov    ecx, edx
        call    FUN_005cbf80
        lea    ecx, [esp + 0x1c]
        push    esi
        push    ecx
        call    FUN_0067b250
        add    esp, 8
        mov    esi, eax
        call    FUN_0067a640
        mov    edx, dword ptr [esp + 0x2c]
        mov    ecx, dword ptr [esi + 4]
        push    edx
        mov    edx, dword ptr [esi]
        push    ecx
        push    edx
        mov    ecx, eax
        call    FUN_005cbe50
        mov    eax, dword ptr [esp + 0x1c]
        mov    ecx, dword ptr [esp + 0x24]
        sub    ecx, eax
        push    ecx
        push    eax
        lea    ecx, [esp + 0x2c]
        call    FUN_005e1c30
        call    FUN_006f49a0
        call    FUN_0067a640
        mov    eax, dword ptr [eax]
        pop    edi
        pop    esi
        add    esp, 0x20
        ret    8
    }
}
