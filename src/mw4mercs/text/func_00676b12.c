/*
 * FUN_00676b12 (extent 0x676b12-0x6771e8) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b424;
extern float  g_0076c5b0;
extern float  g_0076d064;
extern void __cdecl FUN_00411bf0(void);
extern void __cdecl FUN_00411c40(void);
extern void __cdecl FUN_00411d60(void);
extern void __cdecl FUN_00411dc0(void);
extern void __cdecl FUN_004d1f10(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_004da8d0(void);
extern void __cdecl FUN_005a3740(void);
extern void __cdecl FUN_005a37b0(void);
extern void __cdecl FUN_005a37f0(void);
extern void __cdecl FUN_005a3850(void);
extern void __cdecl FUN_006746e0(void);
extern void __cdecl FUN_00674770(void);
extern void __cdecl FUN_006747e0(void);
extern void __cdecl FUN_00674890(void);

__declspec(naked) void FUN_00676b12(void)
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
        nop    
        nop    
        nop    
        sub    esp, 0x4c
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0x58]
        mov    esi, dword ptr [edi]
        mov    eax, dword ptr [esi]
        push    0x98
        mov    ecx, esi
        call    dword ptr [eax + 0x14]
        push    edi
        call    FUN_006746e0
        mov    edx, dword ptr [esi]
        add    esp, 4
        mov    ecx, esi
        call    dword ptr [edx + 4]
        mov    edi, dword ptr [edi + 4]
        mov    esi, eax
        push    1
        lea    eax, [esp + 0x10]
        push    eax
        push    0x797894
        mov    ecx, edi
        mov    dword ptr [esi], 0x98
        call    FUN_00411bf0
        mov    ecx, dword ptr [esp + 0xc]
        push    ecx
        call    FUN_005a3740
        add    esp, 4
        lea    ecx, [esp + 0x10]
        mov    dword ptr [esi + 0x90], eax
        call    FUN_004d1f10
        lea    edx, [esi + 0x54]
        push    edx
        lea    eax, [esp + 0x14]
        push    eax
        call    FUN_004da8d0
        mov    eax, dword ptr [esi + 0x90]
        add    esp, 8
        sub    eax, 0
        mov    dword ptr [esp + 8], 1
        je    L_6bc5
        dec    eax
        je    L_6bb8
        dec    eax
        jne    L_6bd0
        mov    ecx, dword ptr [esp + 0x24]
        mov    edx, dword ptr [ecx + 0x50]
        mov    dword ptr [esp + 8], edx
        jmp    L_6bd0
L_6bb8:
        mov    eax, dword ptr [esp + 0x24]
        mov    ecx, dword ptr [eax + 0x54]
        mov    dword ptr [esp + 8], ecx
        jmp    L_6bd0
L_6bc5:
        mov    edx, dword ptr [esp + 0x24]
        mov    eax, dword ptr [edx + 0x4c]
        mov    dword ptr [esp + 8], eax
L_6bd0:
        push    0
        lea    ecx, [esp + 0x5c]
        push    ecx
        push    0x7741c8
        mov    ecx, edi
        mov    dword ptr [esp + 0x64], 0
        call    FUN_00411d60
        fild    dword ptr [esp + 8]
        push    0
        lea    edx, [esp + 0x5c]
        fst    dword ptr [esp + 0xc]
        push    edx
        fmul    dword ptr [esp + 0x60]
        push    0x7741bc
        mov    ecx, edi
        fstp    dword ptr [esi + 0x6c]
        mov    dword ptr [esp + 0x64], 0
        call    FUN_00411d60
        fld    dword ptr [esp + 8]
        fmul    dword ptr [esp + 0x58]
        push    0
        lea    eax, [esp + 0x5c]
        push    eax
        fstp    dword ptr [esi + 0x70]
        push    0x7741b4
        mov    ecx, edi
        mov    dword ptr [esp + 0x64], 0
        call    FUN_00411d60
        fld    dword ptr [esp + 8]
        fmul    dword ptr [esp + 0x58]
        push    0
        lea    ecx, [esp + 0x5c]
        push    ecx
        fstp    dword ptr [esi + 0x74]
        push    0x7741a8
        mov    ecx, edi
        mov    dword ptr [esp + 0x64], 0
        call    FUN_00411d60
        fld    dword ptr [esp + 8]
        fmul    dword ptr [esp + 0x58]
        push    0
        lea    edx, [esp + 0x5c]
        push    edx
        fstp    dword ptr [esi + 0x78]
        push    0x797884
        mov    ecx, edi
        mov    dword ptr [esp + 0x64], 0
        call    FUN_00411d60
        fld    dword ptr [esp + 8]
        fmul    dword ptr [esp + 0x58]
        push    0
        lea    eax, [esp + 0x5c]
        push    eax
        fstp    dword ptr [esi + 0x7c]
        push    0x797874
        mov    ecx, edi
        mov    dword ptr [esp + 0x64], 0
        call    FUN_00411d60
        fld    dword ptr [esp + 8]
        fmul    dword ptr [esp + 0x58]
        push    0
        lea    ecx, [esp + 0x5c]
        push    ecx
        fstp    dword ptr [esi + 0x80]
        push    0x797860
        mov    ecx, edi
        mov    dword ptr [esp + 0x64], 0
        call    FUN_00411d60
        fld    dword ptr [esp + 8]
        fmul    dword ptr [esp + 0x58]
        push    0
        lea    edx, [esp + 0x5c]
        push    edx
        fstp    dword ptr [esi + 0x84]
        push    0x774174
        mov    ecx, edi
        mov    dword ptr [esp + 0x64], 0
        call    FUN_00411d60
        fld    dword ptr [esp + 8]
        fmul    dword ptr [esp + 0x58]
        fstp    dword ptr [esi + 0x88]
        push    0
        lea    eax, [esp + 0x5c]
        push    eax
        push    0x77416c
        mov    ecx, edi
        mov    dword ptr [esp + 0x64], 0
        call    FUN_00411d60
        fld    dword ptr [esp + 8]
        fmul    dword ptr [esp + 0x58]
        push    1
        lea    ecx, [esp + 0x10]
        push    ecx
        push    0x797850
        fstp    dword ptr [esi + 0x8c]
        mov    ecx, edi
        call    FUN_00411bf0
        mov    edx, dword ptr [esp + 0xc]
        push    edx
        call    FUN_005a37f0
        add    esp, 4
        lea    ecx, [esp + 0x10]
        mov    dword ptr [esi + 0x94], eax
        call    FUN_004d21c0
        pop    edi
        pop    esi
        add    esp, 0x4c
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, ecx
        push    edi
        call    FUN_006747e0
        mov    eax, dword ptr [esi + 0x1a4]
        push    eax
        call    FUN_005a37b0
        add    esp, 4
        push    eax
        push    0x797894
        mov    ecx, edi
        call    FUN_00411c40
        mov    ecx, dword ptr [esi + 0x1a8]
        push    ecx
        call    FUN_005a3850
        add    esp, 4
        push    eax
        push    0x797850
        mov    ecx, edi
        call    FUN_00411c40
        mov    edx, dword ptr [esi + 0x180]
        push    edx
        push    0x7741c8
        mov    ecx, edi
        call    FUN_00411dc0
        mov    eax, dword ptr [esi + 0x184]
        push    eax
        push    0x7741bc
        mov    ecx, edi
        call    FUN_00411dc0
        mov    ecx, dword ptr [esi + 0x188]
        push    ecx
        push    0x7741b4
        mov    ecx, edi
        call    FUN_00411dc0
        mov    edx, dword ptr [esi + 0x18c]
        push    edx
        push    0x7741a8
        mov    ecx, edi
        call    FUN_00411dc0
        mov    eax, dword ptr [esi + 0x194]
        push    eax
        push    0x797884
        mov    ecx, edi
        call    FUN_00411dc0
        mov    ecx, dword ptr [esi + 0x190]
        push    ecx
        push    0x797874
        mov    ecx, edi
        call    FUN_00411dc0
        mov    edx, dword ptr [esi + 0x198]
        push    edx
        push    0x797860
        mov    ecx, edi
        call    FUN_00411dc0
        mov    eax, dword ptr [esi + 0x19c]
        push    eax
        push    0x774174
        mov    ecx, edi
        call    FUN_00411dc0
        mov    ecx, dword ptr [esi + 0x1a0]
        push    ecx
        push    0x77416c
        mov    ecx, edi
        call    FUN_00411dc0
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
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, dword ptr [edi]
        mov    eax, dword ptr [esi]
        push    0x5c
        mov    ecx, esi
        call    dword ptr [eax + 0x14]
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 4]
        push    edi
        mov    dword ptr [eax + 0x58], 0
        call    FUN_00674770
        add    esp, 4
        pop    edi
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ebp
        mov    ebp, esp
        and    esp, 0xfffffff8
        sub    esp, 0xc
        mov    eax, dword ptr [ebp + 0x10]
        mov    ecx, dword ptr [ebp + 0x14]
        push    ebx
        mov    bl, byte ptr [eax]
        push    esi
        mov    esi, dword ptr [ebp + 8]
        push    edi
        mov    edi, dword ptr [ebp + 0xc]
        test    bl, bl
        mov    ebx, dword ptr [ebp + 0x18]
        push    ebx
        push    ecx
        push    eax
        push    edi
        push    esi
        setne    byte ptr [esp + 0x27]
        call    FUN_00674890
        mov    cl, al
        mov    eax, dword ptr [edi + 0x10]
        add    eax, -0xb
        add    esp, 0x14
        cmp    eax, 7
        ja    L_71dc
        jmp    dword ptr [eax*4 + 0x6771e8]
        mov    al, byte ptr [esp + 0x13]
        test    al, al
        jne    L_6f08
        mov    edx, dword ptr [edi]
        lea    eax, [esp + 0x14]
        push    eax
        push    esi
        mov    ecx, edi
        mov    dword ptr [esp + 0x1c], 0
        call    dword ptr [edx + 4]
        mov    cl, 1
L_6f08:
        fld    dword ptr [esi + 0x34]
        mov    edi, dword ptr [g_0076b424]
        fadd    dword ptr [esi + 0x58]
        fstp    dword ptr [esp + 0x14]
        mov    edx, dword ptr [esp + 0x14]
        fld    dword ptr [esi + 0x34]
        mov    dword ptr [esi + 0x58], edx
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        je    L_6f4b
        fld    dword ptr [esi + 0x34]
        mov    eax, dword ptr [ebp + 0x14]
        mov    ecx, dword ptr [eax]
        sub    esp, 8
        fstp    qword ptr [esp]
        push    0x797a64
        push    ebx
        push    ecx
        call    edi
        add    esp, 0x14
        xor    cl, cl
L_6f4b:
        fld    dword ptr [esp + 0x14]
        jmp    L_70f8
        mov    al, byte ptr [esp + 0x13]
        test    al, al
        jne    L_6f73
        mov    edx, dword ptr [edi]
        lea    eax, [esp + 0x14]
        push    eax
        push    esi
        mov    ecx, edi
        mov    dword ptr [esp + 0x1c], 0
        call    dword ptr [edx + 4]
        mov    cl, 1
L_6f73:
        fld    dword ptr [esi + 0x58]
        mov    edi, dword ptr [g_0076b424]
        fadd    dword ptr [esi + 0x38]
        fstp    dword ptr [esp + 0x14]
        mov    edx, dword ptr [esp + 0x14]
        fld    dword ptr [esi + 0x38]
        mov    dword ptr [esi + 0x58], edx
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        je    L_6fb6
        fld    dword ptr [esi + 0x38]
        mov    eax, dword ptr [ebp + 0x14]
        mov    ecx, dword ptr [eax]
        sub    esp, 8
        fstp    qword ptr [esp]
        push    0x797a30
        push    ebx
        push    ecx
        call    edi
        add    esp, 0x14
        xor    cl, cl
L_6fb6:
        fld    dword ptr [esp + 0x14]
        jmp    L_70f8
        mov    al, byte ptr [esp + 0x13]
        test    al, al
        jne    L_6fde
        mov    edx, dword ptr [edi]
        lea    eax, [esp + 0x14]
        push    eax
        push    esi
        mov    ecx, edi
        mov    dword ptr [esp + 0x1c], 0
        call    dword ptr [edx + 4]
        mov    cl, 1
L_6fde:
        fld    dword ptr [esi + 0x58]
        mov    edi, dword ptr [g_0076b424]
        fadd    dword ptr [esi + 0x3c]
        fstp    dword ptr [esp + 0x14]
        mov    edx, dword ptr [esp + 0x14]
        fld    dword ptr [esi + 0x3c]
        mov    dword ptr [esi + 0x58], edx
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        je    L_7021
        fld    dword ptr [esi + 0x3c]
        mov    eax, dword ptr [ebp + 0x14]
        mov    ecx, dword ptr [eax]
        sub    esp, 8
        fstp    qword ptr [esp]
        push    0x7979f4
        push    ebx
        push    ecx
        call    edi
        add    esp, 0x14
        xor    cl, cl
L_7021:
        fld    dword ptr [esp + 0x14]
        jmp    L_70f8
        mov    al, byte ptr [esp + 0x13]
        test    al, al
        jne    L_7049
        mov    edx, dword ptr [edi]
        lea    eax, [esp + 0x14]
        push    eax
        push    esi
        mov    ecx, edi
        mov    dword ptr [esp + 0x1c], 0
        call    dword ptr [edx + 4]
        mov    cl, 1
L_7049:
        fld    dword ptr [esi + 0x58]
        mov    edi, dword ptr [g_0076b424]
        fadd    dword ptr [esi + 0x40]
        fstp    dword ptr [esp + 0x14]
        mov    edx, dword ptr [esp + 0x14]
        fld    dword ptr [esi + 0x40]
        mov    dword ptr [esi + 0x58], edx
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        je    L_708c
        fld    dword ptr [esi + 0x40]
        mov    eax, dword ptr [ebp + 0x14]
        mov    ecx, dword ptr [eax]
        sub    esp, 8
        fstp    qword ptr [esp]
        push    0x7979b8
        push    ebx
        push    ecx
        call    edi
        add    esp, 0x14
        xor    cl, cl
L_708c:
        fld    dword ptr [esp + 0x14]
        jmp    L_70f8
        mov    al, byte ptr [esp + 0x13]
        test    al, al
        jne    L_70b1
        mov    edx, dword ptr [edi]
        lea    eax, [esp + 0x14]
        push    eax
        push    esi
        mov    ecx, edi
        mov    dword ptr [esp + 0x1c], 0
        call    dword ptr [edx + 4]
        mov    cl, 1
L_70b1:
        fld    dword ptr [esi + 0x58]
        mov    edi, dword ptr [g_0076b424]
        fadd    dword ptr [esi + 0x48]
        fstp    dword ptr [esp + 0x14]
        mov    edx, dword ptr [esp + 0x14]
        fld    dword ptr [esi + 0x48]
        mov    dword ptr [esi + 0x58], edx
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        je    L_70f4
        fld    dword ptr [esi + 0x48]
        mov    eax, dword ptr [ebp + 0x14]
        mov    ecx, dword ptr [eax]
        sub    esp, 8
        fstp    qword ptr [esp]
        push    0x79797c
        push    ebx
        push    ecx
        call    edi
        add    esp, 0x14
        xor    cl, cl
L_70f4:
        fld    dword ptr [esp + 0x14]
L_70f8:
        fcomp    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jne    L_71dc
        mov    edx, dword ptr [ebp + 0x14]
        mov    eax, dword ptr [edx]
        push    0x79794c
        push    ebx
        push    eax
        call    edi
        add    esp, 0xc
        xor    cl, cl
        mov    al, cl
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    
        mov    al, byte ptr [esp + 0x13]
        test    al, al
        jne    L_7144
        mov    edx, dword ptr [edi]
        lea    eax, [esp + 0x14]
        push    eax
        push    esi
        mov    ecx, edi
        mov    dword ptr [esp + 0x1c], 1
        call    dword ptr [edx + 4]
        mov    cl, 1
L_7144:
        mov    esi, dword ptr [esi + 0x4c]
        test    esi, esi
        jg    L_71dc
        push    esi
        push    0x797914
        jmp    L_71ca
        mov    al, byte ptr [esp + 0x13]
        test    al, al
        jne    L_7176
        mov    eax, dword ptr [edi]
        lea    ecx, [esp + 0x14]
        push    ecx
        push    esi
        mov    ecx, edi
        mov    dword ptr [esp + 0x1c], 1
        call    dword ptr [eax + 4]
        mov    cl, 1
L_7176:
        mov    esi, dword ptr [esi + 0x50]
        test    esi, esi
        jg    L_71dc
        mov    edx, dword ptr [ebp + 0x14]
        mov    eax, dword ptr [edx]
        push    esi
        push    0x7978d8
        push    ebx
        push    eax
        call    dword ptr [g_0076b424]
        add    esp, 0x10
        xor    cl, cl
        mov    al, cl
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    
        mov    al, byte ptr [esp + 0x13]
        test    al, al
        jne    L_71bd
        mov    edx, dword ptr [edi]
        lea    eax, [esp + 0x14]
        push    eax
        push    esi
        mov    ecx, edi
        mov    dword ptr [esp + 0x1c], 1
        call    dword ptr [edx + 4]
        mov    cl, 1
L_71bd:
        mov    esi, dword ptr [esi + 0x54]
        test    esi, esi
        jg    L_71dc
        push    esi
        push    0x7978a0
L_71ca:
        mov    ecx, dword ptr [ebp + 0x14]
        mov    edx, dword ptr [ecx]
        push    ebx
        push    edx
        call    dword ptr [g_0076b424]
        add    esp, 0x10
        xor    cl, cl
L_71dc:
        pop    edi
        pop    esi
        mov    al, cl
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    
        __emit 0x8D  // alignment pad 8D 49 00
__emit 0x49
__emit 0x00
        // jump-table data @ 0x006771E8 (0 relocated pointers)
    }
}
