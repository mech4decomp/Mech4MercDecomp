/*
 * FUN_007074cc (extent 0x7074cc-0x707983) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b2ac;
extern int    g_0076b320;
extern int    g_00858a2c;
extern int    g_008aaae4;
extern void __cdecl FUN_006f3c80(void);
extern void __cdecl FUN_006f4230(void);
extern void __cdecl FUN_00706f20(void);
extern void __cdecl FUN_00708930(void);
extern void __cdecl FUN_007089b0(void);

__declspec(naked) void FUN_007074cc(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_008aaae4]
        test    eax, eax
        je    L_7539
        mov    ecx, dword ptr [esp + 4]
        push    esi
        call    FUN_00706f20
        mov    eax, dword ptr [g_008aaae4]
        mov    ecx, dword ptr [eax]
        lea    edx, [esp + 8]
        push    edx
        push    0
        push    eax
        call    dword ptr [ecx + 0x58]
        mov    eax, dword ptr [esp + 8]
        push    0
        push    eax
        call    FUN_006f3c80
        lea    edx, [esp + 8]
        mov    esi, eax
        mov    eax, dword ptr [g_008aaae4]
        mov    ecx, dword ptr [eax]
        push    edx
        push    esi
        push    eax
        call    dword ptr [ecx + 0x58]
        test    eax, eax
        jl    L_752d
        mov    eax, dword ptr [esp + 0xc]
        push    0
        mov    dword ptr [esi + 0x40], eax
        mov    eax, dword ptr [g_008aaae4]
        mov    ecx, dword ptr [eax]
        push    esi
        push    eax
        call    dword ptr [ecx + 0x7c]
L_752d:
        push    esi
        call    FUN_006f4230
        mov    al, 1
        pop    esi
        ret    8
L_7539:
        mov    al, 1
        ret    8
        nop    
        nop    
        sub    esp, 0x104
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0x120]
        mov    esi, 0x79fa2c
        mov    eax, edi
L_7558:
        mov    dl, byte ptr [eax]
        mov    bl, byte ptr [esi]
        mov    cl, dl
        cmp    dl, bl
        jne    L_7580
        test    cl, cl
        je    L_757c
        mov    dl, byte ptr [eax + 1]
        mov    bl, byte ptr [esi + 1]
        mov    cl, dl
        cmp    dl, bl
        jne    L_7580
        add    eax, 2
        add    esi, 2
        test    cl, cl
        jne    L_7558
L_757c:
        xor    eax, eax
        jmp    L_7585
L_7580:
        sbb    eax, eax
        sbb    eax, -1
L_7585:
        test    eax, eax
        jne    L_75c0
        mov    eax, dword ptr [esp + 0x124]
        mov    esi, dword ptr [esp + 0x118]
        push    0x40
        push    eax
        lea    ecx, [esi + 0x17c8]
        push    ecx
        call    dword ptr [g_0076b320]
        add    esp, 0xc
        mov    ecx, esi
        call    FUN_00706f20
        pop    edi
        pop    esi
        pop    ebp
        mov    al, 1
        pop    ebx
        add    esp, 0x104
        ret    0x10
L_75c0:
        mov    esi, 0x79fb0c
        mov    eax, edi
L_75c7:
        mov    dl, byte ptr [eax]
        mov    bl, byte ptr [esi]
        mov    cl, dl
        cmp    dl, bl
        jne    L_75ef
        test    cl, cl
        je    L_75eb
        mov    dl, byte ptr [eax + 1]
        mov    bl, byte ptr [esi + 1]
        mov    cl, dl
        cmp    dl, bl
        jne    L_75ef
        add    eax, 2
        add    esi, 2
        test    cl, cl
        jne    L_75c7
L_75eb:
        xor    eax, eax
        jmp    L_75f4
L_75ef:
        sbb    eax, eax
        sbb    eax, -1
L_75f4:
        test    eax, eax
        jne    L_762f
        mov    eax, dword ptr [esp + 0x124]
        mov    esi, dword ptr [esp + 0x118]
        push    0x40
        push    eax
        lea    ecx, [esi + 0x18ac]
        push    ecx
        call    dword ptr [g_0076b320]
        add    esp, 0xc
        mov    ecx, esi
        call    FUN_00706f20
        pop    edi
        pop    esi
        pop    ebp
        mov    al, 1
        pop    ebx
        add    esp, 0x104
        ret    0x10
L_762f:
        mov    esi, 0x79fb1c
        mov    eax, edi
L_7636:
        mov    dl, byte ptr [eax]
        mov    bl, byte ptr [esi]
        mov    cl, dl
        cmp    dl, bl
        jne    L_765e
        test    cl, cl
        je    L_765a
        mov    dl, byte ptr [eax + 1]
        mov    bl, byte ptr [esi + 1]
        mov    cl, dl
        cmp    dl, bl
        jne    L_765e
        add    eax, 2
        add    esi, 2
        test    cl, cl
        jne    L_7636
L_765a:
        xor    eax, eax
        jmp    L_7663
L_765e:
        sbb    eax, eax
        sbb    eax, -1
L_7663:
        test    eax, eax
        jne    L_769e
        mov    eax, dword ptr [esp + 0x124]
        mov    esi, dword ptr [esp + 0x118]
        push    0x40
        push    eax
        lea    ecx, [esi + 0x18ec]
        push    ecx
        call    dword ptr [g_0076b320]
        add    esp, 0xc
        mov    ecx, esi
        call    FUN_00706f20
        pop    edi
        pop    esi
        pop    ebp
        mov    al, 1
        pop    ebx
        add    esp, 0x104
        ret    0x10
L_769e:
        mov    esi, 0x79fb24
        mov    eax, edi
L_76a5:
        mov    dl, byte ptr [eax]
        mov    bl, byte ptr [esi]
        mov    cl, dl
        cmp    dl, bl
        jne    L_76cd
        test    cl, cl
        je    L_76c9
        mov    dl, byte ptr [eax + 1]
        mov    bl, byte ptr [esi + 1]
        mov    cl, dl
        cmp    dl, bl
        jne    L_76cd
        add    eax, 2
        add    esi, 2
        test    cl, cl
        jne    L_76a5
L_76c9:
        xor    eax, eax
        jmp    L_76d2
L_76cd:
        sbb    eax, eax
        sbb    eax, -1
L_76d2:
        test    eax, eax
        jne    L_770d
        mov    eax, dword ptr [esp + 0x124]
        mov    esi, dword ptr [esp + 0x118]
        push    0x40
        push    eax
        lea    ecx, [esi + 0x192c]
        push    ecx
        call    dword ptr [g_0076b320]
        add    esp, 0xc
        mov    ecx, esi
        call    FUN_00706f20
        pop    edi
        pop    esi
        pop    ebp
        mov    al, 1
        pop    ebx
        add    esp, 0x104
        ret    0x10
L_770d:
        mov    esi, 0x79fa6c
        mov    eax, edi
L_7714:
        mov    dl, byte ptr [eax]
        mov    bl, byte ptr [esi]
        mov    cl, dl
        cmp    dl, bl
        jne    L_773c
        test    cl, cl
        je    L_7738
        mov    dl, byte ptr [eax + 1]
        mov    bl, byte ptr [esi + 1]
        mov    cl, dl
        cmp    dl, bl
        jne    L_773c
        add    eax, 2
        add    esi, 2
        test    cl, cl
        jne    L_7714
L_7738:
        xor    eax, eax
        jmp    L_7741
L_773c:
        sbb    eax, eax
        sbb    eax, -1
L_7741:
        test    eax, eax
        jne    L_7872
        mov    ebp, dword ptr [esp + 0x124]
        xor    edi, edi
L_7752:
        lea    eax, [esp + 0x14]
        push    eax
        push    0x100
        push    edi
        push    0
        call    dword ptr [g_00858a2c]
        add    esp, 0x10
        mov    esi, ebp
        lea    eax, [esp + 0x14]
L_776e:
        mov    dl, byte ptr [eax]
        mov    bl, byte ptr [esi]
        mov    cl, dl
        cmp    dl, bl
        jne    L_7796
        test    cl, cl
        je    L_7792
        mov    dl, byte ptr [eax + 1]
        mov    bl, byte ptr [esi + 1]
        mov    cl, dl
        cmp    dl, bl
        jne    L_7796
        add    eax, 2
        add    esi, 2
        test    cl, cl
        jne    L_776e
L_7792:
        xor    eax, eax
        jmp    L_779b
L_7796:
        sbb    eax, eax
        sbb    eax, -1
L_779b:
        test    eax, eax
        mov    al, byte ptr [esp + 0x14]
        je    L_77aa
        test    al, al
        je    L_77ae
        inc    edi
        jmp    L_7752
L_77aa:
        test    al, al
        jne    L_77e8
L_77ae:
        mov    esi, dword ptr [g_0076b2ac]
        xor    edi, edi
L_77b6:
        lea    eax, [esp + 0x14]
        push    eax
        push    0x100
        push    edi
        push    0
        call    dword ptr [g_00858a2c]
        lea    ecx, [esp + 0x24]
        push    ebp
        push    ecx
        call    esi
        add    esp, 0x18
        test    eax, eax
        mov    al, byte ptr [esp + 0x14]
        je    L_77e3
        test    al, al
        je    L_77e7
        inc    edi
        jmp    L_77b6
L_77e3:
        test    al, al
        jne    L_77e8
L_77e7:
        dec    edi
L_77e8:
        mov    eax, dword ptr [g_008aaae4]
        test    eax, eax
        je    L_7906
        mov    ecx, dword ptr [esp + 0x118]
        call    FUN_00706f20
        mov    eax, dword ptr [g_008aaae4]
        mov    edx, dword ptr [eax]
        lea    ecx, [esp + 0x10]
        push    ecx
        push    0
        push    eax
        call    dword ptr [edx + 0x58]
        mov    edx, dword ptr [esp + 0x10]
        push    0
        push    edx
        call    FUN_006f3c80
        lea    edx, [esp + 0x10]
        mov    esi, eax
        mov    eax, dword ptr [g_008aaae4]
        mov    ecx, dword ptr [eax]
        push    edx
        push    esi
        push    eax
        call    dword ptr [ecx + 0x58]
        test    eax, eax
        jl    L_7906
        mov    ecx, dword ptr [esi + 0x44]
        mov    eax, dword ptr [g_008aaae4]
        shl    edi, 0x10
        xor    edi, ecx
        push    0
        mov    ebp, ecx
        mov    ecx, dword ptr [eax]
        and    edi, 0xff0000
        push    esi
        xor    ebp, edi
        push    eax
        mov    dword ptr [esi + 0x44], ebp
        call    dword ptr [ecx + 0x7c]
        push    esi
        call    FUN_006f4230
        pop    edi
        pop    esi
        pop    ebp
        mov    al, 1
        pop    ebx
        add    esp, 0x104
        ret    0x10
L_7872:
        mov    esi, 0x79fb70
        mov    eax, edi
L_7879:
        mov    dl, byte ptr [eax]
        mov    bl, byte ptr [esi]
        mov    cl, dl
        cmp    dl, bl
        jne    L_78a1
        test    cl, cl
        je    L_789d
        mov    dl, byte ptr [eax + 1]
        mov    bl, byte ptr [esi + 1]
        mov    cl, dl
        cmp    dl, bl
        jne    L_78a1
        add    eax, 2
        add    esi, 2
        test    cl, cl
        jne    L_7879
L_789d:
        xor    eax, eax
        jmp    L_78a6
L_78a1:
        sbb    eax, eax
        sbb    eax, -1
L_78a6:
        test    eax, eax
        jne    L_7906
        mov    edi, dword ptr [esp + 0x118]
        mov    ecx, dword ptr [edi + 0x1808]
        test    ecx, ecx
        jle    L_78d4
        mov    esi, dword ptr [esp + 0x11c]
        lea    edx, [edi + 0x184c]
L_78c8:
        cmp    esi, dword ptr [edx]
        je    L_78d4
        inc    eax
        add    edx, 4
        cmp    eax, ecx
        jl    L_78c8
L_78d4:
        cmp    eax, ecx
        jge    L_7906
        shl    eax, 6
        lea    esi, [eax + edi]
        mov    eax, dword ptr [esp + 0x124]
        push    0x40
        push    eax
        lea    ecx, [esi + 0x11c8]
        push    ecx
        call    dword ptr [g_0076b320]
        add    esp, 0xc
        mov    ecx, edi
        mov    byte ptr [esi + 0x1207], 0
        call    FUN_00706f20
L_7906:
        pop    edi
        pop    esi
        pop    ebp
        mov    al, 1
        pop    ebx
        add    esp, 0x104
        ret    0x10
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
        lea    eax, [esp + 8]
        push    eax
        lea    ecx, [esp + 8]
        push    ecx
        push    0x7a13d4
        mov    dword ptr [esp + 0x14], 4
        call    FUN_00708930
        mov    eax, dword ptr [esp + 4]
        test    eax, eax
        jne    L_7962
        push    4
        lea    edx, [esp + 4]
        push    edx
        push    0x7a13d4
        mov    dword ptr [esp + 0xc], 0
        call    FUN_007089b0
L_7962:
        mov    eax, dword ptr [esp]
        add    esp, 8
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        ret    4
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
        ret    4
    }
}
