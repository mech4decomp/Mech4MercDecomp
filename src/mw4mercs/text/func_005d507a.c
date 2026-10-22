/*
 * FUN_005d507a (extent 0x5d507a-0x5d550b) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076d064;
extern float  g_00770168;
extern int    g_007b220c;
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_0040ca40(void);
extern void __cdecl FUN_0040cb00(void);
extern void __cdecl FUN_0040cbb0(void);
extern void __cdecl FUN_0041c540(void);
extern void __cdecl FUN_004eef70(void);
extern void __cdecl FUN_005d4fb0(void);

__declspec(naked) void FUN_005d507a(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007b220c]
        sub    esp, 0x4c
        push    esi
        push    edi
        push    eax
        lea    esi, [ecx + 0x350]
        lea    edi, [ecx + 0x344]
        push    esi
        push    edi
        call    FUN_0041c540
        add    esp, 0xc
        test    al, al
        je    L_50c1
        mov    ecx, dword ptr [esi]
        mov    eax, dword ptr [esp + 0x58]
        mov    edx, dword ptr [esi + 4]
        mov    dword ptr [eax], ecx
        mov    ecx, dword ptr [esi + 8]
        pop    edi
        mov    dword ptr [eax + 4], edx
        mov    dword ptr [eax + 8], ecx
        pop    esi
        add    esp, 0x4c
        ret    0xc
L_50c1:
        fld    dword ptr [esi]
        lea    ecx, [esp + 8]
        fsub    dword ptr [edi]
        fstp    dword ptr [esp + 8]
        fld    dword ptr [esi + 4]
        fsub    dword ptr [edi + 4]
        fstp    dword ptr [esp + 0xc]
        fld    dword ptr [esi + 8]
        fsub    dword ptr [edi + 8]
        fstp    dword ptr [esp + 0x10]
        call    FUN_0040cb00
        fsqrt    
        push    edi
        lea    ecx, [esp + 0x3c]
        fdivr    dword ptr [g_0076d064]
        fld    st(0)
        fmul    dword ptr [esp + 0xc]
        fstp    dword ptr [esp + 0x18]
        fld    st(0)
        fmul    dword ptr [esp + 0x10]
        fstp    dword ptr [esp + 0x1c]
        fmul    dword ptr [esp + 0x14]
        fstp    dword ptr [esp + 0x20]
        call    FUN_0040c410
        lea    edx, [esp + 0x14]
        push    edx
        lea    ecx, [esp + 0x48]
        call    FUN_0040c410
        mov    eax, dword ptr [esp + 0x5c]
        push    eax
        lea    ecx, [esp + 0x3c]
        mov    dword ptr [esp + 0x54], 0x461c4000
        call    FUN_004eef70
        fstp    dword ptr [esp + 0x5c]
        mov    ecx, dword ptr [esp + 0x5c]
        push    ecx
        lea    edx, [esp + 0x48]
        push    edx
        lea    ecx, [esp + 0x34]
        call    FUN_0040ca40
        lea    eax, [esp + 0x2c]
        push    eax
        lea    ecx, [esp + 0x3c]
        push    ecx
        lea    ecx, [esp + 0x28]
        call    FUN_0040cbb0
        fld    dword ptr [esp + 0x14]
        fmul    dword ptr [g_00770168]
        mov    eax, dword ptr [esp + 0x58]
        fld    dword ptr [esp + 0x18]
        pop    edi
        fmul    dword ptr [g_00770168]
        pop    esi
        fstp    dword ptr [esp + 4]
        fld    dword ptr [esp + 0x14]
        fmul    dword ptr [g_00770168]
        fstp    dword ptr [esp + 8]
        fadd    dword ptr [esp + 0x18]
        fld    dword ptr [esp + 0x1c]
        fadd    dword ptr [esp + 4]
        fld    dword ptr [esp + 0x20]
        fadd    dword ptr [esp + 8]
        fstp    dword ptr [esp + 0x20]
        mov    edx, dword ptr [esp + 0x20]
        fxch    st(1)
        mov    dword ptr [eax + 8], edx
        fstp    dword ptr [eax]
        fstp    dword ptr [eax + 4]
        add    esp, 0x4c
        ret    0xc
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007b220c]
        sub    esp, 0x4c
        push    esi
        push    edi
        push    eax
        lea    esi, [ecx + 0x350]
        lea    edi, [ecx + 0x344]
        push    esi
        push    edi
        call    FUN_0041c540
        add    esp, 0xc
        test    al, al
        je    L_5201
        mov    ecx, dword ptr [esi]
        mov    eax, dword ptr [esp + 0x58]
        mov    edx, dword ptr [esi + 4]
        mov    dword ptr [eax], ecx
        mov    ecx, dword ptr [esi + 8]
        pop    edi
        mov    dword ptr [eax + 4], edx
        mov    dword ptr [eax + 8], ecx
        pop    esi
        add    esp, 0x4c
        ret    0xc
L_5201:
        fld    dword ptr [esi]
        lea    ecx, [esp + 8]
        fsub    dword ptr [edi]
        fstp    dword ptr [esp + 8]
        fld    dword ptr [esi + 4]
        fsub    dword ptr [edi + 4]
        fstp    dword ptr [esp + 0xc]
        fld    dword ptr [esi + 8]
        fsub    dword ptr [edi + 8]
        fstp    dword ptr [esp + 0x10]
        call    FUN_0040cb00
        fsqrt    
        push    edi
        lea    ecx, [esp + 0x3c]
        fdivr    dword ptr [g_0076d064]
        fld    st(0)
        fmul    dword ptr [esp + 0xc]
        fstp    dword ptr [esp + 0x18]
        fld    st(0)
        fmul    dword ptr [esp + 0x10]
        fstp    dword ptr [esp + 0x1c]
        fmul    dword ptr [esp + 0x14]
        fstp    dword ptr [esp + 0x20]
        call    FUN_0040c410
        lea    edx, [esp + 0x14]
        push    edx
        lea    ecx, [esp + 0x48]
        call    FUN_0040c410
        mov    eax, dword ptr [esp + 0x5c]
        push    eax
        lea    ecx, [esp + 0x3c]
        mov    dword ptr [esp + 0x54], 0x461c4000
        call    FUN_004eef70
        fstp    dword ptr [esp + 0x5c]
        mov    ecx, dword ptr [esp + 0x5c]
        push    ecx
        lea    edx, [esp + 0x48]
        push    edx
        lea    ecx, [esp + 0x34]
        call    FUN_0040ca40
        lea    eax, [esp + 0x2c]
        push    eax
        lea    ecx, [esp + 0x3c]
        push    ecx
        lea    ecx, [esp + 0x28]
        call    FUN_0040cbb0
        fld    dword ptr [esp + 0x14]
        fmul    dword ptr [g_00770168]
        mov    eax, dword ptr [esp + 0x58]
        fld    dword ptr [esp + 0x18]
        pop    edi
        fmul    dword ptr [g_00770168]
        pop    esi
        fstp    dword ptr [esp + 4]
        fld    dword ptr [esp + 0x14]
        fmul    dword ptr [g_00770168]
        fstp    dword ptr [esp + 8]
        fadd    dword ptr [esp + 0x18]
        fld    dword ptr [esp + 0x1c]
        fadd    dword ptr [esp + 4]
        fld    dword ptr [esp + 0x20]
        fadd    dword ptr [esp + 8]
        fstp    dword ptr [esp + 0x20]
        mov    edx, dword ptr [esp + 0x20]
        fxch    st(1)
        mov    dword ptr [eax + 8], edx
        fstp    dword ptr [eax]
        fstp    dword ptr [eax + 4]
        add    esp, 0x4c
        ret    0xc
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x24
        fld    dword ptr [esp + 0x2c]
        push    ebx
        fmul    dword ptr [esp + 0x34]
        push    ebp
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 0x34]
        fcom    dword ptr [g_0076c5b0]
        mov    eax, dword ptr [ecx + 0xc]
        fld    dword ptr [ecx + 8]
        mov    edx, dword ptr [ecx + 0x1c]
        mov    dword ptr [esp + 0x18], eax
        mov    eax, dword ptr [ecx + 0x2c]
        mov    dword ptr [esp + 0x20], eax
        fnstsw  ax
        push    edi
        test    ah, 1
        mov    dword ptr [esp + 0x20], edx
        je    L_5356
        fchs    
        fld    dword ptr [ecx + 0x18]
        fchs    
        fstp    dword ptr [esp + 0x14]
        fld    dword ptr [ecx + 0x28]
        fchs    
        fstp    dword ptr [esp + 0x18]
        fxch    st(1)
        fchs    
        fxch    st(1)
        jmp    L_5364
L_5356:
        fld    dword ptr [ecx + 0x18]
        fstp    dword ptr [esp + 0x14]
        fld    dword ptr [ecx + 0x28]
        fstp    dword ptr [esp + 0x18]
L_5364:
        fmul st(0), st(1)
        lea    eax, [esi + 0x32c]
        push    eax
        lea    ebp, [esi + 0x314]
        fstp    dword ptr [esp + 0x2c]
        push    ebp
        fld    dword ptr [esp + 0x1c]
        lea    ecx, [esp + 0x18]
        fmul st(0), st(1)
        push    ecx
        lea    edx, [esp + 0x28]
        push    edx
        fstp    dword ptr [esp + 0x3c]
        mov    ecx, esi
        fmul    dword ptr [esp + 0x28]
        fld    dword ptr [esp + 0x38]
        fadd    dword ptr [esp + 0x2c]
        fstp    dword ptr [esp + 0x20]
        fld    dword ptr [esp + 0x3c]
        fadd    dword ptr [esp + 0x30]
        fstp    dword ptr [esp + 0x24]
        fadd    dword ptr [esp + 0x34]
        fstp    dword ptr [esp + 0x28]
        call    FUN_005d4fb0
        test    al, al
        je    L_53c7
        pop    edi
        pop    esi
        pop    ebp
        xor    eax, eax
        pop    ebx
        add    esp, 0x24
        ret    0xc
L_53c7:
        lea    ebx, [esi + 0x338]
        push    ebx
        lea    edi, [esi + 0x320]
        push    edi
        lea    eax, [esp + 0x18]
        push    eax
        lea    ecx, [esp + 0x28]
        push    ecx
        mov    ecx, esi
        call    FUN_005d4fb0
        test    al, al
        je    L_53f9
        pop    edi
        pop    esi
        pop    ebp
        mov    eax, 1
        pop    ebx
        add    esp, 0x24
        ret    0xc
L_53f9:
        push    edi
        push    ebp
        lea    edx, [esp + 0x18]
        push    edx
        lea    eax, [esp + 0x28]
        push    eax
        mov    ecx, esi
        call    FUN_005d4fb0
        test    al, al
        je    L_541f
        pop    edi
        pop    esi
        pop    ebp
        mov    eax, 2
        pop    ebx
        add    esp, 0x24
        ret    0xc
L_541f:
        push    ebx
        lea    eax, [esi + 0x32c]
        push    eax
        lea    ecx, [esp + 0x18]
        push    ecx
        lea    edx, [esp + 0x28]
        push    edx
        mov    ecx, esi
        call    FUN_005d4fb0
        test    al, al
        je    L_544b
        pop    edi
        pop    esi
        pop    ebp
        mov    eax, 3
        pop    ebx
        add    esp, 0x24
        ret    0xc
L_544b:
        mov    eax, dword ptr [esi + 0x350]
        mov    ecx, dword ptr [esi + 0x354]
        mov    edx, dword ptr [esi + 0x358]
        mov    dword ptr [esp + 0x10], eax
        lea    eax, [esi + 0x32c]
        push    eax
        push    ebp
        mov    dword ptr [esp + 0x1c], ecx
        lea    eax, [esp + 0x18]
        push    eax
        lea    ecx, [esp + 0x28]
        push    ecx
        mov    ecx, esi
        mov    dword ptr [esp + 0x28], edx
        call    FUN_005d4fb0
        test    al, al
        je    L_5495
        pop    edi
        pop    esi
        pop    ebp
        mov    eax, 4
        pop    ebx
        add    esp, 0x24
        ret    0xc
L_5495:
        push    ebx
        push    edi
        lea    edx, [esp + 0x18]
        push    edx
        lea    eax, [esp + 0x28]
        push    eax
        mov    ecx, esi
        call    FUN_005d4fb0
        test    al, al
        je    L_54bb
        pop    edi
        pop    esi
        pop    ebp
        mov    eax, 5
        pop    ebx
        add    esp, 0x24
        ret    0xc
L_54bb:
        push    edi
        push    ebp
        lea    ecx, [esp + 0x18]
        push    ecx
        lea    edx, [esp + 0x28]
        push    edx
        mov    ecx, esi
        call    FUN_005d4fb0
        test    al, al
        je    L_54e1
        pop    edi
        pop    esi
        pop    ebp
        mov    eax, 6
        pop    ebx
        add    esp, 0x24
        ret    0xc
L_54e1:
        push    ebx
        lea    eax, [esi + 0x32c]
        push    eax
        lea    eax, [esp + 0x18]
        push    eax
        lea    ecx, [esp + 0x28]
        push    ecx
        mov    ecx, esi
        call    FUN_005d4fb0
        neg    al
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        sbb    eax, eax
        add    eax, 8
        add    esp, 0x24
        ret    0xc
    }
}
