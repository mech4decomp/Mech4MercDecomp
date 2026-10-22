/*
 * FUN_006441a2 (extent 0x6441a2-0x644dd3) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076d064;
extern float  g_00770168;
extern float  g_0077016c;
extern float  g_0077a1a0;
extern float  g_0078229c;
extern float  g_00792630;
extern int    g_007dab40;
extern int    g_007dab44;
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_0040c5d0(void);
extern void __cdecl FUN_0040c9c0(void);
extern void __cdecl FUN_00551870(void);
extern void __cdecl FUN_0055e5c0(void);
extern void __cdecl FUN_0055f5b0(void);
extern void __cdecl FUN_00560420(void);
extern void __cdecl FUN_005619f0(void);
extern void __cdecl FUN_00561a30(void);
extern void __cdecl FUN_00561df0(void);
extern void __cdecl FUN_00587830(void);
extern void __cdecl FUN_00640fa0(void);
extern void __cdecl FUN_00641000(void);
extern void __cdecl FUN_00641010(void);
extern void __cdecl FUN_00641050(void);
extern void __cdecl FUN_00644d40(void);
extern void __cdecl FUN_00713cc0(void);
extern void __cdecl FUN_0075db4a(void);

__declspec(naked) void FUN_006441a2(void)
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
        sub    esp, 0x88
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov    edi, ecx
        lea    eax, [edi + 0x58]
        push    eax
        lea    ecx, [esp + 0x5c]
        mov    dword ptr [esp + 0x68], edi
        call    FUN_0040c5d0
        lea    ecx, [esp + 0x58]
        push    ecx
        lea    ecx, [esp + 0x6c]
        call    FUN_0040c410
        lea    edx, [esp + 0x18]
        push    edx
        lea    eax, [esp + 0x28]
        lea    esi, [edi + 0x38]
        xor    ebx, ebx
        push    eax
        mov    ecx, esi
        mov    dword ptr [esp + 0x20], ebx
        call    FUN_00561df0
        mov    ecx, dword ptr [eax]
        lea    edx, [esp + 0x14]
        mov    dword ptr [esp + 0x2c], ecx
        push    edx
        mov    ecx, esi
        call    FUN_00641000
        mov    ecx, eax
        mov    eax, dword ptr [esp + 0x2c]
        cmp    eax, dword ptr [ecx]
        je    L_421a
        mov    edx, dword ptr [esp + 0x18]
        cmp    edx, dword ptr [eax + 0x10]
        jge    L_4251
L_421a:
        lea    eax, [esp + 0x28]
        push    eax
        lea    ecx, [esp + 0x1c]
        push    ecx
        lea    ecx, [esp + 0x24]
        mov    dword ptr [esp + 0x30], ebx
        call    FUN_00641050
        push    eax
        push    ecx
        lea    edx, [esp + 0x34]
        mov    ecx, esp
        push    edx
        call    FUN_00561a30
        lea    eax, [esp + 0x18]
        push    eax
        mov    ecx, esi
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x2c], eax
L_4251:
        mov    eax, dword ptr [eax + 0x14]
        fld    dword ptr [eax + 0xc]
        lea    ecx, [esp + 0x80]
        fsub    dword ptr [eax + 4]
        push    ecx
        lea    ecx, [esp + 0x5c]
        fmul    dword ptr [eax + 0x14]
        mov    dword ptr [esp + 0x8c], 0
        fstp    dword ptr [esp + 0x84]
        fld    dword ptr [eax + 0x10]
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [eax + 0x18]
        fstp    dword ptr [esp + 0x88]
        call    FUN_0040c5d0
        lea    edx, [esp + 0x58]
        push    edx
        lea    ecx, [esp + 0x78]
        call    FUN_0040c410
        fld    dword ptr [esp + 0x68]
        fmul    dword ptr [edi + 0x50]
        mov    dword ptr [esp + 0x34], 0x43b40000
        mov    dword ptr [esp + 0x30], 0x43c80000
        fmul    dword ptr [g_0077a1a0]
        fstp    dword ptr [esp + 0x18]
        fld    dword ptr [esp + 0x18]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jne    L_42d8
        mov    dword ptr [esp + 0x30], 0x43c88000
L_42d8:
        mov    edi, dword ptr [edi + 0x34]
        mov    eax, edi
        shr    eax, 0x10
        and    eax, 0xff
        mov    dword ptr [esp + 0x3c], eax
        mov    dword ptr [esp + 0x40], ebx
        fild    qword ptr [esp + 0x3c]
        fmul    dword ptr [g_00792630]
        call    FUN_0075db4a
        mov    edx, edi
        shr    edx, 8
        and    edx, 0xff
        mov    ecx, edi
        shr    ecx, 0x18
        mov    dword ptr [esp + 0x3c], edx
        shl    ecx, 8
        mov    dword ptr [esp + 0x40], ebx
        fild    qword ptr [esp + 0x3c]
        sub    ecx, eax
        shl    ecx, 8
        fmul    dword ptr [g_00792630]
        mov    ebp, ecx
        call    FUN_0075db4a
        and    edi, 0xff
        mov    dword ptr [esp + 0x3c], edi
        mov    dword ptr [esp + 0x40], ebx
        fild    qword ptr [esp + 0x3c]
        sub    ebp, eax
        shl    ebp, 8
        fmul    dword ptr [g_00792630]
        call    FUN_0075db4a
        sub    ebp, eax
        mov    eax, 5
        mov    dword ptr [esp + 0x2c], eax
        mov    dword ptr [esp + 0x28], eax
        lea    eax, [esp + 0x2c]
        push    eax
        lea    ecx, [esp + 0x98]
        push    ecx
        mov    ecx, esi
        call    FUN_00561df0
        mov    edx, dword ptr [eax]
        lea    eax, [esp + 0x90]
        push    eax
        mov    ecx, esi
        mov    dword ptr [esp + 0x14], edx
        call    FUN_00641000
        mov    ecx, eax
        mov    eax, dword ptr [esp + 0x10]
        cmp    eax, dword ptr [ecx]
        je    L_439a
        mov    edx, dword ptr [esp + 0x2c]
        cmp    edx, dword ptr [eax + 0x10]
        jge    L_43d7
L_439a:
        lea    eax, [esp + 0x24]
        push    eax
        lea    ecx, [esp + 0x30]
        push    ecx
        lea    ecx, [esp + 0x88]
        mov    dword ptr [esp + 0x2c], ebx
        call    FUN_00641050
        push    eax
        push    ecx
        lea    edx, [esp + 0x18]
        mov    ecx, esp
        push    edx
        call    FUN_00561a30
        lea    eax, [esp + 0x94]
        push    eax
        mov    ecx, esi
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x10], eax
L_43d7:
        mov    eax, dword ptr [eax + 0x14]
        fld    dword ptr [eax + 0xc]
        lea    ecx, [esp + 0x58]
        fsub    dword ptr [eax + 4]
        push    ecx
        lea    ecx, [esp + 0x48]
        fmul    dword ptr [eax + 0x14]
        mov    dword ptr [esp + 0x64], 0
        fstp    dword ptr [esp + 0x5c]
        fld    dword ptr [eax + 0x10]
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [eax + 0x18]
        fstp    dword ptr [esp + 0x60]
        call    FUN_0040c5d0
        lea    edx, [esp + 0x28]
        push    edx
        lea    eax, [esp + 0x54]
        push    eax
        mov    ecx, esi
        call    FUN_00641010
        mov    ecx, dword ptr [eax]
        lea    edx, [esp + 0x54]
        mov    dword ptr [esp + 0x14], ecx
        push    edx
        mov    ecx, esi
        call    FUN_00641000
        mov    ecx, eax
        mov    edx, dword ptr [ecx]
        mov    eax, dword ptr [esp + 0x14]
        cmp    eax, edx
        mov    ecx, dword ptr [esp + 0x28]
        je    L_4442
        cmp    ecx, dword ptr [eax + 0x10]
        jge    L_446e
L_4442:
        lea    edx, [esp + 0x1c]
        push    edx
        push    ecx
        mov    dword ptr [esp + 0x24], ecx
        lea    eax, [esp + 0x1c]
        mov    ecx, esp
        push    eax
        mov    dword ptr [esp + 0x2c], ebx
        call    FUN_00561a30
        lea    ecx, [esp + 0x44]
        push    ecx
        mov    ecx, esi
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x14], eax
L_446e:
        push    1
        push    ebx
        push    ebp
        lea    edx, [esp + 0x50]
        push    edx
        lea    ecx, [esp + 0x40]
        push    ecx
        mov    ecx, dword ptr [eax + 0x14]
        call    FUN_0055f5b0
        fld    dword ptr [esp + 0x18]
        fcomp    dword ptr [g_0076c5b0]
        mov    ebp, dword ptr [esp + 0x64]
        mov    edi, dword ptr [ebp + 0x34]
        fnstsw  ax
        test    ah, 0x40
        jne    L_47e5
        mov    edx, dword ptr [g_007dab44]
        fld    dword ptr [esp + 0x18]
        mov    eax, dword ptr [edx]
        fcomp    dword ptr [g_0076c5b0]
        mov    edx, dword ptr [g_007dab40]
        fld    dword ptr [esp + 0x30]
        fsub    dword ptr [esp + 0x18]
        xor    eax, edx
        mov    eax, dword ptr [eax + 0xc]
        xor    eax, 0x85739531
        mov    dword ptr [esp + 0x28], eax
        fnstsw  ax
        test    ah, 0x41
        jne    L_4503
        call    FUN_0075db4a
        fld    dword ptr [esp + 0x30]
        mov    dword ptr [esp + 0x2c], eax
        call    FUN_0075db4a
        mov    ecx, dword ptr [esp + 0x28]
        mov    edx, dword ptr [ecx]
        mov    ebp, dword ptr [ebp + 0x88]
        push    ebx
        push    ebx
        push    0x2d4
        mov    dword ptr [esp + 0x1c], eax
        call    dword ptr [edx + 0x34]
        jmp    L_452f
L_4503:
        call    FUN_0075db4a
        fld    dword ptr [esp + 0x30]
        mov    dword ptr [esp + 0x10], eax
        call    FUN_0075db4a
        mov    ecx, dword ptr [esp + 0x28]
        mov    ebp, dword ptr [ebp + 0x88]
        push    ebx
        push    ebx
        mov    dword ptr [esp + 0x34], eax
        mov    eax, dword ptr [ecx]
        push    0x2d5
        call    dword ptr [eax + 0x34]
L_452f:
        push    eax
        mov    ecx, ebp
        call    FUN_00560420
        mov    edx, dword ptr [ebp]
        lea    eax, [esp + 0x24]
        push    eax
        lea    ecx, [esp + 0x18]
        push    ecx
        mov    ecx, ebp
        call    dword ptr [edx + 0xc]
        fld    dword ptr [esp + 0x6c]
        mov    edx, dword ptr [esp + 0x14]
        fadd    dword ptr [esp + 0x34]
        shr    edx, 1
        mov    eax, 0x190
        fadd    dword ptr [g_00770168]
        sub    eax, edx
        mov    dword ptr [esp + 0x14], eax
        call    FUN_0075db4a
        fld    dword ptr [esp + 0x18]
        fcomp    dword ptr [g_0077016c]
        mov    ecx, eax
        mov    dword ptr [esp + 0x24], ecx
        fnstsw  ax
        test    ah, 0x41
        je    L_4595
        fld    dword ptr [esp + 0x18]
        fcomp    dword ptr [g_0078229c]
        fnstsw  ax
        test    ah, 1
        je    L_45e4
L_4595:
        mov    eax, dword ptr [esp + 0x14]
        mov    ebp, dword ptr [ebp]
        push    1
        mov    dword ptr [esp + 0x20], ecx
        mov    dword ptr [esp + 0x24], ebx
        fild    qword ptr [esp + 0x20]
        push    0x3f666666
        push    ecx
        fstp    dword ptr [esp]
        mov    dword ptr [esp + 0x28], eax
        mov    dword ptr [esp + 0x2c], ebx
        fild    qword ptr [esp + 0x28]
        push    ecx
        lea    ecx, [esp + 0x54]
        fstp    dword ptr [esp]
        call    FUN_00587830
        sub    esp, 0xc
        mov    ecx, esp
        push    eax
        call    FUN_00551870
        mov    ecx, dword ptr [esp + 0x74]
        mov    ecx, dword ptr [ecx + 0x88]
        call    dword ptr [ebp + 0x14]
L_45e4:
        fld    dword ptr [esp + 0x6c]
        push    edi
        fadd    dword ptr [esp + 0x38]
        call    FUN_0075db4a
        fld    dword ptr [esp + 0x38]
        mov    edx, dword ptr [esp + 0x14]
        push    eax
        push    edx
        call    FUN_0075db4a
        push    eax
        mov    eax, dword ptr [esp + 0x3c]
        push    eax
        call    FUN_0055e5c0
        mov    ecx, edi
        shr    ecx, 0x10
        and    ecx, 0xff
        mov    dword ptr [esp + 0x30], ecx
        mov    dword ptr [esp + 0x34], ebx
        fild    qword ptr [esp + 0x30]
        add    esp, 0x14
        fmul    dword ptr [g_00792630]
        call    FUN_0075db4a
        mov    edx, edi
        shr    edx, 0x18
        shl    edx, 8
        sub    edx, eax
        mov    eax, edi
        shr    eax, 8
        and    eax, 0xff
        mov    dword ptr [esp + 0x1c], eax
        mov    dword ptr [esp + 0x20], ebx
        fild    qword ptr [esp + 0x1c]
        shl    edx, 8
        mov    ebp, edx
        fmul    dword ptr [g_00792630]
        call    FUN_0075db4a
        and    edi, 0xff
        mov    dword ptr [esp + 0x1c], edi
        mov    dword ptr [esp + 0x20], ebx
        fild    qword ptr [esp + 0x1c]
        sub    ebp, eax
        shl    ebp, 8
        fmul    dword ptr [g_00792630]
        call    FUN_0075db4a
        fld    dword ptr [esp + 0x30]
        fsub    dword ptr [esp + 0x18]
        lea    ecx, [esp + 0x28]
        push    ecx
        lea    edx, [esp + 0x40]
        fstp    dword ptr [esp + 0x5c]
        fld    dword ptr [esp + 0x38]
        push    edx
        fsub    dword ptr [g_0076d064]
        mov    ecx, esi
        sub    ebp, eax
        mov    dword ptr [esp + 0x30], 2
        fstp    dword ptr [esp + 0x64]
        mov    dword ptr [esp + 0x68], 0x3f666666
        call    FUN_00641010
        mov    eax, dword ptr [eax]
        lea    ecx, [esp + 0x54]
        push    ecx
        mov    ecx, esi
        mov    dword ptr [esp + 0x14], eax
        call    FUN_00641000
        mov    edx, eax
        mov    ecx, dword ptr [edx]
        mov    eax, dword ptr [esp + 0x10]
        cmp    eax, ecx
        mov    ecx, dword ptr [esp + 0x28]
        je    L_46e7
        cmp    ecx, dword ptr [eax + 0x10]
        jge    L_4713
L_46e7:
        lea    eax, [esp + 0x1c]
        push    eax
        push    ecx
        mov    dword ptr [esp + 0x24], ecx
        lea    edx, [esp + 0x18]
        mov    ecx, esp
        push    edx
        mov    dword ptr [esp + 0x2c], ebx
        call    FUN_00561a30
        lea    eax, [esp + 0x58]
        push    eax
        mov    ecx, esi
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x10], eax
L_4713:
        push    ebx
        push    ebx
        push    ebp
        lea    ecx, [esp + 0x80]
        push    ecx
        mov    ecx, dword ptr [eax + 0x14]
        lea    edx, [esp + 0x68]
        push    edx
        call    FUN_0055f5b0
        fld    dword ptr [esp + 0x6c]
        fadd    dword ptr [esp + 0x34]
        push    0x3f666666
        push    ecx
        mov    dword ptr [esp + 0x18], 3
        fadd    dword ptr [g_0076d064]
        fstp    dword ptr [esp]
        fld    dword ptr [esp + 0x38]
        push    ecx
        fsub    dword ptr [g_0076d064]
        lea    ecx, [esp + 0x50]
        fstp    dword ptr [esp]
        call    FUN_0040c9c0
        lea    eax, [esp + 0x10]
        push    eax
        lea    ecx, [esp + 0x40]
        push    ecx
        mov    ecx, esi
        call    FUN_00641010
        mov    edx, dword ptr [eax]
        lea    eax, [esp + 0x54]
        push    eax
        mov    ecx, esi
        mov    dword ptr [esp + 0x30], edx
        call    FUN_00641000
        mov    ecx, eax
        mov    eax, dword ptr [esp + 0x2c]
        cmp    eax, dword ptr [ecx]
        je    L_4797
        mov    edx, dword ptr [esp + 0x10]
        cmp    edx, dword ptr [eax + 0x10]
        jge    L_47d1
L_4797:
        lea    eax, [esp + 0x28]
        push    eax
        lea    ecx, [esp + 0x14]
        push    ecx
        lea    ecx, [esp + 0x88]
        mov    dword ptr [esp + 0x30], ebx
        call    FUN_00641050
        push    eax
        push    ecx
        lea    edx, [esp + 0x34]
        mov    ecx, esp
        push    edx
        call    FUN_00561a30
        lea    eax, [esp + 0x58]
        push    eax
        mov    ecx, esi
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x2c], eax
L_47d1:
        push    ebx
        push    ebx
        push    ebp
        lea    ecx, [esp + 0x80]
        push    ecx
        lea    edx, [esp + 0x54]
        jmp    L_49be
L_47e5:
        mov    eax, edi
        shr    eax, 0x10
        and    eax, 0xff
        mov    dword ptr [esp + 0x1c], eax
        mov    dword ptr [esp + 0x20], ebx
        fild    qword ptr [esp + 0x1c]
        fmul    dword ptr [g_00792630]
        call    FUN_0075db4a
        mov    edx, edi
        shr    edx, 8
        and    edx, 0xff
        mov    ecx, edi
        shr    ecx, 0x18
        mov    dword ptr [esp + 0x1c], edx
        shl    ecx, 8
        mov    dword ptr [esp + 0x20], ebx
        fild    qword ptr [esp + 0x1c]
        sub    ecx, eax
        shl    ecx, 8
        fmul    dword ptr [g_00792630]
        mov    ebp, ecx
        call    FUN_0075db4a
        and    edi, 0xff
        mov    dword ptr [esp + 0x1c], edi
        mov    dword ptr [esp + 0x20], ebx
        fild    qword ptr [esp + 0x1c]
        sub    ebp, eax
        shl    ebp, 8
        fmul    dword ptr [g_00792630]
        call    FUN_0075db4a
        fld    dword ptr [esp + 0x34]
        fsub    dword ptr [g_0076d064]
        push    0x3f666666
        push    ecx
        sub    ebp, eax
        fstp    dword ptr [esp]
        fld    dword ptr [esp + 0x38]
        push    ecx
        fstp    dword ptr [esp]
        lea    ecx, [esp + 0x50]
        mov    dword ptr [esp + 0x20], 2
        call    FUN_0040c9c0
        lea    eax, [esp + 0x14]
        push    eax
        lea    ecx, [esp + 0x40]
        push    ecx
        mov    ecx, esi
        call    FUN_00641010
        mov    edx, dword ptr [eax]
        lea    eax, [esp + 0x54]
        push    eax
        mov    ecx, esi
        mov    dword ptr [esp + 0x14], edx
        call    FUN_00641000
        mov    ecx, eax
        mov    eax, dword ptr [esp + 0x10]
        cmp    eax, dword ptr [ecx]
        je    L_48bd
        mov    edx, dword ptr [esp + 0x14]
        cmp    edx, dword ptr [eax + 0x10]
        jge    L_48f7
L_48bd:
        lea    eax, [esp + 0x24]
        push    eax
        lea    ecx, [esp + 0x18]
        push    ecx
        lea    ecx, [esp + 0x88]
        mov    dword ptr [esp + 0x2c], ebx
        call    FUN_00641050
        push    eax
        push    ecx
        lea    edx, [esp + 0x18]
        mov    ecx, esp
        push    edx
        call    FUN_00561a30
        lea    eax, [esp + 0x58]
        push    eax
        mov    ecx, esi
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x10], eax
L_48f7:
        push    ebx
        push    ebx
        push    ebp
        lea    ecx, [esp + 0x80]
        push    ecx
        mov    ecx, dword ptr [eax + 0x14]
        lea    edx, [esp + 0x54]
        push    edx
        call    FUN_0055f5b0
        fld    dword ptr [esp + 0x6c]
        fadd    dword ptr [esp + 0x34]
        push    0x3f666666
        push    ecx
        mov    dword ptr [esp + 0x1c], 3
        fadd    dword ptr [g_0076d064]
        fstp    dword ptr [esp]
        fld    dword ptr [esp + 0x38]
        push    ecx
        fstp    dword ptr [esp]
        lea    ecx, [esp + 0x50]
        call    FUN_0040c9c0
        lea    eax, [esp + 0x14]
        push    eax
        lea    ecx, [esp + 0x40]
        push    ecx
        mov    ecx, esi
        call    FUN_00641010
        mov    edx, dword ptr [eax]
        lea    eax, [esp + 0x54]
        push    eax
        mov    ecx, esi
        mov    dword ptr [esp + 0x14], edx
        call    FUN_00641000
        mov    ecx, eax
        mov    eax, dword ptr [esp + 0x10]
        cmp    eax, dword ptr [ecx]
        je    L_4975
        mov    edx, dword ptr [esp + 0x14]
        cmp    edx, dword ptr [eax + 0x10]
        jge    L_49af
L_4975:
        lea    eax, [esp + 0x24]
        push    eax
        lea    ecx, [esp + 0x18]
        push    ecx
        lea    ecx, [esp + 0x88]
        mov    dword ptr [esp + 0x2c], ebx
        call    FUN_00641050
        push    eax
        push    ecx
        lea    edx, [esp + 0x18]
        mov    ecx, esp
        push    edx
        call    FUN_00561a30
        lea    eax, [esp + 0x58]
        push    eax
        mov    ecx, esi
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x10], eax
L_49af:
        push    ebx
        push    ebx
        push    ebp
        lea    ecx, [esp + 0x80]
        push    ecx
        lea    edx, [esp + 0x54]
L_49be:
        mov    ecx, dword ptr [eax + 0x14]
        push    edx
        call    FUN_0055f5b0
        mov    edi, dword ptr [esp + 0x64]
        lea    eax, [edi + 0x64]
        push    eax
        lea    ecx, [esp + 0x48]
        call    FUN_0040c5d0
        lea    ecx, [esp + 0x44]
        push    ecx
        lea    ecx, [esp + 0x6c]
        call    FUN_0040c410
        fld    dword ptr [esp + 0x6c]
        fmul    dword ptr [edi + 0x54]
        mov    dword ptr [esp + 0x30], 0x43a98000
        mov    dword ptr [esp + 0x34], 0x43960000
        fmul    dword ptr [g_0077a1a0]
        fstp    dword ptr [esp + 0x18]
        fld    dword ptr [esp + 0x18]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jne    L_4a20
        mov    dword ptr [esp + 0x34], 0x43968000
L_4a20:
        mov    edi, dword ptr [edi + 0x34]
        mov    edx, edi
        shr    edx, 0x10
        and    edx, 0xff
        mov    dword ptr [esp + 0x1c], edx
        mov    dword ptr [esp + 0x20], ebx
        fild    qword ptr [esp + 0x1c]
        fmul    dword ptr [g_00792630]
        call    FUN_0075db4a
        mov    edx, edi
        shr    edx, 8
        and    edx, 0xff
        mov    ecx, edi
        shr    ecx, 0x18
        mov    dword ptr [esp + 0x1c], edx
        shl    ecx, 8
        mov    dword ptr [esp + 0x20], ebx
        fild    qword ptr [esp + 0x1c]
        sub    ecx, eax
        shl    ecx, 8
        fmul    dword ptr [g_00792630]
        mov    ebp, ecx
        call    FUN_0075db4a
        and    edi, 0xff
        mov    dword ptr [esp + 0x1c], edi
        mov    dword ptr [esp + 0x20], ebx
        fild    qword ptr [esp + 0x1c]
        sub    ebp, eax
        shl    ebp, 8
        fmul    dword ptr [g_00792630]
        call    FUN_0075db4a
        sub    ebp, eax
        mov    eax, 4
        mov    dword ptr [esp + 0x14], eax
        mov    dword ptr [esp + 0x28], eax
        lea    eax, [esp + 0x14]
        push    eax
        lea    ecx, [esp + 0x40]
        push    ecx
        mov    ecx, esi
        call    FUN_00641010
        mov    edx, dword ptr [eax]
        lea    eax, [esp + 0x54]
        push    eax
        mov    ecx, esi
        mov    dword ptr [esp + 0x14], edx
        call    FUN_00641000
        mov    ecx, eax
        mov    eax, dword ptr [esp + 0x10]
        cmp    eax, dword ptr [ecx]
        je    L_4add
        mov    edx, dword ptr [esp + 0x14]
        cmp    edx, dword ptr [eax + 0x10]
        jge    L_4b17
L_4add:
        lea    eax, [esp + 0x24]
        push    eax
        lea    ecx, [esp + 0x18]
        push    ecx
        lea    ecx, [esp + 0x88]
        mov    dword ptr [esp + 0x2c], ebx
        call    FUN_00641050
        push    eax
        push    ecx
        lea    edx, [esp + 0x18]
        mov    ecx, esp
        push    edx
        call    FUN_00561a30
        lea    eax, [esp + 0x58]
        push    eax
        mov    ecx, esi
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x10], eax
L_4b17:
        mov    eax, dword ptr [eax + 0x14]
        fld    dword ptr [eax + 0xc]
        lea    ecx, [esp + 0x58]
        fsub    dword ptr [eax + 4]
        push    ecx
        lea    ecx, [esp + 0x48]
        fmul    dword ptr [eax + 0x14]
        mov    dword ptr [esp + 0x64], 0
        fstp    dword ptr [esp + 0x5c]
        fld    dword ptr [eax + 0x10]
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [eax + 0x18]
        fstp    dword ptr [esp + 0x60]
        call    FUN_0040c5d0
        push    1
        push    ebx
        push    ebp
        lea    edx, [esp + 0x50]
        push    edx
        lea    eax, [esp + 0x40]
        push    eax
        lea    ecx, [esp + 0x3c]
        push    ecx
        mov    ecx, esi
        call    FUN_00640fa0
        mov    ecx, dword ptr [eax]
        call    FUN_0055f5b0
        fld    dword ptr [esp + 0x18]
        fcomp    dword ptr [g_0076c5b0]
        mov    edx, dword ptr [esp + 0x64]
        mov    ebp, dword ptr [edx + 0x34]
        fnstsw  ax
        test    ah, 0x40
        jne    L_4c99
        push    ebx
        push    1
        call    FUN_00713cc0
        fld    dword ptr [esp + 0x18]
        fcomp    dword ptr [g_0076c5b0]
        fld    dword ptr [esp + 0x18]
        fadd    dword ptr [esp + 0x34]
        fnstsw  ax
        test    ah, 1
        je    L_4bbe
        call    FUN_0075db4a
        fld    dword ptr [esp + 0x34]
        mov    dword ptr [esp + 0x28], eax
        call    FUN_0075db4a
        mov    edi, eax
        jmp    L_4bd2
L_4bbe:
        call    FUN_0075db4a
        fld    dword ptr [esp + 0x34]
        mov    edi, eax
        call    FUN_0075db4a
        mov    dword ptr [esp + 0x28], eax
L_4bd2:
        fld    dword ptr [esp + 0x30]
        push    ebp
        fadd    dword ptr [esp + 0x6c]
        push    edi
        call    FUN_0075db4a
        fld    dword ptr [esp + 0x38]
        fsub    dword ptr [g_0076d064]
        push    eax
        mov    eax, dword ptr [esp + 0x34]
        push    eax
        call    FUN_0075db4a
        push    eax
        call    FUN_0055e5c0
        push    ebp
        call    FUN_00644d40
        fld    dword ptr [esp + 0x30]
        fadd    dword ptr [esp + 0x4c]
        add    esp, 0x18
        push    0x3f666666
        push    ecx
        fstp    dword ptr [esp]
        fld    dword ptr [esp + 0x38]
        push    ecx
        fsub    dword ptr [g_0076d064]
        lea    ecx, [esp + 0x50]
        mov    ebp, eax
        mov    dword ptr [esp + 0x30], ebx
        fstp    dword ptr [esp]
        call    FUN_0040c9c0
        push    ebx
        push    ebx
        push    ebp
        lea    ecx, [esp + 0x80]
        push    ecx
        lea    edx, [esp + 0x54]
        push    edx
        lea    eax, [esp + 0x38]
        push    eax
        mov    ecx, esi
        call    FUN_00640fa0
        mov    ecx, dword ptr [eax]
        call    FUN_0055f5b0
        fld    dword ptr [esp + 0x34]
        push    0x3f666666
        push    ecx
        fstp    dword ptr [esp]
        fld    dword ptr [esp + 0x38]
        push    ecx
        fadd    dword ptr [esp + 0x74]
        lea    ecx, [esp + 0x50]
        mov    dword ptr [esp + 0x30], 1
        fstp    dword ptr [esp]
        call    FUN_0040c9c0
        push    ebx
        push    ebx
        push    ebp
        lea    ecx, [esp + 0x80]
        push    ecx
        lea    edx, [esp + 0x54]
        push    edx
        lea    eax, [esp + 0x38]
        jmp    L_4d1f
L_4c99:
        push    ebp
        call    FUN_00644d40
        fld    dword ptr [esp + 0x34]
        mov    edx, dword ptr [esp + 0x38]
        fsub    dword ptr [g_0076d064]
        add    esp, 4
        push    ebx
        push    ebx
        mov    ebp, eax
        push    ebp
        lea    ecx, [esp + 0x80]
        push    ecx
        push    0x3f666666
        push    edx
        push    ecx
        lea    ecx, [esp + 0x60]
        fstp    dword ptr [esp]
        mov    dword ptr [esp + 0x40], ebx
        call    FUN_00587830
        push    eax
        lea    eax, [esp + 0x38]
        push    eax
        mov    ecx, esi
        call    FUN_00640fa0
        mov    ecx, dword ptr [eax]
        call    FUN_0055f5b0
        fld    dword ptr [esp + 0x30]
        mov    edx, dword ptr [esp + 0x34]
        fadd    dword ptr [esp + 0x68]
        push    ebx
        push    ebx
        push    ebp
        lea    ecx, [esp + 0x80]
        push    ecx
        push    0x3f666666
        push    edx
        push    ecx
        lea    ecx, [esp + 0x60]
        fstp    dword ptr [esp]
        mov    dword ptr [esp + 0x40], 1
        call    FUN_00587830
        push    eax
        lea    eax, [esp + 0x38]
L_4d1f:
        push    eax
        mov    ecx, esi
        call    FUN_00640fa0
        mov    ecx, dword ptr [eax]
        call    FUN_0055f5b0
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x88
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 8
        push    ebx
        push    esi
        mov    esi, dword ptr [esp + 0x14]
        mov    eax, esi
        shr    eax, 0x10
        and    eax, 0xff
        mov    dword ptr [esp + 8], eax
        mov    dword ptr [esp + 0xc], 0
        fild    qword ptr [esp + 8]
        fmul    dword ptr [g_00792630]
        call    FUN_0075db4a
        mov    edx, esi
        shr    edx, 8
        and    edx, 0xff
        mov    ecx, esi
        shr    ecx, 0x18
        mov    dword ptr [esp + 8], edx
        mov    dword ptr [esp + 0xc], 0
        fild    qword ptr [esp + 8]
        shl    ecx, 8
        sub    ecx, eax
        shl    ecx, 8
        fmul    dword ptr [g_00792630]
        mov    ebx, ecx
        call    FUN_0075db4a
        and    esi, 0xff
        mov    dword ptr [esp + 8], esi
        mov    dword ptr [esp + 0xc], 0
        fild    qword ptr [esp + 8]
        sub    ebx, eax
        shl    ebx, 8
        fmul    dword ptr [g_00792630]
        call    FUN_0075db4a
        sub    ebx, eax
        pop    esi
        mov    eax, ebx
        pop    ebx
        add    esp, 8
        ret    
    }
}
