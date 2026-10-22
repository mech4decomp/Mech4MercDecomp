/*
 * FUN_00458ca9 (extent 0x458ca9-0x459202) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076d064;
extern int    g_007b94a0;
extern int    g_007d98ec;
extern int    g_007d98f0;
extern int    g_007d98f4;
extern int    g_007d98fc;
extern int    g_007da5f4;
extern int    g_007da600;
extern int    g_007da848;
extern int    g_007da864;
extern float  g_007da870;
extern float  g_007da874;
extern float  g_007da878;
extern float  g_007da87c;
extern void __cdecl FUN_00421f00(void);
extern void __cdecl FUN_00491cd0(void);

__declspec(naked) void FUN_00458ca9(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    edx, dword ptr [ecx + 0x48]
        push    ebp
        mov    ebp, dword ptr [ecx + 0x58]
        push    esi
        push    edi
        xor    esi, esi
        xor    edi, edi
        xor    eax, eax
        test    ebp, 0xfffffffe
        jle    L_8d91
        add    edx, 4
L_8cce:
        mov    ebp, dword ptr [g_007d98fc]
        mov    ebp, dword ptr [ebp]
        cmp    byte ptr [ebp + esi*2], 0
        je    L_8d27
        mov    ebp, dword ptr [g_007da600]
        mov    ebp, dword ptr [ebp]
        xor    eax, eax
        mov    al, byte ptr [edx - 4]
        and    eax, 0xff
        mov    byte ptr [eax + ebp], 1
        mov    ebp, dword ptr [g_007da600]
        mov    ebp, dword ptr [ebp]
        xor    eax, eax
        mov    ax, word ptr [edx - 4]
        shr    eax, 8
        mov    byte ptr [eax + ebp], 1
        mov    ebp, dword ptr [g_007da600]
        mov    ebp, dword ptr [ebp]
        xor    eax, eax
        mov    al, byte ptr [edx - 2]
        and    eax, 0xff
        mov    byte ptr [eax + ebp], 1
        mov    eax, 1
L_8d27:
        mov    ebp, dword ptr [g_007d98fc]
        mov    ebp, dword ptr [ebp]
        cmp    byte ptr [ebp + esi*2 + 1], 0
        je    L_8d7d
        mov    ebp, dword ptr [g_007da600]
        mov    ebp, dword ptr [ebp]
        xor    eax, eax
        mov    ax, word ptr [edx - 2]
        shr    eax, 8
        mov    byte ptr [eax + ebp], 1
        mov    ebp, dword ptr [g_007da600]
        mov    ebp, dword ptr [ebp]
        xor    eax, eax
        mov    al, byte ptr [edx]
        and    eax, 0xff
        mov    byte ptr [eax + ebp], 1
        mov    ebp, dword ptr [g_007da600]
        mov    ebp, dword ptr [ebp]
        xor    eax, eax
        mov    ax, word ptr [edx]
        shr    eax, 8
        mov    byte ptr [eax + ebp], 1
        mov    eax, 1
L_8d7d:
        mov    ebp, dword ptr [ecx + 0x58]
        add    edi, 3
        add    edx, 6
        inc    esi
        sar    ebp, 1
        cmp    esi, ebp
        jl    L_8cce
L_8d91:
        mov    edx, dword ptr [ecx + 0x58]
        test    dl, 1
        je    L_8ded
        mov    esi, dword ptr [g_007d98fc]
        mov    esi, dword ptr [esi]
        cmp    byte ptr [edx + esi - 1], 0
        je    L_8ded
        mov    esi, dword ptr [ecx + 0x48]
        xor    edx, edx
        shl    edi, 1
        mov    eax, edi
        mov    dl, byte ptr [eax + esi]
        mov    eax, dword ptr [g_007da600]
        mov    eax, dword ptr [eax]
        inc    edi
        mov    byte ptr [edx + eax], 1
        mov    edx, dword ptr [ecx + 0x48]
        xor    eax, eax
        mov    al, byte ptr [edi + edx]
        mov    edx, dword ptr [g_007da600]
        mov    edx, dword ptr [edx]
        mov    byte ptr [eax + edx], 1
        mov    eax, dword ptr [ecx + 0x48]
        xor    edx, edx
        mov    dl, byte ptr [edi + eax + 1]
        mov    eax, dword ptr [g_007da600]
        mov    eax, dword ptr [eax]
        mov    byte ptr [edx + eax], 1
        mov    eax, 1
L_8ded:
        pop    edi
        pop    esi
        mov    word ptr [ecx + 0x56], 1
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
        mov    eax, dword ptr [esp + 4]
        mov    ecx, dword ptr [eax]
        mov    dword ptr [g_007b94a0], ecx
        ret    4
        nop    
        push    ebp
        mov    ebp, esp
        sub    esp, 0x20
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi + 0x24]
        and    eax, 0x3fff
        push    edi
        mov    byte ptr [ebp - 1], 0
        mov    dword ptr [ebp - 0x14], 0
        mov    dword ptr [ebp - 0x18], 0
        je    L_8ef0
        test    eax, eax
        jle    L_8ef0
        mov    ecx, dword ptr [g_007da848]
        mov    edi, dword ptr [ecx + eax*4 + 0x24]
        test    edi, edi
        je    L_8ef0
        mov    edx, dword ptr [edi]
        push    0
        mov    ecx, edi
        call    dword ptr [edx + 4]
        mov    ecx, eax
        call    FUN_00491cd0
        cmp    eax, 0x100
        mov    ecx, 1
        jl    L_8e78
        mov    dword ptr [g_007da864], ecx
        jmp    L_8ed3
L_8e78:
        cmp    eax, 0x80
        jl    L_8e8b
        mov    dword ptr [g_007da864], 2
        jmp    L_8ed3
L_8e8b:
        cmp    eax, 0x40
        jl    L_8e9c
        mov    dword ptr [g_007da864], 4
        jmp    L_8ed3
L_8e9c:
        cmp    eax, 0x20
        jl    L_8ead
        mov    dword ptr [g_007da864], 8
        jmp    L_8ed3
L_8ead:
        cmp    eax, 0x10
        jl    L_8ebe
        mov    dword ptr [g_007da864], 0x10
        jmp    L_8ed3
L_8ebe:
        xor    edx, edx
        cmp    eax, 8
        setl    dl
        dec    edx
        and    edx, 0xffffffe0
        add    edx, 0x40
        mov    dword ptr [g_007da864], edx
L_8ed3:
        mov    al, byte ptr [edi + 0x24]
        test    al, al
        jne    L_8f18
        mov    edi, dword ptr [edi + 0x28]
        test    edi, edi
        je    L_8f18
        mov    eax, dword ptr [edi + 0xc]
        mov    byte ptr [ebp - 1], cl
        mov    ecx, dword ptr [edi + 0x1c]
        mov    dword ptr [ebp - 0x14], eax
        mov    dword ptr [ebp - 0x18], ecx
L_8ef0:
        push    ebx
        mov    ebx, dword ptr [esi + 0x18]
        cmp    ebx, 0x100
        mov    dword ptr [ebp - 0x10], ebx
        jle    L_8f09
        mov    dword ptr [ebp - 0x10], 0x100
        mov    ebx, dword ptr [ebp - 0x10]
L_8f09:
        mov    al, byte ptr [ebp + 0x18]
        test    al, al
        je    L_8f1e
        mov    edx, dword ptr [ebp + 0xc]
        mov    eax, dword ptr [edx + 0x30]
        jmp    L_8f2b
L_8f18:
        mov    byte ptr [ebp - 1], 0
        jmp    L_8ef0
L_8f1e:
        mov    ecx, dword ptr [ebp + 0xc]
        mov    eax, dword ptr [ecx]
        mov    edx, dword ptr [ecx + 0x10]
        shl    eax, 5
        add    eax, edx
L_8f2b:
        cmp    word ptr [esi + 0x56], 0
        mov    dword ptr [esi + 0x44], eax
        mov    word ptr [esi + 0xa], 0
        jne    L_8f45
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [eax + 0x98]
L_8f45:
        xor    edi, edi
        cmp    ebx, edi
        mov    dword ptr [ebp - 0xc], edi
        jle    L_90f9
        mov    dword ptr [ebp - 8], edi
L_8f55:
        mov    ecx, dword ptr [g_007da600]
        mov    edx, dword ptr [ecx]
        cmp    byte ptr [edx + edi], 0
        jne    L_8f6b
        inc    dword ptr [ebp - 0xc]
        jmp    L_90e7
L_8f6b:
        mov    edx, dword ptr [ebp - 0xc]
        mov    ecx, dword ptr [g_007da5f4]
        mov    eax, edi
        sub    eax, edx
        mov    edx, dword ptr [esi + 0x1c]
        mov    dword ptr [ecx + edi*2], eax
        mov    ecx, dword ptr [esi + 0x14]
        mov    eax, dword ptr [ebp - 8]
        add    eax, ecx
        xor    ecx, ecx
        mov    cx, word ptr [esi + 0xa]
        mov    dword ptr [ebp - 0x20], eax
        mov    eax, dword ptr [esi + 0x44]
        lea    ebx, [edx + edi*8]
        shl    ecx, 5
        add    ecx, eax
        mov    dword ptr [ebp - 0x1c], ecx
        mov    edx, dword ptr [ebp + 8]
        mov    eax, dword ptr [ebp - 0x20]
        fld    dword ptr [eax]
        fld    dword ptr [eax + 4]
        fld    dword ptr [eax + 8]
        mov    eax, dword ptr [ebp - 0x1c]
        fld    dword ptr [edx + 0x34]
        fmul st(0), st(2)
        fld    dword ptr [edx + 0x38]
        fmul st(0), st(2)
        fxch    st(1)
        fadd    dword ptr [edx + 0x3c]
        fld    dword ptr [edx + 0x30]
        fmul st(0), st(5)
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x14]
        fmul st(0), st(4)
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x18]
        fmul st(0), st(3)
        fxch    st(1)
        fstp    dword ptr [eax + 0xc]
        fadd    dword ptr [edx + 0x1c]
        fld    dword ptr [edx + 0x10]
        fmul st(0), st(5)
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x24]
        fmul st(0), st(4)
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x28]
        fmul st(0), st(3)
        fxch    st(1)
        fstp    dword ptr [eax + 4]
        fadd    dword ptr [edx + 0x2c]
        fld    dword ptr [edx + 0x20]
        fmul st(0), st(5)
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 4]
        fmul st(0), st(4)
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 8]
        fmul st(0), st(3)
        fxch    st(1)
        fstp    dword ptr [eax + 8]
        fadd    dword ptr [edx + 0xc]
        fld    dword ptr [edx]
        fmul st(0), st(5)
        fxch    st(2)
        faddp st(1), st(0)
        faddp st(1), st(0)
        fstp    st(1)
        fstp    st(1)
        fstp    st(1)
        fstp    dword ptr [eax]
        fld    dword ptr [g_0076d064]
        fdiv    dword ptr [ecx + 0xc]
        fst    dword ptr [ecx + 0xc]
        fld    st(0)
        fmul    dword ptr [ecx + 8]
        fstp    dword ptr [ecx + 8]
        fld    st(0)
        fmul    dword ptr [ecx]
        fmul    dword ptr [g_007da87c]
        fadd    dword ptr [g_007da874]
        fstp    dword ptr [ecx]
        mov    edx, dword ptr [ebx]
        mov    dword ptr [ecx + 0x18], edx
        fmul    dword ptr [g_007da878]
        mov    edx, dword ptr [esi + 0x44]
        fmul    dword ptr [ecx + 4]
        fadd    dword ptr [g_007da870]
        fstp    dword ptr [ecx + 4]
        mov    eax, dword ptr [ebx + 4]
        mov    dword ptr [ecx + 0x1c], eax
        mov    eax, dword ptr [ebp + 0x14]
        xor    ecx, ecx
        mov    cx, word ptr [esi + 0xa]
        shl    ecx, 5
        mov    dword ptr [ecx + edx + 0x10], eax
        mov    al, byte ptr [ebp - 1]
        test    al, al
        je    L_90bb
        mov    edx, dword ptr [esi + 0x44]
        fld    dword ptr [ebp - 0x14]
        xor    ecx, ecx
        mov    cx, word ptr [esi + 0xa]
        shl    ecx, 5
        fadd    dword ptr [ecx + edx + 0x18]
        lea    eax, [ecx + edx + 0x18]
        fstp    dword ptr [eax]
        mov    ecx, dword ptr [esi + 0x44]
        fld    dword ptr [ebp - 0x18]
        xor    eax, eax
        mov    ax, word ptr [esi + 0xa]
        shl    eax, 5
        fadd    dword ptr [eax + ecx + 0x1c]
        lea    eax, [eax + ecx + 0x1c]
        fstp    dword ptr [eax]
L_90bb:
        mov    ecx, dword ptr [ebp + 0x10]
        test    ecx, ecx
        je    L_90e0
        mov    eax, dword ptr [esi + 0x14]
        mov    edx, dword ptr [ebp - 8]
        add    edx, eax
        push    edx
        call    FUN_00421f00
        mov    edx, dword ptr [esi + 0x44]
        xor    ecx, ecx
        mov    cx, word ptr [esi + 0xa]
        shl    ecx, 5
        mov    byte ptr [ecx + edx + 0x17], al
L_90e0:
        inc    word ptr [esi + 0xa]
        mov    ebx, dword ptr [ebp - 0x10]
L_90e7:
        mov    ecx, dword ptr [ebp - 8]
        inc    edi
        add    ecx, 0xc
        cmp    edi, ebx
        mov    dword ptr [ebp - 8], ecx
        jl    L_8f55
L_90f9:
        mov    al, byte ptr [ebp + 0x18]
        test    al, al
        jne    L_91ca
        mov    edx, dword ptr [ebp + 0xc]
        mov    ecx, dword ptr [edx]
        xor    eax, eax
        mov    ax, word ptr [esi + 0xa]
        add    ecx, eax
        mov    eax, dword ptr [edx + 0xc]
        mov    dword ptr [edx], ecx
        mov    ecx, dword ptr [edx + 0x28]
        lea    eax, [ecx + eax*2]
L_911c:
        mov    ebx, dword ptr [esi + 0x58]
        xor    ecx, ecx
        xor    edi, edi
        cmp    ebx, ecx
        mov    dword ptr [esi + 0x50], eax
        mov    word ptr [esi + 0x54], cx
        mov    dword ptr [ebp + 0x14], ecx
        mov    dword ptr [ebp + 8], ecx
        jle    L_919d
        mov    edx, dword ptr [g_007d98fc]
        mov    edx, dword ptr [edx]
        mov    dword ptr [ebp + 0x10], edx
        mov    edx, dword ptr [g_007da5f4]
L_9145:
        mov    ebx, dword ptr [ebp + 0x10]
        cmp    byte ptr [ebx + ecx], 0
        je    L_918b
        mov    ebx, dword ptr [ebp + 8]
        mov    ecx, dword ptr [esi + 0x48]
        add    ecx, ebx
        xor    ebx, ebx
        mov    bl, byte ptr [ecx]
        add    eax, 2
        inc    edi
        add    eax, 2
        mov    bx, word ptr [edx + ebx*2]
        mov    word ptr [eax - 4], bx
        xor    ebx, ebx
        mov    bl, byte ptr [ecx + 2]
        inc    edi
        mov    bx, word ptr [edx + ebx*2]
        mov    word ptr [eax - 2], bx
        xor    ebx, ebx
        mov    bl, byte ptr [ecx + 1]
        inc    edi
        add    eax, 2
        mov    cx, word ptr [edx + ebx*2]
        mov    word ptr [eax - 2], cx
        mov    ecx, dword ptr [ebp + 0x14]
L_918b:
        add    dword ptr [ebp + 8], 3
        mov    ebx, dword ptr [esi + 0x58]
        inc    ecx
        cmp    ecx, ebx
        mov    dword ptr [ebp + 0x14], ecx
        jl    L_9145
        mov    edx, dword ptr [ebp + 0xc]
L_919d:
        mov    al, byte ptr [ebp + 0x18]
        test    al, al
        mov    word ptr [esi + 0x54], di
        pop    ebx
        jne    L_91b7
        mov    eax, dword ptr [edx + 0xc]
        and    edi, 0xffff
        add    eax, edi
        mov    dword ptr [edx + 0xc], eax
L_91b7:
        cmp    word ptr [esi + 0xa], 0
        pop    edi
        setne    dl
        mov    byte ptr [esi + 0x10], dl
        pop    esi
        mov    esp, ebp
        pop    ebp
        ret    0x14
L_91ca:
        mov    ecx, dword ptr [ebp + 0xc]
        mov    eax, dword ptr [ecx + 0x48]
        mov    edx, ecx
        jmp    L_911c
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        __emit 0xE9  // jmp L_91f0 (rel32; MSVC6 emits eb rel8 for this short target)
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
L_91f0:
        xor    eax, eax
        mov    dword ptr [g_007d98f4], eax
        mov    dword ptr [g_007d98f0], eax
        mov    dword ptr [g_007d98ec], eax
        ret    
    }
}
