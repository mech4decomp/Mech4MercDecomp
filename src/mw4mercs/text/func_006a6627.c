/*
 * FUN_006a6627 (extent 0x6a6627-0x6a6940) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076d064;
extern float  g_0076d070;
extern int    g_00799e2c;
extern char   g_0082db28;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_0040ca10(void);
extern void __cdecl FUN_00419480(void);

__declspec(naked) void FUN_006a6627(void)
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
        test    byte ptr [esp + 4], 1
        push    esi
        mov    esi, ecx
        mov    dword ptr [esi], 0x795450
        je    L_6649
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_6649:
        mov    eax, esi
        pop    esi
        ret    4
        nop    
        push    ebp
        mov    ebp, esp
        sub    esp, 0x84
        push    esi
        push    edi
        mov    edi, ecx
        mov    eax, dword ptr [edi + 0x10]
        cmp    eax, 3
        jne    L_6755
        mov    ecx, dword ptr [ebp + 0xc]
        mov    eax, dword ptr [ecx + 4]
        mov    esi, dword ptr [ecx]
        mov    ecx, eax
        sub    ecx, esi
        sar    ecx, 2
        mov    dword ptr [ebp + 8], 0x3f800000
        je    L_691d
        cmp    esi, eax
        je    L_691d
        push    ebx
        mov    ebx, dword ptr [ebp + 0x10]
L_6691:
        mov    eax, dword ptr [g_00799e2c]
        mov    ecx, dword ptr [esi]
        mov    edx, dword ptr [ecx]
        push    0
        push    eax
        lea    eax, [ebp - 0x18]
        push    eax
        call    dword ptr [edx + 0xf8]
        push    eax
        lea    ecx, [ebp - 0x18]
        call    FUN_0040c410
        push    ebx
        lea    ecx, [ebp - 0x18]
        push    ecx
        lea    ecx, [ebp - 0xc]
        call    FUN_0040ca10
        fld    dword ptr [ebp - 8]
        fmul    dword ptr [ebp - 8]
        fld    dword ptr [ebp - 4]
        fmul    dword ptr [ebp - 4]
        faddp st(1), st(0)
        fld    dword ptr [ebp - 0xc]
        fmul    dword ptr [ebp - 0xc]
        faddp st(1), st(0)
        fstp    dword ptr [ebp + 0x10]
        mov    eax, dword ptr [ebp + 0x10]
        sar    eax, 1
        add    eax, 0x1fc00000
        mov    dword ptr [ebp - 0x24], eax
        fld    dword ptr [ebp - 0x24]
        mov    eax, dword ptr [edi + 4]
        mov    edx, dword ptr [edi + 8]
        fstp    dword ptr [ebp + 0x10]
        fld    dword ptr [ebp + 0x10]
        mov    dword ptr [ebp - 0x1c], eax
        fcomp    dword ptr [ebp - 0x1c]
        mov    dword ptr [ebp - 0x20], edx
        fnstsw  ax
        test    ah, 1
        je    L_670a
        fld    dword ptr [g_0076c5b0]
        jmp    L_672d
L_670a:
        fld    dword ptr [ebp + 0x10]
        fcomp    dword ptr [ebp - 0x20]
        fnstsw  ax
        test    ah, 0x41
        jne    L_671f
        fld    dword ptr [g_0076d064]
        jmp    L_672d
L_671f:
        fld    dword ptr [ebp + 0x10]
        fsub    dword ptr [ebp - 0x1c]
        fld    dword ptr [ebp - 0x20]
        fsub    dword ptr [ebp - 0x1c]
        fdivp st(1), st(0)
L_672d:
        fcom    dword ptr [ebp + 8]
        fnstsw  ax
        test    ah, 1
        je    L_673c
        fstp    dword ptr [ebp + 8]
        jmp    L_673e
L_673c:
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_673e:
        mov    ecx, dword ptr [ebp + 0xc]
        mov    eax, dword ptr [ecx + 4]
        add    esi, 4
        cmp    esi, eax
        jne    L_6691
        pop    ebx
        jmp    L_691d
L_6755:
        sub    eax, 0
        je    L_6837
        dec    eax
        je    L_67fb
        dec    eax
        je    L_679b
        mov    ecx, dword ptr [ebp + 8]
        mov    edx, dword ptr [ecx]
        call    dword ptr [edx + 0x34]
        mov    eax, dword ptr [eax + 0xd8]
        add    eax, 0x80
        push    eax
        lea    ecx, [ebp - 0x18]
        call    FUN_00419480
        mov    eax, dword ptr [ebp - 0x18]
        mov    ecx, dword ptr [ebp - 0x14]
        mov    edx, dword ptr [ebp - 0x10]
        mov    dword ptr [ebp - 0xc], eax
        mov    dword ptr [ebp - 8], ecx
        mov    dword ptr [ebp - 4], edx
        jmp    L_6898
L_679b:
        mov    esi, dword ptr [ebp + 8]
        mov    eax, dword ptr [esi]
        push    1
        mov    ecx, esi
        call    dword ptr [eax + 0x44]
        test    eax, eax
        jne    L_67b9
        fld    dword ptr [g_0076d070]
        pop    edi
        pop    esi
        mov    esp, ebp
        pop    ebp
        ret    0xc
L_67b9:
        mov    edx, dword ptr [esi]
        push    0
        mov    ecx, esi
        call    dword ptr [edx + 0x44]
        mov    ecx, dword ptr [g_00799e2c]
        mov    edx, dword ptr [eax]
        push    0
        push    ecx
        lea    ecx, [ebp - 0xc]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0xf8]
        mov    edx, dword ptr [eax]
        mov    dword ptr [ebp - 0x30], edx
        mov    ecx, dword ptr [eax + 4]
        mov    dword ptr [ebp - 0x2c], ecx
        mov    edx, dword ptr [eax + 8]
        lea    eax, [ebp - 0x30]
        push    eax
        lea    ecx, [ebp - 0xc]
        mov    dword ptr [ebp - 0x28], edx
        call    FUN_0040c410
        jmp    L_6898
L_67fb:
        mov    ecx, dword ptr [ebp + 8]
        mov    edx, dword ptr [ecx]
        call    dword ptr [edx + 0x3c]
        mov    ecx, dword ptr [g_00799e2c]
        mov    edx, dword ptr [eax]
        push    0
        push    ecx
        lea    ecx, [ebp - 0xc]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0xf8]
        fld    dword ptr [eax]
        mov    edx, dword ptr [eax + 4]
        mov    eax, dword ptr [eax + 8]
        fstp    dword ptr [ebp - 0xc]
        mov    ecx, edx
        mov    dword ptr [ebp - 0x50], edx
        mov    edx, eax
        mov    dword ptr [ebp - 0x4c], eax
        mov    dword ptr [ebp - 8], ecx
        mov    dword ptr [ebp - 4], edx
        jmp    L_6898
L_6837:
        mov    al, byte ptr [g_0082db28]
        mov    ecx, dword ptr [ebp + 8]
        cmp    al, 1
        mov    eax, dword ptr [ecx]
        jne    L_686f
        lea    edx, [ebp - 0x84]
        push    edx
        call    dword ptr [eax + 0xb0]
        push    eax
        lea    ecx, [ebp - 0x3c]
        call    FUN_00419480
        mov    eax, dword ptr [ebp - 0x3c]
        mov    ecx, dword ptr [ebp - 0x38]
        mov    edx, dword ptr [ebp - 0x34]
        mov    dword ptr [ebp - 0xc], eax
        mov    dword ptr [ebp - 8], ecx
        mov    dword ptr [ebp - 4], edx
        jmp    L_6898
L_686f:
        call    dword ptr [eax + 0x34]
        mov    eax, dword ptr [eax + 0xd8]
        add    eax, 0x80
        push    eax
        lea    ecx, [ebp - 0x48]
        call    FUN_00419480
        mov    ecx, dword ptr [ebp - 0x48]
        mov    edx, dword ptr [ebp - 0x44]
        mov    eax, dword ptr [ebp - 0x40]
        mov    dword ptr [ebp - 0xc], ecx
        mov    dword ptr [ebp - 8], edx
        mov    dword ptr [ebp - 4], eax
L_6898:
        mov    ecx, dword ptr [ebp + 0x10]
        push    ecx
        lea    edx, [ebp - 0xc]
        push    edx
        lea    ecx, [ebp - 0x18]
        call    FUN_0040ca10
        fld    dword ptr [ebp - 0x14]
        fmul    dword ptr [ebp - 0x14]
        fld    dword ptr [ebp - 0x10]
        fmul    dword ptr [ebp - 0x10]
        faddp st(1), st(0)
        fld    dword ptr [ebp - 0x18]
        fmul    dword ptr [ebp - 0x18]
        faddp st(1), st(0)
        fstp    dword ptr [ebp + 8]
        mov    eax, dword ptr [ebp + 8]
        sar    eax, 1
        add    eax, 0x1fc00000
        mov    dword ptr [ebp + 0xc], eax
        fld    dword ptr [ebp + 0xc]
        mov    ecx, dword ptr [edi + 4]
        mov    eax, dword ptr [edi + 8]
        fstp    dword ptr [ebp + 8]
        fld    dword ptr [ebp + 8]
        mov    dword ptr [ebp + 0xc], ecx
        fcomp    dword ptr [ebp + 0xc]
        mov    dword ptr [ebp + 0x10], eax
        fnstsw  ax
        test    ah, 1
        je    L_68f6
        mov    dword ptr [ebp + 8], 0
        jmp    L_691d
L_68f6:
        fld    dword ptr [ebp + 8]
        fcomp    dword ptr [ebp + 0x10]
        fnstsw  ax
        test    ah, 0x41
        jne    L_690c
        mov    dword ptr [ebp + 8], 0x3f800000
        jmp    L_691d
L_690c:
        fld    dword ptr [ebp + 8]
        fsub    dword ptr [ebp + 0xc]
        fld    dword ptr [ebp + 0x10]
        fsub    dword ptr [ebp + 0xc]
        fdivp st(1), st(0)
        fstp    dword ptr [ebp + 8]
L_691d:
        mov    eax, dword ptr [edi + 0xc]
        test    eax, eax
        jne    L_6935
        fld    dword ptr [g_0076d064]
        pop    edi
        fsub    dword ptr [ebp + 8]
        pop    esi
        mov    esp, ebp
        pop    ebp
        ret    0xc
L_6935:
        fld    dword ptr [ebp + 8]
        pop    edi
        pop    esi
        mov    esp, ebp
        pop    ebp
        ret    0xc
    }
}
