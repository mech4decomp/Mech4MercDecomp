/*
 * FUN_00610c34 (extent 0x610c34-0x6115bf) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076d064;
extern float  g_0076d070;
extern float  g_0076d5f0;
extern float  g_007748c8;
extern float  g_0077b290;
extern float  g_0077de8c;
extern float  g_0077dff4;
extern float  g_0077dff8;
extern float  g_007822e8;
extern float  g_007899f8;
extern float  g_0078c0d0;
extern float  g_0078c184;
extern float  g_0078c188;
extern int    g_007ddde0;
extern float  g_007f2884;
extern float  g_007f2888;
extern float  g_007f288c;
extern float  g_007f2890;
extern float  g_007f2894;
extern float  g_007f2898;
extern float  g_007f289c;
extern float  g_007f28a0;
extern float  g_007f28a4;
extern float  g_007f28a8;
extern float  g_007f28ac;
extern float  g_007f28b0;
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_0040c5d0(void);
extern void __cdecl FUN_0040ccd0(void);
extern void __cdecl FUN_00551870(void);
extern void __cdecl FUN_0055fd10(void);
extern void __cdecl FUN_0055fdb0(void);
extern void __cdecl FUN_005603e0(void);
extern void __cdecl FUN_00560400(void);
extern void __cdecl FUN_00561430(void);
extern void __cdecl FUN_00561a40(void);
extern void __cdecl FUN_00561a80(void);
extern void __cdecl FUN_00562170(void);
extern void __cdecl FUN_00612010(void);
extern void __cdecl FUN_00612020(void);
extern void __cdecl FUN_00612060(void);

__declspec(naked) void FUN_00610c34(void)
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
        sub    esp, 0x78
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov    edi, ecx
        lea    eax, [edi + 0x14]
        push    eax
        lea    ecx, [esp + 0x50]
        call    FUN_0040c410
        fld    dword ptr [esp + 0x4c]
        fcomp    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        je    L_0c75
        fld    dword ptr [esp + 0x4c]
        fmul    dword ptr [g_0077dff8]
        fstp    dword ptr [esp + 0x4c]
L_0c75:
        fld    dword ptr [esp + 0x50]
        fcomp    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        je    L_0c94
        fld    dword ptr [esp + 0x50]
        fmul    dword ptr [g_0077dff4]
        fstp    dword ptr [esp + 0x50]
L_0c94:
        lea    eax, [esp + 0x4c]
        push    eax
        lea    ecx, [esp + 0x44]
        call    FUN_0040c5d0
        mov    ecx, dword ptr [esp + 0x40]
        mov    edx, dword ptr [esp + 0x44]
        mov    eax, dword ptr [esp + 0x48]
        mov    dword ptr [esp + 0x64], ecx
        lea    ecx, [esp + 0x18]
        mov    dword ptr [esp + 0x68], edx
        push    ecx
        lea    edx, [esp + 0x38]
        lea    esi, [edi + 0x44]
        xor    ebx, ebx
        push    edx
        mov    ecx, esi
        mov    dword ptr [esp + 0x74], eax
        mov    dword ptr [esp + 0x20], ebx
        call    FUN_00562170
        mov    eax, dword ptr [eax]
        lea    ecx, [esp + 0x30]
        push    ecx
        mov    ecx, esi
        mov    dword ptr [esp + 0x20], eax
        call    FUN_00612010
        mov    edx, eax
        mov    eax, dword ptr [esp + 0x1c]
        cmp    eax, dword ptr [edx]
        je    L_0cf9
        mov    ecx, dword ptr [esp + 0x18]
        cmp    ecx, dword ptr [eax + 0x10]
        jge    L_0d30
L_0cf9:
        lea    edx, [esp + 0x28]
        push    edx
        lea    eax, [esp + 0x1c]
        push    eax
        lea    ecx, [esp + 0x48]
        mov    dword ptr [esp + 0x30], ebx
        call    FUN_00612060
        push    eax
        push    ecx
        lea    edx, [esp + 0x24]
        mov    ecx, esp
        push    edx
        call    FUN_00561a80
        lea    eax, [esp + 0x2c]
        push    eax
        mov    ecx, esi
        call    FUN_00561a40
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x1c], eax
L_0d30:
        mov    eax, dword ptr [eax + 0x14]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 4]
        fmul    dword ptr [eax + 0x14]
        fld    dword ptr [eax + 0x10]
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [eax + 0x18]
        xor    eax, eax
        mov    dword ptr [esp + 0x78], 0
        fstp    dword ptr [esp + 0x50]
        mov    ecx, dword ptr [esp + 0x50]
        mov    dword ptr [esp + 0x74], ecx
        fstp    dword ptr [esp + 0x70]
        mov    dword ptr [esp + 0x10], eax
L_0d63:
        cmp    eax, 7
        je    L_0e48
        cmp    eax, 9
        je    L_0e48
        cmp    eax, 0xa
        je    L_0e48
        mov    ecx, dword ptr [edi + eax*4 + 0x7c]
        cmp    ecx, 5
        jg    L_0e48
        cmp    ecx, ebx
        jl    L_0e48
        fld    dword ptr [esp + 0x64]
        lea    edx, [esp + 0x10]
        fadd    dword ptr [g_007822e8]
        push    edx
        lea    eax, [esp + 0x38]
        push    eax
        fstp    dword ptr [esp + 0x54]
        fld    dword ptr [esp + 0x70]
        mov    ecx, esi
        fadd    dword ptr [g_0078c188]
        fstp    dword ptr [esp + 0x58]
        fld    dword ptr [esp + 0x74]
        fstp    dword ptr [esp + 0x5c]
        call    FUN_00562170
        mov    ecx, dword ptr [eax]
        lea    edx, [esp + 0x30]
        mov    dword ptr [esp + 0x1c], ecx
        push    edx
        mov    ecx, esi
        call    FUN_00612010
        mov    ecx, eax
        mov    eax, dword ptr [esp + 0x1c]
        cmp    eax, dword ptr [ecx]
        je    L_0ded
        mov    edx, dword ptr [esp + 0x10]
        cmp    edx, dword ptr [eax + 0x10]
        jge    L_0e24
L_0ded:
        lea    eax, [esp + 0x28]
        push    eax
        lea    ecx, [esp + 0x14]
        push    ecx
        lea    ecx, [esp + 0x48]
        mov    dword ptr [esp + 0x30], ebx
        call    FUN_00612060
        push    eax
        push    ecx
        lea    edx, [esp + 0x24]
        mov    ecx, esp
        push    edx
        call    FUN_00561a80
        lea    eax, [esp + 0x2c]
        push    eax
        mov    ecx, esi
        call    FUN_00561a40
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x1c], eax
L_0e24:
        mov    ecx, dword ptr [esp + 0x10]
        mov    edx, dword ptr [edi + ecx*4 + 0x7c]
        mov    ecx, dword ptr [edi + edx*4 + 0x64]
        push    ebx
        push    ecx
        lea    edx, [esp + 0x78]
        push    edx
        lea    ecx, [esp + 0x58]
        push    ecx
        mov    ecx, dword ptr [eax + 0x14]
        call    FUN_0055fdb0
        mov    eax, dword ptr [esp + 0x10]
L_0e48:
        inc    eax
        cmp    eax, 0xb
        mov    dword ptr [esp + 0x10], eax
        jl    L_0d63
        lea    edx, [esp + 0x1c]
        push    edx
        lea    eax, [esp + 0x38]
        mov    ebp, 0x14
        push    eax
        mov    ecx, esi
        mov    dword ptr [esp + 0x24], ebp
        call    FUN_00562170
        mov    ecx, dword ptr [eax]
        lea    edx, [esp + 0x30]
        mov    dword ptr [esp + 0x18], ecx
        push    edx
        mov    ecx, esi
        call    FUN_00612010
        mov    ecx, eax
        mov    eax, dword ptr [esp + 0x18]
        cmp    eax, dword ptr [ecx]
        je    L_0e95
        mov    edx, dword ptr [esp + 0x1c]
        cmp    edx, dword ptr [eax + 0x10]
        jge    L_0ecc
L_0e95:
        lea    eax, [esp + 0x28]
        push    eax
        lea    ecx, [esp + 0x20]
        push    ecx
        lea    ecx, [esp + 0x48]
        mov    dword ptr [esp + 0x30], ebx
        call    FUN_00612060
        push    eax
        push    ecx
        lea    edx, [esp + 0x20]
        mov    ecx, esp
        push    edx
        call    FUN_00561a80
        lea    eax, [esp + 0x2c]
        push    eax
        mov    ecx, esi
        call    FUN_00561a40
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x18], eax
L_0ecc:
        mov    eax, dword ptr [eax + 0x14]
        fld    dword ptr [eax + 0xc]
        lea    ecx, [esp + 0x4c]
        fsub    dword ptr [eax + 4]
        push    ecx
        lea    ecx, [esp + 0x80]
        fmul    dword ptr [eax + 0x14]
        mov    dword ptr [esp + 0x58], 0
        fstp    dword ptr [esp + 0x50]
        fld    dword ptr [eax + 0x10]
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [eax + 0x18]
        fstp    dword ptr [esp + 0x54]
        call    FUN_0040c5d0
        lea    edx, [esp + 0x7c]
        push    edx
        lea    ecx, [esp + 0x74]
        call    FUN_0040c410
        mov    al, byte ptr [edi + 0x60]
        test    al, al
        je    L_0f21
        mov    dword ptr [esp + 0x20], 0xfaffff00
        jmp    L_0f36
L_0f21:
        mov    al, byte ptr [edi + 0x61]
        neg    al
        sbb    eax, eax
        and    eax, 0xfe0100
        add    eax, 0xfa00ff00
        mov    dword ptr [esp + 0x20], eax
L_0f36:
        fld    dword ptr [edi + 0x54]
        mov    bl, 1
        fmul    dword ptr [g_007f2898]
        fld    dword ptr [edi + 0x58]
        fmul    dword ptr [g_007f2894]
        fst    dword ptr [esp + 0x68]
        fld    st(1)
        fcomp    dword ptr [g_007f289c]
        fnstsw  ax
        test    ah, bl
        je    L_0f5e
        xor    bl, bl
L_0f5e:
        fcom    dword ptr [g_007f28a0]
        fnstsw  ax
        test    ah, 1
        je    L_0f6d
        xor    bl, bl
L_0f6d:
        fld    dword ptr [g_007f2888]
        fadd    dword ptr [g_007f289c]
        fld    st(2)
        fcompp    
        fnstsw  ax
        test    ah, 0x41
        jne    L_0f86
        xor    bl, bl
L_0f86:
        fld    dword ptr [g_007f2884]
        fadd    dword ptr [g_007f28a0]
        fxch    st(1)
        fcompp    
        fnstsw  ax
        test    ah, 0x41
        jne    L_0f9f
        xor    bl, bl
L_0f9f:
        fsub    dword ptr [g_007f289c]
        fld    dword ptr [esp + 0x68]
        fsub    dword ptr [g_007f28a0]
        fstp    dword ptr [esp + 0x68]
        fmul    dword ptr [g_007f2890]
        fld    dword ptr [g_007f288c]
        fmul    dword ptr [esp + 0x68]
        fstp    dword ptr [esp + 0x68]
        fadd    dword ptr [g_007f28b0]
        fst    dword ptr [esp + 0x64]
        fld    dword ptr [g_007f28ac]
        fadd    dword ptr [esp + 0x68]
        fstp    dword ptr [esp + 0x68]
        fcom    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        jne    L_0ffd
        fld    dword ptr [esp + 0x68]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        je    L_0fff
L_0ffd:
        xor    bl, bl
L_0fff:
        fld    dword ptr [g_007f28a8]
        fadd    dword ptr [g_007f28b0]
        fxch    st(1)
        fcompp    
        fnstsw  ax
        test    ah, 0x41
        je    L_102d
        fld    dword ptr [g_007f28a4]
        fadd    dword ptr [g_007f28ac]
        fcomp    dword ptr [esp + 0x68]
        fnstsw  ax
        test    ah, 1
        je    L_102f
L_102d:
        xor    bl, bl
L_102f:
        test    bl, bl
        mov    ecx, dword ptr [esp + 0x74]
        mov    dword ptr [esp + 0x34], ecx
        mov    dword ptr [esp + 0x24], 0
        mov    dword ptr [esp + 0x28], 0
        je    L_11e8
        lea    edx, [esp + 0x1c]
        push    edx
        lea    eax, [esp + 0x3c]
        push    eax
        mov    ecx, esi
        mov    dword ptr [esp + 0x24], ebp
        call    FUN_00562170
        mov    ecx, dword ptr [eax]
        lea    edx, [esp + 0x3c]
        mov    dword ptr [esp + 0x18], ecx
        push    edx
        mov    ecx, esi
        call    FUN_00612010
        mov    ecx, eax
        mov    eax, dword ptr [esp + 0x18]
        cmp    eax, dword ptr [ecx]
        je    L_1089
        mov    edx, dword ptr [esp + 0x1c]
        cmp    edx, dword ptr [eax + 0x10]
        jge    L_10c4
L_1089:
        lea    eax, [esp + 0x30]
        push    eax
        lea    ecx, [esp + 0x20]
        push    ecx
        lea    ecx, [esp + 0x54]
        mov    dword ptr [esp + 0x38], 0
        call    FUN_00612060
        push    eax
        push    ecx
        lea    edx, [esp + 0x20]
        mov    ecx, esp
        push    edx
        call    FUN_00561a80
        lea    eax, [esp + 0x48]
        push    eax
        mov    ecx, esi
        call    FUN_00561a40
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x18], eax
L_10c4:
        fld    dword ptr [g_0078c0d0]
        push    ecx
        fsub    dword ptr [edi + 0x5c]
        mov    ecx, dword ptr [eax + 0x14]
        fstp    dword ptr [esp]
        call    FUN_0055fd10
        lea    ecx, [esp + 0x1c]
        push    ecx
        lea    edx, [esp + 0x44]
        push    edx
        mov    ecx, esi
        mov    dword ptr [esp + 0x24], ebp
        call    FUN_00562170
        mov    eax, dword ptr [eax]
        lea    ecx, [esp + 0x3c]
        push    ecx
        mov    ecx, esi
        mov    dword ptr [esp + 0x1c], eax
        call    FUN_00612010
        mov    edx, eax
        mov    eax, dword ptr [esp + 0x18]
        cmp    eax, dword ptr [edx]
        je    L_1113
        mov    ecx, dword ptr [esp + 0x1c]
        cmp    ecx, dword ptr [eax + 0x10]
        jge    L_114e
L_1113:
        lea    edx, [esp + 0x30]
        push    edx
        lea    eax, [esp + 0x20]
        push    eax
        lea    ecx, [esp + 0x54]
        mov    dword ptr [esp + 0x38], 0
        call    FUN_00612060
        push    eax
        push    ecx
        lea    edx, [esp + 0x20]
        mov    ecx, esp
        push    edx
        call    FUN_00561a80
        lea    eax, [esp + 0x40]
        push    eax
        mov    ecx, esi
        call    FUN_00561a40
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x18], eax
L_114e:
        mov    eax, dword ptr [eax + 0x14]
        mov    ecx, 0x3f000000
        mov    dword ptr [eax + 0x30], ecx
        mov    dword ptr [eax + 0x34], ecx
        lea    ecx, [esp + 0x1c]
        push    ecx
        lea    edx, [esp + 0x44]
        push    edx
        mov    ecx, esi
        mov    dword ptr [esp + 0x24], ebp
        call    FUN_00612020
        mov    eax, dword ptr [eax]
        cmp    eax, dword ptr [esi]
        mov    dword ptr [esp + 0x18], eax
        je    L_1184
        mov    ecx, dword ptr [esp + 0x1c]
        cmp    ecx, dword ptr [eax + 0x10]
        jge    L_11bf
L_1184:
        lea    edx, [esp + 0x30]
        push    edx
        lea    eax, [esp + 0x20]
        push    eax
        lea    ecx, [esp + 0x54]
        mov    dword ptr [esp + 0x38], 0
        call    FUN_00612060
        push    eax
        push    ecx
        lea    edx, [esp + 0x20]
        mov    ecx, esp
        push    edx
        call    FUN_00561a80
        lea    eax, [esp + 0x44]
        push    eax
        mov    ecx, esi
        call    FUN_00561a40
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x18], eax
L_11bf:
        mov    ecx, dword ptr [esp + 0x20]
        push    0
        push    ecx
        lea    edx, [esp + 0x78]
        push    edx
        lea    ecx, [esp + 0x70]
        push    ecx
        mov    ecx, dword ptr [eax + 0x14]
        call    FUN_0055fdb0
        mov    edx, dword ptr [esp + 0x64]
        mov    eax, dword ptr [esp + 0x68]
        mov    dword ptr [esp + 0x24], edx
        mov    dword ptr [esp + 0x28], eax
L_11e8:
        lea    eax, [edi + 0x14]
        push    eax
        lea    ecx, [esp + 0x50]
        call    FUN_0040ccd0
        fld    dword ptr [esp + 0x4c]
        fcomp    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        je    L_1214
        fld    dword ptr [esp + 0x4c]
        fmul    dword ptr [g_0077dff8]
        fstp    dword ptr [esp + 0x4c]
L_1214:
        fld    dword ptr [esp + 0x50]
        fcomp    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        je    L_1233
        fld    dword ptr [esp + 0x50]
        fmul    dword ptr [g_0077dff4]
        fstp    dword ptr [esp + 0x50]
L_1233:
        lea    ecx, [esp + 0x4c]
        push    ecx
        lea    ecx, [esp + 0x80]
        call    FUN_0040c5d0
        lea    edx, [esp + 0x7c]
        push    edx
        lea    ecx, [esp + 0x68]
        call    FUN_0040c410
        lea    eax, [edi + 0x20]
        push    eax
        lea    ecx, [esp + 0x50]
        call    FUN_0040ccd0
        fld    dword ptr [esp + 0x4c]
        fcomp    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        je    L_127e
        fld    dword ptr [esp + 0x4c]
        fmul    dword ptr [g_0077dff8]
        fstp    dword ptr [esp + 0x4c]
L_127e:
        fld    dword ptr [esp + 0x50]
        fcomp    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x41
        je    L_129d
        fld    dword ptr [esp + 0x50]
        fmul    dword ptr [g_0077dff4]
        fstp    dword ptr [esp + 0x50]
L_129d:
        lea    ecx, [esp + 0x4c]
        push    ecx
        lea    ecx, [esp + 0x80]
        call    FUN_0040c5d0
        lea    edx, [esp + 0x7c]
        push    edx
        lea    ecx, [esp + 0x74]
        call    FUN_0040c410
        fld    dword ptr [esp + 0x70]
        fmul    dword ptr [g_0076d070]
        mov    eax, dword ptr [esp + 0x68]
        mov    esi, dword ptr [edi + 0xa8]
        push    ecx
        fadd    dword ptr [esp + 0x68]
        mov    dword ptr [esp + 0x60], eax
        mov    dword ptr [esp + 0x64], 0x3f666666
        fstp    dword ptr [esp + 0x5c]
        fld    dword ptr [esp + 0x6c]
        fsub    dword ptr [g_0078c184]
        fstp    dword ptr [esp]
        push    ecx
        fld    dword ptr [esp + 0x60]
        mov    ecx, esi
        fsub    dword ptr [g_0077de8c]
        fstp    dword ptr [esp]
        call    FUN_005603e0
        fld    dword ptr [esp + 0x5c]
        push    ecx
        fadd    dword ptr [g_007748c8]
        fstp    dword ptr [esp]
        push    ecx
        fld    dword ptr [esp + 0x60]
        mov    ecx, esi
        fadd    dword ptr [g_0077de8c]
        fstp    dword ptr [esp]
        call    FUN_00560400
        mov    edx, dword ptr [esi]
        lea    eax, [esp + 0x2c]
        push    eax
        lea    ecx, [esp + 0x18]
        push    ecx
        xor    ebp, ebp
        mov    ecx, esi
        mov    dword ptr [esi + 0x104], 0xfa808080
        mov    dword ptr [esi + 0x10c], ebp
        call    dword ptr [edx + 0xc]
        mov    edx, dword ptr [esp + 0x14]
        shr    edx, 1
        mov    dword ptr [esp + 0x40], edx
        mov    dword ptr [esp + 0x44], ebp
        fild    qword ptr [esp + 0x40]
        push    1
        sub    esp, 0xc
        fsubr    dword ptr [esp + 0x68]
        lea    eax, [esp + 0x68]
        mov    ecx, esp
        push    eax
        fstp    dword ptr [esp + 0x6c]
        mov    ebp, dword ptr [esi]
        call    FUN_00551870
        mov    ecx, esi
        call    dword ptr [ebp + 0x14]
        test    bl, bl
        je    L_13db
        mov    dword ptr [esi + 0x104], 0xffffffff
        mov    ecx, dword ptr [esp + 0x14]
        shr    ecx, 1
        mov    dword ptr [esp + 0x40], ecx
        xor    ebx, ebx
        mov    dword ptr [esp + 0x44], ebx
        fild    qword ptr [esp + 0x40]
        push    1
        sub    esp, 0xc
        fsubr    dword ptr [esp + 0x34]
        lea    edx, [esp + 0x68]
        mov    ecx, esp
        push    edx
        fstp    dword ptr [esp + 0x6c]
        fld    dword ptr [esp + 0x48]
        fmul    dword ptr [g_0076d070]
        fadd    dword ptr [esp + 0x3c]
        fadd    dword ptr [g_0076d5f0]
        fstp    dword ptr [esp + 0x70]
        mov    ebp, dword ptr [esi]
        call    FUN_00551870
        mov    ecx, esi
        call    dword ptr [ebp + 0x14]
        jmp    L_13dd
L_13db:
        xor    ebx, ebx
L_13dd:
        fld    dword ptr [esp + 0x70]
        mov    esi, dword ptr [edi + 0xb8]
        fmul    dword ptr [g_0076d070]
        push    ecx
        mov    dword ptr [esp + 0x64], 0x3f666666
        fadd    dword ptr [esp + 0x68]
        fstp    dword ptr [esp + 0x5c]
        fld    dword ptr [esp + 0x6c]
        fadd    dword ptr [g_0077b290]
        fstp    dword ptr [esp + 0x60]
        fld    dword ptr [esp + 0x60]
        fsub    dword ptr [g_0076d5f0]
        fstp    dword ptr [esp]
        push    ecx
        fld    dword ptr [esp + 0x60]
        mov    ecx, esi
        fsub    dword ptr [g_0077de8c]
        fstp    dword ptr [esp]
        call    FUN_005603e0
        fld    dword ptr [esp + 0x5c]
        push    ecx
        fadd    dword ptr [g_007748c8]
        fstp    dword ptr [esp]
        push    ecx
        fld    dword ptr [esp + 0x60]
        mov    ecx, esi
        fadd    dword ptr [g_0077de8c]
        fstp    dword ptr [esp]
        call    FUN_00560400
        mov    eax, dword ptr [esi]
        lea    ecx, [esp + 0x2c]
        push    ecx
        lea    edx, [esp + 0x18]
        push    edx
        mov    ecx, esi
        mov    dword ptr [esi + 0x104], 0xfa808080
        mov    dword ptr [esi + 0x10c], ebx
        call    dword ptr [eax + 0xc]
        mov    eax, dword ptr [esp + 0x14]
        shr    eax, 1
        mov    dword ptr [esp + 0x40], eax
        mov    dword ptr [esp + 0x44], ebx
        fild    qword ptr [esp + 0x40]
        push    1
        sub    esp, 0xc
        fsubr    dword ptr [esp + 0x68]
        lea    edx, [esp + 0x68]
        mov    ecx, esp
        push    edx
        fstp    dword ptr [esp + 0x6c]
        mov    ebp, dword ptr [esi]
        call    FUN_00551870
        mov    ecx, esi
        call    dword ptr [ebp + 0x14]
        fld    dword ptr [esp + 0x70]
        fmul    dword ptr [g_0076d070]
        mov    esi, dword ptr [edi + 0xbc]
        push    ecx
        mov    dword ptr [esp + 0x64], 0x3f666666
        fadd    dword ptr [esp + 0x68]
        fstp    dword ptr [esp + 0x5c]
        fld    dword ptr [esp + 0x6c]
        fadd    dword ptr [g_007899f8]
        fstp    dword ptr [esp + 0x60]
        fld    dword ptr [esp + 0x60]
        fsub    dword ptr [g_0076d5f0]
        fstp    dword ptr [esp]
        push    ecx
        fld    dword ptr [esp + 0x60]
        mov    ecx, esi
        fsub    dword ptr [g_0077de8c]
        fstp    dword ptr [esp]
        call    FUN_005603e0
        fld    dword ptr [esp + 0x5c]
        push    ecx
        fadd    dword ptr [g_007748c8]
        fstp    dword ptr [esp]
        fld    dword ptr [esp + 0x5c]
        fadd    dword ptr [g_0077de8c]
        push    ecx
        mov    ecx, esi
        fstp    dword ptr [esp]
        call    FUN_00560400
        mov    eax, dword ptr [esi]
        lea    ecx, [esp + 0x2c]
        push    ecx
        lea    edx, [esp + 0x18]
        push    edx
        mov    ecx, esi
        mov    dword ptr [esi + 0x104], 0xfa808080
        mov    dword ptr [esi + 0x10c], ebx
        call    dword ptr [eax + 0xc]
        mov    eax, dword ptr [esp + 0x14]
        shr    eax, 1
        mov    dword ptr [esp + 0x40], eax
        mov    dword ptr [esp + 0x44], ebx
        fild    qword ptr [esp + 0x40]
        push    1
        sub    esp, 0xc
        fsubr    dword ptr [esp + 0x68]
        lea    edx, [esp + 0x68]
        mov    ecx, esp
        push    edx
        fstp    dword ptr [esp + 0x6c]
        mov    edi, dword ptr [esi]
        call    FUN_00551870
        mov    ecx, esi
        call    dword ptr [edi + 0x14]
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x78
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
        mov    eax, dword ptr [g_007ddde0]
        push    esi
        mov    esi, ecx
        push    eax
        call    FUN_00561430
        mov    eax, 0x3f666666
        mov    dword ptr [esi], 0x78c18c
        mov    dword ptr [esi + 0x1c], eax
        mov    dword ptr [esi + 0x14], 0x425c0000
        mov    dword ptr [esi + 0x18], 0x43d30000
        mov    dword ptr [esi + 0x28], eax
        mov    dword ptr [esi + 0x20], 0x442c8000
        mov    dword ptr [esi + 0x24], 0x41a00000
        mov    eax, esi
        pop    esi
        ret    
    }
}
