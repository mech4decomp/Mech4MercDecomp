/*
 * FUN_0063e00d (extent 0x63e00d-0x63f006) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5ac;
extern float  g_0076d064;
extern float  g_0076d5f0;
extern float  g_0077de8c;
extern float  g_0077dff4;
extern float  g_0077dff8;
extern float  g_007899ec;
extern int    g_0078f238;
extern float  g_00792454;
extern float  g_00792458;
extern float  g_0079245c;
extern float  g_00792460;
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_0040c5d0(void);
extern void __cdecl FUN_0040ccd0(void);
extern void __cdecl FUN_00551870(void);
extern void __cdecl FUN_0055e5c0(void);
extern void __cdecl FUN_0055e820(void);
extern void __cdecl FUN_0055eb90(void);
extern void __cdecl FUN_0055eed0(void);
extern void __cdecl FUN_0055f5b0(void);
extern void __cdecl FUN_005619f0(void);
extern void __cdecl FUN_00561a30(void);
extern void __cdecl FUN_00561df0(void);
extern void __cdecl FUN_00587830(void);
extern void __cdecl FUN_00640fa0(void);
extern void __cdecl FUN_00641000(void);
extern void __cdecl FUN_00641010(void);
extern void __cdecl FUN_00641050(void);
extern void __cdecl FUN_0075db4a(void);

__declspec(naked) void FUN_0063e00d(void)
{
    __asm {
        nop    
        nop    
        nop    
        sub    esp, 0x140
        push    ebx
        push    ebp
        push    esi
        mov    esi, ecx
        push    edi
        lea    eax, [esi + 0x14]
        push    eax
        lea    ecx, [esp + 0x24]
        mov    dword ptr [esp + 0xa0], 0x292
        mov    dword ptr [esp + 0xa4], 0x29f
        mov    dword ptr [esp + 0xa8], 0x2ad
        mov    dword ptr [esp + 0xac], 0x2bb
        mov    dword ptr [esp + 0xb0], 0x2c9
        mov    dword ptr [esp + 0xb4], 0x2d7
        mov    dword ptr [esp + 0xb8], 0x2e5
        mov    dword ptr [esp + 0xbc], 0x2f3
        mov    dword ptr [esp + 0xc0], 0x311
        mov    dword ptr [esp + 0xc4], 0x303
        call    FUN_0040c410
        fld    dword ptr [esp + 0x20]
        fcomp    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        je    L_e0b6
        fld    dword ptr [esp + 0x20]
        fmul    dword ptr [g_0077dff8]
        fstp    dword ptr [esp + 0x20]
L_e0b6:
        fld    dword ptr [esp + 0x24]
        fcomp    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        je    L_e0d5
        fld    dword ptr [esp + 0x24]
        fmul    dword ptr [g_0077dff4]
        fstp    dword ptr [esp + 0x24]
L_e0d5:
        lea    eax, [esp + 0x20]
        push    eax
        lea    ecx, [esp + 0x70]
        call    FUN_0040c5d0
        mov    ecx, dword ptr [esp + 0x6c]
        mov    edx, dword ptr [esp + 0x70]
        mov    eax, dword ptr [esp + 0x74]
        push    0x96002000
        push    0x208
        push    0x31f
        push    0x1d2
        push    0x303
        mov    dword ptr [esp + 0x50], ecx
        mov    dword ptr [esp + 0x54], edx
        mov    dword ptr [esp + 0x58], eax
        call    FUN_0055e5c0
        push    0x96002000
        push    0x213
        push    0x31f
        push    0x20b
        push    0x303
        call    FUN_0055e5c0
        push    0x96002000
        push    0x249
        push    0x30f
        push    0x216
        push    0x303
        call    FUN_0055e5c0
        push    0x96002000
        push    0x249
        push    0x31f
        push    0x216
        push    0x312
        call    FUN_0055e5c0
        add    esp, 0x50
        push    0xff007e00
        push    0x208
        push    0x31f
        push    0x1d2
        push    0x303
        call    FUN_0055e820
        push    0xff007e00
        push    0x213
        push    0x31f
        push    0x20b
        push    0x303
        call    FUN_0055e820
        push    0xff007e00
        push    0x249
        push    0x30f
        push    0x216
        push    0x303
        call    FUN_0055e820
        push    0xff007e00
        push    0x249
        push    0x31f
        push    0x216
        push    0x312
        call    FUN_0055e820
        mov    al, byte ptr [esi + 0x114]
        add    esp, 0x50
        test    al, al
        push    0x96002000
        push    0x24a
        push    0x300
        je    L_e278
        push    0x1e8
        push    0x292
        call    FUN_0055e5c0
        push    0x96002000
        push    0x1e5
        push    0x300
        push    0x1d2
        push    0x292
        call    FUN_0055e5c0
        push    0xff007e00
        push    0x1e5
        push    0x300
        push    0x1e8
        push    0x292
        call    FUN_0055e820
        push    0xff007e00
        push    0x24a
        push    0x300
        push    0x1d2
        push    0x292
        call    FUN_0055e820
        add    esp, 0x50
        jmp    L_e2a8
L_e278:
        push    0x1d2
        push    0x292
        call    FUN_0055e5c0
        push    0xff007e00
        push    0x24a
        push    0x300
        push    0x1d2
        push    0x292
        call    FUN_0055e820
        add    esp, 0x28
L_e2a8:
        lea    ecx, [esp + 0x14]
        push    ecx
        lea    edx, [esp + 0x4c]
        lea    edi, [esi + 0x38]
        push    edx
        mov    ecx, edi
        mov    dword ptr [esp + 0x1c], 0x14
        call    FUN_00561df0
        mov    eax, dword ptr [eax]
        cmp    eax, dword ptr [edi]
        mov    dword ptr [esp + 0x1c], eax
        je    L_e2d7
        mov    ecx, dword ptr [esp + 0x14]
        cmp    ecx, dword ptr [eax + 0x10]
        jge    L_e312
L_e2d7:
        lea    edx, [esp + 0x18]
        push    edx
        lea    eax, [esp + 0x18]
        push    eax
        lea    ecx, [esp + 0x68]
        mov    dword ptr [esp + 0x20], 0
        call    FUN_00641050
        push    eax
        push    ecx
        lea    edx, [esp + 0x24]
        mov    ecx, esp
        push    edx
        call    FUN_00561a30
        lea    eax, [esp + 0x58]
        push    eax
        mov    ecx, edi
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x1c], eax
L_e312:
        mov    eax, dword ptr [eax + 0x14]
        fld    dword ptr [eax + 0xc]
        push    0xff007e00
        fsub    dword ptr [eax + 4]
        push    0x24d
        push    0x301
        fmul    dword ptr [eax + 0x14]
        fld    dword ptr [eax + 0x10]
        push    0x24d
        fsub    dword ptr [eax + 8]
        push    0x292
        fmul    dword ptr [eax + 0x18]
        mov    dword ptr [esp + 0x4c], 0
        fstp    dword ptr [esp + 0xa0]
        mov    ecx, dword ptr [esp + 0xa0]
        mov    dword ptr [esp + 0x48], ecx
        fstp    dword ptr [esp + 0x44]
        call    FUN_0055eed0
        push    0xff007e00
        push    0x256
        push    0x301
        push    0x256
        push    0x292
        call    FUN_0055eed0
        add    esp, 0x28
        lea    ebp, [esp + 0x9c]
        mov    ebx, 0xa
L_e390:
        mov    eax, dword ptr [ebp]
        push    0xff007e00
        push    0x256
        push    eax
        push    0x24d
        push    eax
        call    FUN_0055eed0
        add    esp, 0x14
        add    ebp, 4
        dec    ebx
        jne    L_e390
        push    0xff007e00
        push    0x256
        push    0x301
        push    0x24d
        push    0x301
        call    FUN_0055eed0
        push    0xff007e00
        push    0x24d
        push    0x31f
        push    0x24d
        push    0x303
        call    FUN_0055eed0
        push    0xff007e00
        push    0x256
        push    0x31f
        push    0x256
        push    0x303
        call    FUN_0055eed0
        push    0xff007e00
        push    0x256
        push    0x31f
        push    0x24d
        push    0x31f
        call    FUN_0055eed0
        xor    eax, eax
        add    esp, 0x50
        mov    dword ptr [esp + 0x10], eax
        xor    ebx, ebx
L_e435:
        cmp    eax, 8
        mov    ebp, eax
        jne    L_e443
        mov    ebp, 9
        jmp    L_e44d
L_e443:
        cmp    eax, 9
        jne    L_e44d
        mov    ebp, 8
L_e44d:
        fild    dword ptr [esp + eax*4 + 0x9c]
        lea    eax, [esp + 0x14]
        push    eax
        lea    ecx, [esp + 0x4c]
        fadd    dword ptr [g_0076d064]
        lea    edx, [ebp + 0x14]
        push    ecx
        mov    ecx, edi
        fstp    dword ptr [esp + 0x28]
        mov    dword ptr [esp + 0x1c], edx
        mov    dword ptr [esp + 0x2c], 0x44138000
        mov    dword ptr [esp + 0x30], 0x3f666666
        call    FUN_00561df0
        mov    eax, dword ptr [eax]
        cmp    eax, dword ptr [edi]
        mov    dword ptr [esp + 0x1c], eax
        je    L_e499
        mov    edx, dword ptr [esp + 0x14]
        cmp    edx, dword ptr [eax + 0x10]
        jge    L_e4d0
L_e499:
        lea    eax, [esp + 0x18]
        push    eax
        lea    ecx, [esp + 0x18]
        push    ecx
        lea    ecx, [esp + 0x68]
        mov    dword ptr [esp + 0x20], ebx
        call    FUN_00641050
        push    eax
        push    ecx
        lea    edx, [esp + 0x24]
        mov    ecx, esp
        push    edx
        call    FUN_00561a30
        lea    eax, [esp + 0x58]
        push    eax
        mov    ecx, edi
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x1c], eax
L_e4d0:
        push    1
        push    ebx
        push    -1
        lea    ecx, [esp + 0x3c]
        push    ecx
        mov    ecx, dword ptr [eax + 0x14]
        lea    edx, [esp + 0x30]
        push    edx
        call    FUN_0055f5b0
        mov    eax, dword ptr [esp + 0x10]
        mov    ecx, dword ptr [eax*4 + 0x78f210]
        test    byte ptr [esi + ecx*4 + 0xe0], 1
        jne    L_e5a3
        fild    dword ptr [esp + eax*4 + 0x9c]
        lea    edx, [esp + 0x14]
        push    edx
        lea    eax, [esp + 0x60]
        fadd    dword ptr [g_0076d064]
        add    ebp, 0x28
        push    eax
        mov    ecx, edi
        fstp    dword ptr [esp + 0x74]
        mov    dword ptr [esp + 0x1c], ebp
        mov    dword ptr [esp + 0x78], 0x44134000
        mov    dword ptr [esp + 0x7c], 0x3f666666
        call    FUN_00561df0
        mov    eax, dword ptr [eax]
        cmp    eax, dword ptr [edi]
        mov    dword ptr [esp + 0x2c], eax
        je    L_e54c
        mov    ecx, dword ptr [esp + 0x14]
        cmp    ecx, dword ptr [eax + 0x10]
        jge    L_e589
L_e54c:
        lea    edx, [esp + 0x4c]
        push    edx
        lea    eax, [esp + 0x18]
        push    eax
        lea    ecx, [esp + 0x9c]
        mov    dword ptr [esp + 0x54], ebx
        call    FUN_00641050
        push    eax
        push    ecx
        lea    edx, [esp + 0x34]
        mov    ecx, esp
        push    edx
        call    FUN_00561a30
        lea    eax, [esp + 0x84]
        push    eax
        mov    ecx, edi
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x2c], eax
L_e589:
        push    ebx
        push    ebx
        push    -1
        lea    ecx, [esp + 0x3c]
        push    ecx
        mov    ecx, dword ptr [eax + 0x14]
        lea    edx, [esp + 0x7c]
        push    edx
        call    FUN_0055f5b0
        mov    eax, dword ptr [esp + 0x10]
L_e5a3:
        inc    eax
        cmp    eax, 0xa
        mov    dword ptr [esp + 0x10], eax
        jl    L_e435
        mov    eax, dword ptr [g_0078f238]
        test    byte ptr [esi + eax*4 + 0xe0], 1
        mov    ebp, dword ptr [esi + 0xc8]
        jne    L_e5d2
        mov    dword ptr [ebp + 0x104], 0xff49e749
        jmp    L_e5dc
L_e5d2:
        mov    dword ptr [ebp + 0x104], 0xffffffff
L_e5dc:
        mov    edx, dword ptr [ebp]
        lea    eax, [esp + 0x78]
        push    eax
        lea    ecx, [esp + 0x84]
        push    ecx
        mov    ecx, ebp
        call    dword ptr [edx + 0xc]
        mov    ecx, dword ptr [esp + 0x78]
        mov    eax, dword ptr [esp + 0x80]
        shr    ecx, 1
        mov    dword ptr [esp + 0x54], ecx
        mov    dword ptr [esp + 0x58], ebx
        fild    qword ptr [esp + 0x54]
        push    1
        push    0x3f666666
        fsubr    dword ptr [g_00792460]
        push    ecx
        shr    eax, 1
        mov    dword ptr [esp + 0x60], eax
        fstp    dword ptr [esp]
        mov    dword ptr [esp + 0x64], ebx
        fild    qword ptr [esp + 0x60]
        mov    dword ptr [esp + 0x84], ecx
        mov    dword ptr [esp + 0x8c], eax
        mov    edx, dword ptr [ebp]
        fsubr    dword ptr [g_0079245c]
        push    ecx
        lea    ecx, [esp + 0x114]
        mov    dword ptr [esp + 0x28], edx
        fstp    dword ptr [esp]
        call    FUN_00587830
        sub    esp, 0xc
        mov    ecx, esp
        push    eax
        call    FUN_00551870
        mov    edx, dword ptr [esp + 0x28]
        mov    ecx, ebp
        call    dword ptr [edx + 0x14]
        lea    eax, [esi + 0x20]
        push    eax
        lea    ecx, [esp + 0x24]
        call    FUN_0040c410
        fld    dword ptr [esp + 0x20]
        fcom    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        je    L_e68c
        fmul    dword ptr [g_0077dff8]
L_e68c:
        fld    dword ptr [esp + 0x24]
        fcom    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        je    L_e6a3
        fmul    dword ptr [g_0077dff4]
L_e6a3:
        mov    al, byte ptr [esi + 0x114]
        fxch    st(1)
        mov    ecx, dword ptr [esp + 0x28]
        fstp    dword ptr [esp + 0x30]
        xor    ebx, ebx
        cmp    al, bl
        fstp    dword ptr [esp + 0x34]
        mov    dword ptr [esp + 0x38], ecx
        je    L_ea11
        lea    edx, [esp + 0x14]
        push    edx
        lea    eax, [esp + 0x4c]
        push    eax
        mov    ecx, edi
        mov    dword ptr [esp + 0x1c], 0x14
        call    FUN_00561df0
        mov    eax, dword ptr [eax]
        cmp    eax, dword ptr [edi]
        mov    dword ptr [esp + 0x2c], eax
        je    L_e6f1
        mov    ecx, dword ptr [esp + 0x14]
        cmp    ecx, dword ptr [eax + 0x10]
        jge    L_e728
L_e6f1:
        lea    edx, [esp + 0x18]
        push    edx
        lea    eax, [esp + 0x18]
        push    eax
        lea    ecx, [esp + 0x68]
        mov    dword ptr [esp + 0x20], ebx
        call    FUN_00641050
        push    eax
        push    ecx
        lea    edx, [esp + 0x34]
        mov    ecx, esp
        push    edx
        call    FUN_00561a30
        lea    eax, [esp + 0x58]
        push    eax
        mov    ecx, edi
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x2c], eax
L_e728:
        mov    eax, dword ptr [eax + 0x14]
        fld    dword ptr [eax + 0xc]
        mov    ebp, 0xbf800000
        fsub    dword ptr [eax + 4]
        mov    bl, 1
        fmul    dword ptr [eax + 0x14]
        fld    dword ptr [eax + 0x10]
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [eax + 0x18]
        xor    eax, eax
        mov    dword ptr [esp + 0x38], 0
        fstp    dword ptr [esp + 0x8c]
        mov    ecx, dword ptr [esp + 0x8c]
        mov    dword ptr [esp + 0x34], ecx
        fstp    dword ptr [esp + 0x30]
        mov    dword ptr [esp + 0x10], eax
L_e768:
        mov    ecx, dword ptr [eax*4 + 0x78f210]
        cmp    dword ptr [esi + ecx*4 + 0x80], ebp
        je    L_e9f8
        mov    edx, ecx
        sub    edx, 7
        je    L_e978
        sub    edx, 2
        je    L_e8d7
        dec    edx
        mov    edi, dword ptr [esp + eax*4 + 0x9c]
        je    L_e83a
        fld    dword ptr [esi + ecx*4 + 0x80]
        fmul    dword ptr [g_007899ec]
        fcom    dword ptr [g_0076d5f0]
        fnstsw  ax
        test    ah, 0x41
        jne    L_e81d
        test    byte ptr [esi + ecx*4 + 0xe0], bl
        je    L_e7ea
        fld    dword ptr [g_00792458]
        push    -1
        fsub st(0), st(1)
        call    FUN_0075db4a
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        push    eax
        lea    edx, [edi + 9]
        push    edx
        lea    eax, [edi + 3]
        push    0x246
        push    eax
        call    FUN_0055e5c0
        add    esp, 0x14
        jmp    L_e81f
L_e7ea:
        mov    ecx, dword ptr [esi + ecx*4 + 0x50]
        fld    dword ptr [g_00792458]
        mov    edx, dword ptr [esi + ecx*4 + 0xb0]
        fsub st(0), st(1)
        push    edx
        call    FUN_0075db4a
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        push    eax
        lea    eax, [edi + 9]
        push    eax
        lea    ecx, [edi + 3]
        push    0x246
        push    ecx
        call    FUN_0055e5c0
        add    esp, 0x14
        jmp    L_e81f
L_e81d:
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_e81f:
        mov    edx, dword ptr [esi + 0x34]
        push    edx
        push    0x1ec
        lea    eax, [edi + 9]
        push    eax
        push    0x246
        add    edi, 3
        push    edi
        jmp    L_e9ec
L_e83a:
        fld    dword ptr [esi + ecx*4 + 0x80]
        add    edi, 2
        fmul    dword ptr [g_0076c5ac]
        fcom    dword ptr [g_0076d5f0]
        fnstsw  ax
        test    ah, 0x41
        jne    L_e8ba
        test    byte ptr [esi + 0x108], bl
        je    L_e888
        fld    dword ptr [g_00792458]
        push    -1
        fsub st(0), st(1)
        call    FUN_0075db4a
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        push    eax
        lea    ecx, [edi + 7]
        push    ecx
        lea    edx, [edi + 3]
        push    0x246
        push    edx
        call    FUN_0055e5c0
        add    esp, 0x14
        jmp    L_e8bc
L_e888:
        mov    eax, dword ptr [esi + 0x78]
        fld    dword ptr [g_00792458]
        mov    ecx, dword ptr [esi + eax*4 + 0xb0]
        fsub st(0), st(1)
        push    ecx
        call    FUN_0075db4a
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        push    eax
        lea    edx, [edi + 7]
        push    edx
        lea    eax, [edi + 3]
        push    0x246
        push    eax
        call    FUN_0055e5c0
        add    esp, 0x14
        jmp    L_e8bc
L_e8ba:
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_e8bc:
        mov    ecx, dword ptr [esi + 0x34]
        push    ecx
        push    0x219
        lea    edx, [edi + 7]
        push    edx
        push    0x246
        add    edi, 3
        push    edi
        jmp    L_e9ec
L_e8d7:
        fld    dword ptr [esi + ecx*4 + 0x80]
        mov    edi, dword ptr [esp + eax*4 + 0x9c]
        fmul    dword ptr [g_0076c5ac]
        add    edi, 2
        fcom    dword ptr [g_0076d5f0]
        fnstsw  ax
        test    ah, 0x41
        jne    L_e95e
        test    byte ptr [esi + 0x104], bl
        je    L_e92c
        fld    dword ptr [g_00792458]
        push    -1
        fsub st(0), st(1)
        call    FUN_0075db4a
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        push    eax
        lea    eax, [edi + 7]
        push    eax
        lea    ecx, [edi + 3]
        push    0x246
        push    ecx
        call    FUN_0055e5c0
        add    esp, 0x14
        jmp    L_e960
L_e92c:
        mov    edx, dword ptr [esi + 0x74]
        fld    dword ptr [g_00792458]
        mov    eax, dword ptr [esi + edx*4 + 0xb0]
        fsub st(0), st(1)
        push    eax
        call    FUN_0075db4a
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        push    eax
        lea    ecx, [edi + 7]
        push    ecx
        lea    edx, [edi + 3]
        push    0x246
        push    edx
        call    FUN_0055e5c0
        add    esp, 0x14
        jmp    L_e960
L_e95e:
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_e960:
        mov    eax, dword ptr [esi + 0x34]
        push    eax
        push    0x219
        lea    ecx, [edi + 7]
        push    ecx
        push    0x246
        add    edi, 3
        push    edi
        jmp    L_e9ec
L_e978:
        fld    dword ptr [esi + ecx*4 + 0x80]
        fmul    dword ptr [g_0077de8c]
        fcom    dword ptr [g_0076d5f0]
        fnstsw  ax
        test    ah, 0x41
        jne    L_e9d2
        test    byte ptr [esi + 0xfc], bl
        je    L_e99e
        push    -1
        jmp    L_e9a9
L_e99e:
        mov    edx, dword ptr [esi + 0x6c]
        mov    eax, dword ptr [esi + edx*4 + 0xb0]
        push    eax
L_e9a9:
        fld    dword ptr [g_00792454]
        fsub st(0), st(1)
        call    FUN_0075db4a
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        push    eax
        push    0x317
        push    0x206
        push    0x30a
        call    FUN_0055e5c0
        add    esp, 0x14
        jmp    L_e9d4
L_e9d2:
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_e9d4:
        mov    ecx, dword ptr [esi + 0x34]
        push    ecx
        push    0x1d4
        push    0x317
        push    0x206
        push    0x30a
L_e9ec:
        call    FUN_0055eb90
        mov    eax, dword ptr [esp + 0x24]
        add    esp, 0x14
L_e9f8:
        inc    eax
        cmp    eax, 0xc
        mov    dword ptr [esp + 0x10], eax
        jl    L_e768
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x140
        ret    
L_ea11:
        mov    edx, dword ptr [esi + 0x14]
        mov    eax, dword ptr [esi + 0x18]
        mov    dword ptr [esp + 0x20], edx
        fld    dword ptr [esp + 0x20]
        fcomp    dword ptr [g_0076d064]
        mov    dword ptr [esp + 0x24], eax
        fnstsw  ax
        test    ah, 0x41
        je    L_ea3e
        fld    dword ptr [esp + 0x20]
        fmul    dword ptr [g_0077dff8]
        fstp    dword ptr [esp + 0x20]
L_ea3e:
        fld    dword ptr [esp + 0x24]
        fcomp    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        je    L_ea5d
        fld    dword ptr [esp + 0x24]
        fmul    dword ptr [g_0077dff4]
        fstp    dword ptr [esp + 0x24]
L_ea5d:
        mov    ecx, dword ptr [esp + 0x20]
        mov    edx, dword ptr [esp + 0x24]
        mov    dword ptr [esp + 0x3c], ecx
        xor    ecx, ecx
        mov    dword ptr [esp + 0x40], edx
        mov    dword ptr [esp + 0x10], ecx
L_ea73:
        mov    eax, ecx
        sub    eax, 7
        je    L_ee7b
        sub    eax, 4
        je    L_ed2e
        dec    eax
        je    L_ebdf
        mov    eax, dword ptr [esi + ecx*4 + 0x50]
        cmp    eax, 5
        jg    L_efb9
        cmp    eax, ebx
        jl    L_efb9
        cmp    eax, 4
        jne    L_eab4
        cmp    byte ptr [esi + 0xdc], bl
        je    L_efb9
L_eab4:
        mov    eax, dword ptr [esi + 0x110]
        add    ecx, eax
        lea    edx, [eax + eax*4]
        lea    eax, [ecx + edx*2]
        shl    eax, 3
        fild    dword ptr [eax + 0x791080]
        lea    ecx, [esp + 0xec]
        fadd    dword ptr [esp + 0x20]
        fstp    dword ptr [esp + 0x3c]
        fild    dword ptr [eax + 0x791084]
        lea    eax, [esp + 0x10]
        push    eax
        push    ecx
        fadd    dword ptr [esp + 0x2c]
        mov    ecx, edi
        fstp    dword ptr [esp + 0x48]
        call    FUN_00641010
        mov    edx, dword ptr [eax]
        lea    eax, [esp + 0x100]
        push    eax
        mov    ecx, edi
        mov    dword ptr [esp + 0x18], edx
        call    FUN_00641000
        mov    ecx, eax
        mov    eax, dword ptr [esp + 0x14]
        cmp    eax, dword ptr [ecx]
        je    L_eb1d
        mov    edx, dword ptr [esp + 0x10]
        cmp    edx, dword ptr [eax + 0x10]
        jge    L_eb5d
L_eb1d:
        lea    eax, [esp + 0x7c]
        push    eax
        lea    ecx, [esp + 0x14]
        push    ecx
        lea    ecx, [esp + 0x150]
        mov    dword ptr [esp + 0x84], ebx
        call    FUN_00641050
        push    eax
        push    ecx
        lea    edx, [esp + 0x1c]
        mov    ecx, esp
        push    edx
        call    FUN_00561a30
        lea    eax, [esp + 0xf0]
        push    eax
        mov    ecx, edi
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x14], eax
L_eb5d:
        mov    eax, dword ptr [eax + 0x14]
        fld    dword ptr [eax + 0xc]
        lea    ecx, [esp + 0x88]
        fsub    dword ptr [eax + 4]
        push    ecx
        lea    ecx, [esp + 0x118]
        fmul    dword ptr [eax + 0x14]
        mov    dword ptr [esp + 0x94], 0
        fstp    dword ptr [esp + 0x8c]
        fld    dword ptr [eax + 0x10]
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [eax + 0x18]
        fstp    dword ptr [esp + 0x90]
        call    FUN_0040c5d0
        lea    edx, [esp + 0x114]
        push    edx
        lea    ecx, [esp + 0x34]
        call    FUN_0040ccd0
        mov    eax, dword ptr [esp + 0x10]
        mov    ecx, dword ptr [esi + eax*4 + 0x50]
        mov    edx, dword ptr [esi + ecx*4 + 0xb0]
        push    ebx
        push    ebx
        push    edx
        lea    eax, [esp + 0x3c]
        push    eax
        lea    ecx, [esp + 0x4c]
        push    ecx
        lea    edx, [esp + 0x24]
        push    edx
        mov    ecx, edi
        call    FUN_00640fa0
        mov    ecx, dword ptr [eax]
        jmp    L_efb4
L_ebdf:
        mov    eax, dword ptr [esi + 0x78]
        cmp    eax, 5
        jg    L_efb9
        cmp    eax, ebx
        jl    L_efb9
        cmp    eax, 4
        jne    L_ec04
        cmp    byte ptr [esi + 0xdc], bl
        je    L_efb9
L_ec04:
        lea    eax, [esp + 0x10]
        push    eax
        lea    ecx, [esp + 0x114]
        push    ecx
        mov    ecx, edi
        mov    dword ptr [esp + 0x44], 0x44450000
        mov    dword ptr [esp + 0x48], 0x4405c000
        call    FUN_00561df0
        mov    eax, dword ptr [eax]
        cmp    eax, dword ptr [edi]
        mov    dword ptr [esp + 0x2c], eax
        je    L_ec3b
        mov    edx, dword ptr [esp + 0x10]
        cmp    edx, dword ptr [eax + 0x10]
        jge    L_ec78
L_ec3b:
        lea    eax, [esp + 0x5c]
        push    eax
        lea    ecx, [esp + 0x14]
        push    ecx
        lea    ecx, [esp + 0x148]
        mov    dword ptr [esp + 0x64], ebx
        call    FUN_00641050
        push    eax
        push    ecx
        lea    edx, [esp + 0x34]
        mov    ecx, esp
        push    edx
        call    FUN_00561a30
        lea    eax, [esp + 0xf8]
        push    eax
        mov    ecx, edi
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x2c], eax
L_ec78:
        mov    eax, dword ptr [eax + 0x14]
        fld    dword ptr [eax + 0xc]
        lea    edx, [esp + 0x10]
        fsub    dword ptr [eax + 4]
        push    edx
        fmul    dword ptr [eax + 0x14]
        fld    dword ptr [eax + 0x10]
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [eax + 0x18]
        lea    eax, [esp + 0xd8]
        push    eax
        fstp    dword ptr [esp + 0x138]
        mov    ecx, dword ptr [esp + 0x138]
        mov    dword ptr [esp + 0x3c], ecx
        mov    ecx, edi
        fstp    dword ptr [esp + 0x38]
        mov    dword ptr [esp + 0x40], 0
        call    FUN_00561df0
        mov    ecx, dword ptr [eax]
        lea    edx, [esp + 0xdc]
        mov    dword ptr [esp + 0x1c], ecx
        push    edx
        mov    ecx, edi
        call    FUN_00641000
        mov    ecx, eax
        mov    eax, dword ptr [esp + 0x1c]
        cmp    eax, dword ptr [ecx]
        je    L_ece7
        mov    edx, dword ptr [esp + 0x10]
        cmp    edx, dword ptr [eax + 0x10]
        jge    L_ed24
L_ece7:
        lea    eax, [esp + 0x50]
        push    eax
        lea    ecx, [esp + 0x14]
        push    ecx
        lea    ecx, [esp + 0x140]
        mov    dword ptr [esp + 0x58], ebx
        call    FUN_00641050
        push    eax
        push    ecx
        lea    edx, [esp + 0x24]
        mov    ecx, esp
        push    edx
        call    FUN_00561a30
        lea    eax, [esp + 0xec]
        push    eax
        mov    ecx, edi
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x1c], eax
L_ed24:
        mov    ecx, dword ptr [esi + 0x78]
        push    ebx
        push    ebx
        jmp    L_ee64
L_ed2e:
        mov    eax, dword ptr [esi + 0x74]
        cmp    eax, 5
        jg    L_efb9
        cmp    eax, ebx
        jl    L_efb9
        cmp    eax, 4
        jne    L_ed53
        cmp    byte ptr [esi + 0xdc], bl
        je    L_efb9
L_ed53:
        lea    eax, [esp + 0x10]
        push    eax
        lea    ecx, [esp + 0xd0]
        push    ecx
        mov    ecx, edi
        mov    dword ptr [esp + 0x44], 0x44414000
        mov    dword ptr [esp + 0x48], 0x4405c000
        call    FUN_00561df0
        mov    eax, dword ptr [eax]
        cmp    eax, dword ptr [edi]
        mov    ecx, dword ptr [esp + 0x10]
        mov    dword ptr [esp + 0x84], eax
        je    L_ed8d
        cmp    ecx, dword ptr [eax + 0x10]
        jge    L_edcb
L_ed8d:
        lea    edx, [esp + 0xc4]
        push    edx
        push    ecx
        mov    dword ptr [esp + 0xcc], ecx
        lea    eax, [esp + 0x8c]
        mov    ecx, esp
        push    eax
        mov    dword ptr [esp + 0xd4], ebx
        call    FUN_00561a30
        lea    ecx, [esp + 0xfc]
        push    ecx
        mov    ecx, edi
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x84], eax
L_edcb:
        mov    eax, dword ptr [eax + 0x14]
        fld    dword ptr [eax + 0xc]
        lea    ecx, [esp + 0xfc]
        fsub    dword ptr [eax + 4]
        fmul    dword ptr [eax + 0x14]
        fld    dword ptr [eax + 0x10]
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [eax + 0x18]
        lea    eax, [esp + 0x10]
        push    eax
        fstp    dword ptr [esp + 0x128]
        mov    edx, dword ptr [esp + 0x128]
        push    ecx
        mov    ecx, edi
        fstp    dword ptr [esp + 0x38]
        mov    dword ptr [esp + 0x3c], edx
        mov    dword ptr [esp + 0x40], 0
        call    FUN_00561df0
        mov    eax, dword ptr [eax]
        cmp    eax, dword ptr [edi]
        mov    dword ptr [esp + 0x68], eax
        je    L_ee25
        mov    edx, dword ptr [esp + 0x10]
        cmp    edx, dword ptr [eax + 0x10]
        jge    L_ee5f
L_ee25:
        lea    eax, [esp + 0x48]
        push    eax
        lea    ecx, [esp + 0x14]
        push    ecx
        lea    ecx, [esp + 0x74]
        mov    dword ptr [esp + 0x50], ebx
        call    FUN_00641050
        push    eax
        push    ecx
        lea    edx, [esp + 0x70]
        mov    ecx, esp
        push    edx
        call    FUN_00561a30
        lea    eax, [esp + 0xd8]
        push    eax
        mov    ecx, edi
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x68], eax
L_ee5f:
        mov    ecx, dword ptr [esi + 0x74]
        push    ebx
        push    ebx
L_ee64:
        mov    edx, dword ptr [esi + ecx*4 + 0xb0]
        push    edx
        lea    ecx, [esp + 0x3c]
        push    ecx
        lea    edx, [esp + 0x4c]
        push    edx
        jmp    L_efb1
L_ee7b:
        mov    eax, dword ptr [esi + 0x6c]
        cmp    eax, 5
        jg    L_efb9
        cmp    eax, ebx
        jl    L_efb9
        cmp    eax, 4
        jne    L_eea0
        cmp    byte ptr [esi + 0xdc], bl
        je    L_efb9
L_eea0:
        lea    eax, [esp + 0x10]
        push    eax
        lea    ecx, [esp + 0xdc]
        push    ecx
        mov    ecx, edi
        mov    dword ptr [esp + 0x44], 0x443f4000
        mov    dword ptr [esp + 0x48], 0x43ea8000
        call    FUN_00561df0
        mov    eax, dword ptr [eax]
        cmp    eax, dword ptr [edi]
        mov    ecx, dword ptr [esp + 0x10]
        mov    dword ptr [esp + 0x4c], eax
        je    L_eed7
        cmp    ecx, dword ptr [eax + 0x10]
        jge    L_ef0f
L_eed7:
        lea    edx, [esp + 0x94]
        push    edx
        push    ecx
        mov    dword ptr [esp + 0x9c], ecx
        lea    eax, [esp + 0x54]
        mov    ecx, esp
        push    eax
        mov    dword ptr [esp + 0xa4], ebx
        call    FUN_00561a30
        lea    ecx, [esp + 0x100]
        push    ecx
        mov    ecx, edi
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x4c], eax
L_ef0f:
        mov    eax, dword ptr [eax + 0x14]
        fld    dword ptr [eax + 0xc]
        lea    ecx, [esp + 0xe0]
        fsub    dword ptr [eax + 4]
        fmul    dword ptr [eax + 0x14]
        fld    dword ptr [eax + 0x10]
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [eax + 0x18]
        lea    eax, [esp + 0x10]
        push    eax
        fstp    dword ptr [esp + 0x10c]
        mov    edx, dword ptr [esp + 0x10c]
        push    ecx
        mov    ecx, edi
        fstp    dword ptr [esp + 0x38]
        mov    dword ptr [esp + 0x3c], edx
        mov    dword ptr [esp + 0x40], 0
        call    FUN_00561df0
        mov    eax, dword ptr [eax]
        cmp    eax, dword ptr [edi]
        mov    ecx, dword ptr [esp + 0x10]
        mov    dword ptr [esp + 0x18], eax
        je    L_ef69
        cmp    ecx, dword ptr [eax + 0x10]
        jge    L_ef99
L_ef69:
        lea    edx, [esp + 0x60]
        push    edx
        push    ecx
        mov    dword ptr [esp + 0x68], ecx
        lea    eax, [esp + 0x20]
        mov    ecx, esp
        push    eax
        mov    dword ptr [esp + 0x70], ebx
        call    FUN_00561a30
        lea    ecx, [esp + 0x5c]
        push    ecx
        mov    ecx, edi
        call    FUN_005619f0
        mov    eax, dword ptr [eax]
        mov    ecx, dword ptr [esp + 0x10]
        mov    dword ptr [esp + 0x18], eax
L_ef99:
        mov    edx, dword ptr [esi + ecx*4 + 0x50]
        mov    ecx, dword ptr [esi + edx*4 + 0xb0]
        push    ebx
        push    ebx
        push    ecx
        lea    edx, [esp + 0x3c]
        push    edx
        lea    ecx, [esp + 0x4c]
        push    ecx
L_efb1:
        mov    ecx, dword ptr [eax + 0x14]
L_efb4:
        call    FUN_0055f5b0
L_efb9:
        mov    ecx, dword ptr [esp + 0x10]
        inc    ecx
        cmp    ecx, 0xd
        mov    dword ptr [esp + 0x10], ecx
        jl    L_ea73
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x140
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
        mov    edx, dword ptr [esp + 4]
        xor    ecx, ecx
        mov    eax, 0x791fa0
L_efeb:
        cmp    dword ptr [eax], edx
        je    L_effe
        add    eax, 8
        inc    ecx
        cmp    eax, 0x792200
        jl    L_efeb
        or    eax, 0xffffffff
        ret    
L_effe:
        mov    eax, dword ptr [ecx*8 + 0x791fa4]
        ret    
    }
}
