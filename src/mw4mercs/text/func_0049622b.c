/*
 * FUN_0049622b (extent 0x49622b-0x496c71) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076d064;
extern float  g_0076d070;
extern float  g_0076dd60;
extern float  g_007b220c;
extern int    g_007b2abc;
extern int    g_007da920;
extern float  g_007da930;
extern float  g_007da934;
extern float  g_007da938;
extern char   g_007da95c;
extern char   g_007da95d;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_0041fde0(void);
extern void __cdecl FUN_0048bcf0(void);
extern void __cdecl FUN_0048e890(void);
extern void __cdecl FUN_00491670(void);
extern void __cdecl FUN_00494990(void);
extern void __cdecl FUN_00495e10(void);
extern void __cdecl FUN_00495e30(void);
extern void __cdecl FUN_004961c0(void);
extern void __cdecl FUN_004a2b30(void);
extern void __cdecl FUN_004a3d40(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_004a2c40(void);

__declspec(naked) void FUN_0049622b(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007da920]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0x198
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_6269
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        push    ecx
        push    edx
        mov    ecx, eax
        call    FUN_004961c0
        mov    esi, eax
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
L_6269:
        xor    esi, esi
        call    FUN_006f49a0
        mov    eax, esi
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
        sub    esp, 0x34
        mov    eax, dword ptr [esp + 0x38]
        push    esi
        mov    esi, ecx
        push    eax
        call    FUN_004a2b30
        mov    ecx, dword ptr [esi + 0x10]
        mov    edx, dword ptr [ecx + 0x1ac]
        mov    eax, dword ptr [g_007da930]
        mov    ecx, dword ptr [g_007da934]
        mov    dword ptr [esi + 0x194], edx
        fld    dword ptr [esi + 0x34]
        fsub    dword ptr [g_007da930]
        mov    dword ptr [esp + 0x1c], eax
        mov    eax, dword ptr [esi + 0x44]
        mov    dword ptr [esp + 8], eax
        fld    dword ptr [esp + 8]
        fsub    dword ptr [g_007da934]
        mov    dword ptr [esp + 0x20], ecx
        mov    ecx, dword ptr [esi + 0x54]
        mov    dword ptr [esp + 0xc], ecx
        fstp    dword ptr [esp + 0x14]
        mov    edx, dword ptr [g_007da938]
        fld    dword ptr [esp + 0xc]
        mov    dword ptr [esp + 0x24], edx
        fsub    dword ptr [g_007da938]
        fld    st(0)
        fld    dword ptr [esp + 0x14]
        fld    st(0)
        fmul st(0), st(1)
        fld    st(2)
        fmul st(0), st(3)
        faddp st(1), st(0)
        fld    st(4)
        fmul st(0), st(5)
        faddp st(1), st(0)
        fsqrt    
        fstp    dword ptr [esp + 0x34]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [esp + 0x34]
        fabs    
        fld    dword ptr [g_007b220c]
        fcompp    
        fnstsw  ax
        test    ah, 1
        je    L_6396
        fld    dword ptr [g_0076d064]
        lea    edx, [esp + 0x1c]
        fdiv    dword ptr [esp + 0x34]
        push    edx
        fxch    st(2)
        fmul st(0), st(2)
        fstp    dword ptr [esp + 0x2c]
        fld    dword ptr [esp + 0x18]
        fmul st(0), st(2)
        fstp    dword ptr [esp + 0x30]
        fmul st(0), st(1)
        fstp    dword ptr [esp + 0x34]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [esp + 0x38]
        fsub    dword ptr [g_0076d070]
        fstp    dword ptr [esp + 0x38]
        call    dword ptr [g_007b2abc]
        add    esp, 4
        test    al, al
        je    L_637d
        fld    dword ptr [g_0076c5b0]
        fst    dword ptr [esi + 0x190]
        fstp    dword ptr [esi + 0x18c]
        pop    esi
        add    esp, 0x34
        ret    4
L_637d:
        fld    dword ptr [g_0076d064]
        fst    dword ptr [esi + 0x190]
        fstp    dword ptr [esi + 0x18c]
        pop    esi
        add    esp, 0x34
        ret    4
L_6396:
        xor    eax, eax
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        mov    dword ptr [esi + 0x190], eax
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        mov    dword ptr [esi + 0x18c], eax
        pop    esi
        add    esp, 0x34
        ret    4
        nop    
        sub    esp, 0x34
        push    esi
        mov    esi, ecx
        test    byte ptr [esi + 0x9c], 1
        jne    L_63c8
        xor    al, al
        pop    esi
        add    esp, 0x34
        ret    4
L_63c8:
        mov    eax, dword ptr [esp + 0x3c]
        fld    qword ptr [eax]
        push    eax
        fsub    qword ptr [esi + 0x88]
        mov    ecx, esi
        fstp    dword ptr [esp + 0x40]
        call    FUN_004a3d40
        test    al, al
        jne    L_63eb
        pop    esi
        add    esp, 0x34
        ret    4
L_63eb:
        fld    dword ptr [esi + 0x194]
        push    edi
        fsub    dword ptr [esp + 0x40]
        mov    edi, dword ptr [esi + 0x10]
        fst    dword ptr [esi + 0x194]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jne    L_6419
        mov    al, byte ptr [g_007da95c]
        test    al, al
        je    L_650a
L_6419:
        mov    eax, dword ptr [edi + 0x1ac]
        mov    ecx, dword ptr [g_007da930]
        mov    edx, dword ptr [g_007da934]
        mov    dword ptr [esi + 0x194], eax
        fld    dword ptr [esi + 0x34]
        fsub    dword ptr [g_007da930]
        mov    dword ptr [esp + 0x20], ecx
        mov    ecx, dword ptr [esi + 0x44]
        mov    dword ptr [esp + 0xc], ecx
        fld    dword ptr [esp + 0xc]
        fsub    dword ptr [g_007da934]
        mov    dword ptr [esp + 0x24], edx
        mov    edx, dword ptr [esi + 0x54]
        mov    dword ptr [esp + 0x10], edx
        fstp    dword ptr [esp + 0x18]
        mov    eax, dword ptr [g_007da938]
        fld    dword ptr [esp + 0x10]
        mov    dword ptr [esp + 0x28], eax
        fsub    dword ptr [g_007da938]
        fld    st(0)
        fld    dword ptr [esp + 0x18]
        fld    st(0)
        fmul st(0), st(1)
        fld    st(2)
        fmul st(0), st(3)
        faddp st(1), st(0)
        fld    st(4)
        fmul st(0), st(5)
        faddp st(1), st(0)
        fsqrt    
        fstp    dword ptr [esp + 0x38]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [esp + 0x38]
        fabs    
        fld    dword ptr [g_007b220c]
        fcompp    
        fnstsw  ax
        test    ah, 1
        je    L_6506
        fld    dword ptr [g_0076d064]
        lea    eax, [esp + 0x20]
        fdiv    dword ptr [esp + 0x38]
        push    eax
        fxch    st(2)
        fmul st(0), st(2)
        fstp    dword ptr [esp + 0x30]
        fld    dword ptr [esp + 0x1c]
        fmul st(0), st(2)
        fstp    dword ptr [esp + 0x34]
        fmul st(0), st(1)
        fstp    dword ptr [esp + 0x38]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [esp + 0x3c]
        fsub    dword ptr [g_0076d070]
        fstp    dword ptr [esp + 0x3c]
        call    dword ptr [g_007b2abc]
        add    esp, 4
        test    al, al
        je    L_64f8
        fld    dword ptr [g_0076c5b0]
        fstp    dword ptr [esi + 0x190]
        jmp    L_650a
L_64f8:
        fld    dword ptr [g_0076d064]
        fstp    dword ptr [esi + 0x190]
        jmp    L_650a
L_6506:
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_650a:
        fld    dword ptr [esi + 0x90]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_6533
        mov    ecx, dword ptr [esi + 0x190]
        pop    edi
        mov    dword ptr [esi + 0x18c], ecx
        mov    al, 1
        pop    esi
        add    esp, 0x34
        ret    4
L_6533:
        fld    dword ptr [esi + 0x190]
        fcomp    dword ptr [esi + 0x18c]
        fnstsw  ax
        test    ah, 1
        je    L_6588
        fld    dword ptr [esp + 0x40]
        fmul    dword ptr [edi + 0x1a8]
        fsubr    dword ptr [esi + 0x18c]
        fst    dword ptr [esi + 0x18c]
        fcomp    dword ptr [esi + 0x190]
        fnstsw  ax
        test    ah, 1
        jne    L_6572
        mov    al, byte ptr [g_007da95d]
        test    al, al
        je    L_65d3
L_6572:
        mov    edx, dword ptr [esi + 0x190]
        pop    edi
        mov    dword ptr [esi + 0x18c], edx
        mov    al, 1
        pop    esi
        add    esp, 0x34
        ret    4
L_6588:
        fld    dword ptr [esi + 0x190]
        fcomp    dword ptr [esi + 0x18c]
        fnstsw  ax
        test    ah, 0x41
        jne    L_65d3
        fld    dword ptr [esp + 0x40]
        fmul    dword ptr [edi + 0x1a4]
        fadd    dword ptr [esi + 0x18c]
        fst    dword ptr [esi + 0x18c]
        fcomp    dword ptr [esi + 0x190]
        fnstsw  ax
        test    ah, 0x41
        je    L_65c7
        mov    al, byte ptr [g_007da95d]
        test    al, al
        je    L_65d3
L_65c7:
        mov    eax, dword ptr [esi + 0x190]
        mov    dword ptr [esi + 0x18c], eax
L_65d3:
        pop    edi
        mov    al, 1
        pop    esi
        add    esp, 0x34
        ret    4
        nop    
        nop    
        nop    
        push    ebp
        mov    ebp, esp
        sub    esp, 0x84
        push    ebx
        push    esi
        push    edi
        mov    edi, ecx
        fld    dword ptr [edi + 0x18c]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jne    L_6c45
        lea    ecx, [ebp - 0x84]
        call    FUN_0048bcf0
        mov    ebx, dword ptr [edi + 0x10]
        mov    esi, dword ptr [ebp + 8]
        mov    eax, dword ptr [edi + 0xf4]
        lea    ecx, [ebx + 0x48]
        push    ecx
        lea    edx, [esi + 8]
        push    edx
        lea    ecx, [ebp - 0x80]
        mov    dword ptr [ebp - 0x84], eax
        call    FUN_00491670
        mov    eax, dword ptr [esi + 4]
        mov    ecx, dword ptr [esi]
        mov    dword ptr [ebp - 0x68], eax
        lea    edx, [edi + 0x58]
        lea    eax, [ebp - 0x60]
        mov    dword ptr [ebp - 0xc], ecx
        mov    dword ptr [ebp - 8], edx
        mov    dword ptr [ebp - 4], eax
        mov    edx, dword ptr [ebp - 8]
        push    esi
        mov    esi, dword ptr [ebp - 0xc]
        mov    eax, dword ptr [ebp - 4]
        fld    dword ptr [edx]
        fmul    dword ptr [esi]
        fld    dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 4]
        fld    dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 4]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 4]
        fxch    st(1)
        fstp    dword ptr [eax]
        fld    dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 8]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 4]
        fxch    st(1)
        fstp    dword ptr [eax + 4]
        fld    dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0xc]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 4]
        fxch    st(1)
        fstp    dword ptr [eax + 8]
        fld    dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fadd    dword ptr [esi + 0xc]
        fld    dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x18]
        fxch    st(1)
        fstp    dword ptr [eax + 0xc]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 4]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x10]
        fld    dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 8]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x14]
        fld    dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0xc]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x18]
        fld    dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fadd    dword ptr [esi + 0x1c]
        fld    dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x28]
        fxch    st(1)
        fstp    dword ptr [eax + 0x1c]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 4]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x20]
        fld    dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 8]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x24]
        fld    dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0xc]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x28]
        fld    dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp st(1), st(0)
        faddp st(1), st(0)
        fadd    dword ptr [esi + 0x2c]
        fstp    dword ptr [eax + 0x2c]
        pop    esi
        fld    dword ptr [edi + 0xec]
        fmul    dword ptr [edi + 0xe8]
        xor    eax, eax
        lea    ecx, [ebp - 0x60]
        mov    dword ptr [ebp - 0x64], ecx
        fst    dword ptr [edi + 0xf8]
        mov    dword ptr [edi + 0x100], eax
        fld    dword ptr [edi + 0xf0]
        mov    dword ptr [edi + 0x10c], eax
        fmul    dword ptr [edi + 0xe8]
        mov    dword ptr [edi + 0x118], eax
        mov    dword ptr [edi + 0x124], eax
        mov    eax, dword ptr [ebx + 0x194]
        fst    dword ptr [ebp - 0xc]
        mov    ecx, dword ptr [ebp - 0xc]
        fld    st(0)
        mov    dword ptr [ebp - 0xc], eax
        mov    al, byte ptr [ebx + 0x1a0]
        fchs    
        test    al, al
        fst    dword ptr [edi + 0xfc]
        fld    st(2)
        mov    dword ptr [edi + 0x120], ecx
        mov    ecx, dword ptr [ebx + 0x19c]
        fchs    
        fst    dword ptr [ebp - 4]
        mov    edx, dword ptr [ebp - 4]
        fstp    dword ptr [edi + 0x104]
        mov    dword ptr [edi + 0x110], edx
        mov    edx, dword ptr [ebx + 0x18c]
        fstp    dword ptr [edi + 0x108]
        mov    dword ptr [ebp - 0x10], edx
        mov    dword ptr [ebp - 4], ecx
        fstp    dword ptr [edi + 0x114]
        fstp    dword ptr [edi + 0x11c]
        fld    dword ptr [ebx + 0x184]
        fst    dword ptr [ebp - 0x30]
        je    L_6932
        mov    edx, dword ptr [edi + 0x90]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        mov    eax, edx
        lea    esi, [ebx + 0x15c]
        push    eax
        mov    ecx, esi
        mov    dword ptr [ebp - 8], edx
        call    FUN_00495e30
        fld    dword ptr [ebp - 8]
        mov    edx, dword ptr [esi + 4]
        lea    ecx, [eax + eax*2]
        fsub    dword ptr [edx + ecx*4]
        lea    eax, [edx + ecx*4]
        fmul    dword ptr [eax + 4]
        fadd    dword ptr [eax + 8]
        mov    al, byte ptr [ebx + 0x17c]
        test    al, al
        fst    dword ptr [ebp - 8]
        je    L_68d0
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        push    0
        fld    dword ptr [edi + 0x98]
        push    ecx
        fstp    dword ptr [esp]
        lea    ecx, [ebx + 0x168]
        call    FUN_00495e10
        fmul    dword ptr [ebp - 8]
L_68d0:
        mov    al, byte ptr [ebx + 0x1a1]
        fsub    dword ptr [g_0076d070]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [ebp - 8]
        mov    ecx, dword ptr [ebp - 8]
        mov    esi, eax
        mov    eax, ecx
        and    eax, 0xff
        cdq    
        and    esi, 0xff
        idiv    esi
        mov    dl, al
        mov    al, byte ptr [ebx + 0x1a1]
        imul    dl
        sub    cl, al
        mov    byte ptr [ebp - 0x14], dl
        mov    eax, dword ptr [ebp - 0x14]
        and    ecx, 0xff
        mov    dword ptr [ebp - 8], ecx
        fild    dword ptr [ebp - 8]
        and    eax, 0xff
        mov    dword ptr [ebp - 0x14], eax
        fmul    dword ptr [ebp - 0xc]
        fadd    dword ptr [ebp - 0x30]
        fild    dword ptr [ebp - 0x14]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ebp - 0x10]
        fstp    dword ptr [ebp - 0x10]
L_6932:
        fld    dword ptr [ebp - 0xc]
        mov    ecx, dword ptr [ebp - 0x10]
        mov    eax, dword ptr [edi + 0x90]
        fadd st(0), st(1)
        fld    dword ptr [ebp - 4]
        mov    edx, ecx
        fadd    dword ptr [ebp - 0x10]
        mov    dword ptr [edi + 0x17c], ecx
        fld    st(2)
        mov    ecx, eax
        fstp    dword ptr [edi + 0x168]
        lea    esi, [ebx + 0x64]
        push    ecx
        fst    dword ptr [edi + 0x16c]
        mov    ecx, esi
        fld    st(1)
        mov    dword ptr [edi + 0x184], edx
        fstp    dword ptr [edi + 0x170]
        mov    dword ptr [ebp - 4], eax
        fstp    dword ptr [edi + 0x174]
        fstp    dword ptr [edi + 0x178]
        fstp    dword ptr [edi + 0x180]
        call    FUN_00495e30
        fld    dword ptr [ebp - 4]
        lea    edx, [eax + eax*2]
        mov    eax, dword ptr [esi + 4]
        fsub    dword ptr [eax + edx*4]
        lea    eax, [eax + edx*4]
        fmul    dword ptr [eax + 4]
        fadd    dword ptr [eax + 8]
        mov    al, byte ptr [ebx + 0x7c]
        test    al, al
        je    L_69b6
        fld    dword ptr [edi + 0x98]
        fmul    dword ptr [ebx + 0x78]
        fadd    dword ptr [ebx + 0x74]
        fmulp st(1), st(0)
L_69b6:
        mov    ecx, dword ptr [edi + 0x90]
        fmul    dword ptr [edi + 0x18c]
        mov    edx, ecx
        mov    dword ptr [ebp - 4], ecx
        lea    esi, [ebx + 0x84]
        fstp    dword ptr [edi + 0xd4]
        push    edx
        mov    ecx, esi
        call    FUN_00495e30
        fld    dword ptr [ebp - 4]
        mov    ecx, dword ptr [esi + 4]
        lea    eax, [eax + eax*2]
        fsub    dword ptr [ecx + eax*4]
        lea    eax, [ecx + eax*4]
        fmul    dword ptr [eax + 4]
        fadd    dword ptr [eax + 8]
        mov    al, byte ptr [ebx + 0x9c]
        test    al, al
        je    L_6a0e
        fld    dword ptr [edi + 0x98]
        fmul    dword ptr [ebx + 0x98]
        fadd    dword ptr [ebx + 0x94]
        fmulp st(1), st(0)
L_6a0e:
        mov    edx, dword ptr [edi + 0x90]
        fmul    dword ptr [edi + 0x18c]
        mov    eax, edx
        lea    esi, [ebx + 0xa4]
        push    eax
        fstp    dword ptr [edi + 0xd8]
        mov    ecx, esi
        mov    dword ptr [ebp - 4], edx
        call    FUN_00495e30
        fld    dword ptr [ebp - 4]
        mov    edx, dword ptr [esi + 4]
        lea    ecx, [eax + eax*2]
        fsub    dword ptr [edx + ecx*4]
        lea    eax, [edx + ecx*4]
        fmul    dword ptr [eax + 4]
        fadd    dword ptr [eax + 8]
        mov    al, byte ptr [ebx + 0xbc]
        test    al, al
        je    L_6a66
        fld    dword ptr [edi + 0x98]
        fmul    dword ptr [ebx + 0xb8]
        fadd    dword ptr [ebx + 0xb4]
        fmulp st(1), st(0)
L_6a66:
        mov    eax, dword ptr [edi + 0x90]
        fmul    dword ptr [edi + 0x18c]
        mov    ecx, eax
        lea    esi, [ebx + 0xc4]
        push    ecx
        fstp    dword ptr [edi + 0xdc]
        mov    ecx, esi
        mov    dword ptr [ebp - 4], eax
        call    FUN_00495e30
        fld    dword ptr [ebp - 4]
        lea    edx, [eax + eax*2]
        mov    eax, dword ptr [esi + 4]
        fsub    dword ptr [eax + edx*4]
        lea    eax, [eax + edx*4]
        fmul    dword ptr [eax + 4]
        fadd    dword ptr [eax + 8]
        mov    al, byte ptr [ebx + 0xdc]
        test    al, al
        je    L_6abe
        fld    dword ptr [edi + 0x98]
        fmul    dword ptr [ebx + 0xd8]
        fadd    dword ptr [ebx + 0xd4]
        fmulp st(1), st(0)
L_6abe:
        mov    ecx, dword ptr [edi + 0xd4]
        fstp    dword ptr [edi + 0xe0]
        mov    edx, dword ptr [edi + 0xd8]
        mov    eax, dword ptr [edi + 0xdc]
        mov    dword ptr [edi + 0x128], ecx
        mov    ecx, dword ptr [edi + 0xe0]
        mov    dword ptr [edi + 0x130], eax
        mov    dword ptr [edi + 0x12c], edx
        mov    edx, dword ptr [edi + 0xd4]
        mov    eax, dword ptr [edi + 0xd8]
        mov    dword ptr [edi + 0x134], ecx
        mov    ecx, dword ptr [edi + 0xdc]
        mov    dword ptr [edi + 0x13c], eax
        mov    dword ptr [edi + 0x138], edx
        mov    edx, dword ptr [edi + 0xe0]
        mov    eax, dword ptr [edi + 0xd4]
        mov    dword ptr [edi + 0x140], ecx
        mov    ecx, dword ptr [edi + 0xd8]
        mov    dword ptr [edi + 0x144], edx
        mov    edx, dword ptr [edi + 0xdc]
        mov    dword ptr [edi + 0x148], eax
        mov    eax, dword ptr [edi + 0xe0]
        mov    dword ptr [edi + 0x154], eax
        mov    dword ptr [edi + 0x14c], ecx
        mov    ecx, dword ptr [edi + 0xd4]
        mov    dword ptr [edi + 0x150], edx
        mov    eax, dword ptr [edi + 0xdc]
        mov    edx, dword ptr [edi + 0xd8]
        mov    dword ptr [edi + 0x160], eax
        mov    al, byte ptr [ebx + 0x11d]
        test    al, al
        mov    dword ptr [edi + 0x158], ecx
        mov    ecx, dword ptr [edi + 0xe0]
        mov    dword ptr [edi + 0x15c], edx
        mov    dword ptr [edi + 0x164], ecx
        je    L_6bdf
        mov    edx, dword ptr [ebp + 8]
        mov    eax, dword ptr [edx + 0x20]
        fld    dword ptr [eax + 0x50]
        mov    ecx, dword ptr [eax + 0x60]
        fsub    dword ptr [ebp - 0x54]
        mov    edx, dword ptr [eax + 0x70]
        add    eax, 0x44
        mov    al, byte ptr [ebx + 0x11e]
        test    al, al
        fstp    dword ptr [ebp - 0x20]
        mov    dword ptr [ebp - 0x28], ecx
        fld    dword ptr [ebp - 0x28]
        fsub    dword ptr [ebp - 0x44]
        mov    dword ptr [ebp - 0x24], edx
        fstp    dword ptr [ebp - 0x1c]
        fld    dword ptr [ebp - 0x24]
        fsub    dword ptr [ebp - 0x34]
        fstp    dword ptr [ebp - 0x18]
        je    L_6bd3
        push    0
        push    1
        push    2
        lea    eax, [ebp - 0x20]
        jmp    L_6c22
L_6bd3:
        push    -1
        push    0
        push    2
        lea    ecx, [ebp - 0x20]
        push    ecx
        jmp    L_6c23
L_6bdf:
        mov    al, byte ptr [ebx + 0x11e]
        test    al, al
        je    L_6c2b
        mov    edx, dword ptr [ebp + 8]
        mov    eax, dword ptr [edx + 0x20]
        fld    dword ptr [eax + 0x50]
        mov    ecx, dword ptr [eax + 0x60]
        fsub    dword ptr [ebp - 0x54]
        mov    edx, dword ptr [eax + 0x70]
        add    eax, 0x44
        mov    dword ptr [ebp - 0x28], ecx
        fstp    dword ptr [ebp - 0x20]
        mov    dword ptr [ebp - 0x24], edx
        fld    dword ptr [ebp - 0x28]
        push    -1
        fsub    dword ptr [ebp - 0x44]
        push    1
        push    2
        lea    eax, [ebp - 0x20]
        fstp    dword ptr [ebp - 0x1c]
        fld    dword ptr [ebp - 0x24]
        fsub    dword ptr [ebp - 0x34]
        fstp    dword ptr [ebp - 0x18]
L_6c22:
        push    eax
L_6c23:
        lea    ecx, [ebp - 0x60]
        call    FUN_0041fde0
L_6c2b:
        mov    esi, dword ptr [ebp + 8]
        lea    ecx, [ebp - 0x84]
        push    ecx
        mov    ecx, dword ptr [esi + 0x20]
        call    FUN_0048e890
        push    esi
        mov    ecx, edi
        call    FUN_00494990
L_6c45:
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    4
        nop    
        nop    
        mov    eax, 0x3f800000
        mov    dword ptr [ecx + 0x190], eax
        mov    dword ptr [ecx + 0x18c], eax
        mov    dword ptr [ecx + 0x194], 0
        jmp    FUN_004a2c40
        ret    
    }
}
