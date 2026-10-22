/*
 * FUN_006a140d (extent 0x6a140d-0x6a184c) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076d970;
extern float  g_007704c4;
extern int    g_00799c88;
extern float  g_00799c8c;
extern float  g_007b220c;
extern int    g_007dab40;
extern int    g_007dab44;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_005c1720(void);
extern void __cdecl FUN_005c1770(void);
extern void __cdecl FUN_005dd750(void);
extern void __cdecl FUN_005dd7a0(void);
extern void __cdecl FUN_00602450(void);
extern void __cdecl FUN_00602bc0(void);
extern void __cdecl FUN_0065ad40(void);
extern void __cdecl FUN_0069eb70(void);
extern void __cdecl FUN_0069f250(void);
extern void __cdecl FUN_006a0d70(void);
extern void __cdecl FUN_006a0db0(void);
extern void __cdecl FUN_006a1240(void);
extern void __cdecl FUN_006a1dc0(void);
extern void __cdecl FUN_006a1dd0(void);
extern void __cdecl FUN_006a2060(void);
extern void __cdecl FUN_00707e70(void);
extern void __cdecl FUN_00766d10(void);

__declspec(naked) void FUN_006a140d(void)
{
    __asm {
        nop    
        nop    
        nop    
        sub    esp, 0x18
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov    ebx, ecx
        call    FUN_006a0d70
        test    eax, eax
        jne    L_142e
        pop    edi
        pop    esi
        pop    ebp
        mov    al, 1
        pop    ebx
        add    esp, 0x18
        ret    4
L_142e:
        mov    ecx, ebx
        call    FUN_006a0db0
        mov    ebp, eax
        test    ebp, ebp
        jne    L_1447
        pop    edi
        pop    esi
        pop    ebp
        mov    al, 1
        pop    ebx
        add    esp, 0x18
        ret    4
L_1447:
        mov    esi, dword ptr [ebx + 0x14]
        test    esi, 0xfffffffc
        mov    edi, dword ptr [esp + 0x2c]
        je    L_14c7
        and    esi, 0xfffffffc
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [eax + 0x10]
        cmp    al, 1
        jne    L_14c7
        mov    edx, dword ptr [esi]
        lea    eax, [esp + 0x18]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x14]
        fld    dword ptr [edi]
        fsub    dword ptr [eax]
        mov    edx, dword ptr [esi]
        fld    dword ptr [edi + 4]
        mov    ecx, esi
        fsub    dword ptr [eax + 4]
        fld    dword ptr [edi + 8]
        fsub    dword ptr [eax + 8]
        fld    st(1)
        fmul st(0), st(2)
        fld    st(1)
        fmul st(0), st(2)
        faddp st(1), st(0)
        fld    st(3)
        fmul st(0), st(4)
        faddp st(1), st(0)
        fstp    dword ptr [esp + 0x10]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        call    dword ptr [edx + 0x18]
        mov    eax, dword ptr [esi]
        fstp    dword ptr [esp + 0x2c]
        mov    ecx, esi
        call    dword ptr [eax + 0x18]
        fmul    dword ptr [esp + 0x2c]
        fcomp    dword ptr [esp + 0x10]
        fnstsw  ax
        test    ah, 1
        je    L_14c7
        pop    edi
        pop    esi
        pop    ebp
        xor    al, al
        pop    ebx
        add    esp, 0x18
        ret    4
L_14c7:
        mov    esi, dword ptr [ebx + 8]
        mov    ecx, esi
        call    FUN_006a1dc0
        fcomp    qword ptr [g_0076d970]
        fnstsw  ax
        test    ah, 0x40
        jne    L_1558
        mov    ecx, esi
        call    FUN_006a1dc0
        fadd    dword ptr [g_00799c8c]
        push    0
        fstp    qword ptr [esp + 0x14]
        call    FUN_00707e70
        fcomp    qword ptr [esp + 0x10]
        fnstsw  ax
        test    ah, 1
        je    L_1558
        mov    ecx, dword ptr [g_00799c88]
        mov    dword ptr [esp + 0x2c], ecx
        mov    ecx, esi
        call    FUN_006a1dd0
        mov    edx, dword ptr [edi]
        mov    ecx, dword ptr [edi + 4]
        mov    dword ptr [esp + 0x18], edx
        mov    edx, dword ptr [edi + 8]
        mov    dword ptr [esp + 0x1c], ecx
        mov    ecx, dword ptr [esp + 0x2c]
        mov    dword ptr [esp + 0x20], edx
        mov    dword ptr [esp + 0x24], ecx
        lea    edx, [esp + 0x2c]
        push    edx
        lea    ecx, [esp + 0x1c]
        push    ecx
        mov    ecx, eax
        call    FUN_00766d10
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        jne    L_1558
        pop    edi
        pop    esi
        pop    ebp
        xor    al, al
        pop    ebx
        add    esp, 0x18
        ret    4
L_1558:
        fld    dword ptr [ebp + 0x43c]
        fcomp    dword ptr [g_007b220c]
        fnstsw  ax
        test    ah, 1
        je    L_1577
        pop    edi
        pop    esi
        pop    ebp
        mov    al, 1
        pop    ebx
        add    esp, 0x18
        ret    4
L_1577:
        push    ebp
        push    edi
        mov    ecx, ebx
        call    FUN_006a1240
        neg    al
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        sbb    eax, eax
        inc    eax
        add    esp, 0x18
        ret    4
        nop    
        push    ecx
        push    ebx
        push    ebp
        push    esi
        mov    esi, ecx
        mov    ebp, dword ptr [esi + 4]
        mov    eax, dword ptr [ebp + 0x170]
        mov    ecx, dword ptr [eax + 0x3d4]
        test    ecx, ecx
        push    edi
        je    L_1642
        cmp    byte ptr [esi + 0x24], 1
        je    L_1642
        mov    edi, dword ptr [esi + 0x14]
        test    edi, 0xfffffffc
        je    L_15d1
        mov    ecx, edi
        and    ecx, 0xfffffffc
        mov    edx, dword ptr [ecx]
        call    dword ptr [edx + 0x1c]
        test    al, al
        je    L_1642
L_15d1:
        mov    eax, dword ptr [ebp]
        mov    ecx, ebp
        call    dword ptr [eax + 0x104]
        test    al, al
        je    L_1607
        mov    ebx, dword ptr [esi + 8]
        mov    ecx, ebx
        call    FUN_006a2060
        test    eax, eax
        jle    L_1642
        lea    ecx, [ebp + 0x1c8]
        call    FUN_0041fd80
        mov    ebp, dword ptr [eax + 0x30]
        mov    ecx, ebx
        call    FUN_006a2060
        cmp    ebp, eax
        jne    L_1642
L_1607:
        mov    ecx, dword ptr [esi + 8]
        call    FUN_006a2060
        test    eax, eax
        push    0x44fa0000
        mov    dword ptr [esp + 0x14], eax
        push    0x3e9
        jl    L_1636
        lea    ecx, [esp + 0x18]
        push    ecx
        mov    ecx, edi
        and    ecx, 0xfffffffc
        call    FUN_0065ad40
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        pop    ecx
        ret    
L_1636:
        mov    ecx, edi
        push    0
        and    ecx, 0xfffffffc
        call    FUN_0065ad40
L_1642:
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        pop    ecx
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x10
        push    ebx
        push    esi
        mov    esi, ecx
        cmp    byte ptr [esi + 0x24], 1
        push    edi
        jne    L_1684
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [ecx + 0x20]
        push    0
        xor    ecx, 0x85739531
        call    FUN_00602450
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0x10
        ret    4
L_1684:
        mov    edi, dword ptr [esi + 4]
        mov    edx, dword ptr [edi + 0x170]
        cmp    byte ptr [edx + 0xdc], 1
        je    L_1842
        mov    ebx, dword ptr [esp + 0x20]
        mov    al, byte ptr [ebx + 0xdc]
        test    al, al
        je    L_1842
        fld    dword ptr [esi + 0x20]
        push    ebp
        fadd    dword ptr [g_007704c4]
        push    0
        fstp    qword ptr [esp + 0x1c]
        call    FUN_00707e70
        fcomp    qword ptr [esp + 0x18]
        fnstsw  ax
        test    ah, 0x41
        jne    L_1837
        mov    eax, dword ptr [esi + 0x18]
        cmp    eax, 4
        jge    L_1837
        lea    ebp, [eax + 1]
        push    0
        mov    dword ptr [esi + 0x18], ebp
        call    FUN_00707e70
        fstp    dword ptr [esi + 0x20]
        lea    eax, [ebp - 1]
        cmp    eax, 3
        ja    L_1837
        jmp    dword ptr [eax*4 + 0x6a184c]
        lea    eax, [esp + 0x24]
        push    eax
        mov    ecx, edi
        call    FUN_005dd7a0
        mov    ecx, dword ptr [esi + 0x10]
        push    eax
        push    0
        call    FUN_0069eb70
        mov    eax, dword ptr [esp + 0x24]
        jmp    L_1737
        lea    ecx, [esp + 0x10]
        push    ecx
        mov    ecx, edi
        call    FUN_005dd7a0
        mov    ecx, dword ptr [esi + 0x10]
        push    eax
        push    1
        call    FUN_0069eb70
        mov    eax, dword ptr [esp + 0x10]
L_1737:
        test    eax, eax
        je    L_1837
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_1837
        push    eax
        call    FUN_004084e0
        add    esp, 4
        push    0
        call    FUN_00707e70
        fstp    dword ptr [esi + 0x1c]
        pop    ebp
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0x10
        ret    4
        mov    ebp, dword ptr [esi + 0x10]
        lea    edx, [esp + 0x14]
        push    edx
        mov    ecx, edi
        call    FUN_005dd7a0
        push    eax
        push    2
        mov    ecx, ebp
        call    FUN_0069eb70
        mov    eax, dword ptr [esp + 0x14]
        test    eax, eax
        je    L_179e
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_179e
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_179e:
        push    1
        mov    ecx, ebp
        call    FUN_0069f250
        push    0
        call    FUN_00707e70
        fstp    dword ptr [esi + 0x1c]
        pop    ebp
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0x10
        ret    4
        lea    eax, [esp + 0x18]
        push    eax
        mov    ecx, edi
        mov    byte ptr [esi + 0x24], 1
        call    FUN_005dd7a0
        mov    ecx, dword ptr [esi + 0x10]
        push    eax
        push    3
        call    FUN_0069eb70
        mov    eax, dword ptr [esp + 0x18]
        test    eax, eax
        je    L_17f1
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_17f1
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_17f1:
        push    1
        mov    ecx, edi
        call    FUN_005c1720
        push    ebx
        mov    ecx, edi
        call    FUN_005dd750
        push    1
        mov    ecx, edi
        call    FUN_005c1770
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        xor    edx, dword ptr [g_007dab40]
        mov    edi, dword ptr [edx + 0x20]
        xor    edi, 0x85739531
        push    0x41f00000
        mov    ecx, edi
        call    FUN_00602bc0
        push    0
        mov    ecx, edi
        call    FUN_00602450
L_1837:
        push    0
        call    FUN_00707e70
        fstp    dword ptr [esi + 0x1c]
        pop    ebp
L_1842:
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0x10
        ret    4
        nop    
        // jump-table data @ 0x006A184C (5 relocated pointers)
        __emit 0xFF
        __emit 0x16
        __emit 0x6A
        __emit 0x00
        __emit 0x1C
        __emit 0x17
        __emit 0x6A
        __emit 0x00
        __emit 0x6A
        __emit 0x17
        __emit 0x6A
        __emit 0x00
        __emit 0xBB
        __emit 0x17
        __emit 0x6A
        __emit 0x00
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
    }
}
