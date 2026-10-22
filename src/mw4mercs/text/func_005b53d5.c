/*
 * FUN_005b53d5 (extent 0x5b53d5-0x5b5bf3) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076d064;
extern float  g_007b220c;
extern float  g_007b4384;
extern int    g_007b8ce8;
extern int    g_007b8cec;
extern int    g_007b8cf0;
extern int    g_007dc728;
extern void __cdecl FUN_0040c9e0(void);
extern void __cdecl FUN_0040d030(void);
extern void __cdecl FUN_00419460(void);
extern void __cdecl FUN_00419480(void);
extern void __cdecl FUN_00419e70(void);
extern void __cdecl FUN_0041a070(void);
extern void __cdecl FUN_0041ac80(void);
extern void __cdecl FUN_0041acb0(void);
extern void __cdecl FUN_0041afd0(void);
extern void __cdecl FUN_0041b140(void);
extern void __cdecl FUN_0041b320(void);
extern void __cdecl FUN_0041c680(void);
extern void __cdecl FUN_0047f9e0(void);
extern void __cdecl FUN_004daa20(void);
extern void __cdecl FUN_004e2f40(void);
extern void __cdecl FUN_00586610(void);

__declspec(naked) void FUN_005b53d5(void)
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
        sub    esp, 0x7c
        fld    qword ptr [esp + 0x80]
        mov    al, byte ptr [esp + 0x90]
        test    al, al
        push    esi
        push    edi
        mov    edi, ecx
        fsub    qword ptr [edi + 0xe4]
        fstp    dword ptr [esp + 8]
        je    L_5412
        mov    ecx, dword ptr [edi + 0xe0]
        mov    eax, dword ptr [ecx]
        push    0
        push    9
        call    dword ptr [eax + 4]
L_5412:
        mov    eax, dword ptr [esp + 0x90]
        fld    dword ptr [esp + 8]
        fmul    dword ptr [eax]
        mov    esi, dword ptr [edi + 0xd8]
        add    esi, 0x80
        push    esi
        fstp    dword ptr [esp + 0x28]
        lea    ecx, [esp + 0x28]
        fld    dword ptr [esp + 0xc]
        push    ecx
        fmul    dword ptr [eax + 4]
        lea    ecx, [esp + 0x50]
        fstp    dword ptr [esp + 0x30]
        fld    dword ptr [esp + 0x10]
        fmul    dword ptr [eax + 8]
        fstp    dword ptr [esp + 0x34]
        call    FUN_0041c680
        mov    edx, dword ptr [esi + 0xc]
        mov    dword ptr [esp + 0x18], edx
        mov    eax, dword ptr [esi + 0x1c]
        mov    dword ptr [esp + 0x1c], eax
        mov    ecx, dword ptr [esi + 0x2c]
        lea    edx, [esp + 0x48]
        push    edx
        lea    eax, [esp + 0x1c]
        mov    dword ptr [esp + 0x24], ecx
        push    eax
        lea    ecx, [esp + 0x20]
        call    FUN_0040c9e0
        mov    ecx, dword ptr [g_007b8cec]
        mov    edx, dword ptr [g_007b8ce8]
        mov    eax, dword ptr [g_007b8cf0]
        mov    dword ptr [esp + 0x10], ecx
        push    esi
        lea    ecx, [esp + 0x10]
        mov    dword ptr [esp + 0x10], edx
        mov    dword ptr [esp + 0x18], eax
        call    FUN_0041acb0
        fld    dword ptr [esp + 8]
        mov    eax, dword ptr [esp + 0x94]
        fmul    dword ptr [eax + 4]
        mov    edx, dword ptr [edi]
        lea    ecx, [esp + 0x30]
        fadd    dword ptr [esp + 0xc]
        fstp    dword ptr [esp + 0xc]
        fld    dword ptr [esp + 8]
        fmul    dword ptr [eax]
        fadd    dword ptr [esp + 0x10]
        fstp    dword ptr [esp + 0x10]
        fld    dword ptr [esp + 8]
        fmul    dword ptr [eax + 8]
        lea    eax, [esp + 0x3c]
        push    eax
        mov    eax, dword ptr [esp + 0xc]
        fadd    dword ptr [esp + 0x18]
        push    ecx
        push    eax
        mov    ecx, edi
        fstp    dword ptr [esp + 0x20]
        call    dword ptr [edx + 0x164]
        fld    dword ptr [esp + 0x30]
        fadd    dword ptr [esp + 0x18]
        fst    dword ptr [esp + 0x18]
        fld    dword ptr [esp + 0x1c]
        fadd    dword ptr [esp + 0x34]
        fstp    dword ptr [esp + 0x1c]
        fld    dword ptr [esp + 0x20]
        fadd    dword ptr [esp + 0x38]
        fstp    dword ptr [esp + 0x20]
        fld    dword ptr [esp + 0xc]
        fadd    dword ptr [esp + 0x3c]
        fstp    dword ptr [esp + 0xc]
        fld    dword ptr [esp + 0x10]
        fadd    dword ptr [esp + 0x40]
        fstp    dword ptr [esp + 0x10]
        fld    dword ptr [esp + 0x14]
        fadd    dword ptr [esp + 0x44]
        fstp    dword ptr [esp + 0x14]
        mov    ecx, dword ptr [esp + 0x1c]
        fstp    dword ptr [esp + 0x60]
        mov    edx, dword ptr [esp + 0x20]
        lea    eax, [esp + 0xc]
        mov    dword ptr [esp + 0x70], ecx
        push    eax
        lea    ecx, [esp + 0x58]
        mov    dword ptr [esp + 0x84], edx
        call    FUN_0041a070
        lea    ecx, [esp + 0x54]
        push    ecx
        mov    ecx, edi
        call    FUN_004daa20
        pop    edi
        pop    esi
        add    esp, 0x7c
        ret    0x14
        sub    esp, 0xa0
        fld    qword ptr [esp + 0xa4]
        push    ebx
        push    ebp
        push    esi
        mov    esi, ecx
        fsub    qword ptr [esi + 0xe4]
        mov    eax, dword ptr [esi + 0x78]
        lea    ecx, [esi + 0x78]
        push    edi
        fstp    dword ptr [esp + 0x10]
        call    dword ptr [eax + 4]
        fld    dword ptr [esi + 0x42c]
        mov    ebp, eax
        fmul    dword ptr [ebp + 0x324]
        fmul    dword ptr [esp + 0x10]
        fadd    dword ptr [esi + 0x170]
        fst    dword ptr [esi + 0x170]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        je    L_55cd
        mov    dword ptr [esi + 0x170], 0
        jmp    L_55f4
L_55cd:
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 0x114]
        fcomp    dword ptr [esi + 0x170]
        fnstsw  ax
        test    ah, 1
        je    L_55f4
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [eax + 0x114]
        fstp    dword ptr [esi + 0x170]
L_55f4:
        mov    ecx, dword ptr [esi + 0xd8]
        add    ecx, 0x80
        push    ecx
        lea    edx, [esi + 0x168]
        lea    edi, [esi + 0x198]
        push    edx
        mov    ecx, edi
        call    FUN_0041c680
        mov    eax, dword ptr [esi + 0xd8]
        lea    ebx, [eax + 0x80]
        push    ebx
        lea    ecx, [esp + 0x18]
        call    FUN_00419480
        fld    dword ptr [esp + 0x10]
        fmul    dword ptr [edi]
        lea    ecx, [esp + 0x80]
        fadd    dword ptr [esp + 0x14]
        fstp    dword ptr [esp + 0x14]
        fld    dword ptr [esp + 0x10]
        fmul    dword ptr [edi + 4]
        fadd    dword ptr [esp + 0x18]
        fstp    dword ptr [esp + 0x18]
        fld    dword ptr [esp + 0x10]
        fmul    dword ptr [edi + 8]
        fadd    dword ptr [esp + 0x1c]
        fstp    dword ptr [esp + 0x1c]
        call    FUN_00419e70
        fld    dword ptr [ebp + 0x2b4]
        mov    ecx, dword ptr [esi + 0x434]
        fmul    dword ptr [esi + 0x430]
        lea    eax, [esi + 0x174]
        push    ebx
        fstp    dword ptr [esi + 0x178]
        fld    dword ptr [ebp + 0x2b4]
        mov    dword ptr [eax], ecx
        fmul    dword ptr [esi + 0x438]
        lea    edi, [esi + 0x1a4]
        push    eax
        fstp    dword ptr [esi + 0x17c]
        mov    ecx, edi
        call    FUN_0041c680
        fld    dword ptr [esp + 0x10]
        fmul    dword ptr [edi]
        lea    edx, [esp + 0x38]
        push    edx
        lea    ecx, [esp + 0x54]
        fstp    dword ptr [esp + 0x3c]
        fld    dword ptr [esp + 0x14]
        fmul    dword ptr [edi + 4]
        fstp    dword ptr [esp + 0x40]
        fld    dword ptr [esp + 0x14]
        fmul    dword ptr [edi + 8]
        fstp    dword ptr [esp + 0x44]
        call    FUN_0041b140
        lea    eax, [esi + 0xf4]
        push    eax
        lea    ecx, [esp + 0x74]
        call    FUN_0041afd0
        lea    ecx, [esp + 0x50]
        push    ecx
        lea    edx, [esp + 0x74]
        push    edx
        lea    ecx, [esp + 0x68]
        call    FUN_0041b320
        mov    eax, dword ptr [esi]
        lea    ecx, [esp + 0x44]
        push    ecx
        mov    ecx, dword ptr [esp + 0x14]
        lea    edx, [esp + 0x30]
        push    edx
        push    ecx
        mov    ecx, esi
        call    dword ptr [eax + 0x164]
        lea    edx, [esp + 0x60]
        push    edx
        lea    ecx, [esp + 0x24]
        call    FUN_0041ac80
        fld    dword ptr [esp + 0x2c]
        lea    edx, [esp + 0x20]
        fadd    dword ptr [esp + 0x14]
        push    edx
        fst    dword ptr [esp + 0x18]
        fld    dword ptr [esp + 0x34]
        fadd    dword ptr [esp + 0x1c]
        fstp    dword ptr [esp + 0x1c]
        mov    eax, dword ptr [esp + 0x1c]
        fld    dword ptr [esp + 0x38]
        mov    dword ptr [esp + 0xa0], eax
        fadd    dword ptr [esp + 0x20]
        fstp    dword ptr [esp + 0x20]
        mov    ecx, dword ptr [esp + 0x20]
        fld    dword ptr [esp + 0x24]
        mov    dword ptr [esp + 0xb0], ecx
        fadd    dword ptr [esp + 0x48]
        lea    ecx, [esp + 0x84]
        fstp    dword ptr [esp + 0x24]
        fld    dword ptr [esp + 0x28]
        fadd    dword ptr [esp + 0x4c]
        fstp    dword ptr [esp + 0x28]
        fld    dword ptr [esp + 0x2c]
        fadd    dword ptr [esp + 0x50]
        fstp    dword ptr [esp + 0x2c]
        fstp    dword ptr [esp + 0x90]
        call    FUN_0041a070
        lea    eax, [esp + 0x80]
        push    eax
        mov    ecx, esi
        call    FUN_004daa20
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0xa0
        ret    8
        nop    
        nop    
        sub    esp, 0xec
        fld    qword ptr [esp + 0xf0]
        push    ebx
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi + 0x168]
        fsub    qword ptr [esi + 0xe4]
        mov    ecx, dword ptr [esi + 0x16c]
        mov    edx, dword ptr [esi + 0x170]
        lea    ebx, [esi + 0x168]
        mov    dword ptr [esp + 0x18], eax
        mov    eax, dword ptr [esi + 0xd8]
        push    edi
        lea    edi, [eax + 0x80]
        lea    eax, [esp + 0x64]
        mov    dword ptr [esp + 0x20], ecx
        fstp    dword ptr [esp + 0xc]
        push    eax
        mov    ecx, edi
        mov    dword ptr [esp + 0x28], edx
        call    FUN_00586610
        lea    ecx, [esp + 0xe0]
        push    ecx
        mov    ecx, edi
        call    FUN_0047f9e0
        fld    dword ptr [g_007b4384]
        fmul    dword ptr [esp + 0xc]
        push    edi
        fld    dword ptr [esp + 0x68]
        lea    edx, [esp + 0x20]
        push    edx
        fmul st(0), st(1)
        lea    ecx, [esi + 0x198]
        fadd    dword ptr [esp + 0x24]
        fstp    dword ptr [esp + 0x24]
        fld    dword ptr [esp + 0x70]
        fmul st(0), st(1)
        fadd    dword ptr [esp + 0x28]
        fstp    dword ptr [esp + 0x28]
        fld    dword ptr [esp + 0x74]
        fmul st(0), st(1)
        fadd    dword ptr [esp + 0x2c]
        fstp    dword ptr [esp + 0x2c]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        call    FUN_0041c680
        mov    eax, dword ptr [esi + 0xd8]
        lea    edi, [eax + 0x80]
        push    edi
        lea    eax, [esp + 0x50]
        push    eax
        lea    ecx, [esi + 0x1a4]
        mov    dword ptr [esp + 0x54], 0x3f800000
        mov    dword ptr [esp + 0x58], 0
        mov    dword ptr [esp + 0x5c], 0
        mov    dword ptr [esi + 0x174], 0x3f800000
        mov    dword ptr [esi + 0x178], 0
        mov    dword ptr [esi + 0x17c], 0
        call    FUN_0041c680
        mov    ecx, dword ptr [esi + 0xd8]
        add    ecx, 0x80
        push    ecx
        push    ebx
        lea    ecx, [esp + 0x60]
        call    FUN_0041c680
        mov    edx, dword ptr [edi + 0xc]
        mov    dword ptr [esp + 0x28], edx
        mov    eax, dword ptr [edi + 0x1c]
        mov    dword ptr [esp + 0x2c], eax
        fld    dword ptr [edi + 0x2c]
        fld    dword ptr [esp + 0x58]
        fmul    dword ptr [esp + 0xc]
        fadd    dword ptr [esp + 0x28]
        fstp    dword ptr [esp + 0x28]
        fld    dword ptr [esp + 0x5c]
        fmul    dword ptr [esp + 0xc]
        fadd    dword ptr [esp + 0x2c]
        fstp    dword ptr [esp + 0x2c]
        fld    dword ptr [esp + 0x60]
        fmul    dword ptr [esp + 0xc]
        fadd st(0), st(1)
        fstp    dword ptr [esp + 0x30]
        mov    ecx, dword ptr [g_007b8cec]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        mov    edx, dword ptr [g_007b8ce8]
        mov    eax, dword ptr [g_007b8cf0]
        mov    dword ptr [esp + 0x14], ecx
        push    edi
        lea    ecx, [esp + 0x14]
        mov    dword ptr [esp + 0x14], edx
        mov    dword ptr [esp + 0x1c], eax
        call    FUN_0041acb0
        fld    dword ptr [esp + 0xc]
        fmul    dword ptr [esi + 0x178]
        fadd    dword ptr [esp + 0x10]
        fstp    dword ptr [esp + 0x10]
        fld    dword ptr [esp + 0xc]
        fmul    dword ptr [esi + 0x174]
        fadd    dword ptr [esp + 0x14]
        fst    dword ptr [esp + 0x14]
        fcomp    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jne    L_5969
        mov    dword ptr [esp + 0x14], 0x3f800000
L_5969:
        fld    dword ptr [esp + 0xc]
        push    0x7b9460
        fmul    dword ptr [esi + 0x17c]
        lea    ecx, [esp + 0xb4]
        fadd    dword ptr [esp + 0x1c]
        fstp    dword ptr [esp + 0x1c]
        call    FUN_00419460
        mov    edx, dword ptr [esi]
        lea    eax, [esp + 0x40]
        push    eax
        mov    eax, dword ptr [esp + 0x10]
        lea    ecx, [esp + 0xa8]
        push    ecx
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x164]
        lea    ecx, [esp + 0xa4]
        push    ecx
        lea    edx, [esp + 0x2c]
        push    edx
        lea    ecx, [esp + 0x30]
        call    FUN_0040c9e0
        fld    dword ptr [esp + 0x10]
        fadd    dword ptr [esp + 0x40]
        lea    eax, [esp + 0x28]
        push    eax
        lea    ecx, [esp + 0xb4]
        fstp    dword ptr [esp + 0x14]
        fld    dword ptr [esp + 0x18]
        fadd    dword ptr [esp + 0x48]
        fstp    dword ptr [esp + 0x18]
        fld    dword ptr [esp + 0x1c]
        fadd    dword ptr [esp + 0x4c]
        fstp    dword ptr [esp + 0x1c]
        call    FUN_0040d030
        lea    ecx, [esp + 0x10]
        push    ecx
        lea    ecx, [esp + 0xb4]
        call    FUN_0041a070
        fld    dword ptr [esp + 0xb8]
        fld    dword ptr [esp + 0xc8]
        mov    dword ptr [esp + 0x88], 0x40600000
        fstp    dword ptr [esp + 0x38]
        fld    dword ptr [esp + 0xd8]
        mov    edx, dword ptr [esp + 0x38]
        fstp    dword ptr [esp + 0x3c]
        mov    eax, dword ptr [esp + 0x3c]
        mov    dword ptr [esp + 0x84], eax
        fstp    dword ptr [esp + 0x7c]
        mov    eax, dword ptr [esi + 0xd8]
        add    eax, 0x80
        mov    dword ptr [esp + 0x80], edx
        fld    dword ptr [eax + 0xc]
        mov    ecx, dword ptr [eax + 0x1c]
        mov    edx, dword ptr [eax + 0x2c]
        fstp    dword ptr [esp + 0x70]
        mov    eax, ecx
        mov    dword ptr [esp + 0x38], ecx
        mov    ecx, edx
        mov    dword ptr [esp + 0x3c], edx
        lea    edx, [esp + 0xb0]
        mov    dword ptr [esp + 0x78], ecx
        push    edx
        mov    ecx, esi
        mov    dword ptr [esp + 0x78], eax
        call    FUN_004daa20
        lea    ecx, [esp + 0xec]
        lea    eax, [esp + 0x70]
        lea    edx, [esp + 0x8c]
        mov    dword ptr [esp + 0x90], ecx
        mov    ecx, dword ptr [g_007dc728]
        mov    dword ptr [esp + 0x8c], eax
        mov    dword ptr [esp + 0x94], 0
        mov    dword ptr [esp + 0x9c], esi
        mov    dword ptr [esp + 0xa0], 0x1000
        push    edx
        call    FUN_004e2f40
        test    eax, eax
        je    L_5adc
        mov    al, 1
        mov    byte ptr [esi + 0x53d], al
        mov    byte ptr [esi + 0x53e], al
L_5adc:
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0xec
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x24
        mov    edx, dword ptr [ecx + 0xd8]
        mov    eax, dword ptr [edx + 0x8c]
        __emit 0x89  // mov dword ptr [esp], eax - MSVC6 drops 00 disp byte on [esp]
        __emit 0x44
        __emit 0x24
        __emit 0x00
        __emit 0xD9  // fld dword ptr [esp+0] - MSVC6 drops 00 disp byte (d9 04 24 vs ref d9 44 24 00)
        __emit 0x44
        __emit 0x24
        __emit 0x00
        mov    eax, dword ptr [edx + 0x9c]
        push    esi
        mov    esi, dword ptr [esp + 0x2c]
        fstp    dword ptr [esi]
        mov    dword ptr [esp + 8], eax
        fld    dword ptr [ecx + 0x440]
        mov    dword ptr [esi + 4], eax
        mov    eax, dword ptr [edx + 0xac]
        fabs    
        fld    dword ptr [g_007b220c]
        mov    dword ptr [esp + 0xc], eax
        fcompp    
        mov    dword ptr [esi + 8], eax
        fnstsw  ax
        test    ah, 1
        je    L_5be7
        mov    eax, dword ptr [ecx + 0x10]
        shr    eax, 0x13
        and    al, 1
        cmp    al, 1
        je    L_5be7
        fld    dword ptr [edx + 0x88]
        fld    dword ptr [edx + 0x98]
        fstp    dword ptr [esp + 0x20]
        fld    dword ptr [edx + 0xa8]
        fstp    dword ptr [esp + 0x24]
        fld    dword ptr [esp + 0x30]
        fmul    dword ptr [ecx + 0x440]
        fstp    dword ptr [esp + 0x2c]
        fld    dword ptr [edx + 0x80]
        fld    dword ptr [edx + 0x90]
        fstp    dword ptr [esp + 0x14]
        fld    dword ptr [edx + 0xa0]
        fstp    dword ptr [esp + 0x18]
        fld    dword ptr [esp + 0x30]
        fmul    dword ptr [ecx + 0x430]
        fstp    dword ptr [esp + 0x30]
        fmul    dword ptr [esp + 0x30]
        fxch    st(1)
        fmul    dword ptr [esp + 0x2c]
        faddp st(1), st(0)
        fadd    dword ptr [esp + 4]
        fstp    dword ptr [esi]
        fld    dword ptr [esp + 0x14]
        fmul    dword ptr [esp + 0x30]
        fld    dword ptr [esp + 0x20]
        fmul    dword ptr [esp + 0x2c]
        faddp st(1), st(0)
        fadd    dword ptr [esp + 8]
        fstp    dword ptr [esi + 4]
        fld    dword ptr [esp + 0x18]
        fmul    dword ptr [esp + 0x30]
        fld    dword ptr [esp + 0x24]
        fmul    dword ptr [esp + 0x2c]
        faddp st(1), st(0)
        fadd    dword ptr [esp + 0xc]
        fstp    dword ptr [esi + 8]
L_5be7:
        mov    eax, esi
        pop    esi
        add    esp, 0x24
        ret    0xc
        ret    8
    }
}
