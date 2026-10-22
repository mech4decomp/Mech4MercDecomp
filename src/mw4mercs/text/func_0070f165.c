/*
 * FUN_0070f165 (extent 0x70f165-0x70f954) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_00858940;
extern int    g_00858944;
extern int    g_0087b62c;
extern int    g_0087b638;
extern int    g_0087b63c;
extern int    g_0087b64c;
extern int    g_0087b654;
extern int    g_0087b658;
extern int    g_0087b65c;
extern int    g_0087b660;
extern int    g_0087b664;
extern int    g_0087b668;
extern int    g_0087b66c;
extern int    g_0087b670;
extern int    g_0087b674;
extern int    g_0087b678;
extern int    g_0087b67c;
extern int    g_0087b680;
extern char   g_0087bc09;
extern char   g_0087bc0a;
extern int    g_0087bc0c;
extern int    g_0087bc10;
extern char   g_0087bc14;
extern int    g_0087bc48;
extern int    g_008aae14;
extern int    g_008aaf1c;
extern int    g_008aaf2c;
extern int    g_008aaf30;
extern int    g_008aaf38;
extern int    g_008aaf3c;
extern int    g_008aaf40;
extern int    g_008b28d4;
extern void __cdecl FUN_006f4230(void);
extern void __cdecl FUN_0070f170(void);
extern void __cdecl FUN_007103b0(void);
extern void __cdecl FUN_00710490(void);
extern void __cdecl FUN_00713cc0(void);
extern void __cdecl FUN_0073cfc0(void);
extern void __cdecl FUN_0073d3b0(void);
extern void __cdecl FUN_0073d430(void);

__declspec(naked) void FUN_0070f165(void)
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
        nop    
        sub    esp, 8
        push    0
        push    1
        call    FUN_00713cc0
        push    1
        push    4
        call    FUN_00713cc0
        push    0
        push    5
        call    FUN_00713cc0
        push    0
        push    6
        call    FUN_00713cc0
        push    0
        push    7
        call    FUN_00713cc0
        push    0
        push    8
        call    FUN_00713cc0
        push    0
        push    9
        call    FUN_00713cc0
        push    0
        push    0xa
        call    FUN_00713cc0
        push    2
        push    0x10
        call    FUN_00713cc0
        push    1
        push    0xf
        call    FUN_00713cc0
        push    0
        push    0x13
        call    FUN_00713cc0
        mov    eax, dword ptr [g_0087bc48]
        and    eax, 0xff000000
        cmp    eax, 0xff000000
        jne    L_f1eb
        push    1
        jmp    L_f1ed
L_f1eb:
        push    3
L_f1ed:
        push    0xd
        call    FUN_00713cc0
        push    ebx
        mov    ebx, dword ptr [esp + 0x18]
        push    ebp
        mov    ebp, dword ptr [esp + 0x14]
        push    esi
        mov    esi, dword ptr [esp + 0x1c]
        push    edi
        mov    edi, dword ptr [esp + 0x28]
        push    0xa0
        push    edi
        push    ebx
        push    esi
        push    ebp
        call    FUN_007103b0
        push    3
        push    0xd
        call    FUN_00713cc0
        mov    ecx, dword ptr [g_0087bc48]
        add    ecx, 0xd0
        push    ecx
        push    esi
        add    ebx, ebp
        push    ebx
        push    esi
        push    ebp
        call    FUN_00710490
        mov    edx, dword ptr [g_0087bc48]
        add    edx, 0xd0
        push    edx
        add    edi, esi
        push    edi
        push    ebp
        push    esi
        push    ebp
        call    FUN_00710490
        mov    eax, dword ptr [g_0087bc48]
        add    eax, 0x40
        push    eax
        lea    ebp, [edi + 1]
        push    ebp
        push    ebx
        push    esi
        push    ebx
        call    FUN_00710490
        mov    ecx, dword ptr [g_0087bc48]
        mov    edx, dword ptr [esp + 0x1c]
        add    ecx, 0x40
        push    ecx
        push    edi
        push    ebx
        push    edi
        push    edx
        call    FUN_00710490
        push    0x80000000
        push    ebp
        lea    eax, [ebx + 1]
        push    eax
        lea    ecx, [esi + 2]
        push    ecx
        push    eax
        call    FUN_00710490
        push    0x80000000
        push    ebp
        lea    eax, [ebx + 2]
        push    eax
        lea    ecx, [esi + 2]
        push    ecx
        push    eax
        call    FUN_00710490
        mov    ecx, dword ptr [esp + 0x1c]
        push    0x80000000
        push    ebp
        lea    eax, [ebx + 3]
        push    eax
        add    ecx, 2
        push    ebp
        push    ecx
        call    FUN_00710490
        add    edi, 2
        mov    edx, dword ptr [esp + 0x1c]
        push    0x80000000
        push    edi
        lea    eax, [ebx + 3]
        push    eax
        push    edi
        lea    eax, [edx + 2]
        push    eax
        call    FUN_00710490
        call    FUN_0073d430
        mov    eax, dword ptr [esp + 0x2c]
        test    eax, eax
        mov    ebp, eax
        mov    dword ptr [esp + 0x14], 0
        mov    byte ptr [esp + 0x20], 0
        mov    byte ptr [esp + 0x28], 0
        je    L_f560
        mov    eax, dword ptr [esp + 0x30]
        lea    ecx, [esi + eax + 6]
        mov    dword ptr [esp + 0x2c], ecx
L_f307:
        mov    esi, dword ptr [ebp + 0x1c]
        cmp    byte ptr [esi], 0
        je    L_f560
        mov    eax, dword ptr [ebp + 8]
        test    eax, eax
        je    L_f32e
        mov    edi, dword ptr [ebp + 0x18]
        push    0
        push    edi
        call    eax
        test    eax, eax
        je    L_f32e
        push    0
        push    edi
        call    dword ptr [ebp + 8]
        mov    esi, eax
L_f32e:
        or    edx, 0xffffffff
        xor    eax, eax
        mov    edi, esi
        mov    ecx, edx
        repne scasb
        not    ecx
        dec    ecx
        cmp    ecx, 1
        mov    dword ptr [esp + 0x10], esi
        jne    L_f428
        cmp    byte ptr [esi], 0x20
        jne    L_f428
        mov    al, byte ptr [esp + 0x28]
        test    al, al
        je    L_f35e
        mov    byte ptr [esp + 0x20], cl
L_f35e:
        mov    al, byte ptr [esp + 0x20]
        test    al, al
        mov    byte ptr [esp + 0x28], 1
        jne    L_f555
L_f36f:
        mov    ecx, dword ptr [esp + 0x2c]
        mov    eax, dword ptr [esp + 0x1c]
        mov    edi, dword ptr [g_0087b64c]
        mov    dword ptr [g_008aaf2c], ecx
        mov    ecx, dword ptr [g_0087b62c]
        add    eax, 6
        test    ecx, ecx
        mov    dword ptr [g_008aae14], ebp
        mov    dword ptr [g_008aaf30], eax
        je    L_f437
        mov    cl, byte ptr [g_0087bc14]
        test    cl, cl
        jne    L_f458
        mov    edx, dword ptr [g_0087b63c]
        lea    ecx, [eax - 6]
        cmp    edx, ecx
        jle    L_f458
        mov    ecx, dword ptr [esp + 0x24]
        lea    eax, [eax + ecx - 6]
        cmp    edx, eax
        jae    L_f458
        mov    ecx, dword ptr [esp + 0x2c]
        lea    eax, [ecx + 8]
        mov    ecx, dword ptr [g_0087b638]
        lea    esi, [eax - 0xb]
        cmp    ecx, esi
        jle    L_f458
        cmp    ecx, eax
        jge    L_f458
        cmp    dword ptr [esp + 0x30], 2
        jne    L_f420
        mov    al, byte ptr [g_0087bc09]
        test    al, al
        je    L_f420
        mov    eax, dword ptr [g_0087b678]
        cmp    edx, eax
        jle    L_f420
        mov    esi, dword ptr [g_0087b680]
        add    esi, eax
        cmp    edx, esi
        jae    L_f420
        mov    eax, dword ptr [g_0087b674]
        cmp    ecx, eax
        jle    L_f420
        mov    edx, dword ptr [g_0087b67c]
        add    edx, eax
        cmp    ecx, edx
        jb    L_f458
L_f420:
        mov    dword ptr [g_0087b64c], ebp
        jmp    L_f45c
L_f428:
        mov    byte ptr [esp + 0x20], 0
        mov    byte ptr [esp + 0x28], 0
        jmp    L_f36f
L_f437:
        cmp    dword ptr [g_0087bc10], edx
        jne    L_f445
        mov    dword ptr [g_0087bc10], ebp
L_f445:
        cmp    edi, ebp
        jne    L_f4ae
        mov    eax, dword ptr [esp + 0x14]
        mov    dword ptr [g_0087bc0c], eax
        mov    dword ptr [g_0087bc10], edx
L_f458:
        cmp    ebp, edi
        jne    L_f4aa
L_f45c:
        push    0
        push    1
        call    FUN_00713cc0
        mov    ecx, dword ptr [esp + 0x24]
        mov    edx, dword ptr [g_008aaf2c]
        mov    eax, dword ptr [g_008aaf30]
        push    0x800000
        push    0xa
        add    ecx, -4
        push    ecx
        dec    edx
        push    edx
        add    eax, -4
        push    eax
        call    FUN_007103b0
        mov    ecx, dword ptr [g_008b28d4]
        push    ecx
        push    1
        call    FUN_00713cc0
        mov    edx, dword ptr [esp + 0x2c]
        lea    eax, [ebx + 1]
        mov    dword ptr [g_0087b670], eax
        mov    dword ptr [g_0087b66c], edx
L_f4aa:
        mov    esi, dword ptr [esp + 0x10]
L_f4ae:
        mov    edx, dword ptr [esp + 0x2c]
        mov    eax, dword ptr [ebp + 8]
        add    edx, 0xa
        test    eax, eax
        mov    dword ptr [esp + 0x2c], edx
        mov    dword ptr [g_008aaf38], 0
        mov    dword ptr [g_008aaf1c], 0x50
        mov    edi, 0xffffff
        je    L_f4e5
        mov    ecx, dword ptr [ebp + 0x18]
        push    2
        push    ecx
        call    eax
        test    eax, eax
        jne    L_f4f2
L_f4e5:
        mov    eax, dword ptr [ebp + 0x10]
        test    eax, eax
        je    L_f4f7
        call    eax
        test    al, al
        je    L_f4f7
L_f4f2:
        mov    edi, 0x808080
L_f4f7:
        mov    eax, dword ptr [ebp + 8]
        test    eax, eax
        je    L_f50a
        mov    edx, dword ptr [ebp + 0x18]
        push    1
        push    edx
        call    eax
        test    eax, eax
        jne    L_f517
L_f50a:
        mov    eax, dword ptr [ebp + 0x14]
        test    eax, eax
        je    L_f51e
        call    eax
        test    al, al
        je    L_f51e
L_f517:
        push    0x7718f4
        jmp    L_f523
L_f51e:
        push    0x76cb8c
L_f523:
        push    edi
        call    FUN_0073d3b0
        push    esi
        push    edi
        call    FUN_0073d3b0
        mov    eax, dword ptr [ebp + 4]
        test    eax, eax
        je    L_f54a
        push    0x792790
        lea    eax, [ebx - 0xa]
        push    edi
        mov    dword ptr [g_008aaf30], eax
        call    FUN_0073d3b0
L_f54a:
        push    0xa
        call    FUN_0073cfc0
        mov    dword ptr [esp + 0x14], ebp
L_f555:
        mov    ebp, dword ptr [ebp]
        test    ebp, ebp
        jne    L_f307
L_f560:
        cmp    dword ptr [g_0087bc10], -1
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        jne    L_f577
        mov    dword ptr [g_0087bc10], 0
L_f577:
        add    esp, 8
        ret    0x18
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_0087b62c]
        test    eax, eax
        je    L_f595
        mov    dword ptr [g_0087b64c], 0
        jmp    L_f5a9
L_f595:
        mov    dword ptr [g_0087bc0c], 0
        mov    dword ptr [g_0087bc10], 0
L_f5a9:
        mov    al, byte ptr [g_0087bc0a]
        test    al, al
        je    L_f5da
        mov    eax, dword ptr [g_0087b654]
        mov    ecx, dword ptr [g_0087b660]
        mov    edx, dword ptr [g_0087b664]
        push    2
        push    eax
        mov    eax, dword ptr [g_0087b658]
        push    ecx
        mov    ecx, dword ptr [g_0087b65c]
        push    edx
        push    eax
        push    ecx
        call    FUN_0070f170
L_f5da:
        mov    al, byte ptr [g_0087bc09]
        test    al, al
        je    L_f60b
        mov    edx, dword ptr [g_0087b668]
        mov    eax, dword ptr [g_0087b67c]
        mov    ecx, dword ptr [g_0087b680]
        push    0
        push    edx
        mov    edx, dword ptr [g_0087b674]
        push    eax
        mov    eax, dword ptr [g_0087b678]
        push    ecx
        push    edx
        push    eax
        call    FUN_0070f170
L_f60b:
        ret    
        nop    
        nop    
        nop    
        nop    
        push    ecx
        push    ebx
        push    ebp
        mov    ebp, dword ptr [esp + 0x10]
        xor    ebx, ebx
        cmp    ebp, ebx
        push    esi
        push    edi
        mov    dword ptr [g_0087b664], 0x14
        mov    dword ptr [g_0087b660], 0xe
        mov    byte ptr [esp + 0x13], bl
        mov    byte ptr [esp + 0x11], bl
        mov    byte ptr [esp + 0x12], bl
        je    L_f6f2
L_f643:
        cmp    dword ptr [ebp + 4], ebx
        je    L_f64d
        mov    byte ptr [esp + 0x13], 1
L_f64d:
        mov    esi, dword ptr [ebp + 8]
        cmp    esi, ebx
        je    L_f667
        mov    edi, dword ptr [ebp + 0x18]
        push    ebx
        push    edi
        call    esi
        test    eax, eax
        je    L_f667
        push    ebx
        push    edi
        call    esi
        mov    edx, eax
        jmp    L_f66a
L_f667:
        mov    edx, dword ptr [ebp + 0x1c]
L_f66a:
        or    ecx, 0xffffffff
        xor    eax, eax
        mov    edi, edx
        repne scasb
        not    ecx
        dec    ecx
        cmp    ecx, 1
        jne    L_f796
        cmp    byte ptr [edx], 0x20
        jne    L_f796
        cmp    byte ptr [esp + 0x11], bl
        je    L_f692
        mov    byte ptr [esp + 0x12], cl
L_f692:
        cmp    byte ptr [esp + 0x12], bl
        mov    byte ptr [esp + 0x11], 1
        jne    L_f6da
L_f69d:
        or    ecx, 0xffffffff
        xor    eax, eax
        mov    edi, edx
        repne scasb
        not    ecx
        add    ecx, 2
        lea    eax, [ecx + ecx*2]
        mov    ecx, dword ptr [g_0087b664]
        shl    eax, 1
        cmp    eax, ecx
        jbe    L_f6d3
        or    ecx, 0xffffffff
        mov    edi, edx
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        lea    ecx, [ecx + ecx*2]
        lea    edx, [ecx + ecx + 0x14]
        mov    dword ptr [g_0087b664], edx
L_f6d3:
        add    dword ptr [g_0087b660], 0xa
L_f6da:
        mov    ebp, dword ptr [ebp]
        cmp    ebp, ebx
        jne    L_f643
        cmp    byte ptr [esp + 0x13], bl
        je    L_f6f2
        add    dword ptr [g_0087b664], 0xa
L_f6f2:
        mov    ecx, dword ptr [g_008aaf40]
        mov    eax, dword ptr [esp + 0x1c]
        mov    edx, dword ptr [esp + 0x20]
        add    eax, ecx
        mov    ecx, dword ptr [g_008aaf3c]
        add    ecx, edx
        cmp    eax, 4
        mov    edx, dword ptr [esp + 0x18]
        mov    dword ptr [g_0087b65c], eax
        mov    dword ptr [g_0087b658], ecx
        mov    dword ptr [g_0087b654], edx
        mov    byte ptr [g_0087bc0a], 1
        mov    byte ptr [g_0087bc09], bl
        mov    dword ptr [g_0087b668], ebx
        jge    L_f741
        mov    eax, 4
        mov    dword ptr [g_0087b65c], eax
L_f741:
        cmp    ecx, 4
        jge    L_f751
        mov    ecx, 4
        mov    dword ptr [g_0087b658], ecx
L_f751:
        mov    edx, dword ptr [g_0087b664]
        lea    esi, [eax + edx]
        mov    eax, dword ptr [g_00858940]
        lea    edi, [eax - 4]
        cmp    esi, edi
        jbe    L_f770
        sub    eax, edx
        sub    eax, 4
        mov    dword ptr [g_0087b65c], eax
L_f770:
        mov    edx, dword ptr [g_0087b660]
        mov    eax, dword ptr [g_00858944]
        lea    esi, [eax - 4]
        pop    edi
        add    ecx, edx
        cmp    ecx, esi
        pop    esi
        pop    ebp
        pop    ebx
        jbe    L_f792
        sub    eax, edx
        sub    eax, 4
        mov    dword ptr [g_0087b658], eax
L_f792:
        pop    ecx
        ret    0xc
L_f796:
        mov    byte ptr [esp + 0x11], bl
        mov    byte ptr [esp + 0x12], bl
        jmp    L_f69d
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
        push    ecx
        push    ebx
        push    ebp
        mov    ebp, dword ptr [esp + 0x10]
        push    esi
        xor    bl, bl
        test    ebp, ebp
        mov    edx, 0x14
        mov    esi, 0xc
        push    edi
        mov    dword ptr [g_0087b680], edx
        mov    dword ptr [g_0087b67c], esi
        mov    byte ptr [esp + 0x13], bl
        je    L_f884
L_f7dd:
        mov    esi, dword ptr [ebp + 8]
        test    esi, esi
        je    L_f7f9
        mov    edi, dword ptr [ebp + 0x18]
        push    0
        push    edi
        call    esi
        test    eax, eax
        je    L_f7f9
        push    0
        push    edi
        call    esi
        mov    edx, eax
        jmp    L_f7fc
L_f7f9:
        mov    edx, dword ptr [ebp + 0x1c]
L_f7fc:
        or    ecx, 0xffffffff
        xor    eax, eax
        mov    edi, edx
        repne scasb
        not    ecx
        dec    ecx
        cmp    ecx, 1
        jne    L_f902
        cmp    byte ptr [edx], 0x20
        jne    L_f902
        test    bl, bl
        je    L_f822
        mov    byte ptr [esp + 0x13], cl
L_f822:
        mov    al, byte ptr [esp + 0x13]
        test    al, al
        mov    bl, 1
        jne    L_f869
L_f82c:
        or    ecx, 0xffffffff
        xor    eax, eax
        mov    edi, edx
        repne scasb
        not    ecx
        add    ecx, 2
        lea    eax, [ecx + ecx*2]
        mov    ecx, dword ptr [g_0087b680]
        shl    eax, 1
        cmp    eax, ecx
        jbe    L_f862
        or    ecx, 0xffffffff
        mov    edi, edx
        xor    eax, eax
        repne scasb
        not    ecx
        dec    ecx
        lea    ecx, [ecx + ecx*2]
        lea    edx, [ecx + ecx + 0x14]
        mov    dword ptr [g_0087b680], edx
L_f862:
        add    dword ptr [g_0087b67c], 0xa
L_f869:
        mov    ebp, dword ptr [ebp]
        test    ebp, ebp
        jne    L_f7dd
        mov    edx, dword ptr [g_0087b680]
        mov    ebp, dword ptr [esp + 0x18]
        mov    esi, dword ptr [g_0087b67c]
L_f884:
        mov    eax, dword ptr [esp + 0x1c]
        mov    ecx, dword ptr [esp + 0x20]
        add    eax, -2
        add    ecx, -6
        cmp    eax, 4
        mov    dword ptr [g_0087b678], eax
        mov    dword ptr [g_0087b674], ecx
        mov    dword ptr [g_0087b668], ebp
        mov    byte ptr [g_0087bc09], 1
        jge    L_f8b9
        mov    eax, 4
        mov    dword ptr [g_0087b678], eax
L_f8b9:
        cmp    ecx, 4
        jge    L_f8c9
        mov    ecx, 4
        mov    dword ptr [g_0087b674], ecx
L_f8c9:
        lea    edi, [eax + edx]
        mov    eax, dword ptr [g_00858940]
        lea    ebx, [eax - 4]
        cmp    edi, ebx
        jbe    L_f8e2
        sub    eax, edx
        sub    eax, 4
        mov    dword ptr [g_0087b678], eax
L_f8e2:
        mov    eax, dword ptr [g_00858944]
        add    ecx, esi
        lea    edx, [eax - 4]
        cmp    ecx, edx
        jbe    L_f8fa
        sub    eax, esi
        sub    eax, 4
        mov    dword ptr [g_0087b674], eax
L_f8fa:
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        pop    ecx
        ret    0xc
L_f902:
        xor    bl, bl
        mov    byte ptr [esp + 0x13], bl
        jmp    L_f82c
        nop    
        nop    
        nop    
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
        push    edi
        mov    edi, dword ptr [esp + 8]
        test    edi, edi
        je    L_f950
        push    ebx
        push    esi
L_f92b:
        mov    esi, dword ptr [edi + 4]
        test    esi, esi
        mov    ebx, edi
        je    L_f942
L_f934:
        mov    eax, esi
        mov    esi, dword ptr [esi]
        push    eax
        call    FUN_006f4230
        test    esi, esi
        jne    L_f934
L_f942:
        mov    edi, dword ptr [edi]
        push    ebx
        call    FUN_006f4230
        test    edi, edi
        jne    L_f92b
        pop    esi
        pop    ebx
L_f950:
        pop    edi
        ret    4
    }
}
