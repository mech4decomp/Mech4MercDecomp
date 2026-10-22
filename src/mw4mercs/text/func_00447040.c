/*
 * FUN_00447040 (extent 0x447040-0x448524) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076e7e4;
extern float  g_007b220c;
extern int    g_007da718;
extern float  g_007da870;
extern float  g_007da874;
extern float  g_007da878;
extern float  g_007da87c;
extern void __cdecl FUN_004286e0(void);
extern void __cdecl FUN_00448580(void);
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_00447040(void)
{
    __asm {
        push    ebp
        mov    ebp, esp
        sub    esp, 0xb4
        mov    al, byte ptr [ebp + 8]
        push    ebx
        push    esi
        push    edi
        xor    edi, edi
        test    al, 0x3f
        mov    dword ptr [ebp - 0x10], ecx
        mov    dword ptr [ecx + 0x98], edi
        je    L_82eb
        mov    edx, dword ptr [ecx + 0xa0]
        cmp    edx, edi
        jbe    L_82eb
        mov    al, byte ptr [ebp + 0x10]
        test    al, al
        je    L_707f
        mov    eax, dword ptr [ebp + 0xc]
        mov    eax, dword ptr [eax + 0x30]
        jmp    L_708c
L_707f:
        mov    esi, dword ptr [ebp + 0xc]
        mov    eax, dword ptr [esi]
        mov    ebx, dword ptr [esi + 0x10]
        shl    eax, 5
        add    eax, ebx
L_708c:
        mov    dword ptr [ecx + 0x94], eax
        mov    eax, dword ptr [g_007da718]
        mov    eax, dword ptr [eax]
        mov    dword ptr [ebp - 0x88], eax
        cmp    dword ptr [edx], edi
        mov    dword ptr [ebp - 0x28], edi
        jle    L_82bc
L_70aa:
        mov    ecx, dword ptr [ecx + 0x18]
        mov    edx, dword ptr [ebp - 0x28]
        test    byte ptr [ecx + edx], 2
        je    L_829d
        mov    eax, dword ptr [ebp - 0x88]
        mov    esi, edx
        shl    esi, 4
        add    eax, esi
        mov    dword ptr [ebp - 8], eax
        mov    dword ptr [ebp - 0x2c], 0
        mov    edi, dword ptr [ebp - 8]
        xor    ecx, ecx
        xor    edx, edx
        test    dword ptr [edi], 0x80000000
        setne    cl
        sub    edx, ecx
        and    edx, 8
        xor    ebx, ebx
        test    dword ptr [edi + 4], 0x80000000
        setne    cl
        sub    ebx, ecx
        and    ebx, 2
        or    edx, ebx
        xor    ebx, ebx
        test    dword ptr [edi + 8], 0x80000000
        setne    cl
        sub    ebx, ecx
        and    ebx, 0x10
        or    edx, ebx
        fld    dword ptr [edi + 0xc]
        xor    ebx, ebx
        fcom    dword ptr [edi]
        fnstsw  ax
        test    ah, 1
        setne    cl
        sub    ebx, ecx
        and    ebx, 4
        or    edx, ebx
        xor    ebx, ebx
        fcom    dword ptr [edi + 4]
        fnstsw  ax
        test    ah, 1
        setne    cl
        sub    ebx, ecx
        and    ebx, 1
        or    edx, ebx
        xor    ebx, ebx
        fcomp    dword ptr [edi + 8]
        fnstsw  ax
        test    ah, 0x41
        setne    cl
        sub    ebx, ecx
        and    ebx, 0x20
        or    edx, ebx
        mov    dword ptr [ebp - 0x2c], edx
        mov    edx, dword ptr [ebp - 0x28]
        mov    ecx, dword ptr [ebp - 0x2c]
        lea    eax, [edx + 1]
        mov    dword ptr [ebp - 0x14], eax
        shl    eax, 4
        mov    dword ptr [ebp - 0xc], ecx
        mov    ecx, dword ptr [ebp - 0x88]
        mov    dword ptr [ebp - 0x40], eax
        add    eax, ecx
        mov    dword ptr [ebp - 8], eax
        mov    dword ptr [ebp - 4], 0
        mov    edi, dword ptr [ebp - 8]
        xor    ecx, ecx
        xor    edx, edx
        test    dword ptr [edi], 0x80000000
        setne    cl
        sub    edx, ecx
        and    edx, 8
        xor    ebx, ebx
        test    dword ptr [edi + 4], 0x80000000
        setne    cl
        sub    ebx, ecx
        and    ebx, 2
        or    edx, ebx
        xor    ebx, ebx
        test    dword ptr [edi + 8], 0x80000000
        setne    cl
        sub    ebx, ecx
        and    ebx, 0x10
        or    edx, ebx
        fld    dword ptr [edi + 0xc]
        xor    ebx, ebx
        fcom    dword ptr [edi]
        fnstsw  ax
        test    ah, 1
        setne    cl
        sub    ebx, ecx
        and    ebx, 4
        or    edx, ebx
        xor    ebx, ebx
        fcom    dword ptr [edi + 4]
        fnstsw  ax
        test    ah, 1
        setne    cl
        sub    ebx, ecx
        and    ebx, 1
        or    edx, ebx
        xor    ebx, ebx
        fcomp    dword ptr [edi + 8]
        fnstsw  ax
        test    ah, 0x41
        setne    cl
        sub    ebx, ecx
        and    ebx, 0x20
        or    edx, ebx
        mov    dword ptr [ebp - 4], edx
        mov    eax, dword ptr [ebp - 4]
        mov    edx, dword ptr [ebp - 0x2c]
        mov    ecx, eax
        or    ecx, edx
        test    eax, edx
        mov    dword ptr [ebp - 4], eax
        mov    dword ptr [ebp - 8], ecx
        jne    L_829d
        test    ecx, ecx
        jne    L_756a
        mov    eax, dword ptr [ebp - 0x10]
        mov    edx, dword ptr [eax + 0x14]
        mov    ebx, dword ptr [eax + 0x98]
        mov    dword ptr [ebp - 8], edx
        mov    edx, dword ptr [eax + 0x94]
        shl    ebx, 5
        add    ebx, edx
        mov    dword ptr [ebp - 0xc], ebx
        mov    ecx, dword ptr [ebp - 0x88]
        fld1    
        mov    edi, dword ptr [ebp - 0x28]
        mov    eax, edi
        shl    eax, 4
        fdiv    dword ptr [eax + ecx + 0xc]
        add    eax, ecx
        mov    edx, dword ptr [ebp - 0xc]
        fst    dword ptr [edx + 0xc]
        fld    st(0)
        fmul    dword ptr [eax]
        fstp    dword ptr [edx]
        fld    dword ptr [eax + 4]
        fmul st(0), st(1)
        fstp    dword ptr [edx + 4]
        fmul    dword ptr [eax + 8]
        fstp    dword ptr [edx + 8]
        fld    dword ptr [g_007da87c]
        fmul    dword ptr [ebx]
        mov    eax, dword ptr [ebp - 8]
        test    eax, eax
        fadd    dword ptr [g_007da874]
        fstp    dword ptr [ebx]
        fld    dword ptr [g_007da878]
        fmul    dword ptr [ebx + 4]
        fadd    dword ptr [g_007da870]
        fstp    dword ptr [ebx + 4]
        je    L_728d
        add    eax, esi
        mov    dword ptr [ebp - 4], eax
        jmp    L_7294
L_728d:
        mov    dword ptr [ebp - 4], 0x7b9490
L_7294:
        fld    dword ptr [g_0076e7e4]
        mov    esi, dword ptr [ebp - 4]
        fld    dword ptr [esi + 0xc]
        mov    ecx, dword ptr [esi + 0xc]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0xa8]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xa8]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    dword ptr [ebp - 0x9c], ebx
        fld    dword ptr [esi]
        mov    ecx, dword ptr [esi]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0xa8]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xa8]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0x9c]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0x9c], ecx
        fld    dword ptr [esi + 4]
        mov    ecx, dword ptr [esi + 4]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0xa8]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xa8]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0x9c]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0x9c], ecx
        mov    ecx, dword ptr [esi + 8]
        fadd    dword ptr [esi + 8]
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0xa8]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xa8]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0x9c]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0x9c], ecx
        mov    eax, dword ptr [ebp - 0xc]
        mov    ecx, dword ptr [ebp - 0x9c]
        mov    edx, dword ptr [ebp - 0x14]
        mov    dword ptr [eax + 0x10], ecx
        xor    ecx, ecx
        mov    dword ptr [eax + 0x18], ecx
        mov    dword ptr [eax + 0x1c], ecx
        mov    ecx, dword ptr [ebp - 0x10]
        mov    edi, dword ptr [ecx + 0x98]
        mov    ebx, dword ptr [ecx + 0x14]
        inc    edi
        mov    eax, edi
        mov    dword ptr [ebp - 4], edx
        mov    edx, dword ptr [ecx + 0x94]
        shl    eax, 5
        add    eax, edx
        mov    esi, eax
        mov    dword ptr [ecx + 0x98], edi
        mov    dword ptr [ebp - 0xc], esi
        mov    ecx, dword ptr [ebp - 0x88]
        fld1    
        mov    edi, dword ptr [ebp - 4]
        mov    eax, edi
        shl    eax, 4
        fdiv    dword ptr [eax + ecx + 0xc]
        add    eax, ecx
        mov    edx, dword ptr [ebp - 0xc]
        fst    dword ptr [edx + 0xc]
        fld    st(0)
        fmul    dword ptr [eax]
        fstp    dword ptr [edx]
        fld    dword ptr [eax + 4]
        fmul st(0), st(1)
        fstp    dword ptr [edx + 4]
        fmul    dword ptr [eax + 8]
        fstp    dword ptr [edx + 8]
        fld    dword ptr [g_007da87c]
        test    ebx, ebx
        fmul    dword ptr [esi]
        fadd    dword ptr [g_007da874]
        fstp    dword ptr [esi]
        fld    dword ptr [g_007da878]
        fmul    dword ptr [esi + 4]
        fadd    dword ptr [g_007da870]
        fstp    dword ptr [esi + 4]
        je    L_7444
        mov    eax, dword ptr [ebp - 4]
        shl    eax, 4
        add    eax, ebx
        mov    dword ptr [ebp - 4], eax
        jmp    L_744b
L_7444:
        mov    dword ptr [ebp - 4], 0x7b9490
L_744b:
        fld    dword ptr [g_0076e7e4]
        mov    esi, dword ptr [ebp - 4]
        fld    dword ptr [esi + 0xc]
        mov    ecx, dword ptr [esi + 0xc]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0xb4]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xb4]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    dword ptr [ebp - 0x98], ebx
        fld    dword ptr [esi]
        mov    ecx, dword ptr [esi]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0xb4]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xb4]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0x98]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0x98], ecx
        fld    dword ptr [esi + 4]
        mov    ecx, dword ptr [esi + 4]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0xb4]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xb4]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0x98]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0x98], ecx
        mov    ecx, dword ptr [esi + 8]
        fadd    dword ptr [esi + 8]
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0xb4]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xb4]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0x98]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0x98], ecx
        mov    ecx, dword ptr [ebp - 0x98]
        mov    eax, dword ptr [ebp - 0xc]
        mov    dword ptr [eax + 0x10], ecx
        jmp    L_7a84
L_756a:
        cmp    dword ptr [ecx*4 + 0x7b2478], 1
        jne    L_7de1
        fld    dword ptr [g_0076c5b0]
        xor    edi, edi
        mov    dword ptr [ebp - 0x58], 0xbf800000
        mov    dword ptr [ebp - 0x5c], 0xbf800000
        mov    dword ptr [ebp - 0x60], 0xbf800000
        mov    dword ptr [ebp - 0x54], 0xbf800000
        mov    eax, 1
        xor    ebx, ebx
L_75a3:
        test    eax, ecx
        jne    L_75b7
        shl    eax, 1
        inc    ebx
        cmp    ebx, 6
        jl    L_75a3
        mov    ecx, dword ptr [ebp - 0x40]
        jmp    L_7673
L_75b7:
        cmp    ebx, 5
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        mov    edx, dword ptr [g_007da718]
        mov    eax, dword ptr [edx]
        ja    L_764c
        jmp    dword ptr [ebx*4 + 0x448524]
        fld    dword ptr [eax + esi + 0xc]
        mov    ecx, dword ptr [ebp - 0x40]
        fsub    dword ptr [eax + esi + 4]
        fld    dword ptr [eax + ecx + 0xc]
        fsub    dword ptr [eax + ecx + 4]
L_75e4:
        fld    st(1)
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_7669
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [g_0076c5b0]
        jmp    L_7671
        mov    ecx, dword ptr [ebp - 0x40]
        fld    dword ptr [eax + esi + 4]
        fld    dword ptr [eax + ecx + 4]
        jmp    L_75e4
        fld    dword ptr [eax + esi + 0xc]
        mov    ecx, dword ptr [ebp - 0x40]
        fsub    dword ptr [eax + esi]
        fld    dword ptr [eax + ecx + 0xc]
        fsub    dword ptr [eax + ecx]
        jmp    L_75e4
        mov    ecx, dword ptr [ebp - 0x40]
        fld    dword ptr [eax + esi]
        fld    dword ptr [eax + ecx]
        jmp    L_75e4
        mov    ecx, dword ptr [ebp - 0x40]
        fld    dword ptr [eax + esi + 8]
        fld    dword ptr [eax + ecx + 8]
        jmp    L_75e4
        fld    dword ptr [eax + esi + 0xc]
        mov    ecx, dword ptr [ebp - 0x40]
        fsub    dword ptr [eax + esi + 8]
        fld    dword ptr [eax + ecx + 0xc]
        fsub    dword ptr [eax + ecx + 8]
        jmp    L_75e4
L_764c:
        push    0x76df04
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_765e
        int 3    
L_765e:
        mov    ecx, dword ptr [ebp - 0x40]
        fld    dword ptr [g_0076c5b0]
        jmp    L_7671
L_7669:
        fld    st(1)
        fsub st(0), st(1)
        fdivp st(2), st(0)
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_7671:
        mov    edi, ebx
L_7673:
        mov    eax, dword ptr [g_007da718]
        mov    eax, dword ptr [eax]
        fld    dword ptr [eax + ecx]
        lea    edx, [eax + esi + 0xc]
        fsub    dword ptr [eax + esi]
        fmul st(0), st(1)
        fadd    dword ptr [eax + esi]
        fstp    dword ptr [ebp - 0x70]
        fld    dword ptr [eax + ecx + 4]
        fsub    dword ptr [eax + esi + 4]
        fmul st(0), st(1)
        fadd    dword ptr [eax + esi + 4]
        fstp    dword ptr [ebp - 0x6c]
        fld    dword ptr [eax + ecx + 8]
        fsub    dword ptr [eax + esi + 8]
        fmul st(0), st(1)
        fadd    dword ptr [eax + esi + 8]
        fstp    dword ptr [ebp - 0x68]
        fld    dword ptr [eax + ecx + 0xc]
        mov    eax, dword ptr [edi*8 + 0x7b2408]
        test    eax, eax
        fsub    dword ptr [edx]
        fmul st(0), st(1)
        fadd    dword ptr [edx]
        fstp    dword ptr [ebp - 0x64]
        je    L_76d1
        fld    dword ptr [ebp - 0x64]
        fsub    dword ptr [g_007b220c]
        jmp    L_76d7
L_76d1:
        fld    dword ptr [g_007b220c]
L_76d7:
        mov    eax, dword ptr [ebp - 0x10]
        mov    ebx, dword ptr [eax + 0x14]
        mov    edx, dword ptr [edi*8 + 0x7b2404]
        fstp    dword ptr [ebp + edx*4 - 0x70]
        fld    dword ptr [ebx + ecx]
        fsub    dword ptr [ebx + esi]
        fmul st(0), st(1)
        fadd    dword ptr [ebx + esi]
        fstp    dword ptr [ebp - 0x60]
        fld    dword ptr [ebx + ecx + 4]
        fsub    dword ptr [ebx + esi + 4]
        fmul st(0), st(1)
        fadd    dword ptr [ebx + esi + 4]
        fstp    dword ptr [ebp - 0x5c]
        fld    dword ptr [ebx + ecx + 8]
        fsub    dword ptr [ebx + esi + 8]
        fmul st(0), st(1)
        fadd    dword ptr [ebx + esi + 8]
        fstp    dword ptr [ebp - 0x58]
        fld    dword ptr [ebx + ecx + 0xc]
        mov    ecx, dword ptr [ebp - 0x2c]
        test    ecx, ecx
        fsub    dword ptr [ebx + esi + 0xc]
        fmul st(0), st(1)
        fadd    dword ptr [ebx + esi + 0xc]
        fstp    dword ptr [ebp - 0x54]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        jne    L_7a9a
        mov    ecx, dword ptr [g_007da718]
        mov    edx, dword ptr [ecx]
        mov    ecx, dword ptr [eax + 0x98]
        mov    dword ptr [ebp - 8], edx
        mov    edx, dword ptr [eax + 0x94]
        shl    ecx, 5
        add    ecx, edx
        mov    dword ptr [ebp - 0x2c], ecx
        mov    ecx, dword ptr [ebp - 8]
        fld1    
        mov    edi, dword ptr [ebp - 0x28]
        mov    eax, edi
        shl    eax, 4
        fdiv    dword ptr [eax + ecx + 0xc]
        add    eax, ecx
        mov    edx, dword ptr [ebp - 0x2c]
        fst    dword ptr [edx + 0xc]
        fld    st(0)
        fmul    dword ptr [eax]
        fstp    dword ptr [edx]
        fld    dword ptr [eax + 4]
        fmul st(0), st(1)
        fstp    dword ptr [edx + 4]
        fmul    dword ptr [eax + 8]
        fstp    dword ptr [edx + 8]
        fld    dword ptr [g_007da87c]
        test    ebx, ebx
        mov    eax, dword ptr [ebp - 0x2c]
        fmul    dword ptr [eax]
        fadd    dword ptr [g_007da874]
        fstp    dword ptr [eax]
        fld    dword ptr [g_007da878]
        fmul    dword ptr [eax + 4]
        fadd    dword ptr [g_007da870]
        fstp    dword ptr [eax + 4]
        je    L_77b2
        add    ebx, esi
        mov    dword ptr [ebp - 4], ebx
        jmp    L_77b9
L_77b2:
        mov    dword ptr [ebp - 4], 0x7b9490
L_77b9:
        fld    dword ptr [g_0076e7e4]
        mov    esi, dword ptr [ebp - 4]
        fld    dword ptr [esi + 0xc]
        mov    ecx, dword ptr [esi + 0xc]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0xb0]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xb0]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    dword ptr [ebp - 0x90], ebx
        fld    dword ptr [esi]
        mov    ecx, dword ptr [esi]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0xb0]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xb0]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0x90]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0x90], ecx
        fld    dword ptr [esi + 4]
        mov    ecx, dword ptr [esi + 4]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0xb0]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xb0]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0x90]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0x90], ecx
        mov    ecx, dword ptr [esi + 8]
        fadd    dword ptr [esi + 8]
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0xb0]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xb0]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0x90]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0x90], ecx
        mov    eax, dword ptr [ebp - 0x2c]
        mov    ecx, dword ptr [ebp - 0x90]
        mov    dword ptr [eax + 0x10], ecx
        xor    ecx, ecx
        mov    dword ptr [eax + 0x18], ecx
        mov    dword ptr [eax + 0x1c], ecx
        mov    ecx, dword ptr [ebp - 0x10]
        mov    edi, dword ptr [ecx + 0x98]
        inc    edi
        lea    edx, [ebp - 0x70]
        mov    eax, edi
        mov    dword ptr [ebp - 8], edx
        mov    edx, dword ptr [ecx + 0x94]
        shl    eax, 5
        add    eax, edx
        mov    esi, eax
        mov    dword ptr [ecx + 0x98], edi
        mov    dword ptr [ebp - 0xc], esi
        mov    ecx, dword ptr [ebp - 8]
        fld1    
        mov    edi, 0
        mov    eax, edi
        shl    eax, 4
        fdiv    dword ptr [eax + ecx + 0xc]
        add    eax, ecx
        mov    edx, dword ptr [ebp - 0xc]
        fst    dword ptr [edx + 0xc]
        fld    st(0)
        fmul    dword ptr [eax]
        fstp    dword ptr [edx]
        fld    dword ptr [eax + 4]
        fmul st(0), st(1)
        fstp    dword ptr [edx + 4]
        fmul    dword ptr [eax + 8]
        fstp    dword ptr [edx + 8]
        fld    dword ptr [g_007da87c]
        fmul    dword ptr [esi]
        lea    eax, [ebp - 0x60]
        test    eax, eax
        fadd    dword ptr [g_007da874]
        fstp    dword ptr [esi]
        fld    dword ptr [g_007da878]
        fmul    dword ptr [esi + 4]
        fadd    dword ptr [g_007da870]
        fstp    dword ptr [esi + 4]
        je    L_7963
        lea    ecx, [ebp - 0x60]
        mov    dword ptr [ebp - 4], ecx
        jmp    L_796a
L_7963:
        mov    dword ptr [ebp - 4], 0x7b9490
L_796a:
        fld    dword ptr [g_0076e7e4]
        mov    esi, dword ptr [ebp - 4]
        fld    dword ptr [esi + 0xc]
        mov    ecx, dword ptr [esi + 0xc]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0xa4]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xa4]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    dword ptr [ebp - 0x94], ebx
        fld    dword ptr [esi]
        mov    ecx, dword ptr [esi]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0xa4]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xa4]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0x94]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0x94], ecx
        fld    dword ptr [esi + 4]
        mov    ecx, dword ptr [esi + 4]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0xa4]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xa4]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0x94]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0x94], ecx
        mov    ecx, dword ptr [esi + 8]
        fadd    dword ptr [esi + 8]
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0xa4]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xa4]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0x94]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0x94], ecx
        mov    edx, dword ptr [ebp - 0x94]
        mov    eax, dword ptr [ebp - 0xc]
        mov    dword ptr [eax + 0x10], edx
L_7a84:
        xor    ecx, ecx
        mov    dword ptr [eax + 0x18], ecx
        mov    dword ptr [eax + 0x1c], ecx
        mov    eax, dword ptr [ebp - 0x10]
        inc    dword ptr [eax + 0x98]
        jmp    L_829d
L_7a9a:
        mov    esi, dword ptr [eax + 0x98]
        lea    ecx, [ebp - 0x70]
        mov    dword ptr [ebp - 8], ecx
        mov    ecx, dword ptr [eax + 0x94]
        shl    esi, 5
        add    esi, ecx
        mov    dword ptr [ebp - 0xc], esi
        mov    ecx, dword ptr [ebp - 8]
        fld1    
        mov    edi, 0
        mov    eax, edi
        shl    eax, 4
        fdiv    dword ptr [eax + ecx + 0xc]
        add    eax, ecx
        mov    edx, dword ptr [ebp - 0xc]
        fst    dword ptr [edx + 0xc]
        fld    st(0)
        fmul    dword ptr [eax]
        fstp    dword ptr [edx]
        fld    dword ptr [eax + 4]
        fmul st(0), st(1)
        fstp    dword ptr [edx + 4]
        fmul    dword ptr [eax + 8]
        fstp    dword ptr [edx + 8]
        fld    dword ptr [g_007da87c]
        fmul    dword ptr [esi]
        lea    edx, [ebp - 0x60]
        test    edx, edx
        fadd    dword ptr [g_007da874]
        fstp    dword ptr [esi]
        fld    dword ptr [g_007da878]
        fmul    dword ptr [esi + 4]
        fadd    dword ptr [g_007da870]
        fstp    dword ptr [esi + 4]
        je    L_7b14
        lea    eax, [ebp - 0x60]
        mov    dword ptr [ebp - 4], eax
        jmp    L_7b1b
L_7b14:
        mov    dword ptr [ebp - 4], 0x7b9490
L_7b1b:
        fld    dword ptr [g_0076e7e4]
        mov    esi, dword ptr [ebp - 4]
        fld    dword ptr [esi + 0xc]
        mov    ecx, dword ptr [esi + 0xc]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0xac]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xac]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    dword ptr [ebp - 0xa0], ebx
        fld    dword ptr [esi]
        mov    ecx, dword ptr [esi]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0xac]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xac]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0xa0]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0xa0], ecx
        fld    dword ptr [esi + 4]
        mov    ecx, dword ptr [esi + 4]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0xac]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xac]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0xa0]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0xa0], ecx
        mov    ecx, dword ptr [esi + 8]
        fadd    dword ptr [esi + 8]
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0xac]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xac]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0xa0]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0xa0], ecx
        mov    eax, dword ptr [ebp - 0xc]
        mov    ecx, dword ptr [ebp - 0xa0]
        mov    edx, dword ptr [g_007da718]
        mov    edx, dword ptr [edx]
        mov    dword ptr [eax + 0x10], ecx
        xor    ecx, ecx
        mov    dword ptr [eax + 0x18], ecx
        mov    dword ptr [eax + 0x1c], ecx
        mov    ecx, dword ptr [ebp - 0x10]
        mov    edi, dword ptr [ecx + 0x98]
        mov    ebx, dword ptr [ecx + 0x14]
        inc    edi
        mov    dword ptr [ebp - 8], edx
        mov    edx, dword ptr [ebp - 0x14]
        mov    eax, edi
        mov    dword ptr [ebp - 0x14], edx
        mov    edx, dword ptr [ecx + 0x94]
        shl    eax, 5
        add    eax, edx
        mov    esi, eax
        mov    dword ptr [ecx + 0x98], edi
        mov    dword ptr [ebp - 4], esi
        mov    ecx, dword ptr [ebp - 8]
        fld1    
        mov    edi, dword ptr [ebp - 0x14]
        mov    eax, edi
        shl    eax, 4
        fdiv    dword ptr [eax + ecx + 0xc]
        add    eax, ecx
        mov    edx, dword ptr [ebp - 4]
        fst    dword ptr [edx + 0xc]
        fld    st(0)
        fmul    dword ptr [eax]
        fstp    dword ptr [edx]
        fld    dword ptr [eax + 4]
        fmul st(0), st(1)
        fstp    dword ptr [edx + 4]
        fmul    dword ptr [eax + 8]
        fstp    dword ptr [edx + 8]
        fld    dword ptr [g_007da87c]
        test    ebx, ebx
        fmul    dword ptr [esi]
        fadd    dword ptr [g_007da874]
        fstp    dword ptr [esi]
        fld    dword ptr [g_007da878]
        fmul    dword ptr [esi + 4]
        fadd    dword ptr [g_007da870]
        fstp    dword ptr [esi + 4]
        je    L_7cd3
        mov    eax, dword ptr [ebp - 0x14]
        shl    eax, 4
        add    eax, ebx
        mov    dword ptr [ebp - 0x14], eax
        jmp    L_7cda
L_7cd3:
        mov    dword ptr [ebp - 0x14], 0x7b9490
L_7cda:
        fld    dword ptr [g_0076e7e4]
        mov    esi, dword ptr [ebp - 0x14]
        fld    dword ptr [esi + 0xc]
        mov    ecx, dword ptr [esi + 0xc]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x8c]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x8c]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    dword ptr [ebp - 0x74], ebx
        fld    dword ptr [esi]
        mov    ecx, dword ptr [esi]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x8c]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x8c]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0x74]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0x74], ecx
        fld    dword ptr [esi + 4]
        mov    ecx, dword ptr [esi + 4]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x8c]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x8c]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0x74]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0x74], ecx
        mov    ecx, dword ptr [esi + 8]
        fadd    dword ptr [esi + 8]
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x8c]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x8c]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0x74]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0x74], ecx
        mov    ecx, dword ptr [ebp - 0x74]
        mov    eax, dword ptr [ebp - 4]
        mov    dword ptr [eax + 0x10], ecx
        jmp    L_7a84
L_7de1:
        mov    edx, dword ptr [g_007da718]
        mov    dword ptr [ebp - 0x48], 0xbf800000
        mov    dword ptr [ebp - 0x4c], 0xbf800000
        mov    dword ptr [ebp - 0x50], 0xbf800000
        mov    dword ptr [ebp - 0x44], 0xbf800000
        mov    dword ptr [ebp - 0x7c], 0xbf800000
        mov    dword ptr [ebp - 0x80], 0xbf800000
        mov    dword ptr [ebp - 0x84], 0xbf800000
        mov    dword ptr [ebp - 0x78], 0xbf800000
        mov    ebx, dword ptr [edx]
        mov    eax, esi
        mov    ecx, dword ptr [eax + ebx]
        mov    dword ptr [ebp - 0x24], ecx
        mov    ecx, dword ptr [eax + ebx + 4]
        add    eax, ebx
        mov    dword ptr [ebp - 0x20], ecx
        mov    ecx, dword ptr [eax + 8]
        mov    dword ptr [ebp - 0x1c], ecx
        mov    eax, dword ptr [eax + 0xc]
        mov    ecx, dword ptr [ebp - 0x40]
        mov    dword ptr [ebp - 0x18], eax
        mov    edi, dword ptr [edx]
        mov    eax, ecx
        mov    edx, dword ptr [eax + edi]
        mov    dword ptr [ebp - 0x3c], edx
        mov    edx, dword ptr [eax + edi + 4]
        add    eax, edi
        mov    dword ptr [ebp - 0x38], edx
        mov    edx, dword ptr [eax + 8]
        mov    dword ptr [ebp - 0x34], edx
        mov    eax, dword ptr [eax + 0xc]
        mov    edx, dword ptr [ebp - 0x10]
        mov    dword ptr [ebp - 0x30], eax
        mov    eax, dword ptr [edx + 0x14]
        fld    dword ptr [eax + esi]
        fstp    dword ptr [ebp - 0x50]
        fld    dword ptr [eax + esi + 4]
        fstp    dword ptr [ebp - 0x4c]
        fld    dword ptr [eax + esi + 8]
        fstp    dword ptr [ebp - 0x48]
        fld    dword ptr [eax + esi + 0xc]
        xor    esi, esi
        fstp    dword ptr [ebp - 0x44]
        fld    dword ptr [eax + ecx]
        fstp    dword ptr [ebp - 0x84]
        fld    dword ptr [eax + ecx + 4]
        fstp    dword ptr [ebp - 0x80]
        fld    dword ptr [eax + ecx + 8]
        fstp    dword ptr [ebp - 0x7c]
        fld    dword ptr [eax + ecx + 0xc]
        mov    eax, 1
        fstp    dword ptr [ebp - 0x78]
        mov    dword ptr [ebp - 0x2c], eax
L_7eac:
        mov    ecx, dword ptr [ebp - 8]
        test    eax, ecx
        je    L_8230
        mov    edx, dword ptr [ebp - 0xc]
        test    eax, edx
        je    L_8086
        cmp    esi, 5
        ja    L_7f2a
        jmp    dword ptr [esi*4 + 0x44853c]
        fld    dword ptr [ebp - 0x18]
        fsub    dword ptr [ebp - 0x20]
        fld    dword ptr [ebp - 0x30]
        fsub    dword ptr [ebp - 0x38]
L_7eda:
        fld    st(1)
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_7f45
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_7eed:
        mov    dword ptr [ebp + 8], 0
        jmp    L_7f52
        fld    dword ptr [ebp - 0x20]
        fld    dword ptr [ebp - 0x38]
        jmp    L_7eda
        fld    dword ptr [ebp - 0x18]
        fsub    dword ptr [ebp - 0x24]
        fld    dword ptr [ebp - 0x30]
        fsub    dword ptr [ebp - 0x3c]
        jmp    L_7eda
        fld    dword ptr [ebp - 0x24]
        fld    dword ptr [ebp - 0x3c]
        jmp    L_7eda
        fld    dword ptr [ebp - 0x1c]
        fld    dword ptr [ebp - 0x34]
        jmp    L_7eda
        fld    dword ptr [ebp - 0x18]
        fsub    dword ptr [ebp - 0x1c]
        fld    dword ptr [ebp - 0x30]
        fsub    dword ptr [ebp - 0x34]
        jmp    L_7eda
L_7f2a:
        push    0x76df04
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_7eed
        int 3    
        mov    dword ptr [ebp + 8], 0
        jmp    L_7f52
L_7f45:
        fld    st(1)
        fsub st(0), st(1)
        fdivr st(0), st(2)
        fstp    dword ptr [ebp + 8]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_7f52:
        fld    dword ptr [ebp - 0x3c]
        mov    eax, dword ptr [esi*8 + 0x7b2408]
        test    eax, eax
        fsub    dword ptr [ebp - 0x24]
        fmul    dword ptr [ebp + 8]
        fadd    dword ptr [ebp - 0x24]
        fstp    dword ptr [ebp - 0x24]
        fld    dword ptr [ebp - 0x38]
        fsub    dword ptr [ebp - 0x20]
        fmul    dword ptr [ebp + 8]
        fadd    dword ptr [ebp - 0x20]
        fstp    dword ptr [ebp - 0x20]
        fld    dword ptr [ebp - 0x34]
        fsub    dword ptr [ebp - 0x1c]
        fmul    dword ptr [ebp + 8]
        fadd    dword ptr [ebp - 0x1c]
        fstp    dword ptr [ebp - 0x1c]
        fld    dword ptr [ebp - 0x30]
        fsub    dword ptr [ebp - 0x18]
        fmul    dword ptr [ebp + 8]
        fadd    dword ptr [ebp - 0x18]
        fstp    dword ptr [ebp - 0x18]
        je    L_7fa4
        fld    dword ptr [ebp - 0x18]
        fsub    dword ptr [g_007b220c]
        jmp    L_7faa
L_7fa4:
        fld    dword ptr [g_007b220c]
L_7faa:
        mov    eax, dword ptr [esi*8 + 0x7b2404]
        lea    ecx, [ebp - 0x24]
        fstp    dword ptr [ebp + eax*4 - 0x24]
        mov    dword ptr [ebp - 0xc], ecx
        mov    dword ptr [ebp - 0x14], 0
        mov    edi, dword ptr [ebp - 0xc]
        xor    ecx, ecx
        xor    edx, edx
        test    dword ptr [edi], 0x80000000
        setne    cl
        sub    edx, ecx
        and    edx, 8
        xor    ebx, ebx
        test    dword ptr [edi + 4], 0x80000000
        setne    cl
        sub    ebx, ecx
        and    ebx, 2
        or    edx, ebx
        xor    ebx, ebx
        test    dword ptr [edi + 8], 0x80000000
        setne    cl
        sub    ebx, ecx
        and    ebx, 0x10
        or    edx, ebx
        fld    dword ptr [edi + 0xc]
        xor    ebx, ebx
        fcom    dword ptr [edi]
        fnstsw  ax
        test    ah, 1
        setne    cl
        sub    ebx, ecx
        and    ebx, 4
        or    edx, ebx
        xor    ebx, ebx
        fcom    dword ptr [edi + 4]
        fnstsw  ax
        test    ah, 1
        setne    cl
        sub    ebx, ecx
        and    ebx, 1
        or    edx, ebx
        xor    ebx, ebx
        fcomp    dword ptr [edi + 8]
        fnstsw  ax
        test    ah, 0x41
        setne    cl
        sub    ebx, ecx
        and    ebx, 0x20
        or    edx, ebx
        mov    dword ptr [ebp - 0x14], edx
        fld    dword ptr [ebp - 0x84]
        fsub    dword ptr [ebp - 0x50]
        mov    edx, dword ptr [ebp - 0x14]
        mov    eax, dword ptr [ebp - 0x2c]
        mov    dword ptr [ebp - 0xc], edx
        fmul    dword ptr [ebp + 8]
        fadd    dword ptr [ebp - 0x50]
        fstp    dword ptr [ebp - 0x50]
        fld    dword ptr [ebp - 0x80]
        fsub    dword ptr [ebp - 0x4c]
        fmul    dword ptr [ebp + 8]
        fadd    dword ptr [ebp - 0x4c]
        fstp    dword ptr [ebp - 0x4c]
        fld    dword ptr [ebp - 0x7c]
        fsub    dword ptr [ebp - 0x48]
        fmul    dword ptr [ebp + 8]
        fadd    dword ptr [ebp - 0x48]
        fstp    dword ptr [ebp - 0x48]
        fld    dword ptr [ebp - 0x78]
        fsub    dword ptr [ebp - 0x44]
        fmul    dword ptr [ebp + 8]
        fadd    dword ptr [ebp - 0x44]
        fstp    dword ptr [ebp - 0x44]
L_8086:
        mov    ecx, dword ptr [ebp - 4]
        test    eax, ecx
        je    L_8230
        cmp    esi, 5
        ja    L_80f9
        jmp    dword ptr [esi*4 + 0x448554]
        fld    dword ptr [ebp - 0x18]
        fsub    dword ptr [ebp - 0x20]
        fld    dword ptr [ebp - 0x30]
        fsub    dword ptr [ebp - 0x38]
L_80a9:
        fld    st(1)
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_8114
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_80bc:
        mov    dword ptr [ebp + 8], 0
        jmp    L_8121
        fld    dword ptr [ebp - 0x20]
        fld    dword ptr [ebp - 0x38]
        jmp    L_80a9
        fld    dword ptr [ebp - 0x18]
        fsub    dword ptr [ebp - 0x24]
        fld    dword ptr [ebp - 0x30]
        fsub    dword ptr [ebp - 0x3c]
        jmp    L_80a9
        fld    dword ptr [ebp - 0x24]
        fld    dword ptr [ebp - 0x3c]
        jmp    L_80a9
        fld    dword ptr [ebp - 0x1c]
        fld    dword ptr [ebp - 0x34]
        jmp    L_80a9
        fld    dword ptr [ebp - 0x18]
        fsub    dword ptr [ebp - 0x1c]
        fld    dword ptr [ebp - 0x30]
        fsub    dword ptr [ebp - 0x34]
        jmp    L_80a9
L_80f9:
        push    0x76df04
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_80bc
        int 3    
        mov    dword ptr [ebp + 8], 0
        jmp    L_8121
L_8114:
        fld    st(1)
        fsub st(0), st(1)
        fdivr st(0), st(2)
        fstp    dword ptr [ebp + 8]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_8121:
        fld    dword ptr [ebp - 0x3c]
        mov    eax, dword ptr [esi*8 + 0x7b2408]
        test    eax, eax
        fsub    dword ptr [ebp - 0x24]
        fmul    dword ptr [ebp + 8]
        fadd    dword ptr [ebp - 0x24]
        fstp    dword ptr [ebp - 0x3c]
        fld    dword ptr [ebp - 0x38]
        fsub    dword ptr [ebp - 0x20]
        fmul    dword ptr [ebp + 8]
        fadd    dword ptr [ebp - 0x20]
        fstp    dword ptr [ebp - 0x38]
        fld    dword ptr [ebp - 0x34]
        fsub    dword ptr [ebp - 0x1c]
        fmul    dword ptr [ebp + 8]
        fadd    dword ptr [ebp - 0x1c]
        fstp    dword ptr [ebp - 0x34]
        fld    dword ptr [ebp - 0x30]
        fsub    dword ptr [ebp - 0x18]
        fmul    dword ptr [ebp + 8]
        fadd    dword ptr [ebp - 0x18]
        fstp    dword ptr [ebp - 0x30]
        je    L_8173
        fld    dword ptr [ebp - 0x30]
        fsub    dword ptr [g_007b220c]
        jmp    L_8179
L_8173:
        fld    dword ptr [g_007b220c]
L_8179:
        mov    edx, dword ptr [esi*8 + 0x7b2404]
        lea    eax, [ebp - 0x3c]
        fstp    dword ptr [ebp + edx*4 - 0x3c]
        mov    dword ptr [ebp - 4], eax
        mov    dword ptr [ebp - 0x14], 0
        mov    edi, dword ptr [ebp - 4]
        xor    ecx, ecx
        xor    edx, edx
        test    dword ptr [edi], 0x80000000
        setne    cl
        sub    edx, ecx
        and    edx, 8
        xor    ebx, ebx
        test    dword ptr [edi + 4], 0x80000000
        setne    cl
        sub    ebx, ecx
        and    ebx, 2
        or    edx, ebx
        xor    ebx, ebx
        test    dword ptr [edi + 8], 0x80000000
        setne    cl
        sub    ebx, ecx
        and    ebx, 0x10
        or    edx, ebx
        fld    dword ptr [edi + 0xc]
        xor    ebx, ebx
        fcom    dword ptr [edi]
        fnstsw  ax
        test    ah, 1
        setne    cl
        sub    ebx, ecx
        and    ebx, 4
        or    edx, ebx
        xor    ebx, ebx
        fcom    dword ptr [edi + 4]
        fnstsw  ax
        test    ah, 1
        setne    cl
        sub    ebx, ecx
        and    ebx, 1
        or    edx, ebx
        xor    ebx, ebx
        fcomp    dword ptr [edi + 8]
        fnstsw  ax
        test    ah, 0x41
        setne    cl
        sub    ebx, ecx
        and    ebx, 0x20
        or    edx, ebx
        mov    dword ptr [ebp - 0x14], edx
        mov    edx, dword ptr [ebp + 8]
        mov    ecx, dword ptr [ebp - 0x14]
        push    edx
        mov    dword ptr [ebp - 4], ecx
        lea    eax, [ebp - 0x84]
        push    eax
        lea    ecx, [ebp - 0x50]
        push    ecx
        lea    ecx, [ebp - 0x84]
        call    FUN_004286e0
        mov    eax, dword ptr [ebp - 0x2c]
L_8230:
        mov    edx, dword ptr [ebp - 0xc]
        test    dword ptr [ebp - 4], edx
        jne    L_8247
        shl    eax, 1
        inc    esi
        cmp    esi, 6
        mov    dword ptr [ebp - 0x2c], eax
        jl    L_7eac
L_8247:
        cmp    esi, 6
        jne    L_829d
        mov    ebx, dword ptr [ebp - 0x10]
        mov    esi, dword ptr [ebx + 0x98]
        mov    edi, dword ptr [ebx + 0x94]
        push    0
        lea    eax, [ebp - 0x50]
        push    eax
        mov    edx, esi
        lea    ecx, [ebp - 0x24]
        shl    edx, 5
        push    ecx
        add    edx, edi
        push    edx
        call    FUN_00448580
        inc    esi
        push    0
        lea    eax, [ebp - 0x84]
        push    eax
        mov    edx, esi
        lea    ecx, [ebp - 0x3c]
        shl    edx, 5
        push    ecx
        add    edx, edi
        push    edx
        mov    dword ptr [ebx + 0x98], esi
        call    FUN_00448580
        add    esp, 0x20
        inc    esi
        mov    dword ptr [ebx + 0x98], esi
L_829d:
        mov    ecx, dword ptr [ebp - 0x10]
        mov    eax, dword ptr [ebp - 0x28]
        mov    edx, dword ptr [ecx + 0xa0]
        mov    ecx, dword ptr [edx]
        add    eax, 2
        cmp    eax, ecx
        mov    ecx, dword ptr [ebp - 0x10]
        mov    dword ptr [ebp - 0x28], eax
        jl    L_70aa
L_82bc:
        mov    al, byte ptr [ebp + 0x10]
        test    al, al
        jne    L_82d2
        mov    eax, dword ptr [ebp + 0xc]
        mov    esi, dword ptr [eax]
        mov    edx, dword ptr [ecx + 0x98]
        add    esi, edx
        mov    dword ptr [eax], esi
L_82d2:
        mov    edx, dword ptr [ecx + 0x98]
        xor    eax, eax
        test    edx, edx
        setne    al
        pop    edi
        pop    esi
        pop    ebx
        mov    dword ptr [ecx + 8], eax
        mov    esp, ebp
        pop    ebp
        ret    0xc
L_82eb:
        mov    edx, dword ptr [ecx + 0xa0]
        cmp    edx, edi
        ja    L_8303
        mov    dword ptr [ecx + 8], edi
        mov    eax, edi
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    0xc
L_8303:
        mov    al, byte ptr [ebp + 0x10]
        test    al, al
        je    L_8312
        mov    eax, dword ptr [ebp + 0xc]
        mov    eax, dword ptr [eax + 0x30]
        jmp    L_831f
L_8312:
        mov    esi, dword ptr [ebp + 0xc]
        mov    eax, dword ptr [esi]
        mov    ebx, dword ptr [esi + 0x10]
        shl    eax, 5
        add    eax, ebx
L_831f:
        mov    esi, dword ptr [edx]
        mov    dword ptr [ecx + 0x94], eax
        xor    eax, eax
        cmp    esi, edi
        mov    dword ptr [ebp - 0x28], eax
        jle    L_84f5
L_8334:
        mov    edx, dword ptr [ecx + 0x18]
        test    byte ptr [edx + eax], 2
        je    L_84e1
        mov    eax, dword ptr [g_007da718]
        mov    edx, dword ptr [eax]
        mov    esi, dword ptr [ecx + 0x98]
        mov    ebx, dword ptr [ecx + 0x14]
        mov    dword ptr [ebp + 8], edx
        mov    edx, dword ptr [ecx + 0x94]
        shl    esi, 5
        add    esi, edx
        mov    dword ptr [ebp - 0x74], esi
        mov    ecx, dword ptr [ebp + 8]
        fld1    
        mov    edi, dword ptr [ebp - 0x28]
        mov    eax, edi
        shl    eax, 4
        fdiv    dword ptr [eax + ecx + 0xc]
        add    eax, ecx
        mov    edx, dword ptr [ebp - 0x74]
        fst    dword ptr [edx + 0xc]
        fld    st(0)
        fmul    dword ptr [eax]
        fstp    dword ptr [edx]
        fld    dword ptr [eax + 4]
        fmul st(0), st(1)
        fstp    dword ptr [edx + 4]
        fmul    dword ptr [eax + 8]
        fstp    dword ptr [edx + 8]
        fld    dword ptr [g_007da87c]
        test    ebx, ebx
        fmul    dword ptr [esi]
        fadd    dword ptr [g_007da874]
        fstp    dword ptr [esi]
        fld    dword ptr [g_007da878]
        fmul    dword ptr [esi + 4]
        fadd    dword ptr [g_007da870]
        fstp    dword ptr [esi + 4]
        je    L_83c2
        mov    eax, dword ptr [ebp - 0x28]
        shl    eax, 4
        add    eax, ebx
        mov    dword ptr [ebp + 8], eax
        jmp    L_83c9
L_83c2:
        mov    dword ptr [ebp + 8], 0x7b9490
L_83c9:
        fld    dword ptr [g_0076e7e4]
        mov    esi, dword ptr [ebp + 8]
        fld    dword ptr [esi + 0xc]
        mov    ecx, dword ptr [esi + 0xc]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x8c]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x8c]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    dword ptr [ebp - 8], ebx
        fld    dword ptr [esi]
        mov    ecx, dword ptr [esi]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x8c]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x8c]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 8]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 8], ecx
        fld    dword ptr [esi + 4]
        mov    ecx, dword ptr [esi + 4]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x8c]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x8c]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 8]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 8], ecx
        mov    ecx, dword ptr [esi + 8]
        fadd    dword ptr [esi + 8]
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x8c]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x8c]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 8]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 8], ecx
        mov    eax, dword ptr [ebp - 0x74]
        mov    ecx, dword ptr [ebp - 8]
        mov    dword ptr [eax + 0x10], ecx
        xor    ecx, ecx
        mov    dword ptr [eax + 0x18], ecx
        mov    dword ptr [eax + 0x1c], ecx
        mov    eax, dword ptr [ebp - 0x10]
        inc    dword ptr [eax + 0x98]
        mov    ecx, eax
        mov    eax, dword ptr [ebp - 0x28]
L_84e1:
        mov    edx, dword ptr [ecx + 0xa0]
        mov    esi, dword ptr [edx]
        inc    eax
        cmp    eax, esi
        mov    dword ptr [ebp - 0x28], eax
        jl    L_8334
L_84f5:
        mov    al, byte ptr [ebp + 0x10]
        test    al, al
        jne    L_850b
        mov    eax, dword ptr [ebp + 0xc]
        mov    esi, dword ptr [eax]
        mov    edx, dword ptr [ecx + 0x98]
        add    esi, edx
        mov    dword ptr [eax], esi
L_850b:
        mov    edx, dword ptr [ecx + 0x98]
        xor    eax, eax
        test    edx, edx
        setne    al
        pop    edi
        pop    esi
        pop    ebx
        mov    dword ptr [ecx + 8], eax
        mov    esp, ebp
        pop    ebp
        ret    0xc
        // jump-table data @ 0x00448524 (6 relocated pointers)
        __emit 0xD1
        __emit 0x75
        __emit 0x44
        __emit 0x00
        __emit 0xFF
        __emit 0x75
        __emit 0x44
        __emit 0x00
        __emit 0x0C
        __emit 0x76
        __emit 0x44
        __emit 0x00
        __emit 0x1F
        __emit 0x76
        __emit 0x44
        __emit 0x00
        __emit 0x2A
        __emit 0x76
        __emit 0x44
        __emit 0x00
        __emit 0x37
        __emit 0x76
        __emit 0x44
        __emit 0x00
        // jump-table data @ 0x0044853C (6 relocated pointers)
        __emit 0xCE
        __emit 0x7E
        __emit 0x44
        __emit 0x00
        __emit 0xF6
        __emit 0x7E
        __emit 0x44
        __emit 0x00
        __emit 0xFE
        __emit 0x7E
        __emit 0x44
        __emit 0x00
        __emit 0x0C
        __emit 0x7F
        __emit 0x44
        __emit 0x00
        __emit 0x14
        __emit 0x7F
        __emit 0x44
        __emit 0x00
        __emit 0x1C
        __emit 0x7F
        __emit 0x44
        __emit 0x00
        // jump-table data @ 0x00448554 (16 relocated pointers)
        __emit 0x9D
        __emit 0x80
        __emit 0x44
        __emit 0x00
        __emit 0xC5
        __emit 0x80
        __emit 0x44
        __emit 0x00
        __emit 0xCD
        __emit 0x80
        __emit 0x44
        __emit 0x00
        __emit 0xDB
        __emit 0x80
        __emit 0x44
        __emit 0x00
        __emit 0xE3
        __emit 0x80
        __emit 0x44
        __emit 0x00
        __emit 0xEB
        __emit 0x80
        __emit 0x44
        __emit 0x00
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0xC3
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x55
        __emit 0x8B
        __emit 0xEC
        __emit 0x53
        __emit 0x56
        __emit 0x57
        __emit 0x8B
        __emit 0x4D
        __emit 0x0C
        __emit 0xD9
        __emit 0xE8
        __emit 0x8B
        __emit 0x7D
        __emit 0x14
        __emit 0x8B
        __emit 0xC7
        __emit 0xC1
        __emit 0xE0
        __emit 0x04
        __emit 0xD8
    }
}
