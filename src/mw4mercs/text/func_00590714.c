/*
 * FUN_00590714 (extent 0x590714-0x590def) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076d048;
extern float  g_0076d064;
extern float  g_00770168;
extern float  g_00774600;
extern float  g_007748c8;
extern float  g_0078235c;
extern float  g_007823a8;
extern float  g_007823ac;
extern float  g_007823b0;
extern float  g_007b220c;
extern int    g_007b8ce8;
extern int    g_007b8cec;
extern int    g_007b8cf0;
extern float  g_007b8d88;
extern int    g_007b8d8c;
extern int    g_007b8d90;
extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007f25a8;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_0041a070(void);
extern void __cdecl FUN_0041acb0(void);
extern void __cdecl FUN_0041c7d0(void);
extern void __cdecl FUN_0041d810(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_005471a0(void);
extern void __cdecl FUN_0075db4a(void);
extern void __cdecl FUN_007678f0(void);
extern void __cdecl FUN_007679d0(void);

__declspec(naked) void FUN_00590714(void)
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
        mov    eax, dword ptr [esp + 0x14]
        mov    edx, dword ptr [esp + 0x18]
        sub    esp, 0x6c
        push    ebx
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 0x84]
        mov    dword ptr [esi + 0x4e4], eax
        mov    eax, dword ptr [esp + 0x78]
        mov    dword ptr [esi + 0x4e0], ecx
        mov    ecx, dword ptr [esp + 0x7c]
        mov    dword ptr [esi + 0x4e8], edx
        mov    edx, dword ptr [esp + 0x80]
        mov    dword ptr [esi + 0x4d4], eax
        mov    eax, dword ptr [esi + 0x8a4]
        xor    ebx, ebx
        cmp    eax, ebx
        mov    dword ptr [esi + 0x4d8], ecx
        mov    dword ptr [esi + 0x4dc], edx
        je    L_0784
        push    eax
        call    FUN_004084e0
        add    esp, 4
        mov    dword ptr [esi + 0x8a4], ebx
L_0784:
        mov    eax, dword ptr [esi + 0xd8]
        fld    dword ptr [esp + 0x78]
        lea    ecx, [eax + 0x80]
        mov    eax, dword ptr [ecx + 0xc]
        mov    dword ptr [esp + 8], eax
        fsub    dword ptr [esp + 8]
        mov    edx, dword ptr [ecx + 0x1c]
        fld    dword ptr [esp + 0x7c]
        mov    dword ptr [esp + 0xc], edx
        fsub    dword ptr [esp + 0xc]
        mov    eax, dword ptr [ecx + 0x2c]
        fld    dword ptr [esp + 0x80]
        mov    dword ptr [esp + 0x10], eax
        fsub    dword ptr [esp + 0x10]
        mov    dword ptr [esi + 0x8a8], ebx
        mov    dword ptr [esi + 0x8ac], ebx
        fld    st(0)
        mov    byte ptr [esi + 0x4d0], bl
        fmul st(0), st(1)
        fld    st(2)
        fmul st(0), st(3)
        faddp st(1), st(0)
        fld    st(3)
        fmul st(0), st(4)
        faddp st(1), st(0)
        fstp    st(3)
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fcom    dword ptr [g_007b220c]
        fnstsw  ax
        test    ah, 0x41
        jne    L_0808
        fcomp    dword ptr [g_007823ac]
        fnstsw  ax
        test    ah, 1
        je    L_0ac0
        jmp    L_080a
L_0808:
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_080a:
        push    ecx
        lea    ecx, [esi + 0x8b0]
        call    FUN_0041acb0
        mov    ecx, dword ptr [esp + 0x88]
        mov    edx, dword ptr [esp + 0x84]
        mov    eax, dword ptr [esp + 0x8c]
        mov    dword ptr [esi + 0x8c0], ecx
        mov    ecx, dword ptr [esp + 0x78]
        mov    dword ptr [esi + 0x8bc], edx
        mov    edx, dword ptr [esp + 0x7c]
        mov    dword ptr [esi + 0x8c4], eax
        mov    eax, dword ptr [esp + 0x80]
        mov    dword ptr [esp + 0x50], ecx
        mov    dword ptr [esi + 0x8b4], ebx
        lea    ecx, [esp + 0x84]
        mov    dword ptr [esi + 0x8b8], ebx
        push    ecx
        mov    dword ptr [esi + 0x8c0], ebx
        lea    ecx, [esp + 0x48]
        mov    dword ptr [esi + 0x8c4], ebx
        mov    dword ptr [esp + 0x64], edx
        mov    dword ptr [esp + 0x74], eax
        call    FUN_0041a070
        mov    edx, dword ptr [esi + 0x78]
        lea    ecx, [esi + 0x78]
        call    dword ptr [edx + 4]
        fld    dword ptr [esp + 0x98]
        fcom    dword ptr [g_0076c5b0]
        mov    ecx, eax
        fld    dword ptr [esp + 0x9c]
        fnstsw  ax
        fcomp    dword ptr [esi + 0x440]
        test    ah, 1
        fnstsw  ax
        jne    L_090f
        test    ah, 0x41
        jne    L_08e1
        fld    dword ptr [esp + 0xa0]
        fadd    dword ptr [esp + 0xa4]
        fmul    dword ptr [ecx + 0x2d4]
        faddp st(1), st(0)
        fcom    dword ptr [esp + 0x9c]
        fnstsw  ax
        test    ah, 0x41
        jne    L_0987
        jmp    L_097e
L_08e1:
        fld    dword ptr [esp + 0x9c]
        fcomp    dword ptr [esi + 0x440]
        fnstsw  ax
        test    ah, 1
        je    L_0987
        fld    dword ptr [esp + 0xa0]
        fadd    dword ptr [esp + 0xa4]
        fmul    dword ptr [ecx + 0x2d8]
        jmp    L_092e
L_090f:
        test    ah, 1
        je    L_0940
        fld    dword ptr [esp + 0xa0]
        fadd    dword ptr [esp + 0xa4]
        fmul    dword ptr [ecx + 0x2dc]
        fmul    dword ptr [ecx + 0x2d4]
L_092e:
        fsubp st(1), st(0)
        fcom    dword ptr [esp + 0x9c]
        fnstsw  ax
        test    ah, 1
        je    L_0987
        jmp    L_097e
L_0940:
        fld    dword ptr [esp + 0x9c]
        fcomp    dword ptr [esi + 0x440]
        fnstsw  ax
        test    ah, 0x41
        jne    L_0987
        fld    dword ptr [esp + 0xa0]
        fadd    dword ptr [esp + 0xa4]
        fmul    dword ptr [ecx + 0x2e0]
        fmul    dword ptr [ecx + 0x2d8]
        faddp st(1), st(0)
        fcom    dword ptr [esp + 0x9c]
        fnstsw  ax
        test    ah, 0x41
        jne    L_0987
L_097e:
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [esp + 0x9c]
L_0987:
        fld    dword ptr [esp + 0xa0]
        lea    eax, [esp + 0x44]
        fadd    dword ptr [esp + 0xa4]
        push    eax
        lea    ecx, [esp + 0x24]
        push    ecx
        fst    dword ptr [esp + 0xac]
        lea    ecx, [esp + 0x1c]
        fld    dword ptr [esp + 0x98]
        fmul st(0), st(1)
        fstp    dword ptr [esp + 0x28]
        fld    dword ptr [esp + 0x9c]
        fmul st(0), st(1)
        fstp    dword ptr [esp + 0x2c]
        fmul st(0), st(1)
        fstp    dword ptr [esp + 0x30]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        call    FUN_0041c7d0
        fld    dword ptr [esp + 0x14]
        push    0x30
        fsub    dword ptr [esp + 0xc]
        fld    st(0)
        fmul    dword ptr [g_00774600]
        fadd    dword ptr [esp + 0xc]
        fstp    dword ptr [esp + 0x3c]
        fld    dword ptr [esp + 0x1c]
        fsub    dword ptr [esp + 0x10]
        fst    dword ptr [esp + 0xa0]
        fmul    dword ptr [g_00774600]
        fadd    dword ptr [esp + 0x10]
        fstp    dword ptr [esp + 0x40]
        fld    dword ptr [esp + 0x20]
        fsub    dword ptr [esp + 0x14]
        fst    dword ptr [esp + 0xa4]
        fmul    dword ptr [g_00774600]
        fadd    dword ptr [esp + 0x14]
        fstp    dword ptr [esp + 0x44]
        fmul    dword ptr [g_007823a8]
        fadd    dword ptr [esp + 0xc]
        fstp    dword ptr [esp + 0x30]
        fld    dword ptr [esp + 0xa0]
        fmul    dword ptr [g_007823a8]
        fadd    dword ptr [esp + 0x10]
        fstp    dword ptr [esp + 0x34]
        fld    dword ptr [esp + 0xa4]
        fmul    dword ptr [g_007823a8]
        fadd    dword ptr [esp + 0x14]
        fstp    dword ptr [esp + 0x38]
        call    FUN_004084d0
        add    esp, 4
        cmp    eax, ebx
        je    L_0a86
        lea    edx, [esp + 0x14]
        push    edx
        lea    ecx, [esp + 0x30]
        push    ecx
        lea    edx, [esp + 0x40]
        push    edx
        lea    ecx, [esp + 0x14]
        push    ecx
        mov    ecx, eax
        call    FUN_007678f0
        jmp    L_0a88
L_0a86:
        xor    eax, eax
L_0a88:
        fld    dword ptr [esp + 0xa4]
        mov    dword ptr [esi + 0x8a4], eax
        fst    dword ptr [esi + 0x8a8]
        fcomp    dword ptr [g_0078235c]
        mov    dword ptr [esi + 0x8ac], ebx
        fnstsw  ax
        test    ah, 1
        je    L_0ac7
        mov    dword ptr [esi + 0x8a8], 0x3a83126f
        pop    esi
        pop    ebx
        add    esp, 0x6c
        ret    0x30
L_0ac0:
        mov    byte ptr [esi + 0x4d0], 1
L_0ac7:
        pop    esi
        pop    ebx
        add    esp, 0x6c
        ret    0x30
        nop    
        mov    edx, dword ptr [esp + 8]
        fld    dword ptr [g_007b8d88]
        mov    eax, dword ptr [g_007b8d8c]
        fstp    dword ptr [edx]
        sub    esp, 0xc
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [g_007b8d90]
        mov    dword ptr [edx + 4], eax
        mov    eax, dword ptr [g_007b8cec]
        push    edi
        mov    edi, dword ptr [esp + 0x20]
        mov    dword ptr [edi + 4], eax
        mov    eax, dword ptr [g_007b8cf0]
        mov    dword ptr [edx + 8], ecx
        mov    ecx, dword ptr [g_007b8ce8]
        mov    dword ptr [edi], ecx
        mov    dword ptr [edi + 8], eax
        mov    al, byte ptr [esi + 0x4d0]
        test    al, al
        je    L_0b5f
        mov    ecx, dword ptr [esi + 0x4d4]
        mov    eax, dword ptr [esi + 0x4d8]
        mov    dword ptr [edx], ecx
        mov    ecx, dword ptr [esi + 0x4dc]
        mov    dword ptr [edx + 4], eax
        mov    eax, dword ptr [esi + 0x4e0]
        mov    dword ptr [edx + 8], ecx
        mov    edx, dword ptr [esi + 0x4e4]
        mov    ecx, dword ptr [esi + 0x4e8]
        mov    dword ptr [edi + 4], edx
        mov    dword ptr [edi], eax
        mov    dword ptr [edi + 8], ecx
        pop    edi
        mov    byte ptr [esi + 0x4d0], 0
        mov    al, 1
        pop    esi
        add    esp, 0xc
        ret    0xc
L_0b5f:
        mov    ecx, dword ptr [esi + 0x8a4]
        test    ecx, ecx
        jne    L_0b73
        pop    edi
        xor    al, al
        pop    esi
        add    esp, 0xc
        ret    0xc
L_0b73:
        fld    dword ptr [esp + 0x18]
        fdiv    dword ptr [esi + 0x8a8]
        fadd    dword ptr [esi + 0x8ac]
        fst    dword ptr [esi + 0x8ac]
        fcomp    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jne    L_0ba0
        mov    dword ptr [esi + 0x8ac], 0x3f800000
L_0ba0:
        lea    eax, [esp + 8]
        push    eax
        push    edx
        mov    edx, dword ptr [esi + 0x8ac]
        push    edx
        call    FUN_007679d0
        fld    dword ptr [esi + 0x8ac]
        fadd    st(0), st(0)
        fst    dword ptr [esp + 0x1c]
        fcomp    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jne    L_0bd3
        mov    dword ptr [esp + 0x1c], 0x3f800000
L_0bd3:
        mov    eax, dword ptr [esp + 0x1c]
        push    eax
        lea    ecx, [esi + 0x8bc]
        push    ecx
        lea    edx, [esi + 0x8b0]
        push    edx
        mov    ecx, edi
        call    FUN_0041d810
        cmp    dword ptr [esi + 0x8ac], 0x3f800000
        jne    L_0c03
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [eax + 0x15c]
L_0c03:
        pop    edi
        mov    al, 1
        pop    esi
        add    esp, 0xc
        ret    0xc
        nop    
        nop    
        nop    
        sub    esp, 8
        mov    eax, dword ptr [ecx + 0x98c]
        add    eax, 0xa
__emit 0x89  // mov dword ptr [esp+0], eax
__emit 0x44
__emit 0x24
__emit 0x00
__emit 0xDB  // fild dword ptr [esp] (explicit disp8=0)
__emit 0x44
__emit 0x24
__emit 0x00
        push    esi
        push    edi
        mov    edi, dword ptr [ecx + 0x34c]
        fmul    dword ptr [g_007823b0]
        mov    dword ptr [esp + 8], 0
        fstp    dword ptr [esp + 0xc]
L_0c3e:
        test    edi, edi
        je    L_0c86
        mov    esi, dword ptr [edi]
        test    esi, esi
        mov    edi, dword ptr [edi + 4]
        je    L_0c86
        mov    eax, dword ptr [g_007f25a8]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        je    L_0c3e
        mov    edx, dword ptr [esi + 0x78]
        lea    ecx, [esi + 0x78]
        call    dword ptr [edx + 4]
        fld    dword ptr [eax + 0x6c]
        fadd    dword ptr [g_0076d064]
        fdivr    dword ptr [g_00770168]
        fld    dword ptr [eax + 0x3c]
        fadd    st(0), st(0)
        fmulp st(1), st(0)
        fadd    dword ptr [esp + 8]
        fstp    dword ptr [esp + 8]
        jmp    L_0c3e
L_0c86:
        fld    dword ptr [esp + 0xc]
        pop    edi
        fmul    dword ptr [g_007748c8]
        mov    ecx, 0x64
        fld    dword ptr [esp + 4]
        pop    esi
        fabs    
        fld    dword ptr [g_007b220c]
        fcompp    
        fnstsw  ax
        test    ah, 1
        je    L_0cdd
__emit 0xD8  // fsub dword ptr [esp] (explicit disp8=0)
__emit 0x64
__emit 0x24
__emit 0x00
__emit 0xD8  // fdiv dword ptr [esp] (explicit disp8=0)
__emit 0x74
__emit 0x24
__emit 0x00
        fmul    dword ptr [g_0076d048]
        fadd    dword ptr [g_0076d048]
        call    FUN_0075db4a
        test    eax, eax
        jge    L_0ccf
        xor    eax, eax
        add    esp, 8
        ret    
L_0ccf:
        cmp    eax, 0x64
        jle    L_0ce1
        mov    eax, 0x64
        add    esp, 8
        ret    
L_0cdd:
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        mov    eax, ecx
L_0ce1:
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
        nop    
        nop    
        nop    
        push    ecx
        push    ebx
        push    esi
        push    edi
        mov    esi, ecx
        call    FUN_005471a0
        cmp    eax, 3
        jne    L_0d1d
        mov    esi, dword ptr [esi + 0x140]
        test    esi, esi
        jle    L_0d13
        cmp    esi, eax
        jg    L_0d13
        pop    edi
        pop    esi
        pop    ebx
        pop    ecx
        ret    
L_0d13:
        pop    edi
        pop    esi
        mov    eax, 4
        pop    ebx
        pop    ecx
        ret    
L_0d1d:
        mov    ebx, dword ptr [esi + 0x2fc]
        test    ebx, ebx
        je    L_0d55
        mov    al, byte ptr [esi + 0xdc]
        test    al, al
        jne    L_0d55
        lea    ecx, [esp + 0xc]
        mov    dword ptr [esp + 0xc], 0
        mov    eax, dword ptr [ebx]
        push    ecx
        mov    ecx, ebx
        call    dword ptr [eax + 0xcc]
        cmp    al, 1
        jne    L_0d55
        mov    eax, dword ptr [esp + 0xc]
        pop    edi
        pop    esi
        pop    ebx
        pop    ecx
        ret    
L_0d55:
        mov    edi, dword ptr [esi + 0x4cc]
        cmp    edi, 8
        jge    L_0db3
        mov    edx, dword ptr [g_007dab44]
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0xc]
        add    eax, 0xc
        xor    ecx, 0x85739531
        mov    edx, dword ptr [ecx + edi*4 + 0x204d00]
        test    edx, edx
        je    L_0dab
        mov    edx, dword ptr [eax]
        xor    edx, 0x85739531
        mov    ecx, dword ptr [edx + edi*4 + 0x204d00]
        call    FUN_0041fd80
        test    eax, eax
        je    L_0dab
        mov    eax, dword ptr [eax + 0x514]
        pop    edi
        pop    esi
        add    eax, 3
        pop    ebx
        pop    ecx
        ret    
L_0dab:
        lea    eax, [edi + 3]
        pop    edi
        pop    esi
        pop    ebx
        pop    ecx
        ret    
L_0db3:
        call    FUN_005471a0
        cmp    eax, 1
        jne    L_0de4
        test    ebx, ebx
        je    L_0dd6
        mov    al, byte ptr [esi + 0xdc]
        test    al, al
        jne    L_0dd6
        mov    eax, dword ptr [esi + 0x30]
        pop    edi
        pop    esi
        add    eax, 0x64
        pop    ebx
        pop    ecx
        ret    
L_0dd6:
        xor    eax, eax
        mov    al, byte ptr [esi + 0x14]
        lea    eax, [eax + edi + 8]
        pop    edi
        pop    esi
        pop    ebx
        pop    ecx
        ret    
L_0de4:
        mov    eax, dword ptr [esi + 0x140]
        pop    edi
        pop    esi
        pop    ebx
        pop    ecx
        ret    
    }
}
