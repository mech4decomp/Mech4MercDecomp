/*
 * FUN_005c644b (extent 0x5c644b-0x5c6878) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007f2104;
extern int    g_007f2460;
extern float  g_0080da54;
extern float  g_0080da58;
extern float  g_0080da5c;
extern float  g_0080da60;
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_004f8480(void);
extern void __cdecl FUN_005c1720(void);
extern void __cdecl FUN_005c68b0(void);
extern void __cdecl FUN_005dd110(void);
extern void __cdecl FUN_005faef0(void);
extern void __cdecl FUN_00637a20(void);
extern void __cdecl FUN_00637b40(void);
extern void __cdecl FUN_0063b190(void);
extern void __cdecl FUN_0064def0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_005c644b(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007f2460]
        push    esi
        push    edi
        push    eax
        mov    esi, ecx
        call    FUN_006f4950
        lea    edi, [esi + 0x1c8]
        mov    ecx, edi
        call    FUN_0041fd80
        test    eax, eax
        jne    L_6478
        call    FUN_006f49a0
        pop    edi
        pop    esi
        ret    
L_6478:
        mov    ecx, dword ptr [esi + 0x4e0]
        test    ecx, 0xfffffffc
        push    ebx
        je    L_64c9
        and    ecx, 0xfffffffc
        mov    edx, dword ptr [ecx]
        call    dword ptr [edx + 4]
        cmp    eax, 0x7e1
        jne    L_64c9
        mov    ecx, edi
        call    FUN_0041fd80
        mov    edx, dword ptr [eax]
        mov    edi, dword ptr [esi + 0x170]
        mov    ecx, eax
        call    dword ptr [edx + 0x60]
        mov    ebx, eax
        mov    eax, dword ptr [edi]
        mov    ecx, edi
        call    dword ptr [eax + 0x60]
        cmp    ebx, eax
        je    L_64f3
        push    1
        mov    ecx, esi
        call    FUN_005c1720
        call    FUN_006f49a0
        pop    ebx
        pop    edi
        pop    esi
        ret    
L_64c9:
        mov    ecx, edi
        call    FUN_0041fd80
        mov    ecx, dword ptr [esi + 0x170]
        mov    edx, dword ptr [ecx]
        mov    edi, eax
        call    dword ptr [edx + 0x60]
        mov    ebx, eax
        mov    eax, dword ptr [edi]
        mov    ecx, edi
        call    dword ptr [eax + 0x60]
        cmp    eax, ebx
        jne    L_64f3
        push    1
        mov    ecx, esi
        call    FUN_005c1720
L_64f3:
        call    FUN_006f49a0
        pop    ebx
        pop    edi
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007f2460]
        push    esi
        push    edi
        push    eax
        mov    edi, ecx
        call    FUN_006f4950
        lea    esi, [edi + 0x1c8]
        mov    ecx, esi
        call    FUN_0041fd80
        test    eax, eax
        je    L_6539
        mov    ecx, esi
        call    FUN_0041fd80
        mov    ecx, dword ptr [eax + 0x30]
        cmp    ecx, dword ptr [esp + 0xc]
        jne    L_6539
        push    1
        mov    ecx, edi
        call    FUN_005c1720
L_6539:
        call    FUN_006f49a0
        pop    edi
        pop    esi
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
        mov    eax, dword ptr [g_007f2460]
        push    esi
        push    edi
        push    eax
        mov    esi, ecx
        call    FUN_006f4950
        mov    eax, dword ptr [g_007f2104]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        cmp    al, 1
        jne    L_657d
        call    FUN_006f49a0
        pop    edi
        mov    al, 1
        pop    esi
        ret    0xc
L_657d:
        mov    edi, dword ptr [esp + 0xc]
        fld    dword ptr [edi]
        fcomp    dword ptr [g_0080da60]
        fnstsw  ax
        test    ah, 0x41
        jne    L_6694
        fld    dword ptr [edi]
        fcomp    dword ptr [g_0080da58]
        fnstsw  ax
        test    ah, 1
        je    L_6694
        fld    dword ptr [edi + 8]
        fcomp    dword ptr [g_0080da5c]
        fnstsw  ax
        test    ah, 0x41
        jne    L_6694
        fld    dword ptr [edi + 8]
        fcomp    dword ptr [g_0080da54]
        fnstsw  ax
        test    ah, 1
        je    L_6694
        mov    ecx, dword ptr [g_007dab44]
        mov    eax, dword ptr [ecx]
        mov    edx, dword ptr [g_007dab40]
        mov    cl, byte ptr [esp + 0x10]
        xor    eax, edx
        test    cl, cl
        jne    L_65fe
        mov    ecx, dword ptr [eax + 0x20]
        push    edi
        xor    ecx, 0x85739531
        call    FUN_004f8480
        test    eax, eax
        jne    L_6694
L_65fe:
        fld    dword ptr [esi + 0x3e8]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jne    L_6656
        fld    dword ptr [edi]
        fsub    dword ptr [esi + 0x3dc]
        fld    dword ptr [edi + 4]
        fsub    dword ptr [esi + 0x3e0]
        fld    dword ptr [edi + 8]
        fsub    dword ptr [esi + 0x3e4]
        fld    dword ptr [esi + 0x3e8]
        fld    st(3)
        fmul st(0), st(4)
        fld    st(3)
        fmul st(0), st(4)
        faddp st(1), st(0)
        fld    st(2)
        fmul st(0), st(3)
        faddp st(1), st(0)
        fld    st(1)
        fmul st(0), st(2)
        fcompp    
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fnstsw  ax
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        test    ah, 1
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        jne    L_6694
L_6656:
        mov    edx, dword ptr [esi]
        push    edi
        mov    ecx, esi
        call    dword ptr [edx + 0x170]
        test    al, al
        je    L_6694
        mov    al, byte ptr [esp + 0x14]
        test    al, al
        jne    L_6688
        mov    ecx, dword ptr [esi + 0x5f4]
        test    ecx, 0xfffffffc
        je    L_6688
        and    ecx, 0xfffffffc
        mov    eax, dword ptr [ecx]
        push    edi
        call    dword ptr [eax + 8]
        test    al, al
        je    L_6694
L_6688:
        call    FUN_006f49a0
        pop    edi
        mov    al, 1
        pop    esi
        ret    0xc
L_6694:
        call    FUN_006f49a0
        pop    edi
        xor    al, al
        pop    esi
        ret    0xc
        mov    eax, dword ptr [g_007f2460]
        push    ebp
        push    esi
        push    edi
        push    eax
        mov    esi, ecx
        call    FUN_006f4950
        mov    edi, dword ptr [esp + 0x14]
        mov    ecx, dword ptr [esp + 0x10]
        push    edi
        push    ecx
        mov    ecx, esi
        call    FUN_005dd110
        mov    ebp, dword ptr [esi + 0x170]
        cmp    ebp, edi
        je    L_677a
        mov    ecx, ebp
        call    FUN_005faef0
        mov    edx, dword ptr [eax + 4]
        sub    edx, dword ptr [eax]
        sar    edx, 2
        je    L_677a
        mov    ecx, edi
        call    FUN_005faef0
        mov    ecx, dword ptr [eax + 4]
        sub    ecx, dword ptr [eax]
        sar    ecx, 2
        je    L_677a
        mov    ecx, ebp
        call    FUN_005faef0
        mov    esi, dword ptr [eax]
        mov    ecx, ebp
        mov    dword ptr [esp + 0x14], esi
        call    FUN_005faef0
        cmp    esi, dword ptr [eax + 4]
        je    L_677a
        push    ebx
L_6713:
        mov    ecx, edi
        call    FUN_005faef0
        mov    ebx, dword ptr [eax + 4]
        mov    ecx, edi
        call    FUN_005faef0
        mov    esi, dword ptr [eax]
        cmp    esi, ebx
        je    L_673b
        mov    edx, dword ptr [esp + 0x18]
        mov    eax, dword ptr [edx]
L_6730:
        cmp    dword ptr [esi], eax
        je    L_673b
        add    esi, 4
        cmp    esi, ebx
        jne    L_6730
L_673b:
        mov    ecx, edi
        call    FUN_005faef0
        cmp    esi, dword ptr [eax + 4]
        je    L_6762
        mov    eax, dword ptr [esi]
        push    eax
        call    FUN_0063b190
        mov    ecx, dword ptr [esp + 0x18]
        mov    edx, dword ptr [ecx]
        add    esp, 4
        push    edi
        push    ebp
        push    edx
        mov    ecx, eax
        call    FUN_0064def0
L_6762:
        mov    esi, dword ptr [esp + 0x18]
        add    esi, 4
        mov    ecx, ebp
        mov    dword ptr [esp + 0x18], esi
        call    FUN_005faef0
        cmp    esi, dword ptr [eax + 4]
        jne    L_6713
        pop    ebx
L_677a:
        call    FUN_006f49a0
        pop    edi
        pop    esi
        pop    ebp
        ret    8
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
        mov    eax, dword ptr [g_007f2460]
        push    esi
        push    eax
        mov    esi, ecx
        call    FUN_006f4950
        mov    al, byte ptr [esi + 0x545]
        test    al, al
        jne    L_67c8
        push    4
        call    FUN_00637b40
        mov    ecx, eax
        call    FUN_00637a20
        push    ecx
        mov    ecx, esi
        fstp    dword ptr [esp]
        call    FUN_005c68b0
        mov    byte ptr [esi + 0x545], 1
L_67c8:
        call    FUN_006f49a0
        pop    esi
        ret    
        nop    
        mov    eax, dword ptr [g_007f2460]
        push    esi
        push    edi
        push    eax
        mov    esi, ecx
        call    FUN_006f4950
        mov    edi, dword ptr [esp + 0xc]
        cmp    edi, 3
        ja    L_686d
        jmp    dword ptr [edi*4 + 0x5c6878]
        mov    cl, byte ptr [esi + 0x549]
        inc    cl
        mov    al, cl
        cmp    al, 1
        mov    byte ptr [esi + 0x549], cl
        jne    L_680b
        push    6
        jmp    L_680d
L_680b:
        push    7
L_680d:
        call    FUN_00637b40
        mov    ecx, eax
        call    FUN_00637a20
        fst    dword ptr [esp + 0xc]
        cmp    edi, 2
        jne    L_682b
        mov    byte ptr [esi + 0x546], 0
        jmp    L_6854
L_682b:
        mov    byte ptr [esi + 0x547], 0
        jmp    L_6854
        mov    cl, byte ptr [esi + 0x54a]
        inc    cl
        push    8
        mov    byte ptr [esi + 0x54a], cl
        call    FUN_00637b40
        mov    ecx, eax
        call    FUN_00637a20
        fst    dword ptr [esp + 0xc]
L_6854:
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jne    L_686d
        mov    ecx, dword ptr [esp + 0xc]
        push    ecx
        mov    ecx, esi
        call    FUN_005c68b0
L_686d:
        call    FUN_006f49a0
        pop    edi
        pop    esi
        ret    4
        nop    
        // jump-table data @ 0x005C6878 (0 relocated pointers)
    }
}
