/*
 * FUN_006ee820 (extent 0x6ee820-0x6efe02) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b2d4;
extern int    g_0076b2e0;
extern int    g_0076b414;
extern int    g_0076b420;
extern int    g_0076b4fc;
extern int    g_0076b51c;
extern int    g_0076b528;
extern int    g_0076b544;
extern int    g_0076b560;
extern int    g_0076b568;
extern int    g_0076b574;
extern int    g_0076b5a4;
extern float  g_0079f62c;
extern int    g_007b6a48;
extern int    g_007b82b4;
extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007dd268;
extern int    g_00841768;
extern int    g_008422e8;
extern int    g_00848c6c;
extern int    g_00848c78;
extern int    g_00848c7c;
extern int    g_00848c80;
extern int    g_00848c98;
extern int    g_00848c9c;
extern int    g_00848ca0;
extern int    g_00848ca4;
extern int    g_00848ca8;
extern int    g_00848d6c;
extern char   g_00848d78;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_004125e0(void);
extern void __cdecl FUN_00412670(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_00512ff0(void);
extern void __cdecl FUN_00514cc0(void);
extern void __cdecl FUN_0051edd0(void);
extern void __cdecl FUN_0051edf0(void);
extern void __cdecl FUN_0051ee40(void);
extern void __cdecl FUN_0051eed0(void);
extern void __cdecl FUN_0051f0f0(void);
extern void __cdecl FUN_0051f160(void);
extern void __cdecl FUN_0051f1d0(void);
extern void __cdecl FUN_0051f270(void);
extern void __cdecl FUN_0051f2e0(void);
extern void __cdecl FUN_00523ba0(void);
extern void __cdecl FUN_00523e80(void);
extern void __cdecl FUN_00523ed0(void);
extern void __cdecl FUN_00523f70(void);
extern void __cdecl FUN_00524010(void);
extern void __cdecl FUN_00524060(void);
extern void __cdecl FUN_005240b0(void);
extern void __cdecl FUN_005404a0(void);
extern void __cdecl FUN_00540530(void);
extern void __cdecl FUN_006ef320(void);
extern void __cdecl FUN_006efa10(void);
extern void __cdecl FUN_006efe10(void);
extern void __cdecl FUN_006efe60(void);
extern void __cdecl FUN_006f0770(void);
extern void __cdecl FUN_006f0ab0(void);
extern void __cdecl FUN_006f4230(void);
extern void __cdecl FUN_0072d830(void);

__declspec(naked) void FUN_006ee820(void)
{
    __asm {
        mov    eax, dword ptr [esp + 4]
        sub    esp, 0x114
        push    ebp
        push    0x410
        push    eax
        call    dword ptr [g_0076b5a4]
        mov    ebp, eax
        mov    eax, dword ptr [g_007dd268]
        mov    ecx, dword ptr [eax + 0x409ac]
        test    ecx, ecx
        jle    L_ea96
        mov    edx, dword ptr [eax + 0x409b4]
        mov    eax, dword ptr [edx + ecx*4 - 4]
        push    eax
        lea    ecx, [esp + 0xc]
        call    FUN_00412570
        mov    ecx, dword ptr [esp + 8]
        push    0x79f614
        push    ecx
        lea    ecx, [esp + 0xc]
        call    FUN_004125e0
        push    eax
        lea    ecx, [esp + 0xc]
        call    FUN_00412740
        mov    eax, dword ptr [esp + 4]
        test    eax, eax
        je    L_e898
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_e898
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_e898:
        mov    eax, dword ptr [g_007dd268]
        mov    edx, dword ptr [eax + 0x409ac]
        mov    eax, dword ptr [eax + 0x409b8]
        mov    eax, dword ptr [eax + edx*4 - 4]
        mov    ecx, dword ptr [esp + 8]
        push    eax
        push    ecx
        lea    ecx, [esp + 0xc]
        call    FUN_004125e0
        push    eax
        lea    ecx, [esp + 0xc]
        call    FUN_00412740
        mov    eax, dword ptr [esp + 4]
        test    eax, eax
        je    L_e8e1
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_e8e1
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_e8e1:
        push    ebx
        mov    ebx, dword ptr [g_0076b560]
        push    edi
        xor    eax, eax
        mov    ecx, 0x40
        lea    edi, [esp + 0x20]
        rep stosd
        mov    eax, dword ptr [g_007dd268]
        mov    word ptr [esp + 0x20], 0x100
        mov    ecx, dword ptr [eax + 0x409ac]
        lea    edx, [esp + 0x20]
        push    edx
        dec    ecx
        push    ecx
        push    0xc4
        push    ebp
        call    ebx
        mov    edx, dword ptr [esp + 0x10]
        test    edx, edx
        jne    L_e923
        xor    ecx, ecx
        jmp    L_e92f
L_e923:
        or    ecx, 0xffffffff
        xor    eax, eax
        mov    edi, edx
        repne scasb
        not    ecx
        dec    ecx
L_e92f:
        push    ecx
        push    edx
        lea    edx, [esp + 0x28]
        push    edx
        call    dword ptr [g_0076b2e0]
        add    esp, 0xc
        test    eax, eax
        je    L_ea79
        push    esi
        push    0x76b768
        push    0
        push    0xc
        push    ebp
        call    ebx
        mov    eax, dword ptr [g_007dd268]
        mov    ecx, dword ptr [eax + 0x409ac]
        xor    esi, esi
        test    ecx, ecx
        jle    L_ea6c
L_e969:
        mov    eax, dword ptr [eax + 0x409b4]
        mov    ecx, dword ptr [eax + esi*4]
        push    ecx
        lea    ecx, [esp + 0x14]
        call    FUN_00412570
        mov    edx, dword ptr [esp + 0x10]
        push    0x79f614
        push    edx
        lea    ecx, [esp + 0x20]
        call    FUN_004125e0
        push    eax
        lea    ecx, [esp + 0x14]
        call    FUN_00412740
        mov    eax, dword ptr [esp + 0x18]
        test    eax, eax
        je    L_e9b4
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_e9b4
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_e9b4:
        mov    eax, dword ptr [g_007dd268]
        mov    ecx, dword ptr [eax + 0x409b8]
        mov    eax, dword ptr [ecx + esi*4]
        mov    edx, dword ptr [esp + 0x10]
        push    eax
        push    edx
        lea    ecx, [esp + 0x28]
        call    FUN_004125e0
        push    eax
        lea    ecx, [esp + 0x14]
        call    FUN_00412740
        mov    eax, dword ptr [esp + 0x20]
        test    eax, eax
        je    L_e9f6
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_e9f6
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_e9f6:
        mov    eax, dword ptr [esp + 0x10]
        push    0x76d1b8
        push    eax
        lea    ecx, [esp + 0x24]
        call    FUN_004125e0
        push    eax
        lea    ecx, [esp + 0x14]
        call    FUN_00412740
        mov    eax, dword ptr [esp + 0x1c]
        test    eax, eax
        je    L_ea2e
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_ea2e
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_ea2e:
        mov    ecx, dword ptr [esp + 0x10]
        push    ecx
        push    0
        push    0xc2
        push    ebp
        call    ebx
        mov    eax, dword ptr [esp + 0x10]
        test    eax, eax
        je    L_ea58
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_ea58
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_ea58:
        mov    eax, dword ptr [g_007dd268]
        mov    ecx, dword ptr [eax + 0x409ac]
        inc    esi
        cmp    esi, ecx
        jl    L_e969
L_ea6c:
        push    0
        push    0
        push    0xb7
        push    ebp
        call    ebx
        pop    esi
L_ea79:
        mov    eax, dword ptr [esp + 0x10]
        test    eax, eax
        pop    edi
        pop    ebx
        je    L_ea96
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_ea96
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_ea96:
        pop    ebp
        add    esp, 0x114
        ret    
        nop    
        nop    
        mov    al, byte ptr [g_00848d78]
        sub    esp, 0x9c
        test    al, al
        jne    L_f30b
        push    ebx
        push    ebp
        push    esi
        xor    esi, esi
        push    edi
        mov    byte ptr [g_00848d78], 1
        mov    ebx, 0x842f74
        xor    ebp, ebp
        jmp    L_eacb
L_eac9:
        xor    esi, esi
L_eacb:
        mov    eax, dword ptr [ebp + 0x8449a0]
        cmp    eax, esi
        je    L_eae1
        push    eax
        call    FUN_006f4230
        mov    dword ptr [ebp + 0x8449a0], esi
L_eae1:
        mov    eax, dword ptr [ebp + 0x84493c]
        cmp    eax, esi
        je    L_eaf7
        push    eax
        call    FUN_006f4230
        mov    dword ptr [ebp + 0x84493c], esi
L_eaf7:
        or    ecx, 0xffffffff
        xor    eax, eax
        mov    edi, 0x76b768
        repne scasb
        not    ecx
        sub    edi, ecx
        mov    eax, ecx
        shr    ecx, 2
        mov    esi, edi
        mov    edi, ebx
        rep movsd
        mov    ecx, eax
        and    ecx, 3
        add    ebx, 0x100
        add    ebp, 4
        cmp    ebx, 0x844874
        rep movsb
        jl    L_eac9
        xor    eax, eax
        mov    ecx, 8
        mov    edi, 0x8422c8
        rep stosd
        mov    ecx, 8
        mov    edi, 0x8422ec
        rep stosd
        lea    eax, [esp + 0x14]
        push    eax
        xor    esi, esi
        push    1
        lea    ecx, [esp + 0x30]
        lea    edx, [esp + 0x50]
        push    esi
        mov    dword ptr [g_008422e8], 1
        mov    dword ptr [g_00848ca0], esi
        mov    dword ptr [esp + 0x38], esi
        mov    dword ptr [g_00848c6c], esi
        mov    dword ptr [esp + 0x20], ecx
        mov    dword ptr [esp + 0x24], edx
        mov    dword ptr [esp + 0x34], 0x2f
        call    FUN_00512ff0
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        xor    edx, dword ptr [g_007dab40]
        mov    ebx, dword ptr [edx + 0xc]
        xor    ebx, 0x85739531
        xor    edx, edx
        mov    dword ptr [esp + 0x30], eax
        mov    dword ptr [esp + 0x3c], ebx
        mov    dword ptr [esp + 0x10], edx
L_ebaa:
        lea    eax, [esp + 0x14]
        push    eax
        push    1
        push    esi
        mov    dword ptr [esp + 0x34], edx
        call    FUN_0051edf0
        mov    edx, dword ptr [esp + 0x10]
        cmp    edx, 1
        je    L_ed56
        cmp    eax, esi
        je    L_ed56
        push    esi
        push    esi
        push    esi
        mov    dword ptr [esp + 0x30], esi
        call    FUN_0051edd0
        mov    ecx, dword ptr [esp + 0x10]
        lea    eax, [esp + 0x14]
        push    eax
        push    2
        lea    edx, [esp + 0x2c]
        push    esi
        mov    dword ptr [esp + 0x34], ecx
        mov    dword ptr [esp + 0x24], edx
        call    FUN_0051ee40
        mov    ecx, dword ptr [g_00848c6c]
        lea    eax, [esp + 0x14]
        push    eax
        push    2
        lea    edx, [ecx*4 + 0x84493c]
        push    esi
        mov    dword ptr [esp + 0x24], edx
        call    FUN_0051eed0
        lea    edx, [esp + 0x14]
        push    edx
        push    2
        lea    ecx, [esp + 0x2c]
        push    esi
        mov    dword ptr [esp + 0x24], ecx
        call    FUN_0051f0f0
        mov    ebp, eax
        lea    eax, [esp + 0x14]
        push    eax
        push    1
        push    esi
        call    FUN_00514cc0
        mov    ecx, dword ptr [g_00848c6c]
        lea    edx, [esp + 0x14]
        push    edx
        push    2
        push    esi
        mov    dword ptr [ecx*4 + 0x842f10], eax
        call    FUN_0051f160
        lea    eax, [esp + 0x14]
        push    eax
        push    2
        push    esi
        call    FUN_0051f1d0
        lea    ecx, [esp + 0x14]
        push    ecx
        push    2
        push    esi
        mov    edi, eax
        call    FUN_0051f270
        lea    edx, [esp + 0x14]
        push    edx
        push    1
        push    0
        mov    esi, eax
        call    FUN_0051f2e0
        cmp    eax, -1
        mov    ecx, dword ptr [g_00848c6c]
        mov    edx, dword ptr [esp + 0x10]
        mov    dword ptr [ecx*4 + 0x844acc], 0
        mov    dword ptr [ecx*4 + 0x844a68], edx
        mov    dword ptr [ecx*4 + 0x844cc0], edi
        mov    dword ptr [ecx*4 + 0x844bf8], esi
        jle    L_ecbd
        cmp    eax, 0x25
        jge    L_ecbd
        inc    eax
        mov    dword ptr [ecx*4 + 0x844c5c], eax
L_ecbd:
        test    ebp, ebp
        je    L_ecce
        mov    dword ptr [ecx*4 + 0x844b94], 2
        jmp    L_ecfc
L_ecce:
        mov    eax, edx
        shl    eax, 7
        add    eax, edx
        shl    eax, 3
        sub    eax, edx
        cmp    byte ptr [ebx + eax*8 + 0x3539], 0
        je    L_ecf1
        mov    dword ptr [ecx*4 + 0x844b94], 1
        jmp    L_ecfc
L_ecf1:
        mov    dword ptr [ecx*4 + 0x844b94], 0
L_ecfc:
        mov    eax, dword ptr [esp + 0x24]
        mov    ebp, dword ptr [g_00848ca0]
        mov    dword ptr [ecx*4 + 0x8449a0], eax
        mov    eax, edx
        shl    eax, 7
        add    eax, edx
        shl    eax, 3
        sub    eax, edx
        mov    edi, dword ptr [ebx + eax*8 + 0x5568]
        lea    eax, [ebx + eax*8]
        mov    eax, dword ptr [eax + 0x556c]
        mov    dword ptr [ecx*4 + 0x8448d8], edi
        mov    edi, dword ptr [esi*4 + 0x8422ec]
        inc    ebp
        inc    edi
        mov    dword ptr [ecx*4 + 0x844874], eax
        inc    ecx
        mov    dword ptr [esi*4 + 0x8422ec], edi
        mov    dword ptr [g_00848ca0], ebp
        mov    dword ptr [g_00848c6c], ecx
        xor    esi, esi
L_ed56:
        inc    edx
        cmp    edx, 0xff
        mov    dword ptr [esp + 0x10], edx
        jl    L_ebaa
        mov    dword ptr [g_00848ca8], esi
        mov    dword ptr [esp + 0x24], esi
        mov    dword ptr [esp + 0x38], 1
        mov    dword ptr [esp + 0x10], esi
L_ed7d:
        lea    edx, [esp + 0x1c]
        push    edx
        push    1
        lea    ecx, [esp + 0x18]
        push    esi
        mov    dword ptr [esp + 0x28], ecx
        call    FUN_00523e80
        test    eax, eax
        je    L_f0b2
        mov    eax, dword ptr [esp + 0x24]
        lea    ecx, [esp + 0x1c]
        inc    eax
        push    ecx
        mov    dword ptr [esp + 0x28], eax
        push    2
        lea    eax, [esp + 0x3c]
        push    esi
        mov    dword ptr [g_00848ca8], 1
        mov    dword ptr [esp + 0x40], esi
        mov    dword ptr [esp + 0x2c], eax
        call    FUN_00523ed0
        mov    edx, dword ptr [g_00848c6c]
        lea    ecx, [esp + 0x1c]
        push    ecx
        push    2
        lea    eax, [edx*4 + 0x84493c]
        push    esi
        mov    dword ptr [esp + 0x2c], eax
        call    FUN_00523f70
        lea    edx, [esp + 0x1c]
        push    edx
        push    1
        push    esi
        call    FUN_00524010
        lea    eax, [esp + 0x1c]
        push    eax
        push    1
        push    esi
        call    FUN_00524060
        mov    ecx, dword ptr [g_00848c6c]
        mov    ebx, eax
        mov    eax, dword ptr [esp + 0x10]
        mov    edx, dword ptr [eax*4 + 0x842310]
        cmp    edx, ecx
        lea    esi, [ecx*4]
        mov    edi, 4
        mov    dword ptr [esi + 0x844c5c], edi
        mov    dword ptr [esi + 0x844acc], 1
        mov    dword ptr [esi + 0x844a04], eax
        mov    dword ptr [esi + 0x844bf8], ebx
        je    L_ee6c
        cmp    edx, -1
        je    L_ee6c
        mov    edx, dword ptr [eax*4 + 0x842b10]
        mov    dword ptr [esi + 0x844cc0], edx
        mov    edx, dword ptr [eax*4 + 0x842710]
        mov    dword ptr [esi + 0x844c5c], edx
        mov    dword ptr [eax*4 + 0x842710], 0
        jmp    L_efcc
L_ee6c:
        mov    edx, dword ptr [esi + 0x844cc0]
        test    edx, edx
        mov    dword ptr [eax*4 + 0x842710], edi
        je    L_ef11
        mov    edi, dword ptr [g_007dd268]
        mov    edi, dword ptr [edi + 0x409a0]
        dec    edi
        cmp    edx, edi
        jg    L_ef11
        cmp    edx, dword ptr [eax*4 + 0x842b10]
        je    L_efcc
        push    edx
        xor    ebp, ebp
        push    eax
        mov    dword ptr [esi + 0x844b30], ebp
        call    FUN_006efe10
        add    esp, 8
        mov    edi, eax
        lea    eax, [esp + 0x1c]
        push    eax
        push    1
        push    ebp
        call    FUN_005240b0
        cmp    edi, ebp
        mov    ecx, dword ptr [g_00848c6c]
        lea    esi, [ecx*4]
        mov    dword ptr [esi + 0x844b30], eax
        je    L_efc8
        cmp    eax, ebp
        jne    L_eef4
        cmp    dword ptr [esp + 0x38], ebp
        je    L_eef4
        call    FUN_006f0770
        mov    ecx, dword ptr [g_00848c6c]
        mov    dword ptr [esp + 0x38], ebp
L_eef4:
        mov    eax, dword ptr [esp + 0x10]
        lea    esi, [ecx*4]
        mov    edx, dword ptr [esi + 0x844cc0]
        mov    dword ptr [eax*4 + 0x842b10], edx
        jmp    L_efcc
L_ef11:
        mov    edx, dword ptr [eax*4 + 0x842b10]
        cmp    edx, -1
        jne    L_efc0
        xor    ebp, ebp
        mov    edi, 1
        mov    dword ptr [esi + 0x844b30], ebp
L_ef2e:
        test    ebp, ebp
        je    L_ef3c
        mov    edx, dword ptr [esi + 0x844b30]
        test    edx, edx
        jne    L_ef80
L_ef3c:
        cmp    edi, 0x16
        jge    L_ef80
        push    edi
        push    eax
        mov    dword ptr [esi + 0x844cc0], edi
        call    FUN_006efe10
        add    esp, 8
        lea    ecx, [esp + 0x1c]
        push    ecx
        mov    ebp, eax
        mov    eax, dword ptr [g_00848c6c]
        push    1
        push    0
        inc    edi
        lea    esi, [eax*4]
        call    FUN_005240b0
        mov    ecx, dword ptr [g_00848c6c]
        mov    dword ptr [esi + 0x844b30], eax
        mov    eax, dword ptr [esp + 0x10]
        jmp    L_ef2e
L_ef80:
        lea    esi, [ecx*4]
        mov    edx, dword ptr [esi + 0x844b30]
        test    edx, edx
        jne    L_efb1
        call    FUN_006f0770
        mov    ecx, dword ptr [g_00848c6c]
        mov    eax, dword ptr [esp + 0x10]
        lea    esi, [ecx*4]
        mov    dword ptr [esi + 0x844cc0], 1
L_efb1:
        mov    edx, dword ptr [esi + 0x844cc0]
        mov    dword ptr [eax*4 + 0x842b10], edx
        jmp    L_efcc
L_efc0:
        mov    dword ptr [esi + 0x844cc0], edx
        jmp    L_efcc
L_efc8:
        mov    eax, dword ptr [esp + 0x10]
L_efcc:
        mov    edx, dword ptr [esp + 0x30]
        mov    edi, 1
        cmp    edx, edi
        jne    L_f01d
        lea    ecx, [esp + 0x44]
        push    ecx
        push    edi
        lea    eax, [esp + 0x48]
        push    0
        mov    dword ptr [esp + 0x4c], 0x34
        mov    dword ptr [esp + 0x50], eax
        call    FUN_00512ff0
        mov    ecx, dword ptr [g_00848c6c]
        lea    esi, [ecx*4]
        cmp    dword ptr [esi + 0x844bf8], eax
        jl    L_f019
        mov    eax, dword ptr [esi + 0x844cc0]
        test    eax, eax
        je    L_f019
        mov    dword ptr [esp + 0x2c], edi
L_f019:
        mov    eax, dword ptr [esp + 0x10]
L_f01d:
        mov    edx, dword ptr [esi + 0x844b30]
        mov    dword ptr [eax*4 + 0x842310], ecx
        mov    eax, dword ptr [esp + 0x34]
        shl    ecx, 8
        add    ecx, 0x842f74
        push    ecx
        mov    ecx, dword ptr [esi + 0x844cc0]
        mov    dword ptr [esi + 0x844b94], edx
        mov    edx, dword ptr [g_00848c7c]
        mov    dword ptr [esi + 0x8449a0], eax
        mov    eax, dword ptr [edx + ecx*4]
        push    eax
        call    FUN_006f0ab0
        mov    ecx, dword ptr [esp + 0x18]
        mov    edx, dword ptr [esp + 0x44]
        imul    ecx, ecx, 0x22ac
        mov    esi, dword ptr [g_00848ca0]
        lea    eax, [ecx + edx]
        mov    ecx, dword ptr [g_00848c6c]
        mov    edx, dword ptr [eax + 0x207fc4]
        mov    eax, dword ptr [eax + 0x207fc8]
        add    esp, 8
        mov    dword ptr [ecx*4 + 0x8448d8], edx
        mov    edx, dword ptr [ebx*4 + 0x8422ec]
        inc    esi
        inc    edx
        mov    dword ptr [ecx*4 + 0x844874], eax
        inc    ecx
        mov    dword ptr [g_00848ca0], esi
        mov    dword ptr [ebx*4 + 0x8422ec], edx
        mov    dword ptr [g_00848c6c], ecx
        xor    esi, esi
L_f0b2:
        mov    eax, dword ptr [esp + 0x10]
        inc    eax
        cmp    eax, 0x18
        mov    dword ptr [esp + 0x10], eax
        jl    L_ed7d
        cmp    dword ptr [g_00848ca4], esi
        jne    L_f1ab
        cmp    dword ptr [g_00848ca8], esi
        je    L_f1ab
        mov    ecx, dword ptr [g_00848ca0]
        cmp    ecx, dword ptr [g_00848c9c]
        jle    L_f1ab
        xor    eax, eax
        lea    ecx, [esp + 0x4c]
L_f0f4:
        mov    dword ptr [ecx], eax
        inc    eax
        add    ecx, 4
        cmp    eax, 0x18
        jl    L_f0f4
        mov    edi, dword ptr [g_0076b414]
        mov    dword ptr [esp + 0x10], esi
L_f109:
        call    edi
        cdq    
        mov    ecx, 0x18
        idiv    ecx
        mov    esi, edx
        call    edi
        cdq    
        mov    ecx, 0x18
        idiv    ecx
        lea    eax, [esp + esi*4 + 0x4c]
        mov    esi, dword ptr [eax]
        lea    ecx, [esp + edx*4 + 0x4c]
        mov    edx, dword ptr [ecx]
        mov    dword ptr [eax], edx
        mov    eax, dword ptr [esp + 0x10]
        inc    eax
        cmp    eax, 8
        mov    dword ptr [ecx], esi
        mov    dword ptr [esp + 0x10], eax
        jl    L_f109
        xor    eax, eax
        mov    dword ptr [esp + 0x10], eax
L_f143:
        mov    ecx, dword ptr [g_00848ca8]
        test    ecx, ecx
        je    L_f1a9
        mov    ecx, dword ptr [g_00848ca0]
        cmp    ecx, dword ptr [g_00848c9c]
        jle    L_f1a9
        lea    edx, [esp + eax*4 + 0x4c]
        lea    eax, [esp + 0x1c]
        push    eax
        push    1
        push    0
        mov    dword ptr [esp + 0x28], edx
        call    FUN_00523e80
        test    eax, eax
        je    L_f19b
        lea    ecx, [esp + 0x1c]
        push    ecx
        push    1
        push    0
        call    FUN_00523ba0
        mov    ecx, dword ptr [g_00848ca0]
        mov    eax, dword ptr [g_00848c6c]
        dec    ecx
        dec    eax
        mov    dword ptr [g_00848ca0], ecx
        mov    dword ptr [g_00848c6c], eax
L_f19b:
        mov    eax, dword ptr [esp + 0x10]
        inc    eax
        cmp    eax, 0x18
        mov    dword ptr [esp + 0x10], eax
        jl    L_f143
L_f1a9:
        xor    esi, esi
L_f1ab:
        mov    dword ptr [esp + 0x10], esi
        mov    edi, 1
L_f1b4:
        lea    eax, [esp + 0x1c]
        push    eax
        push    edi
        lea    edx, [esp + 0x18]
        push    esi
        mov    dword ptr [esp + 0x28], edx
        call    FUN_00523e80
        test    eax, eax
        je    L_f1fa
        lea    ecx, [esp + 0x1c]
        push    ecx
        push    edi
        push    esi
        call    FUN_005240b0
        mov    edx, dword ptr [esp + 0x10]
        mov    ecx, dword ptr [edx*4 + 0x842310]
        shl    ecx, 2
        cmp    eax, esi
        mov    dword ptr [ecx + 0x844b30], eax
        mov    dword ptr [ecx + 0x844b94], eax
        jne    L_f1fa
        mov    dword ptr [esp + 0x2c], edi
L_f1fa:
        mov    eax, dword ptr [esp + 0x10]
        inc    eax
        cmp    eax, 0x18
        mov    dword ptr [esp + 0x10], eax
        jl    L_f1b4
        cmp    dword ptr [esp + 0x2c], esi
        jne    L_f21d
        cmp    dword ptr [g_00848ca4], esi
        jne    L_f21d
        mov    eax, 5
        jmp    L_f21f
L_f21d:
        xor    eax, eax
L_f21f:
        mov    esi, dword ptr [esp + 0xb0]
        mov    ebp, dword ptr [g_0076b5a4]
        push    eax
        push    0x40e
        push    esi
        call    ebp
        mov    edi, dword ptr [g_0076b568]
        push    eax
        call    edi
        mov    eax, dword ptr [g_00848ca4]
        neg    eax
        sbb    eax, eax
        and    eax, 5
        push    eax
        push    0x40c
        push    esi
        call    ebp
        push    eax
        call    edi
        mov    eax, dword ptr [esp + 0x2c]
        neg    eax
        sbb    eax, eax
        and    eax, 5
        push    eax
        push    0x497
        push    esi
        call    ebp
        push    eax
        call    edi
        mov    edi, dword ptr [g_007b6a48]
        lea    ecx, [esp + 0x14]
        push    ecx
        push    1
        push    0
        mov    dword ptr [esp + 0x34], 0x32
        call    FUN_00512ff0
        cmp    eax, 1
        jne    L_f2a5
        lea    edx, [esp + 0x14]
        push    edx
        push    eax
        push    0
        mov    dword ptr [esp + 0x34], 0x21
        call    FUN_00512ff0
        mov    edi, eax
L_f2a5:
        test    edi, edi
        jl    L_f2ae
        cmp    edi, 3
        jle    L_f2bd
L_f2ae:
        cmp    edi, 6
        jl    L_f2b8
        cmp    edi, 9
        jle    L_f2bd
L_f2b8:
        cmp    edi, 0x12
        jl    L_f2da
L_f2bd:
        mov    eax, dword ptr [g_00848ca0]
        cmp    eax, dword ptr [g_00848c9c]
        jge    L_f2da
        mov    eax, dword ptr [g_00848ca4]
        test    eax, eax
        jne    L_f2da
        mov    eax, 1
        jmp    L_f2dc
L_f2da:
        xor    eax, eax
L_f2dc:
        push    eax
        push    0x40a
        push    esi
        call    ebp
        push    eax
        call    dword ptr [g_0076b544]
        mov    ecx, dword ptr [esp + 0x30]
        push    ecx
        push    esi
        call    FUN_006efa10
        push    esi
        call    FUN_006ef320
        add    esp, 0xc
        pop    edi
        pop    esi
        pop    ebp
        mov    byte ptr [g_00848d78], 0
        pop    ebx
L_f30b:
        add    esp, 0x9c
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
        sub    esp, 0x440
        mov    eax, dword ptr [g_00848c98]
        mov    ecx, dword ptr [g_00848ca0]
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    eax
        push    ecx
        lea    edx, [esp + 0x4c]
        push    0x78c174
        push    edx
        call    dword ptr [g_0076b420]
        mov    esi, dword ptr [esp + 0x464]
        mov    edi, dword ptr [g_0076b5a4]
        add    esp, 0x10
        lea    eax, [esp + 0x44]
        push    eax
        push    0x4c7
        push    esi
        call    edi
        push    eax
        call    dword ptr [g_0076b51c]
        lea    eax, [esp + 0x3c]
        push    eax
        push    1
        lea    ecx, [esp + 0x40]
        lea    edx, [esp + 0x54]
        push    0
        mov    dword ptr [esp + 0x48], ecx
        mov    dword ptr [esp + 0x4c], edx
        mov    dword ptr [esp + 0x44], 0x2f
        call    FUN_00512ff0
        mov    ebx, eax
        xor    ecx, ecx
        cmp    ebx, 1
        sete    cl
        mov    dword ptr [esp + 0x18], ebx
        push    ecx
        push    0x4c9
        push    esi
        call    edi
        mov    ebp, dword ptr [g_0076b568]
        push    eax
        call    ebp
        xor    edx, edx
        cmp    ebx, 1
        setne    dl
        push    edx
        push    0x4c8
        push    esi
        call    edi
        push    eax
        call    ebp
        push    0x422
        push    esi
        call    edi
        mov    ebx, dword ptr [g_0076b560]
        push    0
        push    0
        mov    esi, eax
        push    0x184
        push    esi
        call    ebx
        mov    eax, dword ptr [g_00848c6c]
        xor    edi, edi
        test    eax, eax
        jle    L_f40b
        mov    ebp, 0x8449a0
L_f3f1:
        mov    eax, dword ptr [ebp]
        push    eax
        push    edi
        push    0x181
        push    esi
        call    ebx
        mov    eax, dword ptr [g_00848c6c]
        inc    edi
        add    ebp, 4
        cmp    edi, eax
        jl    L_f3f1
L_f40b:
        mov    edi, eax
        cmp    edi, 0x18
        jge    L_f42b
L_f412:
        push    0x76cb8c
        push    edi
        push    0x181
        push    esi
        call    ebx
        inc    edi
        cmp    edi, 0x18
        jl    L_f412
        mov    eax, dword ptr [g_00848c6c]
L_f42b:
        test    eax, eax
        jle    L_f4a7
        mov    edi, 0x18
        mov    dword ptr [esp + 0x10], 0x842f74
        xor    ebp, ebp
L_f43e:
        mov    eax, dword ptr [ebp + 0x844acc]
        test    eax, eax
        jne    L_f45a
        mov    ecx, dword ptr [ebp + 0x844cc0]
        shl    ecx, 8
        add    ecx, 0x845e24
        push    ecx
        jmp    L_f480
L_f45a:
        mov    eax, dword ptr [ebp + 0x844cc0]
        mov    edx, dword ptr [g_00848c80]
        shl    eax, 2
        cmp    dword ptr [eax + edx], 0
        je    L_f47b
        mov    ecx, dword ptr [g_00848c7c]
        mov    edx, dword ptr [eax + ecx]
        push    edx
        jmp    L_f480
L_f47b:
        mov    eax, dword ptr [esp + 0x10]
        push    eax
L_f480:
        push    edi
        push    0x181
        push    esi
        call    ebx
        mov    ecx, dword ptr [esp + 0x10]
        mov    eax, dword ptr [g_00848c6c]
        add    ecx, 0x100
        add    ebp, 4
        inc    edi
        mov    dword ptr [esp + 0x10], ecx
        lea    ecx, [edi - 0x18]
        cmp    ecx, eax
        jl    L_f43e
L_f4a7:
        cmp    eax, 0x18
        jge    L_f4c8
        lea    edi, [eax + 0x18]
L_f4af:
        push    0x76cb8c
        push    edi
        push    0x181
        push    esi
        call    ebx
        inc    edi
        cmp    edi, 0x30
        jl    L_f4af
        mov    eax, dword ptr [g_00848c6c]
L_f4c8:
        test    eax, eax
        jle    L_f573
        xor    edi, edi
        mov    ebp, 0x30
        mov    dword ptr [esp + 0x10], 0x842f74
        mov    dword ptr [esp + 0x14], edi
L_f4e3:
        mov    eax, dword ptr [edi + 0x844acc]
        test    eax, eax
        je    L_f53f
        mov    edx, dword ptr [edi + 0x844cc0]
        mov    eax, dword ptr [g_00848c80]
        shl    edx, 2
        cmp    dword ptr [edx + eax], 0
        je    L_f515
        mov    ecx, dword ptr [g_00841768]
        push    0x692
        push    ecx
        call    FUN_0072d830
        push    eax
        jmp    L_f544
L_f515:
        mov    edi, dword ptr [esp + 0x10]
        xor    eax, eax
        or    ecx, 0xffffffff
        repne scasb
        mov    eax, dword ptr [g_00848c7c]
        mov    edx, dword ptr [edx + eax]
        not    ecx
        dec    ecx
        lea    eax, [ecx + edx + 1]
        push    eax
        push    ebp
        push    0x181
        push    esi
        call    ebx
        mov    edi, dword ptr [esp + 0x14]
        jmp    L_f54d
L_f53f:
        push    0x76b768
L_f544:
        push    ebp
        push    0x181
        push    esi
        call    ebx
L_f54d:
        mov    edx, dword ptr [esp + 0x10]
        mov    eax, dword ptr [g_00848c6c]
        add    edx, 0x100
        add    edi, 4
        inc    ebp
        lea    ecx, [ebp - 0x30]
        cmp    ecx, eax
        mov    dword ptr [esp + 0x10], edx
        mov    dword ptr [esp + 0x14], edi
        jl    L_f4e3
L_f573:
        cmp    eax, 0x18
        jge    L_f594
        lea    edi, [eax + 0x30]
L_f57b:
        push    0x76cb8c
        push    edi
        push    0x181
        push    esi
        call    ebx
        inc    edi
        cmp    edi, 0x48
        jl    L_f57b
        mov    eax, dword ptr [g_00848c6c]
L_f594:
        xor    edi, edi
        test    eax, eax
        jle    L_f5d9
        mov    ebp, 0x8448d8
L_f59f:
        fld    dword ptr [ebp]
        sub    esp, 8
        fstp    qword ptr [esp]
        lea    edx, [esp + 0x24]
        push    0x79f630
        push    edx
        call    dword ptr [g_0076b420]
        add    esp, 0x10
        lea    eax, [esp + 0x1c]
        push    eax
        lea    ecx, [edi + 0x48]
        push    ecx
        push    0x181
        push    esi
        call    ebx
        mov    eax, dword ptr [g_00848c6c]
        inc    edi
        add    ebp, 4
        cmp    edi, eax
        jl    L_f59f
L_f5d9:
        cmp    eax, 0x18
        jge    L_f5fa
        lea    edi, [eax + 0x48]
L_f5e1:
        push    0x76cb8c
        push    edi
        push    0x181
        push    esi
        call    ebx
        inc    edi
        cmp    edi, 0x60
        jl    L_f5e1
        mov    eax, dword ptr [g_00848c6c]
L_f5fa:
        xor    edi, edi
        test    eax, eax
        jle    L_f645
        mov    ebp, 0x844874
L_f605:
        fild    dword ptr [ebp]
        sub    esp, 8
        lea    edx, [esp + 0x24]
        fmul    dword ptr [g_0079f62c]
        fstp    qword ptr [esp]
        push    0x79f624
        push    edx
        call    dword ptr [g_0076b420]
        add    esp, 0x10
        lea    eax, [esp + 0x1c]
        push    eax
        lea    ecx, [edi + 0x60]
        push    ecx
        push    0x181
        push    esi
        call    ebx
        mov    eax, dword ptr [g_00848c6c]
        inc    edi
        add    ebp, 4
        cmp    edi, eax
        jl    L_f605
L_f645:
        cmp    eax, 0x18
        jge    L_f666
        lea    edi, [eax + 0x60]
L_f64d:
        push    0x76cb8c
        push    edi
        push    0x181
        push    esi
        call    ebx
        inc    edi
        cmp    edi, 0x78
        jl    L_f64d
        mov    eax, dword ptr [g_00848c6c]
L_f666:
        xor    ebp, ebp
        test    eax, eax
        mov    dword ptr [esp + 0x14], ebp
        jle    L_f7de
L_f674:
        cmp    dword ptr [esp + 0x18], 1
        mov    dword ptr [esp + 0x10], 0
        lea    edi, [ebp*4]
        jne    L_f699
        mov    edx, dword ptr [edi + 0x844bf8]
        lea    eax, [edx*8 + 0x848c24]
        jmp    L_f6b4
L_f699:
        mov    edx, dword ptr [edi + 0x844c5c]
        push    0xa
        lea    ecx, [esp + 0x38]
        push    ecx
        push    edx
        call    dword ptr [g_0076b2d4]
        add    esp, 0xc
        lea    eax, [esp + 0x34]
L_f6b4:
        push    eax
        lea    ecx, [esp + 0x14]
        call    FUN_00412780
        mov    eax, dword ptr [edi + 0x844acc]
        test    eax, eax
        je    L_f7a0
        push    0x79f61c
        lea    ecx, [esp + 0x20]
        call    FUN_00412570
        mov    edx, dword ptr [edi + 0x84493c]
        or    ecx, 0xffffffff
        mov    ebp, eax
        mov    edi, edx
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        mov    cl, byte ptr [ecx + edx - 1]
        mov    edx, dword ptr [ebp]
        push    ecx
        push    edx
        lea    ecx, [esp + 0x30]
        call    FUN_00412670
        mov    eax, dword ptr [esp + 0x28]
        push    0x77e7d8
        push    eax
        lea    ecx, [esp + 0x34]
        call    FUN_004125e0
        mov    ecx, dword ptr [esp + 0x2c]
        mov    edx, dword ptr [esp + 0x10]
        push    ecx
        push    edx
        lea    ecx, [esp + 0x38]
        call    FUN_004125e0
        push    eax
        lea    ecx, [esp + 0x14]
        call    FUN_00412740
        mov    eax, dword ptr [esp + 0x30]
        test    eax, eax
        je    L_f74b
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_f74b
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_f74b:
        mov    eax, dword ptr [esp + 0x2c]
        test    eax, eax
        je    L_f766
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_f766
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_f766:
        mov    eax, dword ptr [esp + 0x28]
        test    eax, eax
        je    L_f781
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_f781
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_f781:
        mov    eax, dword ptr [esp + 0x1c]
        test    eax, eax
        je    L_f79c
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_f79c
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_f79c:
        mov    ebp, dword ptr [esp + 0x14]
L_f7a0:
        mov    eax, dword ptr [esp + 0x10]
        push    eax
        lea    ecx, [ebp + 0x78]
        push    ecx
        push    0x181
        push    esi
        call    ebx
        mov    eax, dword ptr [esp + 0x10]
        test    eax, eax
        je    L_f7cc
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_f7cc
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_f7cc:
        mov    eax, dword ptr [g_00848c6c]
        inc    ebp
        cmp    ebp, eax
        mov    dword ptr [esp + 0x14], ebp
        jl    L_f674
L_f7de:
        cmp    eax, 0x18
        jge    L_f7fd
        lea    edi, [eax + 0x78]
L_f7e6:
        push    0x76cb8c
        push    edi
        push    0x181
        push    esi
        call    ebx
        inc    edi
        cmp    edi, 0x90
        jl    L_f7e6
L_f7fd:
        mov    eax, dword ptr [g_007b82b4]
        mov    edi, dword ptr [g_0076b574]
        push    0x100
        lea    edx, [esp + 0x54]
        push    edx
        push    1
        push    eax
        call    edi
        mov    edx, dword ptr [g_007b82b4]
        push    0x100
        lea    ecx, [esp + 0x154]
        push    ecx
        push    2
        push    edx
        call    edi
        mov    ecx, dword ptr [g_007b82b4]
        push    0x100
        lea    eax, [esp + 0x254]
        push    eax
        push    3
        push    ecx
        call    edi
        mov    eax, dword ptr [g_00848c6c]
        xor    edi, edi
        test    eax, eax
        jle    L_f935
        mov    ebp, dword ptr [g_0076b420]
L_f85c:
        mov    eax, dword ptr [edi*4 + 0x844b94]
        sub    eax, 0
        mov    dword ptr [esp + 0x10], 0
        je    L_f887
        dec    eax
        je    L_f880
        dec    eax
        jne    L_f898
        lea    edx, [esp + 0x250]
        push    edx
        jmp    L_f88f
L_f880:
        lea    eax, [esp + 0x50]
        push    eax
        jmp    L_f88f
L_f887:
        lea    ecx, [esp + 0x150]
        push    ecx
L_f88f:
        lea    ecx, [esp + 0x14]
        call    FUN_00412780
L_f898:
        mov    eax, dword ptr [edi*4 + 0x844acc]
        test    eax, eax
        jne    L_f8f8
        mov    edx, dword ptr [edi*4 + 0x842f10]
        push    edx
        lea    eax, [esp + 0x354]
        push    0x79f618
        push    eax
        call    ebp
        mov    edx, dword ptr [esp + 0x1c]
        add    esp, 0xc
        lea    ecx, [esp + 0x350]
        push    ecx
        push    edx
        lea    ecx, [esp + 0x24]
        call    FUN_004125e0
        push    eax
        lea    ecx, [esp + 0x14]
        call    FUN_00412740
        mov    eax, dword ptr [esp + 0x1c]
        test    eax, eax
        je    L_f8f8
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_f8f8
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_f8f8:
        mov    eax, dword ptr [esp + 0x10]
        push    eax
        lea    ecx, [edi + 0x90]
        push    ecx
        push    0x181
        push    esi
        call    ebx
        mov    eax, dword ptr [esp + 0x10]
        test    eax, eax
        je    L_f927
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_f927
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_f927:
        mov    eax, dword ptr [g_00848c6c]
        inc    edi
        cmp    edi, eax
        jl    L_f85c
L_f935:
        mov    ebp, dword ptr [esp + 0x454]
        xor    edi, edi
        mov    ebx, 0x844acc
L_f943:
        cmp    edi, dword ptr [g_00848c6c]
        jge    L_f957
        cmp    dword ptr [ebx], 0
        je    L_f957
        mov    eax, 5
        jmp    L_f959
L_f957:
        xor    eax, eax
L_f959:
        lea    esi, [edi + 0x49b]
        push    eax
        lea    edx, [esi - 0x72]
        push    edx
        push    ebp
        call    dword ptr [g_0076b5a4]
        push    eax
        call    dword ptr [g_0076b568]
        cmp    edi, dword ptr [g_00848c6c]
        jge    L_f98e
        mov    eax, dword ptr [esp + 0x18]
        test    eax, eax
        je    L_f98e
        cmp    dword ptr [ebx], 0
        je    L_f98e
        mov    eax, 5
        jmp    L_f990
L_f98e:
        xor    eax, eax
L_f990:
        push    eax
        push    esi
        push    ebp
        call    dword ptr [g_0076b5a4]
        push    eax
        call    dword ptr [g_0076b568]
        add    ebx, 4
        inc    edi
        cmp    ebx, 0x844b2c
        jl    L_f943
        mov    edx, dword ptr [g_00848c6c]
        mov    esi, dword ptr [g_0076b5a4]
        xor    eax, eax
        test    edx, edx
        setle    al
        dec    eax
        and    eax, 5
        push    eax
        push    0x4d1
        push    ebp
        call    esi
        mov    edi, dword ptr [g_0076b568]
        push    eax
        call    edi
        mov    eax, dword ptr [g_00848c6c]
        test    eax, eax
        jle    L_f9ed
        mov    eax, dword ptr [esp + 0x18]
        test    eax, eax
        je    L_f9ed
        mov    eax, 5
        jmp    L_f9ef
L_f9ed:
        xor    eax, eax
L_f9ef:
        push    eax
        push    0x4d2
        push    ebp
        call    esi
        push    eax
        call    edi
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x440
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
        sub    esp, 0x38
        push    ebx
        mov    ebx, dword ptr [esp + 0x44]
        push    ebp
        push    esi
        mov    esi, dword ptr [esp + 0x48]
        neg    ebx
        push    edi
        mov    edi, dword ptr [g_0076b5a4]
        sbb    ebx, ebx
        and    ebx, 5
        push    ebx
        push    0x4c4
        push    esi
        call    edi
        mov    ebp, dword ptr [g_0076b568]
        push    eax
        call    ebp
        push    ebx
        push    0x499
        push    esi
        call    edi
        push    eax
        call    ebp
        push    ebx
        push    0x4c1
        push    esi
        call    edi
        push    eax
        call    ebp
        push    ebx
        push    0x4b4
        push    esi
        call    edi
        push    eax
        call    ebp
        push    ebx
        push    0x4c5
        push    esi
        call    edi
        push    eax
        call    ebp
        push    ebx
        push    0x4c6
        push    esi
        call    edi
        push    eax
        call    ebp
        push    ebx
        push    0x420
        push    esi
        call    edi
        push    eax
        call    ebp
        push    ebx
        push    0x4cc
        push    esi
        call    edi
        push    eax
        call    ebp
        push    ebx
        push    0x4c2
        push    esi
        call    edi
        push    eax
        call    ebp
        push    ebx
        push    0x4c3
        push    esi
        call    edi
        push    eax
        call    ebp
        push    ebx
        push    0x4d3
        push    esi
        call    edi
        push    eax
        call    ebp
        push    ebx
        push    0x4b5
        push    esi
        call    edi
        push    eax
        call    ebp
        push    ebx
        push    0x4ce
        push    esi
        call    edi
        push    eax
        call    ebp
        push    ebx
        push    0x4cf
        push    esi
        call    edi
        push    eax
        call    ebp
        push    ebx
        push    0x4d0
        push    esi
        call    edi
        push    eax
        call    ebp
        push    ebx
        push    0x423
        push    esi
        call    edi
        push    eax
        call    ebp
        push    ebx
        push    0x4cd
        push    esi
        call    edi
        push    eax
        call    ebp
        push    ebx
        push    0x4da
        push    esi
        call    edi
        push    eax
        call    ebp
        mov    ebx, dword ptr [esp + 0x50]
        neg    ebx
        sbb    ebx, ebx
        and    ebx, 0xfffffffb
        add    ebx, 5
        push    ebx
        push    0x41c
        push    esi
        call    edi
        push    eax
        call    ebp
        push    ebx
        push    0x4d4
        push    esi
        call    edi
        push    eax
        call    ebp
        push    ebx
        push    0x4d9
        push    esi
        call    edi
        push    eax
        call    ebp
        push    ebx
        push    0x421
        push    esi
        call    edi
        push    eax
        call    ebp
        cmp    dword ptr [esp + 0x50], 1
        jne    L_fdf0
        push    0
        push    0
        push    0x147
        push    0x4c4
        push    esi
        call    edi
        mov    ebp, dword ptr [g_0076b560]
        push    eax
        call    ebp
        push    0
        push    0
        push    0x146
        push    0x4c4
        mov    ebx, eax
        push    esi
        mov    dword ptr [esp + 0x64], ebx
        call    edi
        push    eax
        call    ebp
        dec    eax
        cmp    ebx, eax
        je    L_fc1c
        mov    eax, dword ptr [g_007dab44]
        mov    edx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax]
        xor    ecx, edx
        mov    ebx, dword ptr [ecx + 0xc]
        mov    edx, dword ptr [esp + 0x50]
        xor    ebx, 0x85739531
        push    edx
        mov    ecx, ebx
        call    FUN_005404a0
        sub    esp, 8
        fstp    qword ptr [esp]
        lea    eax, [esp + 0x40]
        push    0x79f630
        push    eax
        call    dword ptr [g_0076b420]
        add    esp, 0x10
        lea    ecx, [esp + 0x38]
        push    ecx
        push    0x4cc
        push    esi
        call    dword ptr [g_0076b528]
        mov    edx, dword ptr [esp + 0x50]
        push    edx
        mov    ecx, ebx
        call    FUN_00540530
        fmul    dword ptr [g_0079f62c]
        sub    esp, 8
        lea    eax, [esp + 0x40]
        fstp    qword ptr [esp]
        push    0x79f624
        push    eax
        call    dword ptr [g_0076b420]
        add    esp, 0x10
        lea    ecx, [esp + 0x38]
        push    ecx
        push    0x4cd
        push    esi
        call    dword ptr [g_0076b528]
        jmp    L_fc3c
L_fc1c:
        mov    ebx, dword ptr [g_0076b528]
        push    0x76b768
        push    0x4cc
        push    esi
        call    ebx
        push    0x76b768
        push    0x4cd
        push    esi
        call    ebx
L_fc3c:
        lea    ecx, [esp + 0x24]
        push    ecx
        mov    ebx, 1
        push    ebx
        lea    edx, [esp + 0x18]
        lea    eax, [esp + 0x28]
        push    0
        mov    dword ptr [esp + 0x1c], 0x34
        mov    dword ptr [esp + 0x30], edx
        mov    dword ptr [esp + 0x34], eax
        call    FUN_00512ff0
        cmp    eax, dword ptr [g_00848c78]
        mov    dword ptr [esp + 0x4c], eax
        je    L_fd8a
        push    0
        push    0
        push    0x14b
        push    0x499
        push    esi
        call    edi
        push    eax
        call    ebp
        push    0
        push    0
        push    0x14b
        push    0x4c4
        push    esi
        call    edi
        push    eax
        call    ebp
        mov    eax, dword ptr [esp + 0x4c]
        xor    ebx, ebx
        test    eax, eax
        jle    L_fd05
        mov    dword ptr [esp + 0x50], 0x848c24
L_fcb0:
        mov    eax, dword ptr [g_00848d6c]
        push    0
        lea    edx, [ebx + 0x8006]
        push    edx
        push    eax
        call    dword ptr [g_0076b4fc]
        mov    ecx, dword ptr [esp + 0x50]
        push    ecx
        push    ebx
        push    0x14a
        push    0x499
        push    esi
        call    edi
        push    eax
        call    ebp
        mov    edx, dword ptr [esp + 0x50]
        push    edx
        push    ebx
        push    0x14a
        push    0x4c4
        push    esi
        call    edi
        push    eax
        call    ebp
        mov    ecx, dword ptr [esp + 0x50]
        mov    eax, dword ptr [esp + 0x4c]
        inc    ebx
        add    ecx, 8
        cmp    ebx, eax
        mov    dword ptr [esp + 0x50], ecx
        jl    L_fcb0
L_fd05:
        push    0
        push    0
        push    0x14e
        push    0x499
        push    esi
        call    edi
        push    eax
        call    ebp
        mov    eax, dword ptr [g_00841768]
        push    0x646
        push    eax
        call    FUN_0072d830
        push    eax
        push    ebx
        push    0x14a
        push    0x4c4
        push    esi
        call    edi
        push    eax
        call    ebp
        push    0
        push    0
        push    0x14e
        push    0x4c4
        push    esi
        call    edi
        push    eax
        call    ebp
        push    esi
        call    FUN_006efe60
        mov    edi, dword ptr [esp + 0x50]
        add    esp, 4
        cmp    edi, 8
        mov    esi, edi
        jge    L_fd7f
L_fd63:
        mov    edx, dword ptr [g_00848d6c]
        push    1
        lea    ecx, [esi + 0x8006]
        push    ecx
        push    edx
        call    dword ptr [g_0076b4fc]
        inc    esi
        cmp    esi, 8
        jl    L_fd63
L_fd7f:
        mov    dword ptr [g_00848c78], edi
        mov    ebx, 1
L_fd8a:
        lea    eax, [esp + 0x14]
        lea    ecx, [esp + 0x1c]
        lea    edx, [esp + 0x18]
        xor    edi, edi
        mov    dword ptr [esp + 0x14], 0x30
        mov    dword ptr [esp + 0x18], ebx
        mov    dword ptr [esp + 0x2c], eax
        mov    dword ptr [esp + 0x30], ecx
        mov    dword ptr [esp + 0x34], edx
        xor    esi, esi
L_fdb2:
        lea    eax, [esp + 0x2c]
        push    eax
        push    3
        push    edi
        mov    dword ptr [esp + 0x28], esi
        call    FUN_00512ff0
        cmp    dword ptr [esi*4 + 0x8422ec], eax
        jl    L_fdd5
        mov    dword ptr [esi*4 + 0x8422c8], edi
        jmp    L_fddc
L_fdd5:
        mov    dword ptr [esi*4 + 0x8422c8], ebx
L_fddc:
        inc    esi
        cmp    esi, 8
        jl    L_fdb2
        pop    edi
        pop    esi
        pop    ebp
        mov    dword ptr [g_008422e8], ebx
        pop    ebx
        add    esp, 0x38
        ret    
L_fdf0:
        pop    edi
        pop    esi
        pop    ebp
        mov    dword ptr [g_00848c78], 0
        pop    ebx
        add    esp, 0x38
        ret    
    }
}
