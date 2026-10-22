/*
 * FUN_00476d70 (extent 0x476d70-0x478f80) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076dd60;
extern float  g_0076f388;
extern float  g_0076f38c;
extern float  g_007b220c;
extern int    g_007b94a0;
extern int    g_007d99a4;
extern int    g_007d99a8;
extern int    g_007d99ac;
extern int    g_007da5e8;
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
extern void __cdecl FUN_0047b5b0(void);
extern void __cdecl FUN_00491cd0(void);
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_00476d70(void)
{
    __asm {
        push    ebp
        mov    ebp, esp
        sub    esp, 0x1d4
        push    ebx
        mov    ebx, ecx
        mov    eax, dword ptr [ebx + 0x6c]
        test    eax, eax
        push    esi
        push    edi
        mov    dword ptr [ebp - 0x14], ebx
        jne    L_6db8
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
        mov    ecx, ebx
        call    FUN_0047b5b0
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    0x18
L_6db8:
        mov    eax, dword ptr [ebx + 0x64]
        test    eax, eax
        mov    dword ptr [ebp - 0x74], 0
        ja    L_6dd5
        mov    byte ptr [ebx + 0x10], 0
        xor    eax, eax
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    0x18
L_6dd5:
        cmp    word ptr [ebx + 0x56], 0
        mov    ecx, dword ptr [ebx + 0x18]
        mov    dword ptr [ebp - 0x5c], ecx
        jne    L_6dec
        mov    edx, dword ptr [ebx]
        mov    ecx, ebx
        call    dword ptr [edx + 0x98]
L_6dec:
        mov    eax, dword ptr [g_007da68c]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [g_007da688]
        mov    eax, dword ptr [edx]
        mov    esi, dword ptr [ebx + 0x14]
        mov    dword ptr [ebp + 0x18], ecx
        mov    ecx, dword ptr [g_007da600]
        mov    edi, dword ptr [ecx]
        mov    dword ptr [ebp - 0x28], eax
        mov    eax, dword ptr [ebp + 0x14]
        test    eax, eax
        mov    dword ptr [ebp - 0x1c], edi
        je    L_6e86
        mov    eax, dword ptr [ebp - 0x5c]
        test    eax, eax
        mov    dword ptr [ebp - 0x24], 0
        jle    L_6ec8
L_6e28:
        cmp    byte ptr [edi], 0
        je    L_6e5d
        mov    eax, dword ptr [ebp - 0x28]
        mov    ecx, dword ptr [ebp + 8]
        mov    edx, dword ptr [ebp - 0x1c]
        push    eax
        push    ecx
        mov    ecx, dword ptr [ebp + 0x18]
        push    esi
        mov    byte ptr [edx], 0
        call    FUN_0041cb30
        mov    edx, dword ptr [g_007da65c]
        mov    edi, dword ptr [edx]
        add    edi, dword ptr [ebp - 0x24]
        mov    ecx, dword ptr [ebp + 0x14]
        push    esi
        call    FUN_00421f00
        mov    byte ptr [edi], al
        mov    edi, dword ptr [ebp - 0x1c]
L_6e5d:
        mov    ecx, dword ptr [ebp - 0x28]
        mov    eax, dword ptr [ebp - 0x24]
        mov    edx, dword ptr [ebp + 0x18]
        add    ecx, 4
        inc    eax
        add    edx, 0x10
        add    esi, 0xc
        mov    dword ptr [ebp - 0x28], ecx
        mov    ecx, dword ptr [ebp - 0x5c]
        inc    edi
        cmp    eax, ecx
        mov    dword ptr [ebp - 0x24], eax
        mov    dword ptr [ebp + 0x18], edx
        mov    dword ptr [ebp - 0x1c], edi
        jl    L_6e28
        jmp    L_6ec8
L_6e86:
        mov    eax, dword ptr [ebp - 0x5c]
        test    eax, eax
        jle    L_6ec8
        mov    dword ptr [ebp + 0x14], eax
L_6e90:
        cmp    byte ptr [edi], 0
        je    L_6ea9
        mov    eax, dword ptr [ebp - 0x28]
        mov    ecx, dword ptr [ebp + 8]
        push    eax
        push    ecx
        mov    ecx, dword ptr [ebp + 0x18]
        push    esi
        mov    byte ptr [edi], 0
        call    FUN_0041cb30
L_6ea9:
        mov    eax, dword ptr [ebp + 0x18]
        mov    edx, dword ptr [ebp - 0x28]
        add    eax, 0x10
        mov    dword ptr [ebp + 0x18], eax
        mov    eax, dword ptr [ebp + 0x14]
        add    edx, 4
        add    esi, 0xc
        inc    edi
        dec    eax
        mov    dword ptr [ebp - 0x28], edx
        mov    dword ptr [ebp + 0x14], eax
        jne    L_6e90
L_6ec8:
        mov    eax, dword ptr [ebx + 0x24]
        and    eax, 0x3fff
        mov    edx, dword ptr [ebx + 0x64]
        mov    dword ptr [ebp - 0x84], 0
        mov    dword ptr [ebp + 0x18], 0
        mov    dword ptr [ebp - 0x5c], edx
        mov    byte ptr [ebp + 0x17], 0
        mov    dword ptr [ebp - 0x88], 0
        mov    dword ptr [ebp - 0x7c], 0
        je    L_6fc3
        test    eax, eax
        jle    L_6fc3
        mov    ecx, dword ptr [g_007da848]
        mov    esi, dword ptr [ecx + eax*4 + 0x24]
        test    esi, esi
        je    L_6fc3
        mov    edx, dword ptr [esi]
        push    0
        mov    ecx, esi
        call    dword ptr [edx + 4]
        mov    ecx, eax
        call    FUN_00491cd0
        cmp    eax, 0x100
        jl    L_6f3f
        mov    dword ptr [g_007da864], 1
        jmp    L_6f9a
L_6f3f:
        cmp    eax, 0x80
        jl    L_6f52
        mov    dword ptr [g_007da864], 2
        jmp    L_6f9a
L_6f52:
        cmp    eax, 0x40
        jl    L_6f63
        mov    dword ptr [g_007da864], 4
        jmp    L_6f9a
L_6f63:
        cmp    eax, 0x20
        jl    L_6f74
        mov    dword ptr [g_007da864], 8
        jmp    L_6f9a
L_6f74:
        cmp    eax, 0x10
        jl    L_6f85
        mov    dword ptr [g_007da864], 0x10
        jmp    L_6f9a
L_6f85:
        xor    ecx, ecx
        cmp    eax, 8
        setl    cl
        dec    ecx
        and    ecx, 0xffffffe0
        add    ecx, 0x40
        mov    dword ptr [g_007da864], ecx
L_6f9a:
        mov    al, byte ptr [esi + 0x24]
        test    al, al
        jne    L_7034
        mov    eax, dword ptr [esi + 0x28]
        test    eax, eax
        je    L_7034
        mov    edx, dword ptr [eax + 0xc]
        mov    eax, dword ptr [eax + 0x1c]
        mov    byte ptr [ebp + 0x17], 1
        mov    dword ptr [ebp - 0x88], edx
        mov    dword ptr [ebp - 0x7c], eax
L_6fc3:
        xor    eax, eax
        cmp    word ptr [ebx + 0x56], ax
        mov    dword ptr [ebp - 0x80], eax
        mov    dword ptr [ebp - 0x28], eax
        jne    L_6fdb
        mov    edx, dword ptr [ebx]
        mov    ecx, ebx
        call    dword ptr [edx + 0x98]
L_6fdb:
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
        mov    eax, dword ptr [ebp - 0x5c]
        xor    ecx, ecx
        xor    edx, edx
        test    eax, eax
        mov    dword ptr [ebp - 0x24], ecx
        mov    dword ptr [ebp - 8], edx
        jle    L_893c
L_700b:
        mov    esi, dword ptr [g_007da5e8]
        mov    esi, dword ptr [esi]
        mov    eax, dword ptr [ebx + 0x60]
        movzx    ax, byte ptr [eax + ecx]
        add    esi, ecx
        cmp    byte ptr [esi], 0
        mov    dword ptr [ebp - 0x34], esi
        jne    L_703a
        and    eax, 0xffff
        add    edx, eax
        mov    dword ptr [ebp - 8], edx
        jmp    L_892d
L_7034:
        mov    byte ptr [ebp + 0x17], 0
        jmp    L_6fc3
L_703a:
        and    eax, 0xffff
        lea    esi, [eax + edx]
        xor    edi, edi
        cmp    edx, esi
        mov    dword ptr [g_007d99ac], 0x3f
        mov    dword ptr [g_007d99a8], edi
        mov    dword ptr [ebp - 0x6c], esi
        mov    eax, edx
        jge    L_709c
        mov    ecx, dword ptr [g_007da688]
        mov    edx, dword ptr [ecx]
        mov    ecx, dword ptr [ebx + 0x48]
        mov    dword ptr [ebp + 8], edx
        mov    dword ptr [ebp - 0x30], ecx
L_706e:
        mov    ecx, dword ptr [ebp - 0x30]
        xor    edx, edx
        mov    dl, byte ptr [ecx + eax]
        mov    ecx, dword ptr [ebp + 8]
        or    edi, dword ptr [ecx + edx*4]
        lea    edx, [ecx + edx*4]
        mov    ecx, dword ptr [g_007d99ac]
        and    ecx, dword ptr [edx]
        inc    eax
        cmp    eax, esi
        mov    dword ptr [g_007d99ac], ecx
        jl    L_706e
        test    ecx, ecx
        mov    dword ptr [g_007d99a8], edi
        je    L_70a7
L_709c:
        mov    edx, dword ptr [ebp - 0x34]
        mov    byte ptr [edx], 0
        jmp    L_891e
L_70a7:
        test    edi, edi
        jne    L_70d7
        mov    eax, dword ptr [ebp - 0x74]
        mov    ecx, dword ptr [ebp - 0x14]
        inc    eax
        mov    dword ptr [ebp - 0x74], eax
        mov    eax, dword ptr [ebp - 8]
L_70b8:
        mov    edx, dword ptr [ecx + 0x48]
        xor    ebx, ebx
        mov    bl, byte ptr [edx + eax]
        mov    edx, dword ptr [g_007da600]
        mov    edx, dword ptr [edx]
        inc    eax
        mov    byte ptr [ebx + edx], 1
        cmp    eax, dword ptr [ebp - 0x6c]
        jl    L_70b8
        jmp    L_891e
L_70d7:
        cmp    dword ptr [edi*4 + 0x7b2478], 1
        mov    dword ptr [ebp - 0xc], 0
        jne    L_7b71
        mov    ecx, dword ptr [ebp - 8]
L_70ef:
        mov    eax, dword ptr [ebx + 0x48]
        xor    edx, edx
        mov    dl, byte ptr [eax + ecx]
        inc    ecx
        cmp    ecx, esi
        mov    dword ptr [ebp - 0x60], ecx
        mov    esi, ecx
        mov    edi, edx
        jl    L_7106
        mov    esi, dword ptr [ebp - 8]
L_7106:
        mov    edx, dword ptr [ebp - 0x80]
        xor    ecx, ecx
        mov    cl, byte ptr [eax + esi]
        mov    esi, dword ptr [ebp - 0xc]
        and    esi, 0xffff
        add    esi, edx
        mov    edx, dword ptr [g_007da688]
        mov    eax, dword ptr [edx]
        mov    edx, dword ptr [eax + edi*4]
        test    edx, edx
        mov    dword ptr [ebp - 0x10], ecx
        mov    dword ptr [ebp - 0x18], esi
        mov    dword ptr [g_007d99a4], edx
        jne    L_71e9
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
        mov    edx, dword ptr [g_007da608]
        mov    dword ptr [ecx + 0xc], eax
        mov    eax, dword ptr [edx]
        mov    ecx, dword ptr [ebx + 0x68]
        mov    ecx, dword ptr [ecx + edi*4]
        mov    edx, dword ptr [ebx + 0x1c]
        mov    dword ptr [eax + esi*4], ecx
        mov    eax, dword ptr [g_007da680]
        mov    ecx, dword ptr [eax]
        mov    eax, dword ptr [edx + edi*8]
        mov    edx, dword ptr [edx + edi*8 + 4]
        mov    dword ptr [ecx + esi*8], eax
        mov    al, byte ptr [ebx + 0x13]
        test    al, al
        mov    byte ptr [ebp + 0xb], 1
        mov    dword ptr [ecx + esi*8 + 4], edx
        jbe    L_71b7
        test    al, 1
        je    L_71b7
        mov    eax, dword ptr [g_007da65c]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [g_007da660]
        mov    eax, dword ptr [edx]
        mov    cl, byte ptr [ecx + edi]
        mov    byte ptr [esi + eax], cl
L_71b7:
        mov    ecx, dword ptr [ebp - 0xc]
        mov    edx, dword ptr [ebp - 0x10]
        mov    eax, dword ptr [g_007da688]
        mov    eax, dword ptr [eax]
        inc    ecx
        mov    dword ptr [ebp - 0xc], ecx
        lea    ecx, [edx*4]
        mov    edx, dword ptr [ecx + eax]
        inc    esi
        test    edx, edx
        mov    dword ptr [ebp - 0x18], esi
        mov    dword ptr [ebp - 0x1c], ecx
        je    L_7b4b
        mov    edx, dword ptr [g_007d99a4]
        jmp    L_7200
L_71e9:
        mov    ecx, dword ptr [ebp - 0x10]
        shl    ecx, 2
        cmp    dword ptr [ecx + eax], 0
        mov    byte ptr [ebp + 0xb], 0
        mov    dword ptr [ebp - 0x1c], ecx
        jne    L_7b4b
L_7200:
        or    edx, dword ptr [ecx + eax]
        mov    dword ptr [ebp - 4], 1
        mov    eax, dword ptr [ebp - 4]
        mov    dword ptr [g_007d99a4], edx
        xor    ebx, ebx
L_7215:
        test    eax, edx
        jne    L_7227
        shl    eax, 1
        inc    ebx
        cmp    bx, 6
        jb    L_7215
        jmp    L_7385
L_7227:
        cmp    byte ptr [ebp + 0xb], 1
        jne    L_72d7
        mov    edx, dword ptr [g_007da68c]
        mov    eax, dword ptr [ebp - 0x10]
        mov    edx, dword ptr [edx]
        mov    ecx, edi
        shl    eax, 4
        shl    ecx, 4
        and    ebx, 0xffff
        add    eax, edx
        add    ecx, edx
        cmp    ebx, 5
        ja    L_72b9
        jmp    dword ptr [ebx*4 + 0x478f80]
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx + 4]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 4]
L_7266:
        fld    st(1)
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_7372
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        mov    dword ptr [ebp + 0x18], 0
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        jmp    L_737f
        fld    dword ptr [ecx + 4]
        fld    dword ptr [eax + 4]
        jmp    L_7266
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax]
        jmp    L_7266
        fld    dword ptr [ecx]
        fld    dword ptr [eax]
        jmp    L_7266
        fld    dword ptr [ecx + 8]
        fld    dword ptr [eax + 8]
        jmp    L_7266
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx + 8]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 8]
        jmp    L_7266
L_72b9:
        push    0x76df04
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_731e
        int 3    
        mov    dword ptr [ebp + 0x18], 0
        jmp    L_737f
L_72d7:
        mov    eax, dword ptr [g_007da68c]
        mov    edx, dword ptr [eax]
        mov    ecx, dword ptr [ebp - 0x10]
        mov    eax, edi
        shl    eax, 4
        shl    ecx, 4
        and    ebx, 0xffff
        add    eax, edx
        add    ecx, edx
        cmp    ebx, 5
        ja    L_7357
        jmp    dword ptr [ebx*4 + 0x478f98]
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx + 4]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 4]
L_730b:
        fld    st(1)
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_7372
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_731e:
        mov    dword ptr [ebp + 0x18], 0
        jmp    L_737f
        fld    dword ptr [ecx + 4]
        fld    dword ptr [eax + 4]
        jmp    L_730b
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax]
        jmp    L_730b
        fld    dword ptr [ecx]
        fld    dword ptr [eax]
        jmp    L_730b
        fld    dword ptr [ecx + 8]
        fld    dword ptr [eax + 8]
        jmp    L_730b
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx + 8]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 8]
        jmp    L_730b
L_7357:
        push    0x76df04
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_731e
        int 3    
        mov    dword ptr [ebp + 0x18], 0
        jmp    L_737f
L_7372:
        fld    st(1)
        fsub st(0), st(1)
        fdivr st(0), st(2)
        fstp    dword ptr [ebp + 0x18]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_737f:
        mov    dword ptr [ebp - 0x84], ebx
L_7385:
        cmp    byte ptr [ebp + 0xb], 1
        mov    ecx, dword ptr [g_007da68c]
        mov    edx, dword ptr [ecx]
        jne    L_776f
        mov    ecx, dword ptr [ebp - 0x10]
        shl    ecx, 4
        fld    dword ptr [ecx + edx]
        add    ecx, edx
        mov    eax, edi
        shl    eax, 4
        fsub    dword ptr [eax + edx]
        add    eax, edx
        mov    edx, dword ptr [g_007da684]
        mov    edx, dword ptr [edx]
        fmul    dword ptr [ebp + 0x18]
        shl    esi, 4
        add    edx, esi
        fadd    dword ptr [eax]
        fstp    dword ptr [edx]
        fld    dword ptr [ecx + 4]
        fsub    dword ptr [eax + 4]
        fmul    dword ptr [ebp + 0x18]
        fadd    dword ptr [eax + 4]
        fstp    dword ptr [edx + 4]
        fld    dword ptr [ecx + 8]
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [ebp + 0x18]
        fadd    dword ptr [eax + 8]
        fstp    dword ptr [edx + 8]
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [eax + 0xc]
        fmul    dword ptr [ebp + 0x18]
        fadd    dword ptr [eax + 0xc]
        mov    eax, dword ptr [ebp - 0x84]
        mov    ecx, dword ptr [eax*8 + 0x7b2408]
        test    ecx, ecx
        fstp    dword ptr [edx + 0xc]
        je    L_7409
        fld    dword ptr [edx + 0xc]
        fsub    dword ptr [g_007b220c]
        jmp    L_740f
L_7409:
        fld    dword ptr [g_007b220c]
L_740f:
        mov    ecx, dword ptr [ebp - 0x84]
        mov    eax, dword ptr [ecx*8 + 0x7b2404]
        fstp    dword ptr [edx + eax*4]
        mov    ecx, dword ptr [ebp - 0x14]
        mov    ecx, dword ptr [ecx + 0x68]
        mov    edx, dword ptr [ebp - 0x1c]
        mov    eax, dword ptr [edx + ecx]
        mov    ecx, dword ptr [ecx + edi*4]
        mov    edx, ecx
        shr    ecx, 8
        and    edx, 0xff
        mov    esi, ecx
        mov    dword ptr [ebp - 0x15c], edx
        xor    edx, edx
        mov    dword ptr [ebp - 0x158], edx
        fild    qword ptr [ebp - 0x15c]
        shr    ecx, 8
        and    esi, 0xff
        mov    dword ptr [ebp - 0x164], esi
        fmul    dword ptr [g_0076f38c]
        mov    esi, ecx
        mov    dword ptr [ebp - 0x160], edx
        shr    ecx, 8
        fstp    dword ptr [ebp - 0x12c]
        and    esi, 0xff
        fild    qword ptr [ebp - 0x164]
        mov    dword ptr [ebp - 0x170], edx
        and    ecx, 0xff
        mov    dword ptr [ebp - 0x174], esi
        fmul    dword ptr [g_0076f38c]
        mov    dword ptr [ebp - 0x184], ecx
        mov    dword ptr [ebp - 0x180], edx
        mov    ecx, eax
        fstp    dword ptr [ebp - 0x130]
        and    ecx, 0xff
        fild    qword ptr [ebp - 0x174]
        mov    dword ptr [ebp - 0x194], ecx
        mov    dword ptr [ebp - 0x190], edx
        shr    eax, 8
        fmul    dword ptr [g_0076f38c]
        mov    ecx, eax
        and    ecx, 0xff
        mov    dword ptr [ebp - 0x1a4], ecx
        fstp    dword ptr [ebp - 0x134]
        mov    dword ptr [ebp - 0x1a0], edx
        fild    qword ptr [ebp - 0x184]
        shr    eax, 8
        mov    ecx, eax
        and    ecx, 0xff
        fmul    dword ptr [g_0076f38c]
        mov    dword ptr [ebp - 0x1b4], ecx
        mov    dword ptr [ebp - 0x1b0], edx
        shr    eax, 8
        fstp    dword ptr [ebp - 0x128]
        and    eax, 0xff
        fild    qword ptr [ebp - 0x194]
        mov    dword ptr [ebp - 0x1c4], eax
        mov    dword ptr [ebp - 0x1c0], edx
        mov    edx, dword ptr [ebp + 0x18]
        fmul    dword ptr [g_0076f38c]
        push    edx
        lea    eax, [ebp - 0x104]
        push    eax
        fstp    dword ptr [ebp - 0xfc]
        lea    ecx, [ebp - 0x134]
        fild    qword ptr [ebp - 0x1a4]
        push    ecx
        lea    ecx, [ebp - 0xe0]
        mov    dword ptr [ebp - 0xd8], 0xbf800000
        fmul    dword ptr [g_0076f38c]
        mov    dword ptr [ebp - 0xdc], 0xbf800000
        mov    dword ptr [ebp - 0xe0], 0xbf800000
        mov    dword ptr [ebp - 0xd4], 0xbf800000
        fstp    dword ptr [ebp - 0x100]
        fild    qword ptr [ebp - 0x1b4]
        fmul    dword ptr [g_0076f38c]
        fstp    dword ptr [ebp - 0x104]
        fild    qword ptr [ebp - 0x1c4]
        fmul    dword ptr [g_0076f38c]
        fstp    dword ptr [ebp - 0xf8]
        call    FUN_004286e0
        lea    edx, [ebp - 0xe0]
        mov    dword ptr [ebp + 8], edx
        fld    dword ptr [g_0076f388]
        mov    esi, dword ptr [ebp + 8]
        fld    dword ptr [esi + 0xc]
        mov    ecx, dword ptr [esi + 0xc]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0xe4]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xe4]
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
        fstp    dword ptr [ebp - 0xe4]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xe4]
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
        fstp    dword ptr [ebp - 0xe4]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xe4]
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
        fstp    dword ptr [ebp - 0xe4]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xe4]
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
        mov    ecx, dword ptr [ebp - 0x18]
        mov    esi, dword ptr [ebp - 0x14]
        mov    ebx, dword ptr [ebp - 0x10]
        mov    dword ptr [edx + ecx*4], eax
        mov    eax, dword ptr [esi + 0x1c]
        fld    dword ptr [eax + ebx*8]
        mov    edx, dword ptr [g_007da680]
        fsub    dword ptr [eax + edi*8]
        mov    edx, dword ptr [edx]
        lea    ecx, [edx + ecx*8]
        lea    edx, [eax + edi*8 + 4]
        fmul    dword ptr [ebp + 0x18]
        fadd    dword ptr [eax + edi*8]
        fstp    dword ptr [ecx]
        fld    dword ptr [eax + ebx*8 + 4]
        mov    al, byte ptr [esi + 0x13]
        test    al, al
        fsub    dword ptr [edx]
        fmul    dword ptr [ebp + 0x18]
        fadd    dword ptr [edx]
        fstp    dword ptr [ecx + 4]
        jbe    L_7b41
        test    al, 1
        je    L_7b41
        mov    eax, dword ptr [g_007da65c]
        mov    eax, dword ptr [eax]
        mov    cl, byte ptr [eax + edi]
        xor    edx, edx
        mov    esi, ebx
        mov    dl, byte ptr [eax + esi]
        mov    eax, dword ptr [g_007da660]
        mov    byte ptr [ebp - 0xc4], cl
        mov    ecx, dword ptr [ebp - 0xc4]
        and    ecx, 0xff
        mov    dword ptr [ebp - 0x34], ecx
        sub    edx, ecx
        mov    ecx, dword ptr [eax]
        mov    dword ptr [ebp + 8], edx
        fild    dword ptr [ebp + 8]
        fmul    dword ptr [ebp + 0x18]
        fiadd    dword ptr [ebp - 0x34]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [ebp + 8]
        mov    dl, byte ptr [ebp + 8]
        jmp    L_7b3b
L_776f:
        mov    eax, dword ptr [ebp - 0x10]
        mov    ecx, edi
        shl    ecx, 4
        fld    dword ptr [ecx + edx]
        add    ecx, edx
        shl    eax, 4
        fsub    dword ptr [eax + edx]
        add    eax, edx
        mov    edx, dword ptr [g_007da684]
        mov    edx, dword ptr [edx]
        fmul    dword ptr [ebp + 0x18]
        shl    esi, 4
        add    edx, esi
        fadd    dword ptr [eax]
        fstp    dword ptr [edx]
        fld    dword ptr [ecx + 4]
        fsub    dword ptr [eax + 4]
        fmul    dword ptr [ebp + 0x18]
        fadd    dword ptr [eax + 4]
        fstp    dword ptr [edx + 4]
        fld    dword ptr [ecx + 8]
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [ebp + 0x18]
        fadd    dword ptr [eax + 8]
        fstp    dword ptr [edx + 8]
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [eax + 0xc]
        fmul    dword ptr [ebp + 0x18]
        fadd    dword ptr [eax + 0xc]
        mov    eax, dword ptr [ebp - 0x84]
        mov    ecx, dword ptr [eax*8 + 0x7b2408]
        test    ecx, ecx
        fstp    dword ptr [edx + 0xc]
        je    L_77e1
        fld    dword ptr [edx + 0xc]
        fsub    dword ptr [g_007b220c]
        jmp    L_77e7
L_77e1:
        fld    dword ptr [g_007b220c]
L_77e7:
        mov    ecx, dword ptr [ebp - 0x84]
        mov    eax, dword ptr [ecx*8 + 0x7b2404]
        fstp    dword ptr [edx + eax*4]
        mov    ecx, dword ptr [ebp - 0x14]
        mov    ecx, dword ptr [ecx + 0x68]
        mov    eax, dword ptr [ecx + edi*4]
        mov    edx, dword ptr [ebp - 0x1c]
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
        fmul    dword ptr [g_0076f38c]
        mov    esi, ecx
        mov    dword ptr [ebp - 0x148], edx
        shr    ecx, 8
        fstp    dword ptr [ebp - 0x11c]
        and    esi, 0xff
        fild    qword ptr [ebp - 0x14c]
        mov    dword ptr [ebp - 0x1c8], edx
        and    ecx, 0xff
        mov    dword ptr [ebp - 0x1cc], esi
        fmul    dword ptr [g_0076f38c]
        mov    dword ptr [ebp - 0x13c], ecx
        mov    dword ptr [ebp - 0x138], edx
        mov    ecx, eax
        fstp    dword ptr [ebp - 0x120]
        and    ecx, 0xff
        fild    qword ptr [ebp - 0x1cc]
        mov    dword ptr [ebp - 0x19c], ecx
        mov    dword ptr [ebp - 0x198], edx
        shr    eax, 8
        fmul    dword ptr [g_0076f38c]
        mov    ecx, eax
        and    ecx, 0xff
        mov    dword ptr [ebp - 0x16c], ecx
        fstp    dword ptr [ebp - 0x124]
        mov    dword ptr [ebp - 0x168], edx
        fild    qword ptr [ebp - 0x13c]
        shr    eax, 8
        mov    ecx, eax
        and    ecx, 0xff
        fmul    dword ptr [g_0076f38c]
        mov    dword ptr [ebp - 0x1bc], ecx
        mov    dword ptr [ebp - 0x1b8], edx
        shr    eax, 8
        fstp    dword ptr [ebp - 0x118]
        and    eax, 0xff
        fild    qword ptr [ebp - 0x19c]
        mov    dword ptr [ebp - 0x17c], eax
        mov    dword ptr [ebp - 0x178], edx
        mov    edx, dword ptr [ebp + 0x18]
        fmul    dword ptr [g_0076f38c]
        push    edx
        lea    eax, [ebp - 0x114]
        push    eax
        fstp    dword ptr [ebp - 0x10c]
        lea    ecx, [ebp - 0x124]
        fild    qword ptr [ebp - 0x16c]
        push    ecx
        lea    ecx, [ebp - 0xf4]
        mov    dword ptr [ebp - 0xec], 0xbf800000
        fmul    dword ptr [g_0076f38c]
        mov    dword ptr [ebp - 0xf0], 0xbf800000
        mov    dword ptr [ebp - 0xf4], 0xbf800000
        mov    dword ptr [ebp - 0xe8], 0xbf800000
        fstp    dword ptr [ebp - 0x110]
        fild    qword ptr [ebp - 0x1bc]
        fmul    dword ptr [g_0076f38c]
        fstp    dword ptr [ebp - 0x114]
        fild    qword ptr [ebp - 0x17c]
        fmul    dword ptr [g_0076f38c]
        fstp    dword ptr [ebp - 0x108]
        call    FUN_004286e0
        lea    edx, [ebp - 0xf4]
        mov    dword ptr [ebp + 8], edx
        fld    dword ptr [g_0076f388]
        mov    esi, dword ptr [ebp + 8]
        fld    dword ptr [esi + 0xc]
        mov    ecx, dword ptr [esi + 0xc]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0xb8]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xb8]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    dword ptr [ebp - 0xcc], ebx
        fld    dword ptr [esi]
        mov    ecx, dword ptr [esi]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0xb8]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xb8]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0xcc]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0xcc], ecx
        fld    dword ptr [esi + 4]
        mov    ecx, dword ptr [esi + 4]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0xb8]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xb8]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0xcc]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0xcc], ecx
        mov    ecx, dword ptr [esi + 8]
        fadd    dword ptr [esi + 8]
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0xb8]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xb8]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0xcc]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0xcc], ecx
        mov    eax, dword ptr [g_007da608]
        mov    edx, dword ptr [eax]
        mov    eax, dword ptr [ebp - 0xcc]
        mov    ecx, dword ptr [ebp - 0x18]
        mov    esi, dword ptr [ebp - 0x14]
        mov    dword ptr [edx + ecx*4], eax
        mov    eax, dword ptr [esi + 0x1c]
        mov    edx, dword ptr [g_007da680]
        fld    dword ptr [eax + edi*8]
        mov    edx, dword ptr [edx]
        lea    ecx, [edx + ecx*8]
        mov    edx, dword ptr [ebp - 0x10]
        fsub    dword ptr [eax + edx*8]
        fmul    dword ptr [ebp + 0x18]
        fadd    dword ptr [eax + edx*8]
        lea    edx, [eax + edx*8 + 4]
        fstp    dword ptr [ecx]
        fld    dword ptr [eax + edi*8 + 4]
        mov    al, byte ptr [esi + 0x13]
        test    al, al
        fsub    dword ptr [edx]
        fmul    dword ptr [ebp + 0x18]
        fadd    dword ptr [edx]
        fstp    dword ptr [ecx + 4]
        jbe    L_7b41
        test    al, 1
        je    L_7b41
        mov    eax, dword ptr [g_007da65c]
        mov    eax, dword ptr [eax]
        mov    ecx, dword ptr [ebp - 0x10]
        mov    dl, byte ptr [eax + ecx]
        mov    byte ptr [ebp - 0xc0], dl
        mov    ecx, dword ptr [ebp - 0xc0]
        xor    edx, edx
        mov    dl, byte ptr [eax + edi]
        mov    eax, dword ptr [g_007da660]
        and    ecx, 0xff
        mov    dword ptr [ebp - 0x34], ecx
        sub    edx, ecx
        mov    ecx, dword ptr [eax]
        mov    dword ptr [ebp + 8], edx
        fild    dword ptr [ebp + 8]
        fmul    dword ptr [ebp + 0x18]
        fiadd    dword ptr [ebp - 0x34]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [ebp + 8]
        mov    dl, byte ptr [ebp + 8]
L_7b3b:
        mov    eax, dword ptr [ebp - 0x18]
        mov    byte ptr [eax + ecx], dl
L_7b41:
        mov    eax, dword ptr [ebp - 0xc]
        mov    ebx, dword ptr [ebp - 0x14]
        inc    eax
        mov    dword ptr [ebp - 0xc], eax
L_7b4b:
        mov    esi, dword ptr [ebp - 0x6c]
        mov    ecx, dword ptr [ebp - 0x60]
        cmp    ecx, esi
        jl    L_70ef
        mov    ecx, dword ptr [g_007da670]
        mov    edx, dword ptr [ecx]
        mov    ax, word ptr [ebp - 0xc]
        mov    ecx, dword ptr [ebp - 0x28]
        mov    word ptr [edx + ecx*2], ax
        jmp    L_88f2
L_7b71:
        mov    esi, dword ptr [g_007da66c]
        mov    eax, dword ptr [esi + 0x38]
        mov    edx, dword ptr [esi + 0x30]
        mov    ecx, dword ptr [esi + 0x40]
        mov    dword ptr [ebp - 0x50], eax
        mov    eax, dword ptr [esi + 0x48]
        mov    dword ptr [ebp - 0x48], eax
        mov    al, byte ptr [ebx + 0x13]
        test    al, al
        mov    dword ptr [ebp - 0x54], edx
        mov    dword ptr [ebp - 0x4c], ecx
        mov    byte ptr [ebp - 0xd0], al
        jbe    L_7bd3
        and    eax, 0xff
        mov    dword ptr [ebp + 8], eax
        mov    edi, 1
        lea    ecx, [ebp - 0x44]
        lea    eax, [esi + 0x50]
        mov    dword ptr [ebp - 0x2c], 2
L_7bb6:
        test    dword ptr [ebp + 8], edi
        je    L_7bc2
        mov    edx, dword ptr [eax]
        mov    dword ptr [ecx], edx
        mov    edx, dword ptr [ebp - 0x54]
L_7bc2:
        mov    esi, dword ptr [ebp - 0x2c]
        add    eax, 8
        add    ecx, 4
        shl    edi, 1
        dec    esi
        mov    dword ptr [ebp - 0x2c], esi
        jne    L_7bb6
L_7bd3:
        mov    eax, dword ptr [g_007da68c]
        mov    eax, dword ptr [eax]
        mov    ecx, dword ptr [ebp - 8]
        mov    dword ptr [ebp - 0x34], eax
        mov    eax, dword ptr [ebx + 0x68]
        mov    dword ptr [ebp - 0xb4], eax
        mov    eax, dword ptr [ebx + 0x1c]
        mov    dword ptr [ebp - 0xb0], eax
        mov    eax, dword ptr [g_007da688]
        mov    eax, dword ptr [eax]
        xor    edi, edi
        mov    dword ptr [ebp - 0x38], ecx
        mov    dword ptr [ebp - 0x2c], edi
        mov    dword ptr [ebp - 0x64], eax
        jmp    L_7c09
L_7c06:
        mov    edx, dword ptr [ebp - 0x54]
L_7c09:
        mov    esi, dword ptr [ebp - 0x30]
        mov    ebx, dword ptr [ebp - 0x34]
        xor    eax, eax
        mov    al, byte ptr [esi + ecx]
        and    edi, 0xffff
        mov    dword ptr [ebp - 0x1a8], 0
        mov    dword ptr [ebp - 0x188], 0
        mov    esi, eax
        mov    ecx, esi
        shl    ecx, 4
        add    ecx, ebx
        mov    ebx, dword ptr [ecx]
        mov    eax, edi
        shl    eax, 4
        mov    dword ptr [eax + edx], ebx
        mov    ebx, dword ptr [ecx + 4]
        mov    dword ptr [eax + edx + 4], ebx
        mov    ebx, dword ptr [ecx + 8]
        mov    ecx, dword ptr [ecx + 0xc]
        mov    dword ptr [eax + edx + 0xc], ecx
        mov    dword ptr [eax + edx + 8], ebx
        mov    edx, dword ptr [ebp - 0xb4]
        mov    ecx, dword ptr [edx + esi*4]
        mov    edx, ecx
        and    edx, 0xff
        shr    ecx, 8
        mov    dword ptr [ebp - 0x1ac], edx
        fild    qword ptr [ebp - 0x1ac]
        mov    edx, dword ptr [ebp - 0x50]
        mov    ebx, ecx
        and    ebx, 0xff
        fmul    dword ptr [g_0076f38c]
        shr    ecx, 8
        mov    dword ptr [ebp - 0x18c], ebx
        mov    ebx, ecx
        fstp    dword ptr [eax + edx + 8]
        and    ebx, 0xff
        fild    qword ptr [ebp - 0x18c]
        mov    dword ptr [ebp - 0x144], ebx
        xor    ebx, ebx
        mov    dword ptr [ebp - 0x140], ebx
        fmul    dword ptr [g_0076f38c]
        shr    ecx, 8
        and    ecx, 0xff
        mov    dword ptr [ebp - 0x154], ecx
        mov    ecx, dword ptr [ebp - 0xb0]
        fstp    dword ptr [eax + edx + 4]
        fild    qword ptr [ebp - 0x144]
        mov    dword ptr [ebp - 0x150], ebx
        fmul    dword ptr [g_0076f38c]
        fstp    dword ptr [eax + edx]
        fild    qword ptr [ebp - 0x154]
        fmul    dword ptr [g_0076f38c]
        fstp    dword ptr [eax + edx + 0xc]
        mov    edx, dword ptr [ecx + esi*8]
        mov    eax, dword ptr [ebp - 0x4c]
        mov    ecx, dword ptr [ecx + esi*8 + 4]
        mov    dword ptr [eax + edi*8], edx
        mov    edx, dword ptr [ebp - 0x64]
        mov    dword ptr [eax + edi*8 + 4], ecx
        mov    eax, dword ptr [edx + esi*4]
        mov    ecx, dword ptr [ebp - 0x48]
        mov    dword ptr [ecx + edi*4], eax
        mov    eax, dword ptr [ebp - 0xd0]
        test    al, al
        jbe    L_7d68
        mov    edx, eax
        and    edx, 0xff
        mov    dword ptr [ebp - 4], 1
        mov    dword ptr [ebp + 8], edx
        lea    ecx, [ebp - 0x44]
        mov    eax, 0x7da65c
L_7d35:
        mov    ebx, dword ptr [ebp - 4]
        test    edx, ebx
        je    L_7d4b
        mov    edx, dword ptr [eax]
        mov    edx, dword ptr [edx]
        mov    dl, byte ptr [edx + esi]
        mov    ebx, dword ptr [ecx]
        mov    byte ptr [edi + ebx], dl
        mov    edx, dword ptr [ebp + 8]
L_7d4b:
        mov    ebx, dword ptr [ebp - 4]
        add    eax, 8
        shl    ebx, 1
        add    ecx, 4
        cmp    eax, 0x7da66c
        mov    dword ptr [ebp - 4], ebx
        jl    L_7d35
        mov    eax, dword ptr [ebp - 0xd0]
        xor    ebx, ebx
L_7d68:
        mov    ecx, dword ptr [ebp - 0x38]
        mov    edi, dword ptr [ebp - 0x2c]
        mov    edx, dword ptr [ebp - 0x6c]
        inc    ecx
        inc    edi
        cmp    ecx, edx
        mov    dword ptr [ebp - 0x38], ecx
        mov    dword ptr [ebp - 0x2c], edi
        jl    L_7c06
        mov    ecx, dword ptr [g_007da66c]
        mov    edx, dword ptr [ecx]
        mov    dword ptr [ebp - 0xac], edx
        mov    edx, dword ptr [ecx + 8]
        mov    dword ptr [ebp - 0xa8], edx
        mov    edx, dword ptr [ecx + 0x10]
        xor    esi, esi
        test    al, al
        mov    dword ptr [ebp - 0xa4], edx
        mov    edx, dword ptr [ecx + 0x18]
        mov    word ptr [ebp - 0x3c], di
        mov    dword ptr [ebp - 0x30], esi
        mov    dword ptr [ebp - 0xa0], edx
        jbe    L_7dee
        and    eax, 0xff
        mov    edi, 1
        mov    dword ptr [ebp + 8], eax
        lea    edx, [ebp - 0x9c]
        add    ecx, 0x20
        mov    dword ptr [ebp - 0x2c], 2
L_7dd4:
        test    dword ptr [ebp + 8], edi
        je    L_7ddd
        mov    eax, dword ptr [ecx]
        mov    dword ptr [edx], eax
L_7ddd:
        mov    eax, dword ptr [ebp - 0x2c]
        add    ecx, 8
        add    edx, 4
        shl    edi, 1
        dec    eax
        mov    dword ptr [ebp - 0x2c], eax
        jne    L_7dd4
L_7dee:
        mov    edi, 1
        mov    word ptr [ebp - 0x94], bx
        mov    ebx, dword ptr [ebp - 0x14]
        mov    dword ptr [ebp - 4], edi
        mov    dword ptr [ebp - 0x34], 4
L_7e07:
        xor    ecx, ecx
        mov    dword ptr [ebp - 0x1c], ecx
        mov    dword ptr [ebp - 0x18], 0x7b2404
        mov    dword ptr [ebp - 0xb4], 6
L_7e1d:
        test    dword ptr [g_007d99a8], edi
        je    L_8638
        mov    edx, dword ptr [ebp - 0x3c]
        and    edx, 0xffff
        mov    dword ptr [ebp - 0x38], ecx
        mov    dword ptr [ebp - 0x2c], edx
        jle    L_8534
        mov    eax, dword ptr [ebp - 0x48]
        mov    ecx, dword ptr [ebp - 0x4c]
        mov    dword ptr [ebp - 0x58], eax
        mov    eax, dword ptr [ebp - 0x50]
        mov    dword ptr [ebp - 0x70], ecx
        mov    ecx, dword ptr [ebp - 0x54]
        lea    ebx, [eax + 0xc]
        sub    eax, ecx
        mov    dword ptr [ebp - 0xb0], ebx
        lea    esi, [ecx + 8]
        mov    dword ptr [ebp - 0x68], eax
L_7e61:
        mov    ecx, dword ptr [ebp - 0x38]
        lea    eax, [ecx + 1]
        xor    ecx, ecx
        cmp    eax, edx
        setge    cl
        mov    dword ptr [ebp - 0x60], eax
        dec    ecx
        and    ecx, eax
        mov    edx, ecx
        mov    ecx, dword ptr [ebp - 0x58]
        mov    ecx, dword ptr [ecx]
        test    edi, ecx
        mov    dword ptr [ebp - 0x10], edx
        mov    dword ptr [g_007d99a4], ecx
        jne    L_7fa5
        mov    ecx, dword ptr [ebp - 0x94]
        mov    edi, dword ptr [esi - 8]
        mov    edx, dword ptr [ebp - 0xac]
        and    ecx, 0xffff
        mov    eax, ecx
        shl    eax, 4
        mov    dword ptr [eax + edx], edi
        mov    edi, dword ptr [esi - 4]
        mov    dword ptr [eax + edx + 4], edi
        mov    edi, dword ptr [esi]
        mov    dword ptr [eax + edx + 8], edi
        mov    edi, dword ptr [esi + 4]
        mov    dword ptr [eax + edx + 0xc], edi
        mov    edx, dword ptr [ebp - 0x58]
        mov    edx, dword ptr [edx]
        mov    edi, dword ptr [ebp - 0xa0]
        mov    dword ptr [edi + ecx*4], edx
        mov    edx, dword ptr [ebp - 0xa8]
        mov    edi, dword ptr [ebx - 0xc]
        mov    dword ptr [eax + edx], edi
        mov    edi, dword ptr [ebx - 8]
        mov    dword ptr [eax + edx + 4], edi
        mov    edi, dword ptr [ebp - 0x68]
        mov    edi, dword ptr [esi + edi]
        mov    dword ptr [eax + edx + 8], edi
        mov    edi, dword ptr [ebx]
        mov    dword ptr [eax + edx + 0xc], edi
        mov    edx, dword ptr [ebp - 0x70]
        mov    edi, dword ptr [edx]
        mov    eax, dword ptr [ebp - 0xa4]
        mov    dword ptr [eax + ecx*8], edi
        mov    edx, dword ptr [edx + 4]
        mov    dword ptr [eax + ecx*8 + 4], edx
        xor    eax, eax
        mov    eax, dword ptr [ebp - 0x14]
        mov    al, byte ptr [eax + 0x13]
        test    al, al
        jbe    L_7f5a
        mov    edx, eax
        and    edx, 0xff
        mov    edi, 1
        xor    eax, eax
        mov    dword ptr [ebp - 4], edi
        mov    dword ptr [ebp + 8], edx
        mov    dword ptr [ebp - 0xc], eax
L_7f27:
        test    edx, edi
        je    L_7f48
        mov    edx, dword ptr [ebp + eax - 0x44]
        mov    edi, dword ptr [ebp - 0x38]
        mov    dl, byte ptr [edx + edi]
        mov    eax, dword ptr [ebp + eax - 0x9c]
        mov    edi, dword ptr [ebp - 4]
        mov    byte ptr [eax + ecx], dl
        mov    eax, dword ptr [ebp - 0xc]
        mov    edx, dword ptr [ebp + 8]
L_7f48:
        add    eax, 4
        shl    edi, 1
        cmp    eax, 8
        mov    dword ptr [ebp - 0xc], eax
        mov    dword ptr [ebp - 4], edi
        jl    L_7f27
        jmp    L_7f5d
L_7f5a:
        mov    edi, dword ptr [ebp - 4]
L_7f5d:
        mov    eax, dword ptr [ebp - 0x10]
        mov    ecx, dword ptr [ebp - 0x48]
        mov    edx, dword ptr [ecx + eax*4]
        inc    word ptr [ebp - 0x94]
        test    edx, edi
        je    L_8502
        mov    edi, eax
        mov    eax, dword ptr [ebp - 0x18]
        shl    edi, 4
        cmp    eax, 0x7b242c
        ja    L_8045
        mov    edx, dword ptr [ebp - 0x1c]
        jmp    dword ptr [edx*4 + 0x478fb0]
        fld    dword ptr [esi + 4]
        mov    edx, dword ptr [ebp - 0x54]
        fsub    dword ptr [esi - 4]
        fld    dword ptr [edx + edi + 0xc]
        fsub    dword ptr [edx + edi + 4]
        jmp    L_8001
L_7fa5:
        mov    ecx, dword ptr [ebp - 0x48]
        test    dword ptr [ecx + edx*4], edi
        jne    L_8505
        mov    edi, dword ptr [ebp - 0x10]
        mov    eax, dword ptr [ebp - 0x18]
        shl    edi, 4
        cmp    eax, 0x7b242c
        ja    L_8276
        mov    eax, dword ptr [ebp - 0x1c]
        jmp    dword ptr [eax*4 + 0x478fc8]
        mov    edx, dword ptr [ebp - 0x54]
        fld    dword ptr [edx + edi + 0xc]
        fsub    dword ptr [edx + edi + 4]
        fld    dword ptr [esi + 4]
        fsub    dword ptr [esi - 4]
        jmp    L_8232
        mov    edx, dword ptr [ebp - 0x54]
        fld    dword ptr [esi - 4]
        fld    dword ptr [edx + edi + 4]
        jmp    L_8001
        fld    dword ptr [esi + 4]
        mov    edx, dword ptr [ebp - 0x54]
        fsub    dword ptr [esi - 8]
        fld    dword ptr [edx + edi + 0xc]
        fsub    dword ptr [edx + edi]
L_8001:
        fld    st(1)
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_8063
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        mov    dword ptr [ebp + 0x18], 0
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        jmp    L_8070
        mov    edx, dword ptr [ebp - 0x54]
        fld    dword ptr [esi - 8]
        fld    dword ptr [edx + edi]
        jmp    L_8001
        mov    edx, dword ptr [ebp - 0x54]
        fld    dword ptr [esi]
        fld    dword ptr [edx + edi + 8]
        jmp    L_8001
        fld    dword ptr [esi + 4]
        mov    edx, dword ptr [ebp - 0x54]
        fsub    dword ptr [esi]
        fld    dword ptr [edx + edi + 0xc]
        fsub    dword ptr [edx + edi + 8]
        jmp    L_8001
L_8045:
        push    0x76df04
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_8057
        int 3    
L_8057:
        mov    edx, dword ptr [ebp - 0x54]
        mov    dword ptr [ebp + 0x18], 0
        jmp    L_8070
L_8063:
        fld    st(1)
        fsub st(0), st(1)
        fdivr st(0), st(2)
        fstp    dword ptr [ebp + 0x18]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_8070:
        fld    dword ptr [edx + edi]
        mov    ecx, dword ptr [ebp - 0x94]
        fsub    dword ptr [esi - 8]
        mov    eax, dword ptr [ebp - 0xac]
        and    ecx, 0xffff
        mov    dword ptr [ebp - 0xc], ecx
        fmul    dword ptr [ebp + 0x18]
        shl    ecx, 4
        add    eax, ecx
        fadd    dword ptr [esi - 8]
        fstp    dword ptr [eax]
        fld    dword ptr [edx + edi + 4]
        fsub    dword ptr [esi - 4]
        fmul    dword ptr [ebp + 0x18]
        fadd    dword ptr [esi - 4]
        fstp    dword ptr [eax + 4]
        fld    dword ptr [edx + edi + 8]
        fsub    dword ptr [esi]
        fmul    dword ptr [ebp + 0x18]
        fadd    dword ptr [esi]
        fstp    dword ptr [eax + 8]
        fld    dword ptr [edx + edi + 0xc]
        mov    edx, dword ptr [ebp - 0x18]
        cmp    dword ptr [edx + 4], 0
        fsub    dword ptr [esi + 4]
        fmul    dword ptr [ebp + 0x18]
        fadd    dword ptr [esi + 4]
        fstp    dword ptr [eax + 0xc]
        je    L_80da
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [g_007b220c]
        jmp    L_80e0
L_80da:
        fld    dword ptr [g_007b220c]
L_80e0:
        mov    edx, dword ptr [edx]
        fstp    dword ptr [eax + edx*4]
        mov    edx, dword ptr [ebp - 0x50]
        fld    dword ptr [edx + edi]
        mov    edx, dword ptr [ebp - 0xa8]
        fsub    dword ptr [ebx - 0xc]
        fmul    dword ptr [ebp + 0x18]
        fadd    dword ptr [ebx - 0xc]
        fstp    dword ptr [ecx + edx]
        mov    edx, dword ptr [ebp - 0x50]
        fld    dword ptr [edx + edi + 4]
        mov    edx, dword ptr [ebp - 0xa8]
        fsub    dword ptr [ebx - 8]
        fmul    dword ptr [ebp + 0x18]
        fadd    dword ptr [ebx - 8]
        fstp    dword ptr [ecx + edx + 4]
        mov    edx, dword ptr [ebp - 0x50]
        fld    dword ptr [edx + edi + 8]
        mov    edx, dword ptr [ebp - 0x68]
        fsub    dword ptr [esi + edx]
        fmul    dword ptr [ebp + 0x18]
        fadd    dword ptr [esi + edx]
        mov    edx, dword ptr [ebp - 0xa8]
        fstp    dword ptr [ecx + edx + 8]
        mov    edx, dword ptr [ebp - 0x50]
        fld    dword ptr [edx + edi + 0xc]
        mov    edx, dword ptr [ebp - 0xa8]
        fsub    dword ptr [ebx]
        mov    edi, dword ptr [ebp - 0xa4]
        fmul    dword ptr [ebp + 0x18]
        fadd    dword ptr [ebx]
        mov    ebx, dword ptr [ebp - 0xc]
        fstp    dword ptr [ecx + edx + 0xc]
        mov    edx, dword ptr [ebp - 0x10]
        mov    ecx, dword ptr [ebp - 0x4c]
        fld    dword ptr [ecx + edx*8]
        mov    ecx, dword ptr [ebp - 0x70]
        fsub    dword ptr [ecx]
        fmul    dword ptr [ebp + 0x18]
        fadd    dword ptr [ecx]
        fstp    dword ptr [edi + ebx*8]
        mov    ebx, dword ptr [ebp - 0x4c]
        fld    dword ptr [ebx + edx*8 + 4]
        fsub    dword ptr [ecx + 4]
        fmul    dword ptr [ebp + 0x18]
        fadd    dword ptr [ecx + 4]
        mov    ecx, dword ptr [ebp - 0xc]
        fstp    dword ptr [edi + ecx*8 + 4]
        xor    ecx, ecx
        mov    ecx, dword ptr [ebp - 0x14]
        mov    cl, byte ptr [ecx + 0x13]
        test    cl, cl
        jbe    L_845d
        mov    edi, ecx
        and    edi, 0xff
        mov    dword ptr [ebp - 4], 1
        mov    dword ptr [ebp + 8], edi
        xor    ecx, ecx
L_81a6:
        mov    ebx, dword ptr [ebp - 4]
        test    edi, ebx
        je    L_8201
        mov    edi, dword ptr [ebp + ecx - 0x44]
        mov    ebx, dword ptr [ebp - 0x38]
        mov    bl, byte ptr [edi + ebx]
        mov    byte ptr [ebp - 0xbc], bl
        mov    ebx, dword ptr [ebp - 0xbc]
        and    ebx, 0xff
        mov    dword ptr [ebp - 0x64], ebx
        xor    ebx, ebx
        mov    bl, byte ptr [edi + edx]
        mov    edx, dword ptr [ebp - 0x64]
        mov    edi, dword ptr [ebp - 0xc]
        sub    ebx, edx
        mov    edx, dword ptr [ebp + ecx - 0x9c]
        mov    dword ptr [ebp - 0x20], ebx
        fild    dword ptr [ebp - 0x20]
        fmul    dword ptr [ebp + 0x18]
        fiadd    dword ptr [ebp - 0x64]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [ebp - 0x20]
        mov    bl, byte ptr [ebp - 0x20]
        mov    byte ptr [edx + edi], bl
        mov    edi, dword ptr [ebp + 8]
        mov    edx, dword ptr [ebp - 0x10]
L_8201:
        mov    ebx, dword ptr [ebp - 4]
        add    ecx, 4
        shl    ebx, 1
        cmp    ecx, 8
        mov    dword ptr [ebp - 4], ebx
        jl    L_81a6
        jmp    L_845d
        mov    edx, dword ptr [ebp - 0x54]
        fld    dword ptr [edx + edi + 4]
        fld    dword ptr [esi - 4]
        jmp    L_8232
        mov    edx, dword ptr [ebp - 0x54]
        fld    dword ptr [edx + edi + 0xc]
        fsub    dword ptr [edx + edi]
        fld    dword ptr [esi + 4]
        fsub    dword ptr [esi - 8]
L_8232:
        fld    st(1)
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_8294
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        mov    dword ptr [ebp + 0x18], 0
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        jmp    L_82a1
        mov    edx, dword ptr [ebp - 0x54]
        fld    dword ptr [edx + edi]
        fld    dword ptr [esi - 8]
        jmp    L_8232
        mov    edx, dword ptr [ebp - 0x54]
        fld    dword ptr [edx + edi + 8]
        fld    dword ptr [esi]
        jmp    L_8232
        mov    edx, dword ptr [ebp - 0x54]
        fld    dword ptr [edx + edi + 0xc]
        fsub    dword ptr [edx + edi + 8]
        fld    dword ptr [esi + 4]
        fsub    dword ptr [esi]
        jmp    L_8232
L_8276:
        push    0x76df04
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_8288
        int 3    
L_8288:
        mov    edx, dword ptr [ebp - 0x54]
        mov    dword ptr [ebp + 0x18], 0
        jmp    L_82a1
L_8294:
        fld    st(1)
        fsub st(0), st(1)
        fdivr st(0), st(2)
        fstp    dword ptr [ebp + 0x18]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_82a1:
        fld    dword ptr [esi - 8]
        mov    ecx, dword ptr [ebp - 0x94]
        fsub    dword ptr [edx + edi]
        mov    eax, dword ptr [ebp - 0xac]
        and    ecx, 0xffff
        mov    dword ptr [ebp - 0xc], ecx
        fmul    dword ptr [ebp + 0x18]
        shl    ecx, 4
        add    eax, ecx
        fadd    dword ptr [edx + edi]
        lea    edx, [edx + edi + 4]
        fstp    dword ptr [eax]
        fld    dword ptr [esi - 4]
        fsub    dword ptr [edx]
        fmul    dword ptr [ebp + 0x18]
        fadd    dword ptr [edx]
        mov    edx, dword ptr [ebp - 0x54]
        lea    edx, [edx + edi + 8]
        fstp    dword ptr [eax + 4]
        fld    dword ptr [esi]
        fsub    dword ptr [edx]
        fmul    dword ptr [ebp + 0x18]
        fadd    dword ptr [edx]
        mov    edx, dword ptr [ebp - 0x54]
        lea    edx, [edx + edi + 0xc]
        fstp    dword ptr [eax + 8]
        fld    dword ptr [esi + 4]
        fsub    dword ptr [edx]
        fmul    dword ptr [ebp + 0x18]
        fadd    dword ptr [edx]
        mov    edx, dword ptr [ebp - 0x18]
        cmp    dword ptr [edx + 4], 0
        fstp    dword ptr [eax + 0xc]
        je    L_8315
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [g_007b220c]
        jmp    L_831b
L_8315:
        fld    dword ptr [g_007b220c]
L_831b:
        mov    edx, dword ptr [edx]
        fstp    dword ptr [eax + edx*4]
        mov    edx, dword ptr [ebp - 0x50]
        fld    dword ptr [ebx - 0xc]
        fsub    dword ptr [edx + edi]
        fmul    dword ptr [ebp + 0x18]
        fadd    dword ptr [edx + edi]
        mov    edx, dword ptr [ebp - 0xa8]
        fstp    dword ptr [ecx + edx]
        mov    edx, dword ptr [ebp - 0x50]
        fld    dword ptr [ebx - 8]
        lea    edx, [edx + edi + 4]
        fsub    dword ptr [edx]
        fmul    dword ptr [ebp + 0x18]
        fadd    dword ptr [edx]
        mov    edx, dword ptr [ebp - 0xa8]
        fstp    dword ptr [ecx + edx + 4]
        mov    edx, dword ptr [ebp - 0x50]
        lea    edx, [edx + edi + 8]
        mov    dword ptr [ebp + 8], edx
        mov    edx, dword ptr [ebp - 0x68]
        fld    dword ptr [esi + edx]
        mov    edx, dword ptr [ebp + 8]
        fsub    dword ptr [edx]
        fmul    dword ptr [ebp + 0x18]
        fadd    dword ptr [edx]
        mov    edx, dword ptr [ebp - 0xa8]
        fstp    dword ptr [ecx + edx + 8]
        mov    edx, dword ptr [ebp - 0x50]
        fld    dword ptr [ebx]
        lea    edi, [edx + edi + 0xc]
        fsub    dword ptr [edi]
        mov    edx, dword ptr [ebp - 0xa8]
        mov    ebx, dword ptr [ebp - 0xc]
        fmul    dword ptr [ebp + 0x18]
        fadd    dword ptr [edi]
        mov    edi, dword ptr [ebp - 0xa4]
        fstp    dword ptr [ecx + edx + 0xc]
        mov    ecx, dword ptr [ebp - 0x70]
        fld    dword ptr [ecx]
        mov    ecx, dword ptr [ebp - 0x4c]
        mov    edx, dword ptr [ebp - 0x10]
        fsub    dword ptr [ecx + edx*8]
        fmul    dword ptr [ebp + 0x18]
        fadd    dword ptr [ecx + edx*8]
        lea    ecx, [ecx + edx*8 + 4]
        fstp    dword ptr [edi + ebx*8]
        mov    ebx, dword ptr [ebp - 0x70]
        fld    dword ptr [ebx + 4]
        fsub    dword ptr [ecx]
        fmul    dword ptr [ebp + 0x18]
        fadd    dword ptr [ecx]
        mov    ecx, dword ptr [ebp - 0xc]
        fstp    dword ptr [edi + ecx*8 + 4]
        xor    ecx, ecx
        mov    ecx, dword ptr [ebp - 0x14]
        mov    cl, byte ptr [ecx + 0x13]
        test    cl, cl
        jbe    L_845d
        and    ecx, 0xff
        xor    edi, edi
        mov    dword ptr [ebp - 4], 1
        mov    dword ptr [ebp + 8], ecx
        mov    dword ptr [ebp - 0x10], edi
L_83ee:
        mov    ebx, dword ptr [ebp - 4]
        test    ecx, ebx
        je    L_844a
        mov    edi, dword ptr [ebp + edi - 0x44]
        mov    cl, byte ptr [edi + edx]
        mov    ebx, dword ptr [ebp - 0x38]
        mov    byte ptr [ebp - 0x90], cl
        mov    ecx, dword ptr [ebp - 0x90]
        and    ecx, 0xff
        mov    dword ptr [ebp - 0x64], ecx
        xor    ecx, ecx
        mov    cl, byte ptr [edi + ebx]
        sub    ecx, dword ptr [ebp - 0x64]
        mov    edi, dword ptr [ebp - 0xc]
        mov    dword ptr [ebp - 0x20], ecx
        fild    dword ptr [ebp - 0x20]
        mov    ecx, dword ptr [ebp - 0x10]
        mov    ecx, dword ptr [ebp + ecx - 0x9c]
        fmul    dword ptr [ebp + 0x18]
        fiadd    dword ptr [ebp - 0x64]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [ebp - 0x20]
        mov    bl, byte ptr [ebp - 0x20]
        mov    byte ptr [ecx + edi], bl
        mov    edi, dword ptr [ebp - 0x10]
        mov    ecx, dword ptr [ebp + 8]
L_844a:
        mov    ebx, dword ptr [ebp - 4]
        add    edi, 4
        shl    ebx, 1
        cmp    edi, 8
        mov    dword ptr [ebp - 0x10], edi
        mov    dword ptr [ebp - 4], ebx
        jl    L_83ee
L_845d:
        mov    dword ptr [ebp - 0x20], eax
        mov    dword ptr [ebp + 8], 0
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
        mov    dword ptr [ebp + 8], edx
        mov    edx, dword ptr [ebp + 8]
        mov    eax, dword ptr [ebp - 0xa0]
        mov    ecx, dword ptr [ebp - 0xc]
        inc    word ptr [ebp - 0x94]
        mov    edi, dword ptr [ebp - 4]
        mov    ebx, dword ptr [ebp - 0xb0]
        mov    dword ptr [eax + ecx*4], edx
L_8502:
        mov    eax, dword ptr [ebp - 0x60]
L_8505:
        mov    edx, dword ptr [ebp - 0x70]
        mov    ecx, dword ptr [ebp - 0x58]
        add    edx, 8
        mov    dword ptr [ebp - 0x70], edx
        mov    edx, dword ptr [ebp - 0x2c]
        add    ecx, 4
        add    ebx, 0x10
        add    esi, 0x10
        cmp    eax, edx
        mov    dword ptr [ebp - 0x38], eax
        mov    dword ptr [ebp - 0x58], ecx
        mov    dword ptr [ebp - 0xb0], ebx
        jl    L_7e61
        mov    esi, dword ptr [ebp - 0x30]
L_8534:
        mov    eax, dword ptr [g_007da66c]
        mov    ebx, dword ptr [ebp - 0x14]
        lea    edx, [esi + esi*2]
        shl    edx, 4
        mov    ecx, dword ptr [eax + edx]
        add    eax, edx
        mov    edx, dword ptr [eax + 8]
        mov    dword ptr [ebp - 0x50], edx
        mov    edx, dword ptr [eax + 0x18]
        mov    dword ptr [ebp - 0x48], edx
        xor    edx, edx
        mov    dl, byte ptr [ebx + 0x13]
        test    dl, dl
        mov    dword ptr [ebp - 0x54], ecx
        mov    ecx, dword ptr [eax + 0x10]
        mov    dword ptr [ebp - 0x4c], ecx
        jbe    L_85a6
        mov    ebx, edx
        xor    eax, eax
        and    ebx, 0xff
        mov    edi, 1
        mov    dword ptr [ebp + 8], ebx
        lea    ecx, [ebp - 0x44]
        jmp    L_857f
L_857c:
        mov    ebx, dword ptr [ebp + 8]
L_857f:
        test    ebx, edi
        je    L_8598
        mov    ebx, dword ptr [g_007da66c]
        lea    esi, [esi + esi*2]
        lea    esi, [eax + esi*2]
        mov    esi, dword ptr [ebx + esi*8 + 0x20]
        mov    dword ptr [ecx], esi
        mov    esi, dword ptr [ebp - 0x30]
L_8598:
        mov    ebx, dword ptr [ebp - 0x14]
        inc    eax
        add    ecx, 4
        shl    edi, 1
        cmp    eax, 2
        jl    L_857c
L_85a6:
        mov    ax, word ptr [ebp - 0x94]
        xor    ecx, ecx
        test    esi, esi
        sete    cl
        mov    word ptr [ebp - 0x3c], ax
        mov    esi, ecx
        mov    ecx, dword ptr [g_007da66c]
        lea    eax, [esi + esi*2]
        shl    eax, 4
        add    eax, ecx
        test    dl, dl
        mov    ecx, dword ptr [eax]
        mov    dword ptr [ebp - 0xac], ecx
        mov    ecx, dword ptr [eax + 8]
        mov    dword ptr [ebp - 0xa8], ecx
        mov    ecx, dword ptr [eax + 0x10]
        mov    eax, dword ptr [eax + 0x18]
        mov    dword ptr [ebp - 0x30], esi
        mov    dword ptr [ebp - 0xa4], ecx
        mov    dword ptr [ebp - 0xa0], eax
        jbe    L_862f
        xor    eax, eax
        and    edx, 0xff
        mov    edi, 1
        mov    dword ptr [ebp + 8], edx
        lea    ecx, [ebp - 0x9c]
L_8608:
        test    edx, edi
        je    L_8624
        mov    ebx, dword ptr [g_007da66c]
        lea    edx, [esi + esi*2]
        lea    edx, [eax + edx*2]
        mov    edx, dword ptr [ebx + edx*8 + 0x20]
        mov    ebx, dword ptr [ebp - 0x14]
        mov    dword ptr [ecx], edx
        mov    edx, dword ptr [ebp + 8]
L_8624:
        inc    eax
        add    ecx, 4
        shl    edi, 1
        cmp    eax, 2
        jl    L_8608
L_862f:
        xor    ecx, ecx
        mov    word ptr [ebp - 0x94], cx
L_8638:
        mov    eax, dword ptr [ebp - 0x1c]
        mov    edx, dword ptr [ebp - 0x18]
        shl    edi, 1
        inc    eax
        mov    dword ptr [ebp - 0x1c], eax
        mov    eax, dword ptr [ebp - 0xb4]
        add    edx, 8
        dec    eax
        mov    dword ptr [ebp - 4], edi
        mov    dword ptr [ebp - 0x18], edx
        mov    dword ptr [ebp - 0xb4], eax
        jne    L_7e1d
        mov    edx, dword ptr [ebp - 0x3c]
        xor    eax, eax
        and    edx, 0xffff
        jle    L_86a8
        mov    ecx, dword ptr [ebp - 0x48]
L_8670:
        or    eax, dword ptr [ecx]
        add    ecx, 4
        dec    edx
        jne    L_8670
        xor    ecx, ecx
        cmp    eax, ecx
        je    L_86a8
        mov    ecx, dword ptr [ebp - 0x34]
        mov    edx, ecx
        dec    ecx
        test    edx, edx
        mov    dword ptr [ebp - 0x34], ecx
        jne    L_7e07
        xor    ecx, ecx
        cmp    eax, ecx
        je    L_86a8
        mov    eax, dword ptr [g_007da5e8]
        mov    edx, dword ptr [eax]
        mov    ecx, dword ptr [ebp - 0x24]
        mov    byte ptr [edx + ecx], 0
        jmp    L_892a
L_86a8:
        mov    eax, dword ptr [ebp - 0x3c]
        xor    edx, edx
        and    eax, 0xffff
        mov    dword ptr [ebp - 0x2c], eax
        jle    L_88d9
        mov    eax, dword ptr [ebp - 0x4c]
        mov    ecx, dword ptr [ebp - 0x50]
        mov    dword ptr [ebp - 0x18], eax
        mov    eax, dword ptr [ebp - 0x80]
        mov    dword ptr [ebp - 0x58], ecx
        lea    ecx, [eax*8]
        mov    dword ptr [ebp - 0x60], ecx
        lea    ecx, [eax*4]
        shl    eax, 4
        mov    dword ptr [ebp - 0x1c], eax
        mov    eax, dword ptr [ebp - 0x54]
        mov    dword ptr [ebp - 0x68], ecx
        lea    edi, [eax + 8]
L_86ea:
        mov    ecx, dword ptr [ebp - 0x80]
        lea    eax, [edx + ecx]
        mov    ecx, dword ptr [g_007da684]
        mov    ebx, dword ptr [ecx]
        mov    ecx, dword ptr [edi - 8]
        mov    dword ptr [ebp - 0x20], eax
        mov    eax, dword ptr [ebp - 0x1c]
        add    eax, ebx
        mov    dword ptr [eax], ecx
        mov    ecx, dword ptr [edi - 4]
        mov    dword ptr [eax + 4], ecx
        mov    ecx, dword ptr [edi]
        mov    dword ptr [eax + 8], ecx
        mov    ecx, dword ptr [edi + 4]
        mov    dword ptr [eax + 0xc], ecx
        mov    eax, dword ptr [ebp - 0x58]
        mov    dword ptr [ebp + 8], eax
        fld    dword ptr [g_0076f388]
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
        mov    dword ptr [ebp - 0x78], ebx
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
        mov    ecx, dword ptr [ebp - 0x78]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0x78], ecx
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
        mov    ecx, dword ptr [ebp - 0x78]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0x78], ecx
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
        mov    ecx, dword ptr [ebp - 0x78]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0x78], ecx
        mov    ecx, dword ptr [g_007da608]
        mov    eax, dword ptr [ecx]
        mov    ecx, dword ptr [ebp - 0x78]
        mov    esi, dword ptr [ebp - 0x68]
        mov    dword ptr [esi + eax], ecx
        mov    eax, dword ptr [g_007da680]
        mov    esi, dword ptr [eax]
        mov    ecx, dword ptr [ebp - 0x60]
        mov    eax, dword ptr [ebp - 0x18]
        add    ecx, esi
        mov    esi, dword ptr [eax]
        mov    eax, dword ptr [eax + 4]
        mov    dword ptr [ecx], esi
        mov    dword ptr [ecx + 4], eax
        mov    ecx, dword ptr [ebp - 0x14]
        xor    eax, eax
        mov    al, byte ptr [ecx + 0x13]
        test    al, al
        jbe    L_8898
        lea    esi, [ebp - 0x44]
        and    eax, 0xff
        mov    dword ptr [ebp - 0x30], esi
        mov    esi, dword ptr [ebp - 0x20]
        mov    dword ptr [ebp - 4], 1
        mov    dword ptr [ebp + 8], eax
        mov    ecx, 0x7da660
L_8868:
        mov    ebx, dword ptr [ebp - 4]
        test    eax, ebx
        je    L_8881
        mov    eax, dword ptr [ebp - 0x30]
        mov    eax, dword ptr [eax]
        mov    ebx, dword ptr [ecx]
        mov    al, byte ptr [eax + edx]
        mov    ebx, dword ptr [ebx]
        mov    byte ptr [ebx + esi], al
        mov    eax, dword ptr [ebp + 8]
L_8881:
        add    dword ptr [ebp - 0x30], 4
        mov    ebx, dword ptr [ebp - 4]
        add    ecx, 8
        shl    ebx, 1
        cmp    ecx, 0x7da670
        mov    dword ptr [ebp - 4], ebx
        jl    L_8868
L_8898:
        mov    ebx, dword ptr [ebp - 0x68]
        mov    esi, dword ptr [ebp - 0x1c]
        mov    ecx, dword ptr [ebp - 0x18]
        add    ebx, 4
        mov    eax, 0x10
        add    esi, eax
        mov    dword ptr [ebp - 0x68], ebx
        mov    ebx, dword ptr [ebp - 0x58]
        add    ebx, eax
        add    edi, eax
        mov    dword ptr [ebp - 0x1c], esi
        mov    esi, dword ptr [ebp - 0x60]
        mov    eax, 8
        add    esi, eax
        add    ecx, eax
        mov    eax, dword ptr [ebp - 0x2c]
        inc    edx
        cmp    edx, eax
        mov    dword ptr [ebp - 0x58], ebx
        mov    dword ptr [ebp - 0x60], esi
        mov    dword ptr [ebp - 0x18], ecx
        jl    L_86ea
L_88d9:
        mov    ecx, dword ptr [ebp - 0x3c]
        mov    edx, dword ptr [g_007da670]
        mov    eax, dword ptr [edx]
        mov    dx, word ptr [ebp - 0x3c]
        mov    dword ptr [ebp - 0xc], ecx
        mov    ecx, dword ptr [ebp - 0x28]
        mov    word ptr [eax + ecx*2], dx
L_88f2:
        mov    eax, dword ptr [ebp - 0xc]
        mov    edx, dword ptr [ebp - 0x80]
        mov    ecx, dword ptr [ebp - 0x28]
        and    eax, 0xffff
        add    edx, eax
        mov    eax, dword ptr [ebp - 0x74]
        inc    ecx
        inc    eax
        mov    dword ptr [ebp - 0x74], eax
        mov    eax, dword ptr [g_007da5e8]
        mov    dword ptr [ebp - 0x80], edx
        mov    edx, dword ptr [ebp - 0x24]
        mov    dword ptr [ebp - 0x28], ecx
        mov    ecx, dword ptr [eax]
        mov    byte ptr [ecx + edx], 0
L_891e:
        mov    eax, dword ptr [ebp - 0x6c]
        mov    ebx, dword ptr [ebp - 0x14]
        mov    ecx, dword ptr [ebp - 0x24]
        mov    dword ptr [ebp - 8], eax
L_892a:
        mov    edx, dword ptr [ebp - 8]
L_892d:
        mov    eax, dword ptr [ebp - 0x5c]
        inc    ecx
        cmp    ecx, eax
        mov    dword ptr [ebp - 0x24], ecx
        jl    L_700b
L_893c:
        mov    dl, byte ptr [ebp + 0x1c]
        test    dl, dl
        mov    ecx, dword ptr [ebp + 0x10]
        je    L_894b
        mov    eax, dword ptr [ecx + 0x30]
        jmp    L_8958
L_894b:
        mov    eax, dword ptr [ecx]
        mov    esi, dword ptr [ecx + 0x10]
        mov    ecx, dword ptr [ebp + 0x10]
        shl    eax, 5
        add    eax, esi
L_8958:
        xor    esi, esi
        test    dl, dl
        mov    dword ptr [ebx + 0x44], eax
        mov    word ptr [ebx + 0xa], si
        je    L_896a
        mov    eax, dword ptr [ecx + 0x48]
        jmp    L_8973
L_896a:
        mov    edx, dword ptr [ecx + 0xc]
        mov    eax, dword ptr [ecx + 0x28]
        lea    eax, [eax + edx*2]
L_8973:
        mov    ecx, dword ptr [g_007da600]
        mov    ecx, dword ptr [ecx + 4]
        mov    dword ptr [ebx + 0x50], eax
        xor    eax, eax
        cmp    ecx, esi
        mov    word ptr [ebx + 0x54], si
        mov    dword ptr [ebp - 0x38], ecx
        mov    dword ptr [ebp - 8], eax
        mov    dword ptr [ebp + 8], esi
        jle    L_8add
L_8996:
        mov    edx, dword ptr [g_007da600]
        mov    edx, dword ptr [edx]
        cmp    byte ptr [edx + eax], 0
        jne    L_89ac
        inc    dword ptr [ebp + 8]
        jmp    L_8ad1
L_89ac:
        mov    ecx, dword ptr [g_007da5f4]
        mov    dx, word ptr [ebp + 8]
        mov    word ptr [ecx + eax*2], dx
        test    byte ptr [ebx + 0x13], 1
        je    L_89db
        mov    ecx, dword ptr [g_007da65c]
        mov    edx, dword ptr [ecx]
        mov    esi, dword ptr [ebx + 0x44]
        mov    dl, byte ptr [edx + eax]
        xor    ecx, ecx
        mov    cx, word ptr [ebx + 0xa]
        shl    ecx, 5
        mov    byte ptr [ecx + esi + 0x17], dl
L_89db:
        mov    ecx, dword ptr [ebx + 0x68]
        mov    eax, dword ptr [ebx + 0x1c]
        mov    edx, dword ptr [g_007da68c]
        xor    esi, esi
        mov    si, word ptr [ebx + 0xa]
        mov    dword ptr [ebp + 0x18], ecx
        mov    ecx, dword ptr [ebx + 0x44]
        mov    dword ptr [ebp - 0x20], eax
        mov    eax, dword ptr [edx]
        mov    dword ptr [ebp - 0x90], eax
        shl    esi, 5
        add    esi, ecx
        mov    dword ptr [ebp - 0x8c], esi
        mov    ecx, dword ptr [ebp - 0x90]
        fld1    
        mov    edi, dword ptr [ebp - 8]
        mov    eax, edi
        shl    eax, 4
        fdiv    dword ptr [eax + ecx + 0xc]
        add    eax, ecx
        mov    edx, dword ptr [ebp - 0x8c]
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
        je    L_8a6f
        mov    ecx, eax
        mov    eax, dword ptr [ebp - 8]
        mov    ecx, dword ptr [ecx + eax*4]
        jmp    L_8a78
L_8a6f:
        mov    ecx, dword ptr [g_007b94a0]
        mov    eax, dword ptr [ebp - 8]
L_8a78:
        mov    dword ptr [esi + 0x10], ecx
        mov    ecx, dword ptr [ebp - 0x20]
        mov    edx, dword ptr [ecx + eax*8]
        mov    dword ptr [esi + 0x18], edx
        mov    eax, dword ptr [ecx + eax*8 + 4]
        mov    dword ptr [esi + 0x1c], eax
        mov    al, byte ptr [ebp + 0x17]
        test    al, al
        je    L_8ac7
        mov    edx, dword ptr [ebx + 0x44]
        fld    dword ptr [ebp - 0x88]
        xor    ecx, ecx
        mov    cx, word ptr [ebx + 0xa]
        shl    ecx, 5
        fadd    dword ptr [ecx + edx + 0x18]
        lea    eax, [ecx + edx + 0x18]
        fstp    dword ptr [eax]
        mov    ecx, dword ptr [ebx + 0x44]
        fld    dword ptr [ebp - 0x7c]
        xor    eax, eax
        mov    ax, word ptr [ebx + 0xa]
        shl    eax, 5
        fadd    dword ptr [eax + ecx + 0x1c]
        lea    eax, [eax + ecx + 0x1c]
        fstp    dword ptr [eax]
L_8ac7:
        inc    word ptr [ebx + 0xa]
        mov    ecx, dword ptr [ebp - 0x38]
        mov    eax, dword ptr [ebp - 8]
L_8ad1:
        inc    eax
        cmp    eax, ecx
        mov    dword ptr [ebp - 8], eax
        jl    L_8996
L_8add:
        mov    eax, dword ptr [ebp - 0x5c]
        xor    edi, edi
        xor    edx, edx
        test    eax, eax
        mov    dword ptr [ebp - 0x24], edi
        jle    L_8bd9
L_8aef:
        mov    eax, dword ptr [ebx + 0x60]
        mov    ecx, dword ptr [g_007da5e8]
        movzx    si, byte ptr [eax + edi]
        mov    eax, dword ptr [ecx]
        cmp    byte ptr [eax + edi], 0
        jne    L_8b10
        and    esi, 0xffff
        jmp    L_8bc8
L_8b10:
        and    esi, 0xffff
        mov    eax, 1
        lea    ecx, [esi - 1]
        cmp    ecx, eax
        mov    dword ptr [ebp + 0x18], esi
        jle    L_8bc8
L_8b29:
        mov    edi, dword ptr [g_007da5f4]
        xor    ecx, ecx
        mov    ecx, dword ptr [ebx + 0x48]
        mov    cl, byte ptr [ecx + edx]
        mov    esi, ecx
        movzx    cx, cl
        and    esi, 0xff
        sub    cx, word ptr [edi + esi*2]
        mov    edi, dword ptr [ebx + 0x50]
        xor    esi, esi
        mov    si, word ptr [ebx + 0x54]
        mov    word ptr [edi + esi*2], cx
        mov    edi, dword ptr [g_007da5f4]
        xor    ecx, ecx
        mov    ecx, dword ptr [ebx + 0x48]
        add    ecx, eax
        mov    cl, byte ptr [ecx + edx + 1]
        mov    esi, ecx
        and    esi, 0xff
        movzx    cx, cl
        sub    cx, word ptr [edi + esi*2]
        mov    edi, dword ptr [ebx + 0x50]
        xor    esi, esi
        mov    si, word ptr [ebx + 0x54]
        mov    word ptr [edi + esi*2 + 2], cx
        mov    edi, dword ptr [g_007da5f4]
        xor    ecx, ecx
        mov    ecx, dword ptr [ebx + 0x48]
        add    ecx, eax
        mov    cl, byte ptr [ecx + edx]
        mov    esi, ecx
        and    esi, 0xff
        movzx    cx, cl
        sub    cx, word ptr [edi + esi*2]
        mov    edi, dword ptr [ebx + 0x50]
        xor    esi, esi
        mov    si, word ptr [ebx + 0x54]
        mov    word ptr [edi + esi*2 + 4], cx
        add    word ptr [ebx + 0x54], 3
        mov    esi, dword ptr [ebp + 0x18]
        inc    eax
        lea    ecx, [esi - 1]
        cmp    eax, ecx
        jl    L_8b29
        mov    edi, dword ptr [ebp - 0x24]
L_8bc8:
        mov    eax, dword ptr [ebp - 0x5c]
        add    edx, esi
        inc    edi
        cmp    edi, eax
        mov    dword ptr [ebp - 0x24], edi
        jl    L_8aef
L_8bd9:
        mov    eax, dword ptr [ebp - 0x28]
        test    eax, eax
        jle    L_8f3d
        mov    ecx, dword ptr [ebp - 0x28]
        xor    eax, eax
        cmp    ecx, eax
        mov    dword ptr [ebp - 0x24], eax
        mov    dword ptr [ebp - 8], eax
        jle    L_8f3d
L_8bf7:
        mov    edx, dword ptr [g_007da670]
        mov    ecx, dword ptr [ebp - 0x24]
        xor    eax, eax
        mov    eax, dword ptr [edx]
        mov    ax, word ptr [eax + ecx*2]
        and    eax, 0xffff
        mov    dword ptr [ebp + 0x18], eax
        dec    eax
        cmp    eax, 1
        jle    L_8f20
        mov    edx, dword ptr [ebp - 8]
        mov    ebx, dword ptr [ebp - 0x14]
        inc    edx
        dec    eax
        mov    dword ptr [ebp + 8], edx
        mov    dword ptr [ebp - 0x78], eax
L_8c28:
        test    byte ptr [ebx + 0x13], 1
        je    L_8c85
        mov    eax, dword ptr [g_007da660]
        mov    ecx, dword ptr [eax]
        mov    eax, dword ptr [ebx + 0x44]
        mov    esi, dword ptr [ebp - 8]
        mov    cl, byte ptr [esi + ecx]
        xor    edx, edx
        mov    dx, word ptr [ebx + 0xa]
        shl    edx, 5
        mov    byte ptr [edx + eax + 0x17], cl
        mov    edx, dword ptr [g_007da660]
        mov    ecx, dword ptr [edx]
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
L_8c85:
        mov    ecx, dword ptr [g_007da680]
        mov    edx, dword ptr [ecx]
        mov    eax, dword ptr [g_007da608]
        mov    ecx, dword ptr [eax]
        xor    esi, esi
        mov    si, word ptr [ebx + 0xa]
        mov    dword ptr [ebp - 0xb8], edx
        mov    edx, dword ptr [g_007da684]
        mov    eax, dword ptr [edx]
        mov    dword ptr [ebp - 0xbc], eax
        mov    eax, dword ptr [ebp + 8]
        mov    dword ptr [ebp - 0xc0], ecx
        mov    ecx, dword ptr [ebx + 0x44]
        shl    esi, 5
        mov    dword ptr [ebp - 0x8c], eax
        inc    eax
        add    esi, ecx
        mov    dword ptr [ebp - 0xc4], eax
        mov    dword ptr [ebp - 0x90], eax
        mov    dword ptr [ebp - 0x20], esi
        mov    ecx, dword ptr [ebp - 0xbc]
        fld1    
        mov    edi, dword ptr [ebp - 8]
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
        mov    eax, dword ptr [ebp - 0x90]
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
        mov    eax, dword ptr [ebp - 0x8c]
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
        mov    ecx, dword ptr [ebp - 0xc0]
        mov    edx, dword ptr [ebp - 8]
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
        mov    ecx, dword ptr [ebp - 0xb8]
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
        mov    al, byte ptr [ebp + 0x17]
        test    al, al
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
        je    L_8ec2
        mov    edx, dword ptr [ebx + 0x44]
        fld    dword ptr [ebp - 0x88]
        xor    ecx, ecx
        mov    cx, word ptr [ebx + 0xa]
        shl    ecx, 5
        fadd    dword ptr [ecx + edx + 0x18]
        lea    eax, [ecx + edx + 0x18]
        xor    edx, edx
        fstp    dword ptr [eax]
        mov    ecx, dword ptr [ebx + 0x44]
        fld    dword ptr [ebp - 0x7c]
        xor    eax, eax
        mov    ax, word ptr [ebx + 0xa]
        shl    eax, 5
        fadd    dword ptr [eax + ecx + 0x1c]
        lea    eax, [eax + ecx + 0x1c]
        xor    ecx, ecx
        fstp    dword ptr [eax]
        mov    dx, word ptr [ebx + 0xa]
        mov    eax, dword ptr [ebx + 0x44]
        fld    dword ptr [ebp - 0x88]
        shl    edx, 5
        fadd    dword ptr [edx + eax + 0x38]
        lea    eax, [edx + eax + 0x38]
        fstp    dword ptr [eax]
        mov    cx, word ptr [ebx + 0xa]
        mov    edx, dword ptr [ebx + 0x44]
        fld    dword ptr [ebp - 0x7c]
        shl    ecx, 5
        fadd    dword ptr [ecx + edx + 0x3c]
        lea    eax, [ecx + edx + 0x3c]
        xor    edx, edx
        fstp    dword ptr [eax]
        mov    ecx, dword ptr [ebx + 0x44]
        fld    dword ptr [ebp - 0x88]
        xor    eax, eax
        mov    ax, word ptr [ebx + 0xa]
        shl    eax, 5
        fadd    dword ptr [eax + ecx + 0x58]
        lea    eax, [eax + ecx + 0x58]
        fstp    dword ptr [eax]
        mov    dx, word ptr [ebx + 0xa]
        mov    eax, dword ptr [ebx + 0x44]
        fld    dword ptr [ebp - 0x7c]
        shl    edx, 5
        fadd    dword ptr [edx + eax + 0x5c]
        lea    eax, [edx + eax + 0x5c]
        fstp    dword ptr [eax]
L_8ec2:
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
        mov    eax, dword ptr [ebp - 0x78]
        dec    eax
        mov    dword ptr [ebp + 8], ecx
        mov    dword ptr [ebp - 0x78], eax
        jne    L_8c28
L_8f20:
        mov    esi, dword ptr [ebp - 8]
        mov    edx, dword ptr [ebp + 0x18]
        mov    eax, dword ptr [ebp - 0x24]
        mov    ecx, dword ptr [ebp - 0x28]
        add    esi, edx
        inc    eax
        cmp    eax, ecx
        mov    dword ptr [ebp - 8], esi
        mov    dword ptr [ebp - 0x24], eax
        jl    L_8bf7
L_8f3d:
        mov    al, byte ptr [ebp + 0x1c]
        test    al, al
        jne    L_8f66
        mov    ecx, dword ptr [ebp - 0x14]
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
        jmp    L_8f69
L_8f66:
        mov    ecx, dword ptr [ebp - 0x14]
L_8f69:
        cmp    word ptr [ecx + 0xa], 0
        pop    edi
        setne    al
        pop    esi
        mov    byte ptr [ecx + 0x10], al
        mov    eax, dword ptr [ebp - 0x74]
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    0x18
        // jump-table data @ 0x00478F80 (6 relocated pointers)
        __emit 0x5A
        __emit 0x72
        __emit 0x47
        __emit 0x00
        __emit 0x89
        __emit 0x72
        __emit 0x47
        __emit 0x00
        __emit 0x91
        __emit 0x72
        __emit 0x47
        __emit 0x00
        __emit 0x9D
        __emit 0x72
        __emit 0x47
        __emit 0x00
        __emit 0xA3
        __emit 0x72
        __emit 0x47
        __emit 0x00
        __emit 0xAB
        __emit 0x72
        __emit 0x47
        __emit 0x00
        // jump-table data @ 0x00478F98 (6 relocated pointers)
        __emit 0xFF
        __emit 0x72
        __emit 0x47
        __emit 0x00
        __emit 0x27
        __emit 0x73
        __emit 0x47
        __emit 0x00
        __emit 0x2F
        __emit 0x73
        __emit 0x47
        __emit 0x00
        __emit 0x3B
        __emit 0x73
        __emit 0x47
        __emit 0x00
        __emit 0x41
        __emit 0x73
        __emit 0x47
        __emit 0x00
        __emit 0x49
        __emit 0x73
        __emit 0x47
        __emit 0x00
        // jump-table data @ 0x00478FB0 (6 relocated pointers)
        __emit 0x92
        __emit 0x7F
        __emit 0x47
        __emit 0x00
        __emit 0xE5
        __emit 0x7F
        __emit 0x47
        __emit 0x00
        __emit 0xF1
        __emit 0x7F
        __emit 0x47
        __emit 0x00
        __emit 0x1D
        __emit 0x80
        __emit 0x47
        __emit 0x00
        __emit 0x28
        __emit 0x80
        __emit 0x47
        __emit 0x00
        __emit 0x33
        __emit 0x80
        __emit 0x47
        __emit 0x00
        // jump-table data @ 0x00478FC8 (14 relocated pointers)
        __emit 0xCF
        __emit 0x7F
        __emit 0x47
        __emit 0x00
        __emit 0x16
        __emit 0x82
        __emit 0x47
        __emit 0x00
        __emit 0x22
        __emit 0x82
        __emit 0x47
        __emit 0x00
        __emit 0x4E
        __emit 0x82
        __emit 0x47
        __emit 0x00
        __emit 0x59
        __emit 0x82
        __emit 0x47
        __emit 0x00
        __emit 0x64
        __emit 0x82
        __emit 0x47
        __emit 0x00
        __emit 0xA1
        __emit 0xB4
        __emit 0x99
        __emit 0x7D
        __emit 0x00
        __emit 0x83
        __emit 0xEC
        __emit 0x18
        __emit 0x55
        __emit 0x56
        __emit 0x57
        __emit 0x50
        __emit 0xE8
        __emit 0x5F
        __emit 0xB9
        __emit 0x27
        __emit 0x00
        __emit 0x6A
        __emit 0x70
        __emit 0xE8
        __emit 0xD8
        __emit 0xF4
        __emit 0xF8
        __emit 0xFF
        __emit 0x83
        __emit 0xC4
        __emit 0x04
        __emit 0x85
        __emit 0xC0
        __emit 0x74
        __emit 0x12
        __emit 0x8B
    }
}
