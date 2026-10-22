/*
 * FUN_0063fdfd (extent 0x63fdfd-0x641000) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076d040;
extern float  g_0076d064;
extern float  g_0076d070;
extern float  g_0076d5f0;
extern float  g_0076e2bc;
extern float  g_0077de8c;
extern float  g_007880f8;
extern float  g_007890ac;
extern float  g_007899ec;
extern float  g_00792458;
extern float  g_007924a8;
extern float  g_007924ac;
extern float  g_007924b0;
extern float  g_007924b4;
extern float  g_007924b8;
extern int    g_007f2054;
extern int    g_007f268c;
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_00551870(void);
extern void __cdecl FUN_0055e5c0(void);
extern void __cdecl FUN_0055e820(void);
extern void __cdecl FUN_0055eb90(void);
extern void __cdecl FUN_0055eed0(void);
extern void __cdecl FUN_0055f5b0(void);
extern void __cdecl FUN_005603e0(void);
extern void __cdecl FUN_00560400(void);
extern void __cdecl FUN_005619f0(void);
extern void __cdecl FUN_00561a30(void);
extern void __cdecl FUN_00561df0(void);
extern void __cdecl FUN_00587830(void);
extern void __cdecl FUN_00641000(void);
extern void __cdecl FUN_00641050(void);
extern void __cdecl FUN_0075db4a(void);

__declspec(naked) void FUN_0063fdfd(void)
{
    __asm {
        nop    
        nop    
        nop    
        sub    esp, 0xe0
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    0x96002000
        push    0x1e5
        mov    edi, ecx
        mov    al, byte ptr [edi + 0x50]
        test    al, al
        push    0x8d
        push    0x1d3
        mov    dword ptr [esp + 0xd0], 0x292
        mov    dword ptr [esp + 0xd4], 0x29e
        mov    dword ptr [esp + 0xd8], 0x2ab
        mov    dword ptr [esp + 0xdc], 0x2b8
        mov    dword ptr [esp + 0xe0], 0x2c5
        mov    dword ptr [esp + 0xe4], 0x2d2
        mov    dword ptr [esp + 0xe8], 0x2df
        mov    dword ptr [esp + 0xec], 0x2ec
        mov    dword ptr [esp + 0xf0], 0x2fb
        mov    dword ptr [esp + 0xf4], 0x308
        mov    dword ptr [esp + 0xf8], 0x315
        push    0
        je    L_ff00
        call    FUN_0055e5c0
        push    0x96002000
        push    0x24a
        push    0x8d
        push    0x1e8
        push    0
        call    FUN_0055e5c0
        push    0xff007e00
        push    0x1e5
        push    0x8d
        push    0x1d3
        push    0
        call    FUN_0055e820
        push    0xff007e00
        push    0x24a
        push    0x8d
        push    0x1e8
        push    0
        call    FUN_0055e820
        add    esp, 0x50
        jmp    L_ffa4
L_ff00:
        call    FUN_0055e5c0
        push    0x96002000
        push    0x257
        push    0x8d
        push    0x1e8
        push    0x49
        call    FUN_0055e5c0
        push    0x96002000
        push    0x257
        push    0x46
        push    0x238
        push    0
        call    FUN_0055e5c0
        push    0xff007e00
        push    0x1e5
        push    0x8d
        push    0x1d3
        push    0
        call    FUN_0055e820
        add    esp, 0x50
        push    0xff007e00
        push    0x235
        push    0x46
        push    0x1e8
        push    0
        call    FUN_0055e820
        push    0xff007e00
        push    0x257
        push    0x8d
        push    0x1e8
        push    0x49
        call    FUN_0055e820
        push    0xff007e00
        push    0x257
        push    0x46
        push    0x238
        push    0
        call    FUN_0055e820
        add    esp, 0x3c
L_ffa4:
        lea    ecx, [edi + 0x54]
        call    FUN_0041fd80
        test    eax, eax
        je    L_0f89
        mov    al, byte ptr [edi + 0x134]
        test    al, al
        je    L_0e7f
        mov    al, byte ptr [edi + 0x50]
        test    al, al
        jne    L_01cb
        lea    eax, [esp + 0x10]
        push    eax
        lea    ecx, [esp + 0x24]
        lea    ebx, [edi + 0x38]
        push    ecx
        mov    esi, 0x23a
        mov    ecx, ebx
        mov    dword ptr [esp + 0x20], esi
        mov    dword ptr [esp + 0x24], 3
        mov    dword ptr [esp + 0x18], 0x64
        call    FUN_00561df0
        mov    edx, dword ptr [eax]
        lea    eax, [esp + 0x2c]
        push    eax
        mov    ecx, ebx
        mov    dword ptr [esp + 0x2c], edx
        call    FUN_00641000
        mov    ecx, eax
        mov    eax, dword ptr [esp + 0x28]
        cmp    eax, dword ptr [ecx]
        je    L_001f
        mov    edx, dword ptr [esp + 0x10]
        cmp    edx, dword ptr [eax + 0x10]
        jge    L_005a
L_001f:
        lea    eax, [esp + 0x14]
        push    eax
        lea    ecx, [esp + 0x14]
        push    ecx
        lea    ecx, [esp + 0x4c]
        mov    dword ptr [esp + 0x1c], 0
        call    FUN_00641050
        push    eax
        push    ecx
        lea    edx, [esp + 0x30]
        mov    ecx, esp
        push    edx
        call    FUN_00561a30
        lea    eax, [esp + 0x38]
        push    eax
        mov    ecx, ebx
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x28], eax
L_005a:
        mov    eax, dword ptr [eax + 0x14]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 4]
        fmul    dword ptr [eax + 0x14]
        fld    dword ptr [eax + 0x10]
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [eax + 0x18]
        mov    eax, dword ptr [edi + 0x5c]
        mov    dword ptr [esp + 0x90], 0
        fstp    dword ptr [esp + 0x54]
        mov    ecx, dword ptr [esp + 0x54]
        mov    dword ptr [esp + 0x8c], ecx
        mov    ecx, dword ptr [edi + 0x60]
        fstp    dword ptr [esp + 0x88]
        cmp    eax, ecx
        mov    dword ptr [esp + 0x10], eax
        je    L_01cb
L_00a2:
        cmp    dword ptr [eax], -1
        je    L_01b9
        mov    edx, dword ptr [esp + 0x10]
        mov    eax, dword ptr [edx + 4]
        mov    ecx, dword ptr [edi + eax*4 + 0x78]
        mov    edx, dword ptr [edi + ecx*4 + 0xd8]
        mov    eax, dword ptr [esp + 0x1c]
        push    edx
        lea    ebp, [esi + 6]
        push    ebp
        lea    ecx, [eax + 0x1e]
        push    ecx
        push    esi
        push    eax
        call    FUN_0055e5c0
        fild    dword ptr [esp + 0x30]
        mov    edx, dword ptr [esp + 0x24]
        mov    eax, dword ptr [edx]
        fadd    dword ptr [g_0076d064]
        add    eax, 0x64
        add    esp, 0x14
        mov    dword ptr [esp + 0x28], eax
        fstp    dword ptr [esp + 0x34]
        lea    eax, [esp + 0x28]
        fild    dword ptr [esp + 0x18]
        push    eax
        lea    ecx, [esp + 0x24]
        push    ecx
        fadd    dword ptr [g_0076d064]
        mov    ecx, ebx
        mov    dword ptr [esp + 0x44], 0x3f666666
        fstp    dword ptr [esp + 0x40]
        call    FUN_00561df0
        mov    edx, dword ptr [eax]
        lea    eax, [esp + 0x2c]
        push    eax
        mov    ecx, ebx
        mov    dword ptr [esp + 0x28], edx
        call    FUN_00641000
        mov    ecx, eax
        mov    eax, dword ptr [esp + 0x24]
        cmp    eax, dword ptr [ecx]
        je    L_013b
        mov    edx, dword ptr [esp + 0x28]
        cmp    edx, dword ptr [eax + 0x10]
        jge    L_0176
L_013b:
        lea    eax, [esp + 0x14]
        push    eax
        lea    ecx, [esp + 0x2c]
        push    ecx
        lea    ecx, [esp + 0x4c]
        mov    dword ptr [esp + 0x1c], 0
        call    FUN_00641050
        push    eax
        push    ecx
        lea    edx, [esp + 0x2c]
        mov    ecx, esp
        push    edx
        call    FUN_00561a30
        lea    eax, [esp + 0x38]
        push    eax
        mov    ecx, ebx
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x24], eax
L_0176:
        push    1
        push    0
        push    0xff000000
        lea    ecx, [esp + 0x94]
        push    ecx
        mov    ecx, dword ptr [eax + 0x14]
        lea    edx, [esp + 0x44]
        push    edx
        call    FUN_0055f5b0
        mov    esi, ebp
        lea    eax, [esi + 6]
        cmp    eax, 0x256
        mov    dword ptr [esp + 0x18], esi
        jl    L_01b5
        mov    esi, 0x23a
        mov    dword ptr [esp + 0x18], esi
        mov    dword ptr [esp + 0x1c], 0x21
L_01b5:
        mov    eax, dword ptr [esp + 0x10]
L_01b9:
        mov    ecx, dword ptr [edi + 0x60]
        add    eax, 8
        cmp    eax, ecx
        mov    dword ptr [esp + 0x10], eax
        jne    L_00a2
L_01cb:
        cmp    dword ptr [edi + 0x74], 0xbf800000
        jne    L_06f8
        lea    esi, [edi + 0x54]
        mov    ecx, esi
        call    FUN_0041fd80
        mov    ecx, dword ptr [g_007f2054]
        push    ecx
        mov    ecx, dword ptr [eax + 4]
        call    FUN_00415230
        test    al, al
        mov    ecx, esi
        je    L_0536
        call    FUN_0041fd80
        lea    edx, [eax + 0x30c]
        lea    ecx, [edi + 0x104]
        mov    esi, 0xb
L_0211:
        mov    eax, dword ptr [edx + 0x208]
        cmp    dword ptr [ecx - 0x8c], eax
        je    L_0225
        mov    dword ptr [ecx], 1
L_0225:
        mov    dword ptr [ecx - 0x8c], eax
        fld    dword ptr [ecx - 0x5c]
        fcomp    dword ptr [edx]
        fnstsw  ax
        test    ah, 0x40
        jne    L_023d
        mov    dword ptr [ecx], 1
L_023d:
        mov    eax, dword ptr [edx]
        mov    dword ptr [ecx - 0x5c], eax
        add    ecx, 4
        add    edx, 4
        dec    esi
        jne    L_0211
        lea    ecx, [edi + 0x78]
        xor    ebp, ebp
        mov    dword ptr [esp + 0x10], ecx
L_0254:
        cmp    ebp, 1
        je    L_0267
        cmp    ebp, 3
        je    L_0267
        cmp    ebp, 6
        jne    L_051c
L_0267:
        mov    edx, dword ptr [esp + 0x10]
        mov    eax, dword ptr [edx]
        cmp    eax, 5
        jg    L_051c
        test    eax, eax
        jl    L_051c
        cmp    eax, 4
        jne    L_0291
        mov    al, byte ptr [edi + 0x100]
        test    al, al
        je    L_051c
L_0291:
        lea    eax, [esp + 0x18]
        push    eax
        lea    ecx, [esp + 0xf0]
        lea    esi, [edi + 0x38]
        push    ecx
        lea    ebx, [ebp + 0xa]
        mov    ecx, esi
        mov    dword ptr [esp + 0x20], ebx
        call    FUN_00561df0
        mov    edx, dword ptr [eax]
        lea    eax, [esp + 0xa8]
        push    eax
        mov    ecx, esi
        mov    dword ptr [esp + 0x20], edx
        call    FUN_00641000
        mov    ecx, eax
        mov    edx, dword ptr [ecx]
        mov    eax, dword ptr [esp + 0x1c]
        cmp    eax, edx
        mov    ecx, dword ptr [esp + 0x18]
        je    L_02d9
        cmp    ecx, dword ptr [eax + 0x10]
        jge    L_030c
L_02d9:
        lea    edx, [esp + 0x44]
        push    edx
        push    ecx
        mov    dword ptr [esp + 0x4c], ecx
        lea    eax, [esp + 0x24]
        mov    ecx, esp
        push    eax
        mov    dword ptr [esp + 0x54], 0
        call    FUN_00561a30
        lea    ecx, [esp + 0xa0]
        push    ecx
        mov    ecx, esi
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x1c], eax
L_030c:
        mov    eax, dword ptr [eax + 0x14]
        fld    dword ptr [eax + 0xc]
        lea    ecx, [esp + 0xb4]
        fsub    dword ptr [eax + 4]
        fmul    dword ptr [eax + 0x14]
        fld    dword ptr [eax + 0x10]
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [eax + 0x18]
        lea    eax, [esp + 0x18]
        push    eax
        fstp    dword ptr [esp + 0x64]
        mov    edx, dword ptr [esp + 0x64]
        push    ecx
        mov    ecx, esi
        fstp    dword ptr [esp + 0x3c]
        mov    dword ptr [esp + 0x40], edx
        mov    dword ptr [esp + 0x44], 0
        mov    dword ptr [esp + 0x20], ebx
        call    FUN_00561df0
        mov    edx, dword ptr [eax]
        lea    eax, [esp + 0x94]
        push    eax
        mov    ecx, esi
        mov    dword ptr [esp + 0x28], edx
        call    FUN_00641000
        mov    ecx, eax
        mov    eax, dword ptr [esp + 0x24]
        cmp    eax, dword ptr [ecx]
        je    L_0379
        mov    edx, dword ptr [esp + 0x18]
        cmp    edx, dword ptr [eax + 0x10]
        jge    L_03ba
L_0379:
        lea    eax, [esp + 0x70]
        push    eax
        lea    ecx, [esp + 0x1c]
        push    ecx
        lea    ecx, [esp + 0xa4]
        mov    dword ptr [esp + 0x78], 0
        call    FUN_00641050
        push    eax
        push    ecx
        lea    edx, [esp + 0x2c]
        mov    ecx, esp
        push    edx
        call    FUN_00561a30
        lea    eax, [esp + 0xb4]
        push    eax
        mov    ecx, esi
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x24], eax
L_03ba:
        mov    ecx, dword ptr [eax + 0x14]
        fld    dword ptr [ecx + 4]
        lea    edx, [esp + 0x18]
        fmul    dword ptr [g_0076e2bc]
        push    edx
        lea    eax, [esp + 0x78]
        push    eax
        fstp    dword ptr [esp + 0x34]
        mov    ecx, esi
        mov    dword ptr [esp + 0x20], ebx
        call    FUN_00561df0
        mov    ecx, dword ptr [eax]
        lea    edx, [esp + 0x78]
        mov    dword ptr [esp + 0x28], ecx
        push    edx
        mov    ecx, esi
        call    FUN_00641000
        mov    ecx, eax
        mov    eax, dword ptr [esp + 0x28]
        cmp    eax, dword ptr [ecx]
        je    L_0404
        mov    edx, dword ptr [esp + 0x18]
        cmp    edx, dword ptr [eax + 0x10]
        jge    L_0445
L_0404:
        lea    eax, [esp + 0x30]
        push    eax
        lea    ecx, [esp + 0x1c]
        push    ecx
        lea    ecx, [esp + 0xc0]
        mov    dword ptr [esp + 0x38], 0
        call    FUN_00641050
        push    eax
        push    ecx
        lea    edx, [esp + 0x30]
        mov    ecx, esp
        push    edx
        call    FUN_00561a30
        lea    eax, [esp + 0x84]
        push    eax
        mov    ecx, esi
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x28], eax
L_0445:
        test    ebp, ebp
        mov    ecx, dword ptr [eax + 0x14]
        fld    dword ptr [ecx + 8]
        fmul    dword ptr [g_0076e2bc]
        je    L_045a
        cmp    ebp, 1
        jne    L_0460
L_045a:
        fadd    dword ptr [g_0076d064]
L_0460:
        fld    dword ptr [esp + 0x2c]
        lea    edx, [esp + 0x18]
        fadd    dword ptr [g_007924b8]
        push    edx
        lea    eax, [esp + 0x70]
        push    eax
        fstp    dword ptr [esp + 0x58]
        mov    ecx, esi
        fadd    dword ptr [g_007924b4]
        mov    dword ptr [esp + 0x20], ebx
        mov    dword ptr [esp + 0x60], 0x3f666666
        fstp    dword ptr [esp + 0x5c]
        call    FUN_00561df0
        mov    ecx, dword ptr [eax]
        lea    edx, [esp + 0x40]
        mov    dword ptr [esp + 0x14], ecx
        push    edx
        mov    ecx, esi
        call    FUN_00641000
        mov    ecx, eax
        mov    eax, dword ptr [esp + 0x14]
        cmp    eax, dword ptr [ecx]
        je    L_04ba
        mov    edx, dword ptr [esp + 0x18]
        cmp    edx, dword ptr [eax + 0x10]
        jge    L_04f8
L_04ba:
        lea    eax, [esp + 0x20]
        push    eax
        lea    ecx, [esp + 0x1c]
        push    ecx
        lea    ecx, [esp + 0x88]
        mov    dword ptr [esp + 0x28], 0
        call    FUN_00641050
        push    eax
        push    ecx
        lea    edx, [esp + 0x1c]
        mov    ecx, esp
        push    edx
        call    FUN_00561a30
        lea    eax, [esp + 0x54]
        push    eax
        mov    ecx, esi
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x14], eax
L_04f8:
        mov    ecx, dword ptr [esp + 0x10]
        mov    edx, dword ptr [ecx]
        mov    ecx, dword ptr [edi + edx*4 + 0xd8]
        push    0
        push    0
        push    ecx
        lea    edx, [esp + 0x40]
        push    edx
        lea    ecx, [esp + 0x60]
        push    ecx
        mov    ecx, dword ptr [eax + 0x14]
        call    FUN_0055f5b0
L_051c:
        mov    ecx, dword ptr [esp + 0x10]
        inc    ebp
        add    ecx, 4
        cmp    ebp, 0xb
        mov    dword ptr [esp + 0x10], ecx
        jl    L_0254
        jmp    L_0e7f
L_0536:
        call    FUN_0041fd80
        mov    ecx, dword ptr [g_007f268c]
        push    ecx
        mov    ecx, dword ptr [eax + 4]
        call    FUN_00415230
        test    al, al
        je    L_0e7f
        mov    ecx, esi
        call    FUN_0041fd80
        fld    dword ptr [eax + 0x304]
        fdiv    dword ptr [eax + 0x308]
        fcom    dword ptr [edi + 0xa8]
        fnstsw  ax
        test    ah, 0x40
        jne    L_057c
        mov    dword ptr [edi + 0x104], 1
L_057c:
        lea    edx, [esp + 0x14]
        fstp    dword ptr [edi + 0xa8]
        push    edx
        lea    eax, [esp + 0x50]
        lea    esi, [edi + 0x38]
        push    eax
        mov    ecx, esi
        mov    dword ptr [esp + 0x1c], 0x14
        call    FUN_00561df0
        mov    ecx, dword ptr [eax]
        lea    edx, [esp + 0x40]
        mov    dword ptr [esp + 0x1c], ecx
        push    edx
        mov    ecx, esi
        call    FUN_00641000
        mov    ecx, eax
        mov    eax, dword ptr [esp + 0x1c]
        cmp    eax, dword ptr [ecx]
        je    L_05c3
        mov    edx, dword ptr [esp + 0x14]
        cmp    edx, dword ptr [eax + 0x10]
        jge    L_0601
L_05c3:
        lea    eax, [esp + 0x20]
        push    eax
        lea    ecx, [esp + 0x18]
        push    ecx
        lea    ecx, [esp + 0x88]
        mov    dword ptr [esp + 0x28], 0
        call    FUN_00641050
        push    eax
        push    ecx
        lea    edx, [esp + 0x24]
        mov    ecx, esp
        push    edx
        call    FUN_00561a30
        lea    eax, [esp + 0x74]
        push    eax
        mov    ecx, esi
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x1c], eax
L_0601:
        mov    eax, dword ptr [eax + 0x14]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 4]
        fmul    dword ptr [eax + 0x14]
        fld    dword ptr [eax + 0x10]
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [eax + 0x18]
        cmp    dword ptr [edi + 0xa8], 0xbf800000
        fstp    dword ptr [esp + 0x60]
        mov    ecx, dword ptr [esp + 0x60]
        mov    dword ptr [esp + 0x8c], ecx
        fstp    dword ptr [esp + 0x88]
        mov    dword ptr [esp + 0x90], 0
        je    L_0e7f
        fld    dword ptr [edi + 0xa8]
        fmul    dword ptr [g_007924b0]
        fcom    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        je    L_066a
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [g_0076c5b0]
        jmp    L_067f
L_066a:
        fcom    dword ptr [g_007924b0]
        fnstsw  ax
        test    ah, 0x41
        jne    L_067f
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [g_007924b0]
L_067f:
        fld    dword ptr [edi + 0xa8]
        fmul    dword ptr [g_007880f8]
        fadd    dword ptr [g_0076d070]
        call    FUN_0075db4a
        mov    ecx, 6
        sub    ecx, eax
        jns    L_06a3
        xor    ecx, ecx
        jmp    L_06ad
L_06a3:
        cmp    ecx, 4
        jle    L_06ad
        mov    ecx, 4
L_06ad:
        fld    dword ptr [g_007924ac]
        mov    edx, dword ptr [edi + ecx*4 + 0xd8]
        fsub st(0), st(1)
        push    edx
        call    FUN_0075db4a
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        push    eax
        push    0x88
        push    0x252
        push    0x4e
        call    FUN_0055e5c0
        mov    eax, dword ptr [edi + 0x34]
        push    eax
        push    0x1ed
        push    0x88
        push    0x252
        push    0x4e
        call    FUN_0055eb90
        add    esp, 0x28
        jmp    L_0e7f
L_06f8:
        lea    ecx, [edi + 0x54]
        call    FUN_0041fd80
        xor    ecx, ecx
        mov    edx, eax
        mov    dword ptr [esp + 0x10], ecx
        mov    ebp, 1
L_070d:
        mov    eax, dword ptr [edx + ecx*4 + 0x944]
        cmp    dword ptr [edi + ecx*4 + 0x78], eax
        je    L_0721
        mov    dword ptr [edi + ecx*4 + 0x104], ebp
L_0721:
        mov    dword ptr [edi + ecx*4 + 0x78], eax
        fld    dword ptr [edi + ecx*4 + 0xa8]
        fcomp    dword ptr [edx + ecx*4 + 0x30c]
        fnstsw  ax
        test    ah, 0x40
        jne    L_0741
        mov    dword ptr [edi + ecx*4 + 0x104], ebp
L_0741:
        mov    eax, dword ptr [edx + ecx*4 + 0x30c]
        mov    dword ptr [edi + ecx*4 + 0xa8], eax
        inc    ecx
        cmp    ecx, 0xb
        mov    dword ptr [esp + 0x10], ecx
        jl    L_070d
        mov    al, byte ptr [edi + 0x50]
        test    al, al
        je    L_0bbc
        lea    ecx, [esp + 0x14]
        push    ecx
        lea    edx, [esp + 0x50]
        lea    ebp, [edi + 0x38]
        mov    esi, 0x14
        push    edx
        mov    ecx, ebp
        mov    dword ptr [esp + 0x1c], esi
        call    FUN_00561df0
        mov    eax, dword ptr [eax]
        cmp    eax, dword ptr [ebp]
        mov    dword ptr [esp + 0x1c], eax
        je    L_0795
        mov    ecx, dword ptr [esp + 0x14]
        cmp    ecx, dword ptr [eax + 0x10]
        jge    L_07d3
L_0795:
        lea    edx, [esp + 0x20]
        push    edx
        lea    eax, [esp + 0x18]
        push    eax
        lea    ecx, [esp + 0x88]
        mov    dword ptr [esp + 0x28], 0
        call    FUN_00641050
        push    eax
        push    ecx
        lea    edx, [esp + 0x24]
        mov    ecx, esp
        push    edx
        call    FUN_00561a30
        lea    eax, [esp + 0x48]
        push    eax
        mov    ecx, ebp
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x1c], eax
L_07d3:
        mov    eax, dword ptr [eax + 0x14]
        fld    dword ptr [eax + 0xc]
        lea    edx, [esp + 0x14]
        fsub    dword ptr [eax + 4]
        push    edx
        fmul    dword ptr [eax + 0x14]
        fld    dword ptr [eax + 0x10]
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [eax + 0x18]
        lea    eax, [esp + 0x50]
        push    eax
        fstp    dword ptr [esp + 0x68]
        mov    ecx, dword ptr [esp + 0x68]
        mov    dword ptr [esp + 0x40], ecx
        mov    ecx, ebp
        fstp    dword ptr [esp + 0x3c]
        mov    dword ptr [esp + 0x44], 0
        mov    dword ptr [esp + 0x1c], esi
        call    FUN_00561df0
        mov    eax, dword ptr [eax]
        cmp    eax, dword ptr [ebp]
        mov    dword ptr [esp + 0x1c], eax
        je    L_0829
        mov    ecx, dword ptr [esp + 0x14]
        cmp    ecx, dword ptr [eax + 0x10]
        jge    L_0867
L_0829:
        lea    edx, [esp + 0x20]
        push    edx
        lea    eax, [esp + 0x18]
        push    eax
        lea    ecx, [esp + 0x88]
        mov    dword ptr [esp + 0x28], 0
        call    FUN_00641050
        push    eax
        push    ecx
        lea    edx, [esp + 0x24]
        mov    ecx, esp
        push    edx
        call    FUN_00561a30
        lea    eax, [esp + 0x48]
        push    eax
        mov    ecx, ebp
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x1c], eax
L_0867:
        mov    eax, dword ptr [eax + 0x14]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 4]
        fmul    dword ptr [eax + 0x14]
        fld    dword ptr [eax + 0x10]
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [eax + 0x18]
        xor    eax, eax
        mov    dword ptr [esp + 0x3c], 0
        fstp    dword ptr [esp + 0x60]
        mov    ecx, dword ptr [esp + 0x60]
        mov    dword ptr [esp + 0x38], ecx
        fstp    dword ptr [esp + 0x34]
        mov    dword ptr [esp + 0x10], eax
L_089a:
        mov    edx, dword ptr [eax*4 + 0x78f210]
        lea    ecx, [edi + edx*4 + 0xa8]
        cmp    dword ptr [ecx], 0xbf800000
        je    L_0b1d
        cmp    eax, 8
        mov    ebx, eax
        jne    L_08c2
        mov    ebx, 9
        jmp    L_08cc
L_08c2:
        cmp    eax, 9
        jne    L_08cc
        mov    ebx, 8
L_08cc:
        fld    dword ptr [ecx]
        mov    esi, dword ptr [esp + ebx*4 + 0xc0]
        fmul    dword ptr [g_007899ec]
        mov    dword ptr [esp + 0x20], esi
        lea    ecx, [esp + 0x14]
        fstp    dword ptr [esp + 0x24]
        push    ecx
        fild    dword ptr [esp + 0x24]
        lea    edx, [esp + 0x50]
        lea    eax, [ebx + 0x14]
        push    edx
        fadd    dword ptr [g_0076d064]
        mov    ecx, ebp
        mov    dword ptr [esp + 0x1c], eax
        mov    dword ptr [esp + 0x5c], 0x44138000
        fsub    dword ptr [g_007924a8]
        mov    dword ptr [esp + 0x60], 0x3f666666
        fst    dword ptr [esp + 0x28]
        fstp    dword ptr [esp + 0x58]
        call    FUN_00561df0
        mov    eax, dword ptr [eax]
        lea    ecx, [esp + 0x40]
        push    ecx
        mov    ecx, ebp
        mov    dword ptr [esp + 0x20], eax
        call    FUN_00641000
        mov    edx, eax
        mov    eax, dword ptr [esp + 0x1c]
        cmp    eax, dword ptr [edx]
        je    L_0948
        mov    ecx, dword ptr [esp + 0x14]
        cmp    ecx, dword ptr [eax + 0x10]
        jge    L_0986
L_0948:
        lea    edx, [esp + 0x2c]
        push    edx
        lea    eax, [esp + 0x18]
        push    eax
        lea    ecx, [esp + 0x88]
        mov    dword ptr [esp + 0x34], 0
        call    FUN_00641050
        push    eax
        push    ecx
        lea    edx, [esp + 0x24]
        mov    ecx, esp
        push    edx
        call    FUN_00561a30
        lea    eax, [esp + 0x74]
        push    eax
        mov    ecx, ebp
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x1c], eax
L_0986:
        push    1
        push    0
        push    -1
        lea    ecx, [esp + 0x40]
        push    ecx
        mov    ecx, dword ptr [eax + 0x14]
        lea    edx, [esp + 0x60]
        push    edx
        call    FUN_0055f5b0
        mov    eax, dword ptr [esp + 0x10]
        mov    ecx, dword ptr [eax*4 + 0x78f210]
        test    byte ptr [edi + ecx*4 + 0x104], 1
        jne    L_0a71
        mov    edx, dword ptr [esp + 0x20]
        lea    eax, [esp + 0x14]
        push    eax
        lea    ecx, [esp + 0x80]
        push    ecx
        add    ebx, 0x28
        mov    ecx, ebp
        mov    dword ptr [esp + 0x1c], ebx
        mov    dword ptr [esp + 0xa4], edx
        mov    dword ptr [esp + 0xa8], 0x44134000
        mov    dword ptr [esp + 0xac], 0x3f666666
        call    FUN_00561df0
        mov    edx, dword ptr [eax]
        lea    eax, [esp + 0x78]
        push    eax
        mov    ecx, ebp
        mov    dword ptr [esp + 0x1c], edx
        call    FUN_00641000
        mov    ecx, eax
        mov    eax, dword ptr [esp + 0x18]
        cmp    eax, dword ptr [ecx]
        je    L_0a18
        mov    edx, dword ptr [esp + 0x14]
        cmp    edx, dword ptr [eax + 0x10]
        jge    L_0a56
L_0a18:
        lea    eax, [esp + 0x30]
        push    eax
        lea    ecx, [esp + 0x18]
        push    ecx
        lea    ecx, [esp + 0xc0]
        mov    dword ptr [esp + 0x38], 0
        call    FUN_00641050
        push    eax
        push    ecx
        lea    edx, [esp + 0x20]
        mov    ecx, esp
        push    edx
        call    FUN_00561a30
        lea    eax, [esp + 0x7c]
        push    eax
        mov    ecx, ebp
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x18], eax
L_0a56:
        push    0
        push    0
        push    -1
        lea    ecx, [esp + 0x40]
        push    ecx
        mov    ecx, dword ptr [eax + 0x14]
        lea    edx, [esp + 0xac]
        push    edx
        call    FUN_0055f5b0
L_0a71:
        fld    dword ptr [esp + 0x24]
        fcomp    dword ptr [g_0076d5f0]
        fnstsw  ax
        test    ah, 0x41
        jne    L_0af5
        mov    eax, dword ptr [esp + 0x10]
        mov    eax, dword ptr [eax*4 + 0x78f210]
        test    byte ptr [edi + eax*4 + 0x104], 1
        je    L_0abe
        fld    dword ptr [g_00792458]
        push    -1
        fsub    dword ptr [esp + 0x28]
        call    FUN_0075db4a
        push    eax
        lea    ecx, [esi - 0x289]
        push    ecx
        push    0x246
        lea    edx, [esi - 0x28f]
        push    edx
        jmp    L_0aed
L_0abe:
        mov    eax, dword ptr [edi + eax*4 + 0x78]
        fld    dword ptr [g_00792458]
        mov    ecx, dword ptr [edi + eax*4 + 0xd8]
        fsub    dword ptr [esp + 0x24]
        push    ecx
        call    FUN_0075db4a
        push    eax
        lea    edx, [esi - 0x289]
        push    edx
        push    0x246
        lea    eax, [esi - 0x28f]
        push    eax
L_0aed:
        call    FUN_0055e5c0
        add    esp, 0x14
L_0af5:
        mov    ecx, dword ptr [edi + 0x34]
        push    ecx
        push    0x1ec
        lea    edx, [esi - 0x289]
        push    edx
        push    0x246
        add    esi, 0xfffffd71
        push    esi
        call    FUN_0055eb90
        mov    eax, dword ptr [esp + 0x24]
        add    esp, 0x14
L_0b1d:
        inc    eax
        cmp    eax, 0xb
        mov    dword ptr [esp + 0x10], eax
        jl    L_089a
        push    0xff007e00
        push    0x24d
        push    0x8e
        push    0x24d
        push    0
        call    FUN_0055eed0
        push    0xff007e00
        push    0x257
        push    0x8e
        push    0x257
        push    0
        call    FUN_0055eed0
        add    esp, 0x28
        lea    esi, [esp + 0xc0]
        mov    ebx, 0xb
L_0b70:
        mov    eax, dword ptr [esi]
        push    0xff007e00
        add    eax, 0xfffffd6e
        push    0x257
        push    eax
        push    0x24d
        push    eax
        call    FUN_0055eed0
        add    esp, 0x14
        add    esi, 4
        dec    ebx
        jne    L_0b70
        push    0xff007e00
        push    0x257
        push    0x8e
        push    0x24d
        push    0x8e
        call    FUN_0055eed0
        add    esp, 0x14
        jmp    L_0e7f
L_0bbc:
        xor    ecx, ecx
        mov    dword ptr [esp + 0x10], ecx
        jmp    L_0bc9
L_0bc4:
        mov    ebp, 1
L_0bc9:
        xor    ebx, ebx
        cmp    ecx, 7
        je    L_0e71
        cmp    ecx, 9
        je    L_0e71
        cmp    ecx, 0xa
        je    L_0e71
        mov    eax, dword ptr [edi + ecx*4 + 0x78]
        cmp    eax, 5
        jg    L_0e71
        cmp    eax, ebx
        jl    L_0e71
        cmp    eax, 4
        jne    L_0c0e
        mov    al, byte ptr [edi + 0x100]
        test    al, al
        je    L_0e71
L_0c0e:
        lea    eax, [esp + 0x10]
        push    eax
        lea    ecx, [esp + 0x50]
        lea    esi, [edi + 0x38]
        push    ecx
        mov    ecx, esi
        call    FUN_00561df0
        mov    eax, dword ptr [eax]
        cmp    eax, dword ptr [esi]
        mov    dword ptr [esp + 0x24], eax
        je    L_0c35
        mov    edx, dword ptr [esp + 0x10]
        cmp    edx, dword ptr [eax + 0x10]
        jge    L_0c6f
L_0c35:
        lea    eax, [esp + 0x20]
        push    eax
        lea    ecx, [esp + 0x14]
        push    ecx
        lea    ecx, [esp + 0x88]
        mov    dword ptr [esp + 0x28], ebx
        call    FUN_00641050
        push    eax
        push    ecx
        lea    edx, [esp + 0x2c]
        mov    ecx, esp
        push    edx
        call    FUN_00561a30
        lea    eax, [esp + 0x48]
        push    eax
        mov    ecx, esi
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x24], eax
L_0c6f:
        mov    eax, dword ptr [eax + 0x14]
        fld    dword ptr [eax + 0xc]
        lea    edx, [esp + 0x10]
        fsub    dword ptr [eax + 4]
        push    edx
        fmul    dword ptr [eax + 0x14]
        fld    dword ptr [eax + 0x10]
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [eax + 0x18]
        lea    eax, [esp + 0x70]
        push    eax
        fstp    dword ptr [esp + 0x68]
        mov    ecx, dword ptr [esp + 0x68]
        mov    dword ptr [esp + 0x40], ecx
        mov    ecx, esi
        fstp    dword ptr [esp + 0x3c]
        mov    dword ptr [esp + 0x44], 0
        call    FUN_00561df0
        mov    ecx, dword ptr [eax]
        lea    edx, [esp + 0x7c]
        mov    dword ptr [esp + 0x14], ecx
        push    edx
        mov    ecx, esi
        call    FUN_00641000
        mov    ecx, eax
        mov    eax, dword ptr [esp + 0x14]
        cmp    eax, dword ptr [ecx]
        je    L_0cd2
        mov    edx, dword ptr [esp + 0x10]
        cmp    edx, dword ptr [eax + 0x10]
        jge    L_0d0f
L_0cd2:
        lea    eax, [esp + 0x2c]
        push    eax
        lea    ecx, [esp + 0x14]
        push    ecx
        lea    ecx, [esp + 0xc0]
        mov    dword ptr [esp + 0x34], ebx
        call    FUN_00641050
        push    eax
        push    ecx
        lea    edx, [esp + 0x1c]
        mov    ecx, esp
        push    edx
        call    FUN_00561a30
        lea    eax, [esp + 0x80]
        push    eax
        mov    ecx, esi
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x14], eax
L_0d0f:
        mov    ecx, dword ptr [eax + 0x14]
        fld    dword ptr [ecx + 4]
        lea    edx, [esp + 0x10]
        fmul    dword ptr [g_0076e2bc]
        push    edx
        lea    eax, [esp + 0x78]
        push    eax
        fstp    dword ptr [esp + 0x78]
        mov    ecx, esi
        call    FUN_00561df0
        mov    ecx, dword ptr [eax]
        lea    edx, [esp + 0xac]
        mov    dword ptr [esp + 0x1c], ecx
        push    edx
        mov    ecx, esi
        call    FUN_00641000
        mov    ecx, eax
        mov    eax, dword ptr [esp + 0x1c]
        cmp    eax, dword ptr [ecx]
        je    L_0d58
        mov    ecx, dword ptr [esp + 0x10]
        cmp    ecx, dword ptr [eax + 0x10]
        jge    L_0d99
L_0d58:
        lea    edx, [esp + 0x30]
        push    edx
        lea    eax, [esp + 0x14]
        push    eax
        lea    ecx, [esp + 0xa4]
        mov    dword ptr [esp + 0x38], ebx
        call    FUN_00641050
        push    eax
        push    ecx
        lea    edx, [esp + 0x24]
        mov    ecx, esp
        push    edx
        call    FUN_00561a30
        lea    eax, [esp + 0x9c]
        push    eax
        mov    ecx, esi
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    ecx, dword ptr [esp + 0x10]
        mov    dword ptr [esp + 0x1c], eax
L_0d99:
        cmp    ecx, ebx
        mov    edx, dword ptr [eax + 0x14]
        fld    dword ptr [edx + 8]
        fmul    dword ptr [g_0076e2bc]
        je    L_0dad
        cmp    ecx, ebp
        jne    L_0db3
L_0dad:
        fsub    dword ptr [g_0076d040]
L_0db3:
        fld    dword ptr [esp + 0x70]
        lea    eax, [esp + 0x10]
        fadd    dword ptr [g_007924b8]
        push    eax
        lea    ecx, [esp + 0xb8]
        push    ecx
        fstp    dword ptr [esp + 0x58]
        mov    ecx, esi
        fadd    dword ptr [g_007924b4]
        mov    dword ptr [esp + 0x60], 0x3f666666
        fstp    dword ptr [esp + 0x5c]
        call    FUN_00561df0
        mov    edx, dword ptr [eax]
        lea    eax, [esp + 0x98]
        push    eax
        mov    ecx, esi
        mov    dword ptr [esp + 0x1c], edx
        call    FUN_00641000
        mov    ecx, eax
        mov    eax, dword ptr [esp + 0x18]
        cmp    eax, dword ptr [ecx]
        je    L_0e0f
        mov    edx, dword ptr [esp + 0x10]
        cmp    edx, dword ptr [eax + 0x10]
        jge    L_0e49
L_0e0f:
        lea    eax, [esp + 0x28]
        push    eax
        lea    ecx, [esp + 0x14]
        push    ecx
        lea    ecx, [esp + 0x4c]
        mov    dword ptr [esp + 0x30], ebx
        call    FUN_00641050
        push    eax
        push    ecx
        lea    edx, [esp + 0x20]
        mov    ecx, esp
        push    edx
        call    FUN_00561a30
        lea    eax, [esp + 0xb0]
        push    eax
        mov    ecx, esi
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x18], eax
L_0e49:
        mov    ecx, dword ptr [esp + 0x10]
        mov    edx, dword ptr [edi + ecx*4 + 0x78]
        mov    ecx, dword ptr [edi + edx*4 + 0xd8]
        push    ebx
        push    ebx
        push    ecx
        lea    edx, [esp + 0x40]
        push    edx
        lea    ecx, [esp + 0x60]
        push    ecx
        mov    ecx, dword ptr [eax + 0x14]
        call    FUN_0055f5b0
        mov    ecx, dword ptr [esp + 0x10]
L_0e71:
        inc    ecx
        cmp    ecx, 0xb
        mov    dword ptr [esp + 0x10], ecx
        jl    L_0bc4
L_0e7f:
        mov    esi, dword ptr [edi + 0x68]
        push    0x43ea0000
        push    0x40000000
        mov    ecx, esi
        mov    dword ptr [esi + 0x104], 0xff49e749
        call    FUN_005603e0
        push    0x43f20000
        push    0x430c0000
        mov    ecx, esi
        call    FUN_00560400
        mov    edi, dword ptr [edi + 0x6c]
        push    0x43ea0000
        push    0x40000000
        mov    ecx, edi
        mov    dword ptr [edi + 0x104], 0xfff12121
        call    FUN_005603e0
        push    0x43f20000
        push    0x42480000
        mov    ecx, edi
        call    FUN_00560400
        mov    edx, dword ptr [esi]
        lea    eax, [esp + 0xb0]
        push    eax
        lea    ecx, [esp + 0x6c]
        push    ecx
        mov    ecx, esi
        call    dword ptr [edx + 0xc]
        mov    edx, dword ptr [esp + 0x68]
        mov    ebp, dword ptr [esi]
        push    1
        xor    ebx, ebx
        mov    dword ptr [esp + 0x48], edx
        mov    dword ptr [esp + 0x4c], ebx
        fild    qword ptr [esp + 0x48]
        push    0x3f666666
        push    0x43ea0000
        fsubr    dword ptr [g_007890ac]
        push    ecx
        lea    ecx, [esp + 0x6c]
        fstp    dword ptr [esp]
        call    FUN_00587830
        sub    esp, 0xc
        mov    ecx, esp
        push    eax
        call    FUN_00551870
        mov    ecx, esi
        call    dword ptr [ebp + 0x14]
        mov    eax, dword ptr [edi]
        lea    ecx, [esp + 0xb0]
        push    ecx
        lea    edx, [esp + 0x6c]
        push    edx
        mov    ecx, edi
        call    dword ptr [eax + 0xc]
        mov    eax, dword ptr [esp + 0x68]
        mov    esi, dword ptr [edi]
        push    1
        mov    dword ptr [esp + 0x48], eax
        mov    dword ptr [esp + 0x4c], ebx
        fild    qword ptr [esp + 0x48]
        push    0x3f666666
        push    0x43ea0000
        fsubr    dword ptr [g_0077de8c]
        push    ecx
        lea    ecx, [esp + 0x6c]
        fstp    dword ptr [esp]
        call    FUN_00587830
        sub    esp, 0xc
        mov    ecx, esp
        push    eax
        call    FUN_00551870
        mov    ecx, edi
        call    dword ptr [esi + 0x14]
L_0f89:
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0xe0
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
        sub    esp, 0xc
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0x18]
        push    edi
        lea    eax, [esp + 0xc]
        mov    esi, ecx
        push    eax
        call    FUN_00561df0
        mov    eax, dword ptr [eax]
        cmp    eax, dword ptr [esi]
        mov    dword ptr [esp + 0x18], eax
        je    L_0fc7
        mov    ecx, dword ptr [edi]
        cmp    ecx, dword ptr [eax + 0x10]
        jge    L_0ff5
L_0fc7:
        mov    edx, dword ptr [edi]
        lea    eax, [esp + 0xc]
        push    eax
        push    ecx
        mov    dword ptr [esp + 0x14], edx
        lea    edx, [esp + 0x20]
        mov    ecx, esp
        push    edx
        mov    dword ptr [esp + 0x1c], 0
        call    FUN_00561a30
        lea    eax, [esp + 0x10]
        push    eax
        mov    ecx, esi
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
L_0ff5:
        pop    edi
        add    eax, 0x14
        pop    esi
        add    esp, 0xc
        ret    4
    }
}
