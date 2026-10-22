/*
 * FUN_00472d4b (extent 0x472d4b-0x4732d2) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076d064;
extern int    g_007b9574;
extern int    g_007d998c;
extern int    g_007d9990;
extern int    g_007d9994;
extern int    g_007d9998;
extern int    g_007d99a0;
extern int    g_007da5e8;
extern int    g_007da5f4;
extern int    g_007da600;
extern int    g_007da848;
extern int    g_007da864;
extern float  g_007da870;
extern float  g_007da874;
extern float  g_007da878;
extern float  g_007da87c;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00421f00(void);
extern void __cdecl FUN_00472af0(void);
extern void __cdecl FUN_00476870(void);
extern void __cdecl FUN_0047b160(void);
extern void __cdecl FUN_00491cd0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_00472d4b(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007d99a0]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0x7c
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_2d8d
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        push    ecx
        mov    ecx, dword ptr [g_007d9998]
        push    edx
        push    ecx
        mov    ecx, eax
        call    FUN_00472af0
        mov    esi, eax
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
L_2d8d:
        xor    esi, esi
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ebx
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        push    edi
        mov    edi, ecx
        push    esi
        call    FUN_00476870
        mov    eax, dword ptr [esi]
        push    4
        lea    ebx, [edi + 0x74]
        push    ebx
        mov    ecx, esi
        call    dword ptr [eax + 0x24]
        mov    eax, dword ptr [ebx]
        test    eax, eax
        jbe    L_2dd4
        mov    ecx, dword ptr [edi + 0x70]
        mov    edx, dword ptr [esi]
        lea    eax, [eax + eax*2]
        shl    eax, 2
        push    eax
        push    ecx
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
L_2dd4:
        pop    edi
        pop    esi
        pop    ebx
        ret    4
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
        mov    dword ptr [ecx + 0x70], eax
        mov    dword ptr [ecx + 0x74], edx
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
        mov    eax, dword ptr [ecx + 0x70]
        mov    edx, dword ptr [esp + 4]
        mov    dword ptr [edx], eax
        mov    eax, dword ptr [ecx + 0x74]
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
        push    ebp
        mov    ebp, esp
        sub    esp, 0x20
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi + 0x78]
        test    eax, eax
        je    L_328e
        mov    ecx, dword ptr [eax + 4]
        test    ecx, ecx
        je    L_328e
        mov    eax, dword ptr [g_007b9574]
        test    eax, eax
        ja    L_328e
        mov    eax, dword ptr [esi + 0x24]
        and    eax, 0x3fff
        push    edi
        mov    byte ptr [ebp + 0x17], 0
        mov    dword ptr [ebp - 0x10], 0
        mov    dword ptr [ebp - 0x14], 0
        je    L_2f53
        test    eax, eax
        jle    L_2f53
        mov    ecx, dword ptr [g_007da848]
        mov    edi, dword ptr [ecx + eax*4 + 0x24]
        test    edi, edi
        je    L_2f53
        mov    edx, dword ptr [edi]
        push    0
        mov    ecx, edi
        call    dword ptr [edx + 4]
        mov    ecx, eax
        call    FUN_00491cd0
        cmp    eax, 0x100
        jl    L_2eda
        mov    dword ptr [g_007da864], 1
        jmp    L_2f35
L_2eda:
        cmp    eax, 0x80
        jl    L_2eed
        mov    dword ptr [g_007da864], 2
        jmp    L_2f35
L_2eed:
        cmp    eax, 0x40
        jl    L_2efe
        mov    dword ptr [g_007da864], 4
        jmp    L_2f35
L_2efe:
        cmp    eax, 0x20
        jl    L_2f0f
        mov    dword ptr [g_007da864], 8
        jmp    L_2f35
L_2f0f:
        cmp    eax, 0x10
        jl    L_2f20
        mov    dword ptr [g_007da864], 0x10
        jmp    L_2f35
L_2f20:
        xor    ecx, ecx
        cmp    eax, 8
        setl    cl
        dec    ecx
        and    ecx, 0xffffffe0
        add    ecx, 0x40
        mov    dword ptr [g_007da864], ecx
L_2f35:
        mov    al, byte ptr [edi + 0x24]
        test    al, al
        jne    L_2f81
        mov    edi, dword ptr [edi + 0x28]
        test    edi, edi
        je    L_2f81
        mov    edx, dword ptr [edi + 0xc]
        mov    eax, dword ptr [edi + 0x1c]
        mov    byte ptr [ebp + 0x17], 1
        mov    dword ptr [ebp - 0x10], edx
        mov    dword ptr [ebp - 0x14], eax
L_2f53:
        mov    ecx, dword ptr [esi + 0x64]
        push    ebx
        mov    ebx, dword ptr [esi + 0x18]
        cmp    ebx, 0x100
        mov    dword ptr [ebp - 0x18], ecx
        mov    dword ptr [ebp - 0xc], ebx
        jle    L_2f72
        mov    dword ptr [ebp - 0xc], 0x100
        mov    ebx, dword ptr [ebp - 0xc]
L_2f72:
        mov    al, byte ptr [ebp + 0x18]
        test    al, al
        je    L_2f87
        mov    edx, dword ptr [ebp + 0xc]
        mov    eax, dword ptr [edx + 0x30]
        jmp    L_2f94
L_2f81:
        mov    byte ptr [ebp + 0x17], 0
        jmp    L_2f53
L_2f87:
        mov    ecx, dword ptr [ebp + 0xc]
        mov    eax, dword ptr [ecx]
        mov    edx, dword ptr [ecx + 0x10]
        shl    eax, 5
        add    eax, edx
L_2f94:
        cmp    word ptr [esi + 0x56], 0
        mov    dword ptr [esi + 0x44], eax
        mov    word ptr [esi + 0xa], 0
        jne    L_2fae
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [eax + 0x98]
L_2fae:
        xor    edi, edi
        cmp    ebx, edi
        mov    dword ptr [ebp - 4], edi
        jle    L_316a
        mov    dword ptr [ebp - 8], edi
L_2fbe:
        mov    ecx, dword ptr [g_007da600]
        mov    edx, dword ptr [ecx]
        cmp    byte ptr [edx + edi], 0
        jne    L_2fd4
        inc    dword ptr [ebp - 4]
        jmp    L_3156
L_2fd4:
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
        lea    ebx, [edx + edi*8]
        mov    edx, dword ptr [esi + 0x44]
        mov    dword ptr [ebp - 0x20], eax
        shl    ecx, 5
        add    ecx, edx
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
        fmul    dword ptr [g_007da878]
        fmul    dword ptr [ecx + 4]
        fadd    dword ptr [g_007da870]
        fstp    dword ptr [ecx + 4]
        mov    eax, dword ptr [ebx + 4]
        mov    dword ptr [ecx + 0x1c], eax
        mov    ecx, dword ptr [esi + 0x78]
        mov    edx, dword ptr [ecx]
        mov    ecx, dword ptr [esi + 0x44]
        mov    edx, dword ptr [edx + edi*4]
        xor    eax, eax
        mov    ax, word ptr [esi + 0xa]
        shl    eax, 5
        mov    dword ptr [eax + ecx + 0x10], edx
        mov    ecx, dword ptr [ebp + 0x10]
        test    ecx, ecx
        je    L_3116
        mov    edx, dword ptr [esi + 0x14]
        mov    eax, dword ptr [ebp - 8]
        add    eax, edx
        push    eax
        call    FUN_00421f00
        mov    edx, dword ptr [esi + 0x44]
        xor    ecx, ecx
        mov    cx, word ptr [esi + 0xa]
        shl    ecx, 5
        mov    byte ptr [ecx + edx + 0x17], al
L_3116:
        mov    al, byte ptr [ebp + 0x17]
        test    al, al
        je    L_314f
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
L_314f:
        inc    word ptr [esi + 0xa]
        mov    ebx, dword ptr [ebp - 0xc]
L_3156:
        mov    ecx, dword ptr [ebp - 8]
        inc    edi
        add    ecx, 0xc
        cmp    edi, ebx
        mov    dword ptr [ebp - 8], ecx
        jl    L_2fbe
        xor    edi, edi
L_316a:
        mov    al, byte ptr [ebp + 0x18]
        test    al, al
        jne    L_31ea
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
L_318c:
        mov    ebx, dword ptr [ebp - 0x18]
        xor    edx, edx
        cmp    ebx, edi
        mov    dword ptr [esi + 0x50], eax
        mov    word ptr [esi + 0x54], di
        mov    dword ptr [ebp - 0x14], edx
        mov    dword ptr [ebp + 0x10], edi
        jle    L_3261
        mov    ecx, dword ptr [g_007da5e8]
        mov    ecx, dword ptr [ecx]
        mov    dword ptr [ebp - 0x20], ecx
L_31b1:
        mov    ecx, dword ptr [esi + 0x60]
        movzx    cx, byte ptr [ecx + edx]
        mov    ebx, dword ptr [ebp - 0x20]
        cmp    byte ptr [ebx + edx], 0
        mov    dword ptr [ebp - 4], ecx
        je    L_3241
        mov    ebx, ecx
        and    ebx, 0xffff
        dec    ebx
        cmp    ebx, 1
        jle    L_3241
        mov    ecx, dword ptr [ebp + 0x10]
        mov    edx, dword ptr [esi + 0x48]
        add    edx, ecx
        dec    ebx
        lea    eax, [eax + edi*2]
        mov    dword ptr [ebp - 0x1c], edx
        lea    ecx, [edx + 1]
        mov    dword ptr [ebp + 8], ebx
        jmp    L_31fb
L_31ea:
        mov    eax, dword ptr [ebp + 0xc]
        mov    eax, dword ptr [eax + 0x48]
        mov    ecx, dword ptr [ebp + 0xc]
        mov    dword ptr [ebp + 0x14], eax
        jmp    L_318c
L_31f8:
        mov    edx, dword ptr [ebp - 0x1c]
L_31fb:
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
        dec    dword ptr [ebp + 8]
        jne    L_31f8
        mov    eax, dword ptr [ebp + 0x14]
        mov    ecx, dword ptr [ebp - 4]
        mov    edx, dword ptr [ebp - 0x14]
L_3241:
        mov    ebx, dword ptr [ebp + 0x10]
        and    ecx, 0xffff
        add    ebx, ecx
        mov    ecx, dword ptr [ebp - 0x18]
        inc    edx
        cmp    edx, ecx
        mov    dword ptr [ebp + 0x10], ebx
        mov    dword ptr [ebp - 0x14], edx
        jl    L_31b1
        mov    ecx, dword ptr [ebp + 0xc]
L_3261:
        mov    al, byte ptr [ebp + 0x18]
        test    al, al
        mov    word ptr [esi + 0x54], di
        pop    ebx
        jne    L_327b
        mov    eax, dword ptr [ecx + 0xc]
        and    edi, 0xffff
        add    eax, edi
        mov    dword ptr [ecx + 0xc], eax
L_327b:
        cmp    word ptr [esi + 0xa], 0
        pop    edi
        setne    al
        mov    byte ptr [esi + 0x10], al
        pop    esi
        mov    esp, ebp
        pop    ebp
        ret    0x14
L_328e:
        mov    ecx, dword ptr [ebp + 0x18]
        mov    edx, dword ptr [ebp + 0x14]
        mov    eax, dword ptr [ebp + 0x10]
        push    ecx
        mov    ecx, dword ptr [ebp + 0xc]
        push    edx
        mov    edx, dword ptr [ebp + 8]
        push    eax
        push    ecx
        push    edx
        mov    ecx, esi
        call    FUN_0047b160
        pop    esi
        mov    esp, ebp
        pop    ebp
        ret    0x14
        __emit 0xE9  // jmp L_32c0 (rel32; MSVC6 emits eb rel8 for this short target)
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
L_32c0:
        xor    eax, eax
        mov    dword ptr [g_007d9994], eax
        mov    dword ptr [g_007d9990], eax
        mov    dword ptr [g_007d998c], eax
        ret    
    }
}
