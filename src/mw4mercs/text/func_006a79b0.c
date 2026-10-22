/*
 * FUN_006a79b0 (extent 0x6a79b0-0x6a7cd8) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076d064;
extern float  g_0076e1ec;
extern float  g_007704c0;
extern int    g_00799e2c;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0040c5d0(void);
extern void __cdecl FUN_0040ca40(void);
extern void __cdecl FUN_00415020(void);
extern void __cdecl FUN_00428730(void);
extern void __cdecl FUN_005cb540(void);
extern void __cdecl FUN_006a57b0(void);
extern void __cdecl FUN_006a75c0(void);

__declspec(naked) void FUN_006a79b0(void)
{
    __asm {
        mov    edx, dword ptr [esp + 4]
        sub    esp, 0xc
        lea    eax, [ecx + 8]
        mov    ecx, dword ptr [ecx + 4]
        push    eax
        push    ecx
        push    edx
        lea    eax, [esp + 0xc]
        push    eax
        call    FUN_006a75c0
        push    eax
        call    FUN_006a57b0
        add    esp, 0x20
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
        mov    edx, dword ptr [esp + 8]
        mov    eax, ecx
        mov    ecx, dword ptr [esp + 4]
        mov    dword ptr [eax + 4], ecx
        mov    ecx, dword ptr [esp + 0xc]
        mov    dword ptr [eax + 8], edx
        mov    dword ptr [eax + 0xc], ecx
        mov    dword ptr [eax], 0x799e7c
        ret    0xc
        test    byte ptr [esp + 4], 1
        push    esi
        mov    esi, ecx
        mov    dword ptr [esi], 0x795458
        je    L_7a19
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_7a19:
        mov    eax, esi
        pop    esi
        ret    4
        nop    
        mov    eax, 1
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
        sub    esp, 0x30
        push    ebx
        mov    ebx, ecx
        mov    eax, dword ptr [ebx + 4]
        test    eax, eax
        push    esi
        mov    esi, dword ptr [esp + 0x3c]
        push    edi
        jne    L_7aa1
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [eax + 0x34]
        mov    ecx, dword ptr [g_00799e2c]
        mov    edx, dword ptr [eax]
        push    0
        push    ecx
        lea    ecx, [esp + 0x2c]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0xf8]
        fld    dword ptr [eax]
        mov    edx, dword ptr [eax + 4]
        mov    eax, dword ptr [eax + 8]
        fstp    dword ptr [esp + 0x24]
        mov    ecx, edx
        mov    dword ptr [esp + 0x1c], edx
        mov    edx, eax
        mov    dword ptr [esp + 0x20], eax
        mov    eax, dword ptr [esi]
        mov    dword ptr [esp + 0x28], ecx
        mov    ecx, esi
        mov    dword ptr [esp + 0x2c], edx
        call    dword ptr [eax + 0x34]
        lea    ecx, [esp + 0x30]
        push    ecx
        mov    ecx, dword ptr [eax + 0xd8]
        add    ecx, 0x80
        call    FUN_00428730
        jmp    L_7b0a
L_7aa1:
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 0x3c]
        mov    ecx, dword ptr [g_00799e2c]
        mov    edx, dword ptr [eax]
        push    0
        push    ecx
        lea    ecx, [esp + 0x2c]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0xf8]
        fld    dword ptr [eax]
        mov    edx, dword ptr [eax + 4]
        mov    eax, dword ptr [eax + 8]
        fstp    dword ptr [esp + 0x24]
        mov    ecx, edx
        mov    dword ptr [esp + 0x1c], edx
        mov    edx, eax
        mov    dword ptr [esp + 0x20], eax
        mov    eax, dword ptr [esi]
        mov    dword ptr [esp + 0x28], ecx
        mov    ecx, esi
        mov    dword ptr [esp + 0x2c], edx
        call    dword ptr [eax + 0x3c]
        mov    eax, dword ptr [eax + 0xd8]
        fld    dword ptr [eax + 0x88]
        add    eax, 0x80
        fstp    dword ptr [esp + 0x30]
        fld    dword ptr [eax + 0x18]
        fstp    dword ptr [esp + 0x34]
        fld    dword ptr [eax + 0x28]
        fstp    dword ptr [esp + 0x38]
L_7b0a:
        mov    ecx, dword ptr [ebx + 0xc]
        mov    edi, dword ptr [esp + 0x44]
        mov    dword ptr [esp + 0x40], 0
        mov    dword ptr [esp + 0xc], ecx
L_7b1d:
        mov    ecx, dword ptr [esp + 0x38]
        fld    dword ptr [esp + 0x40]
        mov    edx, dword ptr [esp + 0x30]
        fmul    dword ptr [ebx + 8]
        mov    eax, dword ptr [esp + 0x34]
        push    ecx
        mov    dword ptr [esp + 0x1c], edx
        lea    edx, [esp + 0x1c]
        mov    dword ptr [esp + 0x24], ecx
        fstp    dword ptr [esp]
        push    edx
        lea    ecx, [esp + 0x20]
        mov    dword ptr [esp + 0x24], eax
        call    FUN_0040ca40
        fld    dword ptr [esp + 0x18]
        fadd    dword ptr [esp + 0x24]
        fst    dword ptr [esp + 0x18]
        fld    dword ptr [esp + 0x1c]
        fadd    dword ptr [esp + 0x28]
        fstp    dword ptr [esp + 0x1c]
        fld    dword ptr [esp + 0x20]
        fadd    dword ptr [esp + 0x2c]
        fstp    dword ptr [esp + 0x20]
        fstp    dword ptr [esp + 0x44]
        call    FUN_00415020
        mov    eax, dword ptr [esp + 0x1c]
        fadd    st(0), st(0)
        mov    dword ptr [esp + 0x10], eax
        fsub    dword ptr [g_0076d064]
        fmul    dword ptr [esp + 0xc]
        fadd    dword ptr [esp + 0x44]
        fstp    dword ptr [esp + 0x18]
        call    FUN_00415020
        fadd    st(0), st(0)
        mov    ecx, dword ptr [esp + 0x20]
        mov    dword ptr [esp + 0x14], ecx
        fsub    dword ptr [g_0076d064]
        fmul    dword ptr [esp + 0xc]
        fmul    dword ptr [g_0076e1ec]
        fadd    dword ptr [esp + 0x10]
        fstp    dword ptr [esp + 0x1c]
        call    FUN_00415020
        fadd    st(0), st(0)
        mov    esi, dword ptr [edi + 4]
        cmp    esi, dword ptr [edi + 8]
        fsub    dword ptr [g_0076d064]
        fmul    dword ptr [esp + 0xc]
        fadd    dword ptr [esp + 0x14]
        fstp    dword ptr [esp + 0x20]
        je    L_7bf7
        test    esi, esi
        je    L_7bef
        lea    edx, [esp + 0x18]
        push    edx
        mov    ecx, esi
        call    FUN_0040c5d0
L_7bef:
        add    esi, 0xc
        mov    dword ptr [edi + 4], esi
        jmp    L_7c06
L_7bf7:
        push    1
        lea    eax, [esp + 0x1c]
        push    eax
        push    esi
        mov    ecx, edi
        call    FUN_005cb540
L_7c06:
        fld    dword ptr [esp + 0x40]
        fadd    dword ptr [g_007704c0]
        fst    dword ptr [esp + 0x40]
        fcomp    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jne    L_7b1d
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0x30
        ret    0xc
        nop    
        nop    
        mov    eax, dword ptr [ecx + 4]
        mov    ecx, dword ptr [esp + 4]
        sub    esp, 0xc
        test    eax, eax
        jne    L_7c79
        mov    eax, dword ptr [ecx]
        call    dword ptr [eax + 0x34]
        mov    eax, dword ptr [eax + 0xd8]
        mov    ecx, dword ptr [eax + 0x8c]
        add    eax, 0x80
        __emit 0x89  // mov dword ptr [esp], ecx
__emit 0x4C
__emit 0x24
__emit 0x00
        mov    edx, dword ptr [eax + 0x1c]
        mov    dword ptr [esp + 4], edx
        mov    eax, dword ptr [eax + 0x2c]
        __emit 0x8D  // 141 ecx, [esp] (explicit disp8=0)
__emit 0x4C
__emit 0x24
__emit 0x00
        push    ecx
        mov    dword ptr [esp + 0xc], eax
        call    FUN_006a57b0
        add    esp, 4
        add    esp, 0xc
        ret    4
L_7c79:
        mov    edx, dword ptr [ecx]
        call    dword ptr [edx + 0x3c]
        mov    eax, dword ptr [eax + 0xd8]
        mov    ecx, dword ptr [eax + 0x8c]
        add    eax, 0x80
        __emit 0x89  // mov dword ptr [esp], ecx
__emit 0x4C
__emit 0x24
__emit 0x00
        mov    edx, dword ptr [eax + 0x1c]
        mov    dword ptr [esp + 4], edx
        mov    eax, dword ptr [eax + 0x2c]
        __emit 0x8D  // 141 ecx, [esp] (explicit disp8=0)
__emit 0x4C
__emit 0x24
__emit 0x00
        push    ecx
        mov    dword ptr [esp + 0xc], eax
        call    FUN_006a57b0
        add    esp, 4
        add    esp, 0xc
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
        mov    edx, dword ptr [esp + 4]
        mov    dl, byte ptr [edx]
        mov    eax, ecx
        xor    ecx, ecx
        mov    dword ptr [eax], ecx
        mov    byte ptr [eax + 8], dl
        mov    dword ptr [eax + 4], ecx
        mov    dword ptr [eax + 8], ecx
        ret    4
    }
}
