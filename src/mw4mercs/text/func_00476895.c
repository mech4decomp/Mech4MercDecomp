/*
 * FUN_00476895 (extent 0x476895-0x476d62) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076d064;
extern int    g_007d99a4;
extern int    g_007d99a8;
extern int    g_007d99ac;
extern int    g_007da5e8;
extern int    g_007da5f4;
extern int    g_007da600;
extern int    g_007da848;
extern int    g_007da864;
extern float  g_007da870;
extern float  g_007da874;
extern float  g_007da878;
extern float  g_007da87c;
extern void __cdecl FUN_00421f00(void);
extern void __cdecl FUN_0047b160(void);
extern void __cdecl FUN_00491cd0(void);

__declspec(naked) void FUN_00476895(void)
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
        nop    
        mov    eax, dword ptr [esp + 4]
        mov    edx, dword ptr [esp + 8]
        mov    dword ptr [ecx + 0x68], eax
        mov    dword ptr [ecx + 0x6c], edx
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
        nop    
        mov    eax, dword ptr [ecx + 0x68]
        mov    edx, dword ptr [esp + 4]
        mov    dword ptr [edx], eax
        mov    eax, dword ptr [ecx + 0x6c]
        mov    ecx, dword ptr [esp + 8]
        mov    dword ptr [ecx], eax
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
        push    ebp
        mov    ebp, esp
        sub    esp, 0x20
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi + 0x6c]
        test    eax, eax
        jne    L_6922
        mov    eax, dword ptr [ebp + 0x18]
        mov    ecx, dword ptr [ebp + 0x14]
        mov    edx, dword ptr [ebp + 0x10]
        push    eax
        mov    eax, dword ptr [ebp + 0xc]
        push    ecx
        mov    ecx, dword ptr [ebp + 8]
        push    edx
        push    eax
        push    ecx
        mov    ecx, esi
        call    FUN_0047b160
        pop    esi
        mov    esp, ebp
        pop    ebp
        ret    0x14
L_6922:
        mov    eax, dword ptr [esi + 0x24]
        and    eax, 0x3fff
        push    edi
        mov    byte ptr [ebp + 0x17], 0
        mov    dword ptr [ebp - 0x10], 0
        mov    dword ptr [ebp - 0x14], 0
        je    L_69f9
        test    eax, eax
        jle    L_69f9
        mov    edx, dword ptr [g_007da848]
        mov    edi, dword ptr [edx + eax*4 + 0x24]
        test    edi, edi
        je    L_69f9
        mov    eax, dword ptr [edi]
        push    0
        mov    ecx, edi
        call    dword ptr [eax + 4]
        mov    ecx, eax
        call    FUN_00491cd0
        cmp    eax, 0x100
        jl    L_6980
        mov    dword ptr [g_007da864], 1
        jmp    L_69db
L_6980:
        cmp    eax, 0x80
        jl    L_6993
        mov    dword ptr [g_007da864], 2
        jmp    L_69db
L_6993:
        cmp    eax, 0x40
        jl    L_69a4
        mov    dword ptr [g_007da864], 4
        jmp    L_69db
L_69a4:
        cmp    eax, 0x20
        jl    L_69b5
        mov    dword ptr [g_007da864], 8
        jmp    L_69db
L_69b5:
        cmp    eax, 0x10
        jl    L_69c6
        mov    dword ptr [g_007da864], 0x10
        jmp    L_69db
L_69c6:
        xor    ecx, ecx
        cmp    eax, 8
        setl    cl
        dec    ecx
        and    ecx, 0xffffffe0
        add    ecx, 0x40
        mov    dword ptr [g_007da864], ecx
L_69db:
        mov    al, byte ptr [edi + 0x24]
        test    al, al
        jne    L_6a27
        mov    edi, dword ptr [edi + 0x28]
        test    edi, edi
        je    L_6a27
        mov    edx, dword ptr [edi + 0xc]
        mov    eax, dword ptr [edi + 0x1c]
        mov    byte ptr [ebp + 0x17], 1
        mov    dword ptr [ebp - 0x10], edx
        mov    dword ptr [ebp - 0x14], eax
L_69f9:
        mov    ecx, dword ptr [esi + 0x64]
        push    ebx
        mov    ebx, dword ptr [esi + 0x18]
        cmp    ebx, 0x100
        mov    dword ptr [ebp - 0x18], ecx
        mov    dword ptr [ebp - 0xc], ebx
        jle    L_6a18
        mov    dword ptr [ebp - 0xc], 0x100
        mov    ebx, dword ptr [ebp - 0xc]
L_6a18:
        mov    al, byte ptr [ebp + 0x18]
        test    al, al
        je    L_6a2d
        mov    edx, dword ptr [ebp + 0xc]
        mov    eax, dword ptr [edx + 0x30]
        jmp    L_6a3a
L_6a27:
        mov    byte ptr [ebp + 0x17], 0
        jmp    L_69f9
L_6a2d:
        mov    ecx, dword ptr [ebp + 0xc]
        mov    eax, dword ptr [ecx]
        mov    edx, dword ptr [ecx + 0x10]
        shl    eax, 5
        add    eax, edx
L_6a3a:
        cmp    word ptr [esi + 0x56], 0
        mov    dword ptr [esi + 0x44], eax
        mov    word ptr [esi + 0xa], 0
        jne    L_6a54
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [eax + 0x98]
L_6a54:
        xor    edi, edi
        cmp    ebx, edi
        mov    dword ptr [ebp - 4], edi
        jle    L_6c0e
        mov    dword ptr [ebp - 8], edi
L_6a64:
        mov    ecx, dword ptr [g_007da600]
        mov    edx, dword ptr [ecx]
        cmp    byte ptr [edx + edi], 0
        jne    L_6a7a
        inc    dword ptr [ebp - 4]
        jmp    L_6bfa
L_6a7a:
        mov    edx, dword ptr [ebp - 4]
        mov    ecx, dword ptr [g_007da5f4]
        mov    eax, edi
        sub    eax, edx
        mov    edx, dword ptr [esi + 0x1c]
        mov    word ptr [ecx + edi*2], ax
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
        fmul    dword ptr [g_007da87c]
        fmul    dword ptr [ecx]
        fadd    dword ptr [g_007da874]
        fstp    dword ptr [ecx]
        mov    edx, dword ptr [ebx]
        mov    dword ptr [ecx + 0x18], edx
        fmul    dword ptr [ecx + 4]
        xor    edx, edx
        mov    dx, word ptr [esi + 0xa]
        fmul    dword ptr [g_007da878]
        fadd    dword ptr [g_007da870]
        shl    edx, 5
        fstp    dword ptr [ecx + 4]
        mov    eax, dword ptr [ebx + 4]
        mov    dword ptr [ecx + 0x1c], eax
        mov    ecx, dword ptr [esi + 0x68]
        mov    ecx, dword ptr [ecx + edi*4]
        mov    eax, dword ptr [esi + 0x44]
        mov    dword ptr [edx + eax + 0x10], ecx
        mov    ecx, dword ptr [ebp + 0x10]
        test    ecx, ecx
        je    L_6bba
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
L_6bba:
        mov    al, byte ptr [ebp + 0x17]
        test    al, al
        je    L_6bf3
        mov    ecx, dword ptr [esi + 0x44]
        fld    dword ptr [ebp - 0x10]
        xor    eax, eax
        mov    ax, word ptr [esi + 0xa]
        xor    edx, edx
        shl    eax, 5
        fadd    dword ptr [eax + ecx + 0x18]
        lea    eax, [eax + ecx + 0x18]
        fstp    dword ptr [eax]
        mov    dx, word ptr [esi + 0xa]
        mov    eax, dword ptr [esi + 0x44]
        fld    dword ptr [ebp - 0x14]
        shl    edx, 5
        fadd    dword ptr [edx + eax + 0x1c]
        lea    eax, [edx + eax + 0x1c]
        fstp    dword ptr [eax]
L_6bf3:
        inc    word ptr [esi + 0xa]
        mov    ebx, dword ptr [ebp - 0xc]
L_6bfa:
        mov    ecx, dword ptr [ebp - 8]
        inc    edi
        add    ecx, 0xc
        cmp    edi, ebx
        mov    dword ptr [ebp - 8], ecx
        jl    L_6a64
        xor    edi, edi
L_6c0e:
        mov    al, byte ptr [ebp + 0x18]
        test    al, al
        jne    L_6c8e
        mov    ecx, dword ptr [ebp + 0xc]
        mov    eax, dword ptr [ecx]
        xor    edx, edx
        mov    dx, word ptr [esi + 0xa]
        add    eax, edx
        mov    edx, dword ptr [ecx + 0xc]
        mov    dword ptr [ecx], eax
        mov    eax, dword ptr [ecx + 0x28]
        lea    eax, [eax + edx*2]
        mov    dword ptr [ebp + 0x14], eax
L_6c30:
        mov    ebx, dword ptr [ebp - 0x18]
        xor    edx, edx
        cmp    ebx, edi
        mov    dword ptr [esi + 0x50], eax
        mov    word ptr [esi + 0x54], di
        mov    dword ptr [ebp - 0x14], edx
        mov    dword ptr [ebp + 8], edi
        jle    L_6d05
        mov    ecx, dword ptr [g_007da5e8]
        mov    ecx, dword ptr [ecx]
        mov    dword ptr [ebp - 0x20], ecx
L_6c55:
        mov    ecx, dword ptr [esi + 0x60]
        movzx    cx, byte ptr [ecx + edx]
        mov    ebx, dword ptr [ebp - 0x20]
        cmp    byte ptr [ebx + edx], 0
        mov    dword ptr [ebp - 4], ecx
        je    L_6ce5
        mov    ebx, ecx
        and    ebx, 0xffff
        dec    ebx
        cmp    ebx, 1
        jle    L_6ce5
        mov    ecx, dword ptr [ebp + 8]
        mov    edx, dword ptr [esi + 0x48]
        add    edx, ecx
        dec    ebx
        lea    eax, [eax + edi*2]
        mov    dword ptr [ebp - 0x1c], edx
        lea    ecx, [edx + 1]
        mov    dword ptr [ebp + 0x10], ebx
        jmp    L_6c9f
L_6c8e:
        mov    eax, dword ptr [ebp + 0xc]
        mov    eax, dword ptr [eax + 0x48]
        mov    ecx, dword ptr [ebp + 0xc]
        mov    dword ptr [ebp + 0x14], eax
        jmp    L_6c30
L_6c9c:
        mov    edx, dword ptr [ebp - 0x1c]
L_6c9f:
        xor    ebx, ebx
        mov    bl, byte ptr [edx]
        mov    edx, dword ptr [g_007da5f4]
        add    eax, 2
        inc    edi
        add    eax, 2
        add    eax, 2
        mov    bx, word ptr [edx + ebx*2]
        mov    word ptr [eax - 6], bx
        xor    ebx, ebx
        mov    bl, byte ptr [ecx + 1]
        inc    edi
        mov    bx, word ptr [edx + ebx*2]
        mov    word ptr [eax - 4], bx
        xor    ebx, ebx
        mov    bl, byte ptr [ecx]
        inc    edi
        inc    ecx
        mov    dx, word ptr [edx + ebx*2]
        mov    word ptr [eax - 2], dx
        dec    dword ptr [ebp + 0x10]
        jne    L_6c9c
        mov    eax, dword ptr [ebp + 0x14]
        mov    ecx, dword ptr [ebp - 4]
        mov    edx, dword ptr [ebp - 0x14]
L_6ce5:
        mov    ebx, dword ptr [ebp + 8]
        and    ecx, 0xffff
        add    ebx, ecx
        mov    ecx, dword ptr [ebp - 0x18]
        inc    edx
        cmp    edx, ecx
        mov    dword ptr [ebp + 8], ebx
        mov    dword ptr [ebp - 0x14], edx
        jl    L_6c55
        mov    ecx, dword ptr [ebp + 0xc]
L_6d05:
        mov    al, byte ptr [ebp + 0x18]
        test    al, al
        mov    word ptr [esi + 0x54], di
        pop    ebx
        jne    L_6d1f
        mov    eax, dword ptr [ecx + 0xc]
        and    edi, 0xffff
        add    eax, edi
        mov    dword ptr [ecx + 0xc], eax
L_6d1f:
        cmp    word ptr [esi + 0xa], 0
        pop    edi
        setne    al
        mov    byte ptr [esi + 0x10], al
        pop    esi
        mov    esp, ebp
        pop    ebp
        ret    0x14
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
        __emit 0xE9  // jmp L_6d50 (rel32; MSVC6 emits eb rel8 for this short target)
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
L_6d50:
        xor    eax, eax
        mov    dword ptr [g_007d99ac], eax
        mov    dword ptr [g_007d99a8], eax
        mov    dword ptr [g_007d99a4], eax
        ret    
    }
}
