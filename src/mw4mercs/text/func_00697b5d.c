/*
 * FUN_00697b5d (extent 0x697b5d-0x69899c) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076d064;
extern float  g_0076d070;
extern float  g_0076d5f0;
extern float  g_0076d978;
extern float  g_0076e2bc;
extern float  g_0077016c;
extern float  g_007704c4;
extern float  g_0077dff4;
extern float  g_0077dff8;
extern int    g_007f1f84;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_0040c5d0(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_00551870(void);
extern void __cdecl FUN_0055e820(void);
extern void __cdecl FUN_0055eb90(void);
extern void __cdecl FUN_0055eed0(void);
extern void __cdecl FUN_0055f530(void);
extern void __cdecl FUN_0055f570(void);
extern void __cdecl FUN_0055f5b0(void);
extern void __cdecl FUN_00560190(void);
extern void __cdecl FUN_005603e0(void);
extern void __cdecl FUN_00560400(void);
extern void __cdecl FUN_00560420(void);
extern void __cdecl FUN_005619f0(void);
extern void __cdecl FUN_00561a30(void);
extern void __cdecl FUN_00561df0(void);
extern void __cdecl FUN_00580540(void);
extern void __cdecl FUN_00580560(void);
extern void __cdecl FUN_00587830(void);
extern void __cdecl FUN_0058f8f0(void);
extern void __cdecl FUN_00626420(void);
extern void __cdecl FUN_0063b370(void);
extern void __cdecl FUN_00641000(void);
extern void __cdecl FUN_00641050(void);
extern void __cdecl FUN_00697b20(void);
extern void __cdecl FUN_00698990(void);
extern void __cdecl FUN_0075db4a(void);

__declspec(naked) void FUN_00697b5d(void)
{
    __asm {
        nop    
        nop    
        nop    
        sub    esp, 0x15c
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov    esi, ecx
        lea    eax, [esp + 0x77]
        push    eax
        lea    ecx, [esp + 0x64]
        mov    dword ptr [esp + 0x20], esi
        call    FUN_00580540
        xor    ebp, ebp
        lea    ecx, [esp + 0x60]
        push    ebp
        push    ecx
        call    FUN_0063b370
        add    esp, 8
        lea    edx, [esi + 0x14]
        push    edx
        lea    ecx, [esp + 0x24]
        mov    dword ptr [esp + 0x50], eax
        call    FUN_0040c410
        fld    dword ptr [esp + 0x20]
        fcomp    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        je    L_7bbe
        fld    dword ptr [esp + 0x20]
        fmul    dword ptr [g_0077dff8]
        fstp    dword ptr [esp + 0x20]
L_7bbe:
        fld    dword ptr [esp + 0x24]
        fcomp    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        je    L_7bdd
        fld    dword ptr [esp + 0x24]
        fmul    dword ptr [g_0077dff4]
        fstp    dword ptr [esp + 0x24]
L_7bdd:
        lea    eax, [esp + 0x20]
        push    eax
        lea    ecx, [esp + 0x7c]
        call    FUN_0040c5d0
        lea    ecx, [esp + 0x78]
        push    ecx
        lea    ecx, [esp + 0x58]
        call    FUN_0040c410
        mov    edi, dword ptr [esp + 0x64]
        mov    edx, dword ptr [esp + 0x60]
        mov    eax, dword ptr [esi + 0x80]
        sub    edi, edx
        sar    edi, 2
        cmp    eax, -1
        je    L_7c1c
        mov    edx, dword ptr [esi + 0x54]
        sub    edx, dword ptr [esi + 0x50]
        sar    edx, 2
        add    edi, edx
L_7c1c:
        cmp    edi, ebp
        jne    L_7c34
        lea    ecx, [esp + 0x60]
        call    FUN_00580560
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x15c
        ret    
L_7c34:
        push    0x138
        call    FUN_004084d0
        add    esp, 4
        cmp    eax, ebp
        je    L_7c51
        push    ebp
        mov    ecx, eax
        call    FUN_00560190
        mov    ebx, eax
        jmp    L_7c53
L_7c51:
        xor    ebx, ebx
L_7c53:
        mov    eax, dword ptr [ebx]
        push    1
        mov    ecx, ebx
        mov    dword ptr [esp + 0x4c], ebx
        call    dword ptr [eax + 4]
        mov    ecx, dword ptr [esp + 0x60]
        mov    dword ptr [esp + 0xa8], ebp
        mov    dword ptr [esp + 0x9c], ebp
        mov    eax, dword ptr [ecx]
        cmp    eax, ebp
        jne    L_7c8c
        lea    ecx, [esp + 0x60]
        call    FUN_00580560
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x15c
        ret    
L_7c8c:
        mov    eax, dword ptr [eax + 0x2fc]
        cmp    eax, ebp
        mov    esi, 0xfa00ff00
        je    L_7cb9
        mov    eax, dword ptr [eax + 0x30c]
        cmp    eax, ebp
        push    ebp
        mov    dword ptr [ebx + 0x104], esi
        mov    dword ptr [ebx + 0x10c], ebp
        push    ebp
        je    L_7cbb
        mov    edx, dword ptr [eax + 0x10]
        push    edx
        jmp    L_7cc0
L_7cb9:
        push    ebp
        push    ebp
L_7cbb:
        push    0x76cb8c
L_7cc0:
        mov    ecx, ebx
        call    FUN_00560420
        mov    eax, dword ptr [ebx]
        lea    ecx, [esp + 0x9c]
        push    ecx
        lea    edx, [esp + 0xac]
        push    edx
        mov    ecx, ebx
        call    dword ptr [eax + 0xc]
        fld    dword ptr [g_0076c5b0]
        mov    eax, dword ptr [esp + 0x9c]
        lea    ecx, [eax + 4]
        mov    eax, dword ptr [esp + 0x1c]
        mov    dword ptr [eax + 0x84], ecx
        cmp    edi, dword ptr [esp + 0x4c]
        mov    dword ptr [ebx + 0x104], esi
        mov    dword ptr [ebx + 0x10c], ebp
        jle    L_7d12
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [g_0077016c]
L_7d12:
        mov    edx, dword ptr [eax + 0x84]
        imul    edx, edi
        mov    dword ptr [esp + 0x14], edx
        lea    esi, [eax + 0x20]
        fild    dword ptr [esp + 0x14]
        lea    eax, [esp + 0x20]
        push    eax
        mov    ecx, esi
        fadd st(0), st(1)
        mov    dword ptr [esp + 0x24], 0x43400000
        fstp    dword ptr [esp + 0x28]
        mov    dword ptr [esp + 0x2c], 0x3f666666
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        call    FUN_0040c410
        push    esi
        lea    ecx, [esp + 0x24]
        call    FUN_0040c410
        fld    dword ptr [esp + 0x20]
        fcomp    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        je    L_7d73
        fld    dword ptr [esp + 0x20]
        fmul    dword ptr [g_0077dff8]
        fstp    dword ptr [esp + 0x20]
L_7d73:
        fld    dword ptr [esp + 0x24]
        fcomp    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        je    L_7d92
        fld    dword ptr [esp + 0x24]
        fmul    dword ptr [g_0077dff4]
        fstp    dword ptr [esp + 0x24]
L_7d92:
        lea    ecx, [esp + 0x20]
        push    ecx
        lea    ecx, [esp + 0x7c]
        call    FUN_0040c5d0
        lea    edx, [esp + 0x78]
        push    edx
        lea    ecx, [esp + 0x88]
        call    FUN_0040c410
        mov    eax, dword ptr [esp + 0x1c]
        mov    eax, dword ptr [eax + 0x34]
        xor    ecx, ecx
        mov    cl, ah
        xor    edx, edx
        mov    dword ptr [esp + 0x14], eax
        mov    dl, byte ptr [esp + 0x16]
        mov    esi, ecx
        mov    ecx, eax
        and    ecx, 0xff
        add    edx, edx
        shr    eax, 0x18
        cmp    edx, 0xff
        jbe    L_7de2
        mov    edx, 0xff
L_7de2:
        add    esi, esi
        cmp    esi, 0xff
        jbe    L_7df1
        mov    esi, 0xff
L_7df1:
        add    ecx, ecx
        cmp    ecx, 0xff
        jbe    L_7e00
        mov    ecx, 0xff
L_7e00:
        shl    eax, 8
        add    eax, edx
        shl    eax, 8
        add    eax, esi
        push    0xc8050f05
        shl    eax, 8
        add    eax, ecx
        sub    esp, 0xc
        lea    edx, [esp + 0x94]
        mov    ebx, eax
        mov    ecx, esp
        push    edx
        mov    dword ptr [esp + 0x64], ebx
        call    FUN_00551870
        lea    eax, [esp + 0x64]
        push    eax
        call    FUN_00626420
        fld    dword ptr [esp + 0x9c]
        fadd    dword ptr [esp + 0x6c]
        push    ebx
        call    FUN_0075db4a
        fld    dword ptr [esp + 0x9c]
        fadd    dword ptr [esp + 0x6c]
        push    eax
        call    FUN_0075db4a
        fld    dword ptr [esp + 0x74]
        push    eax
        call    FUN_0075db4a
        fld    dword ptr [esp + 0x74]
        push    eax
        call    FUN_0075db4a
        push    eax
        call    FUN_0055e820
        mov    eax, dword ptr [esp + 0x74]
        add    esp, 0x28
        cmp    edi, eax
        jle    L_7ec1
        fld    dword ptr [esp + 0x54]
        call    FUN_0075db4a
        mov    ecx, dword ptr [esp + 0x1c]
        mov    edx, dword ptr [ecx + 0x84]
        imul    edx, dword ptr [esp + 0x4c]
        mov    dword ptr [esp + 0x14], edx
        mov    esi, eax
        fild    dword ptr [esp + 0x14]
        fadd    dword ptr [esp + 0x58]
        fadd    dword ptr [g_0076d978]
        call    FUN_0075db4a
        push    ebx
        push    eax
        lea    ecx, [esi + 0xc2]
        push    ecx
        push    eax
        push    esi
        call    FUN_0055eed0
        add    esp, 0x14
L_7ec1:
        fld    dword ptr [esp + 0x58]
        mov    edx, dword ptr [esp + 0x1c]
        fadd    dword ptr [g_0076d5f0]
        lea    eax, [esp + 0x18]
        push    eax
        lea    ecx, [esp + 0x48]
        fst    dword ptr [esp + 0x5c]
        lea    esi, [edx + 0x38]
        fld    dword ptr [esp + 0x58]
        push    ecx
        fadd    dword ptr [g_0076d5f0]
        mov    ecx, esi
        mov    dword ptr [esp + 0x40], 0
        mov    dword ptr [esp + 0x20], ebp
        fstp    dword ptr [esp + 0x5c]
        fstp    dword ptr [esp + 0x34]
        fld    dword ptr [esp + 0x8c]
        fsub    dword ptr [g_0076d978]
        fstp    dword ptr [esp + 0x8c]
        call    FUN_00561df0
        mov    edx, dword ptr [eax]
        lea    eax, [esp + 0x40]
        push    eax
        mov    ecx, esi
        mov    dword ptr [esp + 0x14], edx
        call    FUN_00641000
        mov    ecx, eax
        mov    eax, dword ptr [esp + 0x10]
        cmp    eax, dword ptr [ecx]
        je    L_7f3e
        mov    edx, dword ptr [esp + 0x18]
        cmp    edx, dword ptr [eax + 0x10]
        jge    L_7f75
L_7f3e:
        lea    eax, [esp + 0x14]
        push    eax
        lea    ecx, [esp + 0x1c]
        push    ecx
        lea    ecx, [esp + 0x74]
        mov    dword ptr [esp + 0x1c], ebp
        call    FUN_00641050
        push    eax
        push    ecx
        lea    edx, [esp + 0x18]
        mov    ecx, esp
        push    edx
        call    FUN_00561a30
        lea    eax, [esp + 0x44]
        push    eax
        mov    ecx, esi
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x10], eax
L_7f75:
        mov    eax, dword ptr [eax + 0x14]
        fld    dword ptr [eax + 0xc]
        lea    edx, [esp + 0x20]
        fsub    dword ptr [eax + 4]
        push    edx
        fmul    dword ptr [eax + 0x14]
        fld    dword ptr [eax + 0x10]
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [eax + 0x18]
        mov    dword ptr [esp + 0x2c], 0
        fstp    dword ptr [esp + 0x80]
        mov    ecx, dword ptr [esp + 0x80]
        mov    dword ptr [esp + 0x28], ecx
        lea    ecx, [esp + 0x110]
        fstp    dword ptr [esp + 0x24]
        call    FUN_0040c410
        lea    eax, [esp + 0x10]
        push    eax
        lea    ecx, [esp + 0x48]
        push    ecx
        mov    ecx, esi
        mov    dword ptr [esp + 0x18], ebp
        call    FUN_00561df0
        mov    edx, dword ptr [eax]
        lea    eax, [esp + 0x40]
        push    eax
        mov    ecx, esi
        mov    dword ptr [esp + 0x1c], edx
        call    FUN_00641000
        mov    ecx, eax
        mov    eax, dword ptr [esp + 0x18]
        cmp    eax, dword ptr [ecx]
        je    L_7ff3
        mov    edx, dword ptr [esp + 0x10]
        cmp    edx, dword ptr [eax + 0x10]
        jge    L_802a
L_7ff3:
        lea    eax, [esp + 0x14]
        push    eax
        lea    ecx, [esp + 0x14]
        push    ecx
        lea    ecx, [esp + 0x74]
        mov    dword ptr [esp + 0x1c], ebp
        call    FUN_00641050
        push    eax
        push    ecx
        lea    edx, [esp + 0x20]
        mov    ecx, esp
        push    edx
        call    FUN_00561a30
        lea    eax, [esp + 0x44]
        push    eax
        mov    ecx, esi
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x18], eax
L_802a:
        mov    ecx, dword ptr [eax + 0x14]
        fld    dword ptr [ecx + 4]
        lea    edx, [esp + 0x10]
        fmul    dword ptr [g_0076e2bc]
        push    edx
        lea    eax, [esp + 0x48]
        push    eax
        fstp    dword ptr [esp + 0xd8]
        mov    ecx, esi
        mov    dword ptr [esp + 0x18], ebp
        call    FUN_00561df0
        mov    ecx, dword ptr [eax]
        lea    edx, [esp + 0x40]
        mov    dword ptr [esp + 0x18], ecx
        push    edx
        mov    ecx, esi
        call    FUN_00641000
        mov    ecx, eax
        mov    eax, dword ptr [esp + 0x18]
        cmp    eax, dword ptr [ecx]
        je    L_8077
        mov    edx, dword ptr [esp + 0x10]
        cmp    edx, dword ptr [eax + 0x10]
        jge    L_80ae
L_8077:
        lea    eax, [esp + 0x14]
        push    eax
        lea    ecx, [esp + 0x14]
        push    ecx
        lea    ecx, [esp + 0x74]
        mov    dword ptr [esp + 0x1c], ebp
        call    FUN_00641050
        push    eax
        push    ecx
        lea    edx, [esp + 0x20]
        mov    ecx, esp
        push    edx
        call    FUN_00561a30
        lea    eax, [esp + 0x44]
        push    eax
        mov    ecx, esi
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x18], eax
L_80ae:
        mov    ecx, dword ptr [eax + 0x14]
        fld    dword ptr [ecx + 8]
        lea    edx, [esp + 0x10]
        fmul    dword ptr [g_0076e2bc]
        push    edx
        lea    eax, [esp + 0x48]
        push    eax
        fstp    dword ptr [esp + 0xdc]
        mov    ecx, esi
        mov    dword ptr [esp + 0x18], ebp
        call    FUN_00561df0
        mov    ecx, dword ptr [eax]
        lea    edx, [esp + 0x40]
        mov    dword ptr [esp + 0x18], ecx
        push    edx
        mov    ecx, esi
        call    FUN_00641000
        mov    ecx, eax
        mov    eax, dword ptr [esp + 0x18]
        cmp    eax, dword ptr [ecx]
        je    L_80fb
        mov    edx, dword ptr [esp + 0x10]
        cmp    edx, dword ptr [eax + 0x10]
        jge    L_8132
L_80fb:
        lea    eax, [esp + 0x14]
        push    eax
        lea    ecx, [esp + 0x14]
        push    ecx
        lea    ecx, [esp + 0x74]
        mov    dword ptr [esp + 0x1c], ebp
        call    FUN_00641050
        push    eax
        push    ecx
        lea    edx, [esp + 0x20]
        mov    ecx, esp
        push    edx
        call    FUN_00561a30
        lea    eax, [esp + 0x44]
        push    eax
        mov    ecx, esi
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x18], eax
L_8132:
        mov    ecx, dword ptr [eax + 0x14]
        fld    dword ptr [ecx + 0xc]
        lea    edx, [esp + 0x10]
        fmul    dword ptr [g_0076e2bc]
        push    edx
        lea    eax, [esp + 0x48]
        push    eax
        fstp    dword ptr [esp + 0x80]
        mov    ecx, esi
        mov    dword ptr [esp + 0x18], ebp
        call    FUN_00561df0
        mov    ecx, dword ptr [eax]
        lea    edx, [esp + 0x40]
        mov    dword ptr [esp + 0x18], ecx
        push    edx
        mov    ecx, esi
        call    FUN_00641000
        mov    ecx, eax
        mov    eax, dword ptr [esp + 0x18]
        cmp    eax, dword ptr [ecx]
        je    L_817f
        mov    edx, dword ptr [esp + 0x10]
        cmp    edx, dword ptr [eax + 0x10]
        jge    L_81b6
L_817f:
        lea    eax, [esp + 0x14]
        push    eax
        lea    ecx, [esp + 0x14]
        push    ecx
        lea    ecx, [esp + 0x74]
        mov    dword ptr [esp + 0x1c], ebp
        call    FUN_00641050
        push    eax
        push    ecx
        lea    edx, [esp + 0x20]
        mov    ecx, esp
        push    edx
        call    FUN_00561a30
        lea    eax, [esp + 0x44]
        push    eax
        mov    ecx, esi
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x18], eax
L_81b6:
        mov    ecx, dword ptr [eax + 0x14]
        fld    dword ptr [ecx + 0x10]
        mov    edx, dword ptr [esp + 0x64]
        mov    eax, dword ptr [esp + 0x60]
        fmul    dword ptr [g_0076e2bc]
        sub    edx, eax
        xor    ebx, ebx
        sar    edx, 2
        fstp    dword ptr [esp + 0x7c]
        je    L_879d
L_81db:
        mov    eax, dword ptr [eax + ebx*4]
        mov    eax, dword ptr [eax + 0x2fc]
        cmp    eax, ebp
        je    L_8775
        mov    edi, dword ptr [eax + 0x30c]
        cmp    edi, ebp
        push    ebp
        push    ebp
        jne    L_81ff
        push    0x76cb8c
        jmp    L_8203
L_81ff:
        mov    ecx, dword ptr [edi + 0x10]
        push    ecx
L_8203:
        mov    ecx, dword ptr [esp + 0x54]
        call    FUN_00560420
        cmp    ebx, dword ptr [esp + 0x4c]
        jne    L_8220
        fld    dword ptr [esp + 0x2c]
        fadd    dword ptr [g_0077016c]
        fstp    dword ptr [esp + 0x2c]
L_8220:
        mov    ecx, dword ptr [esp + 0x84]
        mov    edx, dword ptr [esp + 0x54]
        mov    eax, dword ptr [esp + 0x2c]
        mov    dword ptr [esp + 0x20], ecx
        mov    ecx, dword ptr [esp + 0x1c]
        fild    dword ptr [ecx + 0x84]
        push    edi
        mov    dword ptr [esp + 0x34], edx
        mov    dword ptr [esp + 0x38], eax
        fsub    dword ptr [g_0076d5f0]
        fstp    dword ptr [esp + 0x28]
        call    FUN_00697b20
        test    al, al
        je    L_82c3
        fld    dword ptr [esp + 0x24]
        push    0xc80000ff
        fadd    dword ptr [g_0076d064]
        push    0x3f666666
        push    ecx
        fstp    dword ptr [esp]
        push    ecx
        fld    dword ptr [esp + 0x30]
        lea    ecx, [esp + 0x134]
        fadd    dword ptr [g_007704c4]
        fstp    dword ptr [esp]
        call    FUN_00587830
        sub    esp, 0xc
        mov    ecx, esp
        push    eax
        call    FUN_00551870
        fld    dword ptr [esp + 0x44]
        fsub    dword ptr [g_0076d064]
        push    0x3f666666
        push    ecx
        fstp    dword ptr [esp]
        push    ecx
        fld    dword ptr [esp + 0x4c]
        lea    ecx, [esp + 0x170]
        fsub    dword ptr [g_0076d064]
        fstp    dword ptr [esp]
        jmp    L_83f9
L_82c3:
        mov    edx, dword ptr [esp + 0x60]
        mov    eax, dword ptr [g_007f1f84]
        mov    ecx, dword ptr [edx + ebx*4]
        mov    ecx, dword ptr [ecx + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        je    L_8394
        mov    eax, dword ptr [esp + 0x60]
        mov    edi, dword ptr [eax + ebx*4]
        mov    ecx, edi
        call    FUN_0058f8f0
        mov    ecx, dword ptr [edi + 0x10]
        shr    ecx, 0x13
        test    cl, 1
        mov    eax, 0xfa000000
        jne    L_832f
        fcom    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 1
        je    L_8314
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        mov    eax, 0xc8008000
        jmp    L_8331
L_8314:
        fcomp    dword ptr [g_007704c4]
        fnstsw  ax
        test    ah, 1
        je    L_8328
        mov    eax, 0xc8ffff00
        jmp    L_8331
L_8328:
        mov    eax, 0xc8ff0000
        jmp    L_8331
L_832f:
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_8331:
        fld    dword ptr [esp + 0x24]
        push    eax
        fadd    dword ptr [g_0076d064]
        push    0x3f666666
        push    ecx
        fstp    dword ptr [esp]
        push    ecx
        fld    dword ptr [esp + 0x30]
        lea    ecx, [esp + 0x14c]
        fadd    dword ptr [g_007704c4]
        fstp    dword ptr [esp]
        call    FUN_00587830
        sub    esp, 0xc
        mov    ecx, esp
        push    eax
        call    FUN_00551870
        fld    dword ptr [esp + 0x44]
        fsub    dword ptr [g_0076d064]
        push    0x3f666666
        push    ecx
        fstp    dword ptr [esp]
        push    ecx
        fld    dword ptr [esp + 0x4c]
        lea    ecx, [esp + 0x134]
        fsub    dword ptr [g_0076d064]
        fstp    dword ptr [esp]
        jmp    L_83f9
L_8394:
        fld    dword ptr [esp + 0x24]
        push    0xc8059605
        fadd    dword ptr [g_0076d064]
        push    0x3f666666
        push    ecx
        fstp    dword ptr [esp]
        push    ecx
        fld    dword ptr [esp + 0x30]
        lea    ecx, [esp + 0x140]
        fadd    dword ptr [g_007704c4]
        fstp    dword ptr [esp]
        call    FUN_00587830
        sub    esp, 0xc
        mov    ecx, esp
        push    eax
        call    FUN_00551870
        fld    dword ptr [esp + 0x44]
        fsub    dword ptr [g_0076d064]
        push    0x3f666666
        push    ecx
        fstp    dword ptr [esp]
        push    ecx
        fld    dword ptr [esp + 0x4c]
        lea    ecx, [esp + 0x164]
        fsub    dword ptr [g_0076d064]
        fstp    dword ptr [esp]
L_83f9:
        call    FUN_00587830
        push    eax
        call    FUN_00626420
        fld    dword ptr [esp + 0x48]
        fadd    dword ptr [g_0076d064]
        mov    edx, dword ptr [esp + 0x5c]
        mov    edi, dword ptr [edx]
        add    esp, 0x14
        push    1
        push    0x3f666666
        push    ecx
        fstp    dword ptr [esp]
        push    ecx
        fld    dword ptr [esp + 0x40]
        lea    ecx, [esp + 0x170]
        fadd    dword ptr [g_0076d978]
        fstp    dword ptr [esp]
        call    FUN_00587830
        sub    esp, 0xc
        mov    ecx, esp
        push    eax
        call    FUN_00551870
        mov    ecx, dword ptr [esp + 0x58]
        call    dword ptr [edi + 0x14]
        mov    ecx, dword ptr [esp + 0x60]
        mov    eax, dword ptr [g_007f1f84]
        mov    ecx, dword ptr [ecx + ebx*4]
        mov    ecx, dword ptr [ecx + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        je    L_86f7
        mov    edx, dword ptr [esp + 0x60]
        mov    edi, dword ptr [edx + ebx*4]
        mov    ecx, edi
        call    FUN_0058f8f0
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        mov    eax, dword ptr [edi + 0x78]
        lea    ecx, [edi + 0x78]
        call    dword ptr [eax + 4]
        mov    eax, dword ptr [eax + 0x634]
        lea    ecx, [esp + 0x10]
        push    ecx
        lea    edx, [esp + 0xf4]
        lea    edi, [eax + 0xa]
        push    edx
        mov    ecx, esi
        mov    dword ptr [esp + 0x18], edi
        call    FUN_00561df0
        mov    eax, dword ptr [eax]
        cmp    eax, dword ptr [esi]
        mov    ecx, dword ptr [esp + 0x10]
        mov    dword ptr [esp + 0x18], eax
        je    L_84b8
        cmp    ecx, dword ptr [eax + 0x10]
        jge    L_84f0
L_84b8:
        lea    eax, [esp + 0xb4]
        push    eax
        push    ecx
        mov    dword ptr [esp + 0xbc], ecx
        lea    edx, [esp + 0x20]
        mov    ecx, esp
        push    edx
        mov    dword ptr [esp + 0xc4], ebp
        call    FUN_00561a30
        lea    eax, [esp + 0xf0]
        push    eax
        mov    ecx, esi
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x18], eax
L_84f0:
        mov    eax, dword ptr [eax + 0x14]
        fld    dword ptr [eax + 0x10]
        mov    ecx, dword ptr [esp + 0x1c]
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [eax + 0x18]
        fisubr    dword ptr [ecx + 0x84]
        fmul    dword ptr [g_0076d070]
        fadd    dword ptr [esp + 0x34]
        fst    dword ptr [esp + 0x40]
        fcomp    dword ptr [esp + 0x34]
        fnstsw  ax
        test    ah, 1
        je    L_8527
        mov    edx, dword ptr [esp + 0x34]
        mov    dword ptr [esp + 0x40], edx
L_8527:
        lea    eax, [esp + 0x98]
        push    eax
        lea    ecx, [esp + 0xfc]
        push    ecx
        mov    ecx, esi
        mov    dword ptr [esp + 0xa0], edi
        mov    dword ptr [esp + 0xa8], edi
        mov    dword ptr [esp + 0x18], edi
        call    FUN_00561df0
        mov    eax, dword ptr [eax]
        cmp    eax, dword ptr [esi]
        mov    ecx, dword ptr [esp + 0x98]
        mov    dword ptr [esp + 0x94], eax
        je    L_8569
        cmp    ecx, dword ptr [eax + 0x10]
        jge    L_85a7
L_8569:
        lea    edx, [esp + 0xbc]
        push    edx
        push    ecx
        mov    dword ptr [esp + 0xc4], ecx
        lea    eax, [esp + 0x9c]
        mov    ecx, esp
        push    eax
        mov    dword ptr [esp + 0xcc], ebp
        call    FUN_00561a30
        lea    ecx, [esp + 0x104]
        push    ecx
        mov    ecx, esi
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x94], eax
L_85a7:
        mov    eax, dword ptr [eax + 0x14]
        fld    dword ptr [eax + 0xc]
        lea    ecx, [esp + 0xec]
        fsub    dword ptr [eax + 4]
        fmul    dword ptr [eax + 0x14]
        fld    dword ptr [eax + 0x10]
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [eax + 0x18]
        lea    eax, [esp + 0xa0]
        push    eax
        fstp    dword ptr [esp + 0x108]
        mov    edx, dword ptr [esp + 0x108]
        push    ecx
        mov    ecx, esi
        fstp    dword ptr [esp + 0xcc]
        mov    dword ptr [esp + 0xd0], edx
        mov    dword ptr [esp + 0xd4], 0
        call    FUN_00561df0
        mov    eax, dword ptr [eax]
        cmp    eax, dword ptr [esi]
        mov    ecx, dword ptr [esp + 0xa0]
        mov    dword ptr [esp + 0x3c], eax
        je    L_8610
        cmp    ecx, dword ptr [eax + 0x10]
        jge    L_863f
L_8610:
        lea    edx, [esp + 0x6c]
        push    edx
        push    ecx
        mov    dword ptr [esp + 0x74], ecx
        lea    eax, [esp + 0x44]
        mov    ecx, esp
        push    eax
        mov    dword ptr [esp + 0x7c], ebp
        call    FUN_00561a30
        lea    ecx, [esp + 0xfc]
        push    ecx
        mov    ecx, esi
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x3c], eax
L_863f:
        mov    eax, dword ptr [eax + 0x14]
        fld    dword ptr [eax + 0xc]
        mov    edx, dword ptr [esp + 0x40]
        fsub    dword ptr [eax + 4]
        lea    ecx, [esp + 0x90]
        fmul    dword ptr [eax + 0x14]
        fld    dword ptr [esp + 0x30]
        lea    eax, [esp + 0x10]
        fadd    dword ptr [esp + 0x84]
        push    eax
        push    ecx
        mov    ecx, esi
        fsub st(0), st(1)
        mov    dword ptr [esp + 0xe8], edx
        mov    dword ptr [esp + 0xec], 0x3f666666
        fstp    dword ptr [esp + 0xe4]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        call    FUN_00561df0
        mov    eax, dword ptr [eax]
        cmp    eax, dword ptr [esi]
        mov    dword ptr [esp + 0x14], eax
        je    L_869e
        mov    edx, dword ptr [esp + 0x10]
        cmp    edx, dword ptr [eax + 0x10]
        jge    L_86db
L_869e:
        lea    eax, [esp + 0x44]
        push    eax
        lea    ecx, [esp + 0x14]
        push    ecx
        lea    ecx, [esp + 0xb4]
        mov    dword ptr [esp + 0x4c], ebp
        call    FUN_00641050
        push    eax
        push    ecx
        lea    edx, [esp + 0x1c]
        mov    ecx, esp
        push    edx
        call    FUN_00561a30
        lea    eax, [esp + 0xac]
        push    eax
        mov    ecx, esi
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x14], eax
L_86db:
        push    ebp
        push    ebp
        push    -1
        lea    ecx, [esp + 0xd0]
        push    ecx
        mov    ecx, dword ptr [eax + 0x14]
        lea    edx, [esp + 0xec]
        push    edx
        call    FUN_0055f5b0
L_86f7:
        mov    eax, dword ptr [esp + 0x1c]
        mov    eax, dword ptr [eax + 0x80]
        cmp    eax, -2
        je    L_8738
        cmp    eax, -3
        mov    ecx, dword ptr [esp + 0x4c]
        jne    L_8713
        cmp    ebx, ecx
        jl    L_8738
L_8713:
        cmp    eax, -4
        jne    L_871e
        cmp    ebx, ecx
        jl    L_8722
        jmp    L_8738
L_871e:
        cmp    ebx, ecx
        jge    L_872d
L_8722:
        lea    edx, [ebx + 1]
        cmp    eax, edx
        je    L_8738
        cmp    ebx, ecx
        jl    L_8775
L_872d:
        mov    edx, ebx
        sub    edx, ecx
        add    edx, 4
        cmp    eax, edx
        jne    L_8775
L_8738:
        fld    dword ptr [esp + 0x24]
        mov    eax, dword ptr [esp + 0x50]
        fadd    dword ptr [esp + 0x34]
        push    eax
        call    FUN_0075db4a
        fld    dword ptr [esp + 0x24]
        fadd    dword ptr [esp + 0x34]
        push    eax
        call    FUN_0075db4a
        fld    dword ptr [esp + 0x3c]
        push    eax
        call    FUN_0075db4a
        fld    dword ptr [esp + 0x3c]
        push    eax
        call    FUN_0075db4a
        push    eax
        call    FUN_0055eb90
        add    esp, 0x14
L_8775:
        mov    ecx, dword ptr [esp + 0x1c]
        fild    dword ptr [ecx + 0x84]
        mov    edx, dword ptr [esp + 0x64]
        mov    eax, dword ptr [esp + 0x60]
        sub    edx, eax
        fadd    dword ptr [esp + 0x2c]
        inc    ebx
        sar    edx, 2
        cmp    ebx, edx
        fstp    dword ptr [esp + 0x2c]
        jb    L_81db
L_879d:
        lea    eax, [esp + 0x10]
        push    eax
        lea    ecx, [esp + 0xa8]
        push    ecx
        mov    ecx, esi
        mov    dword ptr [esp + 0x18], ebp
        call    FUN_00561df0
        mov    eax, dword ptr [eax]
        cmp    eax, dword ptr [esi]
        mov    dword ptr [esp + 0x14], eax
        je    L_87c8
        mov    edx, dword ptr [esp + 0x10]
        cmp    edx, dword ptr [eax + 0x10]
        jge    L_8805
L_87c8:
        lea    eax, [esp + 0x50]
        push    eax
        lea    ecx, [esp + 0x14]
        push    ecx
        lea    ecx, [esp + 0xb4]
        mov    dword ptr [esp + 0x58], ebp
        call    FUN_00641050
        push    eax
        push    ecx
        lea    edx, [esp + 0x1c]
        mov    ecx, esp
        push    edx
        call    FUN_00561a30
        lea    eax, [esp + 0x98]
        push    eax
        mov    ecx, esi
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x14], eax
L_8805:
        mov    ecx, dword ptr [esp + 0xd4]
        mov    edx, dword ptr [esp + 0xd0]
        push    ecx
        mov    ecx, dword ptr [eax + 0x14]
        push    edx
        call    FUN_0055f530
        lea    eax, [esp + 0x10]
        push    eax
        lea    ecx, [esp + 0xa8]
        push    ecx
        mov    ecx, esi
        mov    dword ptr [esp + 0x18], ebp
        call    FUN_00561df0
        mov    eax, dword ptr [eax]
        cmp    eax, dword ptr [esi]
        mov    dword ptr [esp + 0x14], eax
        je    L_8848
        mov    edx, dword ptr [esp + 0x10]
        cmp    edx, dword ptr [eax + 0x10]
        jge    L_8885
L_8848:
        lea    eax, [esp + 0x50]
        push    eax
        lea    ecx, [esp + 0x14]
        push    ecx
        lea    ecx, [esp + 0xb4]
        mov    dword ptr [esp + 0x58], ebp
        call    FUN_00641050
        push    eax
        push    ecx
        lea    edx, [esp + 0x1c]
        mov    ecx, esp
        push    edx
        call    FUN_00561a30
        lea    eax, [esp + 0x98]
        push    eax
        mov    ecx, esi
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x14], eax
L_8885:
        mov    ecx, dword ptr [esp + 0x7c]
        mov    edx, dword ptr [esp + 0x78]
        push    ecx
        mov    ecx, dword ptr [eax + 0x14]
        push    edx
        call    FUN_0055f570
        mov    ecx, dword ptr [esp + 0x48]
        cmp    ecx, ebp
        je    L_88a5
        mov    eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
L_88a5:
        mov    ecx, dword ptr [esp + 0x1c]
        cmp    dword ptr [ecx + 0x80], -1
        je    L_8966
        mov    edx, ecx
        mov    eax, dword ptr [edx + 0x54]
        lea    esi, [edx + 0x50]
        sub    eax, dword ptr [esi]
        xor    edi, edi
        sar    eax, 2
        mov    dword ptr [esp + 0x38], 0
        je    L_8966
L_88d3:
        mov    ecx, dword ptr [esp + 0x54]
        mov    edx, dword ptr [esp + 0x2c]
        mov    eax, dword ptr [esi]
        mov    dword ptr [esp + 0x30], ecx
        mov    ecx, dword ptr [esp + 0x58]
        mov    dword ptr [esp + 0x34], edx
        mov    edx, dword ptr [esp + 0x54]
        push    ecx
        mov    ecx, dword ptr [eax + edi*4]
        lea    ebx, [eax + edi*4]
        push    edx
        call    FUN_005603e0
        fld    dword ptr [esp + 0x88]
        fadd    dword ptr [esp + 0x34]
        push    ecx
        fstp    dword ptr [esp]
        push    ecx
        fld    dword ptr [esp + 0x38]
        mov    ecx, dword ptr [ebx]
        fadd    dword ptr [esp + 0x8c]
        fstp    dword ptr [esp]
        call    FUN_00560400
        push    edi
        mov    ecx, esi
        call    FUN_00698990
        mov    ebx, dword ptr [eax]
        mov    ebp, dword ptr [ebx]
        push    1
        sub    esp, 0xc
        lea    eax, [esp + 0x40]
        mov    ecx, esp
        push    eax
        call    FUN_00551870
        mov    ecx, ebx
        call    dword ptr [ebp + 0x14]
        mov    ecx, dword ptr [esp + 0x1c]
        fild    dword ptr [ecx + 0x84]
        mov    edx, dword ptr [esi + 4]
        sub    edx, dword ptr [esi]
        fadd    dword ptr [esp + 0x2c]
        inc    edi
        sar    edx, 2
        cmp    edi, edx
        fstp    dword ptr [esp + 0x2c]
        jb    L_88d3
        xor    ebp, ebp
L_8966:
        mov    eax, dword ptr [esp + 0x60]
        cmp    eax, ebp
        je    L_8977
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_8977:
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x15c
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
        mov    eax, dword ptr [ecx]
        mov    ecx, dword ptr [esp + 4]
        lea    eax, [eax + ecx*4]
        ret    4
    }
}
