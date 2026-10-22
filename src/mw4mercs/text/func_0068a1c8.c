/*
 * FUN_0068a1c8 (extent 0x68a1c8-0x68a9dd) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_00786350;
extern int    g_007b220c;
extern int    g_007f244c;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_0040c5d0(void);
extern void __cdecl FUN_0041c540(void);
extern void __cdecl FUN_005b8a00(void);
extern void __cdecl FUN_005b8a20(void);
extern void __cdecl FUN_005b8a30(void);
extern void __cdecl FUN_006b0460(void);
extern void __cdecl FUN_006b0520(void);
extern void __cdecl FUN_006b0610(void);
extern void __cdecl FUN_006b0670(void);
extern void __cdecl FUN_006b0680(void);
extern void __cdecl FUN_006b06d0(void);
extern void __cdecl FUN_006b0740(void);
extern void __cdecl FUN_006b0750(void);
extern void __cdecl FUN_006b0780(void);
extern void __cdecl FUN_006b0790(void);
extern void __cdecl FUN_006b07a0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_0068a1c8(void)
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
        push    ecx
        push    ebx
        push    ebp
        push    esi
        mov    esi, dword ptr [esp + 0x14]
        mov    edx, dword ptr [esi]
        push    edi
        mov    edi, ecx
        mov    eax, dword ptr [edi + 0x20]
        mov    dword ptr [esp + 0x10], eax
        push    4
        lea    eax, [esp + 0x14]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    1
        lea    eax, [edi + 0x24]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0x28]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0x2c]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0x3c]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 0x40]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [edi + 0x30]
        mov    ecx, dword ptr [edi + 0x34]
        sub    ecx, edx
        mov    eax, 0x2aaaaaab
        imul    ecx
        sar    edx, 1
        mov    ecx, edx
        shr    ecx, 0x1f
        add    edx, ecx
        push    4
        lea    eax, [esp + 0x1c]
        mov    dword ptr [esp + 0x1c], edx
        mov    edx, dword ptr [esi]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    ebx, dword ptr [edi + 0x30]
        mov    ebp, dword ptr [edi + 0x34]
        cmp    ebx, ebp
        je    L_a276
L_a265:
        mov    edx, dword ptr [esi]
        push    0xc
        push    ebx
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        add    ebx, 0xc
        cmp    ebx, ebp
        jne    L_a265
L_a276:
        push    esi
        mov    ecx, edi
        call    FUN_006b0460
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        pop    ecx
        ret    4
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
        sub    esp, 0x24
        mov    eax, dword ptr [g_007f244c]
        push    esi
        push    edi
        push    eax
        mov    esi, ecx
        call    FUN_006f4950
        mov    edi, dword ptr [esp + 0x30]
        mov    edx, dword ptr [edi]
        push    4
        lea    eax, [esp + 0xc]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
        mov    ecx, dword ptr [esp + 8]
        mov    edx, dword ptr [edi]
        push    1
        lea    eax, [esi + 0x24]
        mov    dword ptr [esi + 0x20], ecx
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
        mov    edx, dword ptr [edi]
        push    4
        lea    eax, [esi + 0x28]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
        mov    edx, dword ptr [edi]
        push    4
        lea    eax, [esi + 0x2c]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
        mov    edx, dword ptr [edi]
        push    4
        lea    eax, [esi + 0x3c]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
        mov    edx, dword ptr [edi]
        push    4
        lea    eax, [esi + 0x40]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
        mov    edx, dword ptr [edi]
        push    4
        lea    eax, [esp + 0xc]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
        mov    eax, dword ptr [esp + 8]
        test    eax, eax
        mov    dword ptr [esp + 0x10], 0
        jle    L_a446
        push    ebx
        push    ebp
L_a320:
        mov    edx, dword ptr [edi]
        push    0xc
        lea    eax, [esp + 0x2c]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
        mov    eax, dword ptr [esi + 0x38]
        mov    ebx, dword ptr [esi + 0x34]
        cmp    ebx, eax
        mov    dword ptr [esp + 0x20], eax
        je    L_a35f
        test    ebx, ebx
        je    L_a354
        mov    ecx, dword ptr [esp + 0x28]
        mov    dword ptr [ebx], ecx
        mov    edx, dword ptr [esp + 0x2c]
        mov    dword ptr [ebx + 4], edx
        mov    eax, dword ptr [esp + 0x30]
        mov    dword ptr [ebx + 8], eax
L_a354:
        add    ebx, 0xc
        mov    dword ptr [esi + 0x34], ebx
        jmp    L_a42f
L_a35f:
        mov    edi, dword ptr [esi + 0x30]
        mov    ecx, ebx
        sub    ecx, edi
        mov    eax, 0x2aaaaaab
        imul    ecx
        sar    edx, 1
        mov    ecx, edx
        shr    ecx, 0x1f
        add    edx, ecx
        cmp    edx, 1
        mov    dword ptr [esp + 0x14], 1
        mov    dword ptr [esp + 0x1c], edx
        lea    eax, [esp + 0x14]
        jb    L_a38f
        lea    eax, [esp + 0x1c]
L_a38f:
        mov    eax, dword ptr [eax]
        add    eax, edx
        mov    dword ptr [esp + 0x1c], eax
        je    L_a3ae
        lea    edx, [eax + eax*2]
        shl    edx, 2
        push    edx
        call    FUN_004084d0
        add    esp, 4
        mov    dword ptr [esp + 0x14], eax
        jmp    L_a3b6
L_a3ae:
        mov    dword ptr [esp + 0x14], 0
L_a3b6:
        mov    eax, dword ptr [esp + 0x38]
        mov    ecx, dword ptr [esp + 0x14]
        push    eax
        push    ecx
        push    ebx
        push    edi
        call    FUN_005b8a30
        mov    ebp, eax
        add    esp, 0x10
        test    ebp, ebp
        je    L_a3dc
        lea    edx, [esp + 0x28]
        push    edx
        mov    ecx, ebp
        call    FUN_0040c5d0
L_a3dc:
        mov    eax, dword ptr [esp + 0x38]
        push    eax
        add    ebp, 0xc
        push    ebp
        push    ebx
        push    ebx
        call    FUN_005b8a30
        mov    ebx, eax
        mov    eax, dword ptr [esp + 0x30]
        sub    eax, edi
        mov    ecx, eax
        mov    eax, 0x2aaaaaab
        imul    ecx
        sar    edx, 1
        mov    ecx, edx
        shr    ecx, 0x1f
        add    edx, ecx
        push    edx
        push    edi
        mov    dword ptr [esp + 0x3c], edi
        call    FUN_005b8a20
        mov    eax, dword ptr [esp + 0x2c]
        mov    ecx, dword ptr [esp + 0x34]
        mov    edi, dword ptr [esp + 0x50]
        lea    edx, [ecx + ecx*2]
        mov    dword ptr [esi + 0x30], eax
        lea    eax, [eax + edx*4]
        add    esp, 0x18
        mov    dword ptr [esi + 0x34], ebx
        mov    dword ptr [esi + 0x38], eax
L_a42f:
        mov    eax, dword ptr [esp + 0x18]
        mov    ecx, dword ptr [esp + 0x10]
        inc    eax
        cmp    eax, ecx
        mov    dword ptr [esp + 0x18], eax
        jl    L_a320
        pop    ebp
        pop    ebx
L_a446:
        push    edi
        mov    ecx, esi
        call    FUN_006b0520
        call    FUN_006f49a0
        pop    edi
        pop    esi
        add    esp, 0x24
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x14
        mov    eax, dword ptr [g_007f244c]
        push    ebx
        push    ebp
        push    esi
        push    eax
        mov    esi, ecx
        call    FUN_006f4950
        mov    eax, dword ptr [esp + 0x24]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [eax + 4]
        mov    eax, dword ptr [eax + 8]
        mov    dword ptr [esp + 0x14], ecx
        lea    ecx, [esp + 0x14]
        push    ecx
        mov    ecx, esi
        mov    dword ptr [esp + 0x1c], edx
        mov    dword ptr [esp + 0x20], eax
        call    FUN_006b0740
        mov    ecx, dword ptr [esi + 0x34]
        mov    ebp, dword ptr [esi + 0x30]
        sub    ecx, ebp
        mov    eax, 0x2aaaaaab
        imul    ecx
        sar    edx, 1
        mov    eax, edx
        shr    eax, 0x1f
        add    edx, eax
        je    L_a4ee
        mov    ecx, dword ptr [g_007b220c]
        push    ecx
        mov    ecx, dword ptr [esi + 0x34]
        mov    ebx, ebp
        sub    ecx, ebx
        mov    eax, 0x2aaaaaab
        imul    ecx
        sar    edx, 1
        mov    eax, edx
        shr    eax, 0x1f
        add    edx, eax
        lea    ecx, [edx + edx*2]
        mov    edx, ebp
        lea    eax, [edx + ecx*4 - 0xc]
        push    eax
        lea    ecx, [esp + 0x1c]
        push    ecx
        call    FUN_0041c540
        add    esp, 0xc
        test    al, al
        jne    L_a601
L_a4ee:
        mov    eax, dword ptr [esi + 0x38]
        mov    ebp, dword ptr [esi + 0x34]
        cmp    ebp, eax
        mov    dword ptr [esp + 0x10], eax
        je    L_a52d
        test    ebp, ebp
        je    L_a515
        mov    edx, dword ptr [esp + 0x14]
        mov    dword ptr [ebp], edx
        mov    eax, dword ptr [esp + 0x18]
        mov    dword ptr [ebp + 4], eax
        mov    ecx, dword ptr [esp + 0x1c]
        mov    dword ptr [ebp + 8], ecx
L_a515:
        add    ebp, 0xc
        mov    dword ptr [esi + 0x34], ebp
        mov    byte ptr [esi + 0x24], 1
        call    FUN_006f49a0
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x14
        ret    4
L_a52d:
        push    edi
        mov    edi, dword ptr [esi + 0x30]
        mov    ecx, ebp
        sub    ecx, edi
        mov    eax, 0x2aaaaaab
        imul    ecx
        sar    edx, 1
        mov    eax, edx
        shr    eax, 0x1f
        add    edx, eax
        cmp    edx, 1
        mov    dword ptr [esp + 0x28], 1
        mov    dword ptr [esp + 0x10], edx
        lea    eax, [esp + 0x28]
        jb    L_a55e
        lea    eax, [esp + 0x10]
L_a55e:
        mov    ebx, dword ptr [eax]
        add    ebx, edx
        je    L_a579
        lea    ecx, [ebx + ebx*2]
        shl    ecx, 2
        push    ecx
        call    FUN_004084d0
        add    esp, 4
        mov    dword ptr [esp + 0x28], eax
        jmp    L_a581
L_a579:
        mov    dword ptr [esp + 0x28], 0
L_a581:
        mov    edx, dword ptr [esp + 0x28]
        mov    eax, dword ptr [esp + 0x28]
        push    edx
        push    eax
        push    ebp
        push    edi
        call    FUN_005b8a30
        add    esp, 0x10
        test    eax, eax
        mov    dword ptr [esp + 0x10], eax
        je    L_a5ad
        lea    ecx, [esp + 0x18]
        push    ecx
        mov    ecx, eax
        call    FUN_0040c5d0
        mov    eax, dword ptr [esp + 0x10]
L_a5ad:
        mov    edx, dword ptr [esp + 0x28]
        push    edx
        add    eax, 0xc
        push    eax
        push    ebp
        push    ebp
        call    FUN_005b8a30
        mov    ebp, eax
        mov    eax, dword ptr [esp + 0x24]
        sub    eax, edi
        mov    ecx, eax
        mov    eax, 0x2aaaaaab
        imul    ecx
        sar    edx, 1
        mov    eax, edx
        shr    eax, 0x1f
        add    esp, 0x10
        add    edx, eax
        push    edx
        push    edi
        mov    dword ptr [esp + 0x18], edi
        lea    edi, [esi + 0x38]
        mov    ecx, edi
        call    FUN_005b8a00
        mov    eax, dword ptr [esp + 0x28]
        lea    ecx, [ebx + ebx*2]
        lea    edx, [eax + ecx*4]
        mov    dword ptr [edi], edx
        mov    dword ptr [esi + 0x30], eax
        mov    dword ptr [esi + 0x34], ebp
        pop    edi
        mov    byte ptr [esi + 0x24], 1
L_a601:
        call    FUN_006f49a0
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x14
        ret    4
        nop    
        mov    eax, dword ptr [esp + 4]
        push    eax
        call    FUN_006b0750
        ret    4
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 4]
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 0xc]
        push    eax
        push    ecx
        push    edx
        mov    ecx, esi
        call    FUN_006b0780
        mov    eax, dword ptr [esi + 0x2c]
        mov    dword ptr [esi + 0x3c], eax
        mov    dword ptr [esi + 0x40], 1
        pop    esi
        ret    0xc
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 4]
        push    ebx
        mov    ebx, dword ptr [esp + 0x14]
        push    esi
        push    ebx
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 0x14]
        push    eax
        push    ecx
        push    edx
        mov    ecx, esi
        call    FUN_006b07a0
        test    bl, bl
        jne    L_a6b0
        mov    eax, dword ptr [esi + 0x20]
        dec    eax
        je    L_a6a7
        dec    eax
        je    L_a694
        dec    eax
        jne    L_a6b0
        mov    eax, dword ptr [esi + 0x40]
        mov    ecx, dword ptr [esi + 0x3c]
        neg    eax
        add    ecx, eax
        mov    dword ptr [esi + 0x40], eax
        mov    dword ptr [esi + 0x3c], ecx
        pop    esi
        pop    ebx
        ret    0x10
L_a694:
        mov    dword ptr [esi + 0x3c], 0
        mov    dword ptr [esi + 0x40], 1
        pop    esi
        pop    ebx
        ret    0x10
L_a6a7:
        mov    eax, dword ptr [esi]
        push    1
        mov    ecx, esi
        call    dword ptr [eax + 0x38]
L_a6b0:
        pop    esi
        pop    ebx
        ret    0x10
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
        mov    eax, dword ptr [esp + 4]
        push    eax
        call    FUN_006b0670
        ret    4
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 8]
        mov    edx, dword ptr [esp + 4]
        push    eax
        push    edx
        call    FUN_006b0680
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
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x20
        push    ebx
        push    esi
        mov    esi, dword ptr [esp + 0x2c]
        mov    eax, dword ptr [esi + 4]
        mov    edx, dword ptr [esi + 0xc]
        push    edi
        mov    edi, ecx
        mov    ecx, dword ptr [esi + 8]
        mov    dword ptr [esp + 0x14], ecx
        mov    ecx, dword ptr [esi + 0x14]
        mov    dword ptr [esp + 0x10], eax
        mov    eax, dword ptr [esi + 0x10]
        mov    dword ptr [esp + 0x20], ecx
        mov    cl, byte ptr [esi + 0x1a]
        mov    dword ptr [esp + 0x18], edx
        mov    dl, byte ptr [esi + 0x18]
        mov    dword ptr [esp + 0x1c], eax
        mov    al, byte ptr [esi + 0x19]
        mov    byte ptr [esp + 0x26], cl
        lea    ecx, [esp + 0xc]
        mov    byte ptr [esp + 0x24], dl
        mov    dl, byte ptr [esi + 0x1b]
        mov    byte ptr [esp + 0x25], al
        mov    eax, dword ptr [esi + 0x1c]
        push    ecx
        mov    ecx, edi
        mov    byte ptr [esp + 0x2b], dl
        mov    dword ptr [esp + 0x2c], eax
        mov    dword ptr [esp + 0x10], 0x798c44
        call    FUN_006b0610
        mov    bl, al
        neg    bl
        sbb    bl, bl
        lea    ecx, [esp + 0xc]
        inc    bl
        call    FUN_006b06d0
        test    bl, bl
        je    L_a776
        pop    edi
        pop    esi
        xor    al, al
        pop    ebx
        add    esp, 0x20
        ret    4
L_a776:
        mov    edx, dword ptr [edi + 0x28]
        mov    eax, dword ptr [esi + 0x28]
        pop    edi
        cmp    edx, eax
        pop    esi
        sete    al
        pop    ebx
        add    esp, 0x20
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x18
        mov    eax, dword ptr [esp + 0x24]
        push    ebx
        mov    ebx, dword ptr [esp + 0x20]
        push    ebp
        push    esi
        push    edi
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 0x30]
        push    eax
        push    ecx
        push    ebx
        mov    ecx, esi
        call    FUN_006b0790
        mov    edi, dword ptr [ebx + 0x35c]
        mov    eax, dword ptr [edi + 0xd8]
        mov    edx, dword ptr [eax + 0x8c]
        add    eax, 0x80
        mov    eax, dword ptr [eax + 0x2c]
        lea    ecx, [edi + 0x78]
        mov    dword ptr [esp + 0x10], edx
        mov    edx, dword ptr [ecx]
        mov    dword ptr [esp + 0x18], eax
        call    dword ptr [edx + 4]
        mov    ecx, dword ptr [esi + 0x3c]
        push    ecx
        lea    edx, [esp + 0x20]
        mov    ebp, eax
        mov    eax, dword ptr [esi]
        push    edx
        mov    ecx, esi
        call    dword ptr [eax + 0x2c]
        fld    dword ptr [eax]
        fsub    dword ptr [esp + 0x10]
        mov    eax, dword ptr [eax + 8]
        mov    dword ptr [esp + 0x24], eax
        fld    dword ptr [esp + 0x24]
        fsub    dword ptr [esp + 0x18]
        fld    st(0)
        fmul st(0), st(1)
        fld    st(2)
        fmul st(0), st(3)
        faddp st(1), st(0)
        fstp    st(2)
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [edi + 0x42c]
        fmul    dword ptr [ebp + 0x2bc]
        fld    st(1)
        fcomp    qword ptr [g_00786350]
        fnstsw  ax
        test    ah, 1
        jne    L_a83e
        fld    st(0)
        fmul st(0), st(1)
        fxch    st(1)
        fxch    st(2)
        fcompp    
        fnstsw  ax
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        test    ah, 1
        je    L_a887
        jmp    L_a842
L_a83e:
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_a842:
        mov    edi, dword ptr [esi + 0x40]
        test    edi, edi
        jle    L_a861
        mov    ecx, dword ptr [esi + 0x3c]
        mov    edx, dword ptr [esi]
        lea    ebp, [edi + ecx]
        mov    ecx, esi
        call    dword ptr [edx + 0x30]
        cmp    eax, ebp
        jle    L_a85f
        mov    dword ptr [esi + 0x3c], ebp
        jmp    L_a887
L_a85f:
        test    edi, edi
L_a861:
        jge    L_a871
        mov    eax, dword ptr [esi + 0x3c]
        add    eax, edi
        test    eax, eax
        jle    L_a871
        mov    dword ptr [esi + 0x3c], eax
        jmp    L_a887
L_a871:
        mov    eax, dword ptr [esp + 0x34]
        mov    ecx, dword ptr [esp + 0x30]
        mov    edx, dword ptr [ebx]
        push    0
        push    eax
        push    ecx
        mov    ecx, ebx
        call    dword ptr [edx + 0x15c]
L_a887:
        mov    eax, dword ptr [esi]
        mov    edi, dword ptr [ebx]
        push    0
        lea    edx, [esp + 0x14]
        push    edx
        mov    ecx, esi
        mov    dword ptr [esp + 0x18], 0xbf800000
        mov    dword ptr [esp + 0x1c], 0xbf800000
        mov    dword ptr [esp + 0x20], 0xbf800000
        call    dword ptr [eax + 0x34]
        mov    eax, dword ptr [esi + 0x3c]
        mov    edx, dword ptr [esi]
        push    ecx
        fstp    dword ptr [esp]
        push    eax
        lea    ecx, [esp + 0x2c]
        push    ecx
        mov    ecx, esi
        call    dword ptr [edx + 0x2c]
        push    eax
        mov    ecx, ebx
        call    dword ptr [edi + 0x1d0]
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x18
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
        mov    eax, dword ptr [esp + 8]
        mov    ecx, dword ptr [ecx + 0x30]
        lea    eax, [eax + eax*2]
        mov    edx, dword ptr [ecx + eax*4]
        lea    ecx, [ecx + eax*4]
        mov    eax, dword ptr [esp + 4]
        mov    dword ptr [eax], edx
        mov    edx, dword ptr [ecx + 4]
        mov    ecx, dword ptr [ecx + 8]
        mov    dword ptr [eax + 4], edx
        mov    dword ptr [eax + 8], ecx
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
        nop    
        mov    eax, dword ptr [ecx + 0x30]
        mov    edx, dword ptr [ecx + 0x34]
        sub    edx, eax
        mov    eax, 0x2aaaaaab
        imul    edx
        mov    eax, edx
        sar    eax, 1
        mov    ecx, eax
        shr    ecx, 0x1f
        add    eax, ecx
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007f244c]
        sub    esp, 0xc
        push    esi
        push    eax
        mov    esi, ecx
        call    FUN_006f4950
        mov    eax, dword ptr [esi + 0x34]
        mov    ecx, dword ptr [esi + 0x30]
        cmp    ecx, eax
        pop    esi
        jae    L_a986
L_a94c:
        mov    edx, dword ptr [ecx + 4]
        fld    dword ptr [ecx]
        mov    dword ptr [esp + 4], edx
        mov    edx, dword ptr [ecx + 8]
        sub    eax, 0xc
        mov    dword ptr [esp + 8], edx
        mov    edx, dword ptr [eax]
        fstp    dword ptr [eax]
        mov    dword ptr [ecx], edx
        mov    edx, dword ptr [eax + 4]
        mov    dword ptr [ecx + 4], edx
        mov    edx, dword ptr [eax + 8]
        mov    dword ptr [ecx + 8], edx
        mov    edx, dword ptr [esp + 4]
        mov    dword ptr [eax + 4], edx
        mov    edx, dword ptr [esp + 8]
        add    ecx, 0xc
        cmp    ecx, eax
        mov    dword ptr [eax + 8], edx
        jb    L_a94c
L_a986:
        call    FUN_006f49a0
        add    esp, 0xc
        ret    
        nop    
        push    esi
        mov    esi, ecx
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    eax, dword ptr [edi + 0x30]
        mov    edx, dword ptr [edi + 0x168]
        mov    ecx, dword ptr [edi + 0x16c]
        sub    ecx, edx
        mov    dword ptr [esi + 0x28], eax
        mov    eax, 0x2aaaaaab
        imul    ecx
        sar    edx, 1
        mov    ecx, edx
        shr    ecx, 0x1f
        add    edx, ecx
        test    edx, edx
        jle    L_a9d8
        mov    edi, dword ptr [edi + 0x168]
        push    ebx
        mov    ebx, edx
L_a9c9:
        mov    edx, dword ptr [esi]
        push    edi
        mov    ecx, esi
        call    dword ptr [edx + 0xc]
        add    edi, 0xc
        dec    ebx
        jne    L_a9c9
        pop    ebx
L_a9d8:
        pop    edi
        pop    esi
        ret    4
    }
}
