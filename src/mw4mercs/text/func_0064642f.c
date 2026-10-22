/*
 * FUN_0064642f (extent 0x64642f-0x646d58) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076d040;
extern float  g_0076d064;
extern float  g_0076d070;
extern float  g_0076d598;
extern float  g_0076d5f0;
extern float  g_0076d970;
extern float  g_0077deac;
extern float  g_0077dff4;
extern float  g_0077dff8;
extern float  g_0078815c;
extern float  g_0078d0c0;
extern float  g_0078f208;
extern float  g_007926cc;
extern float  g_007926d0;
extern float  g_007926d4;
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_0040c5d0(void);
extern void __cdecl FUN_0040ccd0(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_00551870(void);
extern void __cdecl FUN_0055eb90(void);
extern void __cdecl FUN_0055eed0(void);
extern void __cdecl FUN_0055f530(void);
extern void __cdecl FUN_0055f570(void);
extern void __cdecl FUN_0055f5b0(void);
extern void __cdecl FUN_005603e0(void);
extern void __cdecl FUN_00560400(void);
extern void __cdecl FUN_005619f0(void);
extern void __cdecl FUN_00561a30(void);
extern void __cdecl FUN_00561df0(void);
extern void __cdecl FUN_00587830(void);
extern void __cdecl FUN_00641000(void);
extern void __cdecl FUN_00641010(void);
extern void __cdecl FUN_00641050(void);
extern void __cdecl FUN_00645870(void);
extern void __cdecl FUN_00646d30(void);
extern void __cdecl FUN_0075db4a(void);

__declspec(naked) void FUN_0064642f(void)
{
    __asm {
        nop    
        push    ecx
        push    esi
        mov    esi, ecx
        fld    qword ptr [esi + 0x54]
        push    edi
        fcomp    qword ptr [g_0076d970]
        fnstsw  ax
        test    ah, 0x40
        je    L_6453
        mov    eax, dword ptr [esp + 0x10]
        mov    ecx, dword ptr [esp + 0x14]
        mov    dword ptr [esi + 0x54], eax
        mov    dword ptr [esi + 0x58], ecx
L_6453:
        fld    qword ptr [esi + 0x54]
        fcomp    qword ptr [esp + 0x10]
        fnstsw  ax
        test    ah, 0x41
        je    L_64ac
        or    edx, 0xffffffff
        mov    ecx, 1
L_6469:
        fld    dword ptr [esi + 0x68]
        fcomp    dword ptr [esi + 0x5c]
        fnstsw  ax
        test    ah, 0x40
        jne    L_6495
        fld    dword ptr [esi + 0x68]
        mov    dword ptr [esp + 8], edx
        fcomp    dword ptr [esi + 0x5c]
        fnstsw  ax
        test    ah, 1
        jne    L_648b
        mov    dword ptr [esp + 8], ecx
L_648b:
        fild    dword ptr [esp + 8]
        fadd    dword ptr [esi + 0x5c]
        fstp    dword ptr [esi + 0x5c]
L_6495:
        fld    qword ptr [esi + 0x54]
        fadd    qword ptr [g_0078d0c0]
        fst    qword ptr [esi + 0x54]
        fcomp    qword ptr [esp + 0x10]
        fnstsw  ax
        test    ah, 0x41
        jne    L_6469
L_64ac:
        lea    edi, [esi + 0xc]
        mov    ecx, edi
        call    FUN_0041fd80
        test    eax, eax
        je    L_64e7
        mov    ecx, edi
        call    FUN_0041fd80
        mov    edx, dword ptr [eax]
        lea    ecx, [esi + 0x64]
        push    ecx
        lea    ecx, [esi + 0x60]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0x140]
        mov    edx, dword ptr [esp + 0x10]
        mov    eax, dword ptr [esp + 0x14]
        mov    dword ptr [esi + 0x2c], edx
        pop    edi
        mov    dword ptr [esi + 0x30], eax
        pop    esi
        pop    ecx
        ret    8
L_64e7:
        mov    ecx, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esp + 0x14]
        mov    eax, 0x3f800000
        mov    dword ptr [esi + 0x2c], ecx
        pop    edi
        mov    dword ptr [esi + 0x60], eax
        mov    dword ptr [esi + 0x64], eax
        mov    dword ptr [esi + 0x30], edx
        pop    esi
        pop    ecx
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
        sub    esp, 0x80
        push    ebx
        push    esi
        mov    ebx, ecx
        push    edi
        lea    eax, [ebx + 0x20]
        push    eax
        lea    ecx, [esp + 0x6c]
        call    FUN_0040c410
        fld    dword ptr [esp + 0x68]
        fcomp    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        je    L_6547
        fld    dword ptr [esp + 0x68]
        fmul    dword ptr [g_0077dff8]
        fstp    dword ptr [esp + 0x68]
L_6547:
        fld    dword ptr [esp + 0x6c]
        fcomp    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        je    L_6566
        fld    dword ptr [esp + 0x6c]
        fmul    dword ptr [g_0077dff4]
        fstp    dword ptr [esp + 0x6c]
L_6566:
        lea    eax, [esp + 0x68]
        push    eax
        lea    ecx, [esp + 0x60]
        call    FUN_0040c5d0
        mov    ecx, dword ptr [esp + 0x5c]
        mov    edx, dword ptr [esp + 0x60]
        mov    eax, dword ptr [esp + 0x64]
        mov    dword ptr [esp + 0x80], ecx
        lea    ecx, [ebx + 0x14]
        push    ecx
        lea    ecx, [esp + 0x6c]
        mov    dword ptr [esp + 0x88], edx
        mov    dword ptr [esp + 0x8c], eax
        call    FUN_0040c410
        fld    dword ptr [esp + 0x68]
        fcomp    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        je    L_65c1
        fld    dword ptr [esp + 0x68]
        fmul    dword ptr [g_0077dff8]
        fstp    dword ptr [esp + 0x68]
L_65c1:
        fld    dword ptr [esp + 0x6c]
        fcomp    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        je    L_65e0
        fld    dword ptr [esp + 0x6c]
        fmul    dword ptr [g_0077dff4]
        fstp    dword ptr [esp + 0x6c]
L_65e0:
        lea    edx, [esp + 0x68]
        push    edx
        lea    ecx, [esp + 0x60]
        call    FUN_0040c5d0
        fld    dword ptr [ebx + 0x5c]
        fcomp    dword ptr [g_0076c5b0]
        mov    eax, dword ptr [esp + 0x5c]
        mov    ecx, dword ptr [esp + 0x60]
        fld    dword ptr [ebx + 0x5c]
        mov    edx, dword ptr [esp + 0x64]
        mov    dword ptr [esp + 0x74], eax
        fnstsw  ax
        mov    dword ptr [esp + 0x78], ecx
        mov    dword ptr [esp + 0x7c], edx
        test    ah, 1
        jne    L_6656
        fmul    dword ptr [g_0077deac]
        fdiv    dword ptr [ebx + 0x60]
        call    FUN_0075db4a
        xor    edi, edi
        cmp    eax, edi
        jge    L_6631
        xor    eax, eax
        jmp    L_663b
L_6631:
        cmp    eax, 0xe
        jle    L_663b
        mov    eax, 0xe
L_663b:
        fild    dword ptr [eax*4 + 0x792580]
        mov    dword ptr [esp + 0x20], 0x42600000
        fsubr    dword ptr [g_007926d4]
        fstp    dword ptr [esp + 0xc]
        jmp    L_6691
L_6656:
        fmul    dword ptr [g_0078815c]
        fdiv    dword ptr [ebx + 0x64]
        call    FUN_0075db4a
        xor    edi, edi
        cmp    eax, edi
        jge    L_666e
        xor    eax, eax
        jmp    L_6678
L_666e:
        cmp    eax, 8
        jle    L_6678
        mov    eax, 8
L_6678:
        fild    dword ptr [eax*4 + 0x7925c0]
        mov    dword ptr [esp + 0xc], 0x42600000
        fadd    dword ptr [g_007926d4]
        fstp    dword ptr [esp + 0x20]
L_6691:
        fld    dword ptr [ebx + 0x68]
        fcomp    dword ptr [g_0076c5b0]
        fld    dword ptr [ebx + 0x68]
        fnstsw  ax
        test    ah, 1
        jne    L_66f3
        fmul    dword ptr [g_0077deac]
        fdiv    dword ptr [ebx + 0x60]
        fcom    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        je    L_66d0
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [g_0076c5b0]
        call    FUN_0075db4a
        fild    dword ptr [eax*4 + 0x792580]
        jmp    L_673a
L_66d0:
        fcom    dword ptr [g_0078f208]
        fnstsw  ax
        test    ah, 0x41
        jne    L_66e5
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [g_0078f208]
L_66e5:
        call    FUN_0075db4a
        fild    dword ptr [eax*4 + 0x792580]
        jmp    L_673a
L_66f3:
        fmul    dword ptr [g_0078815c]
        fdiv    dword ptr [ebx + 0x64]
        fcom    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        je    L_6713
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [g_0076c5b0]
        jmp    L_6728
L_6713:
        fcom    dword ptr [g_0076d040]
        fnstsw  ax
        test    ah, 0x41
        jne    L_6728
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [g_0076d040]
L_6728:
        call    FUN_0075db4a
        fild    dword ptr [eax*4 + 0x7925c0]
        fmul    dword ptr [g_0076d598]
L_673a:
        fld    dword ptr [esp + 0x60]
        lea    eax, [esp + 0x10]
        fadd    dword ptr [g_007926d4]
        push    eax
        lea    ecx, [esp + 0x34]
        lea    esi, [ebx + 0x38]
        fsub st(0), st(1)
        push    ecx
        mov    ecx, esi
        mov    dword ptr [esp + 0x18], 1
        fstp    dword ptr [esp + 0x44]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        call    FUN_00561df0
        mov    edx, dword ptr [eax]
        lea    eax, [esp + 0x2c]
        push    eax
        mov    ecx, esi
        mov    dword ptr [esp + 0x18], edx
        call    FUN_00641000
        mov    ecx, eax
        mov    eax, dword ptr [esp + 0x14]
        cmp    eax, dword ptr [ecx]
        je    L_678d
        mov    edx, dword ptr [esp + 0x10]
        cmp    edx, dword ptr [eax + 0x10]
        jge    L_67c4
L_678d:
        lea    eax, [esp + 0x1c]
        push    eax
        lea    ecx, [esp + 0x14]
        push    ecx
        lea    ecx, [esp + 0x5c]
        mov    dword ptr [esp + 0x24], edi
        call    FUN_00641050
        push    eax
        push    ecx
        lea    edx, [esp + 0x1c]
        mov    ecx, esp
        push    edx
        call    FUN_00561a30
        lea    eax, [esp + 0x2c]
        push    eax
        mov    ecx, esi
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x14], eax
L_67c4:
        push    1
        push    edi
        push    -1
        lea    ecx, [esp + 0x8c]
        push    ecx
        mov    ecx, dword ptr [eax + 0x14]
        lea    edx, [esp + 0x84]
        push    edx
        call    FUN_0055f5b0
        fld    dword ptr [esp + 0x78]
        fadd    dword ptr [esp + 0xc]
        lea    eax, [esp + 0x14]
        push    eax
        lea    ecx, [esp + 0x44]
        fstp    dword ptr [esp + 0x7c]
        push    ecx
        fld    dword ptr [esp + 0x28]
        mov    ecx, esi
        fsub    dword ptr [esp + 0x14]
        mov    dword ptr [esp + 0x1c], edi
        mov    dword ptr [esp + 0x20], edi
        fstp    dword ptr [esp + 0x8c]
        call    FUN_00561df0
        mov    edx, dword ptr [eax]
        lea    eax, [esp + 0x44]
        push    eax
        mov    ecx, esi
        mov    dword ptr [esp + 0x14], edx
        call    FUN_00641000
        mov    ecx, eax
        mov    eax, dword ptr [esp + 0x10]
        cmp    eax, dword ptr [ecx]
        je    L_683a
        mov    edx, dword ptr [esp + 0x14]
        cmp    edx, dword ptr [eax + 0x10]
        jge    L_6871
L_683a:
        lea    eax, [esp + 0x24]
        push    eax
        lea    ecx, [esp + 0x18]
        push    ecx
        lea    ecx, [esp + 0x64]
        mov    dword ptr [esp + 0x2c], edi
        call    FUN_00641050
        push    eax
        push    ecx
        lea    edx, [esp + 0x18]
        mov    ecx, esp
        push    edx
        call    FUN_00561a30
        lea    eax, [esp + 0x50]
        push    eax
        mov    ecx, esi
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x10], eax
L_6871:
        mov    ecx, dword ptr [eax + 0x14]
        mov    edx, dword ptr [ecx + 4]
        lea    eax, [esp + 0x18]
        push    eax
        lea    ecx, [esp + 0x50]
        push    ecx
        mov    ecx, esi
        mov    dword ptr [esp + 0x38], edx
        call    FUN_00561df0
        mov    edx, dword ptr [eax]
        lea    eax, [esp + 0x50]
        push    eax
        mov    ecx, esi
        mov    dword ptr [esp + 0x20], edx
        call    FUN_00641000
        mov    ecx, eax
        mov    eax, dword ptr [esp + 0x1c]
        cmp    eax, dword ptr [ecx]
        je    L_68b1
        mov    edx, dword ptr [esp + 0x18]
        cmp    edx, dword ptr [eax + 0x10]
        jge    L_68e8
L_68b1:
        lea    eax, [esp + 0x2c]
        push    eax
        lea    ecx, [esp + 0x1c]
        push    ecx
        lea    ecx, [esp + 0x70]
        mov    dword ptr [esp + 0x34], edi
        call    FUN_00641050
        push    eax
        push    ecx
        lea    edx, [esp + 0x24]
        mov    ecx, esp
        push    edx
        call    FUN_00561a30
        lea    eax, [esp + 0x5c]
        push    eax
        mov    ecx, esi
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x1c], eax
L_68e8:
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 0x30]
        push    ecx
        mov    ecx, dword ptr [eax + 0x14]
        push    edx
        call    FUN_0055f530
        lea    eax, [esp + 0x1c]
        push    eax
        lea    ecx, [esp + 0x58]
        push    ecx
        mov    ecx, esi
        mov    dword ptr [esp + 0x24], edi
        mov    dword ptr [esp + 0x18], edi
        call    FUN_00561df0
        mov    edx, dword ptr [eax]
        lea    eax, [esp + 0x50]
        push    eax
        mov    ecx, esi
        mov    dword ptr [esp + 0x1c], edx
        call    FUN_00641000
        mov    ecx, eax
        mov    eax, dword ptr [esp + 0x18]
        cmp    eax, dword ptr [ecx]
        je    L_6938
        mov    edx, dword ptr [esp + 0x1c]
        cmp    edx, dword ptr [eax + 0x10]
        jge    L_696f
L_6938:
        lea    eax, [esp + 0x30]
        push    eax
        lea    ecx, [esp + 0x20]
        push    ecx
        lea    ecx, [esp + 0x70]
        mov    dword ptr [esp + 0x38], edi
        call    FUN_00641050
        push    eax
        push    ecx
        lea    edx, [esp + 0x20]
        mov    ecx, esp
        push    edx
        call    FUN_00561a30
        lea    eax, [esp + 0x54]
        push    eax
        mov    ecx, esi
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x18], eax
L_696f:
        mov    ecx, dword ptr [eax + 0x14]
        mov    edx, dword ptr [ecx + 0xc]
        lea    eax, [esp + 0x10]
        push    eax
        lea    ecx, [esp + 0x4c]
        push    ecx
        mov    ecx, esi
        mov    dword ptr [esp + 0x34], edx
        call    FUN_00641010
        mov    edx, dword ptr [eax]
        lea    eax, [esp + 0x44]
        push    eax
        mov    ecx, esi
        mov    dword ptr [esp + 0x18], edx
        call    FUN_00641000
        mov    ecx, eax
        mov    edx, dword ptr [ecx]
        mov    eax, dword ptr [esp + 0x14]
        cmp    eax, edx
        mov    ecx, dword ptr [esp + 0x10]
        je    L_69b1
        cmp    ecx, dword ptr [eax + 0x10]
        jge    L_69dd
L_69b1:
        lea    edx, [esp + 0x24]
        push    edx
        push    ecx
        mov    dword ptr [esp + 0x2c], ecx
        lea    eax, [esp + 0x1c]
        mov    ecx, esp
        push    eax
        mov    dword ptr [esp + 0x34], edi
        call    FUN_00561a30
        lea    ecx, [esp + 0x48]
        push    ecx
        mov    ecx, esi
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x14], eax
L_69dd:
        mov    edx, dword ptr [esp + 0x20]
        mov    ecx, dword ptr [esp + 0x2c]
        push    edx
        push    ecx
        mov    ecx, dword ptr [eax + 0x14]
        call    FUN_0055f570
        lea    edx, [esp + 0x20]
        push    edx
        lea    eax, [esp + 0x58]
        push    eax
        mov    ecx, esi
        mov    dword ptr [esp + 0x28], edi
        call    FUN_00641010
        mov    ecx, dword ptr [eax]
        lea    edx, [esp + 0x50]
        mov    dword ptr [esp + 0x1c], ecx
        push    edx
        mov    ecx, esi
        call    FUN_00641000
        mov    ecx, eax
        mov    eax, dword ptr [esp + 0x1c]
        cmp    eax, dword ptr [ecx]
        je    L_6a29
        mov    edx, dword ptr [esp + 0x20]
        cmp    edx, dword ptr [eax + 0x10]
        jge    L_6a60
L_6a29:
        lea    eax, [esp + 0x30]
        push    eax
        lea    ecx, [esp + 0x24]
        push    ecx
        lea    ecx, [esp + 0x70]
        mov    dword ptr [esp + 0x38], edi
        call    FUN_00641050
        push    eax
        push    ecx
        lea    edx, [esp + 0x24]
        mov    ecx, esp
        push    edx
        call    FUN_00561a30
        lea    eax, [esp + 0x54]
        push    eax
        mov    ecx, esi
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x1c], eax
L_6a60:
        mov    ecx, dword ptr [eax + 0x14]
        lea    edx, [esp + 0x20]
        mov    dword ptr [ecx + 0x38], 1
        push    edx
        lea    eax, [esp + 0x58]
        push    eax
        mov    ecx, esi
        mov    dword ptr [esp + 0x28], edi
        call    FUN_00641010
        mov    ecx, dword ptr [eax]
        lea    edx, [esp + 0x50]
        mov    dword ptr [esp + 0x1c], ecx
        push    edx
        mov    ecx, esi
        call    FUN_00641000
        mov    ecx, eax
        mov    eax, dword ptr [esp + 0x1c]
        cmp    eax, dword ptr [ecx]
        je    L_6aa4
        mov    edx, dword ptr [esp + 0x20]
        cmp    edx, dword ptr [eax + 0x10]
        jge    L_6adb
L_6aa4:
        lea    eax, [esp + 0x30]
        push    eax
        lea    ecx, [esp + 0x24]
        push    ecx
        lea    ecx, [esp + 0x70]
        mov    dword ptr [esp + 0x38], edi
        call    FUN_00641050
        push    eax
        push    ecx
        lea    edx, [esp + 0x24]
        mov    ecx, esp
        push    edx
        call    FUN_00561a30
        lea    eax, [esp + 0x54]
        push    eax
        mov    ecx, esi
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x1c], eax
L_6adb:
        push    1
        push    edi
        push    -1
        lea    ecx, [esp + 0x8c]
        push    ecx
        mov    ecx, dword ptr [eax + 0x14]
        lea    edx, [esp + 0x84]
        push    edx
        call    FUN_0055f5b0
        lea    eax, [ebx + 0x20]
        push    eax
        lea    ecx, [esp + 0x6c]
        call    FUN_0040ccd0
        fld    dword ptr [esp + 0x68]
        fcomp    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        je    L_6b24
        fld    dword ptr [esp + 0x68]
        fmul    dword ptr [g_0077dff8]
        fstp    dword ptr [esp + 0x68]
L_6b24:
        fld    dword ptr [esp + 0x6c]
        fcomp    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        je    L_6b43
        fld    dword ptr [esp + 0x6c]
        fmul    dword ptr [g_0077dff4]
        fstp    dword ptr [esp + 0x6c]
L_6b43:
        lea    eax, [esp + 0x68]
        push    eax
        lea    ecx, [esp + 0x60]
        call    FUN_0040c5d0
        lea    ecx, [esp + 0x5c]
        push    ecx
        lea    ecx, [esp + 0x84]
        call    FUN_0040c410
        lea    edx, [esp + 0x68]
        push    edx
        mov    ecx, ebx
        call    FUN_00645870
        push    eax
        lea    ecx, [esp + 0x78]
        call    FUN_0040c410
        fld    dword ptr [esp + 0x84]
        fadd    dword ptr [esp + 0x78]
        push    0xfa007d00
        call    FUN_0075db4a
        fld    dword ptr [esp + 0x84]
        fadd    dword ptr [esp + 0x78]
        push    eax
        call    FUN_0075db4a
        fld    dword ptr [esp + 0x80]
        fsub    dword ptr [g_0076d5f0]
        push    eax
        call    FUN_0075db4a
        fld    dword ptr [esp + 0x80]
        fsub    dword ptr [g_0076d5f0]
        push    eax
        call    FUN_0075db4a
        push    eax
        call    FUN_0055eb90
        push    0xfa007d00
        push    0x22b
        push    0x224
        push    0x219
        push    0x1fa
        call    FUN_0055eb90
        mov    esi, dword ptr [ebx + 0x70]
        add    esp, 0x28
        push    0x44064000
        push    0x43fd0000
        mov    ecx, esi
        call    FUN_005603e0
        push    0x440ac000
        push    0x44090000
        mov    ecx, esi
        call    FUN_00560400
        fld    dword ptr [ebx + 0x68]
        fcomp    dword ptr [g_0076c5b0]
        push    0xff
        fnstsw  ax
        test    ah, 1
        jne    L_6c2d
        push    edi
        push    0xff
        jmp    L_6c33
L_6c2d:
        push    0xff
        push    edi
L_6c33:
        push    edi
        mov    ecx, esi
        call    FUN_00646d30
        mov    eax, dword ptr [esi]
        lea    ecx, [esp + 0x34]
        push    ecx
        lea    edx, [esp + 0x3c]
        push    edx
        mov    ecx, esi
        call    dword ptr [eax + 0xc]
        mov    eax, dword ptr [esp + 0x34]
        mov    ebx, dword ptr [esi]
        mov    dword ptr [esp + 0x54], eax
        mov    dword ptr [esp + 0x58], edi
        fild    qword ptr [esp + 0x54]
        push    1
        push    0x3f666666
        fmul    dword ptr [g_0076d070]
        push    ecx
        mov    ecx, dword ptr [esp + 0x44]
        mov    dword ptr [esp + 0x60], ecx
        fsubr    dword ptr [g_007926d0]
        mov    dword ptr [esp + 0x64], edi
        fstp    dword ptr [esp]
        push    ecx
        fild    qword ptr [esp + 0x64]
        lea    ecx, [esp + 0x78]
        fmul    dword ptr [g_0076d070]
        fsubr    dword ptr [g_007926cc]
        fstp    dword ptr [esp]
        call    FUN_00587830
        sub    esp, 0xc
        mov    ecx, esp
        push    eax
        call    FUN_00551870
        mov    ecx, esi
        call    dword ptr [ebx + 0x14]
        push    0xfa007d00
        push    0x225
        push    0x1fa
        push    0x225
        push    0x1f2
        call    FUN_0055eed0
        fld    dword ptr [esp + 0x50]
        call    FUN_0075db4a
        push    0xfa007d00
        push    0x225
        mov    esi, eax
        push    0x1f2
        push    esi
        push    0x1f2
        call    FUN_0055eed0
        fld    dword ptr [esp + 0xa8]
        fadd    dword ptr [esp + 0x9c]
        push    0xfa007d00
        push    esi
        push    0x1f2
        fadd    dword ptr [g_0076d5f0]
        push    esi
        call    FUN_0075db4a
        push    eax
        call    FUN_0055eed0
        add    esp, 0x3c
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0x80
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esp + 4]
        shl    eax, 8
        add    eax, edx
        mov    edx, dword ptr [esp + 8]
        shl    eax, 8
        add    eax, edx
        mov    edx, dword ptr [esp + 0xc]
        shl    eax, 8
        add    eax, edx
        mov    dword ptr [ecx + 0x104], eax
        ret    0x10
    }
}
