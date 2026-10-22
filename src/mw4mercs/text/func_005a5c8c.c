/*
 * FUN_005a5c8c (extent 0x5a5c8c-0x5a60d1) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076d064;
extern float  g_0076d070;
extern float  g_00770168;
extern float  g_007748c8;
extern float  g_00784968;
extern float  g_007b8d08;
extern float  g_007b8d0c;
extern float  g_007b8d10;
extern int    g_007dc728;
extern void __cdecl FUN_0040c9e0(void);
extern void __cdecl FUN_0040cb00(void);
extern void __cdecl FUN_00419480(void);
extern void __cdecl FUN_0041a070(void);
extern void __cdecl FUN_0041acb0(void);
extern void __cdecl FUN_0041c680(void);
extern void __cdecl FUN_0041c6e0(void);
extern void __cdecl FUN_0041fde0(void);
extern void __cdecl FUN_004daa20(void);
extern void __cdecl FUN_004e2f40(void);
extern void __cdecl FUN_005a5d10(void);
extern void __cdecl FUN_005f39c0(void);
extern void __cdecl FUN_00707e70(void);

__declspec(naked) void FUN_005a5c8c(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    0
        mov    esi, ecx
        call    FUN_00707e70
        fstp    qword ptr [esi + 0xec]
        mov    ecx, dword ptr [esi + 0xe0]
        mov    eax, dword ptr [ecx]
        push    0
        push    9
        call    dword ptr [eax + 4]
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
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 8]
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 8]
        push    eax
        push    ecx
        mov    ecx, esi
        call    FUN_005f39c0
        fld    qword ptr [esp + 8]
        fsub    qword ptr [esi + 0xe4]
        mov    edx, dword ptr [esi + 0xe0]
        cmp    dword ptr [edx + 0x14], 9
        fstp    dword ptr [esp + 8]
        jne    L_5d07
        mov    eax, dword ptr [esi]
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        push    edi
        mov    ecx, esi
        call    dword ptr [eax + 0x150]
        push    edi
        mov    ecx, esi
        call    FUN_005a5d10
        pop    edi
L_5d07:
        pop    esi
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0xc8
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov    esi, ecx
        mov    edi, dword ptr [esi + 0xd8]
        add    edi, 0x80
        push    edi
        lea    ecx, [esp + 0x14]
        call    FUN_00419480
        fld    dword ptr [esp + 0xdc]
        fmul    dword ptr [g_0076d070]
        lea    ebx, [esi + 0x168]
        push    edi
        lea    eax, [esp + 0x58]
        fld    st(0)
        push    eax
        fmul    dword ptr [esi + 0x180]
        lea    ecx, [esp + 0x74]
        fadd    dword ptr [ebx]
        fstp    dword ptr [esp + 0x5c]
        fld    st(0)
        fmul    dword ptr [esi + 0x184]
        fadd    dword ptr [ebx + 4]
        fstp    dword ptr [esp + 0x60]
        fmul    dword ptr [esi + 0x188]
        fadd    dword ptr [ebx + 8]
        fstp    dword ptr [esp + 0x64]
        call    FUN_0041c680
        fld    dword ptr [esp + 0x6c]
        mov    edx, dword ptr [esi + 0x78]
        fmul    dword ptr [esp + 0xdc]
        lea    ecx, [esi + 0x78]
        fadd    dword ptr [esp + 0x10]
        fstp    dword ptr [esp + 0x10]
        fld    dword ptr [esp + 0x70]
        fmul    dword ptr [esp + 0xdc]
        fadd    dword ptr [esp + 0x14]
        fstp    dword ptr [esp + 0x14]
        fld    dword ptr [esp + 0x74]
        fmul    dword ptr [esp + 0xdc]
        fadd    dword ptr [esp + 0x18]
        fstp    dword ptr [esp + 0x18]
        fld    dword ptr [esp + 0xdc]
        fmul    dword ptr [esi + 0x184]
        fadd    dword ptr [esi + 0x16c]
        fstp    dword ptr [esi + 0x16c]
        call    dword ptr [edx + 4]
        mov    ebp, eax
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [eax + 0x114]
        fdivr    dword ptr [esi + 0x440]
        push    edi
        lea    ecx, [esp + 0x20]
        fstp    dword ptr [esp + 0x2c]
        call    FUN_0041acb0
        fld    dword ptr [g_0076d064]
        fsub    dword ptr [esp + 0x28]
        fmul    dword ptr [ebp + 0x2b4]
        fld    dword ptr [ebp + 0x2b0]
        fmul    dword ptr [esp + 0x28]
        faddp st(1), st(0)
        fmul    dword ptr [esp + 0xdc]
        fld    st(0)
        fmul    dword ptr [esi + 0x430]
        fadd    dword ptr [esp + 0x1c]
        fstp    dword ptr [esp + 0x1c]
        fld    st(0)
        fmul    dword ptr [esi + 0x434]
        fadd    dword ptr [esp + 0x20]
        fstp    dword ptr [esp + 0x20]
        fmul    dword ptr [esi + 0x438]
        fadd    dword ptr [esp + 0x24]
        mov    edx, dword ptr [esi]
        fstp    dword ptr [esp + 0x24]
        lea    eax, [esp + 0x48]
        push    eax
        mov    eax, dword ptr [esp + 0xe0]
        lea    ecx, [esp + 0xd0]
        push    ecx
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x164]
        fld    dword ptr [esp + 0x1c]
        fadd    dword ptr [esp + 0x48]
        lea    ecx, [esp + 0xcc]
        push    ecx
        lea    edx, [esp + 0x14]
        fstp    dword ptr [esp + 0x20]
        push    edx
        fld    dword ptr [esp + 0x28]
        lea    ecx, [esp + 0x18]
        fadd    dword ptr [esp + 0x54]
        fstp    dword ptr [esp + 0x28]
        fld    dword ptr [esp + 0x2c]
        fadd    dword ptr [esp + 0x58]
        fstp    dword ptr [esp + 0x2c]
        call    FUN_0040c9e0
        fld    dword ptr [ebp + 0x2f8]
        mov    ecx, 0x7b8d08
        fadd    dword ptr [esi + 0x454]
        fadd    dword ptr [g_00784968]
        fstp    dword ptr [esp + 0x44]
        call    FUN_0040cb00
        fsqrt    
        mov    ecx, dword ptr [esp + 0x18]
        mov    eax, dword ptr [esp + 0x10]
        mov    dword ptr [esp + 0x34], ecx
        lea    ecx, [esp + 0x1c]
        mov    dword ptr [esp + 0x2c], eax
        lea    edx, [esp + 0x2c]
        lea    eax, [esp + 0xc0]
        push    ecx
        lea    ecx, [esp + 0x94]
        mov    dword ptr [esp + 0x7c], edx
        mov    dword ptr [esp + 0x80], eax
        mov    dword ptr [esp + 0x84], 0
        mov    dword ptr [esp + 0x8c], esi
        mov    dword ptr [esp + 0x90], 0x1000
        fdivr    dword ptr [g_0076d064]
        fld    st(0)
        fmul    dword ptr [g_007b8d08]
        fstp    dword ptr [esp + 0x3c]
        fld    st(0)
        fmul    dword ptr [g_007b8d0c]
        fstp    dword ptr [esp + 0x40]
        fmul    dword ptr [g_007b8d10]
        fstp    dword ptr [esp + 0x44]
        fld    dword ptr [esp + 0x18]
        fadd    dword ptr [g_007748c8]
        fstp    dword ptr [esp + 0x34]
        call    FUN_0041a070
        mov    ecx, dword ptr [g_007dc728]
        lea    edx, [esp + 0x78]
        push    edx
        call    FUN_004e2f40
        test    eax, eax
        jne    L_5fc5
        push    edi
        lea    ebp, [esi + 0x198]
        push    ebx
        mov    ecx, ebp
        mov    byte ptr [esi + 0x4bc], 0x18
        call    FUN_0041c680
        fld    dword ptr [esi + 0x19c]
        fcomp    dword ptr [g_00770168]
        fnstsw  ax
        test    ah, 0x41
        jne    L_5f9f
        push    edi
        push    ebp
        mov    ecx, ebx
        mov    dword ptr [esi + 0x19c], 0x41200000
        call    FUN_0041c6e0
L_5f9f:
        mov    eax, dword ptr [esp + 0x10]
        mov    ecx, dword ptr [esp + 0x14]
        mov    edx, dword ptr [esp + 0x18]
        mov    dword ptr [esp + 0x9c], eax
        mov    dword ptr [esp + 0xac], ecx
        mov    dword ptr [esp + 0xbc], edx
        jmp    L_60a7
L_5fc5:
        fld    dword ptr [esp + 0x44]
        mov    al, byte ptr [esp + 0x84]
        fsub    dword ptr [ebp + 0x2f8]
        mov    byte ptr [esi + 0x4bc], al
        push    2
        push    0
        fstp    dword ptr [esp + 0x4c]
        push    1
        fld    dword ptr [esp + 0x44]
        fmul    dword ptr [esp + 0x50]
        fld    dword ptr [esp + 0x48]
        fmul    dword ptr [esp + 0x50]
        fstp    dword ptr [esp + 0x70]
        fld    dword ptr [esp + 0x4c]
        fmul    dword ptr [esp + 0x50]
        fstp    dword ptr [esp + 0x74]
        fadd    dword ptr [esp + 0x38]
        fst    dword ptr [esp + 0x1c]
        fld    dword ptr [esp + 0x70]
        fadd    dword ptr [esp + 0x3c]
        fld    dword ptr [esp + 0x40]
        fadd    dword ptr [esp + 0x74]
        fstp    dword ptr [esp + 0x24]
        mov    edx, dword ptr [esp + 0x24]
        mov    dword ptr [esp + 0xc8], edx
        fadd    dword ptr [esi + 0x454]
        fstp    dword ptr [esp + 0x20]
        mov    ecx, dword ptr [esp + 0x20]
        mov    dword ptr [esp + 0xb8], ecx
        fstp    dword ptr [esp + 0xa8]
        fld    dword ptr [esi + 0x454]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jne    L_6063
        push    0x7b8d18
        jmp    L_606b
L_6063:
        lea    eax, [esp + 0xcc]
        push    eax
L_606b:
        lea    ecx, [esp + 0xa0]
        call    FUN_0041fde0
        mov    ecx, dword ptr [esi + 0x440]
        lea    edx, [esp + 0x90]
        push    edx
        mov    dword ptr [esi + 0x170], ecx
        push    ebx
        lea    ecx, [esi + 0x198]
        mov    dword ptr [ebx], 0
        mov    dword ptr [esi + 0x16c], 0
        call    FUN_0041c680
L_60a7:
        lea    eax, [esp + 0x90]
        push    eax
        mov    ecx, esi
        call    FUN_004daa20
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0xc8
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
        ret    
    }
}
