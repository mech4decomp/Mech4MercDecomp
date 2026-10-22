/*
 * FUN_004b7851 (extent 0x4b7851-0x4b83ad) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b2e4;
extern int    g_0076b2ec;
extern float  g_0076c5b0;
extern float  g_007709b0;
extern int    g_007b220c;
extern int    g_007da9e8;
extern int    g_007daa28;
extern int    g_007daa2c;
extern int    g_007daa30;
extern int    g_007daa34;
extern int    g_007daa38;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00415d70(void);
extern void __cdecl FUN_0041c540(void);
extern void __cdecl FUN_00491280(void);
extern void __cdecl FUN_00491670(void);
extern void __cdecl FUN_004c7c50(void);
extern void __cdecl FUN_004c81f0(void);
extern void __cdecl FUN_004c82a0(void);
extern void __cdecl FUN_004c8460(void);
extern void __cdecl FUN_0075db4a(void);

__declspec(naked) void FUN_004b7851(void)
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
        mov    eax, dword ptr [esp + 4]
        push    eax
        call    FUN_004c7c50
        ret    4
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        push    eax
        call    FUN_004c82a0
        ret    4
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        push    eax
        call    FUN_004c81f0
        ret    4
        nop    
        nop    
        nop    
        sub    esp, 0x7c
        push    ebx
        mov    ebx, dword ptr [esp + 0x84]
        push    ebp
        push    esi
        xor    esi, esi
        push    edi
        mov    edi, ecx
        xor    ebp, ebp
        mov    dword ptr [esp + 0x18], edi
        mov    dword ptr [esp + 0x1c], esi
        mov    dword ptr [esp + 0x28], esi
        mov    dword ptr [esp + 0x14], esi
        mov    dword ptr [esp + 0x2c], esi
        mov    edx, 1
        mov    ecx, 0xc
        mov    dword ptr [esp + 0x20], ebp
        mov    dword ptr [esp + 0x24], ebp
L_78ca:
        mov    eax, dword ptr [esp + 0x24]
        fld    dword ptr [ecx + ebx + 0x228]
        fcomp    dword ptr [eax + ebx + 0x228]
        fnstsw  ax
        test    ah, 1
        je    L_78eb
        mov    dword ptr [esp + 0x2c], edx
        mov    dword ptr [esp + 0x24], ecx
L_78eb:
        mov    eax, dword ptr [esp + 0x20]
        fld    dword ptr [ecx + ebx + 0x228]
        fcomp    dword ptr [eax + ebx + 0x228]
        fnstsw  ax
        test    ah, 0x41
        jne    L_790c
        mov    dword ptr [esp + 0x14], edx
        mov    dword ptr [esp + 0x20], ecx
L_790c:
        fld    dword ptr [ecx + ebx + 0x230]
        fcomp    dword ptr [esi + ebx + 0x230]
        fnstsw  ax
        test    ah, 1
        je    L_7927
        mov    dword ptr [esp + 0x28], edx
        mov    esi, ecx
L_7927:
        fld    dword ptr [ecx + ebx + 0x230]
        fcomp    dword ptr [ebx + ebp + 0x230]
        fnstsw  ax
        test    ah, 0x41
        jne    L_7942
        mov    dword ptr [esp + 0x1c], edx
        mov    ebp, ecx
L_7942:
        add    ecx, 0xc
        inc    edx
        cmp    ecx, 0x3c
        jl    L_78ca
        mov    edx, dword ptr [esp + 0x28]
        mov    ecx, dword ptr [esp + 0x2c]
        cmp    edx, ecx
        mov    dword ptr [esp + 0x10], 0
        mov    dword ptr [esp + 0x48], edx
        je    L_799d
        mov    eax, dword ptr [esp + 0x1c]
        cmp    ecx, eax
        mov    dword ptr [esp + 0x4c], ecx
        je    L_7993
        mov    ecx, dword ptr [esp + 0x14]
        cmp    eax, ecx
        mov    dword ptr [esp + 0x50], eax
        mov    esi, 3
        je    L_79b2
        cmp    ecx, edx
        je    L_79b2
        mov    dword ptr [esp + 0x54], ecx
        mov    esi, 4
        jmp    L_79b2
L_7993:
        mov    ecx, dword ptr [esp + 0x14]
        mov    dword ptr [esp + 0x50], ecx
        jmp    L_79ad
L_799d:
        mov    edx, dword ptr [esp + 0x1c]
        mov    eax, dword ptr [esp + 0x14]
        mov    dword ptr [esp + 0x4c], edx
        mov    dword ptr [esp + 0x50], eax
L_79ad:
        mov    esi, 3
L_79b2:
        xor    edx, edx
        lea    ebp, [esp + 0x38]
L_79b8:
        xor    eax, eax
        test    esi, esi
        jle    L_79ce
        lea    ecx, [esp + 0x48]
L_79c2:
        cmp    edx, dword ptr [ecx]
        je    L_79ce
        inc    eax
        add    ecx, 4
        cmp    eax, esi
        jl    L_79c2
L_79ce:
        cmp    eax, esi
        jne    L_79e1
        mov    ecx, dword ptr [esp + 0x10]
        inc    ecx
        mov    dword ptr [ebp], edx
        mov    dword ptr [esp + 0x10], ecx
        add    ebp, 4
L_79e1:
        inc    edx
        cmp    edx, 5
        jl    L_79b8
        mov    eax, dword ptr [esp + 0x10]
        test    eax, eax
        jle    L_7b3f
        lea    ecx, [esp + 0x38]
        lea    edx, [esp + esi*4 + 0x48]
        mov    dword ptr [esp + 0x10], ecx
        mov    dword ptr [esp + 0x24], edx
        mov    dword ptr [esp + 0x30], eax
L_7a07:
        test    esi, esi
        mov    dword ptr [esp + 0x20], 0
        jle    L_7a6a
        mov    eax, dword ptr [esp + 0x10]
        mov    eax, dword ptr [eax]
        lea    ecx, [eax + eax*2]
        lea    edx, [ebx + ecx*4 + 0x228]
        mov    dword ptr [esp + 0x34], edx
        lea    ebp, [esp + 0x48]
L_7a2b:
        mov    eax, dword ptr [g_007b220c]
        push    eax
        mov    eax, dword ptr [ebp]
        lea    ecx, [eax + eax*2]
        mov    eax, dword ptr [esp + 0x38]
        lea    edx, [ebx + ecx*4 + 0x228]
        push    edx
        push    eax
        call    FUN_0041c540
        add    esp, 0xc
        test    al, al
        mov    eax, dword ptr [esp + 0x20]
        jne    L_7a62
        inc    eax
        add    ebp, 4
        cmp    eax, esi
        mov    dword ptr [esp + 0x20], eax
        jl    L_7a2b
        jmp    L_7a6a
L_7a62:
        cmp    eax, esi
        jl    L_7b25
L_7a6a:
        xor    ebp, ebp
        test    esi, esi
        jle    L_7b25
        mov    ecx, dword ptr [esp + 0x10]
        mov    eax, dword ptr [ecx]
        lea    edx, [eax + eax*2]
        lea    edx, [ebx + edx*4 + 0x228]
        lea    edi, [esp + 0x48]
L_7a88:
        lea    eax, [ebp + 1]
        cmp    eax, esi
        mov    dword ptr [esp + 0x34], eax
        jne    L_7a95
        xor    eax, eax
L_7a95:
        mov    eax, dword ptr [esp + eax*4 + 0x48]
        lea    eax, [eax + eax*2]
        fld    dword ptr [ebx + eax*4 + 0x228]
        lea    ecx, [ebx + eax*4 + 0x228]
        mov    eax, dword ptr [edi]
        lea    eax, [eax + eax*2]
        fsub    dword ptr [ebx + eax*4 + 0x228]
        lea    eax, [ebx + eax*4 + 0x228]
        fld    dword ptr [edx + 8]
        fsub    dword ptr [eax + 8]
        fmulp st(1), st(0)
        fld    dword ptr [ecx + 8]
        fsub    dword ptr [eax + 8]
        fld    dword ptr [edx]
        fsub    dword ptr [eax]
        fmulp st(1), st(0)
        fsubp st(1), st(0)
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        je    L_7aed
        mov    ebp, dword ptr [esp + 0x34]
        add    edi, 4
        cmp    ebp, esi
        jl    L_7a88
        jmp    L_7b21
L_7aed:
        cmp    ebp, esi
        jge    L_7b21
        lea    edx, [ebp + 1]
        cmp    esi, edx
        jle    L_7b0b
        mov    eax, dword ptr [esp + 0x24]
        mov    ecx, esi
        sub    ecx, edx
L_7b00:
        mov    edx, dword ptr [eax - 4]
        mov    dword ptr [eax], edx
        add    eax, -4
        dec    ecx
        jne    L_7b00
L_7b0b:
        mov    eax, dword ptr [esp + 0x10]
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + ebp*4 + 0x4c], eax
        mov    eax, dword ptr [esp + 0x24]
        inc    esi
        add    eax, 4
        mov    dword ptr [esp + 0x24], eax
L_7b21:
        mov    edi, dword ptr [esp + 0x18]
L_7b25:
        mov    ecx, dword ptr [esp + 0x10]
        mov    eax, dword ptr [esp + 0x30]
        add    ecx, 4
        dec    eax
        mov    dword ptr [esp + 0x10], ecx
        mov    dword ptr [esp + 0x30], eax
        jne    L_7a07
L_7b3f:
        mov    eax, dword ptr [esp + 0x28]
        lea    ecx, [eax + eax*2]
        fld    dword ptr [ebx + ecx*4 + 0x230]
        sub    esp, 8
        fsub    dword ptr [edi + 0x15c]
        fsub    dword ptr [g_007709b0]
        fdiv    dword ptr [edi + 0x154]
        fstp    qword ptr [esp]
        call    dword ptr [g_0076b2e4]
        add    esp, 8
        call    FUN_0075db4a
        mov    ebp, eax
        test    ebp, ebp
        mov    dword ptr [esp + 0x30], ebp
        jge    L_7b83
        xor    ebp, ebp
        mov    dword ptr [esp + 0x30], ebp
L_7b83:
        mov    eax, dword ptr [esp + 0x1c]
        lea    edx, [eax + eax*2]
        fld    dword ptr [ebx + edx*4 + 0x230]
        sub    esp, 8
        fsub    dword ptr [edi + 0x15c]
        fadd    dword ptr [g_007709b0]
        fdiv    dword ptr [edi + 0x154]
        fstp    qword ptr [esp]
        call    dword ptr [g_0076b2ec]
        add    esp, 8
        call    FUN_0075db4a
        mov    esi, eax
        xor    eax, eax
        mov    al, byte ptr [edi + 0x150]
        cmp    esi, eax
        jle    L_7bc7
        mov    esi, eax
L_7bc7:
        fild    dword ptr [esp + 0x30]
        sub    esp, 8
        fmul    dword ptr [edi + 0x154]
        fadd    dword ptr [edi + 0x15c]
        fstp    dword ptr [esp + 0x6c]
        mov    eax, dword ptr [esp + 0x6c]
        fld    dword ptr [esp + 0x6c]
        mov    dword ptr [esp + 0x78], eax
        fadd    dword ptr [edi + 0x154]
        mov    eax, dword ptr [esp + 0x34]
        lea    ecx, [eax + eax*2]
        fst    dword ptr [esp + 0x84]
        fstp    dword ptr [esp + 0x90]
        fld    dword ptr [ebx + ecx*4 + 0x228]
        fsub    dword ptr [edi + 0x160]
        fsub    dword ptr [g_007709b0]
        fdiv    dword ptr [edi + 0x158]
        fstp    qword ptr [esp]
        call    dword ptr [g_0076b2e4]
        add    esp, 8
        call    FUN_0075db4a
        test    eax, eax
        mov    dword ptr [esp + 0x10], eax
        jge    L_7c3f
        mov    dword ptr [esp + 0x10], 0
L_7c3f:
        mov    eax, dword ptr [esp + 0x14]
        lea    edx, [eax + eax*2]
        fld    dword ptr [ebx + edx*4 + 0x228]
        sub    esp, 8
        fsub    dword ptr [edi + 0x160]
        fadd    dword ptr [g_007709b0]
        fdiv    dword ptr [edi + 0x158]
        fstp    qword ptr [esp]
        call    dword ptr [g_0076b2ec]
        add    esp, 8
        call    FUN_0075db4a
        mov    ecx, eax
        xor    eax, eax
        mov    al, byte ptr [edi + 0x151]
        mov    dword ptr [esp + 0x2c], ecx
        cmp    ecx, eax
        jle    L_7c8b
        mov    dword ptr [esp + 0x2c], eax
        mov    ecx, eax
L_7c8b:
        cmp    ebp, esi
        jge    L_7dc6
        fild    dword ptr [esp + 0x10]
        lea    edx, [eax*4]
        imul    eax, ebp
        fmul    dword ptr [edi + 0x158]
        fadd    dword ptr [edi + 0x160]
        mov    dword ptr [esp + 0x24], edx
        fstp    dword ptr [esp + 0x34]
        add    eax, dword ptr [esp + 0x10]
        shl    eax, 2
        sub    esi, ebp
        mov    dword ptr [esp + 0x30], eax
        mov    dword ptr [esp + 0x28], esi
L_7cc6:
        fld    dword ptr [esp + 0x34]
        mov    edx, dword ptr [esp + 0x10]
        cmp    edx, ecx
        fst    dword ptr [esp + 0x5c]
        fld    st(0)
        fadd    dword ptr [edi + 0x158]
        fst    dword ptr [esp + 0x68]
        fstp    dword ptr [esp + 0x74]
        fstp    dword ptr [esp + 0x80]
        jge    L_7d6b
        mov    edi, dword ptr [edi + 0x144]
        add    edi, eax
        mov    ebp, ecx
        mov    eax, edx
        sub    ebp, eax
L_7cfb:
        mov    esi, dword ptr [edi]
        push    ebx
        mov    ecx, esi
        call    dword ptr [esi + 0x130]
        cmp    eax, -1
        je    L_7d1d
        push    eax
        mov    eax, dword ptr [esp + 0x98]
        push    eax
        push    ebx
        mov    ecx, esi
        call    dword ptr [esi + 0x13c]
L_7d1d:
        mov    eax, dword ptr [esp + 0x18]
        fld    dword ptr [esp + 0x5c]
        fadd    dword ptr [eax + 0x158]
        add    edi, 4
        dec    ebp
        fstp    dword ptr [esp + 0x5c]
        fld    dword ptr [esp + 0x68]
        fadd    dword ptr [eax + 0x158]
        fstp    dword ptr [esp + 0x68]
        fld    dword ptr [esp + 0x74]
        fadd    dword ptr [eax + 0x158]
        fstp    dword ptr [esp + 0x74]
        fld    dword ptr [esp + 0x80]
        fadd    dword ptr [eax + 0x158]
        fstp    dword ptr [esp + 0x80]
        jne    L_7cfb
        mov    ecx, dword ptr [esp + 0x2c]
        mov    edi, eax
L_7d6b:
        fld    dword ptr [esp + 0x64]
        mov    eax, dword ptr [esp + 0x30]
        fadd    dword ptr [edi + 0x154]
        mov    esi, dword ptr [esp + 0x24]
        mov    edx, dword ptr [esp + 0x28]
        add    eax, esi
        fstp    dword ptr [esp + 0x64]
        dec    edx
        fld    dword ptr [esp + 0x70]
        mov    dword ptr [esp + 0x30], eax
        fadd    dword ptr [edi + 0x154]
        mov    dword ptr [esp + 0x28], edx
        fstp    dword ptr [esp + 0x70]
        fld    dword ptr [esp + 0x7c]
        fadd    dword ptr [edi + 0x154]
        fstp    dword ptr [esp + 0x7c]
        fld    dword ptr [esp + 0x88]
        fadd    dword ptr [edi + 0x154]
        fstp    dword ptr [esp + 0x88]
        jne    L_7cc6
L_7dc6:
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x7c
        ret    0xc
        sub    esp, 0xb4
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov    edi, ecx
        lea    ecx, [esp + 0x8c]
        mov    dword ptr [esp + 0x30], edi
        call    FUN_00491280
        mov    esi, dword ptr [edi + 0x140]
        mov    ebx, dword ptr [esp + 0xcc]
        push    esi
        xor    ebp, ebp
        push    ebx
        lea    ecx, [esp + 0x94]
        mov    dword ptr [esp + 0xac], ebp
        call    FUN_00491670
        add    esi, 0x18
        push    esi
        add    ebx, 0x18
        lea    eax, [esp + 0xa8]
        push    ebx
        push    eax
        call    FUN_004c8460
        mov    ebx, dword ptr [esp + 0xd4]
        add    esp, 0xc
        xor    esi, esi
        mov    dword ptr [esp + 0x34], ebp
        mov    dword ptr [esp + 0x20], ebp
        mov    dword ptr [esp + 0x2c], ebp
        mov    dword ptr [esp + 0x1c], ebp
        mov    edx, 1
        mov    ecx, 0xc
        mov    dword ptr [esp + 0x24], esi
        mov    dword ptr [esp + 0x14], esi
L_7e53:
        mov    eax, dword ptr [esp + 0x14]
        fld    dword ptr [ecx + ebx + 0x228]
        fcomp    dword ptr [eax + ebx + 0x228]
        fnstsw  ax
        test    ah, 1
        je    L_7e74
        mov    dword ptr [esp + 0x1c], edx
        mov    dword ptr [esp + 0x14], ecx
L_7e74:
        mov    eax, dword ptr [esp + 0x24]
        fld    dword ptr [ecx + ebx + 0x228]
        fcomp    dword ptr [eax + ebx + 0x228]
        fnstsw  ax
        test    ah, 0x41
        jne    L_7e95
        mov    dword ptr [esp + 0x2c], edx
        mov    dword ptr [esp + 0x24], ecx
L_7e95:
        fld    dword ptr [ecx + ebx + 0x230]
        fcomp    dword ptr [esi + ebx + 0x230]
        fnstsw  ax
        test    ah, 1
        je    L_7eb0
        mov    dword ptr [esp + 0x20], edx
        mov    esi, ecx
L_7eb0:
        fld    dword ptr [ecx + ebx + 0x230]
        fcomp    dword ptr [ebx + ebp + 0x230]
        fnstsw  ax
        test    ah, 0x41
        jne    L_7ecb
        mov    dword ptr [esp + 0x34], edx
        mov    ebp, ecx
L_7ecb:
        add    ecx, 0xc
        inc    edx
        cmp    ecx, 0x3c
        jl    L_7e53
        mov    edx, dword ptr [esp + 0x20]
        mov    ecx, dword ptr [esp + 0x1c]
        cmp    edx, ecx
        mov    dword ptr [esp + 0x10], 0
        mov    dword ptr [esp + 0x38], edx
        je    L_7f26
        mov    eax, dword ptr [esp + 0x34]
        cmp    ecx, eax
        mov    dword ptr [esp + 0x3c], ecx
        je    L_7f1c
        mov    ecx, dword ptr [esp + 0x2c]
        cmp    eax, ecx
        mov    dword ptr [esp + 0x40], eax
        mov    esi, 3
        je    L_7f3b
        cmp    ecx, edx
        je    L_7f3b
        mov    dword ptr [esp + 0x44], ecx
        mov    esi, 4
        jmp    L_7f3b
L_7f1c:
        mov    ecx, dword ptr [esp + 0x2c]
        mov    dword ptr [esp + 0x40], ecx
        jmp    L_7f36
L_7f26:
        mov    edx, dword ptr [esp + 0x34]
        mov    eax, dword ptr [esp + 0x2c]
        mov    dword ptr [esp + 0x3c], edx
        mov    dword ptr [esp + 0x40], eax
L_7f36:
        mov    esi, 3
L_7f3b:
        xor    edx, edx
        lea    ebp, [esp + 0x7c]
L_7f41:
        xor    eax, eax
        test    esi, esi
        jle    L_7f57
        lea    ecx, [esp + 0x38]
L_7f4b:
        cmp    edx, dword ptr [ecx]
        je    L_7f57
        inc    eax
        add    ecx, 4
        cmp    eax, esi
        jl    L_7f4b
L_7f57:
        cmp    eax, esi
        jne    L_7f6a
        mov    ecx, dword ptr [esp + 0x10]
        inc    ecx
        mov    dword ptr [ebp], edx
        mov    dword ptr [esp + 0x10], ecx
        add    ebp, 4
L_7f6a:
        inc    edx
        cmp    edx, 5
        jl    L_7f41
        mov    eax, dword ptr [esp + 0x10]
        test    eax, eax
        jle    L_80c2
        lea    ecx, [esp + 0x7c]
        lea    edx, [esp + esi*4 + 0x38]
        mov    dword ptr [esp + 0x10], ecx
        mov    dword ptr [esp + 0x14], edx
        mov    dword ptr [esp + 0x18], eax
L_7f90:
        test    esi, esi
        mov    dword ptr [esp + 0x24], 0
        jle    L_7ff3
        mov    eax, dword ptr [esp + 0x10]
        mov    eax, dword ptr [eax]
        lea    ecx, [eax + eax*2]
        lea    edx, [ebx + ecx*4 + 0x228]
        mov    dword ptr [esp + 0x28], edx
        lea    ebp, [esp + 0x38]
L_7fb4:
        mov    eax, dword ptr [g_007b220c]
        push    eax
        mov    eax, dword ptr [ebp]
        lea    ecx, [eax + eax*2]
        mov    eax, dword ptr [esp + 0x2c]
        lea    edx, [ebx + ecx*4 + 0x228]
        push    edx
        push    eax
        call    FUN_0041c540
        add    esp, 0xc
        test    al, al
        mov    eax, dword ptr [esp + 0x24]
        jne    L_7feb
        inc    eax
        add    ebp, 4
        cmp    eax, esi
        mov    dword ptr [esp + 0x24], eax
        jl    L_7fb4
        jmp    L_7ff3
L_7feb:
        cmp    eax, esi
        jl    L_80a8
L_7ff3:
        xor    ebp, ebp
        test    esi, esi
        jle    L_80a8
        mov    ecx, dword ptr [esp + 0x10]
        mov    eax, dword ptr [ecx]
        lea    edx, [eax + eax*2]
        lea    edx, [ebx + edx*4 + 0x228]
        lea    edi, [esp + 0x38]
L_8011:
        lea    eax, [ebp + 1]
        cmp    eax, esi
        mov    dword ptr [esp + 0x28], eax
        jne    L_801e
        xor    eax, eax
L_801e:
        mov    eax, dword ptr [esp + eax*4 + 0x38]
        fld    dword ptr [edx + 8]
        lea    eax, [eax + eax*2]
        lea    ecx, [ebx + eax*4 + 0x228]
        mov    eax, dword ptr [edi]
        lea    eax, [eax + eax*2]
        fsub    dword ptr [ebx + eax*4 + 0x230]
        lea    eax, [ebx + eax*4 + 0x228]
        fld    dword ptr [ecx]
        fsub    dword ptr [eax]
        fmulp st(1), st(0)
        fld    dword ptr [ecx + 8]
        fsub    dword ptr [eax + 8]
        fld    dword ptr [edx]
        fsub    dword ptr [eax]
        fmulp st(1), st(0)
        fsubp st(1), st(0)
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        je    L_8070
        mov    ebp, dword ptr [esp + 0x28]
        add    edi, 4
        cmp    ebp, esi
        jl    L_8011
        jmp    L_80a4
L_8070:
        cmp    ebp, esi
        jge    L_80a4
        lea    edx, [ebp + 1]
        cmp    esi, edx
        jle    L_808e
        mov    eax, dword ptr [esp + 0x14]
        mov    ecx, esi
        sub    ecx, edx
L_8083:
        mov    edx, dword ptr [eax - 4]
        mov    dword ptr [eax], edx
        add    eax, -4
        dec    ecx
        jne    L_8083
L_808e:
        mov    eax, dword ptr [esp + 0x10]
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + ebp*4 + 0x3c], eax
        mov    eax, dword ptr [esp + 0x14]
        inc    esi
        add    eax, 4
        mov    dword ptr [esp + 0x14], eax
L_80a4:
        mov    edi, dword ptr [esp + 0x30]
L_80a8:
        mov    ecx, dword ptr [esp + 0x10]
        mov    eax, dword ptr [esp + 0x18]
        add    ecx, 4
        dec    eax
        mov    dword ptr [esp + 0x10], ecx
        mov    dword ptr [esp + 0x18], eax
        jne    L_7f90
L_80c2:
        mov    eax, dword ptr [esp + 0x20]
        lea    ecx, [eax + eax*2]
        fld    dword ptr [ebx + ecx*4 + 0x230]
        sub    esp, 8
        fsub    dword ptr [edi + 0x15c]
        fdiv    dword ptr [edi + 0x154]
        fstp    qword ptr [esp]
        call    dword ptr [g_0076b2e4]
        add    esp, 8
        call    FUN_0075db4a
        mov    ebp, eax
        test    ebp, ebp
        mov    dword ptr [esp + 0x18], ebp
        jge    L_8100
        xor    ebp, ebp
        mov    dword ptr [esp + 0x18], ebp
L_8100:
        mov    eax, dword ptr [esp + 0x34]
        lea    edx, [eax + eax*2]
        fld    dword ptr [ebx + edx*4 + 0x230]
        sub    esp, 8
        fsub    dword ptr [edi + 0x15c]
        fdiv    dword ptr [edi + 0x154]
        fstp    qword ptr [esp]
        call    dword ptr [g_0076b2ec]
        add    esp, 8
        call    FUN_0075db4a
        mov    esi, eax
        xor    eax, eax
        mov    al, byte ptr [edi + 0x150]
        cmp    esi, eax
        jle    L_813e
        mov    esi, eax
L_813e:
        fild    dword ptr [esp + 0x18]
        sub    esp, 8
        fmul    dword ptr [edi + 0x154]
        fadd    dword ptr [edi + 0x15c]
        fstp    dword ptr [esp + 0x5c]
        mov    eax, dword ptr [esp + 0x5c]
        fld    dword ptr [esp + 0x5c]
        mov    dword ptr [esp + 0x68], eax
        fadd    dword ptr [edi + 0x154]
        mov    eax, dword ptr [esp + 0x24]
        lea    ecx, [eax + eax*2]
        fst    dword ptr [esp + 0x74]
        fstp    dword ptr [esp + 0x80]
        fld    dword ptr [ebx + ecx*4 + 0x228]
        fsub    dword ptr [edi + 0x160]
        fdiv    dword ptr [edi + 0x158]
        fstp    qword ptr [esp]
        call    dword ptr [g_0076b2e4]
        add    esp, 8
        call    FUN_0075db4a
        test    eax, eax
        mov    dword ptr [esp + 0x10], eax
        jge    L_81ad
        mov    dword ptr [esp + 0x10], 0
L_81ad:
        mov    eax, dword ptr [esp + 0x2c]
        lea    edx, [eax + eax*2]
        fld    dword ptr [ebx + edx*4 + 0x228]
        sub    esp, 8
        fsub    dword ptr [edi + 0x160]
        fdiv    dword ptr [edi + 0x158]
        fstp    qword ptr [esp]
        call    dword ptr [g_0076b2ec]
        add    esp, 8
        call    FUN_0075db4a
        mov    ecx, eax
        xor    eax, eax
        mov    al, byte ptr [edi + 0x151]
        mov    dword ptr [esp + 0x1c], ecx
        cmp    ecx, eax
        jle    L_81f3
        mov    dword ptr [esp + 0x1c], eax
        mov    ecx, eax
L_81f3:
        cmp    ebp, esi
        jge    L_831f
        fild    dword ptr [esp + 0x10]
        lea    edx, [eax*4]
        imul    eax, ebp
        fmul    dword ptr [edi + 0x158]
        fadd    dword ptr [edi + 0x160]
        mov    dword ptr [esp + 0x14], edx
        fstp    dword ptr [esp + 0x28]
        add    eax, dword ptr [esp + 0x10]
        shl    eax, 2
        sub    esi, ebp
        mov    dword ptr [esp + 0x18], eax
        mov    dword ptr [esp + 0x20], esi
L_822e:
        fld    dword ptr [esp + 0x28]
        mov    edx, dword ptr [esp + 0x10]
        cmp    edx, ecx
        fst    dword ptr [esp + 0x4c]
        fld    st(0)
        fadd    dword ptr [edi + 0x158]
        fst    dword ptr [esp + 0x58]
        fstp    dword ptr [esp + 0x64]
        fstp    dword ptr [esp + 0x70]
        jge    L_82ca
        mov    edi, dword ptr [edi + 0x144]
        add    edi, eax
        mov    ebp, ecx
        mov    eax, edx
        sub    ebp, eax
L_8260:
        mov    esi, dword ptr [edi]
        push    ebx
        mov    ecx, esi
        call    dword ptr [esi + 0x130]
        cmp    eax, -1
        je    L_8282
        push    eax
        mov    eax, dword ptr [esp + 0xd0]
        push    eax
        push    ebx
        mov    ecx, esi
        call    dword ptr [esi + 0x13c]
L_8282:
        mov    eax, dword ptr [esp + 0x30]
        fld    dword ptr [esp + 0x4c]
        fadd    dword ptr [eax + 0x154]
        add    edi, 4
        dec    ebp
        fstp    dword ptr [esp + 0x4c]
        fld    dword ptr [esp + 0x58]
        fadd    dword ptr [eax + 0x154]
        fstp    dword ptr [esp + 0x58]
        fld    dword ptr [esp + 0x64]
        fadd    dword ptr [eax + 0x154]
        fstp    dword ptr [esp + 0x64]
        fld    dword ptr [esp + 0x70]
        fadd    dword ptr [eax + 0x154]
        fstp    dword ptr [esp + 0x70]
        jne    L_8260
        mov    ecx, dword ptr [esp + 0x1c]
        mov    edi, eax
L_82ca:
        fld    dword ptr [esp + 0x54]
        mov    eax, dword ptr [esp + 0x18]
        fadd    dword ptr [edi + 0x158]
        mov    esi, dword ptr [esp + 0x14]
        mov    edx, dword ptr [esp + 0x20]
        add    eax, esi
        fstp    dword ptr [esp + 0x54]
        dec    edx
        fld    dword ptr [esp + 0x60]
        mov    dword ptr [esp + 0x18], eax
        fadd    dword ptr [edi + 0x158]
        mov    dword ptr [esp + 0x20], edx
        fstp    dword ptr [esp + 0x60]
        fld    dword ptr [esp + 0x6c]
        fadd    dword ptr [edi + 0x158]
        fstp    dword ptr [esp + 0x6c]
        fld    dword ptr [esp + 0x78]
        fadd    dword ptr [edi + 0x158]
        fstp    dword ptr [esp + 0x78]
        jne    L_822e
L_831f:
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0xb4
        ret    0xc
        nop    
        nop    
        nop    
        nop    
        /* __emit: reference uses near jmp E9 0B 00 00 00 (rel32) to L_8340;
           MSVC6 collapses the nearby forward jump to short EB 0B, shifting the
           following layout by 3 bytes. Emit the near form verbatim. */
        __emit 0xE9
        __emit 0x0B
        __emit 0x00
        __emit 0x00
        __emit 0x00
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
L_8340:
        mov    dword ptr [g_007daa30], 0xbf800000
        mov    dword ptr [g_007daa2c], 0xbf800000
        mov    dword ptr [g_007daa28], 0xbf800000
        mov    dword ptr [g_007daa34], 0xbf800000
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    0x2c
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_83a1
        mov    eax, dword ptr [g_007da9e8]
        push    eax
        push    0x7709b4
        push    0x64
        push    0x64
        push    0x38
        mov    ecx, esi
        call    FUN_00415d70
        mov    dword ptr [g_007daa38], esi
        pop    esi
        ret    
L_83a1:
        mov    dword ptr [g_007daa38], 0
        pop    esi
        ret    
    }
}
