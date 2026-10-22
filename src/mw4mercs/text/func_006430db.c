/*
 * FUN_006430db (extent 0x6430db-0x644143) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076d064;
extern float  g_0076d070;
extern float  g_0076e22c;
extern float  g_0077dff4;
extern float  g_0077dff8;
extern float  g_00785f28;
extern float  g_00788104;
extern float  g_007899e8;
extern float  g_007899ec;
extern int    g_007924bc;
extern int    g_007924c0;
extern float  g_007924c4;
extern float  g_007ddd80;
extern float  g_007ddd84;
extern int    g_007ddde0;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_0040c5d0(void);
extern void __cdecl FUN_0040c9c0(void);
extern void __cdecl FUN_0040ccd0(void);
extern void __cdecl FUN_0055f510(void);
extern void __cdecl FUN_0055f5b0(void);
extern void __cdecl FUN_00560190(void);
extern void __cdecl FUN_005603e0(void);
extern void __cdecl FUN_00560400(void);
extern void __cdecl FUN_00561430(void);
extern void __cdecl FUN_005614d0(void);
extern void __cdecl FUN_005619f0(void);
extern void __cdecl FUN_00561a30(void);
extern void __cdecl FUN_00561df0(void);
extern void __cdecl FUN_00587830(void);
extern void __cdecl FUN_00640fa0(void);
extern void __cdecl FUN_00641000(void);
extern void __cdecl FUN_00641010(void);
extern void __cdecl FUN_00641050(void);
extern void __cdecl FUN_00642870(void);
extern void __cdecl FUN_00644150(void);

__declspec(naked) void FUN_006430db(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x64
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov    edi, ecx
        lea    eax, [esp + 0x10]
        push    eax
        lea    ecx, [esp + 0x2c]
        lea    esi, [edi + 0x38]
        push    ecx
        xor    ebx, ebx
        mov    ecx, esi
        mov    dword ptr [esp + 0x18], ebx
        call    FUN_00561df0
        mov    edx, dword ptr [eax]
        lea    eax, [esp + 0x24]
        push    eax
        mov    ecx, esi
        mov    dword ptr [esp + 0x18], edx
        call    FUN_00641000
        mov    ecx, eax
        mov    eax, dword ptr [esp + 0x14]
        cmp    eax, dword ptr [ecx]
        je    L_3128
        mov    edx, dword ptr [esp + 0x10]
        cmp    edx, dword ptr [eax + 0x10]
        jge    L_315f
L_3128:
        lea    eax, [esp + 0x20]
        push    eax
        lea    ecx, [esp + 0x14]
        push    ecx
        lea    ecx, [esp + 0x34]
        mov    dword ptr [esp + 0x28], ebx
        call    FUN_00641050
        push    eax
        push    ecx
        lea    edx, [esp + 0x1c]
        mov    ecx, esp
        push    edx
        call    FUN_00561a30
        lea    eax, [esp + 0x24]
        push    eax
        mov    ecx, esi
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x14], eax
L_315f:
        mov    eax, dword ptr [eax + 0x14]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 4]
        fmul    dword ptr [eax + 0x14]
        fld    dword ptr [eax + 0x10]
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [eax + 0x18]
        mov    al, byte ptr [edi + 0x6c]
        test    al, al
        fstp    dword ptr [esp + 0x60]
        mov    ecx, dword ptr [esp + 0x60]
        mov    dword ptr [esp + 0x54], ecx
        fstp    dword ptr [esp + 0x50]
        mov    dword ptr [esp + 0x58], 0
        jne    L_31b3
        mov    al, byte ptr [edi + 0x6d]
        test    al, al
        jne    L_31b3
        mov    al, byte ptr [edi + 0x71]
        test    al, al
        jne    L_31b3
        mov    al, byte ptr [edi + 0x6e]
        test    al, al
        jne    L_31b3
        mov    al, byte ptr [edi + 0x6f]
        test    al, al
        je    L_3a1c
L_31b3:
        lea    edx, [edi + 0x14]
        push    edx
        lea    ecx, [esp + 0x30]
        call    FUN_0040c410
        fld    dword ptr [esp + 0x2c]
        fcomp    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        je    L_31df
        fld    dword ptr [esp + 0x2c]
        fmul    dword ptr [g_0077dff8]
        fstp    dword ptr [esp + 0x2c]
L_31df:
        fld    dword ptr [esp + 0x30]
        fcomp    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        je    L_31fe
        fld    dword ptr [esp + 0x30]
        fmul    dword ptr [g_0077dff4]
        fstp    dword ptr [esp + 0x30]
L_31fe:
        lea    eax, [esp + 0x2c]
        push    eax
        lea    ecx, [esp + 0x3c]
        call    FUN_0040c5d0
        mov    eax, dword ptr [esp + 0x40]
        mov    ecx, dword ptr [esp + 0x38]
        mov    edx, dword ptr [esp + 0x3c]
        mov    dword ptr [esp + 0x4c], eax
        mov    al, byte ptr [edi + 0x6c]
        test    al, al
        mov    dword ptr [esp + 0x44], ecx
        mov    dword ptr [esp + 0x48], edx
        je    L_326b
        mov    al, byte ptr [edi + 0x70]
        test    al, al
        je    L_3336
        fld    dword ptr [g_0076d064]
        fsub    dword ptr [edi + 0x90]
        fmul    dword ptr [g_0077dff8]
        fadd    dword ptr [esp + 0x38]
        fstp    dword ptr [esp + 0x44]
        fld    dword ptr [edi + 0x94]
        fadd    dword ptr [edi + 0x90]
        fmul    dword ptr [g_00785f28]
        fstp    dword ptr [esp + 0x48]
        jmp    L_3336
L_326b:
        mov    al, byte ptr [edi + 0x6d]
        test    al, al
        je    L_32c2
        mov    al, byte ptr [edi + 0x70]
        test    al, al
        je    L_32b6
        fld    dword ptr [g_0076d064]
        fsub    dword ptr [edi + 0x94]
        fmul    dword ptr [g_0077dff8]
        fld    dword ptr [esp + 0x38]
        fmul    dword ptr [g_0076e22c]
        fsubp st(1), st(0)
        fstp    dword ptr [esp + 0x44]
        fld    dword ptr [edi + 0x90]
        fadd    dword ptr [edi + 0x94]
        fmul    dword ptr [g_00785f28]
        fstp    dword ptr [esp + 0x48]
        jmp    L_3336
L_32b6:
        fld    dword ptr [g_0077dff8]
        fsub    dword ptr [esp + 0x38]
        jmp    L_3332
L_32c2:
        mov    al, byte ptr [edi + 0x6e]
        test    al, al
        je    L_32f0
        mov    al, byte ptr [edi + 0x70]
        test    al, al
        je    L_3336
        fld    dword ptr [g_0076d064]
        fsub    dword ptr [edi + 0x98]
        fmul    dword ptr [g_0077dff4]
        fld    dword ptr [esp + 0x38]
        fmul    dword ptr [g_0076e22c]
        faddp st(1), st(0)
        jmp    L_331c
L_32f0:
        mov    al, byte ptr [edi + 0x6f]
        test    al, al
        je    L_3336
        mov    al, byte ptr [edi + 0x70]
        test    al, al
        je    L_3336
        fld    dword ptr [g_0076d064]
        fsub    dword ptr [edi + 0x9c]
        fmul    dword ptr [g_0077dff4]
        fld    dword ptr [esp + 0x38]
        fmul    dword ptr [g_0076e22c]
        fsubp st(1), st(0)
L_331c:
        fstp    dword ptr [esp + 0x48]
        fld    dword ptr [edi + 0x94]
        fadd    dword ptr [edi + 0x90]
        fmul    dword ptr [g_00788104]
L_3332:
        fstp    dword ptr [esp + 0x44]
L_3336:
        mov    ecx, dword ptr [edi + 0x74]
        mov    ebp, dword ptr [edi + ecx*4 + 0x60]
        mov    edx, dword ptr [edi + 0x54]
        lea    eax, [esp + 0x14]
        push    eax
        lea    ecx, [esp + 0x2c]
        shl    edx, 0x18
        push    ecx
        and    ebp, 0xffffff
        mov    ecx, esi
        add    ebp, edx
        mov    dword ptr [esp + 0x1c], ebx
        call    FUN_00561df0
        mov    edx, dword ptr [eax]
        lea    eax, [esp + 0x24]
        push    eax
        mov    ecx, esi
        mov    dword ptr [esp + 0x14], edx
        call    FUN_00641000
        mov    ecx, eax
        mov    eax, dword ptr [esp + 0x10]
        cmp    eax, dword ptr [ecx]
        je    L_3385
        mov    edx, dword ptr [esp + 0x14]
        cmp    edx, dword ptr [eax + 0x10]
        jge    L_33bc
L_3385:
        lea    eax, [esp + 0x20]
        push    eax
        lea    ecx, [esp + 0x18]
        push    ecx
        lea    ecx, [esp + 0x34]
        mov    dword ptr [esp + 0x28], ebx
        call    FUN_00641050
        push    eax
        push    ecx
        lea    edx, [esp + 0x18]
        mov    ecx, esp
        push    edx
        call    FUN_00561a30
        lea    eax, [esp + 0x24]
        push    eax
        mov    ecx, esi
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x10], eax
L_33bc:
        mov    ecx, dword ptr [eax + 0x14]
        push    ebx
        call    FUN_0055f510
        mov    al, byte ptr [edi + 0x6c]
        test    al, al
        je    L_3445
        lea    ecx, [esp + 0x14]
        push    ecx
        lea    edx, [esp + 0x2c]
        push    edx
        mov    ecx, esi
        mov    dword ptr [esp + 0x1c], ebx
        call    FUN_00561df0
        mov    eax, dword ptr [eax]
        lea    ecx, [esp + 0x24]
        push    ecx
        mov    ecx, esi
        mov    dword ptr [esp + 0x14], eax
        call    FUN_00641000
        mov    edx, eax
        mov    eax, dword ptr [esp + 0x10]
        cmp    eax, dword ptr [edx]
        je    L_3406
        mov    ecx, dword ptr [esp + 0x14]
        cmp    ecx, dword ptr [eax + 0x10]
        jge    L_343d
L_3406:
        lea    edx, [esp + 0x20]
        push    edx
        lea    eax, [esp + 0x18]
        push    eax
        lea    ecx, [esp + 0x34]
        mov    dword ptr [esp + 0x28], ebx
        call    FUN_00641050
        push    eax
        push    ecx
        lea    edx, [esp + 0x18]
        mov    ecx, esp
        push    edx
        call    FUN_00561a30
        lea    eax, [esp + 0x24]
        push    eax
        mov    ecx, esi
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x10], eax
L_343d:
        push    ebx
        push    1
        jmp    L_36c9
L_3445:
        mov    al, byte ptr [edi + 0x6d]
        test    al, al
        je    L_34c6
        lea    eax, [esp + 0x14]
        push    eax
        lea    ecx, [esp + 0x2c]
        push    ecx
        mov    ecx, esi
        mov    dword ptr [esp + 0x1c], ebx
        call    FUN_00561df0
        mov    edx, dword ptr [eax]
        lea    eax, [esp + 0x24]
        push    eax
        mov    ecx, esi
        mov    dword ptr [esp + 0x14], edx
        call    FUN_00641000
        mov    ecx, eax
        mov    eax, dword ptr [esp + 0x10]
        cmp    eax, dword ptr [ecx]
        je    L_348a
        mov    edx, dword ptr [esp + 0x14]
        cmp    edx, dword ptr [eax + 0x10]
        jge    L_36c7
L_348a:
        lea    eax, [esp + 0x20]
        push    eax
        lea    ecx, [esp + 0x18]
        push    ecx
        lea    ecx, [esp + 0x34]
        mov    dword ptr [esp + 0x28], ebx
        call    FUN_00641050
        push    eax
        push    ecx
        lea    edx, [esp + 0x18]
        mov    ecx, esp
        push    edx
        call    FUN_00561a30
        lea    eax, [esp + 0x24]
        push    eax
        mov    ecx, esi
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x10], eax
        jmp    L_36c7
L_34c6:
        mov    al, byte ptr [edi + 0x6e]
        test    al, al
        je    L_35c2
        lea    eax, [esp + 0x14]
        push    eax
        lea    ecx, [esp + 0x2c]
        push    ecx
        mov    ecx, esi
        mov    dword ptr [esp + 0x1c], ebx
        call    FUN_00561df0
        mov    edx, dword ptr [eax]
        lea    eax, [esp + 0x24]
        push    eax
        mov    ecx, esi
        mov    dword ptr [esp + 0x14], edx
        call    FUN_00641000
        mov    ecx, eax
        mov    eax, dword ptr [esp + 0x10]
        cmp    eax, dword ptr [ecx]
        je    L_350b
        mov    edx, dword ptr [esp + 0x14]
        cmp    edx, dword ptr [eax + 0x10]
        jge    L_3542
L_350b:
        lea    eax, [esp + 0x20]
        push    eax
        lea    ecx, [esp + 0x18]
        push    ecx
        lea    ecx, [esp + 0x34]
        mov    dword ptr [esp + 0x28], ebx
        call    FUN_00641050
        push    eax
        push    ecx
        lea    edx, [esp + 0x18]
        mov    ecx, esp
        push    edx
        call    FUN_00561a30
        lea    eax, [esp + 0x24]
        push    eax
        mov    ecx, esi
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x10], eax
L_3542:
        fld    dword ptr [g_007924c4]
        push    ecx
        fmul    dword ptr [g_007899e8]
        mov    ecx, dword ptr [eax + 0x14]
        fstp    dword ptr [esp]
        call    FUN_0055f510
        lea    ecx, [esp + 0x14]
        push    ecx
        lea    edx, [esp + 0x2c]
        push    edx
        mov    ecx, esi
        mov    dword ptr [esp + 0x1c], ebx
        call    FUN_00641010
        mov    eax, dword ptr [eax]
        cmp    eax, dword ptr [esi]
        mov    dword ptr [esp + 0x1c], eax
        je    L_3586
        mov    ecx, dword ptr [esp + 0x14]
        cmp    ecx, dword ptr [eax + 0x10]
        jge    L_36c7
L_3586:
        lea    edx, [esp + 0x20]
        push    edx
        lea    eax, [esp + 0x18]
        push    eax
        lea    ecx, [esp + 0x34]
        mov    dword ptr [esp + 0x28], ebx
        call    FUN_00641050
        push    eax
        push    ecx
        lea    edx, [esp + 0x24]
        mov    ecx, esp
        push    edx
        call    FUN_00561a30
        lea    eax, [esp + 0x2c]
        push    eax
        mov    ecx, esi
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x1c], eax
        jmp    L_36c7
L_35c2:
        mov    al, byte ptr [edi + 0x6f]
        test    al, al
        je    L_36e4
        lea    eax, [esp + 0x14]
        push    eax
        lea    ecx, [esp + 0x2c]
        push    ecx
        mov    ecx, esi
        mov    dword ptr [esp + 0x1c], ebx
        call    FUN_00641010
        mov    edx, dword ptr [eax]
        lea    eax, [esp + 0x24]
        push    eax
        mov    ecx, esi
        mov    dword ptr [esp + 0x14], edx
        call    FUN_00641000
        mov    ecx, eax
        mov    eax, dword ptr [esp + 0x10]
        cmp    eax, dword ptr [ecx]
        je    L_3607
        mov    edx, dword ptr [esp + 0x14]
        cmp    edx, dword ptr [eax + 0x10]
        jge    L_363e
L_3607:
        lea    eax, [esp + 0x20]
        push    eax
        lea    ecx, [esp + 0x18]
        push    ecx
        lea    ecx, [esp + 0x34]
        mov    dword ptr [esp + 0x28], ebx
        call    FUN_00641050
        push    eax
        push    ecx
        lea    edx, [esp + 0x18]
        mov    ecx, esp
        push    edx
        call    FUN_00561a30
        lea    eax, [esp + 0x24]
        push    eax
        mov    ecx, esi
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x10], eax
L_363e:
        fld    dword ptr [g_007924c4]
        push    ecx
        fmul    dword ptr [g_007899ec]
        mov    ecx, dword ptr [eax + 0x14]
        fstp    dword ptr [esp]
        call    FUN_0055f510
        lea    ecx, [esp + 0x14]
        push    ecx
        lea    edx, [esp + 0x2c]
        push    edx
        mov    ecx, esi
        mov    dword ptr [esp + 0x1c], ebx
        call    FUN_00641010
        mov    eax, dword ptr [eax]
        lea    ecx, [esp + 0x24]
        push    ecx
        mov    ecx, esi
        mov    dword ptr [esp + 0x14], eax
        call    FUN_00641000
        mov    edx, eax
        mov    eax, dword ptr [esp + 0x10]
        cmp    eax, dword ptr [edx]
        je    L_3690
        mov    ecx, dword ptr [esp + 0x14]
        cmp    ecx, dword ptr [eax + 0x10]
        jge    L_36c7
L_3690:
        lea    edx, [esp + 0x20]
        push    edx
        lea    eax, [esp + 0x18]
        push    eax
        lea    ecx, [esp + 0x34]
        mov    dword ptr [esp + 0x28], ebx
        call    FUN_00641050
        push    eax
        push    ecx
        lea    edx, [esp + 0x18]
        mov    ecx, esp
        push    edx
        call    FUN_00561a30
        lea    eax, [esp + 0x24]
        push    eax
        mov    ecx, esi
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x10], eax
L_36c7:
        push    ebx
        push    ebx
L_36c9:
        push    ebp
        lea    ecx, [esp + 0x5c]
        push    ecx
        mov    ecx, dword ptr [eax + 0x14]
        lea    edx, [esp + 0x54]
        push    edx
        call    FUN_0055f5b0
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x64
        ret    
L_36e4:
        mov    al, byte ptr [edi + 0x71]
        test    al, al
        je    L_3a1c
        fld    dword ptr [edi + 0x80]
        fdiv    dword ptr [g_007ddd84]
        fstp    dword ptr [esp + 0x1c]
        fld    dword ptr [edi + 0x84]
        fdiv    dword ptr [g_007ddd80]
        fstp    dword ptr [esp + 0x18]
        fld    dword ptr [edi + 0x88]
        fdiv    dword ptr [g_007ddd84]
        fstp    dword ptr [esp + 0x10]
        fld    dword ptr [edi + 0x8c]
        fdiv    dword ptr [g_007ddd80]
        fstp    dword ptr [esp + 0x14]
        fld    dword ptr [esp + 0x10]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jne    L_38c7
        fld    dword ptr [esp + 0x14]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jne    L_38c7
        lea    eax, [esp + 0x68]
        push    eax
        lea    ecx, [esp + 0x24]
        push    ecx
        mov    edi, 1
        mov    ecx, esi
        mov    dword ptr [esp + 0x28], edi
        call    FUN_00640fa0
        mov    ecx, dword ptr [eax]
        call    FUN_00642870
        push    eax
        lea    ecx, [esp + 0x54]
        call    FUN_0040ccd0
        fld    dword ptr [esp + 0x14]
        fmul    dword ptr [g_0076d070]
        push    ebx
        push    ebx
        push    ebp
        fstp    dword ptr [esp + 0x2c]
        lea    edx, [esp + 0x5c]
        fld    dword ptr [esp + 0x24]
        push    edx
        fsub    dword ptr [esp + 0x30]
        mov    dword ptr [esp + 0x38], edi
        push    0x3f666666
        lea    ecx, [esp + 0x7c]
        fstp    dword ptr [esp + 0x38]
        mov    edi, dword ptr [esp + 0x38]
        fld    dword ptr [esp + 0x24]
        push    edi
        fmul    dword ptr [g_0076d070]
        fstp    dword ptr [esp + 0x2c]
        fld    dword ptr [esp + 0x34]
        fsub    dword ptr [esp + 0x2c]
        fstp    dword ptr [esp + 0x28]
        mov    ebx, dword ptr [esp + 0x28]
        push    ebx
        call    FUN_00587830
        push    eax
        lea    eax, [esp + 0x3c]
        push    eax
        mov    ecx, esi
        call    FUN_00640fa0
        mov    ecx, dword ptr [eax]
        call    FUN_0055f5b0
        fld    dword ptr [esp + 0x14]
        fadd    dword ptr [esp + 0x1c]
        push    0
        push    0
        push    ebp
        lea    ecx, [esp + 0x5c]
        fstp    dword ptr [esp + 0x34]
        push    ecx
        push    0x3f666666
        push    edi
        mov    edi, dword ptr [esp + 0x40]
        push    edi
        lea    ecx, [esp + 0x84]
        mov    dword ptr [esp + 0x40], 2
        call    FUN_00587830
        push    eax
        lea    edx, [esp + 0x38]
        push    edx
        mov    ecx, esi
        call    FUN_00640fa0
        mov    ecx, dword ptr [eax]
        call    FUN_0055f5b0
        fld    dword ptr [esp + 0x20]
        fadd    dword ptr [esp + 0x18]
        push    0
        push    0
        push    ebp
        lea    eax, [esp + 0x5c]
        fstp    dword ptr [esp + 0x2c]
        mov    ecx, dword ptr [esp + 0x2c]
        push    eax
        push    0x3f666666
        push    ecx
        mov    dword ptr [esp + 0x40], 3
        push    edi
        lea    ecx, [esp + 0x84]
        call    FUN_00587830
        push    eax
        lea    edx, [esp + 0x3c]
        push    edx
        mov    ecx, esi
        call    FUN_00640fa0
        mov    ecx, dword ptr [eax]
        call    FUN_0055f5b0
        mov    ecx, dword ptr [esp + 0x20]
        push    0
        push    0
        push    ebp
        lea    eax, [esp + 0x5c]
        push    eax
        push    0x3f666666
        push    ecx
        push    ebx
        lea    ecx, [esp + 0x84]
        mov    dword ptr [esp + 0x44], 4
        call    FUN_00587830
        push    eax
        lea    edx, [esp + 0x3c]
        push    edx
        mov    ecx, esi
        call    FUN_00640fa0
        mov    ecx, dword ptr [eax]
        call    FUN_0055f5b0
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x64
        ret    
L_38c7:
        lea    eax, [esp + 0x14]
        push    eax
        lea    ecx, [esp + 0x28]
        push    ecx
        mov    edi, 5
        mov    ecx, esi
        mov    dword ptr [esp + 0x1c], edi
        call    FUN_00641010
        mov    edx, dword ptr [eax]
        lea    eax, [esp + 0x20]
        push    eax
        mov    ecx, esi
        mov    dword ptr [esp + 0x14], edx
        call    FUN_00641000
        mov    ecx, eax
        mov    eax, dword ptr [esp + 0x10]
        cmp    eax, dword ptr [ecx]
        je    L_3906
        mov    edx, dword ptr [esp + 0x14]
        cmp    edx, dword ptr [eax + 0x10]
        jge    L_393d
L_3906:
        lea    eax, [esp + 0x28]
        push    eax
        lea    ecx, [esp + 0x18]
        push    ecx
        lea    ecx, [esp + 0x40]
        mov    dword ptr [esp + 0x30], ebx
        call    FUN_00641050
        push    eax
        push    ecx
        lea    edx, [esp + 0x18]
        mov    ecx, esp
        push    edx
        call    FUN_00561a30
        lea    eax, [esp + 0x34]
        push    eax
        mov    ecx, esi
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x10], eax
L_393d:
        mov    eax, dword ptr [eax + 0x14]
        fld    dword ptr [eax + 0xc]
        lea    ecx, [esp + 0x5c]
        fsub    dword ptr [eax + 4]
        push    ecx
        lea    ecx, [esp + 0x6c]
        fmul    dword ptr [eax + 0x14]
        mov    dword ptr [esp + 0x68], 0
        fstp    dword ptr [esp + 0x60]
        fld    dword ptr [eax + 0x10]
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [eax + 0x18]
        fstp    dword ptr [esp + 0x64]
        call    FUN_0040c5d0
        lea    edx, [esp + 0x68]
        push    edx
        lea    ecx, [esp + 0x54]
        call    FUN_0040c410
        mov    eax, dword ptr [esp + 0x18]
        mov    ecx, dword ptr [esp + 0x1c]
        push    0x3f666666
        push    eax
        push    ecx
        lea    ecx, [esp + 0x74]
        mov    dword ptr [esp + 0x20], edi
        call    FUN_0040c9c0
        lea    edx, [esp + 0x14]
        push    edx
        lea    eax, [esp + 0x30]
        push    eax
        mov    ecx, esi
        call    FUN_00641010
        mov    ecx, dword ptr [eax]
        lea    edx, [esp + 0x24]
        mov    dword ptr [esp + 0x1c], ecx
        push    edx
        mov    ecx, esi
        call    FUN_00641000
        mov    ecx, eax
        mov    eax, dword ptr [esp + 0x1c]
        cmp    eax, dword ptr [ecx]
        je    L_39d0
        mov    edx, dword ptr [esp + 0x14]
        cmp    edx, dword ptr [eax + 0x10]
        jge    L_3a07
L_39d0:
        lea    eax, [esp + 0x28]
        push    eax
        lea    ecx, [esp + 0x18]
        push    ecx
        lea    ecx, [esp + 0x40]
        mov    dword ptr [esp + 0x30], ebx
        call    FUN_00641050
        push    eax
        push    ecx
        lea    edx, [esp + 0x24]
        mov    ecx, esp
        push    edx
        call    FUN_00561a30
        lea    eax, [esp + 0x28]
        push    eax
        mov    ecx, esi
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x1c], eax
L_3a07:
        push    ebx
        push    ebx
        push    ebp
        lea    ecx, [esp + 0x5c]
        push    ecx
        mov    ecx, dword ptr [eax + 0x14]
        lea    edx, [esp + 0x78]
        push    edx
        call    FUN_0055f5b0
L_3a1c:
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x64
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
        sub    esp, 0x4c
        mov    eax, dword ptr [g_007ddde0]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov    esi, ecx
        push    eax
        call    FUN_00561430
        lea    ecx, [esp + 0x2c]
        xor    ebx, ebx
        lea    ebp, [esi + 0x58]
        push    ecx
        mov    ecx, ebp
        mov    dword ptr [esi], 0x792618
        mov    dword ptr [esi + 0x50], ebx
        mov    dword ptr [esi + 0x54], ebx
        mov    dword ptr [esp + 0x30], 0x42040000
        mov    dword ptr [esp + 0x34], 0x40a00000
        mov    dword ptr [esp + 0x38], 0x3f666666
        call    FUN_0040c410
        lea    edx, [esp + 0x2c]
        push    edx
        lea    ecx, [esi + 0x64]
        mov    dword ptr [esp + 0x30], 0x40a00000
        mov    dword ptr [esp + 0x34], 0x41c80000
        mov    dword ptr [esp + 0x38], 0x3f666666
        call    FUN_0040c410
        push    0x43800000
        push    0x43800000
        push    0x43730000
        push    0x437a0000
        push    0x43700000
        push    0x43750000
        push    ebx
        push    0x792448
        mov    ecx, esi
        call    FUN_005614d0
        push    0x43800000
        push    0x43800000
        push    0x43730000
        push    0x437a0000
        push    0x43700000
        push    0x43750000
        push    1
        push    0x792448
        mov    ecx, esi
        call    FUN_005614d0
        push    0x43800000
        push    0x43800000
        push    0x43730000
        push    0x437a0000
        push    0x43700000
        push    0x43750000
        push    2
        push    0x792448
        mov    ecx, esi
        call    FUN_005614d0
        push    0x43800000
        push    0x43800000
        push    0x43730000
        push    0x437a0000
        push    0x43700000
        push    0x43750000
        push    3
        push    0x792448
        mov    ecx, esi
        call    FUN_005614d0
        push    0x43800000
        push    0x43800000
        push    0x42540000
        push    0x43090000
        push    0x41200000
        push    0x43040000
        push    4
        push    0x78f198
        mov    ecx, esi
        call    FUN_005614d0
        push    0x43800000
        push    0x43800000
        push    0x42540000
        push    0x43090000
        push    0x41200000
        push    0x43040000
        push    5
        push    0x78f198
        mov    ecx, esi
        call    FUN_005614d0
        lea    eax, [esp + 0x10]
        push    eax
        lea    ecx, [esp + 0x20]
        lea    edi, [esi + 0x38]
        push    ecx
        mov    ecx, edi
        mov    dword ptr [esp + 0x18], ebx
        call    FUN_00641010
        mov    eax, dword ptr [eax]
        cmp    eax, dword ptr [edi]
        mov    dword ptr [esp + 0x14], eax
        je    L_3bd0
        mov    edx, dword ptr [esp + 0x10]
        cmp    edx, dword ptr [eax + 0x10]
        jge    L_3c07
L_3bd0:
        lea    eax, [esp + 0x18]
        push    eax
        lea    ecx, [esp + 0x14]
        push    ecx
        lea    ecx, [esp + 0x2c]
        mov    dword ptr [esp + 0x20], ebx
        call    FUN_00641050
        push    eax
        push    ecx
        lea    edx, [esp + 0x1c]
        mov    ecx, esp
        push    edx
        call    FUN_00561a30
        lea    eax, [esp + 0x28]
        push    eax
        mov    ecx, edi
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x14], eax
L_3c07:
        mov    eax, dword ptr [eax + 0x14]
        fld    dword ptr [eax + 0xc]
        lea    ecx, [esp + 0x2c]
        fsub    dword ptr [eax + 4]
        push    ecx
        lea    ecx, [esp + 0x48]
        fmul    dword ptr [eax + 0x14]
        mov    dword ptr [esp + 0x38], 0
        fstp    dword ptr [esp + 0x30]
        fld    dword ptr [eax + 0x10]
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [eax + 0x18]
        fstp    dword ptr [esp + 0x34]
        call    FUN_0040c5d0
        lea    edx, [esp + 0x44]
        push    edx
        lea    ecx, [esp + 0x3c]
        call    FUN_0040c410
        lea    eax, [esp + 0x10]
        push    eax
        lea    ecx, [esp + 0x24]
        push    ecx
        mov    ecx, edi
        mov    dword ptr [esp + 0x18], ebx
        call    FUN_00641010
        mov    edx, dword ptr [eax]
        lea    eax, [esp + 0x1c]
        push    eax
        mov    ecx, edi
        mov    dword ptr [esp + 0x18], edx
        call    FUN_00641000
        mov    ecx, eax
        mov    eax, dword ptr [esp + 0x14]
        cmp    eax, dword ptr [ecx]
        je    L_3c82
        mov    edx, dword ptr [esp + 0x10]
        cmp    edx, dword ptr [eax + 0x10]
        jge    L_3cb9
L_3c82:
        lea    eax, [esp + 0x18]
        push    eax
        lea    ecx, [esp + 0x14]
        push    ecx
        lea    ecx, [esp + 0x34]
        mov    dword ptr [esp + 0x20], ebx
        call    FUN_00641050
        push    eax
        push    ecx
        lea    edx, [esp + 0x1c]
        mov    ecx, esp
        push    edx
        call    FUN_00561a30
        lea    eax, [esp + 0x2c]
        push    eax
        mov    ecx, edi
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x14], eax
L_3cb9:
        fld    dword ptr [esp + 0x38]
        mov    eax, dword ptr [eax + 0x14]
        fmul    dword ptr [g_0076d070]
        lea    ecx, [esp + 0x14]
        push    ecx
        lea    edx, [esp + 0x28]
        fstp    dword ptr [eax + 0x28]
        mov    dword ptr [eax + 0x2c], ebx
        push    edx
        mov    ecx, edi
        mov    dword ptr [esp + 0x1c], 1
        call    FUN_00641010
        mov    eax, dword ptr [eax]
        lea    ecx, [esp + 0x20]
        push    ecx
        mov    ecx, edi
        mov    dword ptr [esp + 0x14], eax
        call    FUN_00641000
        mov    edx, eax
        mov    eax, dword ptr [esp + 0x10]
        cmp    eax, dword ptr [edx]
        je    L_3d0a
        mov    ecx, dword ptr [esp + 0x14]
        cmp    ecx, dword ptr [eax + 0x10]
        jge    L_3d41
L_3d0a:
        lea    edx, [esp + 0x18]
        push    edx
        lea    eax, [esp + 0x18]
        push    eax
        lea    ecx, [esp + 0x34]
        mov    dword ptr [esp + 0x20], ebx
        call    FUN_00641050
        push    eax
        push    ecx
        lea    edx, [esp + 0x18]
        mov    ecx, esp
        push    edx
        call    FUN_00561a30
        lea    eax, [esp + 0x24]
        push    eax
        mov    ecx, edi
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x10], eax
L_3d41:
        fld    dword ptr [esp + 0x38]
        mov    eax, dword ptr [eax + 0x14]
        fmul    dword ptr [g_0076d070]
        lea    ecx, [esp + 0x14]
        push    ecx
        lea    edx, [esp + 0x28]
        fstp    dword ptr [eax + 0x28]
        mov    dword ptr [eax + 0x2c], ebx
        push    edx
        mov    ecx, edi
        mov    dword ptr [esp + 0x1c], 2
        call    FUN_00641010
        mov    eax, dword ptr [eax]
        lea    ecx, [esp + 0x20]
        push    ecx
        mov    ecx, edi
        mov    dword ptr [esp + 0x14], eax
        call    FUN_00641000
        mov    edx, eax
        mov    eax, dword ptr [esp + 0x10]
        cmp    eax, dword ptr [edx]
        je    L_3d92
        mov    ecx, dword ptr [esp + 0x14]
        cmp    ecx, dword ptr [eax + 0x10]
        jge    L_3dc9
L_3d92:
        lea    edx, [esp + 0x18]
        push    edx
        lea    eax, [esp + 0x18]
        push    eax
        lea    ecx, [esp + 0x34]
        mov    dword ptr [esp + 0x20], ebx
        call    FUN_00641050
        push    eax
        push    ecx
        lea    edx, [esp + 0x18]
        mov    ecx, esp
        push    edx
        call    FUN_00561a30
        lea    eax, [esp + 0x24]
        push    eax
        mov    ecx, edi
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x10], eax
L_3dc9:
        fld    dword ptr [esp + 0x38]
        mov    eax, dword ptr [eax + 0x14]
        fmul    dword ptr [g_0076d070]
        lea    ecx, [esp + 0x14]
        push    ecx
        lea    edx, [esp + 0x28]
        fstp    dword ptr [eax + 0x28]
        mov    dword ptr [eax + 0x2c], ebx
        push    edx
        mov    ecx, edi
        mov    dword ptr [esp + 0x1c], 3
        call    FUN_00641010
        mov    eax, dword ptr [eax]
        lea    ecx, [esp + 0x20]
        push    ecx
        mov    ecx, edi
        mov    dword ptr [esp + 0x14], eax
        call    FUN_00641000
        mov    edx, eax
        mov    eax, dword ptr [esp + 0x10]
        cmp    eax, dword ptr [edx]
        je    L_3e1a
        mov    ecx, dword ptr [esp + 0x14]
        cmp    ecx, dword ptr [eax + 0x10]
        jge    L_3e51
L_3e1a:
        lea    edx, [esp + 0x18]
        push    edx
        lea    eax, [esp + 0x18]
        push    eax
        lea    ecx, [esp + 0x34]
        mov    dword ptr [esp + 0x20], ebx
        call    FUN_00641050
        push    eax
        push    ecx
        lea    edx, [esp + 0x18]
        mov    ecx, esp
        push    edx
        call    FUN_00561a30
        lea    eax, [esp + 0x24]
        push    eax
        mov    ecx, edi
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x10], eax
L_3e51:
        fld    dword ptr [esp + 0x38]
        mov    eax, dword ptr [eax + 0x14]
        fmul    dword ptr [g_0076d070]
        lea    ecx, [esp + 0x14]
        push    ecx
        lea    edx, [esp + 0x28]
        fstp    dword ptr [eax + 0x28]
        mov    dword ptr [eax + 0x2c], ebx
        push    edx
        mov    ecx, edi
        mov    dword ptr [esp + 0x1c], 4
        call    FUN_00641010
        mov    eax, dword ptr [eax]
        lea    ecx, [esp + 0x20]
        push    ecx
        mov    ecx, edi
        mov    dword ptr [esp + 0x14], eax
        call    FUN_00641000
        mov    edx, eax
        mov    eax, dword ptr [esp + 0x10]
        cmp    eax, dword ptr [edx]
        je    L_3ea2
        mov    ecx, dword ptr [esp + 0x14]
        cmp    ecx, dword ptr [eax + 0x10]
        jge    L_3ed9
L_3ea2:
        lea    edx, [esp + 0x18]
        push    edx
        lea    eax, [esp + 0x18]
        push    eax
        lea    ecx, [esp + 0x34]
        mov    dword ptr [esp + 0x20], ebx
        call    FUN_00641050
        push    eax
        push    ecx
        lea    edx, [esp + 0x18]
        mov    ecx, esp
        push    edx
        call    FUN_00561a30
        lea    eax, [esp + 0x24]
        push    eax
        mov    ecx, edi
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x10], eax
L_3ed9:
        mov    eax, dword ptr [eax + 0x14]
        fld    dword ptr [eax + 0xc]
        lea    ecx, [esp + 0x44]
        fsub    dword ptr [eax + 4]
        push    ecx
        lea    ecx, [esp + 0x54]
        fmul    dword ptr [eax + 0x14]
        mov    dword ptr [esp + 0x50], 0
        fstp    dword ptr [esp + 0x48]
        fld    dword ptr [eax + 0x10]
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [eax + 0x18]
        fstp    dword ptr [esp + 0x4c]
        call    FUN_0040c5d0
        lea    edx, [esp + 0x50]
        push    edx
        lea    ecx, [esp + 0x3c]
        call    FUN_0040c410
        lea    eax, [esp + 0x14]
        push    eax
        lea    ecx, [esp + 0x28]
        push    ecx
        mov    ecx, edi
        mov    dword ptr [esp + 0x1c], 4
        call    FUN_00641010
        mov    edx, dword ptr [eax]
        lea    eax, [esp + 0x20]
        push    eax
        mov    ecx, edi
        mov    dword ptr [esp + 0x14], edx
        call    FUN_00641000
        mov    ecx, eax
        mov    eax, dword ptr [esp + 0x10]
        cmp    eax, dword ptr [ecx]
        je    L_3f58
        mov    edx, dword ptr [esp + 0x14]
        cmp    edx, dword ptr [eax + 0x10]
        jge    L_3f8f
L_3f58:
        lea    eax, [esp + 0x18]
        push    eax
        lea    ecx, [esp + 0x18]
        push    ecx
        lea    ecx, [esp + 0x34]
        mov    dword ptr [esp + 0x20], ebx
        call    FUN_00641050
        push    eax
        push    ecx
        lea    edx, [esp + 0x18]
        mov    ecx, esp
        push    edx
        call    FUN_00561a30
        lea    eax, [esp + 0x24]
        push    eax
        mov    ecx, edi
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x10], eax
L_3f8f:
        fld    dword ptr [esp + 0x3c]
        mov    eax, dword ptr [eax + 0x14]
        fmul    dword ptr [g_0076d070]
        mov    dword ptr [eax + 0x28], ebx
        lea    ecx, [esp + 0x18]
        push    ecx
        fstp    dword ptr [eax + 0x2c]
        mov    ecx, edi
        fld    dword ptr [esp + 0x40]
        mov    dword ptr [esp + 0x1c], 5
        fmul    dword ptr [g_0076d070]
        fstp    dword ptr [esp + 0x18]
        call    FUN_00640fa0
        mov    eax, dword ptr [eax]
        mov    edx, dword ptr [esp + 0x14]
        mov    dword ptr [eax + 0x28], ebx
        mov    dword ptr [eax + 0x2c], edx
        lea    eax, [esp + 0x18]
        push    eax
        mov    ecx, edi
        mov    dword ptr [esp + 0x1c], 5
        call    FUN_00640fa0
        mov    eax, dword ptr [eax]
        fld    dword ptr [eax + 0xc]
        lea    ecx, [esp + 0x44]
        fsub    dword ptr [eax + 4]
        push    ecx
        lea    ecx, [esp + 0x54]
        fmul    dword ptr [eax + 0x14]
        mov    dword ptr [esp + 0x50], 0
        fstp    dword ptr [esp + 0x48]
        fld    dword ptr [eax + 0x10]
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [eax + 0x18]
        fstp    dword ptr [esp + 0x4c]
        call    FUN_0040c5d0
        fld    dword ptr [esp + 0x54]
        lea    edx, [esp + 0x50]
        fmul    dword ptr [g_0076d070]
        push    edx
        lea    eax, [esp + 0x1c]
        push    eax
        fstp    dword ptr [ebp]
        mov    ebp, 5
        mov    ecx, edi
        mov    dword ptr [esp + 0x20], ebp
        call    FUN_00640fa0
        mov    ecx, dword ptr [eax]
        call    FUN_00642870
        fld    dword ptr [eax + 4]
        mov    ecx, dword ptr [g_007924c0]
        fmul    dword ptr [g_0076d070]
        push    ecx
        lea    edx, [esp + 0x1c]
        push    edx
        fstp    dword ptr [esi + 0x68]
        mov    ecx, edi
        mov    dword ptr [esp + 0x20], ebx
        call    FUN_00640fa0
        mov    ecx, dword ptr [eax]
        call    FUN_0055f510
        fld    dword ptr [g_007924bc]
        fadd    dword ptr [g_007924c0]
        push    ecx
        lea    eax, [esp + 0x1c]
        mov    ecx, edi
        fstp    dword ptr [esp]
        push    eax
        mov    dword ptr [esp + 0x20], 1
        call    FUN_00640fa0
        mov    ecx, dword ptr [eax]
        call    FUN_0055f510
        mov    ecx, dword ptr [g_007924bc]
        mov    dword ptr [esp + 0x18], 2
        push    ecx
        lea    edx, [esp + 0x1c]
        push    edx
        mov    ecx, edi
        call    FUN_00640fa0
        mov    ecx, dword ptr [eax]
        call    FUN_0055f510
        mov    eax, dword ptr [g_007924c0]
        push    eax
        lea    ecx, [esp + 0x1c]
        push    ecx
        mov    ecx, edi
        mov    dword ptr [esp + 0x20], ebp
        call    FUN_00640fa0
        mov    ecx, dword ptr [eax]
        call    FUN_0055f510
        push    0xff
        push    ebx
        push    0xfa
        push    ebx
        mov    ecx, esi
        call    FUN_00644150
        push    0x138
        call    FUN_004084d0
        add    esp, 4
        cmp    eax, ebx
        je    L_4108
        push    ebx
        mov    ecx, eax
        call    FUN_00560190
        mov    edi, eax
        jmp    L_410a
L_4108:
        xor    edi, edi
L_410a:
        mov    edx, dword ptr [esi + 0x34]
        push    ebx
        mov    dword ptr [edi + 0x104], edx
        push    ebx
        mov    ecx, edi
        mov    dword ptr [esi + 0x88], edi
        mov    dword ptr [edi + 0x10c], ebx
        call    FUN_005603e0
        push    0x459c4000
        push    0x459c4000
        mov    ecx, edi
        call    FUN_00560400
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x4c
        ret    
    }
}
