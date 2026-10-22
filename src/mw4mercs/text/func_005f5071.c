/*
 * FUN_005f5071 (extent 0x5f5071-0x5f5665) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076d064;
extern float  g_0076d070;
extern float  g_0077016c;
extern float  g_0078235c;
extern float  g_007b8d08;
extern float  g_007b8d0c;
extern float  g_007b8d10;
extern int    g_007dc728;
extern void __cdecl FUN_0040c9e0(void);
extern void __cdecl FUN_0040cb00(void);
extern void __cdecl FUN_0040d560(void);
extern void __cdecl FUN_00419480(void);
extern void __cdecl FUN_0041a070(void);
extern void __cdecl FUN_0041acb0(void);
extern void __cdecl FUN_0041c680(void);
extern void __cdecl FUN_0041c6e0(void);
extern void __cdecl FUN_0041c7d0(void);
extern void __cdecl FUN_0041fde0(void);
extern void __cdecl FUN_004daa20(void);
extern void __cdecl FUN_004e2f40(void);

__declspec(naked) void FUN_005f5071(void)
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
        nop    
        sub    esp, 0x64
        push    ebx
        push    esi
        mov    esi, ecx
        push    edi
        mov    edi, dword ptr [esi + 0xd8]
        lea    ecx, [esp + 0x30]
        lea    eax, [esp + 0x54]
        mov    dword ptr [esp + 0x40], ecx
        xor    ebx, ebx
        push    0x7b8d08
        lea    ecx, [esp + 0x64]
        add    edi, 0x80
        mov    dword ptr [esp + 0x40], eax
        mov    dword ptr [esp + 0x48], ebx
        mov    dword ptr [esp + 0x50], esi
        mov    dword ptr [esp + 0x54], 0x1000
        mov    dword ptr [esp + 0x70], 0x41a00000
        call    FUN_0040d560
        push    edi
        lea    edx, [esp + 0x28]
        push    edx
        lea    ecx, [esp + 0x5c]
        mov    dword ptr [esp + 0x2c], ebx
        mov    dword ptr [esp + 0x30], ebx
        mov    dword ptr [esp + 0x34], 0x3fc00000
        call    FUN_0041c7d0
        fld    dword ptr [esp + 0x58]
        fadd    dword ptr [g_0077016c]
        mov    ecx, dword ptr [g_007dc728]
        lea    eax, [esp + 0x3c]
        push    eax
        fstp    dword ptr [esp + 0x5c]
        call    FUN_004e2f40
        test    eax, eax
        je    L_52ba
        mov    eax, dword ptr [esp + 0x40]
        mov    ecx, dword ptr [eax]
        mov    dword ptr [esp + 0xc], ecx
        mov    edx, dword ptr [eax + 4]
        push    edi
        lea    ecx, [esp + 0x28]
        mov    dword ptr [esp + 0x14], edx
        mov    eax, dword ptr [eax + 8]
        push    ecx
        lea    ecx, [esp + 0x5c]
        mov    dword ptr [esp + 0x1c], eax
        mov    dword ptr [esp + 0x74], 0x41a00000
        mov    dword ptr [esp + 0x2c], ebx
        mov    dword ptr [esp + 0x30], ebx
        mov    dword ptr [esp + 0x34], 0xbfc00000
        call    FUN_0041c7d0
        fld    dword ptr [esp + 0x58]
        fadd    dword ptr [g_0077016c]
        mov    ecx, dword ptr [g_007dc728]
        lea    edx, [esp + 0x3c]
        push    edx
        fstp    dword ptr [esp + 0x5c]
        call    FUN_004e2f40
        test    eax, eax
        je    L_52ba
        mov    eax, dword ptr [esp + 0x40]
        fld    dword ptr [esp + 0xc]
        fadd    dword ptr [eax]
        push    edi
        lea    ecx, [esp + 0x58]
        mov    dword ptr [esp + 0x28], 0x3f800000
        fstp    dword ptr [esp + 0x10]
        mov    dword ptr [esp + 0x2c], ebx
        fld    dword ptr [esp + 0x14]
        mov    dword ptr [esp + 0x30], ebx
        fadd    dword ptr [eax + 4]
        fstp    dword ptr [esp + 0x14]
        fld    dword ptr [esp + 0x18]
        fadd    dword ptr [eax + 8]
        lea    eax, [esp + 0x28]
        push    eax
        mov    dword ptr [esp + 0x74], 0x41a00000
        fstp    dword ptr [esp + 0x1c]
        call    FUN_0041c7d0
        fld    dword ptr [esp + 0x58]
        lea    ecx, [esp + 0x3c]
        fadd    dword ptr [g_0077016c]
        push    ecx
        mov    ecx, dword ptr [g_007dc728]
        fstp    dword ptr [esp + 0x5c]
        call    FUN_004e2f40
        test    eax, eax
        je    L_52ba
        mov    eax, dword ptr [esp + 0x40]
        fld    dword ptr [esp + 0xc]
        fadd    dword ptr [eax]
        push    edi
        lea    edx, [esp + 0x28]
        push    edx
        fstp    dword ptr [esp + 0x14]
        lea    ecx, [esp + 0x5c]
        fld    dword ptr [esp + 0x18]
        mov    dword ptr [esp + 0x2c], 0xbf800000
        fadd    dword ptr [eax + 4]
        mov    dword ptr [esp + 0x30], ebx
        mov    dword ptr [esp + 0x34], ebx
        fstp    dword ptr [esp + 0x18]
        fld    dword ptr [esp + 0x1c]
        fadd    dword ptr [eax + 8]
        mov    dword ptr [esp + 0x74], 0x41a00000
        fstp    dword ptr [esp + 0x1c]
        call    FUN_0041c7d0
        fld    dword ptr [esp + 0x58]
        mov    ecx, dword ptr [g_007dc728]
        fadd    dword ptr [g_0077016c]
        lea    eax, [esp + 0x3c]
        push    eax
        fstp    dword ptr [esp + 0x5c]
        call    FUN_004e2f40
        test    eax, eax
        je    L_52ba
        mov    eax, dword ptr [esp + 0x40]
        fld    dword ptr [esp + 0xc]
        fadd    dword ptr [eax]
        push    edi
        lea    ecx, [esp + 0x10]
        push    ecx
        fstp    dword ptr [esp + 0x14]
        lea    ecx, [esp + 0x20]
        fld    dword ptr [esp + 0x18]
        fadd    dword ptr [eax + 4]
        fstp    dword ptr [esp + 0x18]
        fld    dword ptr [esp + 0x1c]
        fadd    dword ptr [eax + 8]
        fstp    dword ptr [esp + 0x1c]
        call    FUN_0041c6e0
        fld    dword ptr [esp + 0x18]
        pop    edi
        fld    dword ptr [esp + 0x18]
        fpatan    
        fst    dword ptr [esi + 0x478]
        fld    dword ptr [esp + 0x1c]
        fld    dword ptr [esp + 0x18]
        fpatan    
        fst    dword ptr [esi + 0x474]
        fstp    dword ptr [esi + 0x47c]
        fstp    dword ptr [esi + 0x480]
        pop    esi
        pop    ebx
        add    esp, 0x64
        ret    
L_52ba:
        pop    edi
        mov    dword ptr [esi + 0x474], ebx
        mov    dword ptr [esi + 0x478], ebx
        pop    esi
        pop    ebx
        add    esp, 0x64
        ret    
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
        lea    eax, [esp + 0x70]
        fld    st(0)
        push    eax
        fmul    dword ptr [esi + 0x180]
        lea    ecx, [esp + 0x50]
        fadd    dword ptr [ebx]
        fstp    dword ptr [esp + 0x74]
        fld    st(0)
        fmul    dword ptr [esi + 0x184]
        fadd    dword ptr [ebx + 4]
        fstp    dword ptr [esp + 0x78]
        fmul    dword ptr [esi + 0x188]
        fadd    dword ptr [ebx + 8]
        fstp    dword ptr [esp + 0x7c]
        call    FUN_0041c680
        fld    dword ptr [esp + 0x4c]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jne    L_5357
        mov    dword ptr [esp + 0x4c], 0
L_5357:
        fld    dword ptr [esp + 0x48]
        fmul    dword ptr [esp + 0xdc]
        fadd    dword ptr [esp + 0x10]
        fstp    dword ptr [esp + 0x10]
        fld    dword ptr [esp + 0x4c]
        fmul    dword ptr [esp + 0xdc]
        fadd    dword ptr [esp + 0x14]
        fstp    dword ptr [esp + 0x14]
        fld    dword ptr [esp + 0x50]
        fmul    dword ptr [esp + 0xdc]
        fadd    dword ptr [esp + 0x18]
        fstp    dword ptr [esp + 0x18]
        fld    dword ptr [esp + 0xdc]
        fmul    dword ptr [esi + 0x184]
        fadd    dword ptr [esi + 0x16c]
        fst    dword ptr [esi + 0x16c]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jne    L_53c0
        mov    dword ptr [esi + 0x16c], 0
L_53c0:
        mov    edx, dword ptr [esi + 0x78]
        lea    ecx, [esi + 0x78]
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
        mov    edx, dword ptr [esi]
        lea    eax, [esp + 0x54]
        push    eax
        mov    eax, dword ptr [esp + 0xe0]
        fmul    dword ptr [ebp + 0x2b4]
        fld    dword ptr [ebp + 0x2b0]
        lea    ecx, [esp + 0xd0]
        fmul    dword ptr [esp + 0x2c]
        push    ecx
        push    eax
        faddp st(1), st(0)
        mov    ecx, esi
        fmul    dword ptr [esp + 0xe8]
        fld    st(0)
        fmul    dword ptr [esi + 0x430]
        fadd    dword ptr [esp + 0x28]
        fstp    dword ptr [esp + 0x28]
        fld    st(0)
        fmul    dword ptr [esi + 0x434]
        fadd    dword ptr [esp + 0x2c]
        fstp    dword ptr [esp + 0x2c]
        fmul    dword ptr [esi + 0x438]
        fadd    dword ptr [esp + 0x30]
        fstp    dword ptr [esp + 0x30]
        call    dword ptr [edx + 0x164]
        fld    dword ptr [esp + 0x1c]
        lea    ecx, [esp + 0xcc]
        fadd    dword ptr [esp + 0x54]
        push    ecx
        lea    edx, [esp + 0x14]
        push    edx
        fstp    dword ptr [esp + 0x24]
        lea    ecx, [esp + 0x18]
        fld    dword ptr [esp + 0x28]
        fadd    dword ptr [esp + 0x60]
        fstp    dword ptr [esp + 0x28]
        fld    dword ptr [esp + 0x2c]
        fadd    dword ptr [esp + 0x64]
        fstp    dword ptr [esp + 0x2c]
        call    FUN_0040c9e0
        fld    dword ptr [esi + 0x458]
        mov    ecx, 0x7b8d08
        fadd    dword ptr [g_0078235c]
        fstp    dword ptr [esp + 0x44]
        call    FUN_0040cb00
        fsqrt    
        mov    eax, dword ptr [esp + 0x10]
        mov    ecx, dword ptr [esp + 0x18]
        mov    dword ptr [esp + 0x2c], eax
        fdivr    dword ptr [g_0076d064]
        fld    st(0)
        fmul    dword ptr [g_007b8d08]
        fstp    dword ptr [esp + 0x38]
        fld    st(0)
        fmul    dword ptr [g_007b8d0c]
        fstp    dword ptr [esp + 0x3c]
        fmul    dword ptr [g_007b8d10]
        fstp    dword ptr [esp + 0x40]
        fld    dword ptr [esp + 0x14]
        mov    dword ptr [esp + 0x34], ecx
        fadd    dword ptr [esi + 0x458]
        lea    ecx, [esp + 0x1c]
        lea    edx, [esp + 0x2c]
        lea    eax, [esp + 0xc0]
        push    ecx
        fstp    dword ptr [esp + 0x34]
        xor    ebp, ebp
        lea    ecx, [esp + 0x94]
        mov    dword ptr [esp + 0x7c], edx
        mov    dword ptr [esp + 0x80], eax
        mov    dword ptr [esp + 0x84], ebp
        mov    dword ptr [esp + 0x8c], esi
        mov    dword ptr [esp + 0x90], 0x1000
        call    FUN_0041a070
        mov    ecx, dword ptr [g_007dc728]
        lea    edx, [esp + 0x78]
        push    edx
        call    FUN_004e2f40
        test    eax, eax
        jne    L_559e
        push    edi
        push    ebx
        lea    ecx, [esi + 0x198]
        mov    byte ptr [esi + 0x4bc], 0x18
        call    FUN_0041c680
        fld    dword ptr [esi + 0x19c]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jne    L_5578
        mov    dword ptr [esi + 0x19c], ebp
L_5578:
        mov    eax, dword ptr [esp + 0x10]
        mov    ecx, dword ptr [esp + 0x14]
        mov    edx, dword ptr [esp + 0x18]
        mov    dword ptr [esp + 0x9c], eax
        mov    dword ptr [esp + 0xac], ecx
        mov    dword ptr [esp + 0xbc], edx
        jmp    L_5649
L_559e:
        fld    dword ptr [esp + 0x38]
        mov    al, byte ptr [esp + 0x84]
        fmul    dword ptr [esp + 0x44]
        push    2
        fld    dword ptr [esp + 0x40]
        push    ebp
        fmul    dword ptr [esp + 0x4c]
        mov    byte ptr [esi + 0x4bc], al
        push    1
        lea    eax, [esp + 0xcc]
        fstp    dword ptr [esp + 0x70]
        push    eax
        fld    dword ptr [esp + 0x50]
        fmul    dword ptr [esp + 0x54]
        fstp    dword ptr [esp + 0x78]
        fadd    dword ptr [esp + 0x3c]
        fst    dword ptr [esp + 0x20]
        fld    dword ptr [esp + 0x74]
        fadd    dword ptr [esp + 0x40]
        fstp    dword ptr [esp + 0x24]
        mov    ecx, dword ptr [esp + 0x24]
        fld    dword ptr [esp + 0x44]
        mov    dword ptr [esp + 0xbc], ecx
        fadd    dword ptr [esp + 0x78]
        lea    ecx, [esp + 0xa0]
        fstp    dword ptr [esp + 0x28]
        mov    edx, dword ptr [esp + 0x28]
        mov    dword ptr [esp + 0xcc], edx
        fstp    dword ptr [esp + 0xac]
        call    FUN_0041fde0
        mov    ecx, dword ptr [esi + 0x440]
        lea    edx, [esp + 0x90]
        push    edx
        mov    dword ptr [esi + 0x170], ecx
        push    ebx
        lea    ecx, [esi + 0x198]
        mov    dword ptr [ebx], ebp
        mov    dword ptr [esi + 0x16c], ebp
        call    FUN_0041c680
L_5649:
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
    }
}
