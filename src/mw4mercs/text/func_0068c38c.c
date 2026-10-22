/*
 * FUN_0068c38c (extent 0x68c38c-0x68c6bf) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076d064;
extern float  g_0076d598;
extern float  g_0076df00;
extern float  g_0076f5d8;
extern float  g_007704c0;
extern float  g_00782350;
extern float  g_00782354;
extern float  g_00798e60;
extern float  g_00798e64;
extern float  g_00798ea4;
extern int    g_007b8d68;
extern int    g_007b8d6c;
extern int    g_007b8d70;
extern int    g_007f24cc;
extern void __cdecl FUN_00415020(void);
extern void __cdecl FUN_00416110(void);
extern void __cdecl FUN_005dcd00(void);
extern void __cdecl FUN_006b0780(void);
extern void __cdecl FUN_006b0790(void);
extern void __cdecl FUN_00707e70(void);

__declspec(naked) void FUN_0068c38c(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 0xc]
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 0x10]
        push    eax
        push    ecx
        push    edi
        mov    ecx, esi
        call    FUN_006b0780
        mov    edx, dword ptr [edi + 0x170]
        mov    cl, byte ptr [edx + 0x30]
        xor    eax, eax
        and    cl, 1
        pop    edi
        mov    dword ptr [esi + 0x24], eax
        mov    byte ptr [esi + 0x20], cl
        mov    byte ptr [esi + 0x28], al
        mov    dword ptr [esi + 8], 1
        pop    esi
        ret    0xc
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 0xc]
        sub    esp, 8
        push    ebp
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0x18]
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 0x1c]
        push    eax
        push    ecx
        push    edi
        mov    ecx, esi
        call    FUN_006b0790
        mov    edi, dword ptr [edi + 0x360]
        test    edi, edi
        je    L_c637
        mov    edx, dword ptr [edi + 0x410]
        mov    ecx, dword ptr [edi + 0x40c]
        sub    edx, ecx
        sar    edx, 2
        je    L_c637
        mov    eax, ecx
        cmp    dword ptr [eax], 0
        je    L_c637
        mov    ecx, dword ptr [edi + 0x410]
        mov    edx, eax
        sub    ecx, edx
        sar    ecx, 2
        je    L_c431
        mov    eax, dword ptr [edx]
        jmp    L_c433
L_c431:
        xor    eax, eax
L_c433:
        lea    ecx, [eax + 0x78]
        mov    eax, dword ptr [ecx]
        call    dword ptr [eax + 4]
        mov    ebp, eax
        test    ebp, ebp
        je    L_c637
        call    FUN_00415020
        fld    dword ptr [g_00798e64]
        fsub    dword ptr [g_00798e60]
        fmulp st(1), st(0)
        fadd    dword ptr [g_00798e60]
        fst    dword ptr [esp + 0x1c]
        fcomp    dword ptr [ebp + 0x634]
        fnstsw  ax
        test    ah, 0x41
        jne    L_c479
        mov    ecx, dword ptr [ebp + 0x634]
        mov    dword ptr [esp + 0x1c], ecx
L_c479:
        fld    dword ptr [ebp + 0x63c]
        fcom    dword ptr [g_0076f5d8]
        fnstsw  ax
        test    ah, 0x41
        jne    L_c494
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [g_0076f5d8]
L_c494:
        mov    cl, byte ptr [esi + 0x20]
        test    cl, cl
        mov    edx, dword ptr [edi + 0x410]
        mov    ebp, dword ptr [edi + 0x40c]
        je    L_c4b8
        sub    edx, ebp
        sar    edx, 2
        je    L_c4b4
        mov    eax, ebp
        mov    eax, dword ptr [eax]
        jmp    L_c4cd
L_c4b4:
        xor    eax, eax
        jmp    L_c4cd
L_c4b8:
        sub    edx, ebp
        sar    edx, 2
        je    L_c4c9
        mov    eax, dword ptr [edi + 0x40c]
        mov    eax, dword ptr [eax]
        jmp    L_c4cb
L_c4c9:
        xor    eax, eax
L_c4cb:
        fchs    
L_c4cd:
        fsub    dword ptr [eax + 0x198]
        fcom    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        je    L_c4e6
        fmul    dword ptr [g_0076d598]
L_c4e6:
        fld    dword ptr [esp + 0x1c]
        fmul    dword ptr [g_007704c0]
        fld    st(0)
        fld    st(0)
        fdivrp st(1), st(0)
        fld    st(0)
        fmul st(0), st(1)
        fmul st(0), st(2)
        fmul    dword ptr [g_0076df00]
        fxch    st(1)
        fmul    dword ptr [esi + 0x24]
        fmul    dword ptr [esp + 0x1c]
        faddp st(1), st(0)
        fld    st(2)
        fcompp    
        fnstsw  ax
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        test    ah, 0x41
        je    L_c51e
        mov    byte ptr [esi + 0x28], 1
L_c51e:
        fcomp    dword ptr [g_00798ea4]
        fnstsw  ax
        test    ah, 1
        jne    L_c542
        mov    al, byte ptr [esi + 0x28]
        test    al, al
        je    L_c567
        fld    dword ptr [esi + 0x24]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_c555
L_c542:
        test    cl, cl
        sete    cl
        mov    byte ptr [esi + 0x20], cl
        mov    dword ptr [esi + 0x24], 0
        mov    byte ptr [esi + 0x28], 0
L_c555:
        mov    al, byte ptr [esi + 0x28]
        test    al, al
        je    L_c567
        fld    dword ptr [esi + 0x24]
        fsub    dword ptr [g_007704c0]
        jmp    L_c570
L_c567:
        fld    dword ptr [esi + 0x24]
        fadd    dword ptr [g_007704c0]
L_c570:
        fstp    dword ptr [esi + 0x24]
        fld    dword ptr [esi + 0x24]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        je    L_c58c
        mov    dword ptr [esi + 0x24], 0
        jmp    L_c5a3
L_c58c:
        fld    dword ptr [esi + 0x24]
        fcomp    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jne    L_c5a3
        mov    dword ptr [esi + 0x24], 0x3f800000
L_c5a3:
        mov    al, byte ptr [esi + 0x20]
        test    al, al
        je    L_c5b3
        mov    edx, dword ptr [esi + 0x24]
        mov    dword ptr [esp + 0x1c], edx
        jmp    L_c5bc
L_c5b3:
        fld    dword ptr [esi + 0x24]
        fchs    
        fstp    dword ptr [esp + 0x1c]
L_c5bc:
        fld    dword ptr [esp + 0x1c]
        fcomp    dword ptr [g_00782354]
        fnstsw  ax
        test    ah, 1
        je    L_c5d7
        mov    dword ptr [esp + 0x1c], 0xbe99999a
        jmp    L_c5f0
L_c5d7:
        fld    dword ptr [esp + 0x1c]
        fcomp    dword ptr [g_00782350]
        fnstsw  ax
        test    ah, 0x41
        jne    L_c5f0
        mov    dword ptr [esp + 0x1c], 0x3e99999a
L_c5f0:
        push    0
        call    FUN_00707e70
        fstp    qword ptr [esp + 0xc]
        mov    ecx, dword ptr [g_007f24cc]
        call    FUN_00416110
        test    eax, eax
        je    L_c616
        mov    dword ptr [eax + 4], 5
        mov    byte ptr [eax], 0
        jmp    L_c618
L_c616:
        xor    eax, eax
L_c618:
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 0x10]
        mov    dword ptr [eax + 8], ecx
        mov    ecx, dword ptr [esp + 0x1c]
        mov    dword ptr [eax + 0x14], ecx
        mov    ecx, dword ptr [esp + 0x18]
        push    eax
        mov    dword ptr [eax + 0xc], edx
        call    FUN_005dcd00
L_c637:
        pop    edi
        pop    esi
        pop    ebp
        add    esp, 8
        ret    0xc
        mov    edx, dword ptr [esp + 8]
        mov    eax, ecx
        mov    ecx, dword ptr [esp + 4]
        mov    dword ptr [eax], ecx
        mov    ecx, dword ptr [esp + 0xc]
        mov    dword ptr [eax + 4], edx
        mov    edx, dword ptr [g_007b8d68]
        mov    dword ptr [eax + 8], ecx
        mov    ecx, dword ptr [g_007b8d6c]
        mov    dword ptr [eax + 0x18], edx
        mov    edx, dword ptr [g_007b8d70]
        mov    byte ptr [eax + 0x24], 0
        mov    dword ptr [eax + 0x1c], ecx
        mov    dword ptr [eax + 0x20], edx
        ret    0xc
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    edx, dword ptr [esp + 8]
        mov    eax, ecx
        mov    ecx, dword ptr [esp + 4]
        mov    dword ptr [eax], ecx
        mov    ecx, dword ptr [esp + 0xc]
        mov    dword ptr [eax + 4], edx
        mov    edx, dword ptr [g_007b8d68]
        mov    dword ptr [eax + 8], ecx
        mov    ecx, dword ptr [g_007b8d6c]
        mov    dword ptr [eax + 0x18], edx
        mov    edx, dword ptr [g_007b8d70]
        mov    dword ptr [eax + 0x1c], ecx
        mov    ecx, dword ptr [esp + 0x10]
        mov    byte ptr [eax + 0x24], 1
        mov    dword ptr [eax + 0x20], edx
        mov    dword ptr [eax + 0x28], ecx
        ret    0x10
    }
}
