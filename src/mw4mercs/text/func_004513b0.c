/*
 * FUN_004513b0 (extent 0x4513b0-0x453618) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076dd60;
extern float  g_0076ea28;
extern float  g_0076ea2c;
extern float  g_007b220c;
extern int    g_007b94a0;
extern int    g_007b98c0;
extern int    g_007b98c4;
extern int    g_007b98c8;
extern int    g_007d98fc;
extern int    g_007da5f4;
extern int    g_007da600;
extern int    g_007da608;
extern int    g_007da65c;
extern int    g_007da660;
extern int    g_007da66c;
extern int    g_007da670;
extern int    g_007da680;
extern int    g_007da684;
extern int    g_007da688;
extern int    g_007da68c;
extern int    g_007da848;
extern int    g_007da864;
extern float  g_007da870;
extern float  g_007da874;
extern float  g_007da878;
extern float  g_007da87c;
extern void __cdecl FUN_0041cb30(void);
extern void __cdecl FUN_00421f00(void);
extern void __cdecl FUN_00423e00(void);
extern void __cdecl FUN_004286e0(void);
extern void __cdecl FUN_00459210(void);
extern void __cdecl FUN_00491cd0(void);
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_004513b0(void)
{
    __asm {
        push    ebp
        mov    ebp, esp
        sub    esp, 0x1d4
        push    ebx
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi + 0x68]
        test    eax, eax
        push    edi
        mov    dword ptr [ebp - 8], esi
        jne    L_13f8
        mov    eax, dword ptr [ebp + 0x1c]
        mov    ecx, dword ptr [ebp + 0x18]
        mov    edx, dword ptr [ebp + 0x14]
        push    eax
        mov    eax, dword ptr [ebp + 0x10]
        push    ecx
        push    edx
        push    eax
        push    ecx
        lea    edx, [ebp + 0xc]
        mov    ecx, esp
        push    edx
        call    FUN_00423e00
        mov    eax, dword ptr [ebp + 8]
        push    eax
        mov    ecx, esi
        call    FUN_00459210
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    0x18
L_13f8:
        mov    eax, dword ptr [esi + 0x58]
        test    eax, eax
        mov    dword ptr [ebp - 0x90], 0
        jg    L_1418
        mov    byte ptr [esi + 0x10], 0
        xor    eax, eax
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    0x18
L_1418:
        cmp    word ptr [esi + 0x56], 0
        mov    ecx, dword ptr [esi + 0x18]
        mov    dword ptr [ebp - 0x14], ecx
        jne    L_142f
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 0x98]
L_142f:
        mov    eax, dword ptr [g_007da68c]
        mov    edi, dword ptr [eax]
        mov    edx, dword ptr [g_007da688]
        mov    eax, dword ptr [edx]
        mov    ecx, dword ptr [ebp - 8]
        mov    esi, dword ptr [ecx + 0x14]
        mov    ecx, dword ptr [g_007da600]
        mov    ebx, dword ptr [ecx]
        mov    dword ptr [ebp - 0x2c], eax
        mov    eax, dword ptr [ebp + 0x14]
        test    eax, eax
        mov    dword ptr [ebp + 0x18], edi
        je    L_14c0
        mov    eax, dword ptr [ebp - 0x14]
        test    eax, eax
        mov    dword ptr [ebp - 0x1c], 0
        jle    L_14fb
L_146b:
        cmp    byte ptr [ebx], 0
        je    L_149d
        mov    edx, dword ptr [ebp - 0x2c]
        mov    eax, dword ptr [ebp + 8]
        mov    ecx, dword ptr [ebp + 0x18]
        push    edx
        push    eax
        push    esi
        mov    byte ptr [ebx], 0
        call    FUN_0041cb30
        mov    ecx, dword ptr [g_007da65c]
        mov    edi, dword ptr [ecx]
        add    edi, dword ptr [ebp - 0x1c]
        mov    ecx, dword ptr [ebp + 0x14]
        push    esi
        call    FUN_00421f00
        mov    byte ptr [edi], al
        mov    edi, dword ptr [ebp + 0x18]
L_149d:
        mov    ecx, dword ptr [ebp - 0x2c]
        mov    eax, dword ptr [ebp - 0x1c]
        add    ecx, 4
        inc    eax
        add    edi, 0x10
        add    esi, 0xc
        mov    dword ptr [ebp - 0x2c], ecx
        mov    ecx, dword ptr [ebp - 0x14]
        inc    ebx
        cmp    eax, ecx
        mov    dword ptr [ebp - 0x1c], eax
        mov    dword ptr [ebp + 0x18], edi
        jl    L_146b
        jmp    L_14fb
L_14c0:
        mov    eax, dword ptr [ebp - 0x14]
        test    eax, eax
        jle    L_14fb
        mov    dword ptr [ebp + 0x14], eax
L_14ca:
        cmp    byte ptr [ebx], 0
        je    L_14e2
        mov    edx, dword ptr [ebp - 0x2c]
        mov    eax, dword ptr [ebp + 8]
        push    edx
        push    eax
        push    esi
        mov    ecx, edi
        mov    byte ptr [ebx], 0
        call    FUN_0041cb30
L_14e2:
        mov    edx, dword ptr [ebp - 0x2c]
        mov    eax, dword ptr [ebp + 0x14]
        add    edx, 4
        add    esi, 0xc
        add    edi, 0x10
        inc    ebx
        dec    eax
        mov    dword ptr [ebp - 0x2c], edx
        mov    dword ptr [ebp + 0x14], eax
        jne    L_14ca
L_14fb:
        mov    ecx, dword ptr [ebp - 8]
        mov    eax, dword ptr [ecx + 0x24]
        and    eax, 0x3fff
        mov    dword ptr [ebp - 0x94], 0
        mov    dword ptr [ebp - 4], 0
        mov    byte ptr [ebp + 0x17], 0
        mov    dword ptr [ebp - 0xa4], 0
        mov    dword ptr [ebp - 0x9c], 0
        je    L_15f9
        test    eax, eax
        jle    L_15f9
        mov    edx, dword ptr [g_007da848]
        mov    esi, dword ptr [edx + eax*4 + 0x24]
        test    esi, esi
        je    L_15f9
        mov    eax, dword ptr [esi]
        push    0
        mov    ecx, esi
        call    dword ptr [eax + 4]
        mov    ecx, eax
        call    FUN_00491cd0
        cmp    eax, 0x100
        jl    L_1572
        mov    dword ptr [g_007da864], 1
        jmp    L_15cd
L_1572:
        cmp    eax, 0x80
        jl    L_1585
        mov    dword ptr [g_007da864], 2
        jmp    L_15cd
L_1585:
        cmp    eax, 0x40
        jl    L_1596
        mov    dword ptr [g_007da864], 4
        jmp    L_15cd
L_1596:
        cmp    eax, 0x20
        jl    L_15a7
        mov    dword ptr [g_007da864], 8
        jmp    L_15cd
L_15a7:
        cmp    eax, 0x10
        jl    L_15b8
        mov    dword ptr [g_007da864], 0x10
        jmp    L_15cd
L_15b8:
        xor    ecx, ecx
        cmp    eax, 8
        setl    cl
        dec    ecx
        and    ecx, 0xffffffe0
        add    ecx, 0x40
        mov    dword ptr [g_007da864], ecx
L_15cd:
        mov    al, byte ptr [esi + 0x24]
        test    al, al
        jne    L_16a5
        mov    eax, dword ptr [esi + 0x28]
        test    eax, eax
        je    L_16a5
        mov    edx, dword ptr [eax + 0xc]
        mov    eax, dword ptr [eax + 0x1c]
        mov    byte ptr [ebp + 0x17], 1
        mov    dword ptr [ebp - 0xa4], edx
        mov    dword ptr [ebp - 0x9c], eax
L_15f9:
        mov    ecx, dword ptr [g_007da688]
        mov    edx, dword ptr [ecx]
        mov    ecx, dword ptr [ebp - 8]
        xor    eax, eax
        mov    dword ptr [ebp - 0x2c], edx
        cmp    dword ptr [ecx + 0x58], eax
        mov    dword ptr [ebp - 0x98], eax
        mov    dword ptr [ebp - 0x68], eax
        mov    dword ptr [ebp - 0x1c], eax
        mov    dword ptr [ebp - 0x10], eax
        jle    L_3017
L_1621:
        mov    edx, dword ptr [g_007d98fc]
        mov    ecx, dword ptr [ebp - 0x1c]
        mov    eax, dword ptr [edx]
        add    eax, ecx
        cmp    byte ptr [eax], 0
        mov    dword ptr [ebp + 8], eax
        je    L_2ff9
        mov    edx, dword ptr [ebp - 8]
        mov    ecx, dword ptr [edx + 0x48]
        mov    esi, dword ptr [ebp - 0x10]
        xor    edx, edx
        mov    dl, byte ptr [ecx + esi + 2]
        xor    eax, eax
        mov    al, byte ptr [ecx + esi]
        xor    ebx, ebx
        mov    bl, byte ptr [ecx + esi + 1]
        mov    dword ptr [ebp - 0xb0], ecx
        mov    edi, edx
        mov    edx, dword ptr [ebp - 0x2c]
        mov    edx, dword ptr [edx + eax*4]
        mov    dword ptr [ebp + 0x18], eax
        mov    eax, dword ptr [ebp - 0x2c]
        mov    dword ptr [ebp - 0x70], edi
        mov    edi, dword ptr [eax + edi*4]
        mov    eax, dword ptr [eax + ebx*4]
        mov    dword ptr [ebp - 0x34], ebx
        mov    ebx, eax
        and    ebx, edi
        mov    dword ptr [g_007b98c4], edx
        or    eax, edi
        mov    edi, dword ptr [g_007b98c4]
        and    edx, ebx
        or    edi, eax
        test    edx, edx
        mov    dword ptr [g_007b98c8], edx
        mov    dword ptr [g_007b98c4], edi
        je    L_16ae
        mov    ecx, dword ptr [ebp + 8]
        mov    byte ptr [ecx], 0
        jmp    L_2ff9
L_16a5:
        mov    byte ptr [ebp + 0x17], 0
        jmp    L_15f9
L_16ae:
        test    edi, edi
        jne    L_16e1
        mov    eax, dword ptr [ebp - 0x90]
        mov    edx, dword ptr [g_007da600]
        mov    ecx, dword ptr [ebp + 0x18]
        inc    eax
        mov    dword ptr [ebp - 0x90], eax
        mov    eax, dword ptr [edx]
        mov    edx, dword ptr [ebp - 0x34]
        mov    byte ptr [eax + ecx], 1
        mov    ecx, dword ptr [ebp - 0x70]
        mov    byte ptr [eax + edx], 1
        mov    byte ptr [eax + ecx], 1
        jmp    L_2ff9
L_16e1:
        cmp    dword ptr [edi*4 + 0x7b2478], 1
        mov    dword ptr [ebp - 0x18], 0
        jne    L_2207
        lea    edx, [esi + 3]
        cmp    esi, edx
        mov    ecx, esi
        jge    L_21f3
L_1703:
        mov    eax, dword ptr [ebp - 8]
        mov    eax, dword ptr [eax + 0x48]
        xor    ebx, ebx
        mov    bl, byte ptr [eax + ecx]
        inc    ecx
        cmp    ecx, edx
        mov    dword ptr [ebp - 0x28], ecx
        mov    edi, ebx
        jge    L_171a
        mov    esi, ecx
L_171a:
        xor    edx, edx
        mov    dl, byte ptr [eax + esi]
        mov    esi, dword ptr [ebp - 0x18]
        mov    eax, dword ptr [ebp - 0x98]
        and    esi, 0xffff
        add    esi, eax
        mov    eax, dword ptr [ebp - 0x2c]
        mov    ecx, dword ptr [eax + edi*4]
        test    ecx, ecx
        mov    dword ptr [ebp + 0x18], edx
        mov    dword ptr [ebp - 0x30], esi
        mov    dword ptr [g_007b98c0], ecx
        jne    L_1828
        mov    ecx, dword ptr [g_007da68c]
        mov    ebx, dword ptr [ecx]
        mov    eax, edi
        shl    eax, 4
        add    eax, ebx
        mov    ebx, dword ptr [g_007da684]
        mov    ecx, esi
        shl    ecx, 4
        add    ecx, dword ptr [ebx]
        mov    ebx, dword ptr [eax]
        mov    dword ptr [ecx], ebx
        mov    ebx, dword ptr [eax + 4]
        mov    dword ptr [ecx + 4], ebx
        mov    ebx, dword ptr [eax + 8]
        mov    eax, dword ptr [eax + 0xc]
        mov    dword ptr [ecx + 0xc], eax
        mov    eax, dword ptr [ebp - 8]
        mov    dword ptr [ecx + 8], ebx
        mov    ecx, dword ptr [eax + 0x6c]
        mov    ecx, dword ptr [ecx]
        mov    ecx, dword ptr [ecx + edi*4]
        mov    ebx, dword ptr [g_007da608]
        mov    ebx, dword ptr [ebx]
        mov    eax, dword ptr [eax + 0x1c]
        mov    dword ptr [ebx + esi*4], ecx
        mov    ebx, dword ptr [eax + edi*8]
        mov    ecx, dword ptr [g_007da680]
        mov    ecx, dword ptr [ecx]
        mov    eax, dword ptr [eax + edi*8 + 4]
        mov    dword ptr [ecx + esi*8], ebx
        mov    dword ptr [ecx + esi*8 + 4], eax
        mov    ecx, dword ptr [ebp - 8]
        xor    eax, eax
        mov    al, byte ptr [ecx + 0x13]
        test    al, al
        mov    byte ptr [ebp + 0xb], 1
        jbe    L_17fd
        mov    ecx, eax
        and    ecx, 0xff
        mov    dword ptr [ebp - 0x14], 1
        mov    dword ptr [ebp - 0xc], ecx
        mov    eax, 0x7da660
L_17d2:
        mov    ebx, dword ptr [ebp - 0x14]
        test    ecx, ebx
        je    L_17eb
        mov    ecx, dword ptr [eax - 4]
        mov    ecx, dword ptr [ecx]
        mov    ebx, dword ptr [eax]
        mov    cl, byte ptr [ecx + edi]
        mov    ebx, dword ptr [ebx]
        mov    byte ptr [ebx + esi], cl
        mov    ecx, dword ptr [ebp - 0xc]
L_17eb:
        mov    ebx, dword ptr [ebp - 0x14]
        add    eax, 8
        shl    ebx, 1
        cmp    eax, 0x7da670
        mov    dword ptr [ebp - 0x14], ebx
        jl    L_17d2
L_17fd:
        mov    eax, dword ptr [ebp - 0x18]
        mov    ecx, dword ptr [ebp - 0x2c]
        inc    eax
        mov    dword ptr [ebp - 0x18], eax
        lea    eax, [edx*4]
        mov    dword ptr [ebp - 0x14], eax
        mov    eax, dword ptr [eax + ecx]
        inc    esi
        test    eax, eax
        mov    dword ptr [ebp - 0x30], esi
        je    L_21e2
        mov    ecx, dword ptr [g_007b98c0]
        jmp    L_1841
L_1828:
        lea    ebx, [edx*4]
        mov    eax, dword ptr [ebx + eax]
        test    eax, eax
        mov    byte ptr [ebp + 0xb], 0
        mov    dword ptr [ebp - 0x14], ebx
        jne    L_21e2
L_1841:
        or    ecx, eax
        mov    dword ptr [ebp - 0x38], 1
        mov    dword ptr [g_007b98c0], ecx
        xor    ebx, ebx
L_1852:
        mov    eax, dword ptr [ebp - 0x38]
        test    eax, ecx
        jne    L_186a
        shl    eax, 1
        inc    ebx
        cmp    bx, 6
        mov    dword ptr [ebp - 0x38], eax
        jb    L_1852
        jmp    L_19cb
L_186a:
        cmp    byte ptr [ebp + 0xb], 1
        jne    L_191a
        mov    edx, dword ptr [g_007da68c]
        mov    eax, dword ptr [ebp + 0x18]
        mov    edx, dword ptr [edx]
        mov    ecx, edi
        shl    eax, 4
        shl    ecx, 4
        and    ebx, 0xffff
        add    eax, edx
        add    ecx, edx
        cmp    ebx, 5
        ja    L_18fc
        jmp    dword ptr [ebx*4 + 0x453618]
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx + 4]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 4]
L_18a9:
        fld    st(1)
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_19b5
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        mov    dword ptr [ebp - 4], 0
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        jmp    L_19c2
        fld    dword ptr [ecx + 4]
        fld    dword ptr [eax + 4]
        jmp    L_18a9
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax]
        jmp    L_18a9
        fld    dword ptr [ecx]
        fld    dword ptr [eax]
        jmp    L_18a9
        fld    dword ptr [ecx + 8]
        fld    dword ptr [eax + 8]
        jmp    L_18a9
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx + 8]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 8]
        jmp    L_18a9
L_18fc:
        push    0x76df04
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_1961
        int 3    
        mov    dword ptr [ebp - 4], 0
        jmp    L_19c2
L_191a:
        mov    eax, dword ptr [g_007da68c]
        mov    edx, dword ptr [eax]
        mov    ecx, dword ptr [ebp + 0x18]
        mov    eax, edi
        shl    eax, 4
        shl    ecx, 4
        and    ebx, 0xffff
        add    eax, edx
        add    ecx, edx
        cmp    ebx, 5
        ja    L_199a
        jmp    dword ptr [ebx*4 + 0x453630]
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx + 4]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 4]
L_194e:
        fld    st(1)
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_19b5
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_1961:
        mov    dword ptr [ebp - 4], 0
        jmp    L_19c2
        fld    dword ptr [ecx + 4]
        fld    dword ptr [eax + 4]
        jmp    L_194e
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax]
        jmp    L_194e
        fld    dword ptr [ecx]
        fld    dword ptr [eax]
        jmp    L_194e
        fld    dword ptr [ecx + 8]
        fld    dword ptr [eax + 8]
        jmp    L_194e
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx + 8]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 8]
        jmp    L_194e
L_199a:
        push    0x76df04
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_1961
        int 3    
        mov    dword ptr [ebp - 4], 0
        jmp    L_19c2
L_19b5:
        fld    st(1)
        fsub st(0), st(1)
        fdivr st(0), st(2)
        fstp    dword ptr [ebp - 4]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_19c2:
        mov    edx, dword ptr [ebp + 0x18]
        mov    dword ptr [ebp - 0x94], ebx
L_19cb:
        cmp    byte ptr [ebp + 0xb], 1
        jne    L_1de4
        mov    ecx, dword ptr [g_007da68c]
        mov    ebx, dword ptr [ecx]
        mov    ecx, edx
        mov    edx, dword ptr [g_007da684]
        mov    edx, dword ptr [edx]
        shl    ecx, 4
        fld    dword ptr [ecx + ebx]
        add    ecx, ebx
        mov    eax, edi
        shl    eax, 4
        fsub    dword ptr [eax + ebx]
        add    eax, ebx
        shl    esi, 4
        add    edx, esi
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax]
        fstp    dword ptr [edx]
        fld    dword ptr [ecx + 4]
        fsub    dword ptr [eax + 4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax + 4]
        fstp    dword ptr [edx + 4]
        fld    dword ptr [ecx + 8]
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax + 8]
        fstp    dword ptr [edx + 8]
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [eax + 0xc]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax + 0xc]
        mov    eax, dword ptr [ebp - 0x94]
        mov    ecx, dword ptr [eax*8 + 0x7b2408]
        test    ecx, ecx
        fstp    dword ptr [edx + 0xc]
        je    L_1a4e
        fld    dword ptr [edx + 0xc]
        fsub    dword ptr [g_007b220c]
        jmp    L_1a54
L_1a4e:
        fld    dword ptr [g_007b220c]
L_1a54:
        mov    ecx, dword ptr [ebp - 0x94]
        mov    eax, dword ptr [ecx*8 + 0x7b2404]
        fstp    dword ptr [edx + eax*4]
        mov    ecx, dword ptr [ebp - 8]
        mov    edx, dword ptr [ecx + 0x6c]
        mov    ecx, dword ptr [edx]
        mov    eax, dword ptr [ebp - 0x14]
        mov    eax, dword ptr [eax + ecx]
        mov    ecx, dword ptr [ecx + edi*4]
        mov    edx, ecx
        shr    ecx, 8
        and    edx, 0xff
        mov    esi, ecx
        mov    dword ptr [ebp - 0x1cc], edx
        xor    edx, edx
        mov    dword ptr [ebp - 0x1c8], edx
        fild    qword ptr [ebp - 0x1cc]
        shr    ecx, 8
        and    esi, 0xff
        mov    dword ptr [ebp - 0x164], esi
        fmul    dword ptr [g_0076ea2c]
        mov    esi, ecx
        mov    dword ptr [ebp - 0x160], edx
        shr    ecx, 8
        fstp    dword ptr [ebp - 0xfc]
        and    esi, 0xff
        fild    qword ptr [ebp - 0x164]
        and    ecx, 0xff
        mov    dword ptr [ebp - 0x170], edx
        mov    dword ptr [ebp - 0x174], esi
        fmul    dword ptr [g_0076ea2c]
        mov    dword ptr [ebp - 0x184], ecx
        mov    dword ptr [ebp - 0x180], edx
        mov    ecx, eax
        fstp    dword ptr [ebp - 0x100]
        and    ecx, 0xff
        fild    qword ptr [ebp - 0x174]
        mov    dword ptr [ebp - 0x194], ecx
        mov    dword ptr [ebp - 0x190], edx
        shr    eax, 8
        fmul    dword ptr [g_0076ea2c]
        mov    ecx, eax
        and    ecx, 0xff
        mov    dword ptr [ebp - 0x1a4], ecx
        fstp    dword ptr [ebp - 0x104]
        mov    dword ptr [ebp - 0x1a0], edx
        fild    qword ptr [ebp - 0x184]
        shr    eax, 8
        mov    ecx, eax
        and    ecx, 0xff
        fmul    dword ptr [g_0076ea2c]
        mov    dword ptr [ebp - 0x1b4], ecx
        mov    dword ptr [ebp - 0x1b0], edx
        shr    eax, 8
        fstp    dword ptr [ebp - 0xf8]
        and    eax, 0xff
        fild    qword ptr [ebp - 0x194]
        mov    dword ptr [ebp - 0x1c4], eax
        mov    dword ptr [ebp - 0x1c0], edx
        mov    edx, dword ptr [ebp - 4]
        fmul    dword ptr [g_0076ea2c]
        push    edx
        lea    eax, [ebp - 0x134]
        lea    ecx, [ebp - 0x104]
        fstp    dword ptr [ebp - 0x12c]
        push    eax
        fild    qword ptr [ebp - 0x1a4]
        push    ecx
        mov    dword ptr [ebp - 0xdc], 0xbf800000
        mov    dword ptr [ebp - 0xe0], 0xbf800000
        fmul    dword ptr [g_0076ea2c]
        mov    dword ptr [ebp - 0xe4], 0xbf800000
        mov    dword ptr [ebp - 0xd8], 0xbf800000
        lea    ecx, [ebp - 0xe4]
        fstp    dword ptr [ebp - 0x130]
        fild    qword ptr [ebp - 0x1b4]
        fmul    dword ptr [g_0076ea2c]
        fstp    dword ptr [ebp - 0x134]
        fild    qword ptr [ebp - 0x1c4]
        fmul    dword ptr [g_0076ea2c]
        fstp    dword ptr [ebp - 0x128]
        call    FUN_004286e0
        lea    edx, [ebp - 0xe4]
        mov    dword ptr [ebp + 8], edx
        fld    dword ptr [g_0076ea28]
        mov    esi, dword ptr [ebp + 8]
        fld    dword ptr [esi + 0xc]
        mov    ecx, dword ptr [esi + 0xc]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0xc0]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xc0]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    dword ptr [ebp - 0xd4], ebx
        fld    dword ptr [esi]
        mov    ecx, dword ptr [esi]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0xc0]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xc0]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0xd4]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0xd4], ecx
        fld    dword ptr [esi + 4]
        mov    ecx, dword ptr [esi + 4]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0xc0]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xc0]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0xd4]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0xd4], ecx
        mov    ecx, dword ptr [esi + 8]
        fadd    dword ptr [esi + 8]
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0xc0]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xc0]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0xd4]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0xd4], ecx
        mov    eax, dword ptr [g_007da608]
        mov    edx, dword ptr [eax]
        mov    eax, dword ptr [ebp - 0xd4]
        mov    ecx, dword ptr [ebp - 0x30]
        mov    esi, dword ptr [ebp - 8]
        mov    ebx, dword ptr [ebp + 0x18]
        mov    dword ptr [edx + ecx*4], eax
        mov    eax, dword ptr [esi + 0x1c]
        fld    dword ptr [eax + ebx*8]
        mov    edx, dword ptr [g_007da680]
        fsub    dword ptr [eax + edi*8]
        mov    edx, dword ptr [edx]
        lea    ecx, [edx + ecx*8]
        lea    edx, [eax + edi*8 + 4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax + edi*8]
        fstp    dword ptr [ecx]
        fld    dword ptr [eax + ebx*8 + 4]
        xor    eax, eax
        fsub    dword ptr [edx]
        mov    al, byte ptr [esi + 0x13]
        test    al, al
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edx]
        fstp    dword ptr [ecx + 4]
        jbe    L_21df
        mov    ecx, eax
        and    ecx, 0xff
        mov    dword ptr [ebp + 8], 1
        mov    dword ptr [ebp - 0xc], ecx
        mov    eax, 0x7da65c
        mov    edx, ebx
L_1d7d:
        mov    esi, dword ptr [ebp + 8]
        test    ecx, esi
        je    L_1dcd
        mov    ecx, dword ptr [eax]
        mov    ecx, dword ptr [ecx]
        mov    bl, byte ptr [edi + ecx]
        mov    byte ptr [ebp - 0xc4], bl
        mov    esi, dword ptr [ebp - 0xc4]
        xor    ebx, ebx
        mov    bl, byte ptr [edx + ecx]
        mov    ecx, dword ptr [eax + 4]
        mov    ecx, dword ptr [ecx]
        and    esi, 0xff
        mov    dword ptr [ebp - 0x34], esi
        sub    ebx, esi
        mov    esi, dword ptr [ebp - 0x30]
        mov    dword ptr [ebp + 0x18], ebx
        fild    dword ptr [ebp + 0x18]
        fmul    dword ptr [ebp - 4]
        fiadd    dword ptr [ebp - 0x34]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [ebp + 0x18]
        mov    bl, byte ptr [ebp + 0x18]
        mov    byte ptr [ecx + esi], bl
        mov    ecx, dword ptr [ebp - 0xc]
L_1dcd:
        mov    ebx, dword ptr [ebp + 8]
        add    eax, 8
        shl    ebx, 1
        cmp    eax, 0x7da66c
        mov    dword ptr [ebp + 8], ebx
        jl    L_1d7d
        jmp    L_21df
L_1de4:
        mov    eax, dword ptr [g_007da68c]
        mov    ebx, dword ptr [eax]
        mov    eax, edx
        mov    edx, dword ptr [g_007da684]
        mov    edx, dword ptr [edx]
        mov    ecx, edi
        shl    ecx, 4
        fld    dword ptr [ecx + ebx]
        add    ecx, ebx
        shl    eax, 4
        fsub    dword ptr [eax + ebx]
        add    eax, ebx
        shl    esi, 4
        add    edx, esi
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax]
        fstp    dword ptr [edx]
        fld    dword ptr [ecx + 4]
        fsub    dword ptr [eax + 4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax + 4]
        fstp    dword ptr [edx + 4]
        fld    dword ptr [ecx + 8]
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax + 8]
        fstp    dword ptr [edx + 8]
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [eax + 0xc]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax + 0xc]
        mov    eax, dword ptr [ebp - 0x94]
        mov    ecx, dword ptr [eax*8 + 0x7b2408]
        test    ecx, ecx
        fstp    dword ptr [edx + 0xc]
        je    L_1e5c
        fld    dword ptr [edx + 0xc]
        fsub    dword ptr [g_007b220c]
        jmp    L_1e62
L_1e5c:
        fld    dword ptr [g_007b220c]
L_1e62:
        mov    ecx, dword ptr [ebp - 0x94]
        mov    eax, dword ptr [ecx*8 + 0x7b2404]
        fstp    dword ptr [edx + eax*4]
        mov    ecx, dword ptr [ebp - 8]
        mov    edx, dword ptr [ecx + 0x6c]
        mov    ecx, dword ptr [edx]
        mov    eax, dword ptr [ecx + edi*4]
        mov    edx, dword ptr [ebp - 0x14]
        mov    ecx, dword ptr [edx + ecx]
        mov    edx, ecx
        shr    ecx, 8
        and    edx, 0xff
        mov    esi, ecx
        mov    dword ptr [ebp - 0x1d4], edx
        xor    edx, edx
        mov    dword ptr [ebp - 0x1d0], edx
        fild    qword ptr [ebp - 0x1d4]
        shr    ecx, 8
        and    esi, 0xff
        mov    dword ptr [ebp - 0x14c], esi
        fmul    dword ptr [g_0076ea2c]
        mov    esi, ecx
        mov    dword ptr [ebp - 0x148], edx
        shr    ecx, 8
        fstp    dword ptr [ebp - 0x11c]
        and    esi, 0xff
        fild    qword ptr [ebp - 0x14c]
        and    ecx, 0xff
        mov    dword ptr [ebp - 0x138], edx
        mov    dword ptr [ebp - 0x13c], esi
        fmul    dword ptr [g_0076ea2c]
        mov    dword ptr [ebp - 0x15c], ecx
        mov    dword ptr [ebp - 0x158], edx
        mov    ecx, eax
        fstp    dword ptr [ebp - 0x120]
        and    ecx, 0xff
        fild    qword ptr [ebp - 0x13c]
        mov    dword ptr [ebp - 0x19c], ecx
        mov    dword ptr [ebp - 0x198], edx
        shr    eax, 8
        fmul    dword ptr [g_0076ea2c]
        mov    ecx, eax
        and    ecx, 0xff
        mov    dword ptr [ebp - 0x16c], ecx
        fstp    dword ptr [ebp - 0x124]
        mov    dword ptr [ebp - 0x168], edx
        fild    qword ptr [ebp - 0x15c]
        shr    eax, 8
        mov    ecx, eax
        and    ecx, 0xff
        fmul    dword ptr [g_0076ea2c]
        mov    dword ptr [ebp - 0x1bc], ecx
        mov    dword ptr [ebp - 0x1b8], edx
        shr    eax, 8
        fstp    dword ptr [ebp - 0x118]
        and    eax, 0xff
        fild    qword ptr [ebp - 0x19c]
        mov    dword ptr [ebp - 0x17c], eax
        mov    dword ptr [ebp - 0x178], edx
        mov    edx, dword ptr [ebp - 4]
        fmul    dword ptr [g_0076ea2c]
        push    edx
        lea    eax, [ebp - 0x114]
        lea    ecx, [ebp - 0x124]
        fstp    dword ptr [ebp - 0x10c]
        push    eax
        fild    qword ptr [ebp - 0x16c]
        push    ecx
        mov    dword ptr [ebp - 0xec], 0xbf800000
        mov    dword ptr [ebp - 0xf0], 0xbf800000
        fmul    dword ptr [g_0076ea2c]
        mov    dword ptr [ebp - 0xf4], 0xbf800000
        mov    dword ptr [ebp - 0xe8], 0xbf800000
        lea    ecx, [ebp - 0xf4]
        fstp    dword ptr [ebp - 0x110]
        fild    qword ptr [ebp - 0x1bc]
        fmul    dword ptr [g_0076ea2c]
        fstp    dword ptr [ebp - 0x114]
        fild    qword ptr [ebp - 0x17c]
        fmul    dword ptr [g_0076ea2c]
        fstp    dword ptr [ebp - 0x108]
        call    FUN_004286e0
        lea    edx, [ebp - 0xf4]
        mov    dword ptr [ebp + 8], edx
        fld    dword ptr [g_0076ea28]
        mov    esi, dword ptr [ebp + 8]
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
        mov    dword ptr [ebp - 0xc8], ebx
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
        mov    ecx, dword ptr [ebp - 0xc8]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0xc8], ecx
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
        mov    ecx, dword ptr [ebp - 0xc8]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0xc8], ecx
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
        mov    ecx, dword ptr [ebp - 0xc8]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0xc8], ecx
        mov    eax, dword ptr [g_007da608]
        mov    edx, dword ptr [eax]
        mov    eax, dword ptr [ebp - 0xc8]
        mov    ecx, dword ptr [ebp - 0x30]
        mov    esi, dword ptr [ebp - 8]
        mov    dword ptr [edx + ecx*4], eax
        mov    eax, dword ptr [esi + 0x1c]
        mov    edx, dword ptr [g_007da680]
        fld    dword ptr [eax + edi*8]
        mov    edx, dword ptr [edx]
        lea    ecx, [edx + ecx*8]
        mov    edx, dword ptr [ebp + 0x18]
        fsub    dword ptr [eax + edx*8]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax + edx*8]
        lea    edx, [eax + edx*8 + 4]
        fstp    dword ptr [ecx]
        fld    dword ptr [eax + edi*8 + 4]
        xor    eax, eax
        fsub    dword ptr [edx]
        mov    al, byte ptr [esi + 0x13]
        test    al, al
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edx]
        fstp    dword ptr [ecx + 4]
        jbe    L_21df
        mov    ecx, eax
        and    ecx, 0xff
        mov    edx, 1
        mov    dword ptr [ebp - 0xc], ecx
        mov    eax, 0x7da65c
L_2183:
        test    ecx, edx
        je    L_21d3
        mov    ecx, dword ptr [eax]
        mov    ecx, dword ptr [ecx]
        mov    esi, dword ptr [ebp + 0x18]
        mov    bl, byte ptr [ecx + esi]
        mov    byte ptr [ebp - 0xb8], bl
        mov    esi, dword ptr [ebp - 0xb8]
        xor    ebx, ebx
        mov    bl, byte ptr [ecx + edi]
        mov    ecx, dword ptr [eax + 4]
        mov    ecx, dword ptr [ecx]
        and    esi, 0xff
        mov    dword ptr [ebp - 0x34], esi
        sub    ebx, esi
        mov    esi, dword ptr [ebp - 0x30]
        mov    dword ptr [ebp + 8], ebx
        fild    dword ptr [ebp + 8]
        fmul    dword ptr [ebp - 4]
        fiadd    dword ptr [ebp - 0x34]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [ebp + 8]
        mov    bl, byte ptr [ebp + 8]
        mov    byte ptr [ecx + esi], bl
        mov    ecx, dword ptr [ebp - 0xc]
L_21d3:
        add    eax, 8
        shl    edx, 1
        cmp    eax, 0x7da66c
        jl    L_2183
L_21df:
        inc    dword ptr [ebp - 0x18]
L_21e2:
        mov    esi, dword ptr [ebp - 0x10]
        mov    ecx, dword ptr [ebp - 0x28]
        lea    edx, [esi + 3]
        cmp    ecx, edx
        jl    L_1703
L_21f3:
        mov    edx, dword ptr [g_007da670]
        mov    eax, dword ptr [edx]
        mov    ecx, dword ptr [ebp - 0x68]
        mov    dx, word ptr [ebp - 0x18]
        jmp    L_2fbd
L_2207:
        mov    eax, dword ptr [g_007da66c]
        mov    edx, dword ptr [eax + 0x30]
        mov    dword ptr [ebp - 0x58], edx
        mov    edx, dword ptr [eax + 0x38]
        mov    dword ptr [ebp - 0x54], edx
        mov    edx, dword ptr [eax + 0x40]
        mov    dword ptr [ebp - 0x50], edx
        mov    edx, dword ptr [eax + 0x48]
        mov    dword ptr [ebp - 0x4c], edx
        mov    edx, dword ptr [ebp - 8]
        mov    dl, byte ptr [edx + 0x13]
        test    dl, dl
        mov    byte ptr [ebp - 0xcc], dl
        jbe    L_227a
        mov    edi, edx
        and    edi, 0xff
        lea    ebx, [ebp - 0x48]
        mov    dword ptr [ebp + 0x18], 1
        mov    dword ptr [ebp - 0xc], edi
        mov    dword ptr [ebp + 8], ebx
        add    eax, 0x50
        mov    dword ptr [ebp - 0x28], 2
L_2256:
        mov    ebx, dword ptr [ebp + 0x18]
        test    edi, ebx
        je    L_2267
        mov    edi, dword ptr [eax]
        mov    ebx, dword ptr [ebp + 8]
        mov    dword ptr [ebx], edi
        mov    edi, dword ptr [ebp - 0xc]
L_2267:
        add    dword ptr [ebp + 8], 4
        shl    dword ptr [ebp + 0x18], 1
        mov    ebx, dword ptr [ebp - 0x28]
        add    eax, 8
        dec    ebx
        mov    dword ptr [ebp - 0x28], ebx
        jne    L_2256
L_227a:
        xor    edi, edi
        lea    ebx, [esi + 3]
        cmp    esi, ebx
        mov    eax, esi
        mov    byte ptr [ebp + 0x1b], 0
        mov    byte ptr [ebp + 0xb], 0xff
        mov    dword ptr [ebp - 0x18], eax
        mov    dword ptr [ebp - 0x28], edi
        jge    L_244d
        mov    edx, dword ptr [g_007da68c]
        mov    edx, dword ptr [edx]
        mov    ebx, dword ptr [ebp - 0x58]
        mov    dword ptr [ebp - 0x34], edx
        mov    edx, dword ptr [ebp - 8]
        mov    esi, dword ptr [edx + 0x6c]
        mov    edx, dword ptr [edx + 0x1c]
        mov    esi, dword ptr [esi]
        mov    dword ptr [ebp - 0x64], edx
        mov    edx, dword ptr [g_007da688]
        mov    edx, dword ptr [edx]
        mov    dword ptr [ebp - 0x70], esi
        mov    dword ptr [ebp - 0x3c], edx
        jmp    L_22c9
L_22c3:
        mov    ecx, dword ptr [ebp - 0xb0]
L_22c9:
        xor    edx, edx
        mov    dl, byte ptr [ecx + eax]
        and    edi, 0xffff
        mov    eax, edi
        shl    eax, 4
        mov    dword ptr [ebp - 0x1a8], 0
        mov    dword ptr [ebp - 0x188], 0
        mov    esi, edx
        mov    edx, dword ptr [ebp - 0x34]
        mov    ecx, esi
        shl    ecx, 4
        add    ecx, edx
        mov    edx, dword ptr [ecx]
        mov    dword ptr [eax + ebx], edx
        mov    edx, dword ptr [ecx + 4]
        mov    dword ptr [eax + ebx + 4], edx
        mov    edx, dword ptr [ecx + 8]
        mov    ecx, dword ptr [ecx + 0xc]
        mov    dword ptr [eax + ebx + 8], edx
        mov    edx, dword ptr [ebp - 0x70]
        mov    dword ptr [eax + ebx + 0xc], ecx
        mov    ecx, dword ptr [edx + esi*4]
        mov    edx, ecx
        and    edx, 0xff
        mov    dword ptr [ebp - 0x1ac], edx
        fild    qword ptr [ebp - 0x1ac]
        mov    edx, dword ptr [ebp - 0x54]
        shr    ecx, 8
        mov    ebx, ecx
        fmul    dword ptr [g_0076ea2c]
        and    ebx, 0xff
        shr    ecx, 8
        mov    dword ptr [ebp - 0x18c], ebx
        fstp    dword ptr [eax + edx + 8]
        mov    ebx, ecx
        fild    qword ptr [ebp - 0x18c]
        and    ebx, 0xff
        mov    dword ptr [ebp - 0x144], ebx
        xor    ebx, ebx
        fmul    dword ptr [g_0076ea2c]
        mov    dword ptr [ebp - 0x140], ebx
        shr    ecx, 8
        and    ecx, 0xff
        fstp    dword ptr [eax + edx + 4]
        mov    dword ptr [ebp - 0x154], ecx
        fild    qword ptr [ebp - 0x144]
        mov    ecx, dword ptr [ebp - 0x50]
        mov    dword ptr [ebp - 0x150], ebx
        fmul    dword ptr [g_0076ea2c]
        fstp    dword ptr [eax + edx]
        fild    qword ptr [ebp - 0x154]
        fmul    dword ptr [g_0076ea2c]
        fstp    dword ptr [eax + edx + 0xc]
        mov    eax, dword ptr [ebp - 0x64]
        mov    edx, dword ptr [eax + esi*8]
        mov    eax, dword ptr [eax + esi*8 + 4]
        mov    dword ptr [ecx + edi*8], edx
        mov    dword ptr [ecx + edi*8 + 4], eax
        mov    ecx, dword ptr [ebp - 0x3c]
        mov    edx, dword ptr [ecx + esi*4]
        mov    eax, dword ptr [ebp - 0x4c]
        mov    dword ptr [eax + edi*4], edx
        mov    edx, dword ptr [ebp - 0xcc]
        test    dl, dl
        jbe    L_242e
        and    edx, 0xff
        mov    dword ptr [ebp - 0x14], 1
        mov    dword ptr [ebp - 0xc], edx
        lea    ebx, [ebp - 0x48]
        mov    ecx, 0x7da65c
        jmp    L_23ef
L_23ec:
        mov    edx, dword ptr [ebp - 0xc]
L_23ef:
        mov    eax, dword ptr [ebp - 0x14]
        test    edx, eax
        je    L_2412
        mov    edx, dword ptr [ecx]
        mov    eax, dword ptr [edx]
        mov    al, byte ptr [eax + esi]
        mov    edx, dword ptr [ebx]
        mov    byte ptr [edi + edx], al
        cmp    al, byte ptr [ebp + 0xb]
        jae    L_240a
        mov    byte ptr [ebp + 0xb], al
L_240a:
        cmp    al, byte ptr [ebp + 0x1b]
        jbe    L_2412
        mov    byte ptr [ebp + 0x1b], al
L_2412:
        mov    edx, dword ptr [ebp - 0x14]
        add    ecx, 8
        shl    edx, 1
        add    ebx, 4
        cmp    ecx, 0x7da66c
        mov    dword ptr [ebp - 0x14], edx
        jl    L_23ec
        mov    edx, dword ptr [ebp - 0xcc]
L_242e:
        mov    eax, dword ptr [ebp - 0x18]
        mov    edi, dword ptr [ebp - 0x28]
        mov    ecx, dword ptr [ebp - 0x10]
        mov    ebx, dword ptr [ebp - 0x58]
        inc    eax
        inc    edi
        add    ecx, 3
        cmp    eax, ecx
        mov    dword ptr [ebp - 0x18], eax
        mov    dword ptr [ebp - 0x28], edi
        jl    L_22c3
L_244d:
        mov    eax, dword ptr [g_007da66c]
        mov    esi, dword ptr [eax + 8]
        mov    dword ptr [ebp - 0x88], esi
        mov    esi, dword ptr [eax + 0x10]
        mov    word ptr [ebp - 0x40], di
        mov    edi, dword ptr [eax]
        xor    ecx, ecx
        test    dl, dl
        mov    dword ptr [ebp - 0x84], esi
        mov    esi, dword ptr [eax + 0x18]
        mov    dword ptr [ebp - 0x60], ecx
        mov    dword ptr [ebp - 0x8c], edi
        mov    dword ptr [ebp - 0x80], esi
        jbe    L_24be
        and    edx, 0xff
        mov    ebx, 1
        mov    dword ptr [ebp - 0xc], edx
        lea    esi, [ebp - 0x7c]
        add    eax, 0x20
        mov    dword ptr [ebp + 8], 2
        jmp    L_249f
L_249c:
        mov    edx, dword ptr [ebp - 0xc]
L_249f:
        test    edx, ebx
        je    L_24ad
        mov    edx, dword ptr [eax]
        mov    dword ptr [esi], edx
        mov    edi, dword ptr [ebp - 0x8c]
L_24ad:
        mov    edx, dword ptr [ebp + 8]
        add    eax, 8
        add    esi, 4
        shl    ebx, 1
        dec    edx
        mov    dword ptr [ebp + 8], edx
        jne    L_249c
L_24be:
        mov    ebx, dword ptr [ebp - 0x40]
        mov    word ptr [ebp - 0x74], 0
        mov    dword ptr [ebp - 0x38], 1
        mov    dword ptr [ebp - 0x34], 4
L_24d5:
        mov    dword ptr [ebp - 0x5c], 0
        mov    dword ptr [ebp - 0x30], 0x7b2404
        mov    dword ptr [ebp - 0x70], 6
L_24ea:
        mov    eax, dword ptr [ebp - 0x38]
        test    dword ptr [g_007b98c4], eax
        je    L_2cf2
        xor    eax, eax
        mov    edx, ebx
        and    edx, 0xffff
        mov    dword ptr [ebp - 0x18], eax
        mov    dword ptr [ebp - 0x14], edx
        jle    L_2bf1
        mov    ecx, dword ptr [ebp - 0x50]
        mov    edx, dword ptr [ebp - 0x4c]
        mov    dword ptr [ebp - 0x6c], ecx
        mov    ecx, dword ptr [ebp - 0x54]
        mov    dword ptr [ebp - 0xac], edx
        mov    edx, dword ptr [ebp - 0x58]
        lea    ebx, [ecx + 0xc]
        sub    ecx, edx
        lea    esi, [edx + 8]
        mov    edx, dword ptr [ebp - 0x14]
        mov    dword ptr [ebp - 0xb0], ebx
        mov    dword ptr [ebp - 0x3c], ecx
L_2538:
        inc    eax
        xor    ecx, ecx
        cmp    eax, edx
        mov    edx, dword ptr [ebp - 0x38]
        setge    cl
        mov    dword ptr [ebp - 0x28], eax
        dec    ecx
        and    ecx, eax
        mov    eax, dword ptr [ebp - 0xac]
        mov    eax, dword ptr [eax]
        test    edx, eax
        mov    dword ptr [ebp + 0x18], ecx
        mov    dword ptr [g_007b98c0], eax
        jne    L_266b
        mov    ecx, dword ptr [ebp - 0x74]
        mov    edx, dword ptr [esi - 8]
        and    ecx, 0xffff
        mov    eax, ecx
        shl    eax, 4
        mov    dword ptr [eax + edi], edx
        mov    edx, dword ptr [esi - 4]
        mov    dword ptr [eax + edi + 4], edx
        mov    edx, dword ptr [esi]
        mov    dword ptr [eax + edi + 8], edx
        mov    edx, dword ptr [esi + 4]
        mov    dword ptr [eax + edi + 0xc], edx
        mov    edx, dword ptr [ebp - 0xac]
        mov    edx, dword ptr [edx]
        mov    edi, dword ptr [ebp - 0x80]
        mov    dword ptr [edi + ecx*4], edx
        mov    edx, dword ptr [ebp - 0x88]
        mov    edi, dword ptr [ebx - 0xc]
        mov    dword ptr [eax + edx], edi
        mov    edi, dword ptr [ebx - 8]
        mov    dword ptr [eax + edx + 4], edi
        mov    edi, dword ptr [ebp - 0x3c]
        mov    edi, dword ptr [edi + esi]
        mov    dword ptr [eax + edx + 8], edi
        mov    edi, dword ptr [ebx]
        mov    dword ptr [eax + edx + 0xc], edi
        mov    edx, dword ptr [ebp - 0x6c]
        mov    edi, dword ptr [edx]
        mov    eax, dword ptr [ebp - 0x84]
        mov    dword ptr [eax + ecx*8], edi
        mov    edx, dword ptr [edx + 4]
        mov    dword ptr [eax + ecx*8 + 4], edx
        xor    eax, eax
        mov    eax, dword ptr [ebp - 8]
        mov    al, byte ptr [eax + 0x13]
        test    al, al
        jbe    L_2623
        mov    edx, eax
        and    edx, 0xff
        xor    eax, eax
        mov    dword ptr [ebp + 8], 1
        mov    dword ptr [ebp - 0xc], edx
        mov    dword ptr [ebp - 0x24], eax
L_25f2:
        mov    edi, dword ptr [ebp + 8]
        test    edx, edi
        je    L_2610
        mov    edx, dword ptr [ebp + eax - 0x48]
        mov    edi, dword ptr [ebp - 0x18]
        mov    eax, dword ptr [ebp + eax - 0x7c]
        mov    dl, byte ptr [edx + edi]
        mov    byte ptr [eax + ecx], dl
        mov    eax, dword ptr [ebp - 0x24]
        mov    edx, dword ptr [ebp - 0xc]
L_2610:
        mov    edi, dword ptr [ebp + 8]
        add    eax, 4
        shl    edi, 1
        cmp    eax, 8
        mov    dword ptr [ebp - 0x24], eax
        mov    dword ptr [ebp + 8], edi
        jl    L_25f2
L_2623:
        mov    eax, dword ptr [ebp + 0x18]
        mov    ecx, dword ptr [ebp - 0x4c]
        mov    edx, dword ptr [ebp - 0x38]
        mov    edi, dword ptr [ecx + eax*4]
        inc    word ptr [ebp - 0x74]
        test    edi, edx
        je    L_2bb3
        mov    edi, eax
        mov    eax, dword ptr [ebp - 0x30]
        shl    edi, 4
        cmp    eax, 0x7b242c
        ja    L_270b
        mov    ecx, dword ptr [ebp - 0x5c]
        jmp    dword ptr [ecx*4 + 0x453648]
        fld    dword ptr [esi + 4]
        mov    edx, dword ptr [ebp - 0x58]
        fsub    dword ptr [esi - 4]
        fld    dword ptr [edi + edx + 0xc]
        fsub    dword ptr [edi + edx + 4]
        jmp    L_26c7
L_266b:
        mov    eax, dword ptr [ebp - 0x4c]
        test    dword ptr [eax + ecx*4], edx
        jne    L_2bbe
        mov    edi, dword ptr [ebp + 0x18]
        mov    eax, dword ptr [ebp - 0x30]
        shl    edi, 4
        cmp    eax, 0x7b242c
        ja    L_2936
        mov    eax, dword ptr [ebp - 0x5c]
        jmp    dword ptr [eax*4 + 0x453660]
        mov    edx, dword ptr [ebp - 0x58]
        fld    dword ptr [edi + edx + 0xc]
        fsub    dword ptr [edi + edx + 4]
        fld    dword ptr [esi + 4]
        fsub    dword ptr [esi - 4]
        jmp    L_28f2
        mov    edx, dword ptr [ebp - 0x58]
        fld    dword ptr [esi - 4]
        fld    dword ptr [edi + edx + 4]
        jmp    L_26c7
        fld    dword ptr [esi + 4]
        mov    edx, dword ptr [ebp - 0x58]
        fsub    dword ptr [esi - 8]
        fld    dword ptr [edi + edx + 0xc]
        fsub    dword ptr [edi + edx]
L_26c7:
        fld    st(1)
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_2729
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        mov    dword ptr [ebp - 4], 0
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        jmp    L_2736
        mov    edx, dword ptr [ebp - 0x58]
        fld    dword ptr [esi - 8]
        fld    dword ptr [edi + edx]
        jmp    L_26c7
        mov    edx, dword ptr [ebp - 0x58]
        fld    dword ptr [esi]
        fld    dword ptr [edi + edx + 8]
        jmp    L_26c7
        fld    dword ptr [esi + 4]
        mov    edx, dword ptr [ebp - 0x58]
        fsub    dword ptr [esi]
        fld    dword ptr [edi + edx + 0xc]
        fsub    dword ptr [edi + edx + 8]
        jmp    L_26c7
L_270b:
        push    0x76df04
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_271d
        int 3    
L_271d:
        mov    edx, dword ptr [ebp - 0x58]
        mov    dword ptr [ebp - 4], 0
        jmp    L_2736
L_2729:
        fld    st(1)
        fsub st(0), st(1)
        fdivr st(0), st(2)
        fstp    dword ptr [ebp - 4]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_2736:
        fld    dword ptr [edi + edx]
        mov    ecx, dword ptr [ebp - 0x74]
        fsub    dword ptr [esi - 8]
        mov    eax, dword ptr [ebp - 0x8c]
        and    ecx, 0xffff
        mov    dword ptr [ebp + 8], ecx
        fmul    dword ptr [ebp - 4]
        shl    ecx, 4
        add    eax, ecx
        fadd    dword ptr [esi - 8]
        fstp    dword ptr [eax]
        fld    dword ptr [edi + edx + 4]
        fsub    dword ptr [esi - 4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [esi - 4]
        fstp    dword ptr [eax + 4]
        fld    dword ptr [edi + edx + 8]
        fsub    dword ptr [esi]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [esi]
        fstp    dword ptr [eax + 8]
        fld    dword ptr [edi + edx + 0xc]
        mov    edx, dword ptr [ebp - 0x30]
        cmp    dword ptr [edx + 4], 0
        fsub    dword ptr [esi + 4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [esi + 4]
        fstp    dword ptr [eax + 0xc]
        je    L_279d
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [g_007b220c]
        jmp    L_27a3
L_279d:
        fld    dword ptr [g_007b220c]
L_27a3:
        mov    edx, dword ptr [edx]
        fstp    dword ptr [eax + edx*4]
        mov    edx, dword ptr [ebp - 0x54]
        fld    dword ptr [edi + edx]
        mov    edx, dword ptr [ebp - 0x88]
        fsub    dword ptr [ebx - 0xc]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ebx - 0xc]
        fstp    dword ptr [ecx + edx]
        mov    edx, dword ptr [ebp - 0x54]
        fld    dword ptr [edi + edx + 4]
        mov    edx, dword ptr [ebp - 0x88]
        fsub    dword ptr [ebx - 8]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ebx - 8]
        fstp    dword ptr [ecx + edx + 4]
        mov    edx, dword ptr [ebp - 0x54]
        fld    dword ptr [edi + edx + 8]
        mov    edx, dword ptr [ebp - 0x3c]
        fsub    dword ptr [edx + esi]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edx + esi]
        mov    edx, dword ptr [ebp - 0x88]
        fstp    dword ptr [ecx + edx + 8]
        mov    edx, dword ptr [ebp - 0x54]
        fld    dword ptr [edi + edx + 0xc]
        mov    edx, dword ptr [ebp - 0x88]
        fsub    dword ptr [ebx]
        mov    edi, dword ptr [ebp - 0x84]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ebx]
        mov    ebx, dword ptr [ebp + 8]
        fstp    dword ptr [ecx + edx + 0xc]
        mov    edx, dword ptr [ebp + 0x18]
        mov    ecx, dword ptr [ebp - 0x50]
        fld    dword ptr [ecx + edx*8]
        mov    ecx, dword ptr [ebp - 0x6c]
        fsub    dword ptr [ecx]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ecx]
        fstp    dword ptr [edi + ebx*8]
        mov    ebx, dword ptr [ebp - 0x50]
        fld    dword ptr [ebx + edx*8 + 4]
        fsub    dword ptr [ecx + 4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ecx + 4]
        mov    ecx, dword ptr [ebp + 8]
        fstp    dword ptr [edi + ecx*8 + 4]
        xor    ecx, ecx
        mov    ecx, dword ptr [ebp - 8]
        mov    cl, byte ptr [ecx + 0x13]
        test    cl, cl
        jbe    L_2b17
        mov    edi, ecx
        and    edi, 0xff
        mov    dword ptr [ebp - 0x24], 1
        mov    dword ptr [ebp - 0xc], edi
        xor    ecx, ecx
L_2869:
        mov    ebx, dword ptr [ebp - 0x24]
        test    edi, ebx
        je    L_28c1
        mov    edi, dword ptr [ebp + ecx - 0x48]
        mov    ebx, dword ptr [ebp - 0x18]
        mov    bl, byte ptr [edi + ebx]
        mov    byte ptr [ebp - 0xbc], bl
        mov    ebx, dword ptr [ebp - 0xbc]
        and    ebx, 0xff
        mov    dword ptr [ebp - 0x64], ebx
        xor    ebx, ebx
        mov    bl, byte ptr [edi + edx]
        mov    edx, dword ptr [ebp - 0x64]
        mov    edi, dword ptr [ebp + 8]
        sub    ebx, edx
        mov    edx, dword ptr [ebp + ecx - 0x7c]
        mov    dword ptr [ebp - 0x20], ebx
        fild    dword ptr [ebp - 0x20]
        fmul    dword ptr [ebp - 4]
        fiadd    dword ptr [ebp - 0x64]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [ebp - 0x20]
        mov    bl, byte ptr [ebp - 0x20]
        mov    byte ptr [edx + edi], bl
        mov    edx, dword ptr [ebp + 0x18]
        mov    edi, dword ptr [ebp - 0xc]
L_28c1:
        mov    ebx, dword ptr [ebp - 0x24]
        add    ecx, 4
        shl    ebx, 1
        cmp    ecx, 8
        mov    dword ptr [ebp - 0x24], ebx
        jl    L_2869
        jmp    L_2b17
        mov    edx, dword ptr [ebp - 0x58]
        fld    dword ptr [edi + edx + 4]
        fld    dword ptr [esi - 4]
        jmp    L_28f2
        mov    edx, dword ptr [ebp - 0x58]
        fld    dword ptr [edi + edx + 0xc]
        fsub    dword ptr [edi + edx]
        fld    dword ptr [esi + 4]
        fsub    dword ptr [esi - 8]
L_28f2:
        fld    st(1)
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_2954
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        mov    dword ptr [ebp - 4], 0
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        jmp    L_2961
        mov    edx, dword ptr [ebp - 0x58]
        fld    dword ptr [edi + edx]
        fld    dword ptr [esi - 8]
        jmp    L_28f2
        mov    edx, dword ptr [ebp - 0x58]
        fld    dword ptr [edi + edx + 8]
        fld    dword ptr [esi]
        jmp    L_28f2
        mov    edx, dword ptr [ebp - 0x58]
        fld    dword ptr [edi + edx + 0xc]
        fsub    dword ptr [edi + edx + 8]
        fld    dword ptr [esi + 4]
        fsub    dword ptr [esi]
        jmp    L_28f2
L_2936:
        push    0x76df04
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_2948
        int 3    
L_2948:
        mov    edx, dword ptr [ebp - 0x58]
        mov    dword ptr [ebp - 4], 0
        jmp    L_2961
L_2954:
        fld    st(1)
        fsub st(0), st(1)
        fdivr st(0), st(2)
        fstp    dword ptr [ebp - 4]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_2961:
        fld    dword ptr [esi - 8]
        mov    ecx, dword ptr [ebp - 0x74]
        fsub    dword ptr [edi + edx]
        mov    eax, dword ptr [ebp - 0x8c]
        and    ecx, 0xffff
        mov    dword ptr [ebp + 8], ecx
        fmul    dword ptr [ebp - 4]
        shl    ecx, 4
        add    eax, ecx
        fadd    dword ptr [edi + edx]
        lea    edx, [edi + edx + 4]
        fstp    dword ptr [eax]
        fld    dword ptr [esi - 4]
        fsub    dword ptr [edx]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edx]
        mov    edx, dword ptr [ebp - 0x58]
        lea    edx, [edi + edx + 8]
        fstp    dword ptr [eax + 4]
        fld    dword ptr [esi]
        fsub    dword ptr [edx]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edx]
        mov    edx, dword ptr [ebp - 0x58]
        lea    edx, [edi + edx + 0xc]
        fstp    dword ptr [eax + 8]
        fld    dword ptr [esi + 4]
        fsub    dword ptr [edx]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edx]
        mov    edx, dword ptr [ebp - 0x30]
        cmp    dword ptr [edx + 4], 0
        fstp    dword ptr [eax + 0xc]
        je    L_29d2
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [g_007b220c]
        jmp    L_29d8
L_29d2:
        fld    dword ptr [g_007b220c]
L_29d8:
        mov    edx, dword ptr [edx]
        fstp    dword ptr [eax + edx*4]
        mov    edx, dword ptr [ebp - 0x54]
        fld    dword ptr [ebx - 0xc]
        fsub    dword ptr [edi + edx]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edi + edx]
        mov    edx, dword ptr [ebp - 0x88]
        fstp    dword ptr [ecx + edx]
        mov    edx, dword ptr [ebp - 0x54]
        fld    dword ptr [ebx - 8]
        lea    edx, [edi + edx + 4]
        fsub    dword ptr [edx]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edx]
        mov    edx, dword ptr [ebp - 0x88]
        fstp    dword ptr [ecx + edx + 4]
        mov    edx, dword ptr [ebp - 0x54]
        lea    edx, [edi + edx + 8]
        mov    dword ptr [ebp - 0x20], edx
        mov    edx, dword ptr [ebp - 0x3c]
        fld    dword ptr [edx + esi]
        mov    edx, dword ptr [ebp - 0x20]
        fsub    dword ptr [edx]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edx]
        mov    edx, dword ptr [ebp - 0x88]
        fstp    dword ptr [ecx + edx + 8]
        mov    edx, dword ptr [ebp - 0x54]
        fld    dword ptr [ebx]
        lea    edi, [edi + edx + 0xc]
        fsub    dword ptr [edi]
        mov    edx, dword ptr [ebp - 0x88]
        mov    ebx, dword ptr [ebp + 8]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edi]
        mov    edi, dword ptr [ebp - 0x84]
        fstp    dword ptr [ecx + edx + 0xc]
        mov    ecx, dword ptr [ebp - 0x6c]
        fld    dword ptr [ecx]
        mov    ecx, dword ptr [ebp - 0x50]
        mov    edx, dword ptr [ebp + 0x18]
        fsub    dword ptr [ecx + edx*8]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ecx + edx*8]
        lea    ecx, [ecx + edx*8 + 4]
        fstp    dword ptr [edi + ebx*8]
        mov    ebx, dword ptr [ebp - 0x6c]
        fld    dword ptr [ebx + 4]
        fsub    dword ptr [ecx]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ecx]
        mov    ecx, dword ptr [ebp + 8]
        fstp    dword ptr [edi + ecx*8 + 4]
        xor    ecx, ecx
        mov    ecx, dword ptr [ebp - 8]
        mov    cl, byte ptr [ecx + 0x13]
        test    cl, cl
        jbe    L_2b17
        and    ecx, 0xff
        xor    edi, edi
        mov    dword ptr [ebp - 0x24], 1
        mov    dword ptr [ebp - 0xc], ecx
        mov    dword ptr [ebp + 0x18], edi
L_2aab:
        mov    ebx, dword ptr [ebp - 0x24]
        test    ecx, ebx
        je    L_2b04
        mov    edi, dword ptr [ebp + edi - 0x48]
        mov    cl, byte ptr [edi + edx]
        mov    ebx, dword ptr [ebp - 0x18]
        mov    byte ptr [ebp - 0xa0], cl
        mov    ecx, dword ptr [ebp - 0xa0]
        and    ecx, 0xff
        mov    dword ptr [ebp - 0x64], ecx
        xor    ecx, ecx
        mov    cl, byte ptr [edi + ebx]
        sub    ecx, dword ptr [ebp - 0x64]
        mov    edi, dword ptr [ebp + 8]
        mov    dword ptr [ebp - 0x20], ecx
        fild    dword ptr [ebp - 0x20]
        mov    ecx, dword ptr [ebp + 0x18]
        mov    ecx, dword ptr [ebp + ecx - 0x7c]
        fmul    dword ptr [ebp - 4]
        fiadd    dword ptr [ebp - 0x64]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [ebp - 0x20]
        mov    bl, byte ptr [ebp - 0x20]
        mov    byte ptr [ecx + edi], bl
        mov    ecx, dword ptr [ebp - 0xc]
        mov    edi, dword ptr [ebp + 0x18]
L_2b04:
        mov    ebx, dword ptr [ebp - 0x24]
        add    edi, 4
        shl    ebx, 1
        cmp    edi, 8
        mov    dword ptr [ebp + 0x18], edi
        mov    dword ptr [ebp - 0x24], ebx
        jl    L_2aab
L_2b17:
        mov    dword ptr [ebp - 0x20], eax
        mov    dword ptr [ebp + 0x18], 0
        mov    edi, dword ptr [ebp - 0x20]
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
        mov    dword ptr [ebp + 0x18], edx
        mov    edx, dword ptr [ebp + 0x18]
        mov    eax, dword ptr [ebp - 0x80]
        mov    ecx, dword ptr [ebp + 8]
        inc    word ptr [ebp - 0x74]
        mov    ebx, dword ptr [ebp - 0xb0]
        mov    dword ptr [eax + ecx*4], edx
L_2bb3:
        mov    ecx, dword ptr [ebp - 0x60]
        mov    edi, dword ptr [ebp - 0x8c]
        jmp    L_2bc1
L_2bbe:
        mov    ecx, dword ptr [ebp - 0x60]
L_2bc1:
        mov    edx, dword ptr [ebp - 0xac]
        mov    eax, dword ptr [ebp - 0x28]
        add    edx, 4
        mov    dword ptr [ebp - 0xac], edx
        add    dword ptr [ebp - 0x6c], 8
        mov    edx, dword ptr [ebp - 0x14]
        add    ebx, 0x10
        add    esi, 0x10
        cmp    eax, edx
        mov    dword ptr [ebp - 0x18], eax
        mov    dword ptr [ebp - 0xb0], ebx
        jl    L_2538
L_2bf1:
        mov    eax, dword ptr [g_007da66c]
        lea    edx, [ecx + ecx*2]
        shl    edx, 4
        add    eax, edx
        mov    edx, dword ptr [eax]
        mov    dword ptr [ebp - 0x58], edx
        mov    edx, dword ptr [eax + 8]
        mov    dword ptr [ebp - 0x54], edx
        mov    edx, dword ptr [eax + 0x10]
        mov    eax, dword ptr [eax + 0x18]
        mov    dword ptr [ebp - 0x50], edx
        mov    edx, dword ptr [ebp - 8]
        xor    ebx, ebx
        mov    bl, byte ptr [edx + 0x13]
        test    bl, bl
        mov    dword ptr [ebp - 0x4c], eax
        jbe    L_2c65
        mov    edx, ebx
        xor    eax, eax
        and    edx, 0xff
        mov    dword ptr [ebp + 8], 1
        mov    dword ptr [ebp - 0xc], edx
        lea    esi, [ebp - 0x48]
L_2c38:
        mov    edi, dword ptr [ebp + 8]
        test    edx, edi
        je    L_2c54
        mov    edi, dword ptr [g_007da66c]
        lea    edx, [ecx + ecx*2]
        lea    edx, [eax + edx*2]
        mov    edx, dword ptr [edi + edx*8 + 0x20]
        mov    dword ptr [esi], edx
        mov    edx, dword ptr [ebp - 0xc]
L_2c54:
        mov    edi, dword ptr [ebp + 8]
        inc    eax
        shl    edi, 1
        add    esi, 4
        cmp    eax, 2
        mov    dword ptr [ebp + 8], edi
        jl    L_2c38
L_2c65:
        mov    ax, word ptr [ebp - 0x74]
        xor    edx, edx
        test    ecx, ecx
        sete    dl
        mov    word ptr [ebp - 0x40], ax
        mov    ecx, edx
        mov    edx, dword ptr [g_007da66c]
        lea    eax, [ecx + ecx*2]
        shl    eax, 4
        mov    edi, dword ptr [eax + edx]
        add    eax, edx
        test    bl, bl
        mov    edx, dword ptr [eax + 8]
        mov    dword ptr [ebp - 0x88], edx
        mov    edx, dword ptr [eax + 0x10]
        mov    eax, dword ptr [eax + 0x18]
        mov    dword ptr [ebp - 0x60], ecx
        mov    dword ptr [ebp - 0x8c], edi
        mov    dword ptr [ebp - 0x84], edx
        mov    dword ptr [ebp - 0x80], eax
        jbe    L_2ce9
        xor    eax, eax
        and    ebx, 0xff
        mov    edx, 1
        mov    dword ptr [ebp - 0xc], ebx
        lea    esi, [ebp - 0x7c]
L_2cbf:
        test    ebx, edx
        je    L_2cde
        mov    ebx, dword ptr [g_007da66c]
        lea    edi, [ecx + ecx*2]
        lea    edi, [eax + edi*2]
        mov    edi, dword ptr [ebx + edi*8 + 0x20]
        mov    ebx, dword ptr [ebp - 0xc]
        mov    dword ptr [esi], edi
        mov    edi, dword ptr [ebp - 0x8c]
L_2cde:
        inc    eax
        add    esi, 4
        shl    edx, 1
        cmp    eax, 2
        jl    L_2cbf
L_2ce9:
        mov    ebx, dword ptr [ebp - 0x40]
        mov    word ptr [ebp - 0x74], 0
L_2cf2:
        mov    eax, dword ptr [ebp - 0x38]
        mov    esi, dword ptr [ebp - 0x5c]
        mov    edx, dword ptr [ebp - 0x30]
        shl    eax, 1
        mov    dword ptr [ebp - 0x38], eax
        mov    eax, dword ptr [ebp - 0x70]
        inc    esi
        add    edx, 8
        dec    eax
        mov    dword ptr [ebp - 0x5c], esi
        mov    dword ptr [ebp - 0x30], edx
        mov    dword ptr [ebp - 0x70], eax
        jne    L_24ea
        mov    esi, ebx
        xor    eax, eax
        and    esi, 0xffff
        jle    L_2d2e
        mov    edx, dword ptr [ebp - 0x4c]
L_2d26:
        or    eax, dword ptr [edx]
        add    edx, 4
        dec    esi
        jne    L_2d26
L_2d2e:
        test    eax, eax
        mov    dword ptr [g_007b98c4], eax
        je    L_2d60
        mov    edx, dword ptr [ebp - 0x34]
        mov    esi, edx
        dec    edx
        test    esi, esi
        mov    dword ptr [ebp - 0x34], edx
        jne    L_24d5
        test    eax, eax
        je    L_2d60
        mov    ecx, dword ptr [g_007d98fc]
        mov    edx, dword ptr [ecx]
        mov    eax, dword ptr [ebp - 0x1c]
        mov    byte ptr [edx + eax], 0
        jmp    L_2ff9
L_2d60:
        mov    eax, dword ptr [ebp - 0x40]
        xor    edx, edx
        and    eax, 0xffff
        mov    dword ptr [ebp - 0x14], eax
        jle    L_2fa8
        mov    eax, dword ptr [ebp - 0x54]
        mov    ecx, dword ptr [ebp - 0x50]
        mov    dword ptr [ebp - 0x24], eax
        mov    eax, dword ptr [ebp - 0x98]
        mov    dword ptr [ebp - 0x60], ecx
        lea    ecx, [eax*8]
        mov    dword ptr [ebp - 0x5c], ecx
        lea    ecx, [eax*4]
        shl    eax, 4
        mov    dword ptr [ebp - 0x3c], eax
        mov    eax, dword ptr [ebp - 0x58]
        mov    dword ptr [ebp - 0x28], ecx
        lea    edi, [eax + 8]
L_2da5:
        mov    ecx, dword ptr [g_007da684]
        mov    ebx, dword ptr [ecx]
        mov    eax, dword ptr [ebp - 0x3c]
        mov    ecx, dword ptr [edi - 8]
        add    eax, ebx
        mov    dword ptr [eax], ecx
        mov    ecx, dword ptr [edi - 4]
        mov    dword ptr [eax + 4], ecx
        mov    ecx, dword ptr [edi]
        mov    dword ptr [eax + 8], ecx
        mov    ecx, dword ptr [edi + 4]
        mov    dword ptr [eax + 0xc], ecx
        mov    eax, dword ptr [ebp - 0x24]
        mov    dword ptr [ebp + 8], eax
        fld    dword ptr [g_0076ea28]
        mov    esi, dword ptr [ebp + 8]
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
        mov    dword ptr [ebp - 0xd0], ebx
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
        mov    ecx, dword ptr [ebp - 0xd0]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0xd0], ecx
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
        mov    ecx, dword ptr [ebp - 0xd0]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0xd0], ecx
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
        mov    ecx, dword ptr [ebp - 0xd0]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0xd0], ecx
        mov    ecx, dword ptr [g_007da608]
        mov    eax, dword ptr [ecx]
        mov    ecx, dword ptr [ebp - 0xd0]
        mov    esi, dword ptr [ebp - 0x28]
        mov    dword ptr [esi + eax], ecx
        mov    eax, dword ptr [g_007da680]
        mov    esi, dword ptr [eax]
        mov    ecx, dword ptr [ebp - 0x5c]
        mov    eax, dword ptr [ebp - 0x60]
        add    ecx, esi
        mov    esi, dword ptr [eax]
        mov    eax, dword ptr [eax + 4]
        mov    dword ptr [ecx], esi
        mov    dword ptr [ecx + 4], eax
        mov    ecx, dword ptr [ebp - 8]
        xor    eax, eax
        mov    al, byte ptr [ecx + 0x13]
        test    al, al
        jbe    L_2f67
        and    eax, 0xff
        lea    esi, [ebp - 0x48]
        mov    dword ptr [ebp + 0x18], 1
        mov    dword ptr [ebp - 0xc], eax
        mov    ecx, 0x7da660
        mov    dword ptr [ebp + 8], esi
L_2f2f:
        mov    esi, dword ptr [ebp + 0x18]
        test    eax, esi
        je    L_2f50
        mov    esi, dword ptr [ecx]
        mov    ebx, dword ptr [esi]
        mov    eax, dword ptr [ebp + 8]
        mov    eax, dword ptr [eax]
        mov    esi, dword ptr [ebp - 0x98]
        mov    al, byte ptr [edx + eax]
        add    esi, edx
        mov    byte ptr [ebx + esi], al
        mov    eax, dword ptr [ebp - 0xc]
L_2f50:
        add    dword ptr [ebp + 8], 4
        mov    ebx, dword ptr [ebp + 0x18]
        add    ecx, 8
        shl    ebx, 1
        cmp    ecx, 0x7da670
        mov    dword ptr [ebp + 0x18], ebx
        jl    L_2f2f
L_2f67:
        mov    ebx, dword ptr [ebp - 0x28]
        mov    esi, dword ptr [ebp - 0x3c]
        mov    ecx, dword ptr [ebp - 0x60]
        add    ebx, 4
        mov    eax, 0x10
        add    esi, eax
        mov    dword ptr [ebp - 0x28], ebx
        mov    ebx, dword ptr [ebp - 0x24]
        add    ebx, eax
        add    edi, eax
        mov    dword ptr [ebp - 0x3c], esi
        mov    esi, dword ptr [ebp - 0x5c]
        mov    eax, 8
        add    esi, eax
        add    ecx, eax
        mov    eax, dword ptr [ebp - 0x14]
        inc    edx
        cmp    edx, eax
        mov    dword ptr [ebp - 0x24], ebx
        mov    dword ptr [ebp - 0x5c], esi
        mov    dword ptr [ebp - 0x60], ecx
        jl    L_2da5
L_2fa8:
        mov    ecx, dword ptr [ebp - 0x40]
        mov    edx, dword ptr [g_007da670]
        mov    eax, dword ptr [edx]
        mov    dx, word ptr [ebp - 0x40]
        mov    dword ptr [ebp - 0x18], ecx
        mov    ecx, dword ptr [ebp - 0x68]
L_2fbd:
        mov    word ptr [eax + ecx*2], dx
        mov    eax, dword ptr [ebp - 0x18]
        mov    edx, dword ptr [ebp - 0x98]
        mov    ecx, dword ptr [ebp - 0x68]
        and    eax, 0xffff
        add    edx, eax
        mov    eax, dword ptr [ebp - 0x90]
        inc    ecx
        inc    eax
        mov    dword ptr [ebp - 0x90], eax
        mov    eax, dword ptr [g_007d98fc]
        mov    dword ptr [ebp - 0x98], edx
        mov    edx, dword ptr [ebp - 0x1c]
        mov    dword ptr [ebp - 0x68], ecx
        mov    ecx, dword ptr [eax]
        mov    byte ptr [ecx + edx], 0
L_2ff9:
        mov    edi, dword ptr [ebp - 0x10]
        mov    eax, dword ptr [ebp - 0x1c]
        mov    ecx, dword ptr [ebp - 8]
        mov    edx, dword ptr [ecx + 0x58]
        add    edi, 3
        inc    eax
        cmp    eax, edx
        mov    dword ptr [ebp - 0x10], edi
        mov    dword ptr [ebp - 0x1c], eax
        jl    L_1621
L_3017:
        mov    bl, byte ptr [ebp + 0x1c]
        test    bl, bl
        je    L_3026
        mov    edx, dword ptr [ebp + 0x10]
        mov    ecx, dword ptr [edx + 0x30]
        jmp    L_3035
L_3026:
        mov    eax, dword ptr [ebp + 0x10]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [eax + 0x10]
        shl    ecx, 5
        add    ecx, edx
        mov    edx, eax
L_3035:
        mov    eax, dword ptr [ebp - 8]
        xor    esi, esi
        test    bl, bl
        mov    dword ptr [eax + 0x44], ecx
        mov    word ptr [eax + 0xa], si
        je    L_304a
        mov    ecx, dword ptr [edx + 0x48]
        jmp    L_3053
L_304a:
        mov    ecx, dword ptr [edx + 0xc]
        mov    edx, dword ptr [edx + 0x28]
        lea    ecx, [edx + ecx*2]
L_3053:
        mov    dword ptr [eax + 0x50], ecx
        mov    word ptr [eax + 0x54], si
        mov    edx, dword ptr [eax + 0x18]
        xor    ecx, ecx
        cmp    edx, esi
        mov    dword ptr [ebp - 0x18], edx
        mov    dword ptr [ebp - 0x10], ecx
        mov    dword ptr [ebp + 8], esi
        jle    L_31c7
L_3070:
        mov    esi, dword ptr [g_007da600]
        mov    esi, dword ptr [esi]
        cmp    byte ptr [esi + ecx], 0
        jne    L_3086
        inc    dword ptr [ebp + 8]
        jmp    L_31bb
L_3086:
        mov    eax, dword ptr [ebp - 0x10]
        mov    esi, dword ptr [ebp + 8]
        mov    ebx, dword ptr [ebp - 8]
        mov    edx, dword ptr [g_007da5f4]
        mov    ecx, eax
        sub    ecx, esi
        mov    word ptr [edx + eax*2], cx
        mov    eax, dword ptr [ebx + 0x1c]
        mov    ecx, dword ptr [ebx + 0x6c]
        mov    edx, dword ptr [ecx]
        xor    esi, esi
        mov    si, word ptr [ebx + 0xa]
        mov    dword ptr [ebp - 0x20], eax
        mov    eax, dword ptr [g_007da68c]
        mov    ecx, dword ptr [eax]
        mov    dword ptr [ebp - 0xa0], ecx
        mov    ecx, dword ptr [ebx + 0x44]
        mov    dword ptr [ebp + 0x18], edx
        shl    esi, 5
        add    esi, ecx
        mov    dword ptr [ebp - 0xa8], esi
        mov    ecx, dword ptr [ebp - 0xa0]
        fld1    
        mov    edi, dword ptr [ebp - 0x10]
        mov    eax, edi
        shl    eax, 4
        fdiv    dword ptr [eax + ecx + 0xc]
        add    eax, ecx
        mov    edx, dword ptr [ebp - 0xa8]
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
        mov    eax, dword ptr [ebp + 0x18]
        test    eax, eax
        fadd    dword ptr [g_007da874]
        fstp    dword ptr [esi]
        fld    dword ptr [g_007da878]
        fmul    dword ptr [esi + 4]
        fadd    dword ptr [g_007da870]
        fstp    dword ptr [esi + 4]
        je    L_3132
        mov    edx, eax
        mov    eax, dword ptr [ebp - 0x10]
        mov    ecx, dword ptr [edx + eax*4]
        jmp    L_313b
L_3132:
        mov    ecx, dword ptr [g_007b94a0]
        mov    eax, dword ptr [ebp - 0x10]
L_313b:
        mov    dword ptr [esi + 0x10], ecx
        mov    ecx, dword ptr [ebp - 0x20]
        mov    edx, dword ptr [ecx + eax*8]
        mov    dword ptr [esi + 0x18], edx
        mov    ecx, dword ptr [ecx + eax*8 + 4]
        mov    dword ptr [esi + 0x1c], ecx
        test    byte ptr [ebx + 0x13], 1
        je    L_316f
        mov    edx, dword ptr [g_007da65c]
        mov    ecx, dword ptr [edx]
        mov    esi, dword ptr [ebx + 0x44]
        mov    al, byte ptr [ecx + eax]
        xor    edx, edx
        mov    dx, word ptr [ebx + 0xa]
        shl    edx, 5
        mov    byte ptr [edx + esi + 0x17], al
L_316f:
        mov    al, byte ptr [ebp + 0x17]
        test    al, al
        je    L_31ae
        mov    edx, dword ptr [ebx + 0x44]
        fld    dword ptr [ebp - 0xa4]
        xor    ecx, ecx
        mov    cx, word ptr [ebx + 0xa]
        shl    ecx, 5
        fadd    dword ptr [ecx + edx + 0x18]
        lea    eax, [ecx + edx + 0x18]
        fstp    dword ptr [eax]
        mov    ecx, dword ptr [ebx + 0x44]
        fld    dword ptr [ebp - 0x9c]
        xor    eax, eax
        mov    ax, word ptr [ebx + 0xa]
        shl    eax, 5
        fadd    dword ptr [eax + ecx + 0x1c]
        lea    eax, [eax + ecx + 0x1c]
        fstp    dword ptr [eax]
L_31ae:
        inc    word ptr [ebx + 0xa]
        mov    edx, dword ptr [ebp - 0x18]
        mov    ecx, dword ptr [ebp - 0x10]
        mov    eax, dword ptr [ebp - 8]
L_31bb:
        inc    ecx
        cmp    ecx, edx
        mov    dword ptr [ebp - 0x10], ecx
        jl    L_3070
L_31c7:
        mov    esi, dword ptr [eax + 0x58]
        xor    edx, edx
        xor    ecx, ecx
        test    esi, esi
        mov    dword ptr [ebp - 0x1c], edx
        jle    L_3262
L_31d9:
        mov    esi, dword ptr [g_007d98fc]
        mov    esi, dword ptr [esi]
        cmp    byte ptr [esi + edx], 0
        je    L_3250
        mov    edx, dword ptr [eax + 0x48]
        mov    edi, dword ptr [g_007da5f4]
        mov    esi, dword ptr [eax + 0x50]
        xor    ebx, ebx
        mov    bl, byte ptr [edx + ecx]
        xor    edx, edx
        mov    dx, word ptr [eax + 0x54]
        mov    di, word ptr [edi + ebx*2]
        xor    ebx, ebx
        mov    word ptr [esi + edx*2], di
        mov    edx, dword ptr [eax + 0x48]
        mov    bl, byte ptr [edx + ecx + 2]
        mov    edi, dword ptr [g_007da5f4]
        mov    esi, dword ptr [eax + 0x50]
        xor    edx, edx
        mov    dx, word ptr [eax + 0x54]
        mov    di, word ptr [edi + ebx*2]
        xor    ebx, ebx
        mov    word ptr [esi + edx*2 + 2], di
        mov    edx, dword ptr [eax + 0x48]
        mov    bl, byte ptr [edx + ecx + 1]
        mov    edi, dword ptr [g_007da5f4]
        mov    esi, dword ptr [eax + 0x50]
        xor    edx, edx
        mov    dx, word ptr [eax + 0x54]
        mov    di, word ptr [edi + ebx*2]
        mov    word ptr [esi + edx*2 + 4], di
        add    word ptr [eax + 0x54], 3
        mov    edx, dword ptr [ebp - 0x1c]
L_3250:
        mov    esi, dword ptr [eax + 0x58]
        add    ecx, 3
        inc    edx
        cmp    edx, esi
        mov    dword ptr [ebp - 0x1c], edx
        jl    L_31d9
L_3262:
        mov    eax, dword ptr [ebp - 0x68]
        test    eax, eax
        jle    L_35d1
        xor    ecx, ecx
        cmp    eax, ecx
        mov    dword ptr [ebp - 0x1c], ecx
        mov    dword ptr [ebp - 0x10], ecx
        jle    L_35d1
L_327d:
        mov    eax, dword ptr [g_007da670]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [ebp - 0x1c]
        xor    eax, eax
        mov    ax, word ptr [ecx + edx*2]
        and    eax, 0xffff
        mov    dword ptr [ebp - 0xc0], eax
        dec    eax
        cmp    eax, 1
        jle    L_35b1
        mov    ecx, dword ptr [ebp - 0x10]
        mov    ebx, dword ptr [ebp - 8]
        inc    ecx
        dec    eax
        mov    dword ptr [ebp + 8], ecx
        mov    dword ptr [ebp + 0x18], eax
L_32b0:
        mov    edx, dword ptr [g_007da680]
        mov    eax, dword ptr [edx]
        mov    ecx, dword ptr [g_007da608]
        mov    edx, dword ptr [ecx]
        xor    esi, esi
        mov    si, word ptr [ebx + 0xa]
        mov    dword ptr [ebp - 0xb4], eax
        mov    eax, dword ptr [g_007da684]
        mov    ecx, dword ptr [eax]
        mov    eax, dword ptr [ebp + 8]
        mov    dword ptr [ebp - 0xbc], ecx
        mov    ecx, dword ptr [ebx + 0x44]
        shl    esi, 5
        mov    dword ptr [ebp - 0xa8], eax
        inc    eax
        add    esi, ecx
        mov    dword ptr [ebp - 0xb8], edx
        mov    dword ptr [ebp - 0xc4], eax
        mov    dword ptr [ebp - 0xa0], eax
        mov    dword ptr [ebp - 0x20], esi
        mov    ecx, dword ptr [ebp - 0xbc]
        fld1    
        mov    edi, dword ptr [ebp - 0x10]
        mov    eax, edi
        shl    eax, 4
        fdiv    dword ptr [eax + ecx + 0xc]
        add    eax, ecx
        mov    edx, dword ptr [ebp - 0x20]
        fst    dword ptr [edx + 0xc]
        fld    st(0)
        fmul    dword ptr [eax]
        fstp    dword ptr [edx]
        fld    dword ptr [eax + 4]
        fmul st(0), st(1)
        fstp    dword ptr [edx + 4]
        fld    dword ptr [eax + 8]
        mov    eax, dword ptr [ebp - 0xa0]
        fmul st(0), st(1)
        shl    eax, 4
        add    eax, ecx
        fstp    dword ptr [edx + 8]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
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
        mov    eax, dword ptr [ebp - 0xa8]
        fmul st(0), st(1)
        shl    eax, 4
        add    eax, ecx
        fstp    dword ptr [edx + 0x28]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
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
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [g_007da87c]
        fmul    dword ptr [esi]
        mov    ecx, dword ptr [ebp - 0xb8]
        mov    edx, dword ptr [ebp - 0x10]
        mov    eax, dword ptr [ecx + edx*4]
        fadd    dword ptr [g_007da874]
        mov    dword ptr [esi + 0x10], eax
        mov    eax, dword ptr [ebp + 8]
        mov    edi, dword ptr [ecx + eax*4 + 4]
        fstp    dword ptr [esi]
        mov    ecx, dword ptr [ecx + eax*4]
        fld    dword ptr [g_007da878]
        mov    dword ptr [esi + 0x50], ecx
        fmul    dword ptr [esi + 4]
        mov    ecx, dword ptr [ebp - 0xb4]
        mov    dword ptr [esi + 0x30], edi
        mov    edi, dword ptr [ecx + edx*8]
        fadd    dword ptr [g_007da870]
        mov    edx, dword ptr [ecx + edx*8 + 4]
        mov    dword ptr [esi + 0x1c], edx
        mov    edx, dword ptr [ecx + eax*8 + 8]
        fstp    dword ptr [esi + 4]
        mov    dword ptr [esi + 0x38], edx
        fld    dword ptr [g_007da87c]
        mov    edx, dword ptr [ecx + eax*8 + 0xc]
        fmul    dword ptr [esi + 0x20]
        mov    dword ptr [esi + 0x3c], edx
        mov    edx, dword ptr [ecx + eax*8]
        mov    eax, dword ptr [ecx + eax*8 + 4]
        fadd    dword ptr [g_007da874]
        mov    dword ptr [esi + 0x5c], eax
        test    byte ptr [ebx + 0x13], 1
        fstp    dword ptr [esi + 0x20]
        mov    dword ptr [esi + 0x18], edi
        fld    dword ptr [g_007da878]
        mov    dword ptr [esi + 0x58], edx
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
        je    L_34a0
        mov    ecx, dword ptr [g_007da660]
        mov    edx, dword ptr [ecx]
        mov    ecx, dword ptr [ebx + 0x44]
        mov    esi, dword ptr [ebp - 0x10]
        mov    dl, byte ptr [esi + edx]
        xor    eax, eax
        mov    ax, word ptr [ebx + 0xa]
        shl    eax, 5
        mov    byte ptr [eax + ecx + 0x17], dl
        mov    eax, dword ptr [g_007da660]
        mov    ecx, dword ptr [eax]
        mov    eax, dword ptr [ebp + 8]
        mov    cl, byte ptr [eax + ecx + 1]
        mov    esi, dword ptr [ebx + 0x44]
        xor    edx, edx
        mov    dx, word ptr [ebx + 0xa]
        shl    edx, 5
        mov    byte ptr [edx + esi + 0x37], cl
        mov    edx, dword ptr [g_007da660]
        mov    ecx, dword ptr [edx]
        mov    esi, dword ptr [ebx + 0x44]
        mov    al, byte ptr [eax + ecx]
        xor    edx, edx
        mov    dx, word ptr [ebx + 0xa]
        shl    edx, 5
        mov    byte ptr [edx + esi + 0x57], al
L_34a0:
        mov    al, byte ptr [ebp + 0x17]
        test    al, al
        je    L_3553
        mov    edx, dword ptr [ebx + 0x44]
        fld    dword ptr [ebp - 0xa4]
        xor    ecx, ecx
        mov    cx, word ptr [ebx + 0xa]
        shl    ecx, 5
        fadd    dword ptr [ecx + edx + 0x18]
        lea    eax, [ecx + edx + 0x18]
        xor    edx, edx
        fstp    dword ptr [eax]
        mov    ecx, dword ptr [ebx + 0x44]
        fld    dword ptr [ebp - 0x9c]
        xor    eax, eax
        mov    ax, word ptr [ebx + 0xa]
        shl    eax, 5
        fadd    dword ptr [eax + ecx + 0x1c]
        lea    eax, [eax + ecx + 0x1c]
        xor    ecx, ecx
        fstp    dword ptr [eax]
        mov    dx, word ptr [ebx + 0xa]
        mov    eax, dword ptr [ebx + 0x44]
        fld    dword ptr [ebp - 0xa4]
        shl    edx, 5
        fadd    dword ptr [edx + eax + 0x38]
        lea    eax, [edx + eax + 0x38]
        fstp    dword ptr [eax]
        mov    cx, word ptr [ebx + 0xa]
        mov    edx, dword ptr [ebx + 0x44]
        fld    dword ptr [ebp - 0x9c]
        shl    ecx, 5
        fadd    dword ptr [ecx + edx + 0x3c]
        lea    eax, [ecx + edx + 0x3c]
        xor    edx, edx
        fstp    dword ptr [eax]
        mov    ecx, dword ptr [ebx + 0x44]
        fld    dword ptr [ebp - 0xa4]
        xor    eax, eax
        mov    ax, word ptr [ebx + 0xa]
        shl    eax, 5
        fadd    dword ptr [eax + ecx + 0x58]
        lea    eax, [eax + ecx + 0x58]
        fstp    dword ptr [eax]
        mov    dx, word ptr [ebx + 0xa]
        mov    eax, dword ptr [ebx + 0x44]
        fld    dword ptr [ebp - 0x9c]
        shl    edx, 5
        fadd    dword ptr [edx + eax + 0x5c]
        lea    eax, [edx + eax + 0x5c]
        fstp    dword ptr [eax]
L_3553:
        mov    ax, word ptr [ebx + 0xa]
        mov    edx, dword ptr [ebx + 0x50]
        xor    ecx, ecx
        mov    cx, word ptr [ebx + 0x54]
        mov    word ptr [edx + ecx*2], ax
        mov    cx, word ptr [ebx + 0xa]
        mov    eax, dword ptr [ebx + 0x50]
        xor    edx, edx
        mov    dx, word ptr [ebx + 0x54]
        inc    cx
        mov    word ptr [eax + edx*2 + 2], cx
        mov    cx, word ptr [ebx + 0xa]
        mov    eax, dword ptr [ebx + 0x50]
        xor    edx, edx
        mov    dx, word ptr [ebx + 0x54]
        add    cx, 2
        mov    word ptr [eax + edx*2 + 4], cx
        mov    ecx, dword ptr [ebp - 0xc4]
        mov    eax, 3
        add    word ptr [ebx + 0xa], ax
        add    word ptr [ebx + 0x54], ax
        mov    eax, dword ptr [ebp + 0x18]
        dec    eax
        mov    dword ptr [ebp + 8], ecx
        mov    dword ptr [ebp + 0x18], eax
        jne    L_32b0
L_35b1:
        mov    esi, dword ptr [ebp - 0x10]
        mov    edx, dword ptr [ebp - 0xc0]
        mov    eax, dword ptr [ebp - 0x1c]
        mov    ecx, dword ptr [ebp - 0x68]
        add    esi, edx
        inc    eax
        cmp    eax, ecx
        mov    dword ptr [ebp - 0x10], esi
        mov    dword ptr [ebp - 0x1c], eax
        jl    L_327d
L_35d1:
        mov    al, byte ptr [ebp + 0x1c]
        test    al, al
        jne    L_35fa
        mov    ecx, dword ptr [ebp - 8]
        mov    eax, dword ptr [ebp + 0x10]
        mov    edi, dword ptr [eax]
        mov    esi, dword ptr [eax + 0xc]
        xor    edx, edx
        mov    dx, word ptr [ecx + 0xa]
        add    edi, edx
        xor    edx, edx
        mov    dx, word ptr [ecx + 0x54]
        mov    dword ptr [eax], edi
        add    esi, edx
        mov    dword ptr [eax + 0xc], esi
        jmp    L_35fd
L_35fa:
        mov    ecx, dword ptr [ebp - 8]
L_35fd:
        cmp    word ptr [ecx + 0xa], 0
        pop    edi
        setne    al
        pop    esi
        mov    byte ptr [ecx + 0x10], al
        mov    eax, dword ptr [ebp - 0x90]
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    0x18
        nop    
        // jump-table data @ 0x00453618 (6 relocated pointers)
        __emit 0x9D
        __emit 0x18
        __emit 0x45
        __emit 0x00
        __emit 0xCC
        __emit 0x18
        __emit 0x45
        __emit 0x00
        __emit 0xD4
        __emit 0x18
        __emit 0x45
        __emit 0x00
        __emit 0xE0
        __emit 0x18
        __emit 0x45
        __emit 0x00
        __emit 0xE6
        __emit 0x18
        __emit 0x45
        __emit 0x00
        __emit 0xEE
        __emit 0x18
        __emit 0x45
        __emit 0x00
        // jump-table data @ 0x00453630 (6 relocated pointers)
        __emit 0x42
        __emit 0x19
        __emit 0x45
        __emit 0x00
        __emit 0x6A
        __emit 0x19
        __emit 0x45
        __emit 0x00
        __emit 0x72
        __emit 0x19
        __emit 0x45
        __emit 0x00
        __emit 0x7E
        __emit 0x19
        __emit 0x45
        __emit 0x00
        __emit 0x84
        __emit 0x19
        __emit 0x45
        __emit 0x00
        __emit 0x8C
        __emit 0x19
        __emit 0x45
        __emit 0x00
        // jump-table data @ 0x00453648 (6 relocated pointers)
        __emit 0x58
        __emit 0x26
        __emit 0x45
        __emit 0x00
        __emit 0xAB
        __emit 0x26
        __emit 0x45
        __emit 0x00
        __emit 0xB7
        __emit 0x26
        __emit 0x45
        __emit 0x00
        __emit 0xE3
        __emit 0x26
        __emit 0x45
        __emit 0x00
        __emit 0xEE
        __emit 0x26
        __emit 0x45
        __emit 0x00
        __emit 0xF9
        __emit 0x26
        __emit 0x45
        __emit 0x00
        // jump-table data @ 0x00453660 (14 relocated pointers)
        __emit 0x95
        __emit 0x26
        __emit 0x45
        __emit 0x00
        __emit 0xD6
        __emit 0x28
        __emit 0x45
        __emit 0x00
        __emit 0xE2
        __emit 0x28
        __emit 0x45
        __emit 0x00
        __emit 0x0E
        __emit 0x29
        __emit 0x45
        __emit 0x00
        __emit 0x19
        __emit 0x29
        __emit 0x45
        __emit 0x00
        __emit 0x24
        __emit 0x29
        __emit 0x45
        __emit 0x00
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
        __emit 0x55
        __emit 0x8B
        __emit 0xEC
        __emit 0x81
        __emit 0xEC
        __emit 0x80
        __emit 0x00
        __emit 0x00
    }
}
