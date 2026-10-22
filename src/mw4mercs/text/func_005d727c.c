/*
 * FUN_005d727c (extent 0x5d727c-0x5d785b) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b2e0;
extern float  g_0076d598;
extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007f23e0;
extern int    g_007f23e4;
extern int    g_007f23e8;
extern int    g_007f23ec;
extern int    g_007f23f0;
extern int    g_007f2464;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_004128e0(void);
extern void __cdecl FUN_00412950(void);
extern void __cdecl FUN_004129c0(void);
extern void __cdecl FUN_004d5b10(void);
extern void __cdecl FUN_004e27f0(void);
extern void __cdecl FUN_005cb210(void);
extern void __cdecl FUN_005d69d0(void);
extern void __cdecl FUN_005d6b10(void);
extern void __cdecl FUN_005d6bf0(void);
extern void __cdecl FUN_005d9f70(void);
extern void __cdecl FUN_005d9f90(void);
extern void __cdecl FUN_005da360(void);
extern void __cdecl FUN_005da5d0(void);
extern void __cdecl FUN_005da6d0(void);
extern void __cdecl FUN_00657700(void);
extern void __cdecl FUN_00657ed0(void);
extern void __cdecl FUN_0068cc50(void);
extern void __cdecl FUN_0068f020(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_005d727c(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    edi
        mov    esi, 0x7f23f4
        mov    edi, 5
L_728c:
        mov    eax, dword ptr [esi - 4]
        sub    esi, 4
        test    eax, eax
        je    L_72a9
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_72a9
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_72a9:
        dec    edi
        jne    L_728c
        pop    edi
        pop    esi
        ret    
        nop    
        sub    esp, 0x28
        mov    eax, dword ptr [esp + 0x2c]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov    ebx, ecx
        push    eax
        mov    dword ptr [esp + 0x14], ebx
        call    FUN_004d5b10
        lea    edx, [esp + 0x3c]
        lea    ecx, [ebx + 0x10]
        push    edx
        call    FUN_005d9f70
        lea    eax, [esp + 0x3c]
        lea    ecx, [ebx + 0x1c]
        push    eax
        call    FUN_005d9f90
        lea    ecx, [esp + 0x3c]
        lea    esi, [ebx + 0x28]
        push    ecx
        mov    ecx, esi
        call    FUN_005cb210
        mov    edx, dword ptr [g_007f2464]
        push    edx
        mov    dword ptr [ebx], 0x788198
        call    FUN_006f4950
        mov    edi, dword ptr [esp + 0x40]
        mov    eax, dword ptr [edi]
        xor    ebp, ebp
        push    4
        lea    ecx, [esp + 0x20]
        push    ecx
        mov    ecx, edi
        mov    dword ptr [ebx + 0x48], ebp
        mov    dword ptr [ebx + 0x38], ebp
        mov    dword ptr [ebx + 0x3c], ebp
        mov    dword ptr [ebx + 0x40], ebp
        mov    dword ptr [ebx + 0x44], ebp
        mov    dword ptr [ebx + 0x50], 0x3f800000
        call    dword ptr [eax + 0x20]
        mov    eax, dword ptr [esp + 0x1c]
        cmp    eax, ebp
        jne    L_7355
        lea    edx, [esp + 0x20]
        push    edx
        mov    dword ptr [esp + 0x24], 0xbf800000
        mov    dword ptr [esp + 0x28], 0xbf800000
        mov    dword ptr [esp + 0x2c], 0xbf800000
        push    0xa
        jmp    L_7373
L_7355:
        lea    ecx, [esp + 0x20]
        push    ecx
        mov    dword ptr [esp + 0x24], 0xbf800000
        mov    dword ptr [esp + 0x28], 0xbf800000
        mov    dword ptr [esp + 0x2c], 0xbf800000
        push    eax
L_7373:
        mov    ecx, esi
        call    FUN_005da360
        mov    eax, dword ptr [esp + 0x1c]
        xor    ebp, ebp
        test    eax, eax
        jle    L_73ac
        mov    esi, dword ptr [esi]
L_7386:
        mov    edx, dword ptr [edi]
        push    0xc
        lea    eax, [esp + 0x30]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
        lea    ecx, [esp + 0x2c]
        push    ecx
        mov    ecx, esi
        call    FUN_0040c410
        mov    eax, dword ptr [esp + 0x1c]
        inc    ebp
        add    esi, 0xc
        cmp    ebp, eax
        jl    L_7386
L_73ac:
        mov    edx, dword ptr [edi]
        push    4
        lea    eax, [esp + 0x18]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
        mov    eax, dword ptr [esp + 0x14]
        xor    ecx, ecx
        cmp    eax, ecx
        jne    L_73d1
        mov    dword ptr [esp + 0x3c], ecx
        lea    ecx, [esp + 0x3c]
        push    ecx
        push    0xa
        jmp    L_73db
L_73d1:
        lea    edx, [esp + 0x3c]
        push    edx
        mov    dword ptr [esp + 0x40], ecx
        push    eax
L_73db:
        lea    ecx, [ebx + 0x1c]
        call    FUN_005da5d0
        mov    eax, dword ptr [esp + 0x14]
        xor    ebx, ebx
        test    eax, eax
        jle    L_74a4
        mov    ebp, dword ptr [esp + 0x10]
L_73f5:
        push    0x54
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_740e
        push    ebp
        push    edi
        mov    ecx, eax
        call    FUN_005d69d0
        jmp    L_7410
L_740e:
        xor    eax, eax
L_7410:
        mov    ecx, dword ptr [ebp + 0x1c]
        mov    edx, dword ptr [eax + 8]
        lea    esi, [ecx + ebx*4]
        mov    dword ptr [esi], eax
        add    eax, 8
        mov    dword ptr [esp + 0x20], edx
        mov    ecx, dword ptr [eax + 4]
        mov    dword ptr [esp + 0x24], ecx
        mov    edx, dword ptr [eax + 8]
        lea    eax, [esp + 0x20]
        push    eax
        lea    ecx, [esp + 0x30]
        mov    dword ptr [esp + 0x2c], edx
        call    FUN_0040c410
        fld    dword ptr [esp + 0x2c]
        fcomp    dword ptr [g_0076d598]
        fnstsw  ax
        test    ah, 0x40
        jne    L_7477
        fld    dword ptr [esp + 0x30]
        fcomp    dword ptr [g_0076d598]
        fnstsw  ax
        test    ah, 0x40
        jne    L_7477
        fld    dword ptr [esp + 0x34]
        fcomp    dword ptr [g_0076d598]
        fnstsw  ax
        test    ah, 0x40
        jne    L_7477
        mov    ecx, dword ptr [esi]
        mov    dword ptr [ecx], ebx
        jmp    L_7497
L_7477:
        mov    ebp, dword ptr [esi]
        test    ebp, ebp
        je    L_748d
        mov    ecx, ebp
        call    FUN_005d6b10
        push    ebp
        call    FUN_004084e0
        add    esp, 4
L_748d:
        mov    ebp, dword ptr [esp + 0x10]
        mov    dword ptr [esi], 0
L_7497:
        mov    eax, dword ptr [esp + 0x14]
        inc    ebx
        cmp    ebx, eax
        jl    L_73f5
L_74a4:
        mov    edx, dword ptr [edi]
        push    4
        lea    eax, [esp + 0x1c]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
        mov    eax, dword ptr [esp + 0x18]
        test    eax, eax
        jne    L_74d5
        mov    esi, dword ptr [esp + 0x10]
        lea    ecx, [esp + 0x3c]
        push    ecx
        lea    ebp, [esi + 0x10]
        push    0xa
        mov    ecx, ebp
        mov    dword ptr [esp + 0x44], eax
        call    FUN_005da6d0
        jmp    L_74f5
L_74d5:
        lea    edx, [esp + 0x3c]
        push    edx
        push    eax
        mov    eax, dword ptr [esp + 0x18]
        lea    ebp, [eax + 0x10]
        mov    ecx, ebp
        mov    dword ptr [esp + 0x44], 0
        call    FUN_005da6d0
        mov    esi, dword ptr [esp + 0x10]
L_74f5:
        mov    eax, dword ptr [esp + 0x18]
        xor    ebx, ebx
        test    eax, eax
        jle    L_7560
L_74ff:
        push    0xb0
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_751b
        push    esi
        push    edi
        mov    ecx, eax
        call    FUN_0068f020
        jmp    L_751d
L_751b:
        xor    eax, eax
L_751d:
        mov    ecx, dword ptr [ebp]
        lea    esi, [ecx + ebx*4]
        mov    edx, eax
        mov    ecx, dword ptr [edx + 0xc]
        mov    dword ptr [esi], eax
        or    eax, 0xffffffff
        cmp    ecx, eax
        je    L_753e
        mov    ecx, edx
        cmp    dword ptr [ecx + 0x10], eax
        je    L_753e
        mov    edx, ecx
        mov    dword ptr [edx], ebx
        jmp    L_7553
L_753e:
        mov    eax, dword ptr [esi]
        test    eax, eax
        je    L_754d
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_754d:
        mov    dword ptr [esi], 0
L_7553:
        mov    eax, dword ptr [esp + 0x18]
        mov    esi, dword ptr [esp + 0x10]
        inc    ebx
        cmp    ebx, eax
        jl    L_74ff
L_7560:
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        mov    eax, dword ptr [g_007dab40]
        push    0x80da58
        push    0x80da60
        xor    ecx, eax
        mov    ecx, dword ptr [ecx + 0x1c]
        push    0x80da54
        push    0x80da5c
        xor    ecx, 0x85739531
        call    FUN_004e27f0
        push    0x20
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_75a8
        push    edi
        mov    ecx, eax
        call    FUN_00657700
        jmp    L_75aa
L_75a8:
        xor    eax, eax
L_75aa:
        push    0x14
        mov    dword ptr [esi + 0x3c], eax
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_75c5
        push    edi
        mov    ecx, eax
        call    FUN_00657ed0
        jmp    L_75c7
L_75c5:
        xor    eax, eax
L_75c7:
        push    0xc
        mov    dword ptr [esi + 0x40], eax
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_75e2
        push    edi
        mov    ecx, eax
        call    FUN_0068cc50
        jmp    L_75e4
L_75e2:
        xor    eax, eax
L_75e4:
        mov    edx, dword ptr [edi]
        mov    ecx, edi
        mov    dword ptr [esi + 0x48], eax
        call    dword ptr [edx + 8]
        cmp    eax, 4
        jb    L_7605
        mov    edx, dword ptr [edi]
        push    4
        lea    eax, [esi + 0x50]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
        jmp    L_77c7
L_7605:
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, dword ptr [g_007dab40]
        mov    edx, dword ptr [ecx + 0x20]
        xor    edx, 0x85739531
        mov    eax, dword ptr [edx + 0x5c]
        push    eax
        lea    ecx, [esp + 0x40]
        call    FUN_00412570
        lea    ecx, [esp + 0x3c]
        call    FUN_004128e0
        or    ecx, 0xffffffff
        xor    eax, eax
        mov    edi, 0x788210
        repne scasb
        not    ecx
        dec    ecx
        push    ecx
        mov    ecx, dword ptr [esp + 0x40]
        push    0x788210
        push    ecx
        call    dword ptr [g_0076b2e0]
        add    esp, 0xc
        test    eax, eax
        jne    L_77a6
        lea    ecx, [esp + 0x3c]
        call    FUN_004129c0
        lea    ecx, [esp + 0x3c]
        call    FUN_00412950
        mov    edi, dword ptr [esp + 0x3c]
        mov    esi, dword ptr [g_007f23e0]
        mov    eax, edi
L_767a:
        mov    dl, byte ptr [eax]
        mov    bl, byte ptr [esi]
        mov    cl, dl
        cmp    dl, bl
        jne    L_76a2
        test    cl, cl
        je    L_769e
        mov    dl, byte ptr [eax + 1]
        mov    bl, byte ptr [esi + 1]
        mov    cl, dl
        cmp    dl, bl
        jne    L_76a2
        add    eax, 2
        add    esi, 2
        test    cl, cl
        jne    L_767a
L_769e:
        xor    eax, eax
        jmp    L_76a7
L_76a2:
        sbb    eax, eax
        sbb    eax, -1
L_76a7:
        test    eax, eax
        je    L_7797
        mov    esi, dword ptr [g_007f23e4]
        mov    eax, edi
L_76b7:
        mov    dl, byte ptr [eax]
        mov    bl, byte ptr [esi]
        mov    cl, dl
        cmp    dl, bl
        jne    L_76df
        test    cl, cl
        je    L_76db
        mov    dl, byte ptr [eax + 1]
        mov    bl, byte ptr [esi + 1]
        mov    cl, dl
        cmp    dl, bl
        jne    L_76df
        add    eax, 2
        add    esi, 2
        test    cl, cl
        jne    L_76b7
L_76db:
        xor    eax, eax
        jmp    L_76e4
L_76df:
        sbb    eax, eax
        sbb    eax, -1
L_76e4:
        test    eax, eax
        je    L_7797
        mov    esi, dword ptr [g_007f23e8]
        mov    eax, edi
L_76f4:
        mov    dl, byte ptr [eax]
        mov    bl, byte ptr [esi]
        mov    cl, dl
        cmp    dl, bl
        jne    L_771c
        test    cl, cl
        je    L_7718
        mov    dl, byte ptr [eax + 1]
        mov    bl, byte ptr [esi + 1]
        mov    cl, dl
        cmp    dl, bl
        jne    L_771c
        add    eax, 2
        add    esi, 2
        test    cl, cl
        jne    L_76f4
L_7718:
        xor    eax, eax
        jmp    L_7721
L_771c:
        sbb    eax, eax
        sbb    eax, -1
L_7721:
        test    eax, eax
        je    L_7797
        mov    esi, dword ptr [g_007f23ec]
        mov    eax, edi
L_772d:
        mov    dl, byte ptr [eax]
        mov    bl, byte ptr [esi]
        mov    cl, dl
        cmp    dl, bl
        jne    L_7755
        test    cl, cl
        je    L_7751
        mov    dl, byte ptr [eax + 1]
        mov    bl, byte ptr [esi + 1]
        mov    cl, dl
        cmp    dl, bl
        jne    L_7755
        add    eax, 2
        add    esi, 2
        test    cl, cl
        jne    L_772d
L_7751:
        xor    eax, eax
        jmp    L_775a
L_7755:
        sbb    eax, eax
        sbb    eax, -1
L_775a:
        test    eax, eax
        je    L_7797
        mov    esi, dword ptr [g_007f23f0]
        mov    eax, edi
L_7766:
        mov    dl, byte ptr [eax]
        mov    bl, byte ptr [esi]
        mov    cl, dl
        cmp    dl, bl
        jne    L_778e
        test    cl, cl
        je    L_778a
        mov    dl, byte ptr [eax + 1]
        mov    bl, byte ptr [esi + 1]
        mov    cl, dl
        cmp    dl, bl
        jne    L_778e
        add    eax, 2
        add    esi, 2
        test    cl, cl
        jne    L_7766
L_778a:
        xor    eax, eax
        jmp    L_7793
L_778e:
        sbb    eax, eax
        sbb    eax, -1
L_7793:
        test    eax, eax
        jne    L_77aa
L_7797:
        mov    eax, dword ptr [esp + 0x10]
        add    eax, 0x50
        mov    dword ptr [eax], 0x3fa66666
        jmp    L_77aa
L_77a6:
        mov    edi, dword ptr [esp + 0x3c]
L_77aa:
        test    edi, edi
        je    L_77c3
        mov    cl, byte ptr [edi - 1]
        lea    eax, [edi - 1]
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_77c3
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_77c3:
        mov    esi, dword ptr [esp + 0x10]
L_77c7:
        mov    eax, dword ptr [esp + 0x14]
        xor    ecx, ecx
        test    eax, eax
        jle    L_77ec
        mov    eax, dword ptr [esi + 0x1c]
L_77d4:
        mov    edx, dword ptr [eax]
        test    edx, edx
        je    L_77e0
        fld    dword ptr [esi + 0x50]
        fstp    dword ptr [edx + 0x50]
L_77e0:
        mov    edx, dword ptr [esp + 0x14]
        inc    ecx
        add    eax, 4
        cmp    ecx, edx
        jl    L_77d4
L_77ec:
        mov    eax, dword ptr [esp + 0x18]
        xor    edi, edi
        test    eax, eax
        jle    L_783e
        mov    eax, dword ptr [esp + 0x10]
        mov    esi, dword ptr [eax + 0x10]
        add    eax, 0x10
L_7800:
        mov    eax, dword ptr [esi]
        test    eax, eax
        je    L_7832
        mov    ecx, eax
        mov    eax, dword ptr [ecx + 4]
        test    eax, eax
        je    L_781c
        mov    edx, ecx
        mov    eax, ecx
        mov    ecx, dword ptr [eax + 4]
        push    edx
        call    FUN_005d6bf0
L_781c:
        mov    ecx, dword ptr [esi]
        mov    eax, dword ptr [ecx + 8]
        test    eax, eax
        je    L_7832
        mov    edx, ecx
        mov    eax, ecx
        mov    ecx, dword ptr [eax + 8]
        push    edx
        call    FUN_005d6bf0
L_7832:
        mov    eax, dword ptr [esp + 0x18]
        inc    edi
        add    esi, 4
        cmp    edi, eax
        jl    L_7800
L_783e:
        mov    esi, dword ptr [esp + 0x10]
        mov    byte ptr [esi + 0x34], 0
        mov    byte ptr [esi + 0x4c], 0
        call    FUN_006f49a0
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x28
        ret    8
    }
}
