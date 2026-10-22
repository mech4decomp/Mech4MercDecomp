/*
 * FUN_00445530 (extent 0x445530-0x446cdc) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076e794;
extern float  g_007b220c;
extern int    g_007b9874;
extern int    g_007b9878;
extern int    g_007b987c;
extern int    g_007b9880;
extern int    g_007b9884;
extern int    g_007da5f4;
extern int    g_007da700;
extern int    g_007da704;
extern int    g_007da708;
extern int    g_007da70c;
extern int    g_007da718;
extern int    g_007da71c;
extern float  g_007da870;
extern float  g_007da874;
extern float  g_007da878;
extern float  g_007da87c;
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_00445530(void)
{
    __asm {
        push    ebp
        mov    ebp, esp
        sub    esp, 0x9c
        push    ebx
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi + 0xa0]
        mov    ecx, dword ptr [eax]
        mov    ebx, ecx
        push    edi
        mov    edi, dword ptr [g_007b9880]
        mov    edi, dword ptr [edi]
        shr    ecx, 2
        xor    eax, eax
        rep stosd
        mov    ecx, ebx
        and    ecx, 3
        rep stosb
        mov    ecx, dword ptr [g_007da70c]
        mov    eax, dword ptr [ecx]
        mov    ecx, dword ptr [esi + 0x9c]
        xor    edx, edx
        mov    dword ptr [ebp - 0x60], eax
        mov    eax, dword ptr [ecx]
        xor    ebx, ebx
        cmp    eax, edx
        mov    dword ptr [ebp - 0x54], esi
        mov    dword ptr [ebp - 0x58], edx
        mov    dword ptr [ebp - 0x5c], edx
        mov    dword ptr [ebp - 0x40], edx
        mov    dword ptr [ebp - 4], edx
        mov    dword ptr [ebp - 0x50], edx
        mov    dword ptr [ebp - 0x10], ebx
        jle    L_6425
        mov    edx, dword ptr [g_007da71c]
L_5598:
        mov    edi, dword ptr [esi + 0xa4]
        lea    eax, [ebx + ebx]
        mov    dword ptr [ebp - 0x28], eax
        add    eax, edi
        mov    dword ptr [ebp - 0x30], eax
        xor    ecx, ecx
        mov    cx, word ptr [eax]
        inc    ebx
        xor    eax, eax
        mov    ax, word ptr [edi + ebx*2]
        mov    dword ptr [ebp - 0x44], ebx
        mov    ebx, dword ptr [ebp - 0x10]
        mov    dword ptr [ebp - 0xc], eax
        xor    eax, eax
        mov    ax, word ptr [edi + ebx*2 + 4]
        mov    edi, dword ptr [ebp - 0x60]
        mov    ebx, dword ptr [edi + ecx*4]
        mov    dword ptr [g_007b987c], ebx
        mov    dword ptr [g_007b9878], ebx
        mov    ebx, dword ptr [edi + eax*4]
        mov    dword ptr [ebp - 0x38], eax
        mov    eax, dword ptr [ebp - 0xc]
        mov    eax, dword ptr [edi + eax*4]
        mov    edi, eax
        and    edi, ebx
        mov    dword ptr [ebp - 0x1c], ebx
        mov    ebx, edi
        mov    edi, dword ptr [g_007b987c]
        and    edi, ebx
        or    eax, dword ptr [ebp - 0x1c]
        mov    ebx, dword ptr [g_007b9878]
        or    ebx, eax
        test    edi, edi
        mov    dword ptr [g_007b987c], edi
        mov    dword ptr [g_007b9878], ebx
        je    L_561e
        mov    ecx, dword ptr [esi + 0x18]
        mov    edi, dword ptr [ebp - 0x50]
        mov    byte ptr [ecx + edi], 0
        jmp    L_6408
L_561e:
        test    ebx, ebx
        jne    L_564d
        mov    eax, dword ptr [esi + 0x18]
        mov    edi, dword ptr [ebp - 0x50]
        mov    byte ptr [eax + edi], 1
        inc    dword ptr [ebp - 0x40]
        mov    eax, dword ptr [g_007b9880]
        mov    eax, dword ptr [eax]
        mov    byte ptr [eax + ecx], 1
        mov    ecx, dword ptr [ebp - 0xc]
        mov    byte ptr [eax + ecx], 1
        mov    ecx, dword ptr [ebp - 0x38]
        mov    byte ptr [eax + ecx], 1
        jmp    L_6408
L_564d:
        mov    eax, dword ptr [ebx*4 + 0x7b2478]
        xor    ecx, ecx
        cmp    eax, 1
        mov    dword ptr [ebp - 0x24], ecx
        jne    L_5b68
        mov    edi, dword ptr [ebp - 0x10]
        lea    eax, [edi + 3]
        cmp    edi, eax
        jge    L_5b4e
        mov    ecx, dword ptr [ebp - 0x44]
        mov    dword ptr [ebp - 0x4c], ecx
        mov    ecx, dword ptr [ebp - 0x28]
        mov    dword ptr [ebp - 0x48], ecx
L_567c:
        mov    ebx, dword ptr [ebp - 0x48]
        mov    ecx, dword ptr [esi + 0xa4]
        xor    edi, edi
        mov    di, word ptr [ecx + ebx]
        mov    ebx, dword ptr [ebp - 0x4c]
        cmp    ebx, eax
        jl    L_5695
        mov    ebx, dword ptr [ebp - 0x10]
L_5695:
        xor    eax, eax
        mov    ax, word ptr [ecx + ebx*2]
        mov    ebx, dword ptr [ebp - 0x24]
        mov    ecx, dword ptr [ebp - 0x58]
        and    ebx, 0xffff
        add    ebx, ecx
        mov    ecx, dword ptr [ebp - 0x60]
        mov    ecx, dword ptr [ecx + edi*4]
        test    ecx, ecx
        mov    dword ptr [ebp - 0x18], eax
        mov    dword ptr [ebp - 0x30], ebx
        mov    dword ptr [g_007b9874], ecx
        jne    L_575d
        mov    edx, dword ptr [g_007da718]
        mov    ecx, dword ptr [edx]
        mov    eax, edi
        shl    eax, 4
        mov    dword ptr [ebp - 0x14], eax
        add    eax, ecx
        mov    ecx, ebx
        mov    ebx, dword ptr [g_007da708]
        shl    ecx, 4
        mov    edx, ecx
        add    edx, dword ptr [ebx]
        mov    ebx, dword ptr [eax]
        mov    dword ptr [edx], ebx
        mov    ebx, dword ptr [eax + 4]
        mov    dword ptr [edx + 4], ebx
        mov    ebx, dword ptr [eax + 8]
        mov    eax, dword ptr [eax + 0xc]
        mov    dword ptr [edx + 0xc], eax
        mov    eax, dword ptr [esi + 0x14]
        mov    dword ptr [edx + 8], ebx
        add    eax, dword ptr [ebp - 0x14]
        mov    edx, dword ptr [g_007da704]
        mov    ebx, dword ptr [edx]
        mov    edx, dword ptr [eax]
        add    ecx, ebx
        mov    ebx, dword ptr [ebp - 0x30]
        mov    dword ptr [ecx], edx
        mov    edx, dword ptr [eax + 4]
        mov    dword ptr [ecx + 4], edx
        mov    edx, dword ptr [eax + 8]
        mov    eax, dword ptr [eax + 0xc]
        mov    dword ptr [ecx + 0xc], eax
        mov    dword ptr [ecx + 8], edx
        mov    edx, dword ptr [g_007b9884]
        mov    eax, dword ptr [edx]
        mov    ecx, dword ptr [esi + 0xa8]
        mov    edx, dword ptr [ecx + edi*8]
        mov    ecx, dword ptr [ecx + edi*8 + 4]
        mov    dword ptr [eax + ebx*8], edx
        mov    edx, dword ptr [ebp - 0x18]
        mov    dword ptr [eax + ebx*8 + 4], ecx
        inc    dword ptr [ebp - 0x24]
        mov    eax, dword ptr [ebp - 0x60]
        mov    eax, dword ptr [eax + edx*4]
        inc    ebx
        test    eax, eax
        mov    byte ptr [ebp - 0x29], 1
        mov    dword ptr [ebp - 0x30], ebx
        je    L_5b29
        jmp    L_576f
L_575d:
        mov    ecx, dword ptr [ebp - 0x60]
        mov    eax, dword ptr [ecx + eax*4]
        test    eax, eax
        mov    byte ptr [ebp - 0x29], 0
        jne    L_5b2f
L_576f:
        mov    edx, dword ptr [g_007b9874]
        or    edx, eax
        xor    eax, eax
        mov    dword ptr [ebp - 0xc], 0
        mov    ecx, 1
        mov    dword ptr [g_007b9874], edx
        mov    dword ptr [ebp - 0x20], eax
L_578e:
        test    edx, ecx
        jne    L_57a3
        shl    ecx, 1
        inc    eax
        cmp    ax, 6
        jb    L_578e
        mov    dword ptr [ebp - 0x20], eax
        jmp    L_58c1
L_57a3:
        mov    dword ptr [ebp - 0x20], eax
        cmp    byte ptr [ebp - 0x29], 1
        jne    L_583d
        mov    edx, dword ptr [g_007da718]
        mov    edx, dword ptr [edx]
        mov    eax, dword ptr [ebp - 0x18]
        mov    ecx, edi
        shl    eax, 4
        shl    ecx, 4
        add    eax, edx
        add    ecx, edx
        mov    edx, dword ptr [ebp - 0x20]
        and    edx, 0xffff
        cmp    edx, 5
        mov    dword ptr [ebp - 8], edx
        ja    L_581c
        jmp    dword ptr [edx*4 + 0x446cdc]
        fld    dword ptr [ecx]
        fld    dword ptr [eax]
        jmp    L_57f9
        fld    dword ptr [ecx + 8]
        fld    dword ptr [eax + 8]
        jmp    L_57f9
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx + 8]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 8]
L_57f9:
        fld    st(1)
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_58b1
        fstp    st(0)
        mov    dword ptr [ebp - 4], 0
        fstp    st(0)
        jmp    L_58be
L_581c:
        push    0x76df04
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_58a5
        int 3    
        mov    edx, dword ptr [ebp - 8]
        mov    dword ptr [ebp - 4], 0
        jmp    L_58be
L_583d:
        mov    eax, dword ptr [g_007da718]
        mov    edx, dword ptr [eax]
        mov    ecx, dword ptr [ebp - 0x18]
        mov    eax, edi
        shl    eax, 4
        shl    ecx, 4
        add    eax, edx
        add    ecx, edx
        mov    edx, dword ptr [ebp - 0x20]
        and    edx, 0xffff
        cmp    edx, 5
        mov    dword ptr [ebp - 8], edx
        ja    L_5893
        jmp    dword ptr [edx*4 + 0x446cf4]
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx + 4]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 4]
        jmp    L_57f9
        fld    dword ptr [ecx + 4]
        fld    dword ptr [eax + 4]
        jmp    L_57f9
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax]
        jmp    L_57f9
L_5893:
        push    0x76df04
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_58a5
        int 3    
L_58a5:
        mov    edx, dword ptr [ebp - 8]
        mov    dword ptr [ebp - 4], 0
        jmp    L_58be
L_58b1:
        fld    st(1)
        fsub st(0), st(1)
        fdivr st(0), st(2)
        fstp    dword ptr [ebp - 4]
        fstp    st(0)
        fstp    st(0)
L_58be:
        mov    dword ptr [ebp - 0xc], edx
L_58c1:
        cmp    byte ptr [ebp - 0x29], 1
        jne    L_59f4
        mov    ecx, dword ptr [g_007da718]
        mov    eax, dword ptr [ecx]
        mov    ecx, dword ptr [g_007da708]
        mov    ecx, dword ptr [ecx]
        mov    edx, dword ptr [ebp - 0x18]
        shl    ebx, 4
        shl    edx, 4
        mov    dword ptr [ebp - 0x28], ebx
        add    ebx, ecx
        mov    dword ptr [ebp - 0x34], eax
        mov    ecx, dword ptr [ebp - 0x34]
        fld    dword ptr [edx + ecx]
        mov    eax, edi
        shl    eax, 4
        fsub    dword ptr [ecx + eax]
        mov    dword ptr [ebp - 8], ebx
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ecx + eax]
        fstp    dword ptr [ebx]
        fld    dword ptr [edx + ecx + 4]
        fsub    dword ptr [ecx + eax + 4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ecx + eax + 4]
        fstp    dword ptr [ebx + 4]
        fld    dword ptr [edx + ecx + 8]
        fsub    dword ptr [ecx + eax + 8]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ecx + eax + 8]
        fstp    dword ptr [ebx + 8]
        lea    ebx, [ecx + eax + 0xc]
        fld    dword ptr [edx + ecx + 0xc]
        mov    ecx, dword ptr [ebp - 0xc]
        cmp    dword ptr [ecx*8 + 0x7b2408], 0
        fsub    dword ptr [ebx]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ebx]
        mov    ebx, dword ptr [ebp - 8]
        fstp    dword ptr [ebx + 0xc]
        je    L_5956
        fld    dword ptr [ebx + 0xc]
        fsub    dword ptr [g_007b220c]
        jmp    L_595c
L_5956:
        fld    dword ptr [g_007b220c]
L_595c:
        mov    ecx, dword ptr [ecx*8 + 0x7b2404]
        fstp    dword ptr [ebx + ecx*4]
        mov    ecx, dword ptr [esi + 0x14]
        fld    dword ptr [edx + ecx]
        mov    esi, dword ptr [ebp - 0x28]
        fsub    dword ptr [ecx + eax]
        mov    ebx, dword ptr [g_007da704]
        add    esi, dword ptr [ebx]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ecx + eax]
        fstp    dword ptr [esi]
        fld    dword ptr [edx + ecx + 4]
        fsub    dword ptr [ecx + eax + 4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ecx + eax + 4]
        fstp    dword ptr [esi + 4]
        fld    dword ptr [edx + ecx + 8]
        fsub    dword ptr [ecx + eax + 8]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ecx + eax + 8]
        lea    eax, [ecx + eax + 0xc]
        fstp    dword ptr [esi + 8]
        fld    dword ptr [edx + ecx + 0xc]
        mov    edx, dword ptr [g_007b9884]
        fsub    dword ptr [eax]
        mov    ecx, dword ptr [edx]
        mov    edx, dword ptr [ebp - 0x30]
        lea    edx, [ecx + edx*8]
        mov    ecx, dword ptr [ebp - 0x18]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax]
        fstp    dword ptr [esi + 0xc]
        mov    esi, dword ptr [ebp - 0x54]
        mov    eax, dword ptr [esi + 0xa8]
        fld    dword ptr [eax + ecx*8]
        fsub    dword ptr [eax + edi*8]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax + edi*8]
        lea    edi, [eax + edi*8 + 4]
        fstp    dword ptr [edx]
        fld    dword ptr [eax + ecx*8 + 4]
        fsub    dword ptr [edi]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edi]
        jmp    L_5b17
L_59f4:
        mov    eax, dword ptr [g_007da718]
        mov    ecx, dword ptr [eax]
        mov    eax, dword ptr [ebp - 0x18]
        mov    dword ptr [ebp - 0x34], ecx
        mov    ecx, dword ptr [g_007da708]
        mov    ecx, dword ptr [ecx]
        shl    ebx, 4
        shl    eax, 4
        mov    dword ptr [ebp - 0x28], ebx
        add    ebx, ecx
        mov    ecx, dword ptr [ebp - 0x34]
        mov    edx, edi
        shl    edx, 4
        fld    dword ptr [ecx + edx]
        mov    dword ptr [ebp - 8], ebx
        fsub    dword ptr [eax + ecx]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax + ecx]
        fstp    dword ptr [ebx]
        fld    dword ptr [ecx + edx + 4]
        fsub    dword ptr [eax + ecx + 4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax + ecx + 4]
        fstp    dword ptr [ebx + 4]
        fld    dword ptr [ecx + edx + 8]
        fsub    dword ptr [eax + ecx + 8]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax + ecx + 8]
        fstp    dword ptr [ebx + 8]
        lea    ebx, [eax + ecx + 0xc]
        fld    dword ptr [ecx + edx + 0xc]
        mov    ecx, dword ptr [ebp - 0xc]
        cmp    dword ptr [ecx*8 + 0x7b2408], 0
        fsub    dword ptr [ebx]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ebx]
        mov    ebx, dword ptr [ebp - 8]
        fstp    dword ptr [ebx + 0xc]
        je    L_5a7e
        fld    dword ptr [ebx + 0xc]
        fsub    dword ptr [g_007b220c]
        jmp    L_5a84
L_5a7e:
        fld    dword ptr [g_007b220c]
L_5a84:
        mov    ecx, dword ptr [ecx*8 + 0x7b2404]
        fstp    dword ptr [ebx + ecx*4]
        mov    ecx, dword ptr [esi + 0x14]
        fld    dword ptr [ecx + edx]
        mov    esi, dword ptr [ebp - 0x28]
        fsub    dword ptr [eax + ecx]
        mov    ebx, dword ptr [g_007da704]
        add    esi, dword ptr [ebx]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax + ecx]
        fstp    dword ptr [esi]
        fld    dword ptr [ecx + edx + 4]
        fsub    dword ptr [eax + ecx + 4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax + ecx + 4]
        fstp    dword ptr [esi + 4]
        fld    dword ptr [ecx + edx + 8]
        fsub    dword ptr [eax + ecx + 8]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax + ecx + 8]
        lea    eax, [eax + ecx + 0xc]
        fstp    dword ptr [esi + 8]
        fld    dword ptr [ecx + edx + 0xc]
        mov    edx, dword ptr [g_007b9884]
        fsub    dword ptr [eax]
        mov    ecx, dword ptr [edx]
        mov    edx, dword ptr [ebp - 0x30]
        lea    edx, [ecx + edx*8]
        mov    ecx, dword ptr [ebp - 0x18]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax]
        fstp    dword ptr [esi + 0xc]
        mov    esi, dword ptr [ebp - 0x54]
        mov    eax, dword ptr [esi + 0xa8]
        fld    dword ptr [eax + edi*8]
        fsub    dword ptr [eax + ecx*8]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax + ecx*8]
        lea    ecx, [eax + ecx*8 + 4]
        fstp    dword ptr [edx]
        fld    dword ptr [eax + edi*8 + 4]
        fsub    dword ptr [ecx]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ecx]
L_5b17:
        mov    eax, dword ptr [ebp - 0x24]
        fstp    dword ptr [edx + 4]
        mov    edx, dword ptr [g_007da71c]
        inc    eax
        mov    dword ptr [ebp - 0x24], eax
        jmp    L_5b2f
L_5b29:
        mov    edx, dword ptr [g_007da71c]
L_5b2f:
        add    dword ptr [ebp - 0x48], 2
        mov    eax, dword ptr [ebp - 0x4c]
        inc    eax
        lea    ecx, [eax - 1]
        mov    dword ptr [ebp - 0x4c], eax
        mov    eax, dword ptr [ebp - 0x10]
        add    eax, 3
        cmp    ecx, eax
        jl    L_567c
        mov    ecx, dword ptr [ebp - 0x24]
L_5b4e:
        mov    edi, dword ptr [g_007da700]
        mov    edi, dword ptr [edi]
        mov    ebx, dword ptr [ebp - 0x5c]
        mov    eax, ecx
        and    eax, 0xffff
        mov    dword ptr [edi + ebx*4], eax
        jmp    L_63e2
L_5b68:
        mov    ecx, dword ptr [edx + 0x28]
        mov    eax, dword ptr [edx + 0x30]
        mov    edi, dword ptr [ebp - 0x10]
        mov    ebx, dword ptr [edx + 0x20]
        mov    dword ptr [ebp - 0x94], ecx
        mov    dword ptr [ebp - 0x90], eax
        mov    eax, dword ptr [edx + 0x38]
        xor    ecx, ecx
        add    edi, 3
        cmp    dword ptr [ebp - 0x10], edi
        mov    dword ptr [ebp - 0x98], ebx
        mov    dword ptr [ebp - 0x8c], eax
        mov    dword ptr [ebp - 0x20], ecx
        jge    L_5c86
        mov    eax, dword ptr [g_007da70c]
        mov    eax, dword ptr [eax]
        mov    edx, dword ptr [g_007da718]
        mov    edx, dword ptr [edx]
        mov    dword ptr [ebp - 0x1c], eax
        mov    eax, dword ptr [ebp - 0x30]
        mov    dword ptr [ebp - 0xc], eax
        sub    edi, dword ptr [ebp - 0x10]
        mov    dword ptr [ebp - 0x34], edx
        mov    dword ptr [ebp - 0x28], edi
        jmp    L_5bc6
L_5bc3:
        mov    edx, dword ptr [ebp - 0x34]
L_5bc6:
        mov    edi, dword ptr [ebp - 0xc]
        xor    eax, eax
        mov    ax, word ptr [edi]
        and    ecx, 0xffff
        mov    dword ptr [ebp - 8], ecx
        shl    ecx, 4
        mov    dword ptr [ebp - 0x14], eax
        shl    eax, 4
        mov    edi, dword ptr [edx + eax]
        mov    dword ptr [ecx + ebx], edi
        mov    edi, dword ptr [edx + eax + 4]
        mov    dword ptr [ecx + ebx + 4], edi
        mov    edi, dword ptr [edx + eax + 8]
        mov    edx, dword ptr [edx + eax + 0xc]
        mov    dword ptr [ecx + ebx + 0xc], edx
        mov    edx, dword ptr [esi + 0x14]
        mov    dword ptr [ecx + ebx + 8], edi
        mov    edi, dword ptr [edx + eax]
        mov    edx, dword ptr [ebp - 0x94]
        mov    dword ptr [ecx + edx], edi
        mov    edi, dword ptr [esi + 0x14]
        mov    edi, dword ptr [edi + eax + 4]
        mov    dword ptr [ecx + edx + 4], edi
        mov    edi, dword ptr [esi + 0x14]
        mov    edi, dword ptr [edi + eax + 8]
        mov    dword ptr [ecx + edx + 8], edi
        mov    edi, dword ptr [esi + 0x14]
        mov    eax, dword ptr [edi + eax + 0xc]
        mov    edi, dword ptr [ebp - 0x90]
        mov    dword ptr [ecx + edx + 0xc], eax
        mov    eax, dword ptr [ebp - 0x14]
        mov    ecx, dword ptr [esi + 0xa8]
        mov    edx, dword ptr [ecx + eax*8]
        mov    ecx, dword ptr [ebp - 8]
        mov    dword ptr [edi + ecx*8], edx
        mov    edx, dword ptr [esi + 0xa8]
        mov    edx, dword ptr [edx + eax*8 + 4]
        mov    dword ptr [edi + ecx*8 + 4], edx
        mov    edx, dword ptr [ebp - 0x1c]
        mov    edx, dword ptr [edx + eax*4]
        mov    eax, dword ptr [ebp - 0x8c]
        mov    dword ptr [eax + ecx*4], edx
        mov    ecx, dword ptr [ebp - 0xc]
        mov    edx, dword ptr [ebp - 0x28]
        add    ecx, 2
        mov    dword ptr [ebp - 0xc], ecx
        mov    ecx, dword ptr [ebp - 0x20]
        inc    ecx
        dec    edx
        mov    dword ptr [ebp - 0x20], ecx
        mov    dword ptr [ebp - 0x28], edx
        jne    L_5bc3
        mov    edx, dword ptr [g_007da71c]
L_5c86:
        mov    edi, dword ptr [edx]
        mov    dword ptr [ebp - 0x7c], edi
        mov    edi, dword ptr [edx + 8]
        mov    dword ptr [ebp - 0x78], edi
        mov    edi, dword ptr [edx + 0x10]
        mov    word ptr [ebp - 0x80], cx
        xor    ecx, ecx
        mov    dword ptr [ebp - 0x74], edi
        mov    edi, dword ptr [edx + 0x18]
        mov    dword ptr [ebp - 0x38], ecx
        mov    dword ptr [ebp - 0x70], edi
        mov    word ptr [ebp - 0x64], cx
        mov    dword ptr [ebp - 0x4c], 1
        mov    dword ptr [ebp - 0x14], 4
L_5cb8:
        mov    dword ptr [ebp - 0xc], 0
        mov    dword ptr [ebp - 0x34], 0x7b2404
        mov    dword ptr [ebp - 0x1c], 6
L_5ccd:
        mov    ecx, dword ptr [ebp - 0x4c]
        test    dword ptr [g_007b9878], ecx
        je    L_6289
        mov    ecx, dword ptr [ebp - 0x80]
        and    ecx, 0xffff
        mov    dword ptr [ebp - 0x30], ecx
        jle    L_621d
        mov    edx, dword ptr [ebp - 0x90]
        mov    dword ptr [ebp - 0x28], eax
        mov    eax, dword ptr [ebp - 0x94]
        lea    ecx, [eax + 0xc]
        mov    edi, 1
        sub    eax, ebx
        mov    dword ptr [ebp - 0x44], edi
        mov    dword ptr [ebp - 0x24], edx
        mov    dword ptr [ebp - 8], ecx
        lea    esi, [ebx + 8]
        mov    dword ptr [ebp - 0x48], eax
L_5d16:
        mov    eax, dword ptr [ebp - 0x30]
        mov    ecx, dword ptr [ebp - 8]
        xor    edx, edx
        cmp    edi, eax
        mov    eax, dword ptr [ebp - 0x28]
        mov    eax, dword ptr [eax]
        setge    dl
        mov    dword ptr [g_007b9874], eax
        dec    edx
        and    edx, edi
        mov    edi, dword ptr [ebp - 0x4c]
        test    eax, edi
        mov    dword ptr [ebp - 0x18], edx
        jne    L_5df6
        mov    edx, dword ptr [ebp - 0x64]
        mov    edi, dword ptr [esi - 8]
        mov    ecx, dword ptr [ebp - 0x7c]
        and    edx, 0xffff
        mov    eax, edx
        shl    eax, 4
        mov    dword ptr [eax + ecx], edi
        mov    edi, dword ptr [esi - 4]
        mov    dword ptr [eax + ecx + 4], edi
        mov    edi, dword ptr [esi]
        mov    dword ptr [eax + ecx + 8], edi
        mov    edi, dword ptr [esi + 4]
        mov    dword ptr [eax + ecx + 0xc], edi
        mov    ecx, dword ptr [ebp - 0x28]
        mov    ecx, dword ptr [ecx]
        mov    edi, dword ptr [ebp - 0x70]
        mov    dword ptr [edi + edx*4], ecx
        mov    ecx, dword ptr [ebp - 8]
        mov    edi, dword ptr [ecx - 0xc]
        inc    word ptr [ebp - 0x64]
        mov    dword ptr [ebp - 0x20], edx
        mov    edx, dword ptr [ebp - 0x78]
        mov    dword ptr [eax + edx], edi
        mov    edi, dword ptr [ecx - 8]
        mov    dword ptr [eax + edx + 4], edi
        mov    edi, dword ptr [ebp - 0x48]
        mov    edi, dword ptr [esi + edi]
        mov    dword ptr [eax + edx + 8], edi
        mov    edi, dword ptr [ecx]
        mov    dword ptr [eax + edx + 0xc], edi
        mov    edx, dword ptr [ebp - 0x24]
        mov    edi, dword ptr [edx]
        mov    eax, dword ptr [ebp - 0x74]
        mov    edx, dword ptr [ebp - 0x20]
        mov    dword ptr [eax + edx*8], edi
        mov    edi, dword ptr [ebp - 0x24]
        mov    edi, dword ptr [edi + 4]
        mov    dword ptr [eax + edx*8 + 4], edi
        mov    edi, dword ptr [ebp - 0x18]
        mov    eax, dword ptr [ebp - 0x8c]
        mov    edx, dword ptr [ebp - 0x4c]
        test    dword ptr [eax + edi*4], edx
        je    L_61e7
        mov    eax, dword ptr [ebp - 0x34]
        shl    edi, 4
        cmp    eax, 0x7b242c
        ja    L_5e88
        mov    edx, dword ptr [ebp - 0xc]
        jmp    dword ptr [edx*4 + 0x446d0c]
        fld    dword ptr [esi + 4]
        fsub    dword ptr [esi - 4]
        fld    dword ptr [edi + ebx + 0xc]
        fsub    dword ptr [edi + ebx + 4]
        jmp    L_5e4d
L_5df6:
        mov    eax, dword ptr [ebp - 0x8c]
        test    dword ptr [eax + edx*4], edi
        jne    L_61e7
        mov    edi, dword ptr [ebp - 0x18]
        mov    edx, dword ptr [ebp - 0x34]
        shl    edi, 4
        cmp    edx, 0x7b242c
        ja    L_6018
        mov    eax, dword ptr [ebp - 0xc]
        jmp    dword ptr [eax*4 + 0x446d24]
        fld    dword ptr [edi + ebx + 0xc]
        fsub    dword ptr [edi + ebx + 4]
        fld    dword ptr [esi + 4]
        fsub    dword ptr [esi - 4]
        jmp    L_5fda
        fld    dword ptr [esi - 4]
        fld    dword ptr [edi + ebx + 4]
        jmp    L_5e4d
        fld    dword ptr [esi + 4]
        fsub    dword ptr [esi - 8]
        fld    dword ptr [edi + ebx + 0xc]
        fsub    dword ptr [edi + ebx]
L_5e4d:
        fld    st(1)
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_5ea6
        fstp    st(0)
        mov    dword ptr [ebp - 4], 0
        fstp    st(0)
        jmp    L_5eb3
        fld    dword ptr [esi - 8]
        fld    dword ptr [edi + ebx]
        jmp    L_5e4d
        fld    dword ptr [esi]
        fld    dword ptr [edi + ebx + 8]
        jmp    L_5e4d
        fld    dword ptr [esi + 4]
        fsub    dword ptr [esi]
        fld    dword ptr [edi + ebx + 0xc]
        fsub    dword ptr [edi + ebx + 8]
        jmp    L_5e4d
L_5e88:
        push    0x76df04
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_5e9a
        int 3    
L_5e9a:
        mov    ecx, dword ptr [ebp - 8]
        mov    dword ptr [ebp - 4], 0
        jmp    L_5eb3
L_5ea6:
        fld    st(1)
        fsub st(0), st(1)
        fdivr st(0), st(2)
        fstp    dword ptr [ebp - 4]
        fstp    st(0)
        fstp    st(0)
L_5eb3:
        fld    dword ptr [edi + ebx]
        mov    edx, dword ptr [ebp - 0x64]
        fsub    dword ptr [esi - 8]
        mov    eax, dword ptr [ebp - 0x7c]
        and    edx, 0xffff
        mov    dword ptr [ebp - 0x20], edx
        fmul    dword ptr [ebp - 4]
        shl    edx, 4
        add    eax, edx
        fadd    dword ptr [esi - 8]
        fstp    dword ptr [eax]
        fld    dword ptr [edi + ebx + 4]
        fsub    dword ptr [esi - 4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [esi - 4]
        fstp    dword ptr [eax + 4]
        fld    dword ptr [edi + ebx + 8]
        fsub    dword ptr [esi]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [esi]
        fstp    dword ptr [eax + 8]
        fld    dword ptr [edi + ebx + 0xc]
        mov    ebx, dword ptr [ebp - 0x34]
        cmp    dword ptr [ebx + 4], 0
        fsub    dword ptr [esi + 4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [esi + 4]
        fstp    dword ptr [eax + 0xc]
        je    L_5f17
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [g_007b220c]
        jmp    L_5f1d
L_5f17:
        fld    dword ptr [g_007b220c]
L_5f1d:
        mov    ebx, dword ptr [ebx]
        fstp    dword ptr [eax + ebx*4]
        mov    ebx, dword ptr [ebp - 0x94]
        fld    dword ptr [edi + ebx]
        mov    ebx, dword ptr [ebp - 0x78]
        fsub    dword ptr [ecx - 0xc]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ecx - 0xc]
        fstp    dword ptr [edx + ebx]
        mov    ebx, dword ptr [ebp - 0x94]
        fld    dword ptr [edi + ebx + 4]
        mov    ebx, dword ptr [ebp - 0x78]
        fsub    dword ptr [ecx - 8]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ecx - 8]
        fstp    dword ptr [edx + ebx + 4]
        mov    ebx, dword ptr [ebp - 0x94]
        fld    dword ptr [edi + ebx + 8]
        mov    ebx, dword ptr [ebp - 0x48]
        fsub    dword ptr [esi + ebx]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [esi + ebx]
        mov    ebx, dword ptr [ebp - 0x78]
        fstp    dword ptr [edx + ebx + 8]
        mov    ebx, dword ptr [ebp - 0x94]
        fld    dword ptr [edi + ebx + 0xc]
        mov    edi, dword ptr [ebp - 0x74]
        fsub    dword ptr [ecx]
        mov    ebx, dword ptr [ebp - 0x20]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ecx]
        mov    ecx, dword ptr [ebp - 0x78]
        fstp    dword ptr [edx + ecx + 0xc]
        mov    edx, dword ptr [ebp - 0x90]
        mov    ecx, dword ptr [ebp - 0x18]
        fld    dword ptr [edx + ecx*8]
        mov    ecx, dword ptr [ebp - 0x24]
        fsub    dword ptr [ecx]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ecx]
        fstp    dword ptr [edi + ebx*8]
        mov    ebx, dword ptr [ebp - 0x18]
        fld    dword ptr [edx + ebx*8 + 4]
        mov    edx, dword ptr [ebp - 0x20]
        fsub    dword ptr [ecx + 4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ecx + 4]
        fstp    dword ptr [edi + edx*8 + 4]
        jmp    L_6148
        fld    dword ptr [edi + ebx + 4]
        fld    dword ptr [esi - 4]
        jmp    L_5fda
        fld    dword ptr [edi + ebx + 0xc]
        fsub    dword ptr [edi + ebx]
        fld    dword ptr [esi + 4]
        fsub    dword ptr [esi - 8]
L_5fda:
        fld    st(1)
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_6036
        fstp    st(0)
        fstp    st(0)
L_5fed:
        mov    edx, dword ptr [ebp - 0x34]
        mov    dword ptr [ebp - 4], 0
        jmp    L_6043
        fld    dword ptr [edi + ebx]
        fld    dword ptr [esi - 8]
        jmp    L_5fda
        fld    dword ptr [edi + ebx + 8]
        fld    dword ptr [esi]
        jmp    L_5fda
        fld    dword ptr [edi + ebx + 0xc]
        fsub    dword ptr [edi + ebx + 8]
        fld    dword ptr [esi + 4]
        fsub    dword ptr [esi]
        jmp    L_5fda
L_6018:
        push    0x76df04
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_5fed
        int 3    
        mov    edx, dword ptr [ebp - 0x34]
        mov    dword ptr [ebp - 4], 0
        jmp    L_6043
L_6036:
        fld    st(1)
        fsub st(0), st(1)
        fdivr st(0), st(2)
        fstp    dword ptr [ebp - 4]
        fstp    st(0)
        fstp    st(0)
L_6043:
        fld    dword ptr [esi - 8]
        mov    ecx, dword ptr [ebp - 0x64]
        fsub    dword ptr [edi + ebx]
        mov    eax, dword ptr [ebp - 0x7c]
        and    ecx, 0xffff
        mov    dword ptr [ebp - 0x20], ecx
        fmul    dword ptr [ebp - 4]
        shl    ecx, 4
        add    eax, ecx
        fadd    dword ptr [edi + ebx]
        fstp    dword ptr [eax]
        fld    dword ptr [esi - 4]
        fsub    dword ptr [edi + ebx + 4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edi + ebx + 4]
        fstp    dword ptr [eax + 4]
        fld    dword ptr [esi]
        fsub    dword ptr [edi + ebx + 8]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edi + ebx + 8]
        lea    ebx, [edi + ebx + 0xc]
        fstp    dword ptr [eax + 8]
        fld    dword ptr [esi + 4]
        fsub    dword ptr [ebx]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ebx]
        mov    ebx, dword ptr [edx + 4]
        test    ebx, ebx
        fstp    dword ptr [eax + 0xc]
        je    L_60a9
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [g_007b220c]
        jmp    L_60af
L_60a9:
        fld    dword ptr [g_007b220c]
L_60af:
        mov    edx, dword ptr [edx]
        fstp    dword ptr [eax + edx*4]
        mov    ebx, dword ptr [ebp - 0x94]
        mov    edx, dword ptr [ebp - 8]
        fld    dword ptr [edx - 0xc]
        mov    edx, dword ptr [ebp - 0x78]
        fsub    dword ptr [edi + ebx]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edi + ebx]
        fstp    dword ptr [ecx + edx]
        mov    edx, dword ptr [ebp - 8]
        fld    dword ptr [edx - 8]
        mov    edx, dword ptr [ebp - 0x78]
        fsub    dword ptr [edi + ebx + 4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edi + ebx + 4]
        fstp    dword ptr [ecx + edx + 4]
        mov    edx, dword ptr [ebp - 0x48]
        fld    dword ptr [esi + edx]
        mov    edx, dword ptr [ebp - 0x78]
        fsub    dword ptr [edi + ebx + 8]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edi + ebx + 8]
        lea    edi, [edi + ebx + 0xc]
        mov    ebx, dword ptr [ebp - 8]
        fstp    dword ptr [ecx + edx + 8]
        fld    dword ptr [ebx]
        mov    ebx, dword ptr [ebp - 0x20]
        fsub    dword ptr [edi]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edi]
        mov    edi, dword ptr [ebp - 0x74]
        fstp    dword ptr [ecx + edx + 0xc]
        mov    ecx, dword ptr [ebp - 0x24]
        fld    dword ptr [ecx]
        mov    edx, dword ptr [ebp - 0x18]
        mov    ecx, dword ptr [ebp - 0x90]
        fsub    dword ptr [ecx + edx*8]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ecx + edx*8]
        lea    ecx, [ecx + edx*8 + 4]
        mov    edx, dword ptr [ebp - 0x24]
        fstp    dword ptr [edi + ebx*8]
        fld    dword ptr [edx + 4]
        fsub    dword ptr [ecx]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ecx]
        fstp    dword ptr [edi + ebx*8 + 4]
L_6148:
        mov    dword ptr [ebp - 0x3c], eax
        mov    dword ptr [ebp - 0x18], 0
        mov    edi, dword ptr [ebp - 0x3c]
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
        mov    dword ptr [ebp - 0x18], edx
        mov    ecx, dword ptr [ebp - 0x70]
        mov    eax, dword ptr [ebp - 0x18]
        mov    edx, dword ptr [ebp - 0x20]
        inc    word ptr [ebp - 0x64]
        mov    ebx, dword ptr [ebp - 0x98]
        mov    dword ptr [ecx + edx*4], eax
        mov    ecx, dword ptr [ebp - 8]
L_61e7:
        mov    eax, dword ptr [ebp - 0x28]
        mov    edi, dword ptr [ebp - 0x44]
        mov    edx, dword ptr [ebp - 0x24]
        add    eax, 4
        add    ecx, 0x10
        inc    edi
        mov    dword ptr [ebp - 0x28], eax
        mov    dword ptr [ebp - 8], ecx
        mov    ecx, dword ptr [ebp - 0x30]
        add    edx, 8
        lea    eax, [edi - 1]
        add    esi, 0x10
        cmp    eax, ecx
        mov    dword ptr [ebp - 0x44], edi
        mov    dword ptr [ebp - 0x24], edx
        jl    L_5d16
        mov    edx, dword ptr [g_007da71c]
L_621d:
        mov    esi, dword ptr [ebp - 0x38]
        mov    ecx, esi
        shl    ecx, 5
        lea    eax, [ecx + edx]
        mov    ecx, dword ptr [eax]
        mov    dword ptr [ebp - 0x98], ecx
        mov    ecx, dword ptr [eax + 8]
        mov    dword ptr [ebp - 0x94], ecx
        mov    ecx, dword ptr [eax + 0x10]
        mov    dword ptr [ebp - 0x90], ecx
        mov    cx, word ptr [ebp - 0x64]
        mov    eax, dword ptr [eax + 0x18]
        mov    ebx, dword ptr [ebp - 0x98]
        mov    word ptr [ebp - 0x80], cx
        xor    ecx, ecx
        test    esi, esi
        sete    cl
        mov    dword ptr [ebp - 0x8c], eax
        mov    word ptr [ebp - 0x64], 0
        mov    dword ptr [ebp - 0x38], ecx
        shl    ecx, 5
        mov    esi, dword ptr [ecx + edx]
        add    ecx, edx
        mov    dword ptr [ebp - 0x7c], esi
        mov    esi, dword ptr [ecx + 8]
        mov    dword ptr [ebp - 0x78], esi
        mov    esi, dword ptr [ecx + 0x10]
        mov    ecx, dword ptr [ecx + 0x18]
        mov    dword ptr [ebp - 0x74], esi
        mov    esi, dword ptr [ebp - 0x54]
        mov    dword ptr [ebp - 0x70], ecx
L_6289:
        mov    edi, dword ptr [ebp - 0x4c]
        mov    ecx, dword ptr [ebp - 0xc]
        shl    edi, 1
        inc    ecx
        mov    dword ptr [ebp - 0x4c], edi
        mov    edi, dword ptr [ebp - 0x34]
        mov    dword ptr [ebp - 0xc], ecx
        mov    ecx, dword ptr [ebp - 0x1c]
        add    edi, 8
        dec    ecx
        mov    dword ptr [ebp - 0x34], edi
        mov    dword ptr [ebp - 0x1c], ecx
        jne    L_5ccd
        mov    edi, dword ptr [ebp - 0x80]
        xor    ecx, ecx
        and    edi, 0xffff
        mov    dword ptr [ebp - 0xc], ecx
        jle    L_62d7
        mov    ecx, eax
        mov    dword ptr [ebp - 0x1c], edi
L_62c3:
        mov    edi, dword ptr [ecx]
        or    dword ptr [ebp - 0xc], edi
        mov    edi, dword ptr [ebp - 0x1c]
        add    ecx, 4
        dec    edi
        mov    dword ptr [ebp - 0x1c], edi
        jne    L_62c3
        mov    ecx, dword ptr [ebp - 0xc]
L_62d7:
        test    ecx, ecx
        mov    dword ptr [g_007b9878], ecx
        je    L_62fd
        mov    ecx, dword ptr [ebp - 0x14]
        mov    edi, ecx
        dec    ecx
        test    edi, edi
        mov    dword ptr [ebp - 0x14], ecx
        jne    L_5cb8
        mov    eax, dword ptr [ebp - 0xc]
        test    eax, eax
        jne    L_63fe
L_62fd:
        mov    eax, dword ptr [ebp - 0x80]
        and    eax, 0xffff
        mov    dword ptr [ebp - 0x30], eax
        jle    L_63c5
        mov    ecx, dword ptr [g_007da708]
        mov    esi, dword ptr [ecx]
        mov    eax, dword ptr [g_007b9884]
        mov    eax, dword ptr [eax]
        mov    ecx, dword ptr [ebp - 0x58]
        mov    edx, dword ptr [g_007da704]
        mov    edx, dword ptr [edx]
        lea    edi, [eax + ecx*8]
        mov    eax, dword ptr [ebp - 0x94]
        shl    ecx, 4
        mov    dword ptr [ebp - 0x44], edx
        add    edx, ecx
        lea    ecx, [esi + ecx + 8]
        mov    dword ptr [ebp - 0x14], ecx
        mov    ecx, dword ptr [ebp - 0x30]
        mov    dword ptr [ebp - 0x38], ecx
        and    ecx, 0x1fffffff
        mov    dword ptr [ebp - 0x3c], esi
        mov    esi, dword ptr [ebp - 0x90]
        shl    ecx, 1
        rep movsd
        mov    ecx, dword ptr [ebp - 0x44]
        mov    edi, dword ptr [ebp - 0x3c]
        sub    edi, ecx
        mov    ecx, dword ptr [ebp - 0x94]
        add    eax, 0xc
        sub    ecx, ebx
        mov    dword ptr [ebp - 0x1c], eax
        lea    eax, [ebx + 8]
        mov    dword ptr [ebp - 0x48], ecx
L_6375:
        mov    ecx, dword ptr [eax - 8]
        mov    esi, dword ptr [eax - 4]
        mov    dword ptr [edi + edx], ecx
        mov    ecx, dword ptr [ebp - 0x14]
        mov    dword ptr [ecx - 4], esi
        mov    esi, dword ptr [eax]
        mov    dword ptr [ecx], esi
        mov    esi, dword ptr [eax + 4]
        mov    dword ptr [ecx + 4], esi
        mov    esi, dword ptr [ebp - 0x1c]
        mov    ebx, dword ptr [esi - 0xc]
        mov    dword ptr [edx], ebx
        mov    ebx, dword ptr [esi - 8]
        mov    dword ptr [edx + 4], ebx
        mov    ebx, dword ptr [ebp - 0x48]
        mov    ebx, dword ptr [eax + ebx]
        add    ecx, 0x10
        mov    dword ptr [edx + 8], ebx
        mov    ebx, dword ptr [esi]
        mov    dword ptr [ebp - 0x14], ecx
        mov    ecx, dword ptr [ebp - 0x38]
        mov    dword ptr [edx + 0xc], ebx
        add    esi, 0x10
        add    edx, 0x10
        add    eax, 0x10
        dec    ecx
        mov    dword ptr [ebp - 0x1c], esi
        mov    dword ptr [ebp - 0x38], ecx
        jne    L_6375
L_63c5:
        mov    edx, dword ptr [g_007da700]
        mov    eax, dword ptr [edx]
        mov    edx, dword ptr [ebp - 0x5c]
        mov    esi, dword ptr [ebp - 0x30]
        mov    ecx, dword ptr [ebp - 0x80]
        mov    dword ptr [eax + edx*4], esi
        mov    esi, dword ptr [ebp - 0x54]
        mov    edx, dword ptr [g_007da71c]
L_63e2:
        mov    edi, dword ptr [ebp - 0x58]
        mov    eax, dword ptr [ebp - 0x40]
        and    ecx, 0xffff
        add    edi, ecx
        mov    ecx, dword ptr [ebp - 0x5c]
        inc    ecx
        inc    eax
        mov    dword ptr [ebp - 0x58], edi
        mov    dword ptr [ebp - 0x5c], ecx
        mov    dword ptr [ebp - 0x40], eax
L_63fe:
        mov    eax, dword ptr [esi + 0x18]
        mov    edi, dword ptr [ebp - 0x50]
        mov    byte ptr [eax + edi], 0
L_6408:
        mov    ebx, dword ptr [ebp - 0x10]
        mov    ecx, dword ptr [esi + 0x9c]
        mov    eax, dword ptr [ecx]
        add    ebx, 3
        inc    edi
        cmp    edi, eax
        mov    dword ptr [ebp - 0x10], ebx
        mov    dword ptr [ebp - 0x50], edi
        jl    L_5598
L_6425:
        mov    dl, byte ptr [ebp + 0x10]
        test    dl, dl
        je    L_6434
        mov    eax, dword ptr [ebp + 0xc]
        mov    eax, dword ptr [eax + 0x30]
        jmp    L_6441
L_6434:
        mov    ecx, dword ptr [ebp + 0xc]
        mov    eax, dword ptr [ecx]
        mov    edi, dword ptr [ecx + 0x10]
        shl    eax, 5
        add    eax, edi
L_6441:
        mov    edi, dword ptr [ebp + 0xc]
        xor    ecx, ecx
        test    dl, dl
        mov    dword ptr [esi + 0x94], eax
        mov    dword ptr [esi + 0x98], ecx
        je    L_645b
        mov    eax, dword ptr [edi + 0x48]
        jmp    L_6464
L_645b:
        mov    edx, dword ptr [edi + 0xc]
        mov    eax, dword ptr [edi + 0x28]
        lea    eax, [eax + edx*2]
L_6464:
        mov    edx, dword ptr [esi + 0xa0]
        mov    ebx, dword ptr [edx]
        mov    dword ptr [esi + 0xac], eax
        xor    eax, eax
        cmp    ebx, ecx
        mov    word ptr [esi + 0xb0], cx
        mov    dword ptr [ebp - 0x10], eax
        mov    dword ptr [ebp - 0x40], ecx
        jle    L_666c
L_6489:
        mov    ecx, dword ptr [g_007b9880]
        mov    edx, dword ptr [ecx]
        cmp    byte ptr [eax + edx], 0
        jne    L_649f
        inc    dword ptr [ebp - 0x40]
        jmp    L_6655
L_649f:
        mov    eax, dword ptr [ebp - 0x10]
        mov    edi, dword ptr [ebp - 0x40]
        mov    edx, dword ptr [g_007da5f4]
        mov    ebx, dword ptr [esi + 0x98]
        mov    ecx, eax
        sub    ecx, edi
        mov    word ptr [edx + eax*2], cx
        mov    eax, dword ptr [g_007da718]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [esi + 0xa8]
        mov    eax, dword ptr [esi + 0x14]
        mov    dword ptr [ebp - 0x3c], ecx
        mov    ecx, dword ptr [esi + 0x94]
        shl    ebx, 5
        add    ebx, ecx
        mov    dword ptr [ebp - 0x58], edx
        mov    dword ptr [ebp - 0x14], eax
        mov    dword ptr [ebp - 0x38], ebx
        mov    ecx, dword ptr [ebp - 0x3c]
        fld1    
        mov    edi, dword ptr [ebp - 0x10]
        mov    eax, edi
        shl    eax, 4
        fdiv    dword ptr [eax + ecx + 0xc]
        add    eax, ecx
        mov    edx, dword ptr [ebp - 0x38]
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
        mov    eax, dword ptr [ebp - 0x14]
        test    eax, eax
        fadd    dword ptr [g_007da874]
        fstp    dword ptr [ebx]
        fld    dword ptr [g_007da878]
        fmul    dword ptr [ebx + 4]
        fadd    dword ptr [g_007da870]
        fstp    dword ptr [ebx + 4]
        je    L_6543
        mov    ecx, dword ptr [ebp - 0x10]
        shl    ecx, 4
        add    ecx, eax
        mov    dword ptr [ebp - 0x14], ecx
        jmp    L_654a
L_6543:
        mov    dword ptr [ebp - 0x14], 0x7b9490
L_654a:
        fld    dword ptr [g_0076e794]
        mov    esi, dword ptr [ebp - 0x14]
        fld    dword ptr [esi + 0xc]
        mov    ecx, dword ptr [esi + 0xc]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x44]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x44]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    dword ptr [ebp - 0x1c], ebx
        fld    dword ptr [esi]
        mov    ecx, dword ptr [esi]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x44]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x44]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0x1c]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0x1c], ecx
        fld    dword ptr [esi + 4]
        mov    ecx, dword ptr [esi + 4]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x44]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x44]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0x1c]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0x1c], ecx
        mov    ecx, dword ptr [esi + 8]
        fadd    dword ptr [esi + 8]
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x44]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x44]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0x1c]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0x1c], ecx
        mov    eax, dword ptr [ebp - 0x38]
        mov    edx, dword ptr [ebp - 0x1c]
        mov    ecx, dword ptr [ebp - 0x10]
        mov    dword ptr [eax + 0x10], edx
        mov    edx, dword ptr [ebp - 0x58]
        mov    esi, dword ptr [edx + ecx*8]
        mov    ecx, dword ptr [edx + ecx*8 + 4]
        mov    dword ptr [eax + 0x1c], ecx
        mov    dword ptr [eax + 0x18], esi
        mov    eax, dword ptr [ebp - 0x54]
        inc    dword ptr [eax + 0x98]
        mov    esi, eax
        mov    eax, dword ptr [ebp - 0x10]
L_6655:
        mov    edx, dword ptr [esi + 0xa0]
        mov    ecx, dword ptr [edx]
        inc    eax
        cmp    eax, ecx
        mov    dword ptr [ebp - 0x10], eax
        jl    L_6489
        mov    edi, dword ptr [ebp + 0xc]
L_666c:
        mov    eax, dword ptr [esi + 0x9c]
        mov    edx, dword ptr [eax]
        xor    ecx, ecx
        test    edx, edx
        mov    dword ptr [ebp - 0x50], ecx
        jle    L_6737
        mov    eax, 2
L_6686:
        mov    edx, dword ptr [esi + 0x18]
        cmp    byte ptr [ecx + edx], 0
        je    L_671d
        mov    ecx, dword ptr [esi + 0xa4]
        mov    ebx, dword ptr [g_007da5f4]
        mov    edi, dword ptr [esi + 0xac]
        xor    edx, edx
        mov    dx, word ptr [eax + ecx - 2]
        xor    ecx, ecx
        mov    cx, word ptr [esi + 0xb0]
        mov    dx, word ptr [ebx + edx*2]
        mov    word ptr [edi + ecx*2], dx
        mov    ecx, dword ptr [esi + 0xa4]
        mov    ebx, dword ptr [g_007da5f4]
        mov    edi, dword ptr [esi + 0xac]
        xor    edx, edx
        mov    dx, word ptr [eax + ecx + 2]
        xor    ecx, ecx
        mov    cx, word ptr [esi + 0xb0]
        mov    dx, word ptr [ebx + edx*2]
        mov    word ptr [edi + ecx*2 + 2], dx
        mov    ecx, dword ptr [esi + 0xa4]
        mov    ebx, dword ptr [g_007da5f4]
        mov    edi, dword ptr [esi + 0xac]
        xor    edx, edx
        mov    dx, word ptr [eax + ecx]
        xor    ecx, ecx
        mov    cx, word ptr [esi + 0xb0]
        mov    dx, word ptr [ebx + edx*2]
        mov    word ptr [edi + ecx*2 + 4], dx
        add    word ptr [esi + 0xb0], 3
        mov    ecx, dword ptr [ebp - 0x50]
L_671d:
        mov    edx, dword ptr [esi + 0x9c]
        mov    edi, dword ptr [edx]
        add    eax, 6
        inc    ecx
        cmp    ecx, edi
        mov    dword ptr [ebp - 0x50], ecx
        jl    L_6686
        mov    edi, dword ptr [ebp + 0xc]
L_6737:
        mov    eax, dword ptr [ebp - 0x5c]
        test    eax, eax
        jle    L_6ca3
        xor    ecx, ecx
        xor    edx, edx
        test    eax, eax
        mov    dword ptr [ebp - 0x50], ecx
        mov    dword ptr [ebp - 0x10], edx
        jle    L_6ca3
L_6754:
        xor    eax, eax
        mov    eax, dword ptr [g_007da700]
        mov    eax, dword ptr [eax]
        mov    ax, word ptr [eax + ecx*4]
        and    eax, 0xffff
        lea    esi, [eax - 1]
        cmp    esi, 1
        mov    dword ptr [ebp - 0x9c], eax
        mov    dword ptr [ebp - 4], esi
        jle    L_6c89
        lea    ecx, [edx*8 + 4]
        mov    dword ptr [ebp - 8], ecx
        lea    ecx, [edx + 1]
        lea    esi, [ecx*8]
        shl    ecx, 4
        mov    eax, edx
        shl    eax, 4
        mov    dword ptr [ebp - 0xc], ecx
        or    ecx, 0xffffffff
        mov    dword ptr [ebp - 0x48], eax
        lea    eax, [edx + 2]
        sub    ecx, edx
        mov    dword ptr [ebp - 0x40], eax
        mov    dword ptr [ebp - 0x28], esi
        mov    dword ptr [ebp - 0x18], ecx
        jmp    L_67b3
L_67b0:
        mov    eax, dword ptr [ebp - 0x40]
L_67b3:
        mov    edx, dword ptr [g_007b9884]
        mov    ecx, dword ptr [edx]
        mov    edx, dword ptr [g_007da704]
        mov    ebx, dword ptr [edx]
        mov    dword ptr [ebp - 0x20], ecx
        mov    ecx, dword ptr [g_007da708]
        mov    edx, dword ptr [ecx]
        lea    ecx, [eax - 1]
        mov    dword ptr [ebp - 0x60], eax
        mov    eax, dword ptr [ebp - 0x54]
        mov    esi, dword ptr [eax + 0x98]
        mov    dword ptr [ebp - 0x3c], ecx
        mov    ecx, dword ptr [eax + 0x94]
        shl    esi, 5
        add    esi, ecx
        mov    dword ptr [ebp - 0x44], ebx
        mov    dword ptr [ebp - 0x30], edx
        mov    dword ptr [ebp - 0x1c], esi
        mov    ecx, dword ptr [ebp - 0x30]
        fld1    
        mov    edi, dword ptr [ebp - 0x10]
        mov    eax, edi
        shl    eax, 4
        fdiv    dword ptr [eax + ecx + 0xc]
        add    eax, ecx
        mov    edx, dword ptr [ebp - 0x1c]
        fst    dword ptr [edx + 0xc]
        fld    st(0)
        fmul    dword ptr [eax]
        fstp    dword ptr [edx]
        fld    dword ptr [eax + 4]
        fmul st(0), st(1)
        fstp    dword ptr [edx + 4]
        fld    dword ptr [eax + 8]
        mov    eax, dword ptr [ebp - 0x60]
        fmul st(0), st(1)
        shl    eax, 4
        add    eax, ecx
        fstp    dword ptr [edx + 8]
        fstp    st(0)
        fld1    
        fdiv    dword ptr [eax + 0xc]
        fst    dword ptr [edx + 0x2c]
        fld    st(0)
        fmul    dword ptr [eax]
        fstp    dword ptr [edx + 0x20]
        fld    dword ptr [eax + 4]
        fmul st(0), st(1)
        fstp    dword ptr [edx + 0x24]
        fld    dword ptr [eax + 8]
        mov    eax, dword ptr [ebp - 0x3c]
        fmul st(0), st(1)
        shl    eax, 4
        add    eax, ecx
        fstp    dword ptr [edx + 0x28]
        fstp    st(0)
        fld1    
        fdiv    dword ptr [eax + 0xc]
        fst    dword ptr [edx + 0x4c]
        fld    st(0)
        fmul    dword ptr [eax]
        fstp    dword ptr [edx + 0x40]
        fld    dword ptr [eax + 4]
        fmul st(0), st(1)
        fstp    dword ptr [edx + 0x44]
        fld    dword ptr [eax + 8]
        fmul st(0), st(1)
        fstp    dword ptr [edx + 0x48]
        fstp    st(0)
        fld    dword ptr [g_007da87c]
        fmul    dword ptr [esi]
        mov    edx, dword ptr [ebp - 0x48]
        add    edx, ebx
        mov    dword ptr [ebp - 0x3c], edx
        fadd    dword ptr [g_007da874]
        fstp    dword ptr [esi]
        fld    dword ptr [g_007da878]
        fmul    dword ptr [esi + 4]
        fadd    dword ptr [g_007da870]
        fstp    dword ptr [esi + 4]
        fld    dword ptr [g_007da87c]
        fmul    dword ptr [esi + 0x20]
        fadd    dword ptr [g_007da874]
        fstp    dword ptr [esi + 0x20]
        fld    dword ptr [g_007da878]
        fmul    dword ptr [esi + 0x24]
        fadd    dword ptr [g_007da870]
        fstp    dword ptr [esi + 0x24]
        fld    dword ptr [g_007da87c]
        fmul    dword ptr [esi + 0x40]
        fadd    dword ptr [g_007da874]
        fstp    dword ptr [esi + 0x40]
        fld    dword ptr [g_007da878]
        fmul    dword ptr [esi + 0x44]
        fadd    dword ptr [g_007da870]
        fstp    dword ptr [esi + 0x44]
        fld    dword ptr [g_0076e794]
        mov    esi, dword ptr [ebp - 0x3c]
        fld    dword ptr [esi + 0xc]
        mov    ecx, dword ptr [esi + 0xc]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x4c]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x4c]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    dword ptr [ebp - 0x14], ebx
        fld    dword ptr [esi]
        mov    ecx, dword ptr [esi]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x4c]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x4c]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0x14]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0x14], ecx
        fld    dword ptr [esi + 4]
        mov    ecx, dword ptr [esi + 4]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x4c]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x4c]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0x14]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0x14], ecx
        mov    ecx, dword ptr [esi + 8]
        fadd    dword ptr [esi + 8]
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x4c]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x4c]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0x14]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0x14], ecx
        mov    eax, dword ptr [ebp - 0x14]
        mov    edx, dword ptr [ebp - 0x1c]
        mov    edi, dword ptr [ebp - 0xc]
        mov    ecx, dword ptr [ebp - 0x44]
        mov    dword ptr [edx + 0x10], eax
        lea    eax, [ecx + edi + 0x10]
        mov    dword ptr [ebp - 0x3c], eax
        fld    dword ptr [g_0076e794]
        mov    esi, dword ptr [ebp - 0x3c]
        fld    dword ptr [esi + 0xc]
        mov    ecx, dword ptr [esi + 0xc]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x34]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x34]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    dword ptr [ebp - 0x38], ebx
        fld    dword ptr [esi]
        mov    ecx, dword ptr [esi]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x34]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x34]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0x38]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0x38], ecx
        fld    dword ptr [esi + 4]
        mov    ecx, dword ptr [esi + 4]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x34]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x34]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0x38]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0x38], ecx
        mov    ecx, dword ptr [esi + 8]
        fadd    dword ptr [esi + 8]
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x34]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x34]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0x38]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0x38], ecx
        mov    eax, dword ptr [ebp - 0x44]
        mov    ecx, dword ptr [ebp - 0x38]
        add    eax, edi
        mov    dword ptr [edx + 0x30], ecx
        mov    dword ptr [ebp - 0x3c], eax
        fld    dword ptr [g_0076e794]
        mov    esi, dword ptr [ebp - 0x3c]
        fld    dword ptr [esi + 0xc]
        mov    ecx, dword ptr [esi + 0xc]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x24]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x24]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    dword ptr [ebp - 0x58], ebx
        fld    dword ptr [esi]
        mov    ecx, dword ptr [esi]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x24]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x24]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0x58]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0x58], ecx
        fld    dword ptr [esi + 4]
        mov    ecx, dword ptr [esi + 4]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x24]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x24]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0x58]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0x58], ecx
        mov    ecx, dword ptr [esi + 8]
        fadd    dword ptr [esi + 8]
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x24]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x24]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0x58]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0x58], ecx
        mov    eax, dword ptr [ebp - 0x20]
        mov    ecx, dword ptr [ebp - 0x58]
        mov    dword ptr [edx + 0x50], ecx
        mov    ecx, dword ptr [ebp - 0x10]
        mov    ecx, dword ptr [eax + ecx*8]
        mov    dword ptr [edx + 0x18], ecx
        mov    ecx, dword ptr [ebp - 8]
        mov    ecx, dword ptr [ecx + eax]
        mov    dword ptr [edx + 0x1c], ecx
        mov    ecx, dword ptr [ebp - 0x28]
        mov    esi, dword ptr [eax + ecx + 8]
        mov    dword ptr [edx + 0x38], esi
        mov    esi, dword ptr [eax + ecx + 0xc]
        mov    dword ptr [edx + 0x3c], esi
        mov    esi, dword ptr [eax + ecx]
        mov    eax, dword ptr [eax + ecx + 4]
        mov    dword ptr [edx + 0x5c], eax
        mov    eax, dword ptr [ebp - 0x54]
        mov    dword ptr [edx + 0x58], esi
        xor    edx, edx
        mov    dx, word ptr [eax + 0xb0]
        mov    bx, word ptr [eax + 0x98]
        mov    esi, dword ptr [eax + 0xac]
        add    ecx, 8
        add    edi, 0x10
        mov    dword ptr [ebp - 0x28], ecx
        mov    ecx, dword ptr [ebp - 0x18]
        mov    word ptr [esi + edx*2], bx
        mov    dx, word ptr [eax + 0x98]
        mov    ebx, dword ptr [eax + 0xac]
        xor    esi, esi
        mov    si, word ptr [eax + 0xb0]
        inc    dx
        mov    dword ptr [ebp - 0xc], edi
        mov    word ptr [ebx + esi*2 + 2], dx
        mov    dx, word ptr [eax + 0x98]
        mov    ebx, dword ptr [eax + 0xac]
        xor    esi, esi
        mov    si, word ptr [eax + 0xb0]
        add    dx, 2
        mov    word ptr [ebx + esi*2 + 4], dx
        mov    ebx, dword ptr [eax + 0x98]
        mov    edx, 3
        add    word ptr [eax + 0xb0], dx
        add    ebx, edx
        mov    dword ptr [eax + 0x98], ebx
        mov    eax, dword ptr [ebp - 0x40]
        inc    eax
        add    ecx, eax
        mov    dword ptr [ebp - 0x40], eax
        cmp    ecx, dword ptr [ebp - 4]
        jl    L_67b0
        mov    ecx, dword ptr [ebp - 0x50]
        mov    edx, dword ptr [ebp - 0x10]
        mov    eax, dword ptr [ebp - 0x9c]
L_6c89:
        add    edx, eax
        mov    eax, dword ptr [ebp - 0x5c]
        inc    ecx
        cmp    ecx, eax
        mov    dword ptr [ebp - 0x10], edx
        mov    dword ptr [ebp - 0x50], ecx
        jl    L_6754
        mov    esi, dword ptr [ebp - 0x54]
        mov    edi, dword ptr [ebp + 0xc]
L_6ca3:
        mov    al, byte ptr [ebp + 0x10]
        test    al, al
        jne    L_6cc7
        mov    ebx, dword ptr [edi]
        mov    edx, dword ptr [esi + 0x98]
        mov    ecx, dword ptr [edi + 0xc]
        xor    eax, eax
        mov    ax, word ptr [esi + 0xb0]
        add    ebx, edx
        mov    dword ptr [edi], ebx
        add    ecx, eax
        mov    dword ptr [edi + 0xc], ecx
L_6cc7:
        xor    eax, eax
        mov    ax, word ptr [esi + 0xb0]
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    0xc
        __emit 0x8D  // alignment pad after epilogue (ref: 8D 49 00)
        __emit 0x49
        __emit 0x00
        // jump-table data @ 0x00446CDC (6 relocated pointers)
        __emit 0x6B
        __emit 0x58
        __emit 0x44
        __emit 0x00
        __emit 0x79
        __emit 0x58
        __emit 0x44
        __emit 0x00
        __emit 0x84
        __emit 0x58
        __emit 0x44
        __emit 0x00
        __emit 0xDF
        __emit 0x57
        __emit 0x44
        __emit 0x00
        __emit 0xE5
        __emit 0x57
        __emit 0x44
        __emit 0x00
        __emit 0xED
        __emit 0x57
        __emit 0x44
        __emit 0x00
        // jump-table data @ 0x00446CF4 (6 relocated pointers)
        __emit 0x6B
        __emit 0x58
        __emit 0x44
        __emit 0x00
        __emit 0x79
        __emit 0x58
        __emit 0x44
        __emit 0x00
        __emit 0x84
        __emit 0x58
        __emit 0x44
        __emit 0x00
        __emit 0xDF
        __emit 0x57
        __emit 0x44
        __emit 0x00
        __emit 0xE5
        __emit 0x57
        __emit 0x44
        __emit 0x00
        __emit 0xED
        __emit 0x57
        __emit 0x44
        __emit 0x00
        // jump-table data @ 0x00446D0C (6 relocated pointers)
        __emit 0xE6
        __emit 0x5D
        __emit 0x44
        __emit 0x00
        __emit 0x37
        __emit 0x5E
        __emit 0x44
        __emit 0x00
        __emit 0x40
        __emit 0x5E
        __emit 0x44
        __emit 0x00
        __emit 0x69
        __emit 0x5E
        __emit 0x44
        __emit 0x00
        __emit 0x71
        __emit 0x5E
        __emit 0x44
        __emit 0x00
        __emit 0x79
        __emit 0x5E
        __emit 0x44
        __emit 0x00
        // jump-table data @ 0x00446D24 (14 relocated pointers)
        __emit 0x24
        __emit 0x5E
        __emit 0x44
        __emit 0x00
        __emit 0xC4
        __emit 0x5F
        __emit 0x44
        __emit 0x00
        __emit 0xCD
        __emit 0x5F
        __emit 0x44
        __emit 0x00
        __emit 0xF9
        __emit 0x5F
        __emit 0x44
        __emit 0x00
        __emit 0x01
        __emit 0x60
        __emit 0x44
        __emit 0x00
        __emit 0x09
        __emit 0x60
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
        __emit 0x33
        __emit 0xC0
        __emit 0xC2
        __emit 0x04
        __emit 0x00
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
    }
}
