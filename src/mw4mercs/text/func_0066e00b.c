/*
 * FUN_0066e00b (extent 0x66e00b-0x66f7b3) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076d064;
extern float  g_0076d070;
extern float  g_0077dff4;
extern float  g_0077dff8;
extern float  g_0078f208;
extern float  g_00797148;
extern float  g_007971a0;
extern float  g_007971a4;
extern float  g_007971a8;
extern float  g_007971ac;
extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007ddde0;
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_0040c5d0(void);
extern void __cdecl FUN_0040ccd0(void);
extern void __cdecl FUN_0041fc80(void);
extern void __cdecl FUN_00551870(void);
extern void __cdecl FUN_0055e5c0(void);
extern void __cdecl FUN_0055f510(void);
extern void __cdecl FUN_0055f5b0(void);
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
extern void __cdecl FUN_00670df0(void);
extern void __cdecl FUN_0075db4a(void);

__declspec(naked) void FUN_0066e00b(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0xb4
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov    edi, ecx
        lea    eax, [edi + 0x14]
        push    eax
        lea    ecx, [esp + 0x38]
        call    FUN_0040c410
        fld    dword ptr [esp + 0x34]
        fcomp    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        je    L_e048
        fld    dword ptr [esp + 0x34]
        fmul    dword ptr [g_0077dff8]
        fstp    dword ptr [esp + 0x34]
L_e048:
        fld    dword ptr [esp + 0x38]
        fcomp    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        je    L_e067
        fld    dword ptr [esp + 0x38]
        fmul    dword ptr [g_0077dff4]
        fstp    dword ptr [esp + 0x38]
L_e067:
        lea    ecx, [esp + 0x34]
        push    ecx
        lea    ecx, [esp + 0x44]
        call    FUN_0040c5d0
        lea    edx, [esp + 0x40]
        push    edx
        lea    ecx, [esp + 0x5c]
        call    FUN_0040c410
        mov    eax, dword ptr [edi + 0x68]
        mov    ecx, dword ptr [edi + eax*4 + 0x5c]
        xor    ebp, ebp
        sub    eax, ebp
        mov    dword ptr [esp + 0x6c], ecx
        je    L_e58c
        dec    eax
        je    L_e44e
        dec    eax
        jne    L_e735
        lea    edx, [esp + 0x74]
        push    edx
        lea    eax, [esp + 0x2c]
        lea    esi, [edi + 0x38]
        mov    ebx, 9
        push    eax
        mov    ecx, esi
        mov    dword ptr [esp + 0x7c], ebx
        call    FUN_00641010
        mov    ecx, dword ptr [eax]
        lea    edx, [esp + 0x24]
        mov    dword ptr [esp + 0x10], ecx
        push    edx
        mov    ecx, esi
        call    FUN_00641000
        mov    ecx, eax
        mov    eax, dword ptr [esp + 0x10]
        cmp    eax, dword ptr [ecx]
        je    L_e0e8
        mov    edx, dword ptr [esp + 0x74]
        cmp    edx, dword ptr [eax + 0x10]
        jge    L_e11f
L_e0e8:
        lea    eax, [esp + 0x14]
        push    eax
        lea    ecx, [esp + 0x78]
        push    ecx
        lea    ecx, [esp + 0x3c]
        mov    dword ptr [esp + 0x1c], ebp
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
L_e11f:
        mov    eax, dword ptr [eax + 0x14]
        fld    dword ptr [eax + 0xc]
        lea    ecx, [esp + 0x40]
        fsub    dword ptr [eax + 4]
        push    ecx
        lea    ecx, [esp + 0xb0]
        fmul    dword ptr [eax + 0x14]
        mov    dword ptr [esp + 0x4c], 0
        fstp    dword ptr [esp + 0x44]
        fld    dword ptr [eax + 0x10]
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [eax + 0x18]
        fstp    dword ptr [esp + 0x48]
        call    FUN_0040c5d0
        lea    edx, [esp + 0xac]
        push    edx
        lea    ecx, [esp + 0x50]
        call    FUN_0040c410
        lea    eax, [esp + 0x78]
        push    eax
        lea    ecx, [esp + 0x30]
        push    ecx
        mov    ecx, esi
        mov    dword ptr [esp + 0x80], ebx
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
        je    L_e1a3
        mov    edx, dword ptr [esp + 0x78]
        cmp    edx, dword ptr [eax + 0x10]
        jge    L_e1da
L_e1a3:
        lea    eax, [esp + 0x14]
        push    eax
        lea    ecx, [esp + 0x7c]
        push    ecx
        lea    ecx, [esp + 0x3c]
        mov    dword ptr [esp + 0x1c], ebp
        call    FUN_00641050
        push    eax
        push    ecx
        lea    edx, [esp + 0x18]
        mov    ecx, esp
        push    edx
        call    FUN_00561a30
        lea    eax, [esp + 0x30]
        push    eax
        mov    ecx, esi
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x10], eax
L_e1da:
        mov    ecx, dword ptr [edi + 0x58]
        push    ecx
        mov    ecx, dword ptr [eax + 0x14]
        call    FUN_0055f510
        lea    edx, [esp + 0x8c]
        push    edx
        lea    eax, [esp + 0x30]
        push    eax
        mov    ecx, esi
        mov    dword ptr [esp + 0x94], ebx
        call    FUN_00641010
        mov    ecx, dword ptr [eax]
        lea    edx, [esp + 0x24]
        mov    dword ptr [esp + 0x10], ecx
        push    edx
        mov    ecx, esi
        call    FUN_00641000
        mov    ecx, eax
        mov    eax, dword ptr [esp + 0x10]
        cmp    eax, dword ptr [ecx]
        je    L_e229
        mov    edx, dword ptr [esp + 0x8c]
        cmp    edx, dword ptr [eax + 0x10]
        jge    L_e263
L_e229:
        lea    eax, [esp + 0x14]
        push    eax
        lea    ecx, [esp + 0x90]
        push    ecx
        lea    ecx, [esp + 0x3c]
        mov    dword ptr [esp + 0x1c], ebp
        call    FUN_00641050
        push    eax
        push    ecx
        lea    edx, [esp + 0x18]
        mov    ecx, esp
        push    edx
        call    FUN_00561a30
        lea    eax, [esp + 0x30]
        push    eax
        mov    ecx, esi
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x10], eax
L_e263:
        mov    ecx, dword ptr [esp + 0x6c]
        push    ebp
        push    ebp
        push    ecx
        lea    edx, [esp + 0x58]
        push    edx
        lea    ecx, [esp + 0x68]
        push    ecx
        mov    ecx, dword ptr [eax + 0x14]
        call    FUN_0055f5b0
        lea    edx, [esp + 0x7c]
        push    edx
        lea    eax, [esp + 0x30]
        mov    ebx, 8
        push    eax
        mov    ecx, esi
        mov    dword ptr [esp + 0x84], ebx
        call    FUN_00641010
        mov    ecx, dword ptr [eax]
        lea    edx, [esp + 0x24]
        mov    dword ptr [esp + 0x10], ecx
        push    edx
        mov    ecx, esi
        call    FUN_00641000
        mov    ecx, eax
        mov    eax, dword ptr [esp + 0x10]
        cmp    eax, dword ptr [ecx]
        je    L_e2be
        mov    edx, dword ptr [esp + 0x7c]
        cmp    edx, dword ptr [eax + 0x10]
        jge    L_e2f8
L_e2be:
        lea    eax, [esp + 0x14]
        push    eax
        lea    ecx, [esp + 0x80]
        push    ecx
        lea    ecx, [esp + 0x3c]
        mov    dword ptr [esp + 0x1c], ebp
        call    FUN_00641050
        push    eax
        push    ecx
        lea    edx, [esp + 0x18]
        mov    ecx, esp
        push    edx
        call    FUN_00561a30
        lea    eax, [esp + 0x30]
        push    eax
        mov    ecx, esi
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x10], eax
L_e2f8:
        mov    eax, dword ptr [eax + 0x14]
        fld    dword ptr [eax + 0xc]
        lea    ecx, [esp + 0x40]
        fsub    dword ptr [eax + 4]
        push    ecx
        lea    ecx, [esp + 0xbc]
        fmul    dword ptr [eax + 0x14]
        mov    dword ptr [esp + 0x4c], 0
        fstp    dword ptr [esp + 0x44]
        fld    dword ptr [eax + 0x10]
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [eax + 0x18]
        fstp    dword ptr [esp + 0x48]
        call    FUN_0040c5d0
        lea    edx, [esp + 0xb8]
        push    edx
        lea    ecx, [esp + 0x50]
        call    FUN_0040c410
        lea    eax, [esp + 0x88]
        push    eax
        lea    ecx, [esp + 0x30]
        push    ecx
        mov    ecx, esi
        mov    dword ptr [esp + 0x90], ebx
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
        je    L_e382
        mov    edx, dword ptr [esp + 0x88]
        cmp    edx, dword ptr [eax + 0x10]
        jge    L_e3bc
L_e382:
        lea    eax, [esp + 0x14]
        push    eax
        lea    ecx, [esp + 0x8c]
        push    ecx
        lea    ecx, [esp + 0x3c]
        mov    dword ptr [esp + 0x1c], ebp
        call    FUN_00641050
        push    eax
        push    ecx
        lea    edx, [esp + 0x18]
        mov    ecx, esp
        push    edx
        call    FUN_00561a30
        lea    eax, [esp + 0x30]
        push    eax
        mov    ecx, esi
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x10], eax
L_e3bc:
        mov    ecx, dword ptr [edi + 0x58]
        push    ecx
        mov    ecx, dword ptr [eax + 0x14]
        call    FUN_0055f510
        lea    edx, [esp + 0x84]
        push    edx
        lea    eax, [esp + 0x30]
        push    eax
        mov    ecx, esi
        mov    dword ptr [esp + 0x8c], ebx
        call    FUN_00641010
        mov    ecx, dword ptr [eax]
        lea    edx, [esp + 0x24]
        mov    dword ptr [esp + 0x10], ecx
        push    edx
        mov    ecx, esi
        call    FUN_00641000
        mov    ecx, eax
        mov    eax, dword ptr [esp + 0x10]
        cmp    eax, dword ptr [ecx]
        je    L_e40f
        mov    edx, dword ptr [esp + 0x84]
        cmp    edx, dword ptr [eax + 0x10]
        jge    L_e576
L_e40f:
        lea    eax, [esp + 0x14]
        push    eax
        lea    ecx, [esp + 0x88]
        push    ecx
        lea    ecx, [esp + 0x3c]
        mov    dword ptr [esp + 0x1c], ebp
        call    FUN_00641050
        push    eax
        push    ecx
        lea    edx, [esp + 0x18]
        mov    ecx, esp
        push    edx
        call    FUN_00561a30
        lea    eax, [esp + 0x30]
        push    eax
        mov    ecx, esi
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x10], eax
        jmp    L_e576
L_e44e:
        lea    edx, [esp + 0x68]
        push    edx
        lea    eax, [esp + 0x30]
        lea    esi, [edi + 0x38]
        mov    ebx, 0xa
        push    eax
        mov    ecx, esi
        mov    dword ptr [esp + 0x70], ebx
        call    FUN_00641010
        mov    ecx, dword ptr [eax]
        lea    edx, [esp + 0x24]
        mov    dword ptr [esp + 0x10], ecx
        push    edx
        mov    ecx, esi
        call    FUN_00641000
        mov    ecx, eax
        mov    edx, dword ptr [ecx]
        mov    eax, dword ptr [esp + 0x10]
        cmp    eax, edx
        mov    ecx, dword ptr [esp + 0x68]
        je    L_e492
        cmp    ecx, dword ptr [eax + 0x10]
        jge    L_e4be
L_e492:
        lea    edx, [esp + 0x14]
        push    edx
        push    ecx
        mov    dword ptr [esp + 0x1c], ecx
        lea    eax, [esp + 0x18]
        mov    ecx, esp
        push    eax
        mov    dword ptr [esp + 0x24], ebp
        call    FUN_00561a30
        lea    ecx, [esp + 0x30]
        push    ecx
        mov    ecx, esi
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x10], eax
L_e4be:
        mov    eax, dword ptr [eax + 0x14]
        fld    dword ptr [eax + 0xc]
        lea    edx, [esp + 0x40]
        fsub    dword ptr [eax + 4]
        push    edx
        lea    ecx, [esp + 0xa4]
        fmul    dword ptr [eax + 0x14]
        mov    dword ptr [esp + 0x4c], 0
        fstp    dword ptr [esp + 0x44]
        fld    dword ptr [eax + 0x10]
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [eax + 0x18]
        fstp    dword ptr [esp + 0x48]
        call    FUN_0040c5d0
        lea    eax, [esp + 0xa0]
        push    eax
        lea    ecx, [esp + 0x50]
        call    FUN_0040c410
        lea    ecx, [esp + 0x70]
        push    ecx
        lea    edx, [esp + 0x30]
        push    edx
        mov    ecx, esi
        mov    dword ptr [esp + 0x78], ebx
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
        je    L_e53f
        mov    ecx, dword ptr [esp + 0x70]
        cmp    ecx, dword ptr [eax + 0x10]
        jge    L_e576
L_e53f:
        lea    edx, [esp + 0x14]
        push    edx
        lea    eax, [esp + 0x74]
        push    eax
        lea    ecx, [esp + 0x3c]
        mov    dword ptr [esp + 0x1c], ebp
        call    FUN_00641050
        push    eax
        push    ecx
        lea    edx, [esp + 0x18]
        mov    ecx, esp
        push    edx
        call    FUN_00561a30
        lea    eax, [esp + 0x30]
        push    eax
        mov    ecx, esi
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x10], eax
L_e576:
        mov    ecx, dword ptr [esp + 0x6c]
        push    ebp
        push    ebp
        push    ecx
        lea    edx, [esp + 0x58]
        push    edx
        lea    ecx, [esp + 0x68]
        push    ecx
        jmp    L_e72d
L_e58c:
        lea    edx, [esp + 0x1c]
        push    edx
        lea    eax, [esp + 0x30]
        lea    esi, [edi + 0x38]
        mov    ebx, 8
        push    eax
        mov    ecx, esi
        mov    dword ptr [esp + 0x24], ebx
        call    FUN_00561df0
        mov    ecx, dword ptr [eax]
        lea    edx, [esp + 0x24]
        mov    dword ptr [esp + 0x10], ecx
        push    edx
        mov    ecx, esi
        call    FUN_00641000
        mov    ecx, eax
        mov    eax, dword ptr [esp + 0x10]
        cmp    eax, dword ptr [ecx]
        je    L_e5ce
        mov    edx, dword ptr [esp + 0x1c]
        cmp    edx, dword ptr [eax + 0x10]
        jge    L_e605
L_e5ce:
        lea    eax, [esp + 0x14]
        push    eax
        lea    ecx, [esp + 0x20]
        push    ecx
        lea    ecx, [esp + 0x3c]
        mov    dword ptr [esp + 0x1c], ebp
        call    FUN_00641050
        push    eax
        push    ecx
        lea    edx, [esp + 0x18]
        mov    ecx, esp
        push    edx
        call    FUN_00561a30
        lea    eax, [esp + 0x30]
        push    eax
        mov    ecx, esi
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x10], eax
L_e605:
        mov    ecx, dword ptr [eax + 0x14]
        push    ebp
        call    FUN_0055f510
        lea    ecx, [esp + 0x20]
        push    ecx
        lea    edx, [esp + 0x30]
        push    edx
        mov    ecx, esi
        mov    dword ptr [esp + 0x28], ebx
        call    FUN_00641010
        mov    eax, dword ptr [eax]
        cmp    eax, dword ptr [esi]
        mov    dword ptr [esp + 0x10], eax
        je    L_e636
        mov    ecx, dword ptr [esp + 0x20]
        cmp    ecx, dword ptr [eax + 0x10]
        jge    L_e66d
L_e636:
        lea    edx, [esp + 0x14]
        push    edx
        lea    eax, [esp + 0x24]
        push    eax
        lea    ecx, [esp + 0x3c]
        mov    dword ptr [esp + 0x1c], ebp
        call    FUN_00641050
        push    eax
        push    ecx
        lea    edx, [esp + 0x18]
        mov    ecx, esp
        push    edx
        call    FUN_00561a30
        lea    eax, [esp + 0x2c]
        push    eax
        mov    ecx, esi
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x10], eax
L_e66d:
        mov    eax, dword ptr [eax + 0x14]
        fld    dword ptr [eax + 0xc]
        lea    ecx, [esp + 0x40]
        fsub    dword ptr [eax + 4]
        push    ecx
        lea    ecx, [esp + 0x94]
        fmul    dword ptr [eax + 0x14]
        mov    dword ptr [esp + 0x4c], 0
        fstp    dword ptr [esp + 0x44]
        fld    dword ptr [eax + 0x10]
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [eax + 0x18]
        fstp    dword ptr [esp + 0x48]
        call    FUN_0040c5d0
        lea    edx, [esp + 0x90]
        push    edx
        lea    ecx, [esp + 0x50]
        call    FUN_0040c410
        lea    eax, [esp + 0x64]
        push    eax
        lea    ecx, [esp + 0x30]
        push    ecx
        mov    ecx, esi
        mov    dword ptr [esp + 0x6c], ebx
        call    FUN_00641010
        mov    edx, dword ptr [eax]
        lea    eax, [esp + 0x24]
        push    eax
        mov    ecx, esi
        mov    dword ptr [esp + 0x14], edx
        call    FUN_00641000
        mov    ecx, eax
        mov    edx, dword ptr [ecx]
        mov    eax, dword ptr [esp + 0x10]
        cmp    eax, edx
        mov    ecx, dword ptr [esp + 0x64]
        je    L_e6f0
        cmp    ecx, dword ptr [eax + 0x10]
        jge    L_e71c
L_e6f0:
        lea    edx, [esp + 0x14]
        push    edx
        push    ecx
        mov    dword ptr [esp + 0x1c], ecx
        lea    eax, [esp + 0x18]
        mov    ecx, esp
        push    eax
        mov    dword ptr [esp + 0x24], ebp
        call    FUN_00561a30
        lea    ecx, [esp + 0x30]
        push    ecx
        mov    ecx, esi
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x10], eax
L_e71c:
        mov    edx, dword ptr [esp + 0x6c]
        push    ebp
        push    ebp
        push    edx
        lea    ecx, [esp + 0x58]
        push    ecx
        lea    edx, [esp + 0x68]
        push    edx
L_e72d:
        mov    ecx, dword ptr [eax + 0x14]
        call    FUN_0055f5b0
L_e735:
        lea    eax, [esp + 0x20]
        push    eax
        lea    ecx, [esp + 0x30]
        lea    esi, [edi + 0x38]
        push    ecx
        mov    ecx, esi
        mov    dword ptr [esp + 0x28], 0x1e
        call    FUN_00641010
        mov    edx, dword ptr [eax]
        lea    eax, [esp + 0x24]
        push    eax
        mov    ecx, esi
        mov    dword ptr [esp + 0x20], edx
        call    FUN_00641000
        mov    ecx, eax
        mov    eax, dword ptr [esp + 0x1c]
        cmp    eax, dword ptr [ecx]
        je    L_e776
        mov    edx, dword ptr [esp + 0x20]
        cmp    edx, dword ptr [eax + 0x10]
        jge    L_e7ad
L_e776:
        lea    eax, [esp + 0x14]
        push    eax
        lea    ecx, [esp + 0x24]
        push    ecx
        lea    ecx, [esp + 0x3c]
        mov    dword ptr [esp + 0x1c], ebp
        call    FUN_00641050
        push    eax
        push    ecx
        lea    edx, [esp + 0x24]
        mov    ecx, esp
        push    edx
        call    FUN_00561a30
        lea    eax, [esp + 0x30]
        push    eax
        mov    ecx, esi
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x1c], eax
L_e7ad:
        mov    eax, dword ptr [eax + 0x14]
        fld    dword ptr [eax + 0xc]
        lea    ecx, [esp + 0x40]
        fsub    dword ptr [eax + 4]
        push    ecx
        lea    ecx, [esp + 0x94]
        fmul    dword ptr [eax + 0x14]
        mov    dword ptr [esp + 0x4c], 0
        fstp    dword ptr [esp + 0x44]
        fld    dword ptr [eax + 0x10]
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [eax + 0x18]
        fstp    dword ptr [esp + 0x48]
        call    FUN_0040c5d0
        lea    edx, [esp + 0x90]
        push    edx
        lea    ecx, [esp + 0x50]
        call    FUN_0040c410
        lea    eax, [esp + 0x20]
        push    eax
        lea    ecx, [esp + 0x30]
        push    ecx
        mov    ecx, esi
        mov    dword ptr [esp + 0x28], 0x22
        call    FUN_00641010
        mov    edx, dword ptr [eax]
        lea    eax, [esp + 0x24]
        push    eax
        mov    ecx, esi
        mov    dword ptr [esp + 0x20], edx
        call    FUN_00641000
        mov    ecx, eax
        mov    eax, dword ptr [esp + 0x1c]
        cmp    eax, dword ptr [ecx]
        je    L_e832
        mov    edx, dword ptr [esp + 0x20]
        cmp    edx, dword ptr [eax + 0x10]
        jge    L_e869
L_e832:
        lea    eax, [esp + 0x14]
        push    eax
        lea    ecx, [esp + 0x24]
        push    ecx
        lea    ecx, [esp + 0x3c]
        mov    dword ptr [esp + 0x1c], ebp
        call    FUN_00641050
        push    eax
        push    ecx
        lea    edx, [esp + 0x24]
        mov    ecx, esp
        push    edx
        call    FUN_00561a30
        lea    eax, [esp + 0x30]
        push    eax
        mov    ecx, esi
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x1c], eax
L_e869:
        mov    ecx, dword ptr [edi + 0xb4]
        push    ebp
        push    ebp
        push    ecx
        lea    edx, [esp + 0x58]
        push    edx
        lea    ecx, [esp + 0x68]
        push    ecx
        mov    ecx, dword ptr [eax + 0x14]
        call    FUN_0055f5b0
        lea    edx, [esp + 0x20]
        push    edx
        lea    eax, [esp + 0x30]
        push    eax
        mov    ecx, esi
        mov    dword ptr [esp + 0x28], 0x23
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
        je    L_e8c2
        mov    edx, dword ptr [esp + 0x20]
        cmp    edx, dword ptr [eax + 0x10]
        jge    L_e8f9
L_e8c2:
        lea    eax, [esp + 0x14]
        push    eax
        lea    ecx, [esp + 0x24]
        push    ecx
        lea    ecx, [esp + 0x3c]
        mov    dword ptr [esp + 0x1c], ebp
        call    FUN_00641050
        push    eax
        push    ecx
        lea    edx, [esp + 0x24]
        mov    ecx, esp
        push    edx
        call    FUN_00561a30
        lea    eax, [esp + 0x30]
        push    eax
        mov    ecx, esi
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x1c], eax
L_e8f9:
        mov    ecx, dword ptr [edi + 0xb0]
        push    ebp
        push    ebp
        push    ecx
        lea    edx, [esp + 0x58]
        push    edx
        lea    ecx, [esp + 0x68]
        push    ecx
        mov    ecx, dword ptr [eax + 0x14]
        call    FUN_0055f5b0
        mov    edx, dword ptr [edi + 0xa8]
        push    ebp
        push    ebp
        push    edx
        lea    eax, [esp + 0x58]
        push    eax
        lea    ecx, [esp + 0x68]
        push    ecx
        lea    edx, [esp + 0x28]
        push    edx
        mov    ecx, esi
        mov    dword ptr [esp + 0x2c], 0x24
        call    FUN_00640fa0
        mov    ecx, dword ptr [eax]
        call    FUN_0055f5b0
        mov    eax, dword ptr [edi + 0xac]
        push    ebp
        push    ebp
        push    eax
        lea    ecx, [esp + 0x58]
        push    ecx
        lea    edx, [esp + 0x68]
        push    edx
        lea    eax, [esp + 0x28]
        push    eax
        mov    ecx, esi
        mov    dword ptr [esp + 0x2c], 0x25
        call    FUN_00640fa0
        mov    ecx, dword ptr [eax]
        call    FUN_0055f5b0
        mov    ebx, 0x797150
L_e975:
        lea    ecx, [esp + 0x14]
        lea    eax, [ebp + 0x14]
        push    ecx
        mov    ecx, esi
        mov    dword ptr [esp + 0x18], eax
        call    FUN_00640fa0
        mov    eax, dword ptr [eax]
        fld    dword ptr [eax + 0xc]
        lea    edx, [esp + 0x40]
        fsub    dword ptr [eax + 4]
        push    edx
        lea    ecx, [esp + 0x94]
        fmul    dword ptr [eax + 0x14]
        mov    dword ptr [esp + 0x4c], 0
        fstp    dword ptr [esp + 0x44]
        fld    dword ptr [eax + 0x10]
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [eax + 0x18]
        fstp    dword ptr [esp + 0x48]
        call    FUN_0040c5d0
        lea    eax, [esp + 0x90]
        push    eax
        lea    ecx, [esp + 0x50]
        call    FUN_0040ccd0
        mov    ecx, dword ptr [edi + 0x8c]
        mov    al, byte ptr [ecx + ebp + 0x17c]
        mov    edx, dword ptr [ebx + 4]
        mov    ecx, dword ptr [ebx]
        neg    al
        mov    dword ptr [esp + 0x64], edx
        fild    dword ptr [esp + 0x64]
        mov    dword ptr [esp + 0x68], ecx
        fadd    dword ptr [esp + 0x50]
        fadd    dword ptr [g_0076d064]
        sbb    eax, eax
        and    eax, 0x5000
        add    eax, 0xff00af00
        push    eax
        call    FUN_0075db4a
        fild    dword ptr [esp + 0x6c]
        push    eax
        fadd    dword ptr [esp + 0x54]
        fadd    dword ptr [g_0076d064]
        call    FUN_0075db4a
        mov    edx, dword ptr [esp + 0x6c]
        push    eax
        mov    eax, dword ptr [esp + 0x74]
        dec    edx
        push    edx
        dec    eax
        push    eax
        call    FUN_0055e5c0
        fild    dword ptr [ebx + 4]
        add    esp, 0x14
        push    0
        push    0
        push    0xff000000
        lea    ecx, [esp + 0x58]
        push    ecx
        push    0x3f666666
        push    ecx
        fstp    dword ptr [esp]
        push    ecx
        fild    dword ptr [ebx]
        lea    eax, [ebp + 0x14]
        lea    ecx, [esp + 0xbc]
        mov    dword ptr [esp + 0x30], eax
        fstp    dword ptr [esp]
        call    FUN_00587830
        push    eax
        lea    edx, [esp + 0x28]
        push    edx
        mov    ecx, esi
        call    FUN_00640fa0
        mov    ecx, dword ptr [eax]
        call    FUN_0055f5b0
        add    ebx, 8
        inc    ebp
        cmp    ebx, 0x797180
        jl    L_e975
        mov    eax, dword ptr [edi + 0x68]
        mov    eax, dword ptr [edi + eax*4 + 0x5c]
        mov    ecx, dword ptr [edi + 0x84]
        mov    edx, dword ptr [edi + 0x80]
        mov    dword ptr [ecx + 0x104], eax
        mov    dword ptr [edx + 0x104], eax
        lea    eax, [esp + 0x90]
        push    eax
        lea    ecx, [esp + 0x18]
        push    ecx
        mov    ecx, esi
        mov    dword ptr [esp + 0x1c], 9
        call    FUN_00640fa0
        mov    ecx, dword ptr [eax]
        call    FUN_00642870
        push    eax
        lea    ecx, [esp + 0x50]
        call    FUN_0040ccd0
        mov    ebx, dword ptr [edi + 0x84]
        mov    edx, dword ptr [ebx]
        lea    eax, [esp + 0x9c]
        push    eax
        lea    ecx, [esp + 0x84]
        push    ecx
        mov    ecx, ebx
        call    dword ptr [edx + 0xc]
        fld    dword ptr [esp + 0x50]
        fmul    dword ptr [g_0076d070]
        mov    edx, dword ptr [esp + 0x80]
        mov    ebp, dword ptr [ebx]
        push    1
        fadd    dword ptr [esp + 0x60]
        push    0x3f666666
        push    ecx
        fadd    dword ptr [g_0078f208]
        mov    dword ptr [esp + 0x38], edx
        mov    dword ptr [esp + 0x3c], 0
        fstp    dword ptr [esp]
        push    ecx
        fild    qword ptr [esp + 0x3c]
        lea    ecx, [esp + 0xa0]
        fmul    dword ptr [g_0076d070]
        fsubr    dword ptr [esp + 0x68]
        fstp    dword ptr [esp]
        call    FUN_00587830
        sub    esp, 0xc
        mov    ecx, esp
        push    eax
        call    FUN_00551870
        mov    ecx, ebx
        call    dword ptr [ebp + 0x14]
        mov    ebx, dword ptr [edi + 0x80]
        mov    eax, dword ptr [ebx]
        lea    ecx, [esp + 0x9c]
        push    ecx
        lea    edx, [esp + 0x84]
        push    edx
        mov    ecx, ebx
        call    dword ptr [eax + 0xc]
        fld    dword ptr [esp + 0x50]
        fmul    dword ptr [g_0076d070]
        mov    eax, dword ptr [esp + 0x9c]
        mov    ebp, dword ptr [ebx]
        mov    dword ptr [esp + 0x2c], eax
        xor    eax, eax
        mov    dword ptr [esp + 0x30], eax
        fiadd    dword ptr [esp + 0x2c]
        push    1
        push    0x3f666666
        push    ecx
        mov    ecx, dword ptr [esp + 0x8c]
        mov    dword ptr [esp + 0x38], ecx
        mov    dword ptr [esp + 0x3c], eax
        fadd    dword ptr [g_0078f208]
        fsubr    dword ptr [esp + 0x68]
        fstp    dword ptr [esp]
        fild    qword ptr [esp + 0x38]
        fmul    dword ptr [g_0076d070]
        push    ecx
        lea    ecx, [esp + 0xa0]
        fsubr    dword ptr [esp + 0x68]
        fstp    dword ptr [esp]
        call    FUN_00587830
        sub    esp, 0xc
        mov    ecx, esp
        push    eax
        call    FUN_00551870
        mov    ecx, ebx
        call    dword ptr [ebp + 0x14]
        mov    eax, dword ptr [edi + 0x7c]
        test    eax, eax
        je    L_ee26
        lea    edx, [esp + 0x90]
        push    edx
        lea    eax, [esp + 0x18]
        mov    ebx, 2
        push    eax
        mov    ecx, esi
        mov    dword ptr [esp + 0x1c], ebx
        call    FUN_00640fa0
        mov    ecx, dword ptr [eax]
        call    FUN_00642870
        push    eax
        lea    ecx, [esp + 0x38]
        call    FUN_0040ccd0
        mov    ecx, dword ptr [edi + 0x74]
        push    ecx
        lea    edx, [esp + 0x18]
        push    edx
        mov    ecx, esi
        mov    dword ptr [esp + 0x1c], ebx
        call    FUN_00640fa0
        mov    ecx, dword ptr [eax]
        call    FUN_0055f510
        mov    eax, dword ptr [edi + 0xbc]
        push    0
        push    0
        push    eax
        lea    ecx, [esp + 0x40]
        push    ecx
        lea    edx, [esp + 0x68]
        push    edx
        lea    eax, [esp + 0x28]
        push    eax
        mov    ecx, esi
        mov    dword ptr [esp + 0x2c], ebx
        call    FUN_00640fa0
        mov    ecx, dword ptr [eax]
        call    FUN_0055f5b0
        fld    dword ptr [g_00797148]
        fmul    dword ptr [g_007971ac]
        push    ecx
        lea    ecx, [esp + 0x18]
        mov    ebx, 3
        fadd    dword ptr [edi + 0x78]
        mov    dword ptr [esp + 0x18], ebx
        fstp    dword ptr [esp]
        push    ecx
        mov    ecx, esi
        call    FUN_00640fa0
        mov    ecx, dword ptr [eax]
        call    FUN_0055f510
        mov    edx, dword ptr [edi + 0xbc]
        push    0
        push    0
        push    edx
        lea    eax, [esp + 0x40]
        push    eax
        lea    ecx, [esp + 0x68]
        push    ecx
        lea    edx, [esp + 0x28]
        push    edx
        mov    ecx, esi
        mov    dword ptr [esp + 0x2c], ebx
        call    FUN_00640fa0
        mov    ecx, dword ptr [eax]
        call    FUN_0055f5b0
        fld    dword ptr [g_00797148]
        fmul    dword ptr [g_007971a8]
        push    ecx
        lea    eax, [esp + 0x18]
        mov    ebx, 4
        fadd    dword ptr [edi + 0x74]
        mov    ecx, esi
        mov    dword ptr [esp + 0x18], ebx
        fstp    dword ptr [esp]
        push    eax
        call    FUN_00640fa0
        mov    ecx, dword ptr [eax]
        call    FUN_0055f510
        mov    dword ptr [esp + 0x14], ebx
        mov    ecx, dword ptr [edi + 0xbc]
        push    0
        push    0
        push    ecx
        lea    edx, [esp + 0x40]
        push    edx
        lea    eax, [esp + 0x68]
        push    eax
        lea    ecx, [esp + 0x28]
        push    ecx
        mov    ecx, esi
        call    FUN_00640fa0
        mov    ecx, dword ptr [eax]
        call    FUN_0055f5b0
        fld    dword ptr [g_00797148]
        fadd    dword ptr [edi + 0x78]
        push    ecx
        lea    edx, [esp + 0x18]
        fstp    dword ptr [esp]
        mov    ebx, 5
        push    edx
        mov    ecx, esi
        mov    dword ptr [esp + 0x1c], ebx
        call    FUN_00640fa0
        mov    ecx, dword ptr [eax]
        call    FUN_0055f510
        mov    eax, dword ptr [edi + 0xbc]
        push    0
        push    0
        push    eax
        lea    ecx, [esp + 0x40]
        push    ecx
        lea    edx, [esp + 0x68]
        push    edx
        lea    eax, [esp + 0x28]
        push    eax
        mov    ecx, esi
        mov    dword ptr [esp + 0x2c], ebx
        call    FUN_00640fa0
        mov    ecx, dword ptr [eax]
        call    FUN_0055f5b0
        fld    dword ptr [g_00797148]
        fmul    dword ptr [g_007971a4]
        push    ecx
        lea    ecx, [esp + 0x18]
        mov    ebx, 6
        fadd    dword ptr [edi + 0x74]
        mov    dword ptr [esp + 0x18], ebx
        fstp    dword ptr [esp]
        push    ecx
        mov    ecx, esi
        call    FUN_00640fa0
        mov    ecx, dword ptr [eax]
        call    FUN_0055f510
        mov    edx, dword ptr [edi + 0xbc]
        push    0
        push    0
        push    edx
        lea    eax, [esp + 0x40]
        push    eax
        lea    ecx, [esp + 0x68]
        push    ecx
        lea    edx, [esp + 0x28]
        push    edx
        mov    ecx, esi
        mov    dword ptr [esp + 0x2c], ebx
        call    FUN_00640fa0
        mov    ecx, dword ptr [eax]
        call    FUN_0055f5b0
        fld    dword ptr [g_00797148]
        fmul    dword ptr [g_007971a0]
        push    ecx
        mov    ebx, 7
        lea    eax, [esp + 0x18]
        fadd    dword ptr [edi + 0x78]
        mov    dword ptr [esp + 0x18], ebx
        fstp    dword ptr [esp]
        push    eax
        mov    ecx, esi
        call    FUN_00640fa0
        mov    ecx, dword ptr [eax]
        call    FUN_0055f510
        mov    ecx, dword ptr [edi + 0xbc]
        push    0
        push    0
        push    ecx
        lea    edx, [esp + 0x40]
        push    edx
        lea    eax, [esp + 0x68]
        push    eax
        lea    ecx, [esp + 0x28]
        push    ecx
        mov    ecx, esi
        mov    dword ptr [esp + 0x2c], ebx
        call    FUN_00640fa0
        mov    ecx, dword ptr [eax]
        call    FUN_0055f5b0
L_ee26:
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0xb4
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
        mov    eax, dword ptr [g_007ddde0]
        sub    esp, 0x64
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov    esi, ecx
        push    eax
        call    FUN_00561430
        lea    edi, [esi + 0x50]
        xor    ebx, ebx
        push    ebx
        mov    ecx, edi
        call    FUN_0041fc80
        mov    dword ptr [edi], 0x773328
        lea    edi, [esi + 0x58]
        push    ebx
        mov    ecx, edi
        call    FUN_0041fc80
        lea    ecx, [esp + 0x13]
        push    ecx
        lea    ecx, [esi + 0x68]
        mov    dword ptr [edi], 0x77dfdc
        call    FUN_00670df0
        mov    edx, dword ptr [g_007dab44]
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        mov    eax, dword ptr [eax + 0x1c]
        xor    eax, 0x85739531
        mov    edx, dword ptr [eax + 0x78]
        lea    ecx, [eax + 0x78]
        mov    dword ptr [esi], 0x7971c8
        call    dword ptr [edx + 4]
        mov    cl, byte ptr [eax + 0x38]
        add    eax, 0x38
        cmp    cl, bl
        push    0x43800000
        push    0x43800000
        jne    L_eeda
        push    0x43640000
        push    0x43640000
        push    0x41e00000
        push    0x41e00000
        push    ebx
        push    0x7971c0
        jmp    L_eee8
L_eeda:
        push    0x437f0000
        push    0x437f0000
        push    ebx
        push    ebx
        push    ebx
        push    eax
L_eee8:
        mov    ecx, esi
        call    FUN_005614d0
        lea    eax, [esp + 0x44]
        push    eax
        lea    ecx, [esi + 0x14]
        mov    dword ptr [esp + 0x48], 0x43968000
        mov    dword ptr [esp + 0x4c], 0x43c78000
        mov    dword ptr [esp + 0x50], 0x3f666666
        call    FUN_0040c410
        lea    ecx, [esp + 0x44]
        push    ecx
        lea    ecx, [esi + 0x20]
        mov    dword ptr [esp + 0x48], 0x43480000
        mov    dword ptr [esp + 0x4c], 0x43480000
        mov    dword ptr [esp + 0x50], 0x3f666666
        call    FUN_0040c410
        lea    edx, [esp + 0x18]
        push    edx
        lea    eax, [esp + 0x28]
        lea    edi, [esi + 0x38]
        push    eax
        mov    ecx, edi
        mov    dword ptr [esp + 0x20], ebx
        call    FUN_00561df0
        mov    ecx, dword ptr [eax]
        lea    edx, [esp + 0x28]
        mov    dword ptr [esp + 0x1c], ecx
        push    edx
        mov    ecx, edi
        call    FUN_00641000
        mov    ecx, eax
        mov    eax, dword ptr [esp + 0x1c]
        cmp    eax, dword ptr [ecx]
        je    L_ef76
        mov    edx, dword ptr [esp + 0x18]
        cmp    edx, dword ptr [eax + 0x10]
        jge    L_efad
L_ef76:
        lea    eax, [esp + 0x20]
        push    eax
        lea    ecx, [esp + 0x1c]
        push    ecx
        lea    ecx, [esp + 0x44]
        mov    dword ptr [esp + 0x28], ebx
        call    FUN_00641050
        push    eax
        push    ecx
        lea    edx, [esp + 0x24]
        mov    ecx, esp
        push    edx
        call    FUN_00561a30
        lea    eax, [esp + 0x34]
        push    eax
        mov    ecx, edi
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x1c], eax
L_efad:
        mov    ecx, dword ptr [eax + 0x14]
        push    0x43800000
        push    0x43800000
        push    0x43460000
        push    0x437a0000
        push    0x43400000
        push    0x43750000
        mov    ebp, 0xb
        push    ebp
        mov    dword ptr [ecx + 0x3c], 1
        push    0x792448
        mov    ecx, esi
        call    FUN_005614d0
        push    0x43800000
        push    0x43800000
        push    0x434a0000
        push    0x43790000
        push    0x43460000
        push    0x43750000
        push    0xc
        push    0x792448
        mov    ecx, esi
        call    FUN_005614d0
        push    0x43800000
        push    0x43800000
        push    0x43510000
        push    0x437c0000
        push    0x434a0000
        push    0x43750000
        push    0xd
        push    0x792448
        mov    ecx, esi
        call    FUN_005614d0
        push    0x43800000
        push    0x43800000
        push    0x43550000
        push    0x43780000
        push    0x43510000
        push    0x43750000
        push    0xe
        push    0x792448
        mov    ecx, esi
        call    FUN_005614d0
        push    0x43800000
        push    0x43800000
        push    0x43580000
        push    0x43780000
        push    0x43550000
        push    0x43750000
        push    0xf
        push    0x792448
        mov    ecx, esi
        call    FUN_005614d0
        push    0x43800000
        push    0x43800000
        push    0x43200000
        push    0x426c0000
        push    0x42ca0000
        push    0x40800000
        push    0x10
        push    0x792448
        mov    ecx, esi
        call    FUN_005614d0
        push    0x43800000
        push    0x43800000
        push    0x435e0000
        push    0x437a0000
        push    0x43580000
        push    0x43750000
        push    0x14
        push    0x792448
        mov    ecx, esi
        call    FUN_005614d0
        push    0x43800000
        push    0x43800000
        push    0x43640000
        push    0x437a0000
        push    0x435e0000
        push    0x43750000
        push    0x15
        push    0x792448
        mov    ecx, esi
        call    FUN_005614d0
        push    0x43800000
        push    0x43800000
        push    0x436a0000
        push    0x437a0000
        push    0x43640000
        push    0x43750000
        push    0x16
        push    0x792448
        mov    ecx, esi
        call    FUN_005614d0
        push    0x43800000
        push    0x43800000
        push    0x43760000
        push    0x437a0000
        push    0x43700000
        push    0x43750000
        push    0x17
        push    0x792448
        mov    ecx, esi
        call    FUN_005614d0
        push    0x43800000
        push    0x43800000
        push    0x435e0000
        push    0x437f0000
        push    0x43580000
        push    0x437a0000
        push    0x18
        push    0x792448
        mov    ecx, esi
        call    FUN_005614d0
        push    0x43800000
        push    0x43800000
        push    0x43640000
        push    0x437f0000
        push    0x435e0000
        push    0x437a0000
        push    0x19
        push    0x792448
        mov    ecx, esi
        call    FUN_005614d0
        push    0x43800000
        push    0x43800000
        push    0x436a0000
        push    0x437f0000
        push    0x43640000
        push    0x437a0000
        push    0x1a
        push    0x792448
        mov    ecx, esi
        call    FUN_005614d0
        push    0x43800000
        push    0x43800000
        push    0x43760000
        push    0x437f0000
        push    0x43700000
        push    0x437a0000
        push    0x1b
        push    0x792448
        mov    ecx, esi
        call    FUN_005614d0
        mov    dword ptr [esp + 0x14], 0x14
L_f22b:
        lea    edx, [esp + 0x14]
        push    edx
        lea    eax, [esp + 0x30]
        push    eax
        mov    ecx, edi
        call    FUN_00561df0
        mov    ecx, dword ptr [eax]
        lea    edx, [esp + 0x28]
        mov    dword ptr [esp + 0x1c], ecx
        push    edx
        mov    ecx, edi
        call    FUN_00641000
        mov    ecx, eax
        mov    eax, dword ptr [esp + 0x1c]
        cmp    eax, dword ptr [ecx]
        je    L_f261
        mov    edx, dword ptr [esp + 0x14]
        cmp    edx, dword ptr [eax + 0x10]
        jge    L_f298
L_f261:
        lea    eax, [esp + 0x20]
        push    eax
        lea    ecx, [esp + 0x18]
        push    ecx
        lea    ecx, [esp + 0x4c]
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
        mov    ecx, edi
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x1c], eax
L_f298:
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
        lea    eax, [esp + 0x14]
        push    eax
        lea    ecx, [esp + 0x34]
        push    ecx
        mov    ecx, edi
        call    FUN_00641010
        mov    edx, dword ptr [eax]
        lea    eax, [esp + 0x34]
        push    eax
        mov    ecx, edi
        mov    dword ptr [esp + 0x1c], edx
        call    FUN_00641000
        mov    ecx, eax
        mov    edx, dword ptr [ecx]
        mov    eax, dword ptr [esp + 0x18]
        cmp    eax, edx
        mov    ecx, dword ptr [esp + 0x14]
        je    L_f311
        cmp    ecx, dword ptr [eax + 0x10]
        jge    L_f33d
L_f311:
        lea    edx, [esp + 0x3c]
        push    edx
        push    ecx
        mov    dword ptr [esp + 0x44], ecx
        lea    eax, [esp + 0x20]
        mov    ecx, esp
        push    eax
        mov    dword ptr [esp + 0x4c], ebx
        call    FUN_00561a30
        lea    ecx, [esp + 0x40]
        push    ecx
        mov    ecx, edi
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x18], eax
L_f33d:
        mov    eax, dword ptr [eax + 0x14]
        fld    dword ptr [esp + 0x50]
        mov    dword ptr [eax + 0x2c], ebx
        fstp    dword ptr [eax + 0x28]
        mov    eax, dword ptr [esp + 0x14]
        inc    eax
        cmp    eax, 0x1b
        mov    dword ptr [esp + 0x14], eax
        jle    L_f22b
        lea    edx, [esp + 0x1c]
        push    edx
        lea    eax, [esp + 0x3c]
        push    eax
        mov    ecx, edi
        mov    dword ptr [esp + 0x24], ebp
        call    FUN_00641010
        mov    ecx, dword ptr [eax]
        lea    edx, [esp + 0x34]
        mov    dword ptr [esp + 0x18], ecx
        push    edx
        mov    ecx, edi
        call    FUN_00641000
        mov    ecx, eax
        mov    eax, dword ptr [esp + 0x18]
        cmp    eax, dword ptr [ecx]
        je    L_f396
        mov    edx, dword ptr [esp + 0x1c]
        cmp    edx, dword ptr [eax + 0x10]
        jge    L_f3cd
L_f396:
        lea    eax, [esp + 0x20]
        push    eax
        lea    ecx, [esp + 0x20]
        push    ecx
        lea    ecx, [esp + 0x4c]
        mov    dword ptr [esp + 0x28], ebx
        call    FUN_00641050
        push    eax
        push    ecx
        lea    edx, [esp + 0x20]
        mov    ecx, esp
        push    edx
        call    FUN_00561a30
        lea    eax, [esp + 0x38]
        push    eax
        mov    ecx, edi
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x18], eax
L_f3cd:
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
        lea    eax, [esp + 0x1c]
        push    eax
        lea    ecx, [esp + 0x3c]
        push    ecx
        mov    ecx, edi
        mov    dword ptr [esp + 0x24], ebp
        call    FUN_00641010
        mov    edx, dword ptr [eax]
        lea    eax, [esp + 0x34]
        push    eax
        mov    ecx, edi
        mov    dword ptr [esp + 0x1c], edx
        call    FUN_00641000
        mov    ecx, eax
        mov    eax, dword ptr [esp + 0x18]
        cmp    eax, dword ptr [ecx]
        je    L_f448
        mov    edx, dword ptr [esp + 0x1c]
        cmp    edx, dword ptr [eax + 0x10]
        jge    L_f47f
L_f448:
        lea    eax, [esp + 0x20]
        push    eax
        lea    ecx, [esp + 0x20]
        push    ecx
        lea    ecx, [esp + 0x4c]
        mov    dword ptr [esp + 0x28], ebx
        call    FUN_00641050
        push    eax
        push    ecx
        lea    edx, [esp + 0x20]
        mov    ecx, esp
        push    edx
        call    FUN_00561a30
        lea    eax, [esp + 0x38]
        push    eax
        mov    ecx, edi
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x18], eax
L_f47f:
        fld    dword ptr [esp + 0x54]
        mov    eax, dword ptr [eax + 0x14]
        fmul    dword ptr [g_0076d070]
        lea    ecx, [esp + 0x1c]
        fld    dword ptr [esp + 0x50]
        push    ecx
        fmul    dword ptr [g_0076d070]
        lea    edx, [esp + 0x3c]
        mov    ebp, 0xc
        push    edx
        fstp    dword ptr [eax + 0x28]
        mov    ecx, edi
        fstp    dword ptr [eax + 0x2c]
        mov    dword ptr [esp + 0x24], ebp
        call    FUN_00641010
        mov    eax, dword ptr [eax]
        lea    ecx, [esp + 0x34]
        push    ecx
        mov    ecx, edi
        mov    dword ptr [esp + 0x1c], eax
        call    FUN_00641000
        mov    edx, eax
        mov    eax, dword ptr [esp + 0x18]
        cmp    eax, dword ptr [edx]
        je    L_f4db
        mov    ecx, dword ptr [esp + 0x1c]
        cmp    ecx, dword ptr [eax + 0x10]
        jge    L_f512
L_f4db:
        lea    edx, [esp + 0x20]
        push    edx
        lea    eax, [esp + 0x20]
        push    eax
        lea    ecx, [esp + 0x4c]
        mov    dword ptr [esp + 0x28], ebx
        call    FUN_00641050
        push    eax
        push    ecx
        lea    edx, [esp + 0x20]
        mov    ecx, esp
        push    edx
        call    FUN_00561a30
        lea    eax, [esp + 0x38]
        push    eax
        mov    ecx, edi
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x18], eax
L_f512:
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
        lea    eax, [esp + 0x1c]
        push    eax
        lea    ecx, [esp + 0x3c]
        push    ecx
        mov    ecx, edi
        mov    dword ptr [esp + 0x24], ebp
        call    FUN_00641010
        mov    edx, dword ptr [eax]
        lea    eax, [esp + 0x34]
        push    eax
        mov    ecx, edi
        mov    dword ptr [esp + 0x1c], edx
        call    FUN_00641000
        mov    ecx, eax
        mov    eax, dword ptr [esp + 0x18]
        cmp    eax, dword ptr [ecx]
        je    L_f58d
        mov    edx, dword ptr [esp + 0x1c]
        cmp    edx, dword ptr [eax + 0x10]
        jge    L_f5c4
L_f58d:
        lea    eax, [esp + 0x20]
        push    eax
        lea    ecx, [esp + 0x20]
        push    ecx
        lea    ecx, [esp + 0x4c]
        mov    dword ptr [esp + 0x28], ebx
        call    FUN_00641050
        push    eax
        push    ecx
        lea    edx, [esp + 0x20]
        mov    ecx, esp
        push    edx
        call    FUN_00561a30
        lea    eax, [esp + 0x38]
        push    eax
        mov    ecx, edi
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x18], eax
L_f5c4:
        fld    dword ptr [esp + 0x54]
        mov    eax, dword ptr [eax + 0x14]
        fmul    dword ptr [g_0076d070]
        lea    ecx, [esp + 0x1c]
        fld    dword ptr [esp + 0x50]
        push    ecx
        fmul    dword ptr [g_0076d070]
        lea    edx, [esp + 0x3c]
        mov    ebp, 0xd
        push    edx
        fstp    dword ptr [eax + 0x28]
        mov    ecx, edi
        fstp    dword ptr [eax + 0x2c]
        mov    dword ptr [esp + 0x24], ebp
        call    FUN_00641010
        mov    eax, dword ptr [eax]
        lea    ecx, [esp + 0x34]
        push    ecx
        mov    ecx, edi
        mov    dword ptr [esp + 0x1c], eax
        call    FUN_00641000
        mov    edx, eax
        mov    eax, dword ptr [esp + 0x18]
        cmp    eax, dword ptr [edx]
        je    L_f620
        mov    ecx, dword ptr [esp + 0x1c]
        cmp    ecx, dword ptr [eax + 0x10]
        jge    L_f657
L_f620:
        lea    edx, [esp + 0x20]
        push    edx
        lea    eax, [esp + 0x20]
        push    eax
        lea    ecx, [esp + 0x4c]
        mov    dword ptr [esp + 0x28], ebx
        call    FUN_00641050
        push    eax
        push    ecx
        lea    edx, [esp + 0x20]
        mov    ecx, esp
        push    edx
        call    FUN_00561a30
        lea    eax, [esp + 0x38]
        push    eax
        mov    ecx, edi
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x18], eax
L_f657:
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
        fld    dword ptr [esp + 0x54]
        fmul    dword ptr [g_0076d070]
        lea    eax, [esp + 0x20]
        push    eax
        mov    ecx, edi
        fstp    dword ptr [esp + 0x1c]
        mov    dword ptr [esp + 0x24], ebp
        fld    dword ptr [esp + 0x54]
        fmul    dword ptr [g_0076d070]
        fstp    dword ptr [esp + 0x20]
        call    FUN_00640fa0
        mov    eax, dword ptr [eax]
        mov    ecx, dword ptr [esp + 0x1c]
        mov    edx, dword ptr [esp + 0x18]
        mov    dword ptr [eax + 0x28], ecx
        mov    dword ptr [eax + 0x2c], edx
        lea    eax, [esp + 0x68]
        push    eax
        lea    ecx, [esp + 0x24]
        push    ecx
        mov    ebx, 0xe
        mov    ecx, edi
        mov    dword ptr [esp + 0x28], ebx
        call    FUN_00640fa0
        mov    ecx, dword ptr [eax]
        call    FUN_00642870
        push    eax
        lea    ecx, [esp + 0x54]
        call    FUN_0040ccd0
        fld    dword ptr [esp + 0x54]
        fmul    dword ptr [g_0076d070]
        lea    edx, [esp + 0x20]
        push    edx
        mov    ecx, edi
        fstp    dword ptr [esp + 0x1c]
        mov    dword ptr [esp + 0x24], ebx
        fld    dword ptr [esp + 0x54]
        fmul    dword ptr [g_0076d070]
        fstp    dword ptr [esp + 0x20]
        call    FUN_00640fa0
        mov    eax, dword ptr [eax]
        mov    ecx, dword ptr [esp + 0x1c]
        mov    edx, dword ptr [esp + 0x18]
        mov    dword ptr [eax + 0x28], ecx
        mov    dword ptr [eax + 0x2c], edx
        lea    eax, [esp + 0x68]
        push    eax
        lea    ecx, [esp + 0x24]
        push    ecx
        mov    ebx, 0xf
        mov    ecx, edi
        mov    dword ptr [esp + 0x28], ebx
        call    FUN_00640fa0
        mov    ecx, dword ptr [eax]
        call    FUN_00642870
        push    eax
        lea    ecx, [esp + 0x54]
        call    FUN_0040ccd0
        fld    dword ptr [esp + 0x54]
        fmul    dword ptr [g_0076d070]
        lea    edx, [esp + 0x20]
        push    edx
        mov    ecx, edi
        fstp    dword ptr [esp + 0x1c]
        mov    dword ptr [esp + 0x24], ebx
        fld    dword ptr [esp + 0x54]
        fmul    dword ptr [g_0076d070]
        fstp    dword ptr [esp + 0x20]
        call    FUN_00640fa0
        mov    eax, dword ptr [eax]
        mov    ecx, dword ptr [esp + 0x1c]
        mov    edx, dword ptr [esp + 0x18]
        pop    edi
        mov    dword ptr [eax + 0x28], ecx
        mov    dword ptr [eax + 0x2c], edx
        mov    dword ptr [esi + 0x34], 0x96ffffff
        mov    eax, esi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x64
        ret    
    }
}
