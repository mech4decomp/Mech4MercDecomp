/*
 * FUN_0052aa61 (extent 0x52aa61-0x52b22c) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b038;
extern float  g_0076ed00;
extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007dd268;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0040d9b0(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_004125e0(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_00416bc0(void);
extern void __cdecl FUN_00416bf0(void);
extern void __cdecl FUN_00416cc0(void);
extern void __cdecl FUN_004d1f10(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_004da8d0(void);
extern void __cdecl FUN_0052aab0(void);
extern void __cdecl FUN_00536060(void);
extern void __cdecl FUN_00536190(void);
extern void __cdecl FUN_005dec20(void);
extern void __cdecl FUN_005dee50(void);
extern void __cdecl FUN_005dee60(void);
extern void __cdecl FUN_005dee70(void);
extern void __cdecl FUN_005dee80(void);
extern void __cdecl FUN_00704820(void);
extern void __cdecl FUN_00708930(void);
extern void __cdecl FUN_0075db4a(void);
extern void __cdecl FUN_0075e346(void);
extern void __cdecl FUN_0075e34c(void);
extern void __cdecl FUN_0075e352(void);

__declspec(naked) void FUN_0052aa61(void)
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
        nop    
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, dword ptr [g_007dab40]
        mov    eax, dword ptr [ecx + 0x4c]
        xor    eax, 0x85739531
        ret    0xc
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, dword ptr [g_007dab40]
        mov    eax, dword ptr [ecx + 0x58]
        xor    eax, 0x85739531
        ret    0xc
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [g_007dab40]
        mov    eax, dword ptr [eax]
        xor    eax, ecx
        mov    ecx, dword ptr [eax + 0x4c]
        xor    ecx, 0x85739531
        je    L_ab08
        mov    ecx, dword ptr [eax + 0xc]
        push    1
        xor    ecx, 0x85739531
        call    FUN_00536060
        mov    ecx, eax
        or    ecx, edx
        jne    L_aae3
        xor    eax, eax
        ret    
L_aae3:
        mov    ecx, dword ptr [g_007dab44]
        mov    ecx, dword ptr [ecx]
        xor    ecx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [ecx + 0xc]
        push    1
        push    edx
        push    eax
        xor    ecx, 0x85739531
        call    FUN_00536190
        test    eax, eax
        jne    L_ab08
        ret    
L_ab08:
        mov    edx, dword ptr [g_007dab44]
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0x58]
        xor    ecx, 0x85739531
        je    L_ab5f
        mov    ecx, dword ptr [eax + 0xc]
        push    2
        xor    ecx, 0x85739531
        call    FUN_00536060
        mov    ecx, eax
        or    ecx, edx
        jne    L_ab3a
        xor    eax, eax
        ret    
L_ab3a:
        mov    ecx, dword ptr [g_007dab44]
        mov    ecx, dword ptr [ecx]
        xor    ecx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [ecx + 0xc]
        push    2
        push    edx
        push    eax
        xor    ecx, 0x85739531
        call    FUN_00536190
        test    eax, eax
        jne    L_ab5f
        ret    
L_ab5f:
        mov    eax, 1
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
        mov    ecx, dword ptr [g_007dd268]
        call    FUN_0052aab0
        ret    0xc
        nop    
        nop    
        mov    eax, dword ptr [g_007dd268]
        mov    ecx, dword ptr [eax + 0x4096c]
        sub    esp, 0x120
        push    ebx
        xor    ebx, ebx
        cmp    ecx, ebx
        push    esi
        push    edi
        jne    L_aed0
        mov    dword ptr [eax + 0x40964], ebx
        mov    dword ptr [eax + 0x40968], ebx
        push    1
        lea    eax, [esp + 0x24]
        push    eax
        lea    ecx, [esp + 0x30]
        push    ecx
        push    0x77a7e4
        mov    dword ptr [esp + 0x30], 0x104
        call    FUN_00708930
        lea    edx, [esp + 0x28]
        push    edx
        lea    ecx, [esp + 0x18]
        call    FUN_00412570
        mov    eax, dword ptr [esp + 0x14]
        push    0x77a7cc
        push    eax
        lea    ecx, [esp + 0x20]
        mov    dword ptr [esp + 0x18], ebx
        call    FUN_004125e0
        lea    ecx, [esp + 0x18]
        push    ecx
        lea    ecx, [esp + 0x14]
        call    FUN_00412740
        lea    ecx, [esp + 0x18]
        call    FUN_0040d9b0
        mov    edx, dword ptr [esp + 0x10]
        push    ebx
        push    edx
        call    FUN_0075e352
        mov    esi, eax
        cmp    esi, ebx
        jne    L_ac43
        mov    eax, dword ptr [g_007dd268]
        mov    dword ptr [eax + 0x4096c], 1
L_ac24:
        mov    eax, dword ptr [esp + 0x10]
        cmp    eax, ebx
        je    L_adad
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_adad
        jmp    L_ada4
L_ac43:
        push    esi
        call    FUN_004084d0
        mov    ecx, dword ptr [esp + 0x14]
        add    esp, 4
        mov    edi, eax
        push    edi
        push    esi
        push    ebx
        push    ecx
        call    FUN_0075e34c
        lea    edx, [esp + 0x24]
        push    edx
        lea    eax, [esp + 0x20]
        push    eax
        push    0x77a7b0
        push    edi
        call    FUN_0075e346
        mov    ecx, dword ptr [esp + 0x1c]
        xor    eax, eax
        mov    dword ptr [esp + 0xc], ebx
        mov    ax, word ptr [ecx]
        cmp    eax, 0x40c
        jg    L_acb3
        je    L_acac
        sub    eax, 0x404
        je    L_aca5
        sub    eax, 3
        je    L_ac9e
        sub    eax, 2
        jne    L_acc4
        push    0x77a758
        jmp    L_ad0f
L_ac9e:
        push    0x77a700
        jmp    L_ad0f
L_aca5:
        push    0x77a6a8
        jmp    L_ad0f
L_acac:
        push    0x77a650
        jmp    L_ad0f
L_acb3:
        sub    eax, 0x411
        je    L_ad0a
        dec    eax
        je    L_ad03
        sub    eax, 0x7f8
        je    L_acfc
L_acc4:
        mov    edx, dword ptr [g_007dd268]
        mov    dword ptr [edx + 0x4096c], 1
        mov    eax, dword ptr [esp + 0xc]
        cmp    eax, ebx
        je    L_ac24
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_ac24
        push    eax
        call    FUN_004084e0
        add    esp, 4
        jmp    L_ac24
L_acfc:
        push    0x77a5f8
        jmp    L_ad0f
L_ad03:
        push    0x77a5a0
        jmp    L_ad0f
L_ad0a:
        push    0x77a548
L_ad0f:
        lea    ecx, [esp + 0x10]
        call    FUN_00412780
        push    edi
        call    FUN_004084e0
        mov    eax, dword ptr [esp + 0x10]
        push    ebx
        push    0x50ec40
        push    ebx
        push    eax
        push    0x80000002
        call    dword ptr [g_0076b038]
        mov    ecx, dword ptr [g_007dd268]
        add    esp, 0x18
        cmp    eax, ebx
        mov    dword ptr [ecx + 0x4096c], 1
        jne    L_ae60
        cmp    dword ptr [ecx + 0x40964], ebx
        jne    L_adcc
        mov    ecx, dword ptr [ecx + 0x40968]
        cmp    ecx, ebx
        je    L_ad77
        push    ecx
        call    FUN_004084e0
        mov    ecx, dword ptr [g_007dd268]
        add    esp, 4
        mov    dword ptr [ecx + 0x40968], ebx
L_ad77:
        mov    eax, dword ptr [esp + 0xc]
        cmp    eax, ebx
        je    L_ad92
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_ad92
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_ad92:
        mov    eax, dword ptr [esp + 0x10]
        cmp    eax, ebx
        je    L_adad
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_adad
L_ada4:
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_adad:
        mov    eax, dword ptr [esp + 0x14]
        cmp    eax, ebx
        je    L_aed0
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_aed0
        jmp    L_aec7
L_adcc:
        mov    edx, dword ptr [ecx + 0x40968]
        push    edx
        push    3
        call    FUN_00704820
        mov    eax, dword ptr [g_007dd268]
        mov    eax, dword ptr [eax + 0x40968]
        cmp    eax, ebx
        je    L_adfe
        push    eax
        call    FUN_004084e0
        mov    ecx, dword ptr [g_007dd268]
        add    esp, 4
        mov    dword ptr [ecx + 0x40968], ebx
L_adfe:
        mov    eax, dword ptr [esp + 0xc]
        cmp    eax, ebx
        je    L_ae19
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_ae19
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_ae19:
        mov    eax, dword ptr [esp + 0x10]
        cmp    eax, ebx
        je    L_ae34
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_ae34
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_ae34:
        mov    eax, dword ptr [esp + 0x14]
        cmp    eax, ebx
        je    L_ae4f
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_ae4f
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_ae4f:
        pop    edi
        pop    esi
        mov    eax, 1
        pop    ebx
        add    esp, 0x120
        ret    0xc
L_ae60:
        mov    ecx, dword ptr [ecx + 0x40968]
        cmp    ecx, ebx
        je    L_ae7f
        push    ecx
        call    FUN_004084e0
        mov    edx, dword ptr [g_007dd268]
        add    esp, 4
        mov    dword ptr [edx + 0x40968], ebx
L_ae7f:
        mov    eax, dword ptr [esp + 0xc]
        cmp    eax, ebx
        je    L_ae9a
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_ae9a
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_ae9a:
        mov    eax, dword ptr [esp + 0x10]
        cmp    eax, ebx
        je    L_aeb5
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_aeb5
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_aeb5:
        mov    eax, dword ptr [esp + 0x14]
        cmp    eax, ebx
        je    L_aed0
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_aed0
L_aec7:
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_aed0:
        pop    edi
        pop    esi
        xor    eax, eax
        pop    ebx
        add    esp, 0x120
        ret    0xc
        nop    
        nop    
        mov    eax, dword ptr [esp + 0xc]
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        push    ebx
        push    ebp
        mov    ebp, dword ptr [eax]
        push    esi
        mov    esi, dword ptr [g_007dab40]
        push    edi
        mov    edi, dword ptr [eax + 4]
        mov    eax, dword ptr [eax + 8]
        mov    dword ptr [esp + 0x1c], eax
        xor    edx, esi
        mov    eax, dword ptr [edx + 0x44]
        xor    eax, 0x85739531
        mov    eax, dword ptr [eax + 0x38]
        mov    esi, dword ptr [eax + 0x10]
        add    eax, 0x10
L_af15:
        test    esi, esi
        je    L_af30
        mov    ecx, dword ptr [esi]
        test    ecx, ecx
        mov    esi, dword ptr [esi + 4]
        mov    ebx, ecx
        je    L_af32
        call    FUN_005dec20
        cmp    eax, dword ptr [ebp]
        je    L_af32
        jmp    L_af15
L_af30:
        xor    ebx, ebx
L_af32:
        xor    ecx, ecx
        mov    edx, edi
        mov    dword ptr [edx], ecx
        mov    dword ptr [edx + 4], ecx
        mov    dword ptr [edx + 8], ecx
        mov    dword ptr [edx + 0xc], ecx
        mov    ecx, ebx
        call    FUN_005dee50
        xor    ebp, ebp
        cmp    eax, ebp
        mov    dword ptr [edi], eax
        mov    esi, 0x64
        jge    L_af59
        mov    dword ptr [edi], ebp
        jmp    L_af5f
L_af59:
        cmp    eax, esi
        jle    L_af5f
        mov    dword ptr [edi], esi
L_af5f:
        mov    ecx, ebx
        call    FUN_005dee60
        cmp    eax, ebp
        mov    dword ptr [edi + 4], eax
        jge    L_af72
        mov    dword ptr [edi + 4], ebp
        jmp    L_af79
L_af72:
        cmp    eax, esi
        jle    L_af79
        mov    dword ptr [edi + 4], esi
L_af79:
        mov    ecx, ebx
        call    FUN_005dee70
        mov    ecx, 0xa
        sub    ecx, eax
        lea    eax, [ecx + ecx*4]
        shl    eax, 1
        mov    dword ptr [edi + 8], eax
        jns    L_af96
        mov    dword ptr [edi + 8], ebp
        jmp    L_af9d
L_af96:
        cmp    eax, esi
        jle    L_af9d
        mov    dword ptr [edi + 8], esi
L_af9d:
        mov    ecx, ebx
        call    FUN_005dee80
        cdq    
        sub    eax, edx
        sar    eax, 1
        mov    dword ptr [edi + 0xc], eax
        jns    L_afb3
        mov    dword ptr [edi + 0xc], ebp
        jmp    L_afba
L_afb3:
        cmp    eax, esi
        jle    L_afba
        mov    dword ptr [edi + 0xc], esi
L_afba:
        mov    eax, dword ptr [ebx + 0x68]
        mov    ecx, dword ptr [esp + 0x1c]
        pop    edi
        pop    esi
        pop    ebp
        mov    dword ptr [ecx], eax
        mov    eax, 1
        pop    ebx
        ret    0xc
        nop    
        sub    esp, 0x54
        mov    eax, dword ptr [esp + 0x60]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [eax + 0xc]
        push    ebx
        mov    ebx, dword ptr [eax + 4]
        push    ebp
        mov    ebp, dword ptr [eax + 8]
        push    esi
        mov    dword ptr [esp + 0xc], ecx
        mov    ecx, dword ptr [eax + 0x10]
        mov    dword ptr [esp + 0x10], edx
        mov    edx, dword ptr [eax + 0x14]
        mov    eax, dword ptr [g_007dab44]
        mov    esi, dword ptr [eax]
        push    edi
        mov    edi, dword ptr [g_007dab40]
        push    0x14
        mov    dword ptr [esp + 0x1c], ecx
        mov    dword ptr [esp + 0x20], edx
        xor    esi, edi
        call    FUN_004084d0
        mov    edi, eax
        add    esp, 4
        test    edi, edi
        je    L_b03d
        mov    ecx, dword ptr [esi + 0xc]
        xor    ecx, 0x85739531
        mov    edx, dword ptr [ecx + 0x8c]
        add    edx, 0x10
        push    edx
        mov    ecx, edi
        call    FUN_00416bc0
        mov    dword ptr [edi], 0x779e88
        jmp    L_b03f
L_b03d:
        xor    edi, edi
L_b03f:
        mov    ecx, edi
        call    FUN_00416cc0
        mov    esi, eax
        test    esi, esi
        je    L_b0de
L_b050:
        lea    ecx, [esp + 0x20]
        call    FUN_004d1f10
        mov    ax, word ptr [esi + 0x10]
        mov    cx, word ptr [esi + 0x12]
        lea    edx, [esp + 0x70]
        mov    word ptr [esp + 0x70], ax
        push    edx
        lea    eax, [esp + 0x24]
        push    eax
        mov    word ptr [esp + 0x7a], cx
        call    FUN_004da8d0
        mov    eax, dword ptr [esp + 0x3c]
        mov    edx, dword ptr [esp + 0x18]
        mov    ecx, dword ptr [eax + 0x30]
        mov    esi, dword ptr [edx]
        add    esp, 8
        cmp    ecx, esi
        jne    L_b0c4
        cmp    ecx, 0x4e
        fild    dword ptr [eax + 0x48]
        fmul    dword ptr [eax + 0x54]
        fstp    dword ptr [ebx]
        jne    L_b0a1
        mov    dword ptr [ebx], 0x42200000
L_b0a1:
        fld    dword ptr [eax + 0x3c]
        mov    ecx, dword ptr [eax + 0x58]
        mov    edx, dword ptr [esp + 0x14]
        fadd    st(0), st(0)
        mov    dword ptr [ebp], ecx
        mov    ecx, dword ptr [eax + 0x6c]
        mov    eax, dword ptr [eax + 0x1c]
        fstp    dword ptr [edx]
        mov    edx, dword ptr [esp + 0x18]
        mov    dword ptr [edx], ecx
        mov    ecx, dword ptr [esp + 0x1c]
        mov    dword ptr [ecx], eax
L_b0c4:
        lea    ecx, [esp + 0x20]
        call    FUN_004d21c0
        mov    ecx, edi
        call    FUN_00416cc0
        mov    esi, eax
        test    esi, esi
        jne    L_b050
L_b0de:
        test    edi, edi
        je    L_b0ea
        mov    edx, dword ptr [edi]
        push    1
        mov    ecx, edi
        call    dword ptr [edx]
L_b0ea:
        pop    edi
        pop    esi
        pop    ebp
        mov    eax, 1
        pop    ebx
        add    esp, 0x54
        ret    0xc
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 0xc]
        sub    esp, 0x44
        push    ebx
        mov    ebx, dword ptr [eax]
        push    ebp
        mov    ebp, dword ptr [eax + 4]
        mov    eax, dword ptr [g_007dab44]
        push    esi
        mov    esi, dword ptr [eax]
        push    edi
        mov    edi, dword ptr [g_007dab40]
        push    0x14
        mov    dword ptr [ebp], 0
        xor    esi, edi
        call    FUN_004084d0
        mov    edi, eax
        add    esp, 4
        test    edi, edi
        je    L_b158
        mov    ecx, dword ptr [esi + 0xc]
        xor    ecx, 0x85739531
        mov    edx, dword ptr [ecx + 0x90]
        add    edx, 0x10
        push    edx
        mov    ecx, edi
        call    FUN_00416bc0
        mov    dword ptr [edi], 0x779e88
        jmp    L_b15a
L_b158:
        xor    edi, edi
L_b15a:
        mov    ecx, edi
        call    FUN_00416cc0
        mov    esi, eax
        test    esi, esi
        je    L_b1d6
        mov    ebx, dword ptr [ebx]
L_b169:
        lea    ecx, [esp + 0x10]
        call    FUN_004d1f10
        mov    ax, word ptr [esi + 0x10]
        mov    cx, word ptr [esi + 0x12]
        lea    edx, [esp + 0x60]
        mov    word ptr [esp + 0x60], ax
        push    edx
        lea    eax, [esp + 0x14]
        push    eax
        mov    word ptr [esp + 0x6a], cx
        call    FUN_004da8d0
        mov    eax, dword ptr [esp + 0x2c]
        mov    ecx, dword ptr [eax + 0x634]
        add    esp, 8
        cmp    ecx, ebx
        je    L_b1bc
        lea    ecx, [esp + 0x10]
        call    FUN_004d21c0
        mov    ecx, edi
        call    FUN_00416cc0
        mov    esi, eax
        test    esi, esi
        jne    L_b169
        jmp    L_b1d6
L_b1bc:
        fild    dword ptr [eax + 0x78]
        fmul    dword ptr [g_0076ed00]
        call    FUN_0075db4a
        lea    ecx, [esp + 0x10]
        mov    dword ptr [ebp], eax
        call    FUN_004d21c0
L_b1d6:
        test    edi, edi
        je    L_b1e2
        mov    edx, dword ptr [edi]
        push    1
        mov    ecx, edi
        call    dword ptr [edx]
L_b1e2:
        pop    edi
        pop    esi
        pop    ebp
        mov    eax, 1
        pop    ebx
        add    esp, 0x44
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
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    edi
        push    0x14
        mov    edi, ecx
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_b227
        push    edi
        mov    ecx, esi
        call    FUN_00416bf0
        pop    edi
        mov    dword ptr [esi], 0x779cdc
        mov    eax, esi
        pop    esi
        ret    
L_b227:
        pop    edi
        xor    eax, eax
        pop    esi
        ret    
    }
}
