/*
 * FUN_004701a0 (extent 0x4701a0-0x471d48) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076dd60;
extern float  g_007b220c;
extern int    g_007b94a0;
extern int    g_007d9970;
extern int    g_007d9974;
extern int    g_007d9978;
extern int    g_007d997c;
extern int    g_007d9980;
extern int    g_007da5e8;
extern int    g_007da5f4;
extern int    g_007da600;
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
extern void __cdecl FUN_00491cd0(void);
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_004701a0(void)
{
    __asm {
        push    ebp
        mov    ebp, esp
        sub    esp, 0xd0
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi + 0x64]
        test    eax, eax
        mov    dword ptr [ebp - 0x14], esi
        mov    dword ptr [ebp - 0x68], 0
        ja    L_01ca
        mov    byte ptr [esi + 0x10], 0
        xor    eax, eax
        pop    esi
        mov    esp, ebp
        pop    ebp
        ret    0x18
L_01ca:
        cmp    word ptr [esi + 0x56], 0
        mov    eax, dword ptr [esi + 0x18]
        mov    dword ptr [ebp - 0x4c], eax
        jne    L_01e1
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 0x98]
L_01e1:
        mov    eax, dword ptr [g_007da68c]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [g_007da688]
        mov    eax, dword ptr [edx]
        mov    dword ptr [ebp - 0xc], ecx
        mov    ecx, dword ptr [g_007da600]
        push    ebx
        mov    ebx, dword ptr [ecx]
        mov    dword ptr [ebp - 0x24], eax
        mov    eax, dword ptr [ebp + 0x14]
        test    eax, eax
        push    edi
        mov    edi, dword ptr [esi + 0x14]
        mov    dword ptr [ebp - 0x3c], ebx
        je    L_027d
        mov    eax, dword ptr [ebp - 0x4c]
        test    eax, eax
        mov    dword ptr [ebp - 0x28], 0
        jle    L_02bf
L_021f:
        cmp    byte ptr [ebx], 0
        je    L_0254
        mov    eax, dword ptr [ebp - 0x24]
        mov    ecx, dword ptr [ebp + 8]
        mov    edx, dword ptr [ebp - 0x3c]
        push    eax
        push    ecx
        mov    ecx, dword ptr [ebp - 0xc]
        push    edi
        mov    byte ptr [edx], 0
        call    FUN_0041cb30
        mov    edx, dword ptr [g_007da65c]
        mov    ebx, dword ptr [edx]
        add    ebx, dword ptr [ebp - 0x28]
        mov    ecx, dword ptr [ebp + 0x14]
        push    edi
        call    FUN_00421f00
        mov    byte ptr [ebx], al
        mov    ebx, dword ptr [ebp - 0x3c]
L_0254:
        mov    ecx, dword ptr [ebp - 0x24]
        mov    eax, dword ptr [ebp - 0x28]
        mov    edx, dword ptr [ebp - 0xc]
        add    ecx, 4
        inc    eax
        add    edx, 0x10
        add    edi, 0xc
        mov    dword ptr [ebp - 0x24], ecx
        mov    ecx, dword ptr [ebp - 0x4c]
        inc    ebx
        cmp    eax, ecx
        mov    dword ptr [ebp - 0x28], eax
        mov    dword ptr [ebp - 0xc], edx
        mov    dword ptr [ebp - 0x3c], ebx
        jl    L_021f
        jmp    L_02bf
L_027d:
        mov    eax, dword ptr [ebp - 0x4c]
        test    eax, eax
        jle    L_02bf
        mov    dword ptr [ebp + 0x14], eax
L_0287:
        cmp    byte ptr [ebx], 0
        je    L_02a0
        mov    eax, dword ptr [ebp - 0x24]
        mov    ecx, dword ptr [ebp + 8]
        push    eax
        push    ecx
        mov    ecx, dword ptr [ebp - 0xc]
        push    edi
        mov    byte ptr [ebx], 0
        call    FUN_0041cb30
L_02a0:
        mov    eax, dword ptr [ebp - 0xc]
        mov    edx, dword ptr [ebp - 0x24]
        add    eax, 0x10
        mov    dword ptr [ebp - 0xc], eax
        mov    eax, dword ptr [ebp + 0x14]
        add    edx, 4
        add    edi, 0xc
        inc    ebx
        dec    eax
        mov    dword ptr [ebp - 0x24], edx
        mov    dword ptr [ebp + 0x14], eax
        jne    L_0287
L_02bf:
        mov    edi, dword ptr [esi + 0x24]
        and    edi, 0x3fff
        mov    edx, dword ptr [esi + 0x64]
        mov    dword ptr [ebp - 0xc0], 0
        mov    dword ptr [ebp - 4], 0
        mov    dword ptr [ebp - 0x4c], edx
        mov    byte ptr [ebp + 0x17], 0
        mov    dword ptr [ebp - 0x74], 0
        mov    dword ptr [ebp - 0x6c], 0
        je    L_03ac
        test    edi, edi
        jle    L_03ac
        mov    eax, dword ptr [g_007da848]
        mov    ebx, dword ptr [eax + edi*4 + 0x24]
        test    ebx, ebx
        je    L_03ac
        mov    edx, dword ptr [ebx]
        push    0
        mov    ecx, ebx
        call    dword ptr [edx + 4]
        mov    ecx, eax
        call    FUN_00491cd0
        cmp    eax, 0x100
        jl    L_0333
        mov    dword ptr [g_007da864], 1
        jmp    L_038e
L_0333:
        cmp    eax, 0x80
        jl    L_0346
        mov    dword ptr [g_007da864], 2
        jmp    L_038e
L_0346:
        cmp    eax, 0x40
        jl    L_0357
        mov    dword ptr [g_007da864], 4
        jmp    L_038e
L_0357:
        cmp    eax, 0x20
        jl    L_0368
        mov    dword ptr [g_007da864], 8
        jmp    L_038e
L_0368:
        cmp    eax, 0x10
        jl    L_0379
        mov    dword ptr [g_007da864], 0x10
        jmp    L_038e
L_0379:
        xor    ecx, ecx
        cmp    eax, 8
        setl    cl
        dec    ecx
        and    ecx, 0xffffffe0
        add    ecx, 0x40
        mov    dword ptr [g_007da864], ecx
L_038e:
        mov    al, byte ptr [ebx + 0x24]
        test    al, al
        jne    L_03d7
        mov    eax, dword ptr [ebx + 0x28]
        test    eax, eax
        je    L_03d7
        mov    edx, dword ptr [eax + 0xc]
        mov    eax, dword ptr [eax + 0x1c]
        mov    byte ptr [ebp + 0x17], 1
        mov    dword ptr [ebp - 0x74], edx
        mov    dword ptr [ebp - 0x6c], eax
L_03ac:
        test    dword ptr [esi + 0x68], 0x3fff
        mov    byte ptr [ebp - 0x29], 0
        mov    dword ptr [ebp - 0xd0], 0
        mov    dword ptr [ebp - 0xcc], 0
        je    L_0413
        xor    ecx, ecx
        cmp    edi, ecx
        jg    L_03dd
        xor    edi, edi
        jmp    L_03e7
L_03d7:
        mov    byte ptr [ebp + 0x17], 0
        jmp    L_03ac
L_03dd:
        mov    edx, dword ptr [g_007da848]
        mov    edi, dword ptr [edx + edi*4 + 0x24]
L_03e7:
        mov    al, byte ptr [edi + 0x24]
        test    al, al
        jne    L_040d
        mov    edi, dword ptr [edi + 0x28]
        cmp    edi, ecx
        je    L_040d
        mov    eax, dword ptr [edi + 0xc]
        mov    edx, dword ptr [edi + 0x1c]
        mov    byte ptr [ebp - 0x29], 1
        mov    dword ptr [ebp - 0xd0], eax
        mov    dword ptr [ebp - 0xcc], edx
        jmp    L_0415
L_040d:
        mov    byte ptr [ebp - 0x29], 0
        jmp    L_0415
L_0413:
        xor    ecx, ecx
L_0415:
        mov    eax, dword ptr [esi + 0x18]
        cmp    eax, 0x100
        mov    dword ptr [ebp - 0x48], ecx
        mov    dword ptr [ebp - 0x24], eax
        jle    L_042c
        mov    dword ptr [ebp - 0x24], 0x100
L_042c:
        cmp    word ptr [esi + 0x56], cx
        mov    dword ptr [ebp - 0x78], ecx
        mov    dword ptr [ebp - 0x58], ecx
        jne    L_0442
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [eax + 0x98]
L_0442:
        mov    edx, dword ptr [g_007da600]
        mov    ecx, dword ptr [edx + 4]
        mov    edi, dword ptr [edx]
        mov    edx, ecx
        shr    ecx, 2
        xor    eax, eax
        rep stosd
        mov    ecx, edx
        and    ecx, 3
        rep stosb
        mov    eax, dword ptr [ebp - 0x4c]
        xor    edx, edx
        xor    ecx, ecx
        test    eax, eax
        mov    dword ptr [ebp - 0x28], edx
        mov    dword ptr [ebp - 8], ecx
        jle    L_160c
L_0472:
        mov    edi, dword ptr [g_007da5e8]
        mov    edi, dword ptr [edi]
        mov    bl, byte ptr [edi + edx]
        mov    eax, dword ptr [esi + 0x60]
        movzx    ax, byte ptr [edx + eax]
        add    edi, edx
        test    bl, bl
        mov    dword ptr [ebp + 8], edi
        jne    L_049d
        and    eax, 0xffff
        add    ecx, eax
        mov    dword ptr [ebp - 8], ecx
        jmp    L_15fd
L_049d:
        and    eax, 0xffff
        lea    edx, [eax + ecx]
        xor    ebx, ebx
        cmp    ecx, edx
        mov    edi, 0x3f
        mov    dword ptr [g_007d9978], edi
        mov    dword ptr [g_007d9974], ebx
        mov    dword ptr [ebp - 0x54], edx
        mov    eax, ecx
        jge    L_04fe
        mov    ecx, dword ptr [g_007da688]
        mov    edx, dword ptr [ecx]
        mov    ecx, dword ptr [esi + 0x48]
        mov    dword ptr [ebp - 0x44], edx
        mov    dword ptr [ebp - 0x60], ecx
L_04d2:
        mov    ecx, dword ptr [ebp - 0x60]
        xor    edx, edx
        mov    dl, byte ptr [ecx + eax]
        mov    ecx, dword ptr [ebp - 0x44]
        lea    ecx, [ecx + edx*4]
        mov    edx, dword ptr [ecx]
        mov    ecx, dword ptr [ebp - 0x54]
        and    edi, edx
        or    ebx, edx
        inc    eax
        cmp    eax, ecx
        jl    L_04d2
        test    edi, edi
        mov    dword ptr [g_007d9974], ebx
        mov    dword ptr [g_007d9978], edi
        je    L_0509
L_04fe:
        mov    edx, dword ptr [ebp + 8]
        mov    byte ptr [edx], 0
        jmp    L_15ef
L_0509:
        test    ebx, ebx
        jne    L_0539
        mov    eax, dword ptr [ebp - 0x68]
        mov    ecx, dword ptr [ebp - 0x14]
        inc    eax
        mov    dword ptr [ebp - 0x68], eax
        mov    eax, dword ptr [ebp - 8]
L_051a:
        mov    edx, dword ptr [ecx + 0x48]
        xor    ebx, ebx
        mov    bl, byte ptr [eax + edx]
        mov    edx, dword ptr [g_007da600]
        mov    edx, dword ptr [edx]
        inc    eax
        mov    byte ptr [ebx + edx], 1
        cmp    eax, dword ptr [ebp - 0x54]
        jl    L_051a
        jmp    L_15ef
L_0539:
        cmp    dword ptr [ebx*4 + 0x7b2478], 1
        mov    dword ptr [ebp - 0x1c], 0
        jne    L_0a7d
        mov    ecx, dword ptr [ebp - 8]
L_0551:
        mov    eax, dword ptr [ebp - 0x14]
        mov    eax, dword ptr [eax + 0x48]
        xor    edx, edx
        mov    dl, byte ptr [eax + ecx]
        inc    ecx
        mov    dword ptr [ebp - 0x44], ecx
        mov    edi, edx
        cmp    ecx, dword ptr [ebp - 0x54]
        jl    L_056a
        mov    ecx, dword ptr [ebp - 8]
L_056a:
        mov    esi, dword ptr [ebp - 0x1c]
        xor    ebx, ebx
        mov    bl, byte ptr [eax + ecx]
        mov    eax, dword ptr [ebp - 0x78]
        and    esi, 0xffff
        add    esi, eax
        mov    eax, dword ptr [g_007da688]
        mov    ecx, dword ptr [eax]
        mov    eax, dword ptr [ecx + edi*4]
        test    eax, eax
        mov    dword ptr [g_007d9970], eax
        jne    L_064c
        mov    ecx, dword ptr [g_007da68c]
        mov    edx, dword ptr [ecx]
        mov    eax, edi
        shl    eax, 4
        add    eax, edx
        mov    edx, dword ptr [g_007da684]
        mov    ecx, esi
        shl    ecx, 4
        add    ecx, dword ptr [edx]
        mov    edx, dword ptr [eax]
        mov    dword ptr [ecx], edx
        mov    edx, dword ptr [eax + 4]
        mov    dword ptr [ecx + 4], edx
        mov    edx, dword ptr [eax + 8]
        mov    eax, dword ptr [eax + 0xc]
        mov    dword ptr [ecx + 8], edx
        mov    edx, dword ptr [g_007da680]
        mov    dword ptr [ecx + 0xc], eax
        mov    ecx, dword ptr [ebp - 0x14]
        mov    eax, dword ptr [ecx + 0x1c]
        mov    ecx, dword ptr [edx]
        mov    edx, dword ptr [eax + edi*8]
        mov    dword ptr [ecx + esi*8], edx
        mov    edx, dword ptr [eax + edi*8 + 4]
        mov    dword ptr [ecx + esi*8 + 4], edx
        mov    ecx, dword ptr [ebp - 0x24]
        lea    edx, [edi + ecx]
        mov    eax, dword ptr [eax + edx*8]
        mov    ecx, dword ptr [g_007d9980]
        mov    ecx, dword ptr [ecx]
        mov    dword ptr [ecx + esi*8], eax
        mov    eax, dword ptr [ebp - 0x14]
        mov    eax, dword ptr [eax + 0x1c]
        mov    edx, dword ptr [eax + edx*8 + 4]
        mov    eax, dword ptr [ebp - 0x14]
        mov    al, byte ptr [eax + 0x13]
        test    al, al
        mov    byte ptr [ebp + 0xb], 1
        mov    dword ptr [ecx + esi*8 + 4], edx
        jbe    L_062b
        test    al, 1
        je    L_062b
        mov    ecx, dword ptr [g_007da65c]
        mov    edx, dword ptr [ecx]
        mov    eax, dword ptr [g_007da660]
        mov    ecx, dword ptr [eax]
        mov    dl, byte ptr [edx + edi]
        mov    byte ptr [esi + ecx], dl
L_062b:
        mov    eax, dword ptr [g_007da688]
        mov    edx, dword ptr [ebp - 0x1c]
        mov    ecx, dword ptr [eax]
        mov    eax, dword ptr [ecx + ebx*4]
        inc    edx
        inc    esi
        test    eax, eax
        mov    dword ptr [ebp - 0x1c], edx
        je    L_0a5b
        mov    eax, dword ptr [g_007d9970]
        jmp    L_065a
L_064c:
        cmp    dword ptr [ecx + ebx*4], 0
        mov    byte ptr [ebp + 0xb], 0
        jne    L_0a5b
L_065a:
        or    eax, dword ptr [ecx + ebx*4]
        xor    ecx, ecx
        mov    edx, 1
        mov    dword ptr [g_007d9970], eax
        mov    dword ptr [ebp - 0xc], ecx
L_066c:
        test    edx, eax
        jne    L_0681
        shl    edx, 1
        inc    ecx
        cmp    cx, 6
        jb    L_066c
        mov    dword ptr [ebp - 0xc], ecx
        jmp    L_07a1
L_0681:
        cmp    byte ptr [ebp + 0xb], 1
        mov    dword ptr [ebp - 0xc], ecx
        jne    L_071a
        mov    ecx, dword ptr [g_007da68c]
        mov    edx, dword ptr [ecx]
        mov    eax, ebx
        mov    ecx, edi
        shl    eax, 4
        shl    ecx, 4
        add    eax, edx
        add    ecx, edx
        mov    edx, dword ptr [ebp - 0xc]
        and    edx, 0xffff
        cmp    edx, 5
        mov    dword ptr [ebp - 0x20], edx
        ja    L_06f9
        jmp    dword ptr [edx*4 + 0x471d48]
        fld    dword ptr [ecx]
        fld    dword ptr [eax]
        jmp    L_06d6
        fld    dword ptr [ecx + 8]
        fld    dword ptr [eax + 8]
        jmp    L_06d6
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx + 8]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 8]
L_06d6:
        fld    st(1)
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_078e
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        mov    dword ptr [ebp - 4], 0
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        jmp    L_079b
L_06f9:
        push    0x76df04
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_0782
        int 3    
        mov    edx, dword ptr [ebp - 0x20]
        mov    dword ptr [ebp - 4], 0
        jmp    L_079b
L_071a:
        mov    edx, dword ptr [g_007da68c]
        mov    edx, dword ptr [edx]
        mov    eax, edi
        mov    ecx, ebx
        shl    eax, 4
        shl    ecx, 4
        add    eax, edx
        add    ecx, edx
        mov    edx, dword ptr [ebp - 0xc]
        and    edx, 0xffff
        cmp    edx, 5
        mov    dword ptr [ebp - 0x20], edx
        ja    L_0770
        jmp    dword ptr [edx*4 + 0x471d60]
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx + 4]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 4]
        jmp    L_06d6
        fld    dword ptr [ecx + 4]
        fld    dword ptr [eax + 4]
        jmp    L_06d6
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax]
        jmp    L_06d6
L_0770:
        push    0x76df04
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_0782
        int 3    
L_0782:
        mov    edx, dword ptr [ebp - 0x20]
        mov    dword ptr [ebp - 4], 0
        jmp    L_079b
L_078e:
        fld    st(1)
        fsub st(0), st(1)
        fdivr st(0), st(2)
        fstp    dword ptr [ebp - 4]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_079b:
        mov    dword ptr [ebp - 0xc0], edx
L_07a1:
        cmp    byte ptr [ebp + 0xb], 1
        mov    eax, dword ptr [g_007da68c]
        mov    ecx, dword ptr [eax]
        jne    L_090a
        mov    edx, dword ptr [g_007da684]
        mov    edx, dword ptr [edx]
        mov    eax, ebx
        shl    eax, 4
        add    eax, ecx
        mov    dword ptr [ebp + 8], eax
        mov    eax, edi
        shl    eax, 4
        add    eax, ecx
        mov    ecx, esi
        shl    ecx, 4
        add    ecx, edx
        mov    edx, dword ptr [ebp + 8]
        fld    dword ptr [edx]
        fsub    dword ptr [eax]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax]
        fstp    dword ptr [ecx]
        fld    dword ptr [edx + 4]
        fsub    dword ptr [eax + 4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax + 4]
        fstp    dword ptr [ecx + 4]
        fld    dword ptr [edx + 8]
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax + 8]
        fstp    dword ptr [ecx + 8]
        fld    dword ptr [edx + 0xc]
        fsub    dword ptr [eax + 0xc]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax + 0xc]
        mov    eax, dword ptr [ebp - 0xc0]
        mov    edx, dword ptr [eax*8 + 0x7b2408]
        test    edx, edx
        fstp    dword ptr [ecx + 0xc]
        je    L_0829
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [g_007b220c]
        jmp    L_082f
L_0829:
        fld    dword ptr [g_007b220c]
L_082f:
        mov    eax, dword ptr [eax*8 + 0x7b2404]
        fstp    dword ptr [ecx + eax*4]
        mov    ecx, dword ptr [ebp - 0x14]
        mov    eax, dword ptr [ecx + 0x1c]
        fld    dword ptr [eax + ebx*8]
        mov    ecx, dword ptr [g_007da680]
        fsub    dword ptr [eax + edi*8]
        mov    ecx, dword ptr [ecx]
        lea    edx, [esi*8]
        add    ecx, edx
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax + edi*8]
        fstp    dword ptr [ecx]
        fld    dword ptr [eax + ebx*8 + 4]
        fsub    dword ptr [eax + edi*8 + 4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax + edi*8 + 4]
        fstp    dword ptr [ecx + 4]
        mov    ecx, dword ptr [ebp - 0x24]
        add    ecx, ebx
        lea    ecx, [eax + ecx*8]
        mov    dword ptr [ebp + 8], ecx
        mov    ecx, dword ptr [ebp - 0x24]
        add    ecx, edi
        lea    eax, [eax + ecx*8]
        mov    ecx, dword ptr [g_007d9980]
        mov    ecx, dword ptr [ecx]
        add    ecx, edx
        mov    edx, dword ptr [ebp + 8]
        fld    dword ptr [edx]
        fsub    dword ptr [eax]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax]
        fstp    dword ptr [ecx]
        fld    dword ptr [edx + 4]
        mov    edx, dword ptr [ebp - 0x14]
        fsub    dword ptr [eax + 4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax + 4]
        mov    al, byte ptr [edx + 0x13]
        test    al, al
        fstp    dword ptr [ecx + 4]
        jbe    L_0a58
        test    al, 1
        je    L_0a58
        mov    eax, dword ptr [g_007da65c]
        mov    eax, dword ptr [eax]
        mov    cl, byte ptr [eax + edi]
        xor    edx, edx
        mov    dl, byte ptr [eax + ebx]
        mov    byte ptr [ebp - 0xc8], cl
        mov    edi, dword ptr [ebp - 0xc8]
        mov    eax, dword ptr [g_007da660]
        mov    ecx, dword ptr [eax]
        and    edi, 0xff
        mov    dword ptr [ebp - 0x34], edi
        sub    edx, edi
        mov    dword ptr [ebp + 8], edx
        fild    dword ptr [ebp + 8]
        fmul    dword ptr [ebp - 4]
        fiadd    dword ptr [ebp - 0x34]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [ebp + 8]
        mov    dl, byte ptr [ebp + 8]
        jmp    L_0a55
L_090a:
        mov    edx, dword ptr [g_007da684]
        mov    edx, dword ptr [edx]
        mov    eax, edi
        shl    eax, 4
        add    eax, ecx
        mov    dword ptr [ebp + 8], eax
        mov    eax, ebx
        shl    eax, 4
        add    eax, ecx
        mov    ecx, esi
        shl    ecx, 4
        add    ecx, edx
        mov    edx, dword ptr [ebp + 8]
        fld    dword ptr [edx]
        fsub    dword ptr [eax]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax]
        fstp    dword ptr [ecx]
        fld    dword ptr [edx + 4]
        fsub    dword ptr [eax + 4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax + 4]
        fstp    dword ptr [ecx + 4]
        fld    dword ptr [edx + 8]
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax + 8]
        fstp    dword ptr [ecx + 8]
        fld    dword ptr [edx + 0xc]
        fsub    dword ptr [eax + 0xc]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax + 0xc]
        mov    eax, dword ptr [ebp - 0xc0]
        mov    edx, dword ptr [eax*8 + 0x7b2408]
        test    edx, edx
        fstp    dword ptr [ecx + 0xc]
        je    L_0981
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [g_007b220c]
        jmp    L_0987
L_0981:
        fld    dword ptr [g_007b220c]
L_0987:
        mov    eax, dword ptr [eax*8 + 0x7b2404]
        fstp    dword ptr [ecx + eax*4]
        mov    ecx, dword ptr [ebp - 0x14]
        mov    eax, dword ptr [ecx + 0x1c]
        fld    dword ptr [eax + edi*8]
        mov    ecx, dword ptr [g_007da680]
        fsub    dword ptr [eax + ebx*8]
        mov    ecx, dword ptr [ecx]
        lea    edx, [esi*8]
        add    ecx, edx
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax + ebx*8]
        fstp    dword ptr [ecx]
        fld    dword ptr [eax + edi*8 + 4]
        fsub    dword ptr [eax + ebx*8 + 4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax + ebx*8 + 4]
        fstp    dword ptr [ecx + 4]
        mov    ecx, dword ptr [ebp - 0x24]
        add    ecx, edi
        lea    ecx, [eax + ecx*8]
        mov    dword ptr [ebp + 8], ecx
        mov    ecx, dword ptr [ebp - 0x24]
        add    ecx, ebx
        lea    eax, [eax + ecx*8]
        mov    ecx, dword ptr [g_007d9980]
        mov    ecx, dword ptr [ecx]
        add    ecx, edx
        mov    edx, dword ptr [ebp + 8]
        fld    dword ptr [edx]
        fsub    dword ptr [eax]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax]
        fstp    dword ptr [ecx]
        fld    dword ptr [edx + 4]
        mov    edx, dword ptr [ebp - 0x14]
        fsub    dword ptr [eax + 4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax + 4]
        mov    al, byte ptr [edx + 0x13]
        test    al, al
        fstp    dword ptr [ecx + 4]
        jbe    L_0a58
        test    al, 1
        je    L_0a58
        mov    eax, dword ptr [g_007da65c]
        mov    eax, dword ptr [eax]
        mov    cl, byte ptr [eax + ebx]
        xor    edx, edx
        mov    dl, byte ptr [eax + edi]
        mov    byte ptr [ebp - 0xc4], cl
        mov    ecx, dword ptr [ebp - 0xc4]
        mov    eax, dword ptr [g_007da660]
        and    ecx, 0xff
        mov    dword ptr [ebp - 0x34], ecx
        sub    edx, ecx
        mov    ecx, dword ptr [eax]
        mov    dword ptr [ebp + 8], edx
        fild    dword ptr [ebp + 8]
        fmul    dword ptr [ebp - 4]
        fiadd    dword ptr [ebp - 0x34]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [ebp + 8]
        mov    dl, byte ptr [ebp + 8]
L_0a55:
        mov    byte ptr [esi + ecx], dl
L_0a58:
        inc    dword ptr [ebp - 0x1c]
L_0a5b:
        mov    ecx, dword ptr [ebp - 0x44]
        cmp    ecx, dword ptr [ebp - 0x54]
        jl    L_0551
        mov    eax, dword ptr [g_007da670]
        mov    ecx, dword ptr [eax]
        mov    eax, dword ptr [ebp - 0x1c]
        mov    edx, dword ptr [ebp - 0x58]
        mov    word ptr [ecx + edx*2], ax
        jmp    L_15c5
L_0a7d:
        mov    edx, dword ptr [g_007da66c]
        mov    eax, dword ptr [edx + 0x40]
        mov    ebx, dword ptr [edx + 0x30]
        mov    ecx, dword ptr [edx + 0x48]
        mov    dword ptr [ebp - 0x90], eax
        mov    al, byte ptr [esi + 0x13]
        test    al, al
        mov    dword ptr [ebp - 0x98], ebx
        mov    dword ptr [ebp - 0x8c], ecx
        mov    byte ptr [ebp - 0x3c], al
        jbe    L_0aed
        mov    edi, eax
        and    edi, 0xff
        lea    eax, [edx + 0x50]
        mov    dword ptr [ebp + 8], 1
        mov    dword ptr [ebp - 0x18], edi
        lea    ecx, [ebp - 0x88]
        mov    edx, 2
        jmp    L_0acd
L_0aca:
        mov    edi, dword ptr [ebp - 0x18]
L_0acd:
        test    dword ptr [ebp + 8], edi
        je    L_0adc
        mov    edi, dword ptr [eax]
        mov    dword ptr [ecx], edi
        mov    ebx, dword ptr [ebp - 0x98]
L_0adc:
        mov    edi, dword ptr [ebp + 8]
        shl    edi, 1
        add    eax, 8
        add    ecx, 4
        dec    edx
        mov    dword ptr [ebp + 8], edi
        jne    L_0aca
L_0aed:
        mov    edx, dword ptr [g_007da68c]
        mov    edi, dword ptr [ebp - 8]
        mov    ecx, dword ptr [edx]
        mov    esi, dword ptr [esi + 0x1c]
        xor    eax, eax
        mov    dword ptr [ebp - 0x10], edi
        mov    dword ptr [ebp - 0xc], eax
        mov    dword ptr [ebp - 0x34], ecx
        mov    dword ptr [ebp - 0x5c], esi
L_0b09:
        mov    ecx, dword ptr [ebp - 0x60]
        xor    edx, edx
        mov    dl, byte ptr [ecx + edi]
        and    eax, 0xffff
        mov    dword ptr [ebp - 0x20], eax
        shl    eax, 4
        mov    edi, edx
        mov    edx, dword ptr [ebp - 0x34]
        mov    ecx, edi
        shl    ecx, 4
        add    ecx, edx
        mov    edx, dword ptr [ecx]
        mov    dword ptr [eax + ebx], edx
        mov    edx, dword ptr [ecx + 4]
        mov    dword ptr [eax + ebx + 4], edx
        mov    edx, dword ptr [ecx + 8]
        mov    ecx, dword ptr [ecx + 0xc]
        mov    dword ptr [eax + ebx + 8], edx
        mov    edx, dword ptr [esi + edi*8]
        mov    dword ptr [eax + ebx + 0xc], ecx
        mov    ecx, dword ptr [ebp - 0x90]
        mov    dword ptr [eax + ecx], edx
        mov    edx, dword ptr [esi + edi*8 + 4]
        mov    dword ptr [eax + ecx + 4], edx
        mov    edx, dword ptr [ebp - 0x24]
        add    edx, edi
        mov    esi, dword ptr [esi + edx*8]
        mov    dword ptr [eax + ecx + 8], esi
        mov    esi, dword ptr [ebp - 0x5c]
        mov    edx, dword ptr [esi + edx*8 + 4]
        mov    dword ptr [eax + ecx + 0xc], edx
        mov    eax, dword ptr [ebp - 0x44]
        mov    edx, dword ptr [eax + edi*4]
        mov    ecx, dword ptr [ebp - 0x20]
        mov    eax, dword ptr [ebp - 0x8c]
        mov    dword ptr [eax + ecx*4], edx
        mov    edx, dword ptr [ebp - 0x3c]
        test    dl, dl
        jbe    L_0bdf
        lea    eax, [ebp - 0x88]
        mov    dword ptr [ebp - 0x38], eax
        and    edx, 0xff
        mov    eax, 0x7da65c
        mov    dword ptr [ebp + 8], 1
        mov    dword ptr [ebp - 0x18], edx
        mov    dword ptr [ebp - 0x64], eax
        jmp    L_0bac
L_0ba9:
        mov    edx, dword ptr [ebp - 0x18]
L_0bac:
        test    dword ptr [ebp + 8], edx
        je    L_0bc3
        mov    edx, dword ptr [eax]
        mov    eax, dword ptr [edx]
        mov    edx, dword ptr [ebp - 0x38]
        mov    al, byte ptr [eax + edi]
        mov    edx, dword ptr [edx]
        mov    byte ptr [ecx + edx], al
        mov    eax, dword ptr [ebp - 0x64]
L_0bc3:
        add    dword ptr [ebp - 0x38], 4
        mov    edx, dword ptr [ebp + 8]
        add    eax, 8
        shl    edx, 1
        cmp    eax, 0x7da66c
        mov    dword ptr [ebp - 0x64], eax
        mov    dword ptr [ebp + 8], edx
        jl    L_0ba9
        mov    edx, dword ptr [ebp - 0x3c]
L_0bdf:
        mov    edi, dword ptr [ebp - 0x10]
        mov    eax, dword ptr [ebp - 0xc]
        mov    ecx, dword ptr [ebp - 0x54]
        inc    edi
        inc    eax
        cmp    edi, ecx
        mov    dword ptr [ebp - 0x10], edi
        mov    dword ptr [ebp - 0xc], eax
        jl    L_0b09
        mov    word ptr [ebp - 0x80], ax
        mov    eax, dword ptr [g_007da66c]
        mov    ecx, dword ptr [eax]
        mov    dword ptr [ebp - 0xbc], ecx
        mov    ecx, dword ptr [eax + 0x10]
        xor    edi, edi
        test    dl, dl
        mov    dword ptr [ebp - 0xb4], ecx
        mov    ecx, dword ptr [eax + 0x18]
        mov    dword ptr [ebp - 0xa0], edi
        mov    dword ptr [ebp - 0xb0], ecx
        jbe    L_0c64
        and    edx, 0xff
        mov    dword ptr [ebp + 8], 1
        mov    dword ptr [ebp - 0x18], edx
        lea    ecx, [ebp - 0xac]
        add    eax, 0x20
        mov    esi, 2
        jmp    L_0c4a
L_0c47:
        mov    edx, dword ptr [ebp - 0x18]
L_0c4a:
        test    dword ptr [ebp + 8], edx
        je    L_0c53
        mov    edx, dword ptr [eax]
        mov    dword ptr [ecx], edx
L_0c53:
        mov    edx, dword ptr [ebp + 8]
        shl    edx, 1
        add    eax, 8
        add    ecx, 4
        dec    esi
        mov    dword ptr [ebp + 8], edx
        jne    L_0c47
L_0c64:
        mov    esi, dword ptr [ebp - 0x14]
        mov    word ptr [ebp - 0xa4], 0
        mov    dword ptr [ebp + 8], 1
        mov    dword ptr [ebp - 0x34], 4
L_0c7e:
        mov    dword ptr [ebp - 0x38], 0
        mov    dword ptr [ebp - 0x20], 0x7b2404
        mov    dword ptr [ebp - 0x5c], 6
L_0c93:
        mov    eax, dword ptr [ebp + 8]
        test    dword ptr [g_007d9974], eax
        je    L_1415
        mov    ecx, dword ptr [ebp - 0x80]
        and    ecx, 0xffff
        mov    dword ptr [ebp - 0x10], 0
        mov    dword ptr [ebp - 0x60], ecx
        jle    L_12fe
        mov    eax, dword ptr [ebp - 0x8c]
        mov    edx, dword ptr [ebp - 0x90]
        mov    dword ptr [ebp - 0x9c], eax
        mov    eax, edx
        sub    eax, ebx
        mov    dword ptr [ebp - 0xc], edx
        lea    esi, [ebx + 8]
        mov    dword ptr [ebp - 0x1c], eax
        jmp    L_0ce2
L_0cdc:
        mov    edx, dword ptr [ebp - 0x90]
L_0ce2:
        mov    eax, dword ptr [ebp - 0x10]
        lea    edi, [eax + 1]
        xor    eax, eax
        cmp    edi, ecx
        mov    ecx, dword ptr [ebp - 0x9c]
        setge    al
        mov    dword ptr [ebp - 0x44], edi
        dec    eax
        and    edi, eax
        mov    eax, dword ptr [ecx]
        mov    ecx, dword ptr [ebp + 8]
        test    ecx, eax
        mov    dword ptr [ebp - 0x64], edi
        mov    dword ptr [g_007d9970], eax
        jne    L_0e1e
        mov    edx, dword ptr [ebp - 0xa4]
        mov    edi, dword ptr [esi - 8]
        mov    ecx, dword ptr [ebp - 0xbc]
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
        mov    ecx, dword ptr [ebp - 0x9c]
        mov    ecx, dword ptr [ecx]
        mov    edi, dword ptr [ebp - 0xb0]
        mov    dword ptr [edi + edx*4], ecx
        mov    ecx, dword ptr [ebp - 0xc]
        mov    edi, dword ptr [ecx]
        mov    dword ptr [ebp - 0x50], edx
        mov    edx, dword ptr [ebp - 0xb4]
        mov    dword ptr [eax + edx], edi
        mov    ecx, dword ptr [ecx + 4]
        mov    dword ptr [eax + edx + 4], ecx
        mov    ecx, dword ptr [ebp - 0x1c]
        mov    edi, dword ptr [ecx + esi]
        mov    dword ptr [eax + edx + 8], edi
        mov    ecx, dword ptr [ecx + esi + 4]
        mov    dword ptr [eax + edx + 0xc], ecx
        xor    eax, eax
        mov    eax, dword ptr [ebp - 0x14]
        mov    al, byte ptr [eax + 0x13]
        test    al, al
        jbe    L_0dd7
        mov    ecx, eax
        and    ecx, 0xff
        xor    eax, eax
        mov    dword ptr [ebp + 8], 1
        mov    dword ptr [ebp - 0x18], ecx
        mov    dword ptr [ebp - 0x40], eax
L_0d9f:
        test    dword ptr [ebp + 8], ecx
        je    L_0dc4
        mov    ecx, dword ptr [ebp + eax - 0x88]
        mov    edi, dword ptr [ebp - 0x10]
        mov    cl, byte ptr [ecx + edi]
        mov    eax, dword ptr [ebp + eax - 0xac]
        mov    edi, dword ptr [ebp - 0x50]
        mov    byte ptr [eax + edi], cl
        mov    ecx, dword ptr [ebp - 0x18]
        mov    eax, dword ptr [ebp - 0x40]
L_0dc4:
        mov    edi, dword ptr [ebp + 8]
        add    eax, 4
        shl    edi, 1
        cmp    eax, 8
        mov    dword ptr [ebp - 0x40], eax
        mov    dword ptr [ebp + 8], edi
        jl    L_0d9f
L_0dd7:
        mov    edi, dword ptr [ebp - 0x64]
        mov    eax, dword ptr [ebp - 0x8c]
        mov    ecx, dword ptr [ebp + 8]
        inc    word ptr [ebp - 0xa4]
        test    dword ptr [eax + edi*4], ecx
        je    L_12d1
        mov    eax, dword ptr [ebp - 0x20]
        shl    edi, 4
        cmp    eax, 0x7b242c
        ja    L_0eac
        mov    ecx, dword ptr [ebp - 0x38]
        jmp    dword ptr [ecx*4 + 0x471d78]
        fld    dword ptr [esi + 4]
        fsub    dword ptr [esi - 4]
        fld    dword ptr [ebx + edi + 0xc]
        fsub    dword ptr [ebx + edi + 4]
        jmp    L_0e71
L_0e1e:
        mov    eax, dword ptr [ebp - 0x8c]
        test    dword ptr [eax + edi*4], ecx
        jne    L_12d1
        mov    eax, dword ptr [ebp - 0x20]
        shl    edi, 4
        cmp    eax, 0x7b242c
        ja    L_1096
        mov    eax, dword ptr [ebp - 0x38]
        jmp    dword ptr [eax*4 + 0x471d90]
        fld    dword ptr [ebx + edi + 0xc]
        fsub    dword ptr [ebx + edi + 4]
        fld    dword ptr [esi + 4]
        fsub    dword ptr [esi - 4]
        jmp    L_105b
        fld    dword ptr [esi - 4]
        fld    dword ptr [ebx + edi + 4]
        jmp    L_0e71
        fld    dword ptr [esi + 4]
        fsub    dword ptr [esi - 8]
        fld    dword ptr [ebx + edi + 0xc]
        fsub    dword ptr [ebx + edi]
L_0e71:
        fld    st(1)
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_0ecd
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        mov    dword ptr [ebp - 4], 0
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        jmp    L_0eda
        fld    dword ptr [esi - 8]
        fld    dword ptr [ebx + edi]
        jmp    L_0e71
        fld    dword ptr [esi]
        fld    dword ptr [ebx + edi + 8]
        jmp    L_0e71
        fld    dword ptr [esi + 4]
        fsub    dword ptr [esi]
        fld    dword ptr [ebx + edi + 0xc]
        fsub    dword ptr [ebx + edi + 8]
        jmp    L_0e71
L_0eac:
        push    0x76df04
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_0ebe
        int 3    
L_0ebe:
        mov    edx, dword ptr [ebp - 0xb4]
        mov    dword ptr [ebp - 4], 0
        jmp    L_0eda
L_0ecd:
        fld    st(1)
        fsub st(0), st(1)
        fdivr st(0), st(2)
        fstp    dword ptr [ebp - 4]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_0eda:
        fld    dword ptr [ebx + edi]
        mov    ecx, dword ptr [ebp - 0xa4]
        fsub    dword ptr [esi - 8]
        mov    eax, dword ptr [ebp - 0xbc]
        and    ecx, 0xffff
        mov    dword ptr [ebp - 0x50], ecx
        fmul    dword ptr [ebp - 4]
        shl    ecx, 4
        add    eax, ecx
        fadd    dword ptr [esi - 8]
        fstp    dword ptr [eax]
        fld    dword ptr [ebx + edi + 4]
        fsub    dword ptr [esi - 4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [esi - 4]
        fstp    dword ptr [eax + 4]
        fld    dword ptr [ebx + edi + 8]
        fsub    dword ptr [esi]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [esi]
        fstp    dword ptr [eax + 8]
        fld    dword ptr [ebx + edi + 0xc]
        mov    ebx, dword ptr [ebp - 0x20]
        cmp    dword ptr [ebx + 4], 0
        fsub    dword ptr [esi + 4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [esi + 4]
        fstp    dword ptr [eax + 0xc]
        je    L_0f44
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [g_007b220c]
        jmp    L_0f4a
L_0f44:
        fld    dword ptr [g_007b220c]
L_0f4a:
        mov    ebx, dword ptr [ebp - 0x20]
        mov    ebx, dword ptr [ebx]
        fstp    dword ptr [eax + ebx*4]
        mov    ebx, dword ptr [ebp - 0x90]
        fld    dword ptr [ebx + edi]
        mov    ebx, dword ptr [ebp - 0xc]
        fsub    dword ptr [ebx]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ebx]
        mov    ebx, dword ptr [ebp - 0x90]
        fstp    dword ptr [ecx + edx]
        fld    dword ptr [ebx + edi + 4]
        mov    ebx, dword ptr [ebp - 0xc]
        fsub    dword ptr [ebx + 4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ebx + 4]
        mov    ebx, dword ptr [ebp - 0x90]
        fstp    dword ptr [ecx + edx + 4]
        fld    dword ptr [ebx + edi + 8]
        mov    ebx, dword ptr [ebp - 0x1c]
        fsub    dword ptr [ebx + esi]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ebx + esi]
        mov    ebx, dword ptr [ebp - 0x90]
        fstp    dword ptr [ecx + edx + 8]
        fld    dword ptr [ebx + edi + 0xc]
        mov    edi, dword ptr [ebp - 0x1c]
        fsub    dword ptr [esi + edi + 4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [esi + edi + 4]
        fstp    dword ptr [ecx + edx + 0xc]
        xor    ecx, ecx
        mov    ecx, dword ptr [ebp - 0x14]
        mov    cl, byte ptr [ecx + 0x13]
        test    cl, cl
        jbe    L_1227
        mov    edx, ecx
        and    edx, 0xff
        mov    dword ptr [ebp + 8], 1
        mov    dword ptr [ebp - 0x18], edx
        xor    ecx, ecx
L_0fdc:
        test    dword ptr [ebp + 8], edx
        je    L_1030
        mov    edi, dword ptr [ebp + ecx - 0x88]
        mov    edx, dword ptr [ebp - 0x10]
        mov    dl, byte ptr [edi + edx]
        mov    ebx, dword ptr [ebp - 0x64]
        mov    byte ptr [ebp - 0x70], dl
        mov    edx, dword ptr [ebp - 0x70]
        and    edx, 0xff
        mov    dword ptr [ebp - 0x40], edx
        xor    edx, edx
        mov    dl, byte ptr [edi + ebx]
        sub    edx, dword ptr [ebp - 0x40]
        mov    edi, dword ptr [ebp - 0x50]
        mov    dword ptr [ebp - 0x30], edx
        fild    dword ptr [ebp - 0x30]
        mov    edx, dword ptr [ebp + ecx - 0xac]
        fmul    dword ptr [ebp - 4]
        fiadd    dword ptr [ebp - 0x40]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [ebp - 0x30]
        mov    bl, byte ptr [ebp - 0x30]
        mov    byte ptr [edx + edi], bl
        mov    edx, dword ptr [ebp - 0x18]
L_1030:
        mov    ebx, dword ptr [ebp + 8]
        add    ecx, 4
        shl    ebx, 1
        cmp    ecx, 8
        mov    dword ptr [ebp + 8], ebx
        jl    L_0fdc
        jmp    L_1227
        fld    dword ptr [ebx + edi + 4]
        fld    dword ptr [esi - 4]
        jmp    L_105b
        fld    dword ptr [ebx + edi + 0xc]
        fsub    dword ptr [ebx + edi]
        fld    dword ptr [esi + 4]
        fsub    dword ptr [esi - 8]
L_105b:
        fld    st(1)
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_10b7
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        mov    dword ptr [ebp - 4], 0
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        jmp    L_10c4
        fld    dword ptr [ebx + edi]
        fld    dword ptr [esi - 8]
        jmp    L_105b
        fld    dword ptr [ebx + edi + 8]
        fld    dword ptr [esi]
        jmp    L_105b
        fld    dword ptr [ebx + edi + 0xc]
        fsub    dword ptr [ebx + edi + 8]
        fld    dword ptr [esi + 4]
        fsub    dword ptr [esi]
        jmp    L_105b
L_1096:
        push    0x76df04
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_10a8
        int 3    
L_10a8:
        mov    edx, dword ptr [ebp - 0x90]
        mov    dword ptr [ebp - 4], 0
        jmp    L_10c4
L_10b7:
        fld    st(1)
        fsub st(0), st(1)
        fdivr st(0), st(2)
        fstp    dword ptr [ebp - 4]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_10c4:
        fld    dword ptr [esi - 8]
        mov    ecx, dword ptr [ebp - 0xa4]
        fsub    dword ptr [ebx + edi]
        mov    eax, dword ptr [ebp - 0xbc]
        and    ecx, 0xffff
        mov    dword ptr [ebp - 0x50], ecx
        fmul    dword ptr [ebp - 4]
        shl    ecx, 4
        add    eax, ecx
        fadd    dword ptr [ebx + edi]
        fstp    dword ptr [eax]
        fld    dword ptr [esi - 4]
        fsub    dword ptr [ebx + edi + 4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ebx + edi + 4]
        fstp    dword ptr [eax + 4]
        fld    dword ptr [esi]
        fsub    dword ptr [ebx + edi + 8]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ebx + edi + 8]
        lea    ebx, [ebx + edi + 0xc]
        fstp    dword ptr [eax + 8]
        fld    dword ptr [esi + 4]
        fsub    dword ptr [ebx]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ebx]
        mov    ebx, dword ptr [ebp - 0x20]
        cmp    dword ptr [ebx + 4], 0
        fstp    dword ptr [eax + 0xc]
        je    L_1132
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [g_007b220c]
        jmp    L_1138
L_1132:
        fld    dword ptr [g_007b220c]
L_1138:
        mov    ebx, dword ptr [ebp - 0x20]
        mov    ebx, dword ptr [ebx]
        fstp    dword ptr [eax + ebx*4]
        mov    ebx, dword ptr [ebp - 0xc]
        fld    dword ptr [ebx]
        mov    ebx, dword ptr [ebp - 0xb4]
        fsub    dword ptr [edx + edi]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edx + edi]
        fstp    dword ptr [ecx + ebx]
        mov    ebx, dword ptr [ebp - 0xc]
        fld    dword ptr [ebx + 4]
        mov    ebx, dword ptr [ebp - 0xb4]
        fsub    dword ptr [edx + edi + 4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edx + edi + 4]
        fstp    dword ptr [ecx + ebx + 4]
        mov    ebx, dword ptr [ebp - 0x1c]
        fld    dword ptr [ebx + esi]
        mov    ebx, dword ptr [ebp - 0xb4]
        fsub    dword ptr [edx + edi + 8]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edx + edi + 8]
        lea    edi, [edx + edi + 0xc]
        mov    edx, dword ptr [ebp - 0x1c]
        fstp    dword ptr [ecx + ebx + 8]
        fld    dword ptr [esi + edx + 4]
        fsub    dword ptr [edi]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edi]
        fstp    dword ptr [ecx + ebx + 0xc]
        xor    ecx, ecx
        mov    ecx, dword ptr [ebp - 0x14]
        mov    cl, byte ptr [ecx + 0x13]
        test    cl, cl
        jbe    L_1227
        mov    edx, ecx
        and    edx, 0xff
        mov    dword ptr [ebp + 8], 1
        mov    dword ptr [ebp - 0x18], edx
        xor    ecx, ecx
L_11c3:
        test    dword ptr [ebp + 8], edx
        je    L_1217
        mov    edi, dword ptr [ebp + ecx - 0x88]
        mov    edx, dword ptr [ebp - 0x64]
        mov    dl, byte ptr [edi + edx]
        mov    ebx, dword ptr [ebp - 0x10]
        mov    byte ptr [ebp - 0x7c], dl
        mov    edx, dword ptr [ebp - 0x7c]
        and    edx, 0xff
        mov    dword ptr [ebp - 0x40], edx
        xor    edx, edx
        mov    dl, byte ptr [edi + ebx]
        sub    edx, dword ptr [ebp - 0x40]
        mov    edi, dword ptr [ebp - 0x50]
        mov    dword ptr [ebp - 0x30], edx
        fild    dword ptr [ebp - 0x30]
        mov    edx, dword ptr [ebp + ecx - 0xac]
        fmul    dword ptr [ebp - 4]
        fiadd    dword ptr [ebp - 0x40]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [ebp - 0x30]
        mov    bl, byte ptr [ebp - 0x30]
        mov    byte ptr [edx + edi], bl
        mov    edx, dword ptr [ebp - 0x18]
L_1217:
        mov    ebx, dword ptr [ebp + 8]
        add    ecx, 4
        shl    ebx, 1
        cmp    ecx, 8
        mov    dword ptr [ebp + 8], ebx
        jl    L_11c3
L_1227:
        mov    dword ptr [ebp - 0x30], eax
        mov    dword ptr [ebp - 0x40], 0
        mov    edi, dword ptr [ebp - 0x30]
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
        mov    dword ptr [ebp - 0x40], edx
        mov    eax, dword ptr [ebp - 0x40]
        mov    ecx, dword ptr [ebp - 0xb0]
        mov    edx, dword ptr [ebp - 0x50]
        inc    word ptr [ebp - 0xa4]
        mov    edi, dword ptr [ebp - 0xa0]
        mov    ebx, dword ptr [ebp - 0x98]
        mov    dword ptr [ecx + edx*4], eax
        jmp    L_12d7
L_12d1:
        mov    edi, dword ptr [ebp - 0xa0]
L_12d7:
        mov    ecx, dword ptr [ebp - 0x9c]
        mov    eax, dword ptr [ebp - 0x44]
        add    ecx, 4
        mov    dword ptr [ebp - 0x9c], ecx
        add    dword ptr [ebp - 0xc], 0x10
        mov    ecx, dword ptr [ebp - 0x60]
        add    esi, 0x10
        cmp    eax, ecx
        mov    dword ptr [ebp - 0x10], eax
        jl    L_0cdc
L_12fe:
        mov    ecx, dword ptr [g_007da66c]
        lea    eax, [edi + edi*2]
        shl    eax, 4
        mov    ebx, dword ptr [eax + ecx]
        mov    edx, dword ptr [eax + ecx + 0x10]
        add    eax, ecx
        mov    eax, dword ptr [eax + 0x18]
        xor    ecx, ecx
        mov    ecx, dword ptr [ebp - 0x14]
        mov    cl, byte ptr [ecx + 0x13]
        test    cl, cl
        mov    dword ptr [ebp - 0x98], ebx
        mov    dword ptr [ebp - 0x90], edx
        mov    dword ptr [ebp - 0x8c], eax
        jbe    L_1381
        mov    esi, ecx
        xor    eax, eax
        and    esi, 0xff
        mov    dword ptr [ebp + 8], 1
        mov    dword ptr [ebp - 0x18], esi
        lea    edx, [ebp - 0x88]
        jmp    L_1353
L_1350:
        mov    esi, dword ptr [ebp - 0x18]
L_1353:
        test    dword ptr [ebp + 8], esi
        je    L_1370
        mov    ebx, dword ptr [g_007da66c]
        lea    esi, [edi + edi*2]
        lea    esi, [eax + esi*2]
        mov    esi, dword ptr [ebx + esi*8 + 0x20]
        mov    dword ptr [edx], esi
        mov    ebx, dword ptr [ebp - 0x98]
L_1370:
        mov    esi, dword ptr [ebp + 8]
        inc    eax
        shl    esi, 1
        add    edx, 4
        cmp    eax, 2
        mov    dword ptr [ebp + 8], esi
        jl    L_1350
L_1381:
        mov    dx, word ptr [ebp - 0xa4]
        xor    eax, eax
        test    edi, edi
        sete    al
        mov    word ptr [ebp - 0x80], dx
        mov    edi, eax
        mov    eax, dword ptr [g_007da66c]
        lea    edx, [edi + edi*2]
        shl    edx, 4
        add    eax, edx
        test    cl, cl
        mov    edx, dword ptr [eax]
        mov    dword ptr [ebp - 0xbc], edx
        mov    edx, dword ptr [eax + 0x10]
        mov    eax, dword ptr [eax + 0x18]
        mov    dword ptr [ebp - 0xa0], edi
        mov    dword ptr [ebp - 0xb4], edx
        mov    dword ptr [ebp - 0xb0], eax
        jbe    L_1409
        xor    eax, eax
        and    ecx, 0xff
        mov    dword ptr [ebp + 8], 1
        mov    dword ptr [ebp - 0x18], ecx
        lea    esi, [ebp - 0xac]
L_13de:
        test    dword ptr [ebp + 8], ecx
        je    L_13f8
        lea    ecx, [edi + edi*2]
        lea    edx, [eax + ecx*2]
        mov    ecx, dword ptr [g_007da66c]
        mov    edx, dword ptr [ecx + edx*8 + 0x20]
        mov    ecx, dword ptr [ebp - 0x18]
        mov    dword ptr [esi], edx
L_13f8:
        mov    edx, dword ptr [ebp + 8]
        inc    eax
        shl    edx, 1
        add    esi, 4
        cmp    eax, 2
        mov    dword ptr [ebp + 8], edx
        jl    L_13de
L_1409:
        mov    esi, dword ptr [ebp - 0x14]
        mov    word ptr [ebp - 0xa4], 0
L_1415:
        mov    eax, dword ptr [ebp + 8]
        mov    edx, dword ptr [ebp - 0x38]
        mov    ecx, dword ptr [ebp - 0x20]
        shl    eax, 1
        mov    dword ptr [ebp + 8], eax
        mov    eax, dword ptr [ebp - 0x5c]
        inc    edx
        add    ecx, 8
        dec    eax
        mov    dword ptr [ebp - 0x38], edx
        mov    dword ptr [ebp - 0x20], ecx
        mov    dword ptr [ebp - 0x5c], eax
        jne    L_0c93
        mov    edx, dword ptr [ebp - 0x80]
        xor    eax, eax
        and    edx, 0xffff
        jle    L_1484
        mov    ecx, dword ptr [ebp - 0x8c]
L_144d:
        or    eax, dword ptr [ecx]
        add    ecx, 4
        dec    edx
        jne    L_144d
        test    eax, eax
        je    L_1484
        mov    ecx, dword ptr [ebp - 0x34]
        mov    edx, ecx
        dec    ecx
        test    edx, edx
        mov    dword ptr [ebp - 0x34], ecx
        jne    L_0c7e
        test    eax, eax
        je    L_1484
        mov    eax, dword ptr [g_007da5e8]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [ebp - 0x28]
        mov    byte ptr [ecx + edx], 0
        mov    ecx, dword ptr [ebp - 8]
        jmp    L_15fd
L_1484:
        mov    eax, dword ptr [ebp - 0x80]
        xor    edi, edi
        and    eax, 0xffff
        mov    dword ptr [ebp - 0x10], edi
        mov    dword ptr [ebp - 0x60], eax
        jle    L_15a9
        mov    al, byte ptr [esi + 0x13]
        mov    edx, dword ptr [g_007d9980]
        mov    ecx, dword ptr [edx]
        mov    edx, dword ptr [ebp - 0x90]
        mov    byte ptr [ebp - 0x3c], al
        mov    eax, dword ptr [ebp - 0x78]
        mov    dword ptr [ebp - 0x38], edx
        mov    edx, dword ptr [g_007da684]
        lea    esi, [ecx + eax*8]
        shl    eax, 4
        add    eax, dword ptr [edx]
        mov    edx, dword ptr [ebp - 0x90]
        sub    edx, ebx
        mov    dword ptr [ebp - 0x1c], edx
        mov    edx, dword ptr [g_007da680]
        mov    edx, dword ptr [edx]
        mov    dword ptr [ebp + 8], ecx
        lea    ecx, [ebx + 8]
        sub    edx, dword ptr [ebp + 8]
        mov    dword ptr [ebp - 0x5c], edx
L_14e1:
        mov    ebx, dword ptr [ebp - 0x78]
        add    ebx, edi
        mov    dword ptr [ebp - 0x30], ebx
        mov    ebx, dword ptr [ecx - 8]
        mov    dword ptr [eax], ebx
        mov    ebx, dword ptr [ecx - 4]
        mov    dword ptr [eax + 4], ebx
        mov    ebx, dword ptr [ecx]
        mov    dword ptr [eax + 8], ebx
        mov    ebx, dword ptr [ecx + 4]
        mov    dword ptr [eax + 0xc], ebx
        mov    ebx, dword ptr [ebp - 0x38]
        mov    ebx, dword ptr [ebx]
        mov    dword ptr [edx + esi], ebx
        mov    ebx, dword ptr [ebp - 0x38]
        mov    ebx, dword ptr [ebx + 4]
        mov    dword ptr [edx + esi + 4], ebx
        mov    ebx, dword ptr [ebp - 0x1c]
        mov    ebx, dword ptr [ebx + ecx]
        mov    dword ptr [esi], ebx
        mov    ebx, dword ptr [ebp - 0x1c]
        mov    ebx, dword ptr [ebx + ecx + 4]
        mov    dword ptr [esi + 4], ebx
        mov    ebx, dword ptr [ebp - 0x3c]
        test    bl, bl
        jbe    L_1588
        and    ebx, 0xff
        mov    dword ptr [ebp - 0x18], ebx
        mov    edx, 0x7da660
        lea    ebx, [ebp - 0x88]
        mov    dword ptr [ebp + 8], 1
        mov    dword ptr [ebp - 0x34], edx
        mov    dword ptr [ebp - 0x44], ebx
L_154b:
        mov    ebx, dword ptr [ebp - 0x18]
        test    dword ptr [ebp + 8], ebx
        je    L_156b
        mov    ebx, dword ptr [ebp - 0x44]
        mov    ebx, dword ptr [ebx]
        mov    edx, dword ptr [edx]
        mov    bl, byte ptr [ebx + edi]
        mov    edx, dword ptr [edx]
        mov    edi, dword ptr [ebp - 0x30]
        mov    byte ptr [edx + edi], bl
        mov    edx, dword ptr [ebp - 0x34]
        mov    edi, dword ptr [ebp - 0x10]
L_156b:
        add    dword ptr [ebp - 0x44], 4
        mov    ebx, dword ptr [ebp + 8]
        add    edx, 8
        shl    ebx, 1
        cmp    edx, 0x7da670
        mov    dword ptr [ebp - 0x34], edx
        mov    dword ptr [ebp + 8], ebx
        jl    L_154b
        mov    edx, dword ptr [ebp - 0x5c]
L_1588:
        mov    ebx, dword ptr [ebp - 0x38]
        add    ebx, 0x10
        inc    edi
        mov    dword ptr [ebp - 0x38], ebx
        mov    ebx, dword ptr [ebp - 0x60]
        add    esi, 8
        add    eax, 0x10
        add    ecx, 0x10
        cmp    edi, ebx
        mov    dword ptr [ebp - 0x10], edi
        jl    L_14e1
L_15a9:
        mov    eax, dword ptr [ebp - 0x80]
        mov    ecx, dword ptr [g_007da670]
        mov    edx, dword ptr [ecx]
        mov    cx, word ptr [ebp - 0x80]
        mov    dword ptr [ebp - 0x1c], eax
        mov    eax, dword ptr [ebp - 0x58]
        mov    word ptr [edx + eax*2], cx
        mov    eax, dword ptr [ebp - 0x1c]
L_15c5:
        mov    edx, dword ptr [ebp - 0x78]
        mov    ecx, dword ptr [ebp - 0x58]
        and    eax, 0xffff
        add    edx, eax
        mov    eax, dword ptr [ebp - 0x68]
        inc    ecx
        inc    eax
        mov    dword ptr [ebp - 0x78], edx
        mov    edx, dword ptr [g_007da5e8]
        mov    dword ptr [ebp - 0x58], ecx
        mov    ecx, dword ptr [ebp - 0x28]
        mov    dword ptr [ebp - 0x68], eax
        mov    eax, dword ptr [edx]
        mov    byte ptr [eax + ecx], 0
L_15ef:
        mov    edx, dword ptr [ebp - 0x54]
        mov    esi, dword ptr [ebp - 0x14]
        mov    dword ptr [ebp - 8], edx
        mov    ecx, edx
        mov    edx, dword ptr [ebp - 0x28]
L_15fd:
        mov    eax, dword ptr [ebp - 0x4c]
        inc    edx
        cmp    edx, eax
        mov    dword ptr [ebp - 0x28], edx
        jl    L_0472
L_160c:
        mov    dl, byte ptr [ebp + 0x1c]
        test    dl, dl
        mov    ecx, dword ptr [ebp + 0x10]
        je    L_161b
        mov    eax, dword ptr [ecx + 0x30]
        jmp    L_1628
L_161b:
        mov    eax, dword ptr [ecx]
        mov    edi, dword ptr [ecx + 0x10]
        mov    ecx, dword ptr [ebp + 0x10]
        shl    eax, 5
        add    eax, edi
L_1628:
        xor    ebx, ebx
        test    dl, dl
        mov    dword ptr [esi + 0x44], eax
        mov    word ptr [esi + 0xa], bx
        je    L_163a
        mov    eax, dword ptr [ecx + 0x48]
        jmp    L_1643
L_163a:
        mov    eax, dword ptr [ecx + 0xc]
        mov    ecx, dword ptr [ecx + 0x28]
        lea    eax, [ecx + eax*2]
L_1643:
        mov    edx, dword ptr [g_007da600]
        mov    ecx, dword ptr [edx + 4]
        mov    dword ptr [esi + 0x50], eax
        xor    eax, eax
        cmp    ecx, ebx
        mov    word ptr [esi + 0x54], bx
        mov    dword ptr [ebp - 0x10], ecx
        mov    dword ptr [ebp - 8], eax
        mov    dword ptr [ebp + 8], ebx
        jle    L_17b7
L_1666:
        mov    edx, dword ptr [g_007da600]
        mov    edx, dword ptr [edx]
        cmp    byte ptr [edx + eax], 0
        jne    L_167c
        inc    dword ptr [ebp + 8]
        jmp    L_17ab
L_167c:
        mov    ecx, dword ptr [g_007da5f4]
        mov    dx, word ptr [ebp + 8]
        mov    word ptr [ecx + eax*2], dx
        test    byte ptr [esi + 0x13], 1
        je    L_16ab
        mov    ecx, dword ptr [g_007da65c]
        mov    edx, dword ptr [ecx]
        mov    edi, dword ptr [esi + 0x44]
        mov    dl, byte ptr [edx + eax]
        xor    ecx, ecx
        mov    cx, word ptr [esi + 0xa]
        shl    ecx, 5
        mov    byte ptr [ecx + edi + 0x17], dl
L_16ab:
        mov    ecx, dword ptr [g_007da68c]
        mov    edx, dword ptr [ecx]
        mov    ecx, dword ptr [esi + 0x44]
        mov    eax, dword ptr [esi + 0x1c]
        xor    ebx, ebx
        mov    bx, word ptr [esi + 0xa]
        mov    dword ptr [ebp - 0x70], eax
        mov    dword ptr [ebp - 0x30], edx
        shl    ebx, 5
        add    ebx, ecx
        mov    dword ptr [ebp - 0x7c], ebx
        mov    ecx, dword ptr [ebp - 0x30]
        fld1    
        mov    edi, dword ptr [ebp - 8]
        mov    eax, edi
        shl    eax, 4
        fdiv    dword ptr [eax + ecx + 0xc]
        add    eax, ecx
        mov    edx, dword ptr [ebp - 0x7c]
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
        mov    eax, dword ptr [g_007b94a0]
        mov    ecx, dword ptr [ebp - 0x70]
        mov    dword ptr [ebx + 0x10], eax
        fadd    dword ptr [g_007da874]
        mov    eax, dword ptr [ebp - 8]
        fstp    dword ptr [ebx]
        fld    dword ptr [g_007da878]
        fmul    dword ptr [ebx + 4]
        fadd    dword ptr [g_007da870]
        fstp    dword ptr [ebx + 4]
        mov    edx, dword ptr [ecx + eax*8]
        mov    dword ptr [ebx + 0x18], edx
        mov    eax, dword ptr [ecx + eax*8 + 4]
        mov    dword ptr [ebx + 0x1c], eax
        mov    al, byte ptr [ebp + 0x17]
        test    al, al
        je    L_1770
        mov    edx, dword ptr [esi + 0x44]
        fld    dword ptr [ebp - 0x74]
        xor    ecx, ecx
        mov    cx, word ptr [esi + 0xa]
        shl    ecx, 5
        fadd    dword ptr [ecx + edx + 0x18]
        lea    eax, [ecx + edx + 0x18]
        fstp    dword ptr [eax]
        mov    ecx, dword ptr [esi + 0x44]
        fld    dword ptr [ebp - 0x6c]
        xor    eax, eax
        mov    ax, word ptr [esi + 0xa]
        shl    eax, 5
        fadd    dword ptr [eax + ecx + 0x1c]
        lea    eax, [eax + ecx + 0x1c]
        fstp    dword ptr [eax]
L_1770:
        mov    ecx, dword ptr [ebp - 0x48]
        mov    edx, dword ptr [ebp - 8]
        mov    edi, dword ptr [g_007d997c]
        mov    ebx, dword ptr [edi]
        lea    eax, [ecx*8]
        inc    ecx
        mov    dword ptr [ebp - 0x48], ecx
        mov    ecx, dword ptr [ebp - 0x24]
        add    edx, ecx
        mov    ecx, dword ptr [esi + 0x1c]
        mov    edi, dword ptr [ecx + edx*8]
        mov    edx, dword ptr [ecx + edx*8 + 4]
        mov    ecx, dword ptr [ebp - 0x10]
        add    eax, ebx
        inc    word ptr [esi + 0xa]
        mov    dword ptr [eax], edi
        mov    dword ptr [eax + 4], edx
        mov    eax, dword ptr [ebp - 8]
        xor    ebx, ebx
L_17ab:
        inc    eax
        cmp    eax, ecx
        mov    dword ptr [ebp - 8], eax
        jl    L_1666
L_17b7:
        mov    eax, dword ptr [ebp - 0x4c]
        xor    edx, edx
        cmp    eax, ebx
        mov    dword ptr [ebp - 0x28], ebx
        jle    L_18b1
L_17c7:
        mov    eax, dword ptr [esi + 0x60]
        mov    ecx, dword ptr [g_007da5e8]
        movzx    di, byte ptr [ebx + eax]
        mov    eax, dword ptr [ecx]
        cmp    byte ptr [eax + ebx], 0
        jne    L_17e8
        and    edi, 0xffff
        jmp    L_189e
L_17e8:
        and    edi, 0xffff
        mov    eax, 1
        lea    ecx, [edi - 1]
        cmp    ecx, eax
        mov    dword ptr [ebp - 0x3c], edi
        jle    L_189e
L_1801:
        mov    ebx, dword ptr [g_007da5f4]
        xor    ecx, ecx
        mov    ecx, dword ptr [esi + 0x48]
        mov    cl, byte ptr [edx + ecx]
        mov    edi, ecx
        and    edi, 0xff
        movzx    cx, cl
        sub    cx, word ptr [ebx + edi*2]
        mov    ebx, dword ptr [esi + 0x50]
        xor    edi, edi
        mov    di, word ptr [esi + 0x54]
        mov    word ptr [ebx + edi*2], cx
        mov    edi, dword ptr [esi + 0x48]
        mov    ebx, dword ptr [g_007da5f4]
        lea    ecx, [eax + edx]
        mov    cl, byte ptr [ecx + edi + 1]
        mov    edi, ecx
        and    edi, 0xff
        movzx    cx, cl
        sub    cx, word ptr [ebx + edi*2]
        mov    ebx, dword ptr [esi + 0x50]
        xor    edi, edi
        mov    di, word ptr [esi + 0x54]
        mov    word ptr [ebx + edi*2 + 2], cx
        mov    edi, dword ptr [esi + 0x48]
        mov    ebx, dword ptr [g_007da5f4]
        lea    ecx, [eax + edx]
        mov    cl, byte ptr [ecx + edi]
        mov    edi, ecx
        and    edi, 0xff
        movzx    cx, cl
        sub    cx, word ptr [ebx + edi*2]
        mov    ebx, dword ptr [esi + 0x50]
        xor    edi, edi
        mov    di, word ptr [esi + 0x54]
        mov    word ptr [ebx + edi*2 + 4], cx
        add    word ptr [esi + 0x54], 3
        mov    edi, dword ptr [ebp - 0x3c]
        inc    eax
        lea    ecx, [edi - 1]
        cmp    eax, ecx
        jl    L_1801
        mov    ebx, dword ptr [ebp - 0x28]
L_189e:
        mov    eax, dword ptr [ebp - 0x4c]
        add    edx, edi
        inc    ebx
        cmp    ebx, eax
        mov    dword ptr [ebp - 0x28], ebx
        jl    L_17c7
        xor    ebx, ebx
L_18b1:
        mov    eax, dword ptr [ebp - 0x58]
        cmp    eax, ebx
        jle    L_1c6a
        mov    dword ptr [ebp - 0x28], ebx
        mov    dword ptr [ebp - 8], ebx
L_18c2:
        mov    edx, dword ptr [g_007da670]
        mov    eax, dword ptr [edx]
        mov    ecx, dword ptr [ebp - 0x28]
        mov    ax, word ptr [eax + ecx*2]
        mov    dword ptr [ebp - 0x10], 1
        and    eax, 0xffff
        mov    dword ptr [ebp - 0x3c], eax
        dec    eax
        cmp    eax, 1
        jle    L_1c4d
        mov    edx, dword ptr [ebp - 0x48]
        mov    ecx, dword ptr [ebp - 8]
        mov    esi, dword ptr [ebp - 0x14]
        lea    eax, [edx*8]
        lea    edx, [ecx*8 + 8]
        mov    dword ptr [ebp - 0x34], eax
        mov    dword ptr [ebp + 8], edx
L_1907:
        test    byte ptr [esi + 0x13], 1
        je    L_196a
        mov    eax, dword ptr [g_007da660]
        mov    ecx, dword ptr [eax]
        mov    eax, dword ptr [ebp - 8]
        mov    cl, byte ptr [ecx + eax]
        mov    edi, dword ptr [esi + 0x44]
        xor    edx, edx
        mov    dx, word ptr [esi + 0xa]
        shl    edx, 5
        mov    byte ptr [edx + edi + 0x17], cl
        mov    edi, dword ptr [g_007da660]
        mov    ebx, dword ptr [edi]
        mov    ecx, dword ptr [ebp - 0x10]
        xor    edi, edi
        mov    di, word ptr [esi + 0xa]
        mov    edx, ecx
        add    edx, ebx
        mov    dl, byte ptr [edx + eax + 1]
        mov    ebx, dword ptr [esi + 0x44]
        shl    edi, 5
        mov    byte ptr [edi + ebx + 0x37], dl
        mov    edx, dword ptr [g_007da660]
        mov    ebx, dword ptr [edx]
        mov    edi, dword ptr [esi + 0x44]
        xor    edx, edx
        mov    dx, word ptr [esi + 0xa]
        add    ecx, ebx
        mov    al, byte ptr [ecx + eax]
        shl    edx, 5
        mov    byte ptr [edx + edi + 0x57], al
L_196a:
        mov    ecx, dword ptr [g_007da680]
        mov    edx, dword ptr [ecx]
        mov    eax, dword ptr [g_007da684]
        mov    ecx, dword ptr [eax]
        mov    eax, dword ptr [ebp - 8]
        xor    ebx, ebx
        mov    bx, word ptr [esi + 0xa]
        mov    dword ptr [ebp - 0xc8], edx
        mov    edx, dword ptr [ebp - 0x10]
        add    eax, edx
        mov    dword ptr [ebp - 0xc4], ecx
        mov    ecx, dword ptr [esi + 0x44]
        mov    dword ptr [ebp - 0x7c], eax
        shl    ebx, 5
        inc    eax
        add    ebx, ecx
        mov    dword ptr [ebp - 0x30], eax
        mov    dword ptr [ebp - 0x70], ebx
        mov    ecx, dword ptr [ebp - 0xc4]
        fld1    
        mov    edi, dword ptr [ebp - 8]
        mov    eax, edi
        shl    eax, 4
        fdiv    dword ptr [eax + ecx + 0xc]
        add    eax, ecx
        mov    edx, dword ptr [ebp - 0x70]
        fst    dword ptr [edx + 0xc]
        fld    st(0)
        fmul    dword ptr [eax]
        fstp    dword ptr [edx]
        fld    dword ptr [eax + 4]
        fmul st(0), st(1)
        fstp    dword ptr [edx + 4]
        fld    dword ptr [eax + 8]
        mov    eax, dword ptr [ebp - 0x30]
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
        mov    eax, dword ptr [ebp - 0x7c]
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
        fmul    dword ptr [ebx]
        mov    eax, dword ptr [g_007b94a0]
        mov    ecx, dword ptr [ebp - 8]
        mov    dword ptr [ebx + 0x10], eax
        fadd    dword ptr [g_007da874]
        mov    dword ptr [ebx + 0x30], eax
        mov    dword ptr [ebx + 0x50], eax
        mov    eax, dword ptr [ebp - 0xc8]
        fstp    dword ptr [ebx]
        mov    edx, dword ptr [eax + ecx*8]
        fld    dword ptr [g_007da878]
        mov    ecx, dword ptr [eax + ecx*8 + 4]
        fmul    dword ptr [ebx + 4]
        mov    dword ptr [ebx + 0x18], edx
        mov    dword ptr [ebx + 0x1c], ecx
        mov    ecx, dword ptr [ebp + 8]
        fadd    dword ptr [g_007da870]
        mov    edx, dword ptr [ecx + eax + 8]
        mov    dword ptr [ebx + 0x38], edx
        mov    edx, dword ptr [ecx + eax + 0xc]
        fstp    dword ptr [ebx + 4]
        mov    dword ptr [ebx + 0x3c], edx
        fld    dword ptr [g_007da87c]
        mov    edx, dword ptr [ecx + eax]
        fmul    dword ptr [ebx + 0x20]
        mov    eax, dword ptr [ecx + eax + 4]
        mov    dword ptr [ebx + 0x5c], eax
        mov    al, byte ptr [ebp + 0x17]
        test    al, al
        fadd    dword ptr [g_007da874]
        mov    dword ptr [ebx + 0x58], edx
        fstp    dword ptr [ebx + 0x20]
        fld    dword ptr [g_007da878]
        fmul    dword ptr [ebx + 0x24]
        fadd    dword ptr [g_007da870]
        fstp    dword ptr [ebx + 0x24]
        fld    dword ptr [g_007da87c]
        fmul    dword ptr [ebx + 0x40]
        fadd    dword ptr [g_007da874]
        fstp    dword ptr [ebx + 0x40]
        fld    dword ptr [g_007da878]
        fmul    dword ptr [ebx + 0x44]
        fadd    dword ptr [g_007da870]
        fstp    dword ptr [ebx + 0x44]
        je    L_1b78
        mov    edx, dword ptr [esi + 0x44]
        fld    dword ptr [ebp - 0x74]
        xor    ecx, ecx
        mov    cx, word ptr [esi + 0xa]
        shl    ecx, 5
        fadd    dword ptr [ecx + edx + 0x18]
        lea    eax, [ecx + edx + 0x18]
        xor    edx, edx
        fstp    dword ptr [eax]
        mov    ecx, dword ptr [esi + 0x44]
        fld    dword ptr [ebp - 0x6c]
        xor    eax, eax
        mov    ax, word ptr [esi + 0xa]
        shl    eax, 5
        fadd    dword ptr [eax + ecx + 0x1c]
        lea    eax, [eax + ecx + 0x1c]
        xor    ecx, ecx
        fstp    dword ptr [eax]
        mov    dx, word ptr [esi + 0xa]
        mov    eax, dword ptr [esi + 0x44]
        fld    dword ptr [ebp - 0x74]
        shl    edx, 5
        fadd    dword ptr [edx + eax + 0x38]
        lea    eax, [edx + eax + 0x38]
        fstp    dword ptr [eax]
        mov    cx, word ptr [esi + 0xa]
        mov    edx, dword ptr [esi + 0x44]
        fld    dword ptr [ebp - 0x6c]
        shl    ecx, 5
        fadd    dword ptr [ecx + edx + 0x3c]
        lea    eax, [ecx + edx + 0x3c]
        xor    edx, edx
        fstp    dword ptr [eax]
        mov    ecx, dword ptr [esi + 0x44]
        fld    dword ptr [ebp - 0x74]
        xor    eax, eax
        mov    ax, word ptr [esi + 0xa]
        shl    eax, 5
        fadd    dword ptr [eax + ecx + 0x58]
        lea    eax, [eax + ecx + 0x58]
        fstp    dword ptr [eax]
        mov    dx, word ptr [esi + 0xa]
        mov    eax, dword ptr [esi + 0x44]
        fld    dword ptr [ebp - 0x6c]
        shl    edx, 5
        fadd    dword ptr [edx + eax + 0x5c]
        lea    eax, [edx + eax + 0x5c]
        fstp    dword ptr [eax]
L_1b78:
        mov    ecx, dword ptr [ebp - 0x48]
        mov    edx, dword ptr [ebp - 0x34]
        mov    ebx, dword ptr [ebp - 8]
        inc    ecx
        mov    dword ptr [ebp - 0x48], ecx
        mov    ecx, dword ptr [g_007d9980]
        mov    eax, dword ptr [ecx]
        mov    ebx, dword ptr [eax + ebx*8]
        mov    ecx, dword ptr [g_007d997c]
        mov    ecx, dword ptr [ecx]
        mov    edi, edx
        mov    dword ptr [edi + ecx], ebx
        mov    ebx, dword ptr [ebp - 8]
        mov    ebx, dword ptr [eax + ebx*8 + 4]
        mov    dword ptr [edi + ecx + 4], ebx
        mov    ebx, dword ptr [ebp - 0x48]
        add    edx, 8
        inc    ebx
        mov    dword ptr [ebp - 0x48], ebx
        mov    ebx, dword ptr [ebp + 8]
        mov    ebx, dword ptr [ebx + eax + 8]
        mov    edi, edx
        mov    dword ptr [edi + ecx], ebx
        mov    ebx, dword ptr [ebp + 8]
        mov    ebx, dword ptr [ebx + eax + 0xc]
        mov    dword ptr [edi + ecx + 4], ebx
        mov    ebx, dword ptr [ebp - 0x48]
        add    edx, 8
        mov    edi, edx
        add    edx, 8
        inc    ebx
        mov    dword ptr [ebp - 0x34], edx
        mov    edx, dword ptr [ebp + 8]
        mov    dword ptr [ebp - 0x48], ebx
        mov    ebx, dword ptr [edx + eax]
        mov    eax, dword ptr [edx + eax + 4]
        mov    dword ptr [edi + ecx], ebx
        mov    dword ptr [edi + ecx + 4], eax
        mov    di, word ptr [esi + 0xa]
        mov    eax, dword ptr [esi + 0x50]
        xor    ecx, ecx
        mov    cx, word ptr [esi + 0x54]
        add    edx, 8
        mov    dword ptr [ebp + 8], edx
        mov    word ptr [eax + ecx*2], di
        mov    cx, word ptr [esi + 0xa]
        mov    edi, dword ptr [esi + 0x50]
        xor    eax, eax
        mov    ax, word ptr [esi + 0x54]
        inc    cx
        mov    word ptr [edi + eax*2 + 2], cx
        mov    cx, word ptr [esi + 0xa]
        mov    edi, dword ptr [esi + 0x50]
        xor    eax, eax
        mov    ax, word ptr [esi + 0x54]
        add    cx, 2
        mov    word ptr [edi + eax*2 + 4], cx
        mov    ecx, dword ptr [ebp - 0x3c]
        mov    eax, 3
        add    word ptr [esi + 0xa], ax
        add    word ptr [esi + 0x54], ax
        mov    eax, dword ptr [ebp - 0x10]
        inc    eax
        dec    ecx
        cmp    eax, ecx
        mov    dword ptr [ebp - 0x10], eax
        jl    L_1907
L_1c4d:
        mov    esi, dword ptr [ebp - 8]
        mov    edx, dword ptr [ebp - 0x3c]
        mov    eax, dword ptr [ebp - 0x28]
        mov    ecx, dword ptr [ebp - 0x58]
        add    esi, edx
        inc    eax
        cmp    eax, ecx
        mov    dword ptr [ebp - 8], esi
        mov    dword ptr [ebp - 0x28], eax
        jl    L_18c2
L_1c6a:
        mov    ebx, dword ptr [ebp - 0x14]
        mov    esi, dword ptr [ebx + 0x44]
        xor    ecx, ecx
        mov    cx, word ptr [ebx + 0xa]
        shl    ecx, 5
        lea    edi, [esi + ecx]
        mov    eax, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, eax
        mov    al, byte ptr [ebp - 0x29]
        and    ecx, 3
        test    al, al
        rep movsb
        je    L_1cd8
        xor    edx, edx
        mov    dx, word ptr [ebx + 0xa]
        and    edx, 0xffff
        jle    L_1d0e
        mov    ecx, dword ptr [g_007d997c]
        mov    eax, dword ptr [ecx]
        mov    esi, dword ptr [ebx + 0x44]
        mov    ecx, edx
        shl    ecx, 5
        lea    ecx, [ecx + esi + 0x1c]
        mov    esi, edx
L_1cb5:
        fld    dword ptr [ebp - 0xd0]
        add    eax, 8
        fadd    dword ptr [eax - 8]
        add    ecx, 0x20
        dec    esi
        fstp    dword ptr [ecx - 0x24]
        fld    dword ptr [ebp - 0xcc]
        fadd    dword ptr [eax - 4]
        fstp    dword ptr [ecx - 0x20]
        jne    L_1cb5
        jmp    L_1d0e
L_1cd8:
        xor    edx, edx
        mov    dx, word ptr [ebx + 0xa]
        and    edx, 0xffff
        jle    L_1d0e
        mov    esi, dword ptr [ebx + 0x44]
        mov    eax, dword ptr [g_007d997c]
        mov    eax, dword ptr [eax]
        mov    ecx, edx
        shl    ecx, 5
        lea    ecx, [ecx + esi + 0x1c]
        mov    esi, edx
L_1cfb:
        mov    edi, dword ptr [eax]
        mov    dword ptr [ecx - 4], edi
        mov    edi, dword ptr [eax + 4]
        mov    dword ptr [ecx], edi
        add    eax, 8
        add    ecx, 0x20
        dec    esi
        jne    L_1cfb
L_1d0e:
        mov    al, byte ptr [ebp + 0x1c]
        test    al, al
        jne    L_1d2e
        mov    eax, dword ptr [ebp + 0x10]
        mov    esi, dword ptr [eax]
        xor    ecx, ecx
        mov    cx, word ptr [ebx + 0x54]
        add    edx, edx
        add    esi, edx
        mov    edx, dword ptr [eax + 0xc]
        mov    dword ptr [eax], esi
        add    edx, ecx
        mov    dword ptr [eax + 0xc], edx
L_1d2e:
        cmp    word ptr [ebx + 0xa], 0
        mov    eax, dword ptr [ebp - 0x68]
        setne    dl
        pop    edi
        mov    byte ptr [ebx + 0x10], dl
        pop    ebx
        pop    esi
        mov    esp, ebp
        pop    ebp
        ret    0x18
        __emit 0x8D  // alignment pad 8D 49 00
__emit 0x49
__emit 0x00
        // jump-table data @ 0x00471D48 (6 relocated pointers)
        __emit 0x48
        __emit 0x07
        __emit 0x47
        __emit 0x00
        __emit 0x56
        __emit 0x07
        __emit 0x47
        __emit 0x00
        __emit 0x61
        __emit 0x07
        __emit 0x47
        __emit 0x00
        __emit 0xBC
        __emit 0x06
        __emit 0x47
        __emit 0x00
        __emit 0xC2
        __emit 0x06
        __emit 0x47
        __emit 0x00
        __emit 0xCA
        __emit 0x06
        __emit 0x47
        __emit 0x00
        // jump-table data @ 0x00471D60 (6 relocated pointers)
        __emit 0x48
        __emit 0x07
        __emit 0x47
        __emit 0x00
        __emit 0x56
        __emit 0x07
        __emit 0x47
        __emit 0x00
        __emit 0x61
        __emit 0x07
        __emit 0x47
        __emit 0x00
        __emit 0xBC
        __emit 0x06
        __emit 0x47
        __emit 0x00
        __emit 0xC2
        __emit 0x06
        __emit 0x47
        __emit 0x00
        __emit 0xCA
        __emit 0x06
        __emit 0x47
        __emit 0x00
        // jump-table data @ 0x00471D78 (6 relocated pointers)
        __emit 0x0E
        __emit 0x0E
        __emit 0x47
        __emit 0x00
        __emit 0x5B
        __emit 0x0E
        __emit 0x47
        __emit 0x00
        __emit 0x64
        __emit 0x0E
        __emit 0x47
        __emit 0x00
        __emit 0x8D
        __emit 0x0E
        __emit 0x47
        __emit 0x00
        __emit 0x95
        __emit 0x0E
        __emit 0x47
        __emit 0x00
        __emit 0x9D
        __emit 0x0E
        __emit 0x47
        __emit 0x00
        // jump-table data @ 0x00471D90 (14 relocated pointers)
        __emit 0x48
        __emit 0x0E
        __emit 0x47
        __emit 0x00
        __emit 0x45
        __emit 0x10
        __emit 0x47
        __emit 0x00
        __emit 0x4E
        __emit 0x10
        __emit 0x47
        __emit 0x00
        __emit 0x77
        __emit 0x10
        __emit 0x47
        __emit 0x00
        __emit 0x7F
        __emit 0x10
        __emit 0x47
        __emit 0x00
        __emit 0x87
        __emit 0x10
        __emit 0x47
        __emit 0x00
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0xA1
        __emit 0x8C
        __emit 0x95
        __emit 0x7B
        __emit 0x00
        __emit 0x83
        __emit 0xEC
        __emit 0x18
        __emit 0x53
        __emit 0x55
        __emit 0x56
        __emit 0x57
        __emit 0x50
        __emit 0xE8
        __emit 0x8E
        __emit 0x2B
        __emit 0x28
        __emit 0x00
        __emit 0x68
        __emit 0x88
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0xE8
    }
}
