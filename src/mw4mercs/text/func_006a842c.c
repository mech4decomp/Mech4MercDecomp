/*
 * FUN_006a842c (extent 0x6a842c-0x6a871c) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b2ac;
extern int    g_0076b2d8;
extern float  g_0076c5b0;
extern float  g_0076d598;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004125e0(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_00604f30(void);
extern void __cdecl FUN_00605740(void);
extern void __cdecl FUN_0066b370(void);
extern void __cdecl FUN_00698b90(void);
extern void __cdecl FUN_00699160(void);
extern void __cdecl FUN_006991d0(void);
extern void __cdecl FUN_006992f0(void);
extern void __cdecl FUN_00699530(void);
extern void __cdecl FUN_00767d20(void);

__declspec(naked) void FUN_006a842c(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    0x2c
        mov    esi, ecx
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_8453
        mov    ecx, dword ptr [esi + 0x30]
        push    ecx
        mov    ecx, eax
        call    FUN_00698b90
        mov    dword ptr [esi + 0x34], eax
        pop    esi
        ret    4
L_8453:
        xor    eax, eax
        mov    dword ptr [esi + 0x34], eax
        pop    esi
        ret    4
        nop    
        nop    
        nop    
        nop    
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [esi + 0x34]
        test    ecx, ecx
        je    L_8470
        mov    eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
L_8470:
        mov    dword ptr [esi + 0x34], 0
        mov    dword ptr [esi + 0x20], 0xbf800000
        pop    esi
        ret    
        fld    dword ptr [ecx + 0x10]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_8494
        fld    dword ptr [ecx + 0x28]
        ret    
L_8494:
        fld    dword ptr [ecx + 0x20]
        fdiv    dword ptr [ecx + 0x10]
        fmul    dword ptr [ecx + 0x2c]
        fadd    dword ptr [ecx + 0x28]
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
        fld    dword ptr [ecx + 0x10]
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
        push    ecx
        push    ebx
        push    esi
        mov    esi, dword ptr [esp + 0x14]
        push    edi
        mov    ebx, ecx
        push    0x796e48
        mov    ecx, esi
        call    FUN_00767d20
        push    0x76ff64
        mov    ecx, esi
        call    FUN_00767d20
        mov    edi, dword ptr [eax + 4]
        push    0x799ea4
        push    edi
        call    dword ptr [g_0076b2ac]
        add    esp, 8
        test    eax, eax
        jne    L_8501
        mov    dword ptr [ebx + 0x38], 0xbf800000
        jmp    L_850e
L_8501:
        push    edi
        call    dword ptr [g_0076b2d8]
        fstp    dword ptr [ebx + 0x38]
        add    esp, 4
L_850e:
        push    0x799e9c
        mov    ecx, esi
        call    FUN_00767d20
        mov    dword ptr [esp + 0x18], 0
        mov    eax, dword ptr [eax + 4]
        push    eax
        lea    ecx, [esp + 0x1c]
        call    FUN_00412780
        mov    ecx, dword ptr [esp + 0x18]
        push    0x799e90
        push    ecx
        lea    ecx, [esp + 0x14]
        call    FUN_004125e0
        push    eax
        lea    ecx, [esp + 0x1c]
        call    FUN_00412740
        mov    eax, dword ptr [esp + 0xc]
        test    eax, eax
        je    L_8567
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_8567
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_8567:
        mov    edx, dword ptr [esp + 0x18]
        mov    ecx, dword ptr [esp + 0x14]
        push    edx
        call    FUN_0066b370
        mov    dword ptr [ebx + 0x30], eax
        mov    eax, dword ptr [esp + 0x18]
        test    eax, eax
        pop    edi
        pop    esi
        pop    ebx
        je    L_8596
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_8596
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_8596:
        pop    ecx
        ret    0xc
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        fld    dword ptr [esp + 8]
        push    ebx
        push    esi
        push    edi
        mov    edi, ecx
        fadd    dword ptr [edi + 0x20]
        fst    dword ptr [edi + 0x20]
        fcomp    dword ptr [edi + 0x10]
        fnstsw  ax
        test    ah, 1
        jne    L_861e
        mov    eax, dword ptr [esp + 0x14]
        mov    esi, dword ptr [edi + 0x34]
        push    eax
        mov    ecx, esi
        call    FUN_00699530
        test    al, al
        je    L_85de
        mov    ecx, esi
        call    FUN_006991d0
        fstp    dword ptr [edi + 0x24]
        pop    edi
        pop    esi
        mov    al, 1
        pop    ebx
        ret    0xc
L_85de:
        mov    ebx, dword ptr [esp + 0x10]
        mov    ecx, dword ptr [ebx + 0x3c]
        push    esi
        call    FUN_00605740
        mov    eax, dword ptr [edi + 0x14]
        test    eax, eax
        je    L_861e
        mov    ecx, dword ptr [esi + 0x18]
        fld    dword ptr [esi + 0x10]
        mov    eax, dword ptr [ecx + 4]
        fsub    dword ptr [eax + 8]
        mov    edi, dword ptr [edi + 0x18]
        fld    dword ptr [eax + 0xc]
        push    ecx
        fsub    dword ptr [eax + 8]
        mov    eax, dword ptr [ebx + 0x34]
        lea    edx, [edi + edi*2]
        fdivp st(1), st(0)
        lea    ecx, [eax + edx*8]
        __emit 0xD9  // fstp dword ptr [esp] (no-disp form; ref uses D9 1C 24)
        __emit 0x1C
        __emit 0x24
        call    FUN_00604f30
        fstp    dword ptr [esi + 0x20]
L_861e:
        pop    edi
        pop    esi
        xor    al, al
        pop    ebx
        ret    0xc
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
        fld    dword ptr [esp + 4]
        push    esi
        fcomp    dword ptr [g_0076d598]
        mov    esi, ecx
        fnstsw  ax
        test    ah, 0x40
        jne    L_869a
        fld    dword ptr [esp + 8]
        mov    ecx, dword ptr [esi + 0x34]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_866f
        call    FUN_00699160
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 0x14]
        fmul    dword ptr [esp + 8]
        fstp    dword ptr [esi + 0x20]
        pop    esi
        ret    8
L_866f:
        mov    eax, dword ptr [ecx + 0x18]
        mov    eax, dword ptr [eax + 4]
        fld    dword ptr [eax + 0xc]
        push    ecx
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [esp + 0xc]
        __emit 0xD9  // fstp dword ptr [esp] (no-disp form; ref uses D9 1C 24)
        __emit 0x1C
        __emit 0x24
        call    FUN_006992f0
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 0x14]
        fmul    dword ptr [esp + 8]
        fstp    dword ptr [esi + 0x20]
        pop    esi
        ret    8
L_869a:
        fld    dword ptr [esi + 0x38]
        mov    ecx, dword ptr [esi + 0x34]
        fcom    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_86bf
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        call    FUN_00699160
        mov    dword ptr [esi + 0x20], 0
        pop    esi
        ret    8
L_86bf:
        mov    eax, dword ptr [ecx + 0x18]
        mov    eax, dword ptr [eax + 4]
        fld    dword ptr [eax + 0xc]
        push    ecx
        fsub    dword ptr [eax + 8]
        fmul st(0), st(1)
        __emit 0xD9  // fstp dword ptr [esp] (no-disp form; ref uses D9 1C 24)
        __emit 0x1C
        __emit 0x24
        __emit 0xDD  // fstp st(0)
        __emit 0xD8
        call    FUN_006992f0
        mov    dword ptr [esi + 0x20], 0
        pop    esi
        ret    8
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
        push    esi
        push    0x2c
        mov    esi, ecx
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_8713
        mov    ecx, dword ptr [esi + 0x30]
        push    ecx
        mov    ecx, eax
        call    FUN_00698b90
        mov    dword ptr [esi + 0x34], eax
        pop    esi
        ret    4
L_8713:
        xor    eax, eax
        mov    dword ptr [esi + 0x34], eax
        pop    esi
        ret    4
    }
}
