/*
 * FUN_0043ed30 (extent 0x43ed30-0x441690) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076dd60;
extern float  g_0076e5d0;
extern float  g_0076e5d4;
extern float  g_007b220c;
extern int    g_007b94a0;
extern int    g_007b9844;
extern int    g_007b9848;
extern int    g_007b984c;
extern int    g_007b9864;
extern int    g_007b9868;
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
extern char   g_007da86c;
extern float  g_007da870;
extern float  g_007da874;
extern float  g_007da878;
extern float  g_007da87c;
extern void __cdecl FUN_0041cb30(void);
extern void __cdecl FUN_00421f00(void);
extern void __cdecl FUN_00423e00(void);
extern void __cdecl FUN_004286e0(void);
extern void __cdecl FUN_004428f0(void);
extern void __cdecl FUN_00491cd0(void);
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_0043ed30(void)
{
    __asm {
        push    ebp
        mov    ebp, esp
        sub    esp, 0x1f0
        push    ebx
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi + 0x8c]
        test    eax, eax
        push    edi
        mov    dword ptr [ebp - 8], esi
        jne    L_ed7b
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
        call    FUN_004428f0
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    0x18
L_ed7b:
        mov    eax, dword ptr [esi + 0x58]
        test    eax, eax
        mov    dword ptr [ebp - 0xb8], 0
        jg    L_ed9b
        mov    byte ptr [esi + 0x10], 0
        xor    eax, eax
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    0x18
L_ed9b:
        cmp    word ptr [esi + 0x56], 0
        mov    ecx, dword ptr [esi + 0x18]
        mov    dword ptr [ebp - 0x18], ecx
        jne    L_edb2
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 0x98]
L_edb2:
        mov    eax, dword ptr [g_007da68c]
        mov    ebx, dword ptr [eax]
        mov    edx, dword ptr [g_007da688]
        mov    eax, dword ptr [edx]
        mov    ecx, dword ptr [ebp - 8]
        mov    esi, dword ptr [ecx + 0x14]
        mov    ecx, dword ptr [g_007da600]
        mov    edi, dword ptr [ecx]
        mov    dword ptr [ebp - 0x40], eax
        mov    eax, dword ptr [ebp + 0x14]
        test    eax, eax
        mov    dword ptr [ebp + 0x18], ebx
        je    L_ee43
        mov    eax, dword ptr [ebp - 0x18]
        test    eax, eax
        mov    dword ptr [ebp - 0x28], 0
        jle    L_ee7e
L_edee:
        cmp    byte ptr [edi], 0
        je    L_ee20
        mov    edx, dword ptr [ebp - 0x40]
        mov    eax, dword ptr [ebp + 8]
        mov    ecx, dword ptr [ebp + 0x18]
        push    edx
        push    eax
        push    esi
        mov    byte ptr [edi], 0
        call    FUN_0041cb30
        mov    ecx, dword ptr [g_007da65c]
        mov    ebx, dword ptr [ecx]
        add    ebx, dword ptr [ebp - 0x28]
        mov    ecx, dword ptr [ebp + 0x14]
        push    esi
        call    FUN_00421f00
        mov    byte ptr [ebx], al
        mov    ebx, dword ptr [ebp + 0x18]
L_ee20:
        mov    ecx, dword ptr [ebp - 0x40]
        mov    eax, dword ptr [ebp - 0x28]
        add    ecx, 4
        inc    eax
        add    ebx, 0x10
        add    esi, 0xc
        mov    dword ptr [ebp - 0x40], ecx
        mov    ecx, dword ptr [ebp - 0x18]
        inc    edi
        cmp    eax, ecx
        mov    dword ptr [ebp - 0x28], eax
        mov    dword ptr [ebp + 0x18], ebx
        jl    L_edee
        jmp    L_ee7e
L_ee43:
        mov    eax, dword ptr [ebp - 0x18]
        test    eax, eax
        jle    L_ee7e
        mov    dword ptr [ebp + 0x14], eax
L_ee4d:
        cmp    byte ptr [edi], 0
        je    L_ee65
        mov    edx, dword ptr [ebp - 0x40]
        mov    eax, dword ptr [ebp + 8]
        push    edx
        push    eax
        push    esi
        mov    ecx, ebx
        mov    byte ptr [edi], 0
        call    FUN_0041cb30
L_ee65:
        mov    edx, dword ptr [ebp - 0x40]
        mov    eax, dword ptr [ebp + 0x14]
        add    edx, 4
        add    esi, 0xc
        add    ebx, 0x10
        inc    edi
        dec    eax
        mov    dword ptr [ebp - 0x40], edx
        mov    dword ptr [ebp + 0x14], eax
        jne    L_ee4d
L_ee7e:
        mov    ecx, dword ptr [ebp - 8]
        mov    eax, dword ptr [ecx + 0x24]
        and    eax, 0x3fff
        mov    dword ptr [ebp - 0xc8], 0
        mov    dword ptr [ebp - 4], 0
        mov    byte ptr [ebp + 0x17], 0
        mov    dword ptr [ebp - 0xc0], 0
        mov    dword ptr [ebp - 0xc4], 0
        je    L_ef74
        test    eax, eax
        jle    L_ef74
        mov    edx, dword ptr [g_007da848]
        mov    esi, dword ptr [edx + eax*4 + 0x24]
        test    esi, esi
        je    L_ef74
        mov    eax, dword ptr [esi]
        push    0
        mov    ecx, esi
        call    dword ptr [eax + 4]
        mov    ecx, eax
        call    FUN_00491cd0
        cmp    eax, 0x100
        jl    L_eef5
        mov    dword ptr [g_007da864], 1
        jmp    L_ef50
L_eef5:
        cmp    eax, 0x80
        jl    L_ef08
        mov    dword ptr [g_007da864], 2
        jmp    L_ef50
L_ef08:
        cmp    eax, 0x40
        jl    L_ef19
        mov    dword ptr [g_007da864], 4
        jmp    L_ef50
L_ef19:
        cmp    eax, 0x20
        jl    L_ef2a
        mov    dword ptr [g_007da864], 8
        jmp    L_ef50
L_ef2a:
        cmp    eax, 0x10
        jl    L_ef3b
        mov    dword ptr [g_007da864], 0x10
        jmp    L_ef50
L_ef3b:
        xor    ecx, ecx
        cmp    eax, 8
        setl    cl
        dec    ecx
        and    ecx, 0xffffffe0
        add    ecx, 0x40
        mov    dword ptr [g_007da864], ecx
L_ef50:
        mov    al, byte ptr [esi + 0x24]
        test    al, al
        jne    L_ef83
        mov    eax, dword ptr [esi + 0x28]
        test    eax, eax
        je    L_ef83
        mov    edx, dword ptr [eax + 0xc]
        mov    eax, dword ptr [eax + 0x1c]
        mov    byte ptr [ebp + 0x17], 1
        mov    dword ptr [ebp - 0xc0], edx
        mov    dword ptr [ebp - 0xc4], eax
L_ef74:
        mov    bl, byte ptr [ebp + 0x1c]
        test    bl, bl
        mov    ecx, dword ptr [ebp + 0x10]
        je    L_ef89
        mov    eax, dword ptr [ecx + 0x38]
        jmp    L_ef95
L_ef83:
        mov    byte ptr [ebp + 0x17], 0
        jmp    L_ef74
L_ef89:
        mov    eax, dword ptr [ecx + 4]
        lea    edx, [eax + eax*4]
        mov    eax, dword ptr [ecx + 0x18]
        lea    eax, [eax + edx*8]
L_ef95:
        mov    ecx, dword ptr [ebp - 8]
        mov    dword ptr [ecx + 0x84], eax
        mov    eax, dword ptr [ecx + 0x64]
        and    eax, 0x3fff
        mov    byte ptr [ebp + 0x1b], 0
        mov    dword ptr [ebp - 0xd8], 0
        mov    dword ptr [ebp - 0xdc], 0
        je    L_f000
        xor    edi, edi
        cmp    eax, edi
        jle    L_f002
        mov    edx, dword ptr [g_007da848]
        mov    eax, dword ptr [edx + eax*4 + 0x24]
        cmp    eax, edi
        je    L_f002
        mov    dl, byte ptr [eax + 0x24]
        test    dl, dl
        jne    L_effa
        mov    eax, dword ptr [eax + 0x28]
        cmp    eax, edi
        je    L_effa
        mov    edx, dword ptr [eax + 0xc]
        mov    eax, dword ptr [eax + 0x1c]
        mov    byte ptr [ebp + 0x1b], 1
        mov    dword ptr [ebp - 0xd8], edx
        mov    dword ptr [ebp - 0xdc], eax
        jmp    L_f002
L_effa:
        mov    byte ptr [ebp + 0x1b], 0
        jmp    L_f002
L_f000:
        xor    edi, edi
L_f002:
        mov    eax, dword ptr [ecx + 0x18]
        cmp    eax, 0x100
        mov    dword ptr [ebp - 0x58], edi
        mov    dword ptr [ebp - 0x88], eax
        jle    L_f01f
        mov    dword ptr [ebp - 0x88], 0x100
L_f01f:
        mov    edx, dword ptr [g_007da688]
        mov    eax, dword ptr [edx]
        mov    dword ptr [ebp - 0x40], eax
        cmp    dword ptr [ecx + 0x58], edi
        mov    dword ptr [ebp - 0xb0], edi
        mov    dword ptr [ebp - 0x8c], edi
        mov    dword ptr [ebp - 0x28], edi
        mov    dword ptr [ebp - 0xc], edi
        jle    L_0ba3
L_f045:
        mov    ecx, dword ptr [g_007d98fc]
        mov    edx, dword ptr [ecx]
        mov    eax, dword ptr [ebp - 0x28]
        mov    cl, byte ptr [eax + edx]
        add    eax, edx
        test    cl, cl
        mov    dword ptr [ebp + 8], eax
        je    L_0b82
        mov    ecx, dword ptr [ebp - 8]
        mov    esi, dword ptr [ecx + 0x48]
        mov    ecx, dword ptr [ebp - 0x40]
        xor    eax, eax
        mov    al, byte ptr [esi + edi]
        xor    ebx, ebx
        mov    bl, byte ptr [esi + edi + 1]
        xor    edx, edx
        mov    dl, byte ptr [esi + edi + 2]
        mov    dword ptr [ebp - 0x54], esi
        mov    ecx, dword ptr [ecx + eax*4]
        mov    dword ptr [ebp - 0x24], eax
        mov    eax, dword ptr [ebp - 0x40]
        mov    dword ptr [ebp - 0x38], ebx
        mov    dword ptr [ebp - 0x60], edx
        mov    edx, dword ptr [eax + edx*4]
        mov    eax, dword ptr [eax + ebx*4]
        mov    ebx, eax
        and    ebx, edx
        mov    edi, ecx
        or    eax, edx
        and    ecx, ebx
        or    edi, eax
        test    ecx, ecx
        mov    dword ptr [g_007b984c], ecx
        mov    dword ptr [g_007b9848], edi
        je    L_f0b9
        mov    ecx, dword ptr [ebp + 8]
        mov    byte ptr [ecx], 0
        jmp    L_0b82
L_f0b9:
        test    edi, edi
        jne    L_f0ec
        mov    eax, dword ptr [ebp - 0xb8]
        mov    edx, dword ptr [g_007da600]
        mov    ecx, dword ptr [ebp - 0x24]
        inc    eax
        mov    dword ptr [ebp - 0xb8], eax
        mov    eax, dword ptr [edx]
        mov    edx, dword ptr [ebp - 0x38]
        mov    byte ptr [eax + ecx], 1
        mov    ecx, dword ptr [ebp - 0x60]
        mov    byte ptr [eax + edx], 1
        mov    byte ptr [eax + ecx], 1
        jmp    L_0b82
L_f0ec:
        cmp    dword ptr [edi*4 + 0x7b2478], 1
        mov    dword ptr [ebp - 0x20], 0
        jne    L_fcbc
        mov    edx, dword ptr [ebp - 0xc]
        lea    esi, [edx + 3]
        cmp    edx, esi
        mov    ecx, edx
        jge    L_fca1
        jmp    L_f116
L_f113:
        mov    edx, dword ptr [ebp - 0xc]
L_f116:
        mov    eax, dword ptr [ebp - 8]
        mov    eax, dword ptr [eax + 0x48]
        xor    ebx, ebx
        mov    bl, byte ptr [eax + ecx]
        inc    ecx
        cmp    ecx, esi
        mov    dword ptr [ebp - 0x50], ecx
        mov    edi, ebx
        jl    L_f12d
        mov    ecx, edx
L_f12d:
        mov    esi, dword ptr [ebp - 0x20]
        mov    ebx, dword ptr [ebp - 0x40]
        xor    edx, edx
        mov    dl, byte ptr [eax + ecx]
        and    esi, 0xffff
        mov    eax, edx
        add    esi, dword ptr [ebp - 0xb0]
        mov    edx, dword ptr [ebx + edi*4]
        test    edx, edx
        mov    dword ptr [ebp - 0x34], eax
        mov    dword ptr [ebp - 0x3c], esi
        mov    dword ptr [g_007b9844], edx
        jne    L_f259
        mov    ecx, dword ptr [g_007da68c]
        mov    ebx, dword ptr [ecx]
        mov    edx, dword ptr [g_007da684]
        mov    eax, edi
        shl    eax, 4
        add    eax, ebx
        mov    ebx, dword ptr [edx]
        mov    edx, dword ptr [eax]
        mov    ecx, esi
        shl    ecx, 4
        add    ecx, ebx
        mov    dword ptr [ecx], edx
        mov    edx, dword ptr [eax + 4]
        mov    ebx, dword ptr [g_007da680]
        mov    dword ptr [ecx + 4], edx
        mov    edx, dword ptr [eax + 8]
        mov    eax, dword ptr [eax + 0xc]
        mov    dword ptr [ecx + 8], edx
        mov    dword ptr [ecx + 0xc], eax
        mov    eax, dword ptr [ebp - 8]
        mov    ecx, dword ptr [eax + 0x90]
        mov    edx, dword ptr [ecx]
        mov    edx, dword ptr [edx + edi*4]
        mov    ecx, dword ptr [g_007da608]
        mov    ecx, dword ptr [ecx]
        mov    dword ptr [ecx + esi*4], edx
        mov    ecx, dword ptr [eax + 0x1c]
        lea    eax, [esi*8]
        mov    edx, eax
        add    edx, dword ptr [ebx]
        mov    ebx, dword ptr [ecx + edi*8]
        mov    dword ptr [edx], ebx
        mov    ebx, dword ptr [ecx + edi*8 + 4]
        mov    dword ptr [edx + 4], ebx
        mov    edx, dword ptr [ebp - 0x88]
        mov    ebx, dword ptr [g_007b9868]
        add    eax, dword ptr [ebx]
        add    edx, edi
        mov    ebx, dword ptr [ecx + edx*8]
        mov    ecx, dword ptr [ecx + edx*8 + 4]
        mov    edx, dword ptr [ebp - 8]
        mov    dword ptr [eax], ebx
        mov    dword ptr [eax + 4], ecx
        xor    eax, eax
        mov    al, byte ptr [edx + 0x13]
        test    al, al
        mov    byte ptr [ebp + 0xb], 1
        jbe    L_f22b
        and    eax, 0xff
        mov    edx, 1
        mov    dword ptr [ebp - 0x10], eax
        mov    ecx, 0x7da660
L_f208:
        test    eax, edx
        je    L_f21e
        mov    eax, dword ptr [ecx - 4]
        mov    eax, dword ptr [eax]
        mov    ebx, dword ptr [ecx]
        mov    al, byte ptr [eax + edi]
        mov    ebx, dword ptr [ebx]
        mov    byte ptr [ebx + esi], al
        mov    eax, dword ptr [ebp - 0x10]
L_f21e:
        add    ecx, 8
        shl    edx, 1
        cmp    ecx, 0x7da670
        jl    L_f208
L_f22b:
        mov    eax, dword ptr [ebp - 0x20]
        mov    edx, dword ptr [ebp - 0x40]
        inc    eax
        mov    dword ptr [ebp - 0x20], eax
        mov    eax, dword ptr [ebp - 0x34]
        lea    ecx, [eax*4]
        mov    dword ptr [ebp - 0x18], ecx
        mov    ecx, dword ptr [ecx + edx]
        inc    esi
        test    ecx, ecx
        mov    dword ptr [ebp - 0x3c], esi
        je    L_fc90
        mov    edx, dword ptr [g_007b9844]
        jmp    L_f272
L_f259:
        lea    ecx, [eax*4]
        mov    dword ptr [ebp - 0x18], ecx
        mov    ecx, dword ptr [ecx + ebx]
        test    ecx, ecx
        mov    byte ptr [ebp + 0xb], 0
        jne    L_fc90
L_f272:
        or    edx, ecx
        mov    dword ptr [ebp - 0x5c], 1
        mov    dword ptr [g_007b9844], edx
        xor    ebx, ebx
L_f283:
        mov    ecx, dword ptr [ebp - 0x5c]
        test    ecx, edx
        jne    L_f29b
        shl    ecx, 1
        inc    ebx
        cmp    bx, 6
        mov    dword ptr [ebp - 0x5c], ecx
        jb    L_f283
        jmp    L_f3fc
L_f29b:
        cmp    byte ptr [ebp + 0xb], 1
        jne    L_f34a
        mov    eax, dword ptr [g_007da68c]
        mov    edx, dword ptr [eax]
        mov    eax, dword ptr [ebp - 0x34]
        mov    ecx, edi
        shl    eax, 4
        shl    ecx, 4
        and    ebx, 0xffff
        add    eax, edx
        add    ecx, edx
        cmp    ebx, 5
        ja    L_f32c
        jmp    dword ptr [ebx*4 + 0x441690]
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx + 4]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 4]
L_f2d9:
        fld    st(1)
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_f3e6
        fstp    st(0)
        mov    dword ptr [ebp - 4], 0
        fstp    st(0)
        jmp    L_f3f3
        fld    dword ptr [ecx + 4]
        fld    dword ptr [eax + 4]
        jmp    L_f2d9
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax]
        jmp    L_f2d9
        fld    dword ptr [ecx]
        fld    dword ptr [eax]
        jmp    L_f2d9
        fld    dword ptr [ecx + 8]
        fld    dword ptr [eax + 8]
        jmp    L_f2d9
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx + 8]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 8]
        jmp    L_f2d9
L_f32c:
        push    0x76df04
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_f392
        int 3    
        mov    dword ptr [ebp - 4], 0
        jmp    L_f3f3
L_f34a:
        mov    ecx, dword ptr [g_007da68c]
        mov    edx, dword ptr [ecx]
        mov    ecx, dword ptr [ebp - 0x34]
        mov    eax, edi
        shl    eax, 4
        shl    ecx, 4
        and    ebx, 0xffff
        add    eax, edx
        add    ecx, edx
        cmp    ebx, 5
        ja    L_f3cb
        jmp    dword ptr [ebx*4 + 0x4416a8]
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx + 4]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 4]
L_f37f:
        fld    st(1)
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_f3e6
        fstp    st(0)
        fstp    st(0)
L_f392:
        mov    dword ptr [ebp - 4], 0
        jmp    L_f3f3
        fld    dword ptr [ecx + 4]
        fld    dword ptr [eax + 4]
        jmp    L_f37f
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax]
        jmp    L_f37f
        fld    dword ptr [ecx]
        fld    dword ptr [eax]
        jmp    L_f37f
        fld    dword ptr [ecx + 8]
        fld    dword ptr [eax + 8]
        jmp    L_f37f
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx + 8]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 8]
        jmp    L_f37f
L_f3cb:
        push    0x76df04
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_f392
        int 3    
        mov    dword ptr [ebp - 4], 0
        jmp    L_f3f3
L_f3e6:
        fld    st(1)
        fsub st(0), st(1)
        fdivr st(0), st(2)
        fstp    dword ptr [ebp - 4]
        fstp    st(0)
        fstp    st(0)
L_f3f3:
        mov    eax, dword ptr [ebp - 0x34]
        mov    dword ptr [ebp - 0xc8], ebx
L_f3fc:
        cmp    byte ptr [ebp + 0xb], 1
        jne    L_f854
        mov    edx, dword ptr [g_007da68c]
        mov    edx, dword ptr [edx]
        mov    ecx, eax
        shl    ecx, 4
        fld    dword ptr [ecx + edx]
        add    ecx, edx
        mov    eax, edi
        shl    eax, 4
        fsub    dword ptr [eax + edx]
        add    eax, edx
        mov    edx, dword ptr [g_007da684]
        mov    edx, dword ptr [edx]
        fmul    dword ptr [ebp - 4]
        shl    esi, 4
        add    edx, esi
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
        mov    eax, dword ptr [ebp - 0xc8]
        mov    ecx, dword ptr [eax*8 + 0x7b2408]
        test    ecx, ecx
        fstp    dword ptr [edx + 0xc]
        je    L_f47f
        fld    dword ptr [edx + 0xc]
        fsub    dword ptr [g_007b220c]
        jmp    L_f485
L_f47f:
        fld    dword ptr [g_007b220c]
L_f485:
        mov    ecx, dword ptr [ebp - 0xc8]
        mov    eax, dword ptr [ecx*8 + 0x7b2404]
        fstp    dword ptr [edx + eax*4]
        mov    ecx, dword ptr [ebp - 8]
        mov    edx, dword ptr [ecx + 0x90]
        mov    ecx, dword ptr [edx]
        mov    eax, dword ptr [ebp - 0x18]
        mov    eax, dword ptr [eax + ecx]
        mov    ecx, dword ptr [ecx + edi*4]
        mov    edx, ecx
        shr    ecx, 8
        and    edx, 0xff
        mov    esi, ecx
        mov    dword ptr [ebp - 0x178], edx
        xor    edx, edx
        mov    dword ptr [ebp - 0x174], edx
        fild    qword ptr [ebp - 0x178]
        shr    ecx, 8
        and    esi, 0xff
        mov    dword ptr [ebp - 0x180], esi
        fmul    dword ptr [g_0076e5d4]
        mov    esi, ecx
        mov    dword ptr [ebp - 0x17c], edx
        shr    ecx, 8
        fstp    dword ptr [ebp - 0x148]
        and    esi, 0xff
        fild    qword ptr [ebp - 0x180]
        and    ecx, 0xff
        mov    dword ptr [ebp - 0x18c], edx
        mov    dword ptr [ebp - 0x190], esi
        fmul    dword ptr [g_0076e5d4]
        mov    dword ptr [ebp - 0x1a0], ecx
        mov    dword ptr [ebp - 0x19c], edx
        mov    ecx, eax
        fstp    dword ptr [ebp - 0x14c]
        and    ecx, 0xff
        fild    qword ptr [ebp - 0x190]
        mov    dword ptr [ebp - 0x1b0], ecx
        mov    dword ptr [ebp - 0x1ac], edx
        shr    eax, 8
        fmul    dword ptr [g_0076e5d4]
        mov    ecx, eax
        and    ecx, 0xff
        mov    dword ptr [ebp - 0x1c0], ecx
        fstp    dword ptr [ebp - 0x150]
        mov    dword ptr [ebp - 0x1bc], edx
        fild    qword ptr [ebp - 0x1a0]
        shr    eax, 8
        mov    ecx, eax
        and    ecx, 0xff
        fmul    dword ptr [g_0076e5d4]
        mov    dword ptr [ebp - 0x1d0], ecx
        mov    dword ptr [ebp - 0x1cc], edx
        shr    eax, 8
        fstp    dword ptr [ebp - 0x144]
        and    eax, 0xff
        fild    qword ptr [ebp - 0x1b0]
        mov    dword ptr [ebp - 0x1e0], eax
        mov    dword ptr [ebp - 0x1dc], edx
        mov    edx, dword ptr [ebp - 4]
        fmul    dword ptr [g_0076e5d4]
        push    edx
        lea    eax, [ebp - 0x120]
        lea    ecx, [ebp - 0x150]
        fstp    dword ptr [ebp - 0x118]
        push    eax
        fild    qword ptr [ebp - 0x1c0]
        push    ecx
        mov    dword ptr [ebp - 0xf0], 0xbf800000
        mov    dword ptr [ebp - 0xf4], 0xbf800000
        fmul    dword ptr [g_0076e5d4]
        mov    dword ptr [ebp - 0xf8], 0xbf800000
        mov    dword ptr [ebp - 0xec], 0xbf800000
        lea    ecx, [ebp - 0xf8]
        fstp    dword ptr [ebp - 0x11c]
        fild    qword ptr [ebp - 0x1d0]
        fmul    dword ptr [g_0076e5d4]
        fstp    dword ptr [ebp - 0x120]
        fild    qword ptr [ebp - 0x1e0]
        fmul    dword ptr [g_0076e5d4]
        fstp    dword ptr [ebp - 0x114]
        call    FUN_004286e0
        lea    edx, [ebp - 0xf8]
        mov    dword ptr [ebp + 8], edx
        fld    dword ptr [g_0076e5d0]
        mov    esi, dword ptr [ebp + 8]
        fld    dword ptr [esi + 0xc]
        mov    ecx, dword ptr [esi + 0xc]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x10c]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x10c]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    dword ptr [ebp - 0xe4], ebx
        fld    dword ptr [esi]
        mov    ecx, dword ptr [esi]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x10c]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x10c]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0xe4]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0xe4], ecx
        fld    dword ptr [esi + 4]
        mov    ecx, dword ptr [esi + 4]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x10c]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x10c]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0xe4]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0xe4], ecx
        mov    ecx, dword ptr [esi + 8]
        fadd    dword ptr [esi + 8]
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x10c]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x10c]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0xe4]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0xe4], ecx
        mov    eax, dword ptr [g_007da608]
        mov    edx, dword ptr [eax]
        mov    eax, dword ptr [ebp - 0xe4]
        mov    ecx, dword ptr [ebp - 0x3c]
        mov    esi, dword ptr [g_007da680]
        mov    ebx, dword ptr [esi]
        mov    esi, dword ptr [ebp - 0x34]
        mov    dword ptr [edx + ecx*4], eax
        mov    edx, dword ptr [ebp - 8]
        mov    eax, dword ptr [edx + 0x1c]
        fld    dword ptr [eax + esi*8]
        shl    ecx, 3
        fsub    dword ptr [eax + edi*8]
        mov    edx, ecx
        add    edx, ebx
        mov    ebx, dword ptr [ebp - 0x88]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax + edi*8]
        fstp    dword ptr [edx]
        fld    dword ptr [eax + esi*8 + 4]
        add    esi, ebx
        fsub    dword ptr [eax + edi*8 + 4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax + edi*8 + 4]
        fstp    dword ptr [edx + 4]
        lea    edx, [eax + esi*8]
        fld    dword ptr [edx]
        lea    esi, [edi + ebx]
        fsub    dword ptr [eax + esi*8]
        lea    eax, [eax + esi*8]
        mov    esi, dword ptr [g_007b9868]
        mov    ebx, dword ptr [esi]
        fmul    dword ptr [ebp - 4]
        add    ecx, ebx
        fadd    dword ptr [eax]
        fstp    dword ptr [ecx]
        fld    dword ptr [edx + 4]
        fsub    dword ptr [eax + 4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax + 4]
        xor    eax, eax
        mov    eax, dword ptr [ebp - 8]
        mov    al, byte ptr [eax + 0x13]
        test    al, al
        fstp    dword ptr [ecx + 4]
        jbe    L_fc8d
        mov    ebx, dword ptr [ebp - 0x34]
        and    eax, 0xff
        mov    dword ptr [ebp + 8], 1
        mov    dword ptr [ebp - 0x10], eax
        mov    ecx, 0x7da65c
L_f7ec:
        mov    edx, dword ptr [ebp + 8]
        test    eax, edx
        je    L_f83c
        mov    eax, dword ptr [ecx]
        mov    edx, dword ptr [eax]
        mov    al, byte ptr [edx + edi]
        mov    byte ptr [ebp - 0x110], al
        mov    esi, dword ptr [ebp - 0x110]
        xor    eax, eax
        mov    al, byte ptr [edx + ebx]
        mov    edx, dword ptr [ecx + 4]
        and    esi, 0xff
        mov    dword ptr [ebp - 0x38], esi
        sub    eax, esi
        mov    esi, dword ptr [ebp - 0x3c]
        mov    dword ptr [ebp - 0x24], eax
        fild    dword ptr [ebp - 0x24]
        mov    eax, dword ptr [edx]
        fmul    dword ptr [ebp - 4]
        fiadd    dword ptr [ebp - 0x38]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [ebp - 0x24]
        mov    dl, byte ptr [ebp - 0x24]
        mov    byte ptr [eax + esi], dl
        mov    eax, dword ptr [ebp - 0x10]
L_f83c:
        mov    esi, dword ptr [ebp + 8]
        add    ecx, 8
        shl    esi, 1
        cmp    ecx, 0x7da66c
        mov    dword ptr [ebp + 8], esi
        jl    L_f7ec
        jmp    L_fc8d
L_f854:
        mov    ecx, dword ptr [g_007da68c]
        mov    edx, dword ptr [ecx]
        mov    ecx, edi
        shl    ecx, 4
        fld    dword ptr [ecx + edx]
        add    ecx, edx
        shl    eax, 4
        fsub    dword ptr [eax + edx]
        add    eax, edx
        mov    edx, dword ptr [g_007da684]
        mov    edx, dword ptr [edx]
        fmul    dword ptr [ebp - 4]
        shl    esi, 4
        add    edx, esi
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
        mov    eax, dword ptr [ebp - 0xc8]
        mov    ecx, dword ptr [eax*8 + 0x7b2408]
        test    ecx, ecx
        fstp    dword ptr [edx + 0xc]
        je    L_f8cb
        fld    dword ptr [edx + 0xc]
        fsub    dword ptr [g_007b220c]
        jmp    L_f8d1
L_f8cb:
        fld    dword ptr [g_007b220c]
L_f8d1:
        mov    ecx, dword ptr [ebp - 0xc8]
        mov    eax, dword ptr [ecx*8 + 0x7b2404]
        fstp    dword ptr [edx + eax*4]
        mov    ecx, dword ptr [ebp - 8]
        mov    edx, dword ptr [ecx + 0x90]
        mov    ecx, dword ptr [edx]
        mov    eax, dword ptr [ecx + edi*4]
        mov    edx, dword ptr [ebp - 0x18]
        mov    ecx, dword ptr [edx + ecx]
        mov    edx, ecx
        shr    ecx, 8
        and    edx, 0xff
        mov    esi, ecx
        mov    dword ptr [ebp - 0x1f0], edx
        xor    edx, edx
        mov    dword ptr [ebp - 0x1ec], edx
        fild    qword ptr [ebp - 0x1f0]
        shr    ecx, 8
        and    esi, 0xff
        mov    dword ptr [ebp - 0x168], esi
        fmul    dword ptr [g_0076e5d4]
        mov    esi, ecx
        mov    dword ptr [ebp - 0x164], edx
        shr    ecx, 8
        fstp    dword ptr [ebp - 0x138]
        and    esi, 0xff
        fild    qword ptr [ebp - 0x168]
        and    ecx, 0xff
        mov    dword ptr [ebp - 0x1e4], edx
        mov    dword ptr [ebp - 0x1e8], esi
        fmul    dword ptr [g_0076e5d4]
        mov    dword ptr [ebp - 0x158], ecx
        mov    dword ptr [ebp - 0x154], edx
        mov    ecx, eax
        fstp    dword ptr [ebp - 0x13c]
        and    ecx, 0xff
        fild    qword ptr [ebp - 0x1e8]
        mov    dword ptr [ebp - 0x1b8], ecx
        mov    dword ptr [ebp - 0x1b4], edx
        shr    eax, 8
        fmul    dword ptr [g_0076e5d4]
        mov    ecx, eax
        and    ecx, 0xff
        mov    dword ptr [ebp - 0x188], ecx
        fstp    dword ptr [ebp - 0x140]
        mov    dword ptr [ebp - 0x184], edx
        fild    qword ptr [ebp - 0x158]
        shr    eax, 8
        mov    ecx, eax
        and    ecx, 0xff
        fmul    dword ptr [g_0076e5d4]
        mov    dword ptr [ebp - 0x1d8], ecx
        mov    dword ptr [ebp - 0x1d4], edx
        shr    eax, 8
        fstp    dword ptr [ebp - 0x134]
        and    eax, 0xff
        fild    qword ptr [ebp - 0x1b8]
        mov    dword ptr [ebp - 0x198], eax
        mov    dword ptr [ebp - 0x194], edx
        mov    edx, dword ptr [ebp - 4]
        fmul    dword ptr [g_0076e5d4]
        push    edx
        lea    eax, [ebp - 0x130]
        lea    ecx, [ebp - 0x140]
        fstp    dword ptr [ebp - 0x128]
        push    eax
        fild    qword ptr [ebp - 0x188]
        push    ecx
        mov    dword ptr [ebp - 0x100], 0xbf800000
        mov    dword ptr [ebp - 0x104], 0xbf800000
        fmul    dword ptr [g_0076e5d4]
        mov    dword ptr [ebp - 0x108], 0xbf800000
        mov    dword ptr [ebp - 0xfc], 0xbf800000
        lea    ecx, [ebp - 0x108]
        fstp    dword ptr [ebp - 0x12c]
        fild    qword ptr [ebp - 0x1d8]
        fmul    dword ptr [g_0076e5d4]
        fstp    dword ptr [ebp - 0x130]
        fild    qword ptr [ebp - 0x198]
        fmul    dword ptr [g_0076e5d4]
        fstp    dword ptr [ebp - 0x124]
        call    FUN_004286e0
        lea    edx, [ebp - 0x108]
        mov    dword ptr [ebp + 8], edx
        fld    dword ptr [g_0076e5d0]
        mov    esi, dword ptr [ebp + 8]
        fld    dword ptr [esi + 0xc]
        mov    ecx, dword ptr [esi + 0xc]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0xd4]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xd4]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    dword ptr [ebp - 0xe8], ebx
        fld    dword ptr [esi]
        mov    ecx, dword ptr [esi]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0xd4]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xd4]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0xe8]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0xe8], ecx
        fld    dword ptr [esi + 4]
        mov    ecx, dword ptr [esi + 4]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0xd4]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xd4]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0xe8]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0xe8], ecx
        mov    ecx, dword ptr [esi + 8]
        fadd    dword ptr [esi + 8]
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0xd4]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xd4]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0xe8]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0xe8], ecx
        mov    eax, dword ptr [g_007da608]
        mov    edx, dword ptr [eax]
        mov    eax, dword ptr [ebp - 0xe8]
        mov    ecx, dword ptr [ebp - 0x3c]
        mov    esi, dword ptr [g_007da680]
        mov    ebx, dword ptr [esi]
        mov    esi, dword ptr [ebp - 0x34]
        mov    dword ptr [edx + ecx*4], eax
        mov    edx, dword ptr [ebp - 8]
        mov    eax, dword ptr [edx + 0x1c]
        fld    dword ptr [eax + edi*8]
        shl    ecx, 3
        fsub    dword ptr [eax + esi*8]
        mov    edx, ecx
        add    edx, ebx
        mov    ebx, dword ptr [ebp - 0x88]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax + esi*8]
        fstp    dword ptr [edx]
        fld    dword ptr [eax + edi*8 + 4]
        fsub    dword ptr [eax + esi*8 + 4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax + esi*8 + 4]
        add    esi, ebx
        fstp    dword ptr [edx + 4]
        lea    edx, [edi + ebx]
        fld    dword ptr [eax + edx*8]
        lea    edx, [eax + edx*8]
        fsub    dword ptr [eax + esi*8]
        lea    eax, [eax + esi*8]
        mov    esi, dword ptr [g_007b9868]
        mov    ebx, dword ptr [esi]
        fmul    dword ptr [ebp - 4]
        add    ecx, ebx
        fadd    dword ptr [eax]
        fstp    dword ptr [ecx]
        fld    dword ptr [edx + 4]
        fsub    dword ptr [eax + 4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax + 4]
        xor    eax, eax
        mov    eax, dword ptr [ebp - 8]
        mov    al, byte ptr [eax + 0x13]
        test    al, al
        fstp    dword ptr [ecx + 4]
        jbe    L_fc8d
        and    eax, 0xff
        mov    ebx, 1
        mov    dword ptr [ebp - 0x10], eax
        mov    ecx, 0x7da65c
L_fc30:
        test    eax, ebx
        je    L_fc80
        mov    edx, dword ptr [ecx]
        mov    edx, dword ptr [edx]
        mov    eax, dword ptr [ebp - 0x34]
        mov    al, byte ptr [edx + eax]
        mov    byte ptr [ebp - 0xbc], al
        mov    esi, dword ptr [ebp - 0xbc]
        xor    eax, eax
        mov    al, byte ptr [edx + edi]
        mov    edx, dword ptr [ecx + 4]
        and    esi, 0xff
        mov    dword ptr [ebp - 0x24], esi
        sub    eax, esi
        mov    esi, dword ptr [ebp - 0x3c]
        mov    dword ptr [ebp + 8], eax
        fild    dword ptr [ebp + 8]
        mov    eax, dword ptr [edx]
        fmul    dword ptr [ebp - 4]
        fiadd    dword ptr [ebp - 0x24]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [ebp + 8]
        mov    dl, byte ptr [ebp + 8]
        mov    byte ptr [eax + esi], dl
        mov    eax, dword ptr [ebp - 0x10]
L_fc80:
        add    ecx, 8
        shl    ebx, 1
        cmp    ecx, 0x7da66c
        jl    L_fc30
L_fc8d:
        inc    dword ptr [ebp - 0x20]
L_fc90:
        mov    eax, dword ptr [ebp - 0xc]
        mov    ecx, dword ptr [ebp - 0x50]
        lea    esi, [eax + 3]
        cmp    ecx, esi
        jl    L_f113
L_fca1:
        mov    ecx, dword ptr [g_007da670]
        mov    edx, dword ptr [ecx]
        mov    eax, dword ptr [ebp - 0x8c]
        mov    cx, word ptr [ebp - 0x20]
        mov    word ptr [edx + eax*2], cx
        jmp    L_0b44
L_fcbc:
        mov    eax, dword ptr [g_007da66c]
        mov    edx, dword ptr [eax + 0x30]
        mov    ecx, dword ptr [eax + 0x38]
        mov    ebx, dword ptr [ebp - 8]
        mov    dword ptr [ebp - 0x80], edx
        mov    edx, dword ptr [eax + 0x40]
        mov    dword ptr [ebp - 0x78], edx
        mov    dl, byte ptr [ebx + 0x13]
        test    dl, dl
        mov    dword ptr [ebp - 0x7c], ecx
        mov    ecx, dword ptr [eax + 0x48]
        mov    dword ptr [ebp - 0x74], ecx
        mov    byte ptr [ebp - 0xe0], dl
        jbe    L_fd27
        mov    ebx, edx
        and    ebx, 0xff
        mov    edi, 1
        mov    dword ptr [ebp - 0x10], ebx
        lea    ecx, [ebp - 0x70]
        add    eax, 0x50
        mov    dword ptr [ebp + 8], 2
        jmp    L_fd0b
L_fd08:
        mov    ebx, dword ptr [ebp - 0x10]
L_fd0b:
        test    ebx, edi
        je    L_fd13
        mov    ebx, dword ptr [eax]
        mov    dword ptr [ecx], ebx
L_fd13:
        mov    ebx, dword ptr [ebp + 8]
        add    eax, 8
        add    ecx, 4
        shl    edi, 1
        dec    ebx
        mov    dword ptr [ebp + 8], ebx
        jne    L_fd08
        mov    ebx, dword ptr [ebp - 8]
L_fd27:
        mov    eax, dword ptr [ebp - 0xc]
        xor    edi, edi
        lea    ecx, [eax + 3]
        cmp    eax, ecx
        mov    byte ptr [ebp - 0x49], 0
        mov    byte ptr [ebp + 0xb], 0xff
        mov    dword ptr [ebp - 0x14], eax
        mov    dword ptr [ebp - 0x50], edi
        jge    L_ff11
        mov    edx, dword ptr [g_007da68c]
        mov    ecx, dword ptr [edx]
        mov    edx, dword ptr [ebx + 0x90]
        mov    dword ptr [ebp - 0x24], ecx
        mov    ecx, dword ptr [edx]
        mov    edx, dword ptr [ebx + 0x1c]
        mov    dword ptr [ebp - 0x38], ecx
        mov    ecx, dword ptr [g_007da688]
        mov    dword ptr [ebp - 0x18], edx
        mov    edx, dword ptr [ecx]
        mov    dword ptr [ebp - 0x60], edx
        mov    edx, dword ptr [ebp - 0x80]
        jmp    L_fd77
L_fd71:
        mov    edx, dword ptr [ebp - 0x80]
        mov    esi, dword ptr [ebp - 0x54]
L_fd77:
        mov    ebx, dword ptr [ebp - 0x24]
        xor    ecx, ecx
        mov    cl, byte ptr [esi + eax]
        and    edi, 0xffff
        mov    eax, edi
        shl    eax, 4
        mov    dword ptr [ebp - 0x1c4], 0
        mov    dword ptr [ebp - 0x1a4], 0
        mov    esi, ecx
        shl    ecx, 4
        add    ecx, ebx
        mov    ebx, dword ptr [ecx]
        mov    dword ptr [eax + edx], ebx
        mov    ebx, dword ptr [ecx + 4]
        mov    dword ptr [eax + edx + 4], ebx
        mov    ebx, dword ptr [ecx + 8]
        mov    ecx, dword ptr [ecx + 0xc]
        mov    dword ptr [eax + edx + 8], ebx
        mov    dword ptr [eax + edx + 0xc], ecx
        mov    edx, dword ptr [ebp - 0x38]
        mov    ecx, dword ptr [edx + esi*4]
        mov    edx, ecx
        and    edx, 0xff
        mov    dword ptr [ebp - 0x1c8], edx
        fild    qword ptr [ebp - 0x1c8]
        mov    edx, dword ptr [ebp - 0x7c]
        shr    ecx, 8
        mov    ebx, ecx
        fmul    dword ptr [g_0076e5d4]
        and    ebx, 0xff
        mov    dword ptr [ebp - 0x1a8], ebx
        shr    ecx, 8
        fstp    dword ptr [eax + edx + 8]
        mov    ebx, ecx
        fild    qword ptr [ebp - 0x1a8]
        and    ebx, 0xff
        mov    dword ptr [ebp - 0x160], ebx
        xor    ebx, ebx
        fmul    dword ptr [g_0076e5d4]
        mov    dword ptr [ebp - 0x15c], ebx
        shr    ecx, 8
        and    ecx, 0xff
        fstp    dword ptr [eax + edx + 4]
        mov    dword ptr [ebp - 0x16c], ebx
        fild    qword ptr [ebp - 0x160]
        mov    dword ptr [ebp - 0x170], ecx
        mov    ecx, dword ptr [ebp - 0x78]
        fmul    dword ptr [g_0076e5d4]
        fstp    dword ptr [eax + edx]
        fild    qword ptr [ebp - 0x170]
        fmul    dword ptr [g_0076e5d4]
        fstp    dword ptr [eax + edx + 0xc]
        mov    edx, dword ptr [ebp - 0x18]
        mov    ebx, dword ptr [edx + esi*8]
        mov    dword ptr [ecx + eax], ebx
        mov    ebx, dword ptr [edx + esi*8 + 4]
        mov    dword ptr [ecx + eax + 4], ebx
        mov    ebx, dword ptr [ebp - 0x88]
        add    ebx, esi
        mov    edx, dword ptr [edx + ebx*8]
        mov    dword ptr [ecx + eax + 8], edx
        mov    edx, dword ptr [ebp - 0x18]
        mov    edx, dword ptr [edx + ebx*8 + 4]
        mov    dword ptr [ecx + eax + 0xc], edx
        mov    eax, dword ptr [ebp - 0x60]
        mov    edx, dword ptr [ebp - 0x74]
        mov    ecx, dword ptr [eax + esi*4]
        mov    dword ptr [edx + edi*4], ecx
        mov    edx, dword ptr [ebp - 0xe0]
        test    dl, dl
        jbe    L_fef5
        mov    eax, edx
        and    eax, 0xff
        mov    dword ptr [ebp - 0x44], 1
        mov    dword ptr [ebp - 0x10], eax
        lea    edx, [ebp - 0x70]
        mov    ecx, 0x7da65c
        jmp    L_feb6
L_feb3:
        mov    eax, dword ptr [ebp - 0x10]
L_feb6:
        mov    ebx, dword ptr [ebp - 0x44]
        test    eax, ebx
        je    L_fed9
        mov    eax, dword ptr [ecx]
        mov    eax, dword ptr [eax]
        mov    al, byte ptr [eax + esi]
        mov    ebx, dword ptr [edx]
        mov    byte ptr [edi + ebx], al
        cmp    al, byte ptr [ebp + 0xb]
        jae    L_fed1
        mov    byte ptr [ebp + 0xb], al
L_fed1:
        cmp    al, byte ptr [ebp - 0x49]
        jbe    L_fed9
        mov    byte ptr [ebp - 0x49], al
L_fed9:
        mov    ebx, dword ptr [ebp - 0x44]
        add    ecx, 8
        shl    ebx, 1
        add    edx, 4
        cmp    ecx, 0x7da66c
        mov    dword ptr [ebp - 0x44], ebx
        jl    L_feb3
        mov    edx, dword ptr [ebp - 0xe0]
L_fef5:
        mov    eax, dword ptr [ebp - 0x14]
        mov    edi, dword ptr [ebp - 0x50]
        mov    ecx, dword ptr [ebp - 0xc]
        inc    eax
        inc    edi
        add    ecx, 3
        cmp    eax, ecx
        mov    dword ptr [ebp - 0x14], eax
        mov    dword ptr [ebp - 0x50], edi
        jl    L_fd71
L_ff11:
        mov    eax, dword ptr [g_007da66c]
        mov    esi, dword ptr [eax + 8]
        mov    dword ptr [ebp - 0xa8], esi
        mov    esi, dword ptr [eax + 0x10]
        mov    word ptr [ebp - 0x68], di
        mov    edi, dword ptr [eax]
        xor    ecx, ecx
        test    dl, dl
        mov    dword ptr [ebp - 0xa4], esi
        mov    esi, dword ptr [eax + 0x18]
        mov    dword ptr [ebp - 0xcc], ecx
        mov    dword ptr [ebp - 0xac], edi
        mov    dword ptr [ebp - 0xa0], esi
        jbe    L_ff8b
        and    edx, 0xff
        mov    ebx, 1
        mov    dword ptr [ebp - 0x10], edx
        lea    esi, [ebp - 0x9c]
        add    eax, 0x20
        mov    dword ptr [ebp + 8], 2
        jmp    L_ff6c
L_ff69:
        mov    edx, dword ptr [ebp - 0x10]
L_ff6c:
        test    edx, ebx
        je    L_ff7a
        mov    edx, dword ptr [eax]
        mov    dword ptr [esi], edx
        mov    edi, dword ptr [ebp - 0xac]
L_ff7a:
        mov    edx, dword ptr [ebp + 8]
        add    eax, 8
        add    esi, 4
        shl    ebx, 1
        dec    edx
        mov    dword ptr [ebp + 8], edx
        jne    L_ff69
L_ff8b:
        mov    ebx, dword ptr [ebp - 0x68]
        mov    word ptr [ebp - 0x94], 0
        mov    dword ptr [ebp - 0x5c], 1
        mov    dword ptr [ebp - 0x24], 4
L_ffa5:
        mov    dword ptr [ebp - 0x44], 0
        mov    dword ptr [ebp - 0x3c], 0x7b2404
        mov    dword ptr [ebp - 0x38], 6
L_ffba:
        mov    eax, dword ptr [ebp - 0x5c]
        test    dword ptr [g_007b9848], eax
        je    L_0881
        mov    eax, ebx
        and    eax, 0xffff
        mov    dword ptr [ebp - 0x14], 0
        mov    dword ptr [ebp - 0x18], eax
        jle    L_0770
        mov    ecx, dword ptr [ebp - 0x74]
        mov    eax, dword ptr [ebp - 0x80]
        mov    edx, dword ptr [ebp - 0x78]
        mov    dword ptr [ebp - 0xd0], ecx
        mov    ecx, dword ptr [ebp - 0x7c]
        lea    ebx, [ecx + 0xc]
        sub    ecx, eax
        mov    dword ptr [ebp - 0x90], ecx
        mov    ecx, edx
        sub    ecx, eax
        mov    dword ptr [ebp + 8], edx
        mov    dword ptr [ebp - 0x60], ebx
        lea    esi, [eax + 8]
        mov    dword ptr [ebp - 0x20], ecx
L_000d:
        mov    edx, dword ptr [ebp - 0x14]
        lea    eax, [edx + 1]
        mov    edx, dword ptr [ebp - 0x18]
        xor    ecx, ecx
        cmp    eax, edx
        mov    edx, dword ptr [ebp - 0x5c]
        setge    cl
        mov    dword ptr [ebp - 0x50], eax
        dec    ecx
        and    ecx, eax
        mov    eax, dword ptr [ebp - 0xd0]
        mov    eax, dword ptr [eax]
        test    edx, eax
        mov    dword ptr [ebp - 0x34], ecx
        mov    dword ptr [g_007b9844], eax
        jne    L_017b
        mov    edx, dword ptr [esi - 8]
        mov    ecx, dword ptr [ebp - 0x94]
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
        mov    edx, dword ptr [ebp - 0xd0]
        mov    edx, dword ptr [edx]
        mov    edi, dword ptr [ebp - 0xa0]
        mov    dword ptr [edi + ecx*4], edx
        mov    edi, dword ptr [ebx - 0xc]
        mov    edx, dword ptr [ebp - 0xa8]
        mov    dword ptr [eax + edx], edi
        mov    edi, dword ptr [ebx - 8]
        mov    dword ptr [eax + edx + 4], edi
        mov    edi, dword ptr [ebp - 0x90]
        mov    edi, dword ptr [edi + esi]
        mov    dword ptr [eax + edx + 8], edi
        mov    edi, dword ptr [ebx]
        mov    dword ptr [eax + edx + 0xc], edi
        mov    edx, dword ptr [ebp + 8]
        mov    edi, dword ptr [edx]
        mov    edx, dword ptr [ebp - 0xa4]
        mov    dword ptr [eax + edx], edi
        mov    edi, dword ptr [ebp + 8]
        mov    edi, dword ptr [edi + 4]
        mov    dword ptr [eax + edx + 4], edi
        mov    edi, dword ptr [ebp - 0x20]
        mov    edi, dword ptr [edi + esi]
        mov    dword ptr [eax + edx + 8], edi
        mov    edi, dword ptr [ebp - 0x20]
        mov    edi, dword ptr [edi + esi + 4]
        mov    dword ptr [eax + edx + 0xc], edi
        xor    eax, eax
        mov    eax, dword ptr [ebp - 8]
        mov    al, byte ptr [eax + 0x13]
        test    al, al
        jbe    L_0130
        mov    edx, eax
        and    edx, 0xff
        xor    eax, eax
        mov    dword ptr [ebp - 0x84], 1
        mov    dword ptr [ebp - 0x10], edx
        mov    dword ptr [ebp - 0x2c], eax
L_00f3:
        mov    edi, dword ptr [ebp - 0x84]
        test    edx, edi
        je    L_0117
        mov    edx, dword ptr [ebp + eax - 0x70]
        mov    edi, dword ptr [ebp - 0x14]
        mov    eax, dword ptr [ebp + eax - 0x9c]
        mov    dl, byte ptr [edx + edi]
        mov    byte ptr [eax + ecx], dl
        mov    edx, dword ptr [ebp - 0x10]
        mov    eax, dword ptr [ebp - 0x2c]
L_0117:
        mov    edi, dword ptr [ebp - 0x84]
        add    eax, 4
        shl    edi, 1
        cmp    eax, 8
        mov    dword ptr [ebp - 0x2c], eax
        mov    dword ptr [ebp - 0x84], edi
        jl    L_00f3
L_0130:
        mov    eax, dword ptr [ebp - 0x34]
        mov    ecx, dword ptr [ebp - 0x74]
        mov    edx, dword ptr [ebp - 0x5c]
        mov    edi, dword ptr [ecx + eax*4]
        inc    word ptr [ebp - 0x94]
        test    edi, edx
        je    L_072f
        mov    edi, eax
        mov    eax, dword ptr [ebp - 0x3c]
        shl    edi, 4
        cmp    eax, 0x7b242c
        ja    L_021b
        mov    ecx, dword ptr [ebp - 0x44]
        jmp    dword ptr [ecx*4 + 0x4416c0]
        fld    dword ptr [esi + 4]
        mov    edx, dword ptr [ebp - 0x80]
        fsub    dword ptr [esi - 4]
        fld    dword ptr [edi + edx + 0xc]
        fsub    dword ptr [edi + edx + 4]
        jmp    L_01d7
L_017b:
        mov    eax, dword ptr [ebp - 0x74]
        test    dword ptr [eax + ecx*4], edx
        jne    L_0735
        mov    edi, dword ptr [ebp - 0x34]
        mov    eax, dword ptr [ebp - 0x3c]
        shl    edi, 4
        cmp    eax, 0x7b242c
        ja    L_0479
        mov    eax, dword ptr [ebp - 0x44]
        jmp    dword ptr [eax*4 + 0x4416d8]
        mov    edx, dword ptr [ebp - 0x80]
        fld    dword ptr [edi + edx + 0xc]
        fsub    dword ptr [edi + edx + 4]
        fld    dword ptr [esi + 4]
        fsub    dword ptr [esi - 4]
        jmp    L_0435
        mov    edx, dword ptr [ebp - 0x80]
        fld    dword ptr [esi - 4]
        fld    dword ptr [edi + edx + 4]
        jmp    L_01d7
        fld    dword ptr [esi + 4]
        mov    edx, dword ptr [ebp - 0x80]
        fsub    dword ptr [esi - 8]
        fld    dword ptr [edi + edx + 0xc]
        fsub    dword ptr [edi + edx]
L_01d7:
        fld    st(1)
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_0239
        fstp    st(0)
        mov    dword ptr [ebp - 4], 0
        fstp    st(0)
        jmp    L_0246
        mov    edx, dword ptr [ebp - 0x80]
        fld    dword ptr [esi - 8]
        fld    dword ptr [edi + edx]
        jmp    L_01d7
        mov    edx, dword ptr [ebp - 0x80]
        fld    dword ptr [esi]
        fld    dword ptr [edi + edx + 8]
        jmp    L_01d7
        fld    dword ptr [esi + 4]
        mov    edx, dword ptr [ebp - 0x80]
        fsub    dword ptr [esi]
        fld    dword ptr [edi + edx + 0xc]
        fsub    dword ptr [edi + edx + 8]
        jmp    L_01d7
L_021b:
        push    0x76df04
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_022d
        int 3    
L_022d:
        mov    edx, dword ptr [ebp - 0x80]
        mov    dword ptr [ebp - 4], 0
        jmp    L_0246
L_0239:
        fld    st(1)
        fsub st(0), st(1)
        fdivr st(0), st(2)
        fstp    dword ptr [ebp - 4]
        fstp    st(0)
        fstp    st(0)
L_0246:
        fld    dword ptr [edi + edx]
        mov    eax, dword ptr [ebp - 0x94]
        fsub    dword ptr [esi - 8]
        mov    ecx, dword ptr [ebp - 0xac]
        and    eax, 0xffff
        mov    dword ptr [ebp - 0x84], eax
        fmul    dword ptr [ebp - 4]
        shl    eax, 4
        add    ecx, eax
        fadd    dword ptr [esi - 8]
        fstp    dword ptr [ecx]
        fld    dword ptr [edi + edx + 4]
        fsub    dword ptr [esi - 4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [esi - 4]
        fstp    dword ptr [ecx + 4]
        fld    dword ptr [edi + edx + 8]
        fsub    dword ptr [esi]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [esi]
        fstp    dword ptr [ecx + 8]
        fld    dword ptr [edi + edx + 0xc]
        mov    edx, dword ptr [ebp - 0x3c]
        cmp    dword ptr [edx + 4], 0
        fsub    dword ptr [esi + 4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [esi + 4]
        fstp    dword ptr [ecx + 0xc]
        je    L_02b2
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [g_007b220c]
        jmp    L_02b8
L_02b2:
        fld    dword ptr [g_007b220c]
L_02b8:
        mov    edx, dword ptr [edx]
        fstp    dword ptr [ecx + edx*4]
        mov    edx, dword ptr [ebp - 0x7c]
        fld    dword ptr [edi + edx]
        mov    edx, dword ptr [ebp - 0xa8]
        fsub    dword ptr [ebx - 0xc]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ebx - 0xc]
        fstp    dword ptr [eax + edx]
        mov    edx, dword ptr [ebp - 0x7c]
        fld    dword ptr [edi + edx + 4]
        mov    edx, dword ptr [ebp - 0xa8]
        fsub    dword ptr [ebx - 8]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ebx - 8]
        fstp    dword ptr [eax + edx + 4]
        mov    edx, dword ptr [ebp - 0x7c]
        fld    dword ptr [edi + edx + 8]
        mov    edx, dword ptr [ebp - 0x90]
        fsub    dword ptr [edx + esi]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edx + esi]
        mov    edx, dword ptr [ebp - 0xa8]
        fstp    dword ptr [eax + edx + 8]
        mov    edx, dword ptr [ebp - 0x7c]
        fld    dword ptr [edi + edx + 0xc]
        mov    edx, dword ptr [ebp - 0xa8]
        fsub    dword ptr [ebx]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ebx]
        mov    ebx, dword ptr [ebp - 0x78]
        fstp    dword ptr [eax + edx + 0xc]
        mov    edx, dword ptr [ebp + 8]
        fld    dword ptr [edi + ebx]
        fsub    dword ptr [edx]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edx]
        mov    edx, dword ptr [ebp - 0xa4]
        fstp    dword ptr [eax + edx]
        fld    dword ptr [edi + ebx + 4]
        mov    ebx, dword ptr [ebp + 8]
        fsub    dword ptr [ebx + 4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ebx + 4]
        mov    ebx, dword ptr [ebp - 0x78]
        fstp    dword ptr [eax + edx + 4]
        fld    dword ptr [edi + ebx + 8]
        mov    ebx, dword ptr [ebp - 0x20]
        fsub    dword ptr [ebx + esi]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ebx + esi]
        mov    ebx, dword ptr [ebp - 0x78]
        fstp    dword ptr [eax + edx + 8]
        fld    dword ptr [edi + ebx + 0xc]
        mov    edi, dword ptr [ebp - 0x20]
        fsub    dword ptr [esi + edi + 4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [esi + edi + 4]
        fstp    dword ptr [eax + edx + 0xc]
        xor    eax, eax
        mov    eax, dword ptr [ebp - 8]
        mov    al, byte ptr [eax + 0x13]
        test    al, al
        jbe    L_067f
        mov    edx, eax
        and    edx, 0xff
        mov    dword ptr [ebp - 0x2c], 1
        mov    dword ptr [ebp - 0x10], edx
        xor    eax, eax
L_03a8:
        mov    edi, dword ptr [ebp - 0x2c]
        test    edx, edi
        je    L_0404
        mov    edi, dword ptr [ebp + eax - 0x70]
        mov    edx, dword ptr [ebp - 0x14]
        mov    dl, byte ptr [edi + edx]
        mov    ebx, dword ptr [ebp - 0x34]
        mov    byte ptr [ebp - 0xb4], dl
        mov    edx, dword ptr [ebp - 0xb4]
        and    edx, 0xff
        mov    dword ptr [ebp - 0x54], edx
        xor    edx, edx
        mov    dl, byte ptr [edi + ebx]
        sub    edx, dword ptr [ebp - 0x54]
        mov    edi, dword ptr [ebp - 0x84]
        mov    dword ptr [ebp - 0x1c], edx
        fild    dword ptr [ebp - 0x1c]
        mov    edx, dword ptr [ebp + eax - 0x9c]
        fmul    dword ptr [ebp - 4]
        fiadd    dword ptr [ebp - 0x54]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [ebp - 0x1c]
        mov    bl, byte ptr [ebp - 0x1c]
        mov    byte ptr [edx + edi], bl
        mov    edx, dword ptr [ebp - 0x10]
L_0404:
        mov    ebx, dword ptr [ebp - 0x2c]
        add    eax, 4
        shl    ebx, 1
        cmp    eax, 8
        mov    dword ptr [ebp - 0x2c], ebx
        jl    L_03a8
        jmp    L_067f
        mov    edx, dword ptr [ebp - 0x80]
        fld    dword ptr [edi + edx + 4]
        fld    dword ptr [esi - 4]
        jmp    L_0435
        mov    edx, dword ptr [ebp - 0x80]
        fld    dword ptr [edi + edx + 0xc]
        fsub    dword ptr [edi + edx]
        fld    dword ptr [esi + 4]
        fsub    dword ptr [esi - 8]
L_0435:
        fld    st(1)
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_0497
        fstp    st(0)
        mov    dword ptr [ebp - 4], 0
        fstp    st(0)
        jmp    L_04a4
        mov    edx, dword ptr [ebp - 0x80]
        fld    dword ptr [edi + edx]
        fld    dword ptr [esi - 8]
        jmp    L_0435
        mov    edx, dword ptr [ebp - 0x80]
        fld    dword ptr [edi + edx + 8]
        fld    dword ptr [esi]
        jmp    L_0435
        mov    edx, dword ptr [ebp - 0x80]
        fld    dword ptr [edi + edx + 0xc]
        fsub    dword ptr [edi + edx + 8]
        fld    dword ptr [esi + 4]
        fsub    dword ptr [esi]
        jmp    L_0435
L_0479:
        push    0x76df04
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_048b
        int 3    
L_048b:
        mov    edx, dword ptr [ebp - 0x80]
        mov    dword ptr [ebp - 4], 0
        jmp    L_04a4
L_0497:
        fld    st(1)
        fsub st(0), st(1)
        fdivr st(0), st(2)
        fstp    dword ptr [ebp - 4]
        fstp    st(0)
        fstp    st(0)
L_04a4:
        fld    dword ptr [esi - 8]
        mov    eax, dword ptr [ebp - 0x94]
        fsub    dword ptr [edi + edx]
        mov    ecx, dword ptr [ebp - 0xac]
        and    eax, 0xffff
        mov    dword ptr [ebp - 0x84], eax
        fmul    dword ptr [ebp - 4]
        shl    eax, 4
        add    ecx, eax
        fadd    dword ptr [edi + edx]
        lea    edx, [edi + edx + 4]
        fstp    dword ptr [ecx]
        fld    dword ptr [esi - 4]
        fsub    dword ptr [edx]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edx]
        mov    edx, dword ptr [ebp - 0x80]
        lea    edx, [edi + edx + 8]
        fstp    dword ptr [ecx + 4]
        fld    dword ptr [esi]
        fsub    dword ptr [edx]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edx]
        mov    edx, dword ptr [ebp - 0x80]
        lea    edx, [edi + edx + 0xc]
        fstp    dword ptr [ecx + 8]
        fld    dword ptr [esi + 4]
        fsub    dword ptr [edx]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edx]
        mov    edx, dword ptr [ebp - 0x3c]
        cmp    dword ptr [edx + 4], 0
        fstp    dword ptr [ecx + 0xc]
        je    L_051a
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [g_007b220c]
        jmp    L_0520
L_051a:
        fld    dword ptr [g_007b220c]
L_0520:
        mov    edx, dword ptr [edx]
        fstp    dword ptr [ecx + edx*4]
        mov    edx, dword ptr [ebp - 0x7c]
        fld    dword ptr [ebx - 0xc]
        fsub    dword ptr [edi + edx]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edi + edx]
        mov    edx, dword ptr [ebp - 0xa8]
        fstp    dword ptr [eax + edx]
        mov    edx, dword ptr [ebp - 0x7c]
        fld    dword ptr [ebx - 8]
        lea    edx, [edi + edx + 4]
        fsub    dword ptr [edx]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edx]
        mov    edx, dword ptr [ebp - 0xa8]
        fstp    dword ptr [eax + edx + 4]
        mov    edx, dword ptr [ebp - 0x90]
        fld    dword ptr [edx + esi]
        mov    edx, dword ptr [ebp - 0x7c]
        fsub    dword ptr [edi + edx + 8]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edi + edx + 8]
        mov    edx, dword ptr [ebp - 0xa8]
        fstp    dword ptr [eax + edx + 8]
        mov    edx, dword ptr [ebp - 0x7c]
        fld    dword ptr [ebx]
        lea    edx, [edi + edx + 0xc]
        fsub    dword ptr [edx]
        mov    ebx, dword ptr [ebp - 0xa4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edx]
        mov    edx, dword ptr [ebp - 0xa8]
        fstp    dword ptr [eax + edx + 0xc]
        mov    edx, dword ptr [ebp + 8]
        fld    dword ptr [edx]
        mov    edx, dword ptr [ebp - 0x78]
        fsub    dword ptr [edi + edx]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edi + edx]
        fstp    dword ptr [eax + ebx]
        mov    ebx, dword ptr [ebp + 8]
        fld    dword ptr [ebx + 4]
        mov    ebx, dword ptr [ebp - 0xa4]
        fsub    dword ptr [edi + edx + 4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edi + edx + 4]
        fstp    dword ptr [eax + ebx + 4]
        mov    ebx, dword ptr [ebp - 0x20]
        fld    dword ptr [ebx + esi]
        mov    ebx, dword ptr [ebp - 0xa4]
        fsub    dword ptr [edi + edx + 8]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edi + edx + 8]
        lea    edi, [edi + edx + 0xc]
        mov    edx, dword ptr [ebp - 0x20]
        fstp    dword ptr [eax + ebx + 8]
        fld    dword ptr [esi + edx + 4]
        fsub    dword ptr [edi]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edi]
        fstp    dword ptr [eax + ebx + 0xc]
        xor    eax, eax
        mov    eax, dword ptr [ebp - 8]
        mov    al, byte ptr [eax + 0x13]
        test    al, al
        jbe    L_067f
        mov    edx, eax
        and    edx, 0xff
        mov    dword ptr [ebp - 0x2c], 1
        mov    dword ptr [ebp - 0x10], edx
        xor    eax, eax
L_0619:
        mov    edi, dword ptr [ebp - 0x2c]
        test    edx, edi
        je    L_066f
        mov    edi, dword ptr [ebp + eax - 0x70]
        mov    edx, dword ptr [ebp - 0x34]
        mov    dl, byte ptr [edi + edx]
        mov    ebx, dword ptr [ebp - 0x14]
        mov    byte ptr [ebp - 0x64], dl
        mov    edx, dword ptr [ebp - 0x64]
        and    edx, 0xff
        mov    dword ptr [ebp - 0x54], edx
        xor    edx, edx
        mov    dl, byte ptr [edi + ebx]
        sub    edx, dword ptr [ebp - 0x54]
        mov    edi, dword ptr [ebp - 0x84]
        mov    dword ptr [ebp - 0x1c], edx
        fild    dword ptr [ebp - 0x1c]
        mov    edx, dword ptr [ebp + eax - 0x9c]
        fmul    dword ptr [ebp - 4]
        fiadd    dword ptr [ebp - 0x54]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [ebp - 0x1c]
        mov    bl, byte ptr [ebp - 0x1c]
        mov    byte ptr [edx + edi], bl
        mov    edx, dword ptr [ebp - 0x10]
L_066f:
        mov    ebx, dword ptr [ebp - 0x2c]
        add    eax, 4
        shl    ebx, 1
        cmp    eax, 8
        mov    dword ptr [ebp - 0x2c], ebx
        jl    L_0619
L_067f:
        mov    dword ptr [ebp - 0x1c], ecx
        mov    dword ptr [ebp - 0x54], 0
        mov    edi, dword ptr [ebp - 0x1c]
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
        mov    dword ptr [ebp - 0x54], edx
        mov    ecx, dword ptr [ebp - 0xa0]
        mov    eax, dword ptr [ebp - 0x54]
        mov    edx, dword ptr [ebp - 0x84]
        inc    word ptr [ebp - 0x94]
        mov    ebx, dword ptr [ebp - 0x60]
        mov    edi, dword ptr [ebp - 0xac]
        mov    dword ptr [ecx + edx*4], eax
        mov    ecx, dword ptr [ebp - 0xcc]
        jmp    L_073b
L_072f:
        mov    edi, dword ptr [ebp - 0xac]
L_0735:
        mov    ecx, dword ptr [ebp - 0xcc]
L_073b:
        mov    eax, dword ptr [ebp - 0x50]
        mov    edx, dword ptr [ebp + 8]
        mov    dword ptr [ebp - 0x14], eax
        mov    eax, dword ptr [ebp - 0xd0]
        add    eax, 4
        add    edx, 0x10
        mov    dword ptr [ebp - 0xd0], eax
        mov    eax, dword ptr [ebp - 0x14]
        mov    dword ptr [ebp + 8], edx
        mov    edx, dword ptr [ebp - 0x18]
        add    ebx, 0x10
        add    esi, 0x10
        cmp    eax, edx
        mov    dword ptr [ebp - 0x60], ebx
        jl    L_000d
L_0770:
        mov    edx, dword ptr [g_007da66c]
        lea    eax, [ecx + ecx*2]
        shl    eax, 4
        add    eax, edx
        mov    edx, dword ptr [eax]
        mov    dword ptr [ebp - 0x80], edx
        mov    edx, dword ptr [eax + 8]
        mov    dword ptr [ebp - 0x7c], edx
        mov    edx, dword ptr [eax + 0x10]
        mov    eax, dword ptr [eax + 0x18]
        mov    dword ptr [ebp - 0x78], edx
        xor    edx, edx
        mov    edx, dword ptr [ebp - 8]
        mov    dl, byte ptr [edx + 0x13]
        test    dl, dl
        mov    dword ptr [ebp - 0x74], eax
        jbe    L_07e5
        mov    edi, edx
        xor    eax, eax
        and    edi, 0xff
        mov    dword ptr [ebp + 8], 1
        mov    dword ptr [ebp - 0x10], edi
        lea    esi, [ebp - 0x70]
L_07b8:
        mov    ebx, dword ptr [ebp + 8]
        test    edi, ebx
        je    L_07d4
        mov    ebx, dword ptr [g_007da66c]
        lea    edi, [ecx + ecx*2]
        lea    edi, [eax + edi*2]
        mov    edi, dword ptr [ebx + edi*8 + 0x20]
        mov    dword ptr [esi], edi
        mov    edi, dword ptr [ebp - 0x10]
L_07d4:
        mov    ebx, dword ptr [ebp + 8]
        inc    eax
        shl    ebx, 1
        add    esi, 4
        cmp    eax, 2
        mov    dword ptr [ebp + 8], ebx
        jl    L_07b8
L_07e5:
        mov    ax, word ptr [ebp - 0x94]
        mov    esi, dword ptr [g_007da66c]
        mov    word ptr [ebp - 0x68], ax
        xor    eax, eax
        test    ecx, ecx
        sete    al
        mov    ecx, eax
        lea    eax, [ecx + ecx*2]
        shl    eax, 4
        mov    edi, dword ptr [eax + esi]
        add    eax, esi
        test    dl, dl
        mov    esi, dword ptr [eax + 8]
        mov    dword ptr [ebp - 0xa8], esi
        mov    esi, dword ptr [eax + 0x10]
        mov    eax, dword ptr [eax + 0x18]
        mov    dword ptr [ebp - 0xcc], ecx
        mov    dword ptr [ebp - 0xac], edi
        mov    dword ptr [ebp - 0xa4], esi
        mov    dword ptr [ebp - 0xa0], eax
        jbe    L_0875
        xor    eax, eax
        and    edx, 0xff
        mov    ebx, 1
        mov    dword ptr [ebp - 0x10], edx
        lea    esi, [ebp - 0x9c]
L_084b:
        test    edx, ebx
        je    L_086a
        mov    edi, dword ptr [g_007da66c]
        lea    edx, [ecx + ecx*2]
        lea    edx, [eax + edx*2]
        mov    edx, dword ptr [edi + edx*8 + 0x20]
        mov    dword ptr [esi], edx
        mov    edi, dword ptr [ebp - 0xac]
        mov    edx, dword ptr [ebp - 0x10]
L_086a:
        inc    eax
        add    esi, 4
        shl    ebx, 1
        cmp    eax, 2
        jl    L_084b
L_0875:
        mov    ebx, dword ptr [ebp - 0x68]
        mov    word ptr [ebp - 0x94], 0
L_0881:
        mov    eax, dword ptr [ebp - 0x5c]
        mov    esi, dword ptr [ebp - 0x44]
        mov    edx, dword ptr [ebp - 0x3c]
        shl    eax, 1
        mov    dword ptr [ebp - 0x5c], eax
        mov    eax, dword ptr [ebp - 0x38]
        inc    esi
        add    edx, 8
        dec    eax
        mov    dword ptr [ebp - 0x44], esi
        mov    dword ptr [ebp - 0x3c], edx
        mov    dword ptr [ebp - 0x38], eax
        jne    L_ffba
        mov    esi, ebx
        xor    eax, eax
        and    esi, 0xffff
        jle    L_08bd
        mov    edx, dword ptr [ebp - 0x74]
L_08b5:
        or    eax, dword ptr [edx]
        add    edx, 4
        dec    esi
        jne    L_08b5
L_08bd:
        test    eax, eax
        mov    dword ptr [g_007b9848], eax
        je    L_08df
        mov    edx, dword ptr [ebp - 0x24]
        mov    esi, edx
        dec    edx
        test    esi, esi
        mov    dword ptr [ebp - 0x24], edx
        jne    L_ffa5
        test    eax, eax
        jne    L_0b74
L_08df:
        mov    eax, ebx
        and    eax, 0xffff
        mov    dword ptr [ebp - 0x14], 0
        mov    dword ptr [ebp - 0x18], eax
        jle    L_0b28
        mov    eax, dword ptr [ebp - 0xb0]
        mov    ecx, dword ptr [ebp - 0x78]
        lea    esi, [eax*4]
        lea    edx, [eax*8]
        shl    eax, 4
        mov    dword ptr [ebp - 0x44], eax
        mov    eax, dword ptr [ebp - 0x80]
        mov    dword ptr [ebp - 0x2c], esi
        mov    esi, ecx
        sub    esi, eax
        lea    edi, [eax + 8]
        mov    eax, dword ptr [ebp - 0x7c]
        sub    eax, ecx
        mov    dword ptr [ebp + 8], ecx
        mov    dword ptr [ebp - 0x20], esi
        mov    dword ptr [ebp - 0x1c], eax
L_092e:
        mov    ecx, dword ptr [ebp - 0xb0]
        mov    eax, dword ptr [ebp - 0x14]
        add    eax, ecx
        mov    ecx, dword ptr [g_007da684]
        mov    esi, dword ptr [ecx]
        mov    ecx, dword ptr [edi - 8]
        mov    dword ptr [ebp - 0x38], eax
        mov    eax, dword ptr [ebp - 0x44]
        add    eax, esi
        mov    dword ptr [eax], ecx
        mov    ecx, dword ptr [edi - 4]
        mov    dword ptr [eax + 4], ecx
        mov    ecx, dword ptr [edi]
        mov    dword ptr [eax + 8], ecx
        mov    ecx, dword ptr [edi + 4]
        mov    dword ptr [eax + 0xc], ecx
        mov    eax, dword ptr [ebp - 0x1c]
        mov    ecx, dword ptr [ebp + 8]
        add    eax, ecx
        mov    dword ptr [ebp - 0x24], eax
        fld    dword ptr [g_0076e5d0]
        mov    esi, dword ptr [ebp - 0x24]
        fld    dword ptr [esi + 0xc]
        mov    ecx, dword ptr [esi + 0xc]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x48]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x48]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    dword ptr [ebp - 0x30], ebx
        fld    dword ptr [esi]
        mov    ecx, dword ptr [esi]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x48]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x48]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0x30]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0x30], ecx
        fld    dword ptr [esi + 4]
        mov    ecx, dword ptr [esi + 4]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x48]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x48]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0x30]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0x30], ecx
        mov    ecx, dword ptr [esi + 8]
        fadd    dword ptr [esi + 8]
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x48]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x48]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0x30]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0x30], ecx
        mov    eax, dword ptr [g_007da608]
        mov    ecx, dword ptr [eax]
        mov    eax, dword ptr [ebp - 0x30]
        mov    esi, dword ptr [ebp - 0x2c]
        mov    dword ptr [ecx + esi], eax
        mov    eax, dword ptr [ebp + 8]
        mov    esi, dword ptr [eax]
        mov    ecx, dword ptr [g_007da680]
        mov    ecx, dword ptr [ecx]
        mov    eax, dword ptr [eax + 4]
        mov    dword ptr [ecx + edx], esi
        mov    dword ptr [ecx + edx + 4], eax
        mov    eax, dword ptr [ebp - 0x20]
        mov    esi, dword ptr [eax + edi]
        mov    ecx, dword ptr [g_007b9868]
        mov    ecx, dword ptr [ecx]
        mov    eax, dword ptr [eax + edi + 4]
        mov    dword ptr [ecx + edx], esi
        mov    dword ptr [ecx + edx + 4], eax
        mov    ecx, dword ptr [ebp - 8]
        xor    eax, eax
        mov    al, byte ptr [ecx + 0x13]
        test    al, al
        jbe    L_0af3
        and    eax, 0xff
        lea    esi, [ebp - 0x70]
        mov    dword ptr [ebp - 0x90], 1
        mov    dword ptr [ebp - 0x10], eax
        mov    ecx, 0x7da660
        mov    dword ptr [ebp - 0x50], esi
L_0ab4:
        mov    esi, dword ptr [ebp - 0x90]
        test    eax, esi
        je    L_0ad6
        mov    eax, dword ptr [ebp - 0x50]
        mov    eax, dword ptr [eax]
        mov    ebx, dword ptr [ebp - 0x14]
        mov    al, byte ptr [eax + ebx]
        mov    esi, dword ptr [ecx]
        mov    esi, dword ptr [esi]
        mov    ebx, dword ptr [ebp - 0x38]
        mov    byte ptr [esi + ebx], al
        mov    eax, dword ptr [ebp - 0x10]
L_0ad6:
        add    dword ptr [ebp - 0x50], 4
        mov    ebx, dword ptr [ebp - 0x90]
        add    ecx, 8
        shl    ebx, 1
        cmp    ecx, 0x7da670
        mov    dword ptr [ebp - 0x90], ebx
        jl    L_0ab4
L_0af3:
        mov    ecx, dword ptr [ebp - 0x2c]
        mov    esi, dword ptr [ebp - 0x44]
        mov    eax, dword ptr [ebp - 0x14]
        add    ecx, 4
        mov    dword ptr [ebp - 0x2c], ecx
        mov    ecx, 0x10
        add    esi, ecx
        mov    dword ptr [ebp - 0x44], esi
        mov    esi, dword ptr [ebp + 8]
        add    esi, ecx
        add    edi, ecx
        mov    ecx, dword ptr [ebp - 0x18]
        inc    eax
        add    edx, 8
        cmp    eax, ecx
        mov    dword ptr [ebp - 0x14], eax
        mov    dword ptr [ebp + 8], esi
        jl    L_092e
L_0b28:
        mov    ecx, dword ptr [ebp - 0x68]
        mov    edx, dword ptr [g_007da670]
        mov    eax, dword ptr [edx]
        mov    dx, word ptr [ebp - 0x68]
        mov    dword ptr [ebp - 0x20], ecx
        mov    ecx, dword ptr [ebp - 0x8c]
        mov    word ptr [eax + ecx*2], dx
L_0b44:
        mov    eax, dword ptr [ebp - 0x20]
        mov    edx, dword ptr [ebp - 0xb0]
        mov    ecx, dword ptr [ebp - 0x8c]
        and    eax, 0xffff
        add    edx, eax
        mov    eax, dword ptr [ebp - 0xb8]
        inc    ecx
        inc    eax
        mov    dword ptr [ebp - 0xb0], edx
        mov    dword ptr [ebp - 0x8c], ecx
        mov    dword ptr [ebp - 0xb8], eax
L_0b74:
        mov    eax, dword ptr [g_007d98fc]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [ebp - 0x28]
        mov    byte ptr [ecx + edx], 0
L_0b82:
        mov    edi, dword ptr [ebp - 0xc]
        mov    eax, dword ptr [ebp - 0x28]
        mov    ecx, dword ptr [ebp - 8]
        mov    edx, dword ptr [ecx + 0x58]
        add    edi, 3
        inc    eax
        cmp    eax, edx
        mov    dword ptr [ebp - 0xc], edi
        mov    dword ptr [ebp - 0x28], eax
        jl    L_f045
        mov    bl, byte ptr [ebp + 0x1c]
L_0ba3:
        test    bl, bl
        mov    ecx, dword ptr [ebp + 0x10]
        je    L_0baf
        mov    eax, dword ptr [ecx + 0x30]
        jmp    L_0bb9
L_0baf:
        mov    eax, dword ptr [ecx]
        mov    edx, dword ptr [ecx + 0x10]
        shl    eax, 5
        add    eax, edx
L_0bb9:
        mov    edx, dword ptr [ebp - 8]
        xor    esi, esi
        test    bl, bl
        mov    dword ptr [edx + 0x44], eax
        mov    word ptr [edx + 0xa], si
        je    L_0bce
        mov    ecx, dword ptr [ecx + 0x48]
        jmp    L_0bd7
L_0bce:
        mov    edx, dword ptr [ecx + 0xc]
        mov    eax, dword ptr [ecx + 0x28]
        lea    ecx, [eax + edx*2]
L_0bd7:
        mov    eax, dword ptr [ebp - 8]
        mov    dword ptr [eax + 0x50], ecx
        mov    word ptr [eax + 0x54], si
        mov    ecx, dword ptr [eax + 0x18]
        xor    ebx, ebx
        cmp    ecx, esi
        mov    dword ptr [ebp - 0x14], ecx
        mov    dword ptr [ebp - 0xc], ebx
        mov    dword ptr [ebp + 8], esi
        jle    L_0e82
L_0bf7:
        mov    edx, dword ptr [g_007da600]
        mov    edx, dword ptr [edx]
        cmp    byte ptr [edx + ebx], 0
        jne    L_0c0d
        inc    dword ptr [ebp + 8]
        jmp    L_0e76
L_0c0d:
        mov    edx, dword ptr [ebp + 8]
        mov    ecx, ebx
        sub    ecx, edx
        mov    edx, dword ptr [g_007da5f4]
        mov    word ptr [edx + ebx*2], cx
        test    byte ptr [g_007da86c], 2
        jle    L_0d2f
        mov    ecx, dword ptr [eax + 0x28]
        test    ch, 0x3c
        je    L_0d2f
        mov    ecx, dword ptr [ebp - 8]
        mov    edx, dword ptr [ecx + 0x90]
        mov    edx, dword ptr [edx]
        mov    eax, dword ptr [ecx + 0x1c]
        mov    dword ptr [ebp - 0x30], edx
        mov    edx, dword ptr [g_007da68c]
        mov    edx, dword ptr [edx]
        mov    dword ptr [ebp - 0x18], eax
        mov    dword ptr [ebp - 0x64], edx
        mov    edx, dword ptr [ebp - 0x88]
        lea    eax, [eax + edx*8]
        mov    dword ptr [ebp - 0x1c], eax
        xor    eax, eax
        mov    ax, word ptr [ecx + 0xa]
        lea    edx, [eax + eax*4]
        mov    eax, dword ptr [ecx + 0x84]
        lea    esi, [eax + edx*8]
        mov    dword ptr [ebp - 0x48], esi
        mov    ecx, dword ptr [ebp - 0x64]
        fld1    
        mov    edi, dword ptr [ebp - 0xc]
        mov    eax, edi
        shl    eax, 4
        fdiv    dword ptr [eax + ecx + 0xc]
        add    eax, ecx
        mov    edx, dword ptr [ebp - 0x48]
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
        mov    eax, dword ptr [ebp - 0x30]
        test    eax, eax
        fadd    dword ptr [g_007da874]
        fstp    dword ptr [esi]
        fld    dword ptr [g_007da878]
        fmul    dword ptr [esi + 4]
        fadd    dword ptr [g_007da870]
        fstp    dword ptr [esi + 4]
        je    L_0cd4
        mov    ecx, eax
        mov    eax, dword ptr [ecx + ebx*4]
        jmp    L_0cd9
L_0cd4:
        mov    eax, dword ptr [g_007b94a0]
L_0cd9:
        mov    dword ptr [esi + 0x10], eax
        mov    eax, dword ptr [ebp - 0x18]
        mov    edx, dword ptr [eax + ebx*8]
        mov    dword ptr [esi + 0x18], edx
        mov    eax, dword ptr [eax + ebx*8 + 4]
        mov    dword ptr [esi + 0x1c], eax
        mov    eax, dword ptr [ebp - 0x1c]
        mov    ecx, dword ptr [eax + ebx*8]
        mov    dword ptr [esi + 0x20], ecx
        mov    edx, dword ptr [eax + ebx*8 + 4]
        mov    eax, dword ptr [ebp - 8]
        test    byte ptr [eax + 0x13], 1
        mov    dword ptr [esi + 0x24], edx
        je    L_0e25
        mov    ecx, dword ptr [g_007da65c]
        mov    edx, dword ptr [ecx]
        mov    ecx, dword ptr [ebp - 8]
        mov    dl, byte ptr [edx + ebx]
        xor    eax, eax
        mov    ax, word ptr [ecx + 0xa]
        mov    ecx, dword ptr [ecx + 0x84]
        lea    eax, [eax + eax*4]
        mov    byte ptr [ecx + eax*8 + 0x17], dl
        jmp    L_0e25
L_0d2f:
        mov    eax, dword ptr [ebp - 8]
        mov    ecx, dword ptr [eax + 0x1c]
        mov    edx, dword ptr [eax + 0x90]
        xor    esi, esi
        mov    si, word ptr [eax + 0xa]
        mov    dword ptr [ebp - 0x1c], ecx
        mov    ecx, dword ptr [edx]
        mov    edx, dword ptr [g_007da68c]
        mov    dword ptr [ebp - 0x30], ecx
        mov    ecx, dword ptr [edx]
        mov    dword ptr [ebp - 0x64], ecx
        mov    ecx, dword ptr [eax + 0x44]
        shl    esi, 5
        add    esi, ecx
        mov    dword ptr [ebp - 0x48], esi
        mov    ecx, dword ptr [ebp - 0x64]
        fld1    
        mov    edi, dword ptr [ebp - 0xc]
        mov    eax, edi
        shl    eax, 4
        fdiv    dword ptr [eax + ecx + 0xc]
        add    eax, ecx
        mov    edx, dword ptr [ebp - 0x48]
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
        mov    eax, dword ptr [ebp - 0x30]
        test    eax, eax
        fadd    dword ptr [g_007da874]
        fstp    dword ptr [esi]
        fld    dword ptr [g_007da878]
        fmul    dword ptr [esi + 4]
        fadd    dword ptr [g_007da870]
        fstp    dword ptr [esi + 4]
        je    L_0dbc
        mov    edx, eax
        mov    eax, dword ptr [edx + ebx*4]
        jmp    L_0dc1
L_0dbc:
        mov    eax, dword ptr [g_007b94a0]
L_0dc1:
        mov    edi, dword ptr [g_007b9864]
        mov    dword ptr [esi + 0x10], eax
        mov    eax, dword ptr [ebp - 0x1c]
        mov    ecx, dword ptr [eax + ebx*8]
        mov    dword ptr [esi + 0x18], ecx
        mov    edx, dword ptr [eax + ebx*8 + 4]
        mov    ecx, dword ptr [ebp - 0x58]
        lea    eax, [ecx*8]
        add    eax, dword ptr [edi]
        inc    ecx
        mov    dword ptr [esi + 0x1c], edx
        mov    dword ptr [ebp - 0x58], ecx
        mov    ecx, dword ptr [ebp - 0x88]
        lea    edx, [ebx + ecx]
        mov    ecx, dword ptr [ebp - 8]
        mov    esi, dword ptr [ecx + 0x1c]
        mov    edi, dword ptr [esi + edx*8]
        mov    edx, dword ptr [esi + edx*8 + 4]
        mov    dword ptr [eax], edi
        mov    dword ptr [eax + 4], edx
        test    byte ptr [ecx + 0x13], 1
        je    L_0e25
        mov    eax, dword ptr [g_007da65c]
        mov    edx, dword ptr [eax]
        mov    dl, byte ptr [edx + ebx]
        xor    eax, eax
        mov    ax, word ptr [ecx + 0xa]
        mov    ecx, dword ptr [ecx + 0x44]
        shl    eax, 5
        mov    byte ptr [eax + ecx + 0x17], dl
L_0e25:
        mov    al, byte ptr [ebp + 0x17]
        test    al, al
        je    L_0e69
        mov    eax, dword ptr [ebp - 8]
        fld    dword ptr [ebp - 0xc0]
        mov    edx, dword ptr [eax + 0x44]
        xor    ecx, ecx
        mov    cx, word ptr [eax + 0xa]
        shl    ecx, 5
        fadd    dword ptr [ecx + edx + 0x18]
        lea    ecx, [ecx + edx + 0x18]
        fstp    dword ptr [ecx]
        mov    edx, dword ptr [eax + 0x44]
        fld    dword ptr [ebp - 0xc4]
        xor    ecx, ecx
        mov    cx, word ptr [eax + 0xa]
        shl    ecx, 5
        fadd    dword ptr [ecx + edx + 0x1c]
        lea    ecx, [ecx + edx + 0x1c]
        fstp    dword ptr [ecx]
        jmp    L_0e6c
L_0e69:
        mov    eax, dword ptr [ebp - 8]
L_0e6c:
        inc    word ptr [eax + 0xa]
        mov    ecx, dword ptr [ebp - 0x14]
        mov    eax, dword ptr [ebp - 8]
L_0e76:
        inc    ebx
        cmp    ebx, ecx
        mov    dword ptr [ebp - 0xc], ebx
        jl    L_0bf7
L_0e82:
        mov    esi, dword ptr [eax + 0x58]
        xor    edx, edx
        xor    ecx, ecx
        test    esi, esi
        mov    dword ptr [ebp - 0x28], edx
        jle    L_0f1d
L_0e94:
        mov    esi, dword ptr [g_007d98fc]
        mov    esi, dword ptr [esi]
        cmp    byte ptr [esi + edx], 0
        je    L_0f0b
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
        mov    edx, dword ptr [ebp - 0x28]
L_0f0b:
        mov    esi, dword ptr [eax + 0x58]
        add    ecx, 3
        inc    edx
        cmp    edx, esi
        mov    dword ptr [ebp - 0x28], edx
        jl    L_0e94
L_0f1d:
        mov    eax, dword ptr [ebp - 0x8c]
        test    eax, eax
        jle    L_1584
        mov    ecx, dword ptr [ebp - 0x8c]
        xor    eax, eax
        cmp    ecx, eax
        mov    dword ptr [ebp - 0x28], eax
        mov    dword ptr [ebp - 0xc], eax
        jle    L_1584
L_0f41:
        mov    eax, dword ptr [g_007da670]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [ebp - 0x28]
        mov    ax, word ptr [ecx + edx*2]
        mov    dword ptr [ebp - 0x14], 1
        and    eax, 0xffff
        mov    dword ptr [ebp - 0x60], eax
        dec    eax
        cmp    eax, 1
        jle    L_1564
        mov    eax, dword ptr [ebp - 0x58]
        mov    ebx, dword ptr [ebp - 8]
        lea    ecx, [eax*8]
        mov    eax, dword ptr [ebp - 0xc]
        lea    edx, [eax*8 + 8]
        lea    eax, [eax*4 + 4]
        mov    dword ptr [ebp - 0x38], ecx
        mov    dword ptr [ebp + 8], edx
        mov    dword ptr [ebp - 0x18], eax
L_0f8f:
        test    byte ptr [g_007da86c], 2
        jle    L_11ea
        mov    eax, dword ptr [ebx + 0x28]
        test    ah, 0x3c
        je    L_11ea
        mov    ecx, dword ptr [g_007b9868]
        mov    edx, dword ptr [ecx]
        mov    eax, dword ptr [g_007da680]
        mov    ecx, dword ptr [eax]
        mov    dword ptr [ebp - 0xd4], edx
        mov    edx, dword ptr [g_007da608]
        mov    eax, dword ptr [edx]
        mov    dword ptr [ebp - 0xbc], ecx
        mov    ecx, dword ptr [g_007da684]
        mov    edx, dword ptr [ecx]
        mov    ecx, dword ptr [ebp - 0x14]
        mov    dword ptr [ebp - 0xb4], eax
        mov    eax, dword ptr [ebp - 0xc]
        mov    dword ptr [ebp - 0x1c], edx
        lea    edx, [ecx + eax]
        lea    eax, [eax + ecx + 1]
        mov    dword ptr [ebp - 0x30], eax
        xor    eax, eax
        mov    ax, word ptr [ebx + 0xa]
        mov    dword ptr [ebp - 0x48], edx
        mov    edx, dword ptr [ebx + 0x84]
        lea    ecx, [eax + eax*4]
        lea    esi, [edx + ecx*8]
        mov    dword ptr [ebp - 0x64], esi
        mov    ecx, dword ptr [ebp - 0x1c]
        fld1    
        mov    edi, dword ptr [ebp - 0xc]
        mov    eax, edi
        shl    eax, 4
        fdiv    dword ptr [eax + ecx + 0xc]
        add    eax, ecx
        mov    edx, dword ptr [ebp - 0x64]
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
        fstp    st(0)
        fld1    
        fdiv    dword ptr [eax + 0xc]
        fst    dword ptr [edx + 0x34]
        fld    st(0)
        fmul    dword ptr [eax]
        fstp    dword ptr [edx + 0x28]
        fld    dword ptr [eax + 4]
        fmul st(0), st(1)
        fstp    dword ptr [edx + 0x2c]
        fld    dword ptr [eax + 8]
        mov    eax, dword ptr [ebp - 0x48]
        fmul st(0), st(1)
        shl    eax, 4
        add    eax, ecx
        fstp    dword ptr [edx + 0x30]
        fstp    st(0)
        fld1    
        fdiv    dword ptr [eax + 0xc]
        fst    dword ptr [edx + 0x5c]
        fld    st(0)
        fmul    dword ptr [eax]
        fstp    dword ptr [edx + 0x50]
        fld    dword ptr [eax + 4]
        fmul st(0), st(1)
        fstp    dword ptr [edx + 0x54]
        fld    dword ptr [eax + 8]
        fmul st(0), st(1)
        fstp    dword ptr [edx + 0x58]
        fstp    st(0)
        fld    dword ptr [g_007da87c]
        fmul    dword ptr [esi]
        mov    edx, dword ptr [ebp - 0xc]
        mov    eax, dword ptr [ebp - 0xb4]
        mov    ecx, dword ptr [eax + edx*4]
        fadd    dword ptr [g_007da874]
        mov    dword ptr [esi + 0x10], ecx
        mov    ecx, dword ptr [ebp - 0x30]
        mov    edi, dword ptr [eax + ecx*4]
        fstp    dword ptr [esi]
        mov    dword ptr [esi + 0x38], edi
        fld    dword ptr [g_007da878]
        mov    edi, dword ptr [ebp - 0x18]
        fmul    dword ptr [esi + 4]
        mov    eax, dword ptr [edi + eax]
        mov    dword ptr [esi + 0x60], eax
        mov    eax, dword ptr [ebp - 0xbc]
        fadd    dword ptr [g_007da870]
        mov    edi, dword ptr [eax + edx*8]
        mov    dword ptr [esi + 0x18], edi
        lea    edi, [edx*8 + 4]
        fstp    dword ptr [esi + 4]
        mov    dword ptr [ebp - 0x48], edi
        fld    dword ptr [g_007da87c]
        mov    edi, dword ptr [eax + edi]
        fmul    dword ptr [esi + 0x28]
        mov    dword ptr [esi + 0x1c], edi
        mov    edi, dword ptr [eax + ecx*8]
        mov    dword ptr [esi + 0x40], edi
        fadd    dword ptr [g_007da874]
        mov    edi, dword ptr [eax + ecx*8 + 4]
        mov    dword ptr [esi + 0x44], edi
        mov    edi, dword ptr [ebp + 8]
        mov    edi, dword ptr [edi + eax]
        fstp    dword ptr [esi + 0x28]
        fld    dword ptr [g_007da878]
        mov    dword ptr [esi + 0x68], edi
        fmul    dword ptr [esi + 0x2c]
        mov    edi, dword ptr [ebp + 8]
        mov    eax, dword ptr [edi + eax + 4]
        mov    dword ptr [esi + 0x6c], eax
        fadd    dword ptr [g_007da870]
        mov    eax, dword ptr [ebp - 0xd4]
        mov    edx, dword ptr [eax + edx*8]
        mov    dword ptr [esi + 0x20], edx
        mov    edx, dword ptr [ebp - 0x48]
        fstp    dword ptr [esi + 0x2c]
        fld    dword ptr [g_007da87c]
        mov    edx, dword ptr [eax + edx]
        fmul    dword ptr [esi + 0x50]
        fadd    dword ptr [g_007da874]
        fstp    dword ptr [esi + 0x50]
        fld    dword ptr [g_007da878]
        fmul    dword ptr [esi + 0x54]
        fadd    dword ptr [g_007da870]
        fstp    dword ptr [esi + 0x54]
        mov    dword ptr [esi + 0x24], edx
        mov    edx, dword ptr [eax + ecx*8]
        mov    ecx, dword ptr [eax + ecx*8 + 4]
        mov    dword ptr [esi + 0x48], edx
        mov    edx, dword ptr [edi + eax]
        mov    eax, dword ptr [edi + eax + 4]
        mov    dword ptr [esi + 0x74], eax
        test    byte ptr [ebx + 0x13], 1
        mov    dword ptr [esi + 0x4c], ecx
        mov    dword ptr [esi + 0x70], edx
        je    L_1442
        mov    ecx, dword ptr [g_007da660]
        mov    edx, dword ptr [ecx]
        mov    esi, dword ptr [ebx + 0x44]
        xor    eax, eax
        mov    ax, word ptr [ebx + 0xa]
        mov    ecx, eax
        mov    eax, dword ptr [ebp - 0xc]
        mov    dl, byte ptr [edx + eax]
        shl    ecx, 5
        mov    byte ptr [ecx + esi + 0x17], dl
        mov    ecx, dword ptr [g_007da660]
        mov    edx, dword ptr [ecx]
        mov    esi, dword ptr [ebp - 0x14]
        mov    edi, dword ptr [ebx + 0x44]
        xor    ecx, ecx
        mov    cx, word ptr [ebx + 0xa]
        add    edx, esi
        mov    dl, byte ptr [edx + eax + 1]
        shl    ecx, 5
        mov    byte ptr [ecx + edi + 0x37], dl
        mov    ecx, dword ptr [g_007da660]
        mov    edx, dword ptr [ecx]
        xor    ecx, ecx
        mov    cx, word ptr [ebx + 0xa]
        add    edx, esi
        mov    esi, dword ptr [ebx + 0x44]
        mov    dl, byte ptr [edx + eax]
        shl    ecx, 5
        mov    byte ptr [ecx + esi + 0x57], dl
        jmp    L_1442
L_11ea:
        mov    eax, dword ptr [g_007da680]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [g_007da608]
        mov    eax, dword ptr [edx]
        xor    esi, esi
        mov    si, word ptr [ebx + 0xa]
        mov    dword ptr [ebp - 0xbc], ecx
        mov    ecx, dword ptr [g_007da684]
        mov    edx, dword ptr [ecx]
        mov    ecx, dword ptr [ebp - 0x14]
        mov    dword ptr [ebp - 0xb4], eax
        mov    eax, dword ptr [ebp - 0xc]
        mov    dword ptr [ebp - 0x1c], edx
        lea    edx, [ecx + eax]
        mov    dword ptr [ebp - 0x48], edx
        mov    edx, dword ptr [ebx + 0x44]
        shl    esi, 5
        lea    eax, [eax + ecx + 1]
        add    esi, edx
        mov    dword ptr [ebp - 0x24], eax
        mov    dword ptr [ebp - 0x30], eax
        mov    dword ptr [ebp - 0x64], esi
        mov    ecx, dword ptr [ebp - 0x1c]
        fld1    
        mov    edi, dword ptr [ebp - 0xc]
        mov    eax, edi
        shl    eax, 4
        fdiv    dword ptr [eax + ecx + 0xc]
        add    eax, ecx
        mov    edx, dword ptr [ebp - 0x64]
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
        mov    eax, dword ptr [ebp - 0x48]
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
        mov    eax, dword ptr [ebp - 0xb4]
        mov    edi, dword ptr [ebp - 0xc]
        mov    ecx, dword ptr [eax + edi*4]
        fadd    dword ptr [g_007da874]
        mov    dword ptr [esi + 0x10], ecx
        mov    ecx, dword ptr [ebp - 0x30]
        mov    edx, dword ptr [eax + ecx*4]
        fstp    dword ptr [esi]
        mov    dword ptr [esi + 0x30], edx
        fld    dword ptr [g_007da878]
        mov    edx, dword ptr [ebp - 0x18]
        fmul    dword ptr [esi + 4]
        mov    eax, dword ptr [edx + eax]
        mov    dword ptr [esi + 0x50], eax
        mov    eax, dword ptr [ebp - 0xbc]
        fadd    dword ptr [g_007da870]
        mov    edx, dword ptr [eax + edi*8]
        mov    dword ptr [esi + 0x18], edx
        mov    edx, dword ptr [eax + edi*8 + 4]
        fstp    dword ptr [esi + 4]
        mov    dword ptr [esi + 0x1c], edx
        fld    dword ptr [g_007da87c]
        mov    edx, dword ptr [eax + ecx*8]
        fmul    dword ptr [esi + 0x20]
        mov    ecx, dword ptr [eax + ecx*8 + 4]
        mov    dword ptr [esi + 0x3c], ecx
        mov    ecx, dword ptr [ebp + 8]
        fadd    dword ptr [g_007da874]
        mov    dword ptr [esi + 0x38], edx
        mov    edx, dword ptr [ecx + eax]
        mov    eax, dword ptr [ecx + eax + 4]
        fstp    dword ptr [esi + 0x20]
        mov    ecx, dword ptr [ebp - 0x58]
        fld    dword ptr [g_007da878]
        inc    ecx
        fmul    dword ptr [esi + 0x24]
        mov    dword ptr [ebp - 0x58], ecx
        mov    ecx, dword ptr [g_007b9868]
        mov    dword ptr [esi + 0x58], edx
        fadd    dword ptr [g_007da870]
        mov    edx, dword ptr [ebp - 0x38]
        mov    dword ptr [esi + 0x5c], eax
        mov    eax, dword ptr [ecx]
        mov    ecx, dword ptr [g_007b9864]
        fstp    dword ptr [esi + 0x24]
        fld    dword ptr [g_007da87c]
        mov    ecx, dword ptr [ecx]
        fmul    dword ptr [esi + 0x40]
        fadd    dword ptr [g_007da874]
        fstp    dword ptr [esi + 0x40]
        fld    dword ptr [g_007da878]
        fmul    dword ptr [esi + 0x44]
        fadd    dword ptr [g_007da870]
        fstp    dword ptr [esi + 0x44]
        mov    esi, edx
        add    edx, 8
        mov    edi, dword ptr [eax + edi*8]
        mov    dword ptr [esi + ecx], edi
        mov    edi, dword ptr [ebp - 0xc]
        mov    edi, dword ptr [eax + edi*8 + 4]
        mov    dword ptr [esi + ecx + 4], edi
        inc    dword ptr [ebp - 0x58]
        mov    edi, dword ptr [ebp - 0x24]
        mov    edi, dword ptr [eax + edi*8]
        mov    esi, edx
        mov    dword ptr [esi + ecx], edi
        mov    edi, dword ptr [ebp - 0x24]
        mov    edi, dword ptr [eax + edi*8 + 4]
        add    edx, 8
        mov    dword ptr [esi + ecx + 4], edi
        mov    edi, dword ptr [ebp - 0x58]
        mov    esi, edx
        add    edx, 8
        inc    edi
        mov    dword ptr [ebp - 0x38], edx
        mov    edx, dword ptr [ebp + 8]
        mov    dword ptr [ebp - 0x58], edi
        mov    edi, dword ptr [eax + edx]
        mov    edx, dword ptr [eax + edx + 4]
        test    byte ptr [ebx + 0x13], 1
        mov    dword ptr [esi + ecx], edi
        mov    dword ptr [esi + ecx + 4], edx
        je    L_1442
        mov    eax, dword ptr [g_007da660]
        mov    ecx, dword ptr [eax]
        mov    eax, dword ptr [ebp - 0xc]
        mov    cl, byte ptr [ecx + eax]
        mov    esi, dword ptr [ebx + 0x44]
        xor    edx, edx
        mov    dx, word ptr [ebx + 0xa]
        shl    edx, 5
        mov    byte ptr [edx + esi + 0x17], cl
        mov    edx, dword ptr [g_007da660]
        mov    ecx, dword ptr [edx]
        mov    esi, dword ptr [ebp - 0x14]
        mov    edi, dword ptr [ebx + 0x44]
        xor    edx, edx
        mov    dx, word ptr [ebx + 0xa]
        add    ecx, esi
        mov    cl, byte ptr [ecx + eax + 1]
        shl    edx, 5
        mov    byte ptr [edx + edi + 0x37], cl
        mov    edx, dword ptr [g_007da660]
        mov    ecx, dword ptr [edx]
        xor    edx, edx
        mov    dx, word ptr [ebx + 0xa]
        add    ecx, esi
        mov    esi, dword ptr [ebx + 0x44]
        mov    al, byte ptr [ecx + eax]
        shl    edx, 5
        mov    byte ptr [edx + esi + 0x57], al
L_1442:
        mov    al, byte ptr [ebp + 0x17]
        test    al, al
        je    L_14f5
        mov    edx, dword ptr [ebx + 0x44]
        fld    dword ptr [ebp - 0xc0]
        xor    ecx, ecx
        mov    cx, word ptr [ebx + 0xa]
        shl    ecx, 5
        fadd    dword ptr [ecx + edx + 0x18]
        lea    eax, [ecx + edx + 0x18]
        xor    edx, edx
        fstp    dword ptr [eax]
        mov    ecx, dword ptr [ebx + 0x44]
        fld    dword ptr [ebp - 0xc4]
        xor    eax, eax
        mov    ax, word ptr [ebx + 0xa]
        shl    eax, 5
        fadd    dword ptr [eax + ecx + 0x1c]
        lea    eax, [eax + ecx + 0x1c]
        xor    ecx, ecx
        fstp    dword ptr [eax]
        mov    dx, word ptr [ebx + 0xa]
        mov    eax, dword ptr [ebx + 0x44]
        fld    dword ptr [ebp - 0xc0]
        shl    edx, 5
        fadd    dword ptr [edx + eax + 0x38]
        lea    eax, [edx + eax + 0x38]
        fstp    dword ptr [eax]
        mov    cx, word ptr [ebx + 0xa]
        mov    edx, dword ptr [ebx + 0x44]
        fld    dword ptr [ebp - 0xc4]
        shl    ecx, 5
        fadd    dword ptr [ecx + edx + 0x3c]
        lea    eax, [ecx + edx + 0x3c]
        xor    edx, edx
        fstp    dword ptr [eax]
        mov    ecx, dword ptr [ebx + 0x44]
        fld    dword ptr [ebp - 0xc0]
        xor    eax, eax
        mov    ax, word ptr [ebx + 0xa]
        shl    eax, 5
        fadd    dword ptr [eax + ecx + 0x58]
        lea    eax, [eax + ecx + 0x58]
        fstp    dword ptr [eax]
        mov    dx, word ptr [ebx + 0xa]
        mov    eax, dword ptr [ebx + 0x44]
        fld    dword ptr [ebp - 0xc4]
        shl    edx, 5
        fadd    dword ptr [edx + eax + 0x5c]
        lea    eax, [edx + eax + 0x5c]
        fstp    dword ptr [eax]
L_14f5:
        mov    ax, word ptr [ebx + 0xa]
        mov    edx, dword ptr [ebx + 0x50]
        xor    ecx, ecx
        mov    cx, word ptr [ebx + 0x54]
        mov    edi, dword ptr [ebp - 0x18]
        mov    esi, dword ptr [ebp + 8]
        add    edi, 4
        add    esi, 8
        mov    dword ptr [ebp - 0x18], edi
        mov    dword ptr [ebp + 8], esi
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
        mov    ecx, dword ptr [ebp - 0x14]
        mov    edx, dword ptr [ebp - 0x60]
        mov    eax, 3
        add    word ptr [ebx + 0xa], ax
        add    word ptr [ebx + 0x54], ax
        inc    ecx
        lea    eax, [edx - 1]
        cmp    ecx, eax
        mov    dword ptr [ebp - 0x14], ecx
        jl    L_0f8f
L_1564:
        mov    eax, dword ptr [ebp - 0x60]
        mov    esi, dword ptr [ebp - 0xc]
        mov    ecx, dword ptr [ebp - 0x8c]
        add    esi, eax
        mov    eax, dword ptr [ebp - 0x28]
        inc    eax
        cmp    eax, ecx
        mov    dword ptr [ebp - 0xc], esi
        mov    dword ptr [ebp - 0x28], eax
        jl    L_0f41
L_1584:
        test    byte ptr [g_007da86c], 2
        jle    L_15b9
        mov    ecx, dword ptr [ebp - 8]
        mov    eax, dword ptr [ecx + 0x28]
        test    ah, 0x3c
        je    L_15b9
        mov    al, byte ptr [ebp + 0x1c]
        test    al, al
        jne    L_1673
        mov    eax, dword ptr [ebp + 0x10]
        mov    esi, dword ptr [eax + 4]
        xor    edx, edx
        mov    dx, word ptr [ecx + 0xa]
        add    esi, edx
        mov    dword ptr [eax + 4], esi
        jmp    L_166a
L_15b9:
        mov    ebx, dword ptr [ebp - 8]
        mov    esi, dword ptr [ebx + 0x44]
        xor    ecx, ecx
        mov    cx, word ptr [ebx + 0xa]
        shl    ecx, 5
        lea    edi, [esi + ecx]
        mov    eax, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, eax
        mov    al, byte ptr [ebp + 0x1b]
        and    ecx, 3
        test    al, al
        rep movsb
        je    L_1623
        xor    edx, edx
        mov    dx, word ptr [ebx + 0xa]
        test    edx, edx
        jle    L_1655
        mov    ecx, dword ptr [g_007b9864]
        mov    eax, dword ptr [ecx]
        mov    esi, dword ptr [ebx + 0x44]
        mov    ecx, edx
        shl    ecx, 5
        lea    ecx, [ecx + esi + 0x1c]
        mov    esi, edx
L_1600:
        fld    dword ptr [ebp - 0xd8]
        add    eax, 8
        fadd    dword ptr [eax - 8]
        add    ecx, 0x20
        dec    esi
        fstp    dword ptr [ecx - 0x24]
        fld    dword ptr [ebp - 0xdc]
        fadd    dword ptr [eax - 4]
        fstp    dword ptr [ecx - 0x20]
        jne    L_1600
        jmp    L_1655
L_1623:
        xor    edx, edx
        mov    dx, word ptr [ebx + 0xa]
        test    edx, edx
        jle    L_1655
        mov    esi, dword ptr [ebx + 0x44]
        mov    eax, dword ptr [g_007b9864]
        mov    eax, dword ptr [eax]
        mov    ecx, edx
        shl    ecx, 5
        lea    ecx, [ecx + esi + 0x1c]
        mov    esi, edx
L_1642:
        mov    edi, dword ptr [eax]
        mov    dword ptr [ecx - 4], edi
        mov    edi, dword ptr [eax + 4]
        mov    dword ptr [ecx], edi
        add    eax, 8
        add    ecx, 0x20
        dec    esi
        jne    L_1642
L_1655:
        mov    al, byte ptr [ebp + 0x1c]
        test    al, al
        jne    L_1673
        mov    eax, dword ptr [ebp + 0x10]
        mov    ecx, dword ptr [eax]
        add    edx, edx
        add    ecx, edx
        mov    dword ptr [eax], ecx
        mov    ecx, dword ptr [ebp - 8]
L_166a:
        xor    edx, edx
        mov    dx, word ptr [ecx + 0x54]
        add    dword ptr [eax + 0xc], edx
L_1673:
        mov    eax, dword ptr [ebp - 8]
        cmp    word ptr [eax + 0xa], 0
        pop    edi
        setne    cl
        pop    esi
        mov    byte ptr [eax + 0x10], cl
        mov    eax, dword ptr [ebp - 0xb8]
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    0x18
        // jump-table data @ 0x00441690 (6 relocated pointers)
        __emit 0xCD
        __emit 0xF2
        __emit 0x43
        __emit 0x00
        __emit 0xFC
        __emit 0xF2
        __emit 0x43
        __emit 0x00
        __emit 0x04
        __emit 0xF3
        __emit 0x43
        __emit 0x00
        __emit 0x10
        __emit 0xF3
        __emit 0x43
        __emit 0x00
        __emit 0x16
        __emit 0xF3
        __emit 0x43
        __emit 0x00
        __emit 0x1E
        __emit 0xF3
        __emit 0x43
        __emit 0x00
        // jump-table data @ 0x004416A8 (6 relocated pointers)
        __emit 0x73
        __emit 0xF3
        __emit 0x43
        __emit 0x00
        __emit 0x9B
        __emit 0xF3
        __emit 0x43
        __emit 0x00
        __emit 0xA3
        __emit 0xF3
        __emit 0x43
        __emit 0x00
        __emit 0xAF
        __emit 0xF3
        __emit 0x43
        __emit 0x00
        __emit 0xB5
        __emit 0xF3
        __emit 0x43
        __emit 0x00
        __emit 0xBD
        __emit 0xF3
        __emit 0x43
        __emit 0x00
        // jump-table data @ 0x004416C0 (6 relocated pointers)
        __emit 0x68
        __emit 0x01
        __emit 0x44
        __emit 0x00
        __emit 0xBB
        __emit 0x01
        __emit 0x44
        __emit 0x00
        __emit 0xC7
        __emit 0x01
        __emit 0x44
        __emit 0x00
        __emit 0xF3
        __emit 0x01
        __emit 0x44
        __emit 0x00
        __emit 0xFE
        __emit 0x01
        __emit 0x44
        __emit 0x00
        __emit 0x09
        __emit 0x02
        __emit 0x44
        __emit 0x00
        // jump-table data @ 0x004416D8 (14 relocated pointers)
        __emit 0xA5
        __emit 0x01
        __emit 0x44
        __emit 0x00
        __emit 0x19
        __emit 0x04
        __emit 0x44
        __emit 0x00
        __emit 0x25
        __emit 0x04
        __emit 0x44
        __emit 0x00
        __emit 0x51
        __emit 0x04
        __emit 0x44
        __emit 0x00
        __emit 0x5C
        __emit 0x04
        __emit 0x44
        __emit 0x00
        __emit 0x67
        __emit 0x04
        __emit 0x44
        __emit 0x00
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
        __emit 0x88
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0xA1
        __emit 0x90
        __emit 0x95
        __emit 0x7B
        __emit 0x00
        __emit 0x53
        __emit 0x56
    }
}
