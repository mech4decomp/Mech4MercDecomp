/*
 * FUN_0069cf60 (extent 0x69cf60-0x69ddd0) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076d064;
extern float  g_0076d5f0;
extern float  g_0076d978;
extern float  g_007704c4;
extern float  g_0077d060;
extern float  g_0077de9c;
extern float  g_0077dff4;
extern float  g_0077dff8;
extern float  g_007880f8;
extern float  g_00792630;
extern int    g_00799a20;
extern int    g_007b8ce8;
extern int    g_007b8cec;
extern int    g_007b8cf0;
extern int    g_007b8d88;
extern int    g_007b8d8c;
extern int    g_007b8d90;
extern int    g_007dab40;
extern int    g_007dab44;
extern char   g_007f1f7d;
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_0040c5d0(void);
extern void __cdecl FUN_0041c680(void);
extern void __cdecl FUN_0041ea60(void);
extern void __cdecl FUN_0041eb40(void);
extern void __cdecl FUN_0041edd0(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_004e27f0(void);
extern void __cdecl FUN_00551870(void);
extern void __cdecl FUN_0055e820(void);
extern void __cdecl FUN_005603e0(void);
extern void __cdecl FUN_00560400(void);
extern void __cdecl FUN_00560420(void);
extern void __cdecl FUN_00584520(void);
extern void __cdecl FUN_00587830(void);
extern void __cdecl FUN_0058adf0(void);
extern void __cdecl FUN_005b7d90(void);
extern void __cdecl FUN_005b7e40(void);
extern void __cdecl FUN_005b7e50(void);
extern void __cdecl FUN_005b7e60(void);
extern void __cdecl FUN_005b9d60(void);
extern void __cdecl FUN_005eb070(void);
extern void __cdecl FUN_005eb100(void);
extern void __cdecl FUN_005eb260(void);
extern void __cdecl FUN_005eb380(void);
extern void __cdecl FUN_005faf20(void);
extern void __cdecl FUN_00626420(void);
extern void __cdecl FUN_0067f7b0(void);
extern void __cdecl FUN_0069cdc0(void);
extern void __cdecl FUN_0069ce20(void);
extern void __cdecl FUN_0075db4a(void);

__declspec(naked) void FUN_0069cf60(void)
{
    __asm {
        push    ebp
        push    edi
        mov    ebp, ecx
        call    FUN_0069cdc0
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, dword ptr [g_007dab40]
        mov    eax, dword ptr [ecx + 0x10]
        xor    eax, 0x85739531
        mov    ecx, dword ptr [eax + 0x4c]
        test    ecx, ecx
        jle    L_cfb3
        push    ebx
        push    esi
        mov    esi, dword ptr [eax + 0x48]
        add    esi, 0x14
        mov    ebx, ecx
L_cf8f:
        mov    ecx, dword ptr [esi]
        call    FUN_0041fd80
        mov    edi, eax
        mov    ecx, edi
        call    FUN_005b7d90
        test    al, al
        jne    L_cfab
        push    edi
        mov    ecx, ebp
        call    FUN_0069ce20
L_cfab:
        add    esi, 0x1c
        dec    ebx
        jne    L_cf8f
        pop    esi
        pop    ebx
L_cfb3:
        pop    edi
        pop    ebp
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
        sub    esp, 0x54
        push    ebx
        push    ebp
        mov    ebp, ecx
        push    esi
        push    edi
        lea    eax, [ebp + 0x14]
        push    eax
        lea    ecx, [esp + 0x38]
        mov    dword ptr [esp + 0x1c], ebp
        call    FUN_0040c410
        fld    dword ptr [esp + 0x34]
        fcomp    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        je    L_cff9
        fld    dword ptr [esp + 0x34]
        fmul    dword ptr [g_0077dff8]
        fstp    dword ptr [esp + 0x34]
L_cff9:
        fld    dword ptr [esp + 0x38]
        fcomp    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        je    L_d018
        fld    dword ptr [esp + 0x38]
        fmul    dword ptr [g_0077dff4]
        fstp    dword ptr [esp + 0x38]
L_d018:
        lea    ecx, [esp + 0x34]
        push    ecx
        lea    ecx, [esp + 0x2c]
        call    FUN_0040c5d0
        lea    edx, [esp + 0x28]
        push    edx
        lea    ecx, [esp + 0x44]
        call    FUN_0040c410
        mov    esi, dword ptr [ebp + 0x34]
        xor    ecx, ecx
        mov    eax, esi
        mov    cl, ah
        xor    edx, edx
        mov    dword ptr [esp + 0x1c], eax
        mov    dl, byte ptr [esp + 0x1e]
        xor    ebx, ebx
        mov    dword ptr [esp + 0x14], ebx
        mov    dword ptr [esp + 0x10], ebx
        mov    edi, ecx
        mov    ecx, eax
        and    ecx, 0xff
        add    edx, edx
        shr    eax, 0x18
        cmp    edx, 0xff
        jbe    L_d06d
        mov    edx, 0xff
L_d06d:
        add    edi, edi
        cmp    edi, 0xff
        jbe    L_d07c
        mov    edi, 0xff
L_d07c:
        add    ecx, ecx
        cmp    ecx, 0xff
        jbe    L_d08b
        mov    ecx, 0xff
L_d08b:
        shl    eax, 8
        add    eax, edx
        mov    edx, esi
        shr    edx, 0x10
        shl    eax, 8
        and    edx, 0xff
        mov    dword ptr [esp + 0x28], edx
        add    eax, edi
        mov    dword ptr [esp + 0x2c], ebx
        fild    qword ptr [esp + 0x28]
        shl    eax, 8
        add    eax, ecx
        fmul    dword ptr [g_00792630]
        mov    dword ptr [esp + 0x1c], eax
        call    FUN_0075db4a
        mov    edx, esi
        shr    edx, 8
        and    edx, 0xff
        mov    ecx, esi
        shr    ecx, 0x18
        mov    dword ptr [esp + 0x28], edx
        shl    ecx, 8
        mov    dword ptr [esp + 0x2c], ebx
        fild    qword ptr [esp + 0x28]
        sub    ecx, eax
        shl    ecx, 8
        fmul    dword ptr [g_00792630]
        mov    edi, ecx
        call    FUN_0075db4a
        and    esi, 0xff
        mov    dword ptr [esp + 0x28], esi
        mov    dword ptr [esp + 0x2c], 0
        fild    qword ptr [esp + 0x28]
        sub    edi, eax
        shl    edi, 8
        fmul    dword ptr [g_00792630]
        mov    ebx, edi
        call    FUN_0075db4a
        sub    ebx, eax
        lea    eax, [esp + 0x34]
        lea    esi, [ebp + 0x20]
        push    eax
        mov    ecx, esi
        mov    dword ptr [esp + 0x38], 0x439e0000
        mov    dword ptr [esp + 0x3c], 0x43c80000
        mov    dword ptr [esp + 0x40], 0x3f666666
        call    FUN_0040c410
        push    esi
        lea    ecx, [esp + 0x38]
        call    FUN_0040c410
        fld    dword ptr [esp + 0x34]
        fcomp    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        je    L_d16b
        fld    dword ptr [esp + 0x34]
        fmul    dword ptr [g_0077dff8]
        fstp    dword ptr [esp + 0x34]
L_d16b:
        fld    dword ptr [esp + 0x38]
        fcomp    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        je    L_d18a
        fld    dword ptr [esp + 0x38]
        fmul    dword ptr [g_0077dff4]
        fstp    dword ptr [esp + 0x38]
L_d18a:
        lea    ecx, [esp + 0x34]
        push    ecx
        lea    ecx, [esp + 0x2c]
        call    FUN_0040c5d0
        lea    edx, [esp + 0x28]
        push    edx
        lea    ecx, [esp + 0x50]
        call    FUN_0040c410
        mov    eax, dword ptr [esp + 0x18]
        mov    esi, dword ptr [eax + 0x54]
        mov    ebp, dword ptr [ebp + 0x50]
        cmp    ebp, esi
        mov    dword ptr [esp + 0x24], esi
        je    L_d47b
L_d1bc:
        mov    edi, dword ptr [ebp + 4]
        mov    ecx, edi
        call    FUN_005b7e50
        test    al, al
        je    L_d2b4
        push    1
        mov    ecx, edi
        call    FUN_005b7e60
        cmp    byte ptr [eax], 0
        je    L_d2b4
        mov    esi, dword ptr [ebp]
        push    0
        push    0
        push    eax
        mov    ecx, esi
        call    FUN_00560420
        mov    ecx, edi
        call    FUN_005b7e40
        sub    eax, 0
        je    L_d215
        dec    eax
        je    L_d20d
        dec    eax
        jne    L_d21f
        mov    ecx, dword ptr [esp + 0x1c]
        mov    dword ptr [esi + 0x104], ecx
        jmp    L_d21f
L_d20d:
        mov    dword ptr [esi + 0x104], ebx
        jmp    L_d21f
L_d215:
        mov    dword ptr [esi + 0x104], 0xffff0000
L_d21f:
        fld    dword ptr [esp + 0x44]
        push    ecx
        fadd    dword ptr [g_0076d5f0]
        fstp    dword ptr [esp]
        push    ecx
        fld    dword ptr [esp + 0x48]
        mov    ecx, esi
        fadd    dword ptr [g_0076d5f0]
        fstp    dword ptr [esp]
        call    FUN_005603e0
        fld    dword ptr [esp + 0x50]
        push    ecx
        fadd    dword ptr [esp + 0x48]
        fsub    dword ptr [g_0076d978]
        fstp    dword ptr [esp]
        push    ecx
        fld    dword ptr [esp + 0x54]
        mov    ecx, esi
        fadd    dword ptr [esp + 0x48]
        fsub    dword ptr [g_0076d978]
        fstp    dword ptr [esp]
        call    FUN_00560400
        mov    edx, dword ptr [esi]
        lea    eax, [esp + 0x20]
        push    eax
        lea    ecx, [esp + 0x2c]
        push    ecx
        mov    ecx, esi
        mov    byte ptr [esi + 0x110], 1
        call    dword ptr [edx + 0xc]
        mov    edx, dword ptr [esp + 0x20]
        mov    eax, dword ptr [esp + 0x14]
        mov    esi, dword ptr [esp + 0x24]
        mov    dword ptr [esp + 0x34], edx
        mov    dword ptr [esp + 0x38], 0
        fild    qword ptr [esp + 0x34]
        inc    eax
        mov    dword ptr [esp + 0x14], eax
        fadd    dword ptr [esp + 0x10]
        fadd    dword ptr [g_007704c4]
        fstp    dword ptr [esp + 0x10]
L_d2b4:
        add    ebp, 8
        cmp    ebp, esi
        jne    L_d1bc
        mov    eax, dword ptr [esp + 0x14]
        test    eax, eax
        je    L_d47b
        mov    esi, dword ptr [esp + 0x18]
        mov    eax, dword ptr [esp + 0x10]
        lea    ecx, [esp + 0x34]
        push    ecx
        lea    edi, [esi + 0x20]
        mov    ecx, edi
        mov    dword ptr [esp + 0x38], 0x439e0000
        mov    dword ptr [esp + 0x3c], eax
        mov    dword ptr [esp + 0x40], 0x3f666666
        call    FUN_0040c410
        push    edi
        lea    ecx, [esp + 0x38]
        call    FUN_0040c410
        fld    dword ptr [esp + 0x34]
        fcomp    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        je    L_d31f
        fld    dword ptr [esp + 0x34]
        fmul    dword ptr [g_0077dff8]
        fstp    dword ptr [esp + 0x34]
L_d31f:
        fld    dword ptr [esp + 0x38]
        fcomp    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        je    L_d33e
        fld    dword ptr [esp + 0x38]
        fmul    dword ptr [g_0077dff4]
        fstp    dword ptr [esp + 0x38]
L_d33e:
        lea    edx, [esp + 0x34]
        push    edx
        lea    ecx, [esp + 0x2c]
        call    FUN_0040c5d0
        lea    eax, [esp + 0x28]
        push    eax
        lea    ecx, [esp + 0x50]
        call    FUN_0040c410
        push    0xc8050f05
        sub    esp, 0xc
        lea    edx, [esp + 0x5c]
        mov    ecx, esp
        push    edx
        call    FUN_00551870
        lea    eax, [esp + 0x50]
        push    eax
        call    FUN_00626420
        fld    dword ptr [esp + 0x64]
        mov    ecx, dword ptr [esp + 0x30]
        fadd    dword ptr [esp + 0x58]
        push    ecx
        call    FUN_0075db4a
        fld    dword ptr [esp + 0x64]
        fadd    dword ptr [esp + 0x58]
        push    eax
        call    FUN_0075db4a
        fld    dword ptr [esp + 0x60]
        push    eax
        call    FUN_0075db4a
        fld    dword ptr [esp + 0x60]
        push    eax
        call    FUN_0075db4a
        push    eax
        call    FUN_0055e820
        fld    dword ptr [esp + 0x6c]
        mov    edi, dword ptr [esi + 0x50]
        mov    ebx, dword ptr [esi + 0x54]
        fadd    dword ptr [g_007704c4]
        add    esp, 0x28
        cmp    edi, ebx
        fstp    dword ptr [esp + 0x10]
        fld    dword ptr [esp + 0x40]
        fadd    dword ptr [g_007704c4]
        fstp    dword ptr [esp + 0x40]
        fld    dword ptr [esp + 0x4c]
        fsub    dword ptr [g_007880f8]
        fstp    dword ptr [esp + 0x4c]
        je    L_d47b
L_d3ed:
        mov    esi, dword ptr [edi + 4]
        mov    ecx, esi
        call    FUN_005b7e50
        test    al, al
        je    L_d470
        push    1
        mov    ecx, esi
        call    FUN_005b7e60
        cmp    byte ptr [eax], 0
        je    L_d470
        mov    esi, dword ptr [edi]
        mov    edx, dword ptr [esi]
        lea    eax, [esp + 0x24]
        push    eax
        lea    ecx, [esp + 0x2c]
        push    ecx
        mov    ecx, esi
        call    dword ptr [edx + 0xc]
        fld    dword ptr [esp + 0x40]
        mov    edx, dword ptr [esp + 0x10]
        fadd    dword ptr [g_0076d5f0]
        mov    ebp, dword ptr [esi]
        push    1
        push    0x3f666666
        push    edx
        push    ecx
        lea    ecx, [esp + 0x68]
        fstp    dword ptr [esp]
        call    FUN_00587830
        sub    esp, 0xc
        mov    ecx, esp
        push    eax
        call    FUN_00551870
        mov    ecx, esi
        call    dword ptr [ebp + 0x14]
        mov    eax, dword ptr [esp + 0x24]
        add    eax, 3
        mov    dword ptr [esp + 0x34], eax
        mov    dword ptr [esp + 0x38], 0
        fild    qword ptr [esp + 0x34]
        fadd    dword ptr [esp + 0x10]
        fstp    dword ptr [esp + 0x10]
L_d470:
        add    edi, 8
        cmp    edi, ebx
        jne    L_d3ed
L_d47b:
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x54
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
        sub    esp, 0x60
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0x78]
        mov    eax, dword ptr [edi + 0x14]
        mov    ebx, dword ptr [edi + 0x10]
        mov    ecx, dword ptr [edi + 8]
        sub    eax, ebx
        shl    eax, 3
        cmp    ecx, -0x14
        mov    dword ptr [esp + 0x40], eax
        je    L_d4ca
        lea    eax, [eax + ecx - 8]
        mov    dword ptr [esp + 0x40], eax
L_d4ca:
        mov    esi, dword ptr [esp + 0x74]
        mov    edx, dword ptr [esi + 0x78]
        lea    ecx, [esi + 0x78]
        call    dword ptr [edx + 4]
        mov    edx, dword ptr [esi + 0x40c]
        mov    dword ptr [esp + 0x34], eax
        mov    eax, dword ptr [esi + 0x410]
        sub    eax, edx
        sar    eax, 2
        je    L_d4f8
        mov    ecx, edx
        mov    ebx, dword ptr [ecx]
        mov    dword ptr [esp + 0x78], ebx
        jmp    L_d504
L_d4f8:
        mov    dword ptr [esp + 0x78], 0
        mov    ebx, dword ptr [esp + 0x78]
L_d504:
        mov    edx, dword ptr [ebx + 0x78]
        lea    ecx, [ebx + 0x78]
        call    dword ptr [edx + 4]
        mov    ecx, dword ptr [g_007b8ce8]
        mov    edx, dword ptr [g_007b8cf0]
        mov    ebp, eax
        mov    eax, dword ptr [g_007b8cec]
        mov    dword ptr [esp + 0x5c], eax
        mov    eax, dword ptr [g_007b8d88]
        mov    dword ptr [esp + 0x58], ecx
        mov    ecx, dword ptr [g_007b8d8c]
        mov    dword ptr [esp + 0x60], edx
        mov    edx, dword ptr [g_007b8d90]
        mov    dword ptr [esp + 0x4c], eax
        mov    dword ptr [esp + 0x50], ecx
        mov    dword ptr [esp + 0x54], edx
        lea    eax, [esp + 0x1c]
        push    eax
        lea    ecx, [esp + 0x24]
        push    ecx
        mov    ecx, dword ptr [g_007dab44]
        lea    edx, [esp + 0x2c]
        push    edx
        mov    edx, dword ptr [ecx]
        xor    edx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [edx + 0x1c]
        lea    eax, [esp + 0x34]
        push    eax
        xor    ecx, 0x85739531
        mov    dword ptr [esp + 0x3c], ebp
        call    FUN_004e27f0
        push    1
        lea    eax, [esp + 0x14]
        push    eax
        mov    ecx, edi
        mov    dword ptr [esp + 0x18], 0
        call    FUN_0041eb40
        mov    ecx, dword ptr [esi + 0xe0]
        mov    edx, dword ptr [ecx + 0x14]
        mov    ecx, dword ptr [esp + 0x10]
        xor    eax, eax
        cmp    edx, 1
        setne    al
        test    ecx, ecx
        mov    dword ptr [esp + 0x38], eax
        je    L_d5ca
        test    eax, eax
        jne    L_d5c2
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 0xc4]
        mov    eax, dword ptr [esp + 0x38]
L_d5c2:
        mov    ecx, dword ptr [esp + 0x10]
        test    ecx, ecx
        jne    L_d5d8
L_d5ca:
        test    eax, eax
        je    L_d5d8
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [eax + 0xc8]
L_d5d8:
        push    1
        push    0xa
        push    0
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        push    0x3f8147ae
        push    0xbf8147ae
        lea    ecx, [esp + 0x24]
        push    ecx
        mov    ecx, edi
        call    FUN_0041edd0
        push    1
        push    0xb
        push    0
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        push    0x3f8147ae
        push    0xbf8147ae
        lea    edx, [esp + 0x20]
        push    edx
        mov    ecx, edi
        call    FUN_0041edd0
        fld    dword ptr [esp + 0x18]
        fabs    
        fcomp    dword ptr [g_0077d060]
        fnstsw  ax
        test    ah, 0x41
        je    L_d63d
        mov    dword ptr [esp + 0x18], 0
L_d63d:
        fld    dword ptr [esp + 0x14]
        fabs    
        fcomp    dword ptr [g_0077d060]
        fnstsw  ax
        test    ah, 0x41
        je    L_d658
        mov    dword ptr [esp + 0x14], 0
L_d658:
        mov    ecx, dword ptr [esp + 0x14]
        mov    eax, dword ptr [esp + 0x18]
        push    2
        lea    edx, [esp + 0x34]
        mov    dword ptr [esi + 0x42c], ecx
        push    edx
        mov    ecx, edi
        mov    dword ptr [esi + 0x430], eax
        mov    dword ptr [esp + 0x38], 0
        call    FUN_0041eb40
        mov    eax, dword ptr [esp + 0x30]
        sub    eax, 0
        je    L_da51
        dec    eax
        je    L_d890
        dec    eax
        jne    L_dc38
        mov    ecx, dword ptr [g_007b8d8c]
        mov    eax, dword ptr [g_007b8d88]
        mov    edx, dword ptr [g_007b8d90]
        lea    ebp, [esi + 0x5ac]
        push    3
        mov    dword ptr [esp + 0x6c], ecx
        push    ebp
        mov    ecx, edi
        mov    dword ptr [esp + 0x6c], eax
        mov    dword ptr [esp + 0x74], edx
        mov    dword ptr [ebp], 0
        call    FUN_0041eb40
        mov    eax, dword ptr [esp + 0x10]
        test    eax, eax
        je    L_d756
        mov    eax, dword ptr [esi + 0xe0]
        cmp    dword ptr [eax + 0x14], 8
        je    L_d756
        fld    dword ptr [esi + 0x608]
        fcomp    dword ptr [g_0076d5f0]
        fnstsw  ax
        test    ah, 0x41
        jne    L_d756
        mov    eax, dword ptr [ebp]
        dec    eax
        cmp    eax, 3
        ja    L_d74f
        jmp    dword ptr [eax*4 + 0x69ddd0]
        mov    ecx, dword ptr [esi + 0x2f4]
        mov    edx, dword ptr [ecx]
        push    0
        push    0
        push    0x1f
        call    dword ptr [edx + 8]
        jmp    L_d74f
        mov    ecx, dword ptr [esi + 0x2f4]
        mov    eax, dword ptr [ecx]
        push    0
        push    0
        push    0x21
        jmp    L_d74c
        mov    ecx, dword ptr [esi + 0x2f4]
        mov    edx, dword ptr [ecx]
        push    0
        push    0
        push    0x20
        call    dword ptr [edx + 8]
        jmp    L_d74f
        mov    ecx, dword ptr [esi + 0x2f4]
        mov    eax, dword ptr [ecx]
        push    0
        push    0
        push    0x1e
L_d74c:
        call    dword ptr [eax + 8]
L_d74f:
        mov    ecx, esi
        call    FUN_0058adf0
L_d756:
        mov    ecx, dword ptr [ebp]
        push    1
        push    0
        push    0
        mov    dword ptr [esi + 0x5b0], ecx
        mov    dword ptr [ebp], 0
        call    FUN_0067f7b0
        mov    edx, dword ptr [esp + 0x28]
        add    esp, 0xc
        push    eax
        mov    eax, dword ptr [esp + 0x24]
        push    edx
        push    eax
        lea    ecx, [esp + 0x58]
        push    ecx
        mov    ecx, edi
        call    FUN_0041edd0
        push    1
        push    1
        push    0
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        push    0x447b4000
        push    0xc4faa000
        lea    edx, [esp + 0x5c]
        push    edx
        mov    ecx, edi
        call    FUN_0041edd0
        push    1
        push    2
        push    0
        call    FUN_0067f7b0
        mov    ecx, dword ptr [esp + 0x34]
        add    esp, 0xc
        push    eax
        mov    eax, dword ptr [esp + 0x28]
        push    eax
        push    ecx
        lea    edx, [esp + 0x60]
        push    edx
        mov    ecx, edi
        call    FUN_0041edd0
        push    1
        push    3
        push    0
        call    FUN_0067f7b0
        fld    dword ptr [g_00799a20]
        add    esp, 0xc
        fchs    
        push    eax
        mov    eax, dword ptr [g_00799a20]
        push    eax
        push    ecx
        lea    ecx, [esp + 0x64]
        fstp    dword ptr [esp]
        push    ecx
        mov    ecx, edi
        call    FUN_0041edd0
        push    1
        push    6
        push    0
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        mov    eax, dword ptr [esp + 0x38]
        fld    dword ptr [eax + 0x2bc]
        mov    edx, dword ptr [eax + 0x2c4]
        fmul    dword ptr [g_0077de9c]
        push    ecx
        lea    eax, [esp + 0x74]
        mov    ecx, edi
        fstp    dword ptr [esp]
        push    edx
        push    eax
        call    FUN_0041edd0
        mov    ecx, dword ptr [esp + 0x94]
        mov    edx, dword ptr [esp + 0x84]
        mov    ebp, dword ptr [esi]
        push    ecx
        push    edx
        push    0
        sub    esp, 0xc
        lea    eax, [esp + 0x7c]
        mov    ecx, esp
        push    eax
        call    FUN_00551870
        sub    esp, 0xc
        lea    edx, [esp + 0x7c]
        mov    ecx, esp
        push    edx
        call    FUN_00584520
        sub    esp, 0xc
        lea    eax, [esp + 0x7c]
        mov    ecx, esp
        push    eax
        call    FUN_00551870
        mov    ecx, esi
        call    dword ptr [ebp + 0x160]
        mov    ecx, dword ptr [esp + 0x6c]
        mov    dword ptr [esi + 0x440], ecx
        jmp    L_dc34
L_d890:
        mov    eax, dword ptr [esp + 0x10]
        test    eax, eax
        je    L_d8ad
        mov    ecx, dword ptr [esi + 0xe0]
        cmp    dword ptr [ecx + 0x14], 9
        je    L_d8ad
        mov    edx, dword ptr [ecx]
        push    0
        push    9
        call    dword ptr [edx + 4]
L_d8ad:
        push    1
        push    0
        push    0
        mov    dword ptr [esi + 0x5ac], 0
        call    FUN_0067f7b0
        mov    ecx, dword ptr [esp + 0x2c]
        add    esp, 0xc
        push    eax
        mov    eax, dword ptr [esp + 0x20]
        push    eax
        push    ecx
        lea    edx, [esp + 0x58]
        push    edx
        mov    ecx, edi
        call    FUN_0041edd0
        push    1
        push    1
        push    0
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        push    0x447b4000
        push    0xc4faa000
        lea    eax, [esp + 0x5c]
        push    eax
        mov    ecx, edi
        call    FUN_0041edd0
        push    1
        push    2
        push    0
        call    FUN_0067f7b0
        mov    ecx, dword ptr [esp + 0x30]
        mov    edx, dword ptr [esp + 0x34]
        add    esp, 0xc
        push    eax
        push    ecx
        push    edx
        lea    eax, [esp + 0x60]
        push    eax
        mov    ecx, edi
        call    FUN_0041edd0
        push    1
        push    3
        push    0
        call    FUN_0067f7b0
        fld    dword ptr [g_00799a20]
        mov    ecx, dword ptr [g_00799a20]
        fchs    
        add    esp, 0xc
        push    eax
        push    ecx
        push    ecx
        lea    edx, [esp + 0x64]
        fstp    dword ptr [esp]
        push    edx
        mov    ecx, edi
        call    FUN_0041edd0
        push    1
        push    7
        push    0
        lea    ebp, [esi + 0x168]
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        push    0x43960000
        push    0xc3960000
        push    ebp
        mov    ecx, edi
        call    FUN_0041edd0
        push    1
        push    8
        push    0
        lea    ebx, [esi + 0x16c]
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        push    0x43960000
        push    0xc3960000
        push    ebx
        mov    ecx, edi
        call    FUN_0041edd0
        push    1
        push    9
        push    0
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        push    0x43960000
        push    0xc3960000
        lea    eax, [esi + 0x170]
        push    eax
        mov    ecx, edi
        call    FUN_0041edd0
        mov    eax, dword ptr [esi + 0xd8]
        add    eax, 0x80
        push    eax
        push    ebp
        lea    ecx, [esi + 0x198]
        call    FUN_0041c680
        fld    dword ptr [ebp]
        mov    ecx, dword ptr [esp + 0x94]
        mov    edx, dword ptr [esp + 0x84]
        fstp    dword ptr [esp + 0x64]
        fld    dword ptr [ebx]
        mov    ebx, dword ptr [esi]
        push    ecx
        fstp    dword ptr [esp + 0x6c]
        fld    dword ptr [esi + 0x170]
        push    edx
        fst    dword ptr [esp + 0x40]
        mov    eax, dword ptr [esp + 0x40]
        push    eax
        fstp    dword ptr [esp + 0x78]
        sub    esp, 0xc
        lea    edx, [esp + 0x7c]
        mov    ecx, esp
        push    edx
        call    FUN_00551870
        sub    esp, 0xc
        lea    eax, [esp + 0x7c]
        mov    ecx, esp
        push    eax
        call    FUN_00584520
        sub    esp, 0xc
        lea    edx, [esp + 0x7c]
        mov    ecx, esp
        push    edx
        call    FUN_00551870
        mov    ecx, esi
        call    dword ptr [ebx + 0x160]
        mov    ebx, dword ptr [esp + 0x78]
        jmp    L_dc34
L_da51:
        mov    eax, dword ptr [esp + 0x10]
        test    eax, eax
        je    L_da99
        mov    ecx, dword ptr [esi + 0xe0]
        cmp    dword ptr [ecx + 0x14], 0xb
        je    L_da6e
        mov    eax, dword ptr [ecx]
        push    0
        push    0xb
        call    dword ptr [eax + 4]
L_da6e:
        mov    ecx, dword ptr [esi + 0x2f4]
        mov    al, byte ptr [ecx + 0x1d]
        test    al, al
        jne    L_da99
        mov    eax, dword ptr [ecx + 0x14]
        cmp    eax, 0x1e
        jl    L_da99
        cmp    eax, 0x21
        jg    L_da99
        mov    edx, dword ptr [ecx]
        xor    eax, eax
        mov    al, byte ptr [g_007f1f7d]
        push    0
        push    eax
        push    0xa
        call    dword ptr [edx + 8]
L_da99:
        mov    ecx, dword ptr [g_007b8d88]
        mov    edx, dword ptr [g_007b8d8c]
        mov    eax, dword ptr [g_007b8d90]
        push    1
        push    0
        push    0
        mov    dword ptr [esp + 0x70], ecx
        mov    dword ptr [esp + 0x74], edx
        mov    dword ptr [esp + 0x78], eax
        mov    dword ptr [esi + 0x5ac], 0
        call    FUN_0067f7b0
        mov    ecx, dword ptr [esp + 0x28]
        mov    edx, dword ptr [esp + 0x2c]
        add    esp, 0xc
        push    eax
        push    ecx
        push    edx
        lea    eax, [esp + 0x58]
        push    eax
        mov    ecx, edi
        call    FUN_0041edd0
        push    1
        push    1
        push    0
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        push    0x447b4000
        push    0xc4faa000
        lea    ecx, [esp + 0x5c]
        push    ecx
        mov    ecx, edi
        call    FUN_0041edd0
        push    1
        push    2
        push    0
        call    FUN_0067f7b0
        mov    edx, dword ptr [esp + 0x30]
        add    esp, 0xc
        push    eax
        mov    eax, dword ptr [esp + 0x2c]
        push    edx
        push    eax
        lea    ecx, [esp + 0x60]
        push    ecx
        mov    ecx, edi
        call    FUN_0041edd0
        push    1
        push    3
        push    0
        call    FUN_0067f7b0
        fld    dword ptr [g_00799a20]
        mov    edx, dword ptr [g_00799a20]
        fchs    
        add    esp, 0xc
        push    eax
        push    edx
        push    ecx
        lea    eax, [esp + 0x64]
        fstp    dword ptr [esp]
        push    eax
        mov    ecx, edi
        call    FUN_0041edd0
        push    1
        push    6
        push    0
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        mov    eax, dword ptr [esp + 0x38]
        fld    dword ptr [eax + 0x2bc]
        push    ecx
        fmul    dword ptr [g_0077de9c]
        mov    ecx, dword ptr [eax + 0x2c4]
        lea    edx, [esp + 0x74]
        fstp    dword ptr [esp]
        push    ecx
        push    edx
        mov    ecx, edi
        call    FUN_0041edd0
        mov    byte ptr [esp + 0x38], 0
        lea    eax, [esp + 0x38]
        push    eax
        mov    ecx, edi
        mov    byte ptr [esp + 0x7c], 0
        call    FUN_0041ea60
        lea    ecx, [esp + 0x78]
        push    ecx
        mov    ecx, edi
        call    FUN_0041ea60
        mov    eax, dword ptr [esp + 0x38]
        mov    edx, dword ptr [esi]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0xb0]
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 0xc0]
        cmp    al, byte ptr [esp + 0x78]
        je    L_dbde
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [eax + 0xb4]
L_dbde:
        mov    ecx, dword ptr [esp + 0x94]
        mov    edx, dword ptr [esp + 0x84]
        mov    eax, dword ptr [esp + 0x14]
        mov    ebp, dword ptr [esi]
        push    ecx
        push    edx
        push    eax
        sub    esp, 0xc
        lea    edx, [esp + 0x7c]
        mov    ecx, esp
        push    edx
        call    FUN_00551870
        sub    esp, 0xc
        lea    eax, [esp + 0x7c]
        mov    ecx, esp
        push    eax
        call    FUN_00584520
        sub    esp, 0xc
        lea    edx, [esp + 0x7c]
        mov    ecx, esp
        push    edx
        call    FUN_00551870
        mov    ecx, esi
        call    dword ptr [ebp + 0x160]
        mov    eax, dword ptr [esp + 0x6c]
        mov    dword ptr [esi + 0x440], eax
L_dc34:
        mov    ebp, dword ptr [esp + 0x2c]
L_dc38:
        lea    ecx, [esp + 0x74]
        push    ecx
        mov    ecx, edi
        mov    byte ptr [esp + 0x78], 1
        call    FUN_0041ea60
        mov    eax, dword ptr [esi + 0x3d4]
        test    eax, eax
        mov    dword ptr [esp + 0x84], eax
        je    L_dc82
        mov    al, byte ptr [esp + 0x74]
        test    al, al
        mov    ecx, esi
        je    L_dc6e
        call    FUN_005faf20
        push    eax
        push    0
        jmp    L_dc76
L_dc6e:
        call    FUN_005faf20
        push    eax
        push    1
L_dc76:
        mov    ecx, dword ptr [esp + 0x8c]
        call    FUN_005b9d60
L_dc82:
        push    1
        push    4
        push    0
        call    FUN_0067f7b0
        fld    dword ptr [ebp + 0x640]
        mov    edx, dword ptr [ebp + 0x640]
        fchs    
        add    esp, 0xc
        push    eax
        push    edx
        push    ecx
        lea    eax, [esp + 0x50]
        fstp    dword ptr [esp]
        push    eax
        mov    ecx, edi
        call    FUN_0041edd0
        push    1
        push    5
        xor    esi, esi
        push    esi
        call    FUN_0067f7b0
        fld    dword ptr [ebp + 0x63c]
        mov    ecx, dword ptr [ebp + 0x63c]
        fchs    
        add    esp, 0xc
        push    eax
        push    ecx
        push    ecx
        lea    edx, [esp + 0x54]
        fstp    dword ptr [esp]
        push    edx
        mov    ecx, edi
        call    FUN_0041edd0
        mov    eax, dword ptr [ebx + 0x198]
        mov    ecx, dword ptr [ebx + 0x19c]
        mov    dword ptr [ebx + 0x1a4], ecx
        mov    ecx, dword ptr [esp + 0x94]
        mov    dword ptr [ebx + 0x1a0], eax
        mov    edx, dword ptr [esp + 0x44]
        mov    dword ptr [ebx + 0x1ac], edx
        mov    eax, dword ptr [esp + 0x48]
        mov    dword ptr [ebx + 0x1b0], ecx
        push    2
        lea    edx, [esp + 0x40]
        mov    dword ptr [ebx + 0x1a8], eax
        mov    dword ptr [ebx + 0x1b4], esi
        push    edx
        mov    ecx, edi
        mov    dword ptr [esp + 0x44], esi
        call    FUN_0041eb40
        mov    eax, dword ptr [esp + 0x3c]
        cmp    eax, 1
        jne    L_dd42
        mov    ecx, ebx
        call    FUN_005eb380
        jmp    L_dd63
L_dd42:
        cmp    eax, 2
        jne    L_dd50
        mov    ecx, ebx
        call    FUN_005eb260
        jmp    L_dd63
L_dd50:
        cmp    eax, 3
        mov    ecx, ebx
        jne    L_dd5e
        call    FUN_005eb070
        jmp    L_dd63
L_dd5e:
        call    FUN_005eb100
L_dd63:
        mov    eax, dword ptr [edi + 0x14]
        mov    esi, dword ptr [edi + 0x10]
        mov    edi, dword ptr [edi + 8]
        sub    eax, esi
        shl    eax, 3
        cmp    edi, -0x14
        je    L_dd7a
        lea    eax, [eax + edi - 8]
L_dd7a:
        mov    ecx, dword ptr [esp + 0x40]
        mov    ebp, dword ptr [g_007dab40]
        sub    eax, ecx
        mov    ecx, eax
        mov    eax, dword ptr [g_007dab44]
        mov    edx, dword ptr [eax]
        xor    edx, ebp
        mov    eax, dword ptr [edx + 0x14]
        mov    edx, dword ptr [esp + 0x88]
        xor    eax, 0x85739531
        mov    eax, dword ptr [eax + 0x1814]
        mov    esi, dword ptr [eax + edx*4 + 0x6c74]
        add    eax, 0x6c6c
        add    esi, ecx
        mov    dword ptr [eax + edx*4 + 8], esi
        mov    edx, dword ptr [eax + 0xc00]
        pop    edi
        pop    esi
        add    edx, ecx
        pop    ebp
        mov    dword ptr [eax + 0xc00], edx
        pop    ebx
        add    esp, 0x60
        ret    
        mov    edi, edi
        // jump-table data @ 0x0069DDD0 (0 relocated pointers)
    }
}
