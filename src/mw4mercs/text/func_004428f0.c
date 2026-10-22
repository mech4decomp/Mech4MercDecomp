/*
 * FUN_004428f0 (extent 0x4428f0-0x444890) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076dd60;
extern float  g_007b220c;
extern int    g_007b94a0;
extern int    g_007b9858;
extern int    g_007b985c;
extern int    g_007b9860;
extern int    g_007b9864;
extern int    g_007b9868;
extern int    g_007d98fc;
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
extern char   g_007da86c;
extern float  g_007da870;
extern float  g_007da874;
extern float  g_007da878;
extern float  g_007da87c;
extern void __cdecl FUN_0041cb30(void);
extern void __cdecl FUN_00421f00(void);
extern void __cdecl FUN_00491cd0(void);
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_004428f0(void)
{
    __asm {
        push    ebp
        mov    ebp, esp
        sub    esp, 0xd4
        mov    eax, dword ptr [ecx + 0x58]
        test    eax, eax
        mov    dword ptr [ebp - 8], ecx
        mov    dword ptr [ebp - 0x74], 0
        jg    L_2916
        mov    byte ptr [ecx + 0x10], 0
        xor    eax, eax
        mov    esp, ebp
        pop    ebp
        ret    0x18
L_2916:
        cmp    word ptr [ecx + 0x56], 0
        mov    eax, dword ptr [ecx + 0x18]
        mov    dword ptr [ebp - 0x40], eax
        jne    L_292b
        mov    edx, dword ptr [ecx]
        call    dword ptr [edx + 0x98]
L_292b:
        mov    eax, dword ptr [g_007da68c]
        mov    edx, dword ptr [g_007da688]
        mov    ecx, dword ptr [ebp - 8]
        push    ebx
        push    esi
        mov    esi, dword ptr [ecx + 0x14]
        mov    ecx, dword ptr [g_007da600]
        mov    ebx, dword ptr [ecx]
        push    edi
        mov    edi, dword ptr [eax]
        mov    eax, dword ptr [edx]
        mov    dword ptr [ebp - 0x4c], eax
        mov    eax, dword ptr [ebp + 0x14]
        test    eax, eax
        mov    dword ptr [ebp - 0x20], edi
        je    L_29bf
        mov    eax, dword ptr [ebp - 0x40]
        test    eax, eax
        mov    dword ptr [ebp - 0x2c], 0
        jle    L_29fa
L_296a:
        cmp    byte ptr [ebx], 0
        je    L_299c
        mov    edx, dword ptr [ebp - 0x4c]
        mov    eax, dword ptr [ebp + 8]
        mov    ecx, dword ptr [ebp - 0x20]
        push    edx
        push    eax
        push    esi
        mov    byte ptr [ebx], 0
        call    FUN_0041cb30
        mov    ecx, dword ptr [g_007da65c]
        mov    edi, dword ptr [ecx]
        add    edi, dword ptr [ebp - 0x2c]
        mov    ecx, dword ptr [ebp + 0x14]
        push    esi
        call    FUN_00421f00
        mov    byte ptr [edi], al
        mov    edi, dword ptr [ebp - 0x20]
L_299c:
        mov    ecx, dword ptr [ebp - 0x4c]
        mov    eax, dword ptr [ebp - 0x2c]
        add    ecx, 4
        inc    eax
        add    edi, 0x10
        add    esi, 0xc
        mov    dword ptr [ebp - 0x4c], ecx
        mov    ecx, dword ptr [ebp - 0x40]
        inc    ebx
        cmp    eax, ecx
        mov    dword ptr [ebp - 0x2c], eax
        mov    dword ptr [ebp - 0x20], edi
        jl    L_296a
        jmp    L_29fa
L_29bf:
        mov    eax, dword ptr [ebp - 0x40]
        test    eax, eax
        jle    L_29fa
        mov    dword ptr [ebp + 0x14], eax
L_29c9:
        cmp    byte ptr [ebx], 0
        je    L_29e1
        mov    edx, dword ptr [ebp - 0x4c]
        mov    eax, dword ptr [ebp + 8]
        push    edx
        push    eax
        push    esi
        mov    ecx, edi
        mov    byte ptr [ebx], 0
        call    FUN_0041cb30
L_29e1:
        mov    edx, dword ptr [ebp - 0x4c]
        mov    eax, dword ptr [ebp + 0x14]
        add    edx, 4
        add    esi, 0xc
        add    edi, 0x10
        inc    ebx
        dec    eax
        mov    dword ptr [ebp - 0x4c], edx
        mov    dword ptr [ebp + 0x14], eax
        jne    L_29c9
L_29fa:
        mov    ecx, dword ptr [ebp - 8]
        mov    eax, dword ptr [ecx + 0x24]
        and    eax, 0x3fff
        mov    dword ptr [ebp - 0xcc], 0
        mov    dword ptr [ebp - 4], 0
        mov    byte ptr [ebp + 0x17], 0
        mov    dword ptr [ebp - 0x88], 0
        mov    dword ptr [ebp - 0x80], 0
        je    L_2aea
        test    eax, eax
        jle    L_2aea
        mov    edx, dword ptr [g_007da848]
        mov    esi, dword ptr [edx + eax*4 + 0x24]
        test    esi, esi
        je    L_2aea
        mov    eax, dword ptr [esi]
        push    0
        mov    ecx, esi
        call    dword ptr [eax + 4]
        mov    ecx, eax
        call    FUN_00491cd0
        cmp    eax, 0x100
        jl    L_2a6e
        mov    dword ptr [g_007da864], 1
        jmp    L_2ac9
L_2a6e:
        cmp    eax, 0x80
        jl    L_2a81
        mov    dword ptr [g_007da864], 2
        jmp    L_2ac9
L_2a81:
        cmp    eax, 0x40
        jl    L_2a92
        mov    dword ptr [g_007da864], 4
        jmp    L_2ac9
L_2a92:
        cmp    eax, 0x20
        jl    L_2aa3
        mov    dword ptr [g_007da864], 8
        jmp    L_2ac9
L_2aa3:
        cmp    eax, 0x10
        jl    L_2ab4
        mov    dword ptr [g_007da864], 0x10
        jmp    L_2ac9
L_2ab4:
        xor    ecx, ecx
        cmp    eax, 8
        setl    cl
        dec    ecx
        and    ecx, 0xffffffe0
        add    ecx, 0x40
        mov    dword ptr [g_007da864], ecx
L_2ac9:
        mov    al, byte ptr [esi + 0x24]
        test    al, al
        jne    L_2af9
        mov    eax, dword ptr [esi + 0x28]
        test    eax, eax
        je    L_2af9
        mov    edx, dword ptr [eax + 0xc]
        mov    eax, dword ptr [eax + 0x1c]
        mov    byte ptr [ebp + 0x17], 1
        mov    dword ptr [ebp - 0x88], edx
        mov    dword ptr [ebp - 0x80], eax
L_2aea:
        mov    al, byte ptr [ebp + 0x1c]
        test    al, al
        mov    ecx, dword ptr [ebp + 0x10]
        je    L_2aff
        mov    eax, dword ptr [ecx + 0x38]
        jmp    L_2b0b
L_2af9:
        mov    byte ptr [ebp + 0x17], 0
        jmp    L_2aea
L_2aff:
        mov    eax, dword ptr [ecx + 4]
        lea    edx, [eax + eax*4]
        mov    eax, dword ptr [ecx + 0x18]
        lea    eax, [eax + edx*8]
L_2b0b:
        mov    ecx, dword ptr [ebp - 8]
        mov    dword ptr [ecx + 0x84], eax
        mov    eax, dword ptr [ecx + 0x64]
        and    eax, 0x3fff
        mov    byte ptr [ebp - 0x2d], 0
        mov    dword ptr [ebp - 0xd4], 0
        mov    dword ptr [ebp - 0xd0], 0
        je    L_2b76
        xor    edx, edx
        cmp    eax, edx
        jle    L_2b78
        mov    esi, dword ptr [g_007da848]
        mov    eax, dword ptr [esi + eax*4 + 0x24]
        cmp    eax, edx
        je    L_2b78
        mov    bl, byte ptr [eax + 0x24]
        test    bl, bl
        jne    L_2b70
        mov    eax, dword ptr [eax + 0x28]
        cmp    eax, edx
        je    L_2b70
        mov    esi, dword ptr [eax + 0xc]
        mov    eax, dword ptr [eax + 0x1c]
        mov    byte ptr [ebp - 0x2d], 1
        mov    dword ptr [ebp - 0xd4], esi
        mov    dword ptr [ebp - 0xd0], eax
        jmp    L_2b78
L_2b70:
        mov    byte ptr [ebp - 0x2d], 0
        jmp    L_2b78
L_2b76:
        xor    edx, edx
L_2b78:
        mov    eax, dword ptr [ecx + 0x18]
        cmp    eax, 0x100
        mov    dword ptr [ebp - 0x5c], edx
        mov    dword ptr [ebp - 0x64], eax
        jle    L_2b8f
        mov    dword ptr [ebp - 0x64], 0x100
L_2b8f:
        mov    eax, dword ptr [g_007da688]
        mov    eax, dword ptr [eax]
        mov    dword ptr [ebp - 0x4c], eax
        cmp    dword ptr [ecx + 0x58], edx
        mov    dword ptr [ebp - 0x8c], edx
        mov    dword ptr [ebp - 0x70], edx
        mov    dword ptr [ebp - 0x2c], edx
        mov    dword ptr [ebp - 0x10], edx
        jle    L_3e43
L_2bb1:
        mov    ecx, dword ptr [g_007d98fc]
        mov    edx, dword ptr [ecx]
        mov    eax, dword ptr [ebp - 0x2c]
        mov    cl, byte ptr [eax + edx]
        add    eax, edx
        test    cl, cl
        mov    dword ptr [ebp + 8], eax
        je    L_3e25
        mov    ecx, dword ptr [ebp - 8]
        mov    edx, dword ptr [ecx + 0x48]
        mov    edi, dword ptr [ebp - 0x10]
        xor    eax, eax
        mov    al, byte ptr [edx + edi + 2]
        xor    ecx, ecx
        mov    cl, byte ptr [edx + edi]
        xor    ebx, ebx
        mov    bl, byte ptr [edx + edi + 1]
        mov    dword ptr [ebp - 0x58], edx
        mov    esi, eax
        mov    eax, dword ptr [ebp - 0x4c]
        mov    dword ptr [ebp - 0x3c], esi
        mov    esi, dword ptr [eax + esi*4]
        mov    dword ptr [ebp - 0x18], ecx
        mov    ecx, dword ptr [eax + ecx*4]
        mov    eax, dword ptr [eax + ebx*4]
        mov    dword ptr [ebp - 0x50], ebx
        mov    ebx, eax
        and    ebx, esi
        mov    dword ptr [g_007b985c], ecx
        or    eax, esi
        mov    esi, dword ptr [g_007b985c]
        and    ecx, ebx
        or    esi, eax
        test    ecx, ecx
        mov    dword ptr [g_007b9860], ecx
        mov    dword ptr [g_007b985c], esi
        je    L_2c31
        mov    ecx, dword ptr [ebp + 8]
        mov    byte ptr [ecx], 0
        jmp    L_3e25
L_2c31:
        test    esi, esi
        jne    L_2c5e
        mov    eax, dword ptr [ebp - 0x74]
        mov    edx, dword ptr [g_007da600]
        mov    ecx, dword ptr [ebp - 0x18]
        inc    eax
        mov    dword ptr [ebp - 0x74], eax
        mov    eax, dword ptr [edx]
        mov    edx, dword ptr [ebp - 0x50]
        mov    byte ptr [eax + ecx], 1
        mov    ecx, dword ptr [ebp - 0x3c]
        mov    byte ptr [eax + edx], 1
        mov    byte ptr [eax + ecx], 1
        jmp    L_3e25
L_2c5e:
        mov    eax, dword ptr [esi*4 + 0x7b2478]
        xor    ecx, ecx
        cmp    eax, 1
        mov    dword ptr [ebp - 0xc], ecx
        jne    L_3241
        lea    eax, [edi + 3]
        cmp    edi, eax
        mov    edx, edi
        mov    dword ptr [ebp - 0x54], eax
        jge    L_322d
        jmp    L_2c88
L_2c85:
        mov    edi, dword ptr [ebp - 0x10]
L_2c88:
        mov    eax, dword ptr [ebp - 8]
        mov    eax, dword ptr [eax + 0x48]
        xor    ebx, ebx
        mov    bl, byte ptr [eax + edx]
        inc    edx
        mov    dword ptr [ebp - 0x58], edx
        mov    esi, ebx
        cmp    edx, dword ptr [ebp - 0x54]
        jge    L_2ca0
        mov    edi, edx
L_2ca0:
        xor    edx, edx
        mov    dl, byte ptr [eax + edi]
        mov    eax, dword ptr [ebp - 0x4c]
        mov    ebx, ecx
        and    ebx, 0xffff
        mov    edi, edx
        add    ebx, dword ptr [ebp - 0x8c]
        mov    edx, dword ptr [eax + esi*4]
        test    edx, edx
        mov    dword ptr [g_007b9858], edx
        jne    L_2da7
        mov    ecx, dword ptr [g_007da68c]
        mov    edx, dword ptr [ecx]
        mov    eax, esi
        shl    eax, 4
        add    eax, edx
        mov    edx, dword ptr [g_007da684]
        mov    ecx, ebx
        shl    ecx, 4
        add    ecx, dword ptr [edx]
        mov    edx, dword ptr [eax]
        mov    dword ptr [ecx], edx
        mov    edx, dword ptr [eax + 4]
        mov    dword ptr [ecx + 4], edx
        mov    edx, dword ptr [eax + 8]
        mov    eax, dword ptr [eax + 0xc]
        mov    dword ptr [ecx + 0xc], eax
        mov    dword ptr [ecx + 8], edx
        mov    ecx, dword ptr [ebp - 8]
        mov    eax, dword ptr [ecx + 0x1c]
        mov    edx, dword ptr [g_007da680]
        mov    ecx, dword ptr [edx]
        mov    edx, dword ptr [eax + esi*8]
        mov    dword ptr [ecx + ebx*8], edx
        mov    edx, dword ptr [eax + esi*8 + 4]
        mov    dword ptr [ecx + ebx*8 + 4], edx
        mov    ecx, dword ptr [ebp - 0x64]
        lea    edx, [esi + ecx]
        mov    eax, dword ptr [eax + edx*8]
        mov    ecx, dword ptr [g_007b9868]
        mov    ecx, dword ptr [ecx]
        mov    dword ptr [ecx + ebx*8], eax
        mov    eax, dword ptr [ebp - 8]
        mov    eax, dword ptr [eax + 0x1c]
        mov    edx, dword ptr [eax + edx*8 + 4]
        xor    eax, eax
        mov    eax, dword ptr [ebp - 8]
        mov    al, byte ptr [eax + 0x13]
        test    al, al
        mov    byte ptr [ebp + 0xb], 1
        mov    dword ptr [ecx + ebx*8 + 4], edx
        jbe    L_2d89
        and    eax, 0xff
        mov    dword ptr [ebp - 0x20], 1
        mov    dword ptr [ebp - 0x14], eax
        mov    ecx, 0x7da660
L_2d5d:
        mov    edx, dword ptr [ebp - 0x20]
        test    eax, edx
        je    L_2d76
        mov    eax, dword ptr [ecx - 4]
        mov    edx, dword ptr [eax]
        mov    eax, dword ptr [ecx]
        mov    eax, dword ptr [eax]
        mov    dl, byte ptr [edx + esi]
        mov    byte ptr [eax + ebx], dl
        mov    eax, dword ptr [ebp - 0x14]
L_2d76:
        mov    edx, dword ptr [ebp - 0x20]
        add    ecx, 8
        shl    edx, 1
        cmp    ecx, 0x7da670
        mov    dword ptr [ebp - 0x20], edx
        jl    L_2d5d
L_2d89:
        mov    ecx, dword ptr [ebp - 0xc]
        mov    eax, dword ptr [ebp - 0x4c]
        mov    eax, dword ptr [eax + edi*4]
        inc    ecx
        inc    ebx
        test    eax, eax
        mov    dword ptr [ebp - 0xc], ecx
        je    L_3219
        mov    edx, dword ptr [g_007b9858]
        jmp    L_2db9
L_2da7:
        mov    eax, dword ptr [ebp - 0x4c]
        mov    eax, dword ptr [eax + edi*4]
        test    eax, eax
        mov    byte ptr [ebp + 0xb], 0
        jne    L_3219
L_2db9:
        or    edx, eax
        xor    eax, eax
        mov    ecx, 1
        mov    dword ptr [g_007b9858], edx
        mov    dword ptr [ebp - 0x34], eax
L_2dcb:
        test    ecx, edx
        jne    L_2de0
        shl    ecx, 1
        inc    eax
        cmp    ax, 6
        jb    L_2dcb
        mov    dword ptr [ebp - 0x34], eax
        jmp    L_2f00
L_2de0:
        mov    dword ptr [ebp - 0x34], eax
        cmp    byte ptr [ebp + 0xb], 1
        jne    L_2e79
        mov    ecx, dword ptr [g_007da68c]
        mov    edx, dword ptr [ecx]
        mov    eax, edi
        mov    ecx, esi
        shl    eax, 4
        shl    ecx, 4
        add    eax, edx
        add    ecx, edx
        mov    edx, dword ptr [ebp - 0x34]
        and    edx, 0xffff
        cmp    edx, 5
        mov    dword ptr [ebp - 0x28], edx
        ja    L_2e58
        jmp    dword ptr [edx*4 + 0x444890]
        fld    dword ptr [ecx]
        fld    dword ptr [eax]
        jmp    L_2e35
        fld    dword ptr [ecx + 8]
        fld    dword ptr [eax + 8]
        jmp    L_2e35
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx + 8]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 8]
L_2e35:
        fld    st(1)
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_2eed
        fstp    st(0)
        mov    dword ptr [ebp - 4], 0
        fstp    st(0)
        jmp    L_2efa
L_2e58:
        push    0x76df04
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_2ee1
        int 3    
        mov    edx, dword ptr [ebp - 0x28]
        mov    dword ptr [ebp - 4], 0
        jmp    L_2efa
L_2e79:
        mov    edx, dword ptr [g_007da68c]
        mov    edx, dword ptr [edx]
        mov    eax, esi
        mov    ecx, edi
        shl    eax, 4
        shl    ecx, 4
        add    eax, edx
        add    ecx, edx
        mov    edx, dword ptr [ebp - 0x34]
        and    edx, 0xffff
        cmp    edx, 5
        mov    dword ptr [ebp - 0x28], edx
        ja    L_2ecf
        jmp    dword ptr [edx*4 + 0x4448a8]
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx + 4]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 4]
        jmp    L_2e35
        fld    dword ptr [ecx + 4]
        fld    dword ptr [eax + 4]
        jmp    L_2e35
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax]
        jmp    L_2e35
L_2ecf:
        push    0x76df04
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_2ee1
        int 3    
L_2ee1:
        mov    edx, dword ptr [ebp - 0x28]
        mov    dword ptr [ebp - 4], 0
        jmp    L_2efa
L_2eed:
        fld    st(1)
        fsub st(0), st(1)
        fdivr st(0), st(2)
        fstp    dword ptr [ebp - 4]
        fstp    st(0)
        fstp    st(0)
L_2efa:
        mov    dword ptr [ebp - 0xcc], edx
L_2f00:
        cmp    byte ptr [ebp + 0xb], 1
        jne    L_3095
        mov    eax, dword ptr [g_007da68c]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [g_007da684]
        mov    edx, dword ptr [edx]
        mov    eax, edi
        shl    eax, 4
        add    eax, ecx
        mov    dword ptr [ebp + 8], eax
        mov    eax, esi
        shl    eax, 4
        add    eax, ecx
        mov    ecx, ebx
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
        mov    eax, dword ptr [ebp - 0xcc]
        mov    edx, dword ptr [eax*8 + 0x7b2408]
        test    edx, edx
        fstp    dword ptr [ecx + 0xc]
        je    L_2f88
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [g_007b220c]
        jmp    L_2f8e
L_2f88:
        fld    dword ptr [g_007b220c]
L_2f8e:
        mov    eax, dword ptr [eax*8 + 0x7b2404]
        fstp    dword ptr [ecx + eax*4]
        mov    ecx, dword ptr [ebp - 8]
        mov    eax, dword ptr [ecx + 0x1c]
        fld    dword ptr [eax + edi*8]
        mov    ecx, dword ptr [g_007da680]
        fsub    dword ptr [eax + esi*8]
        mov    ecx, dword ptr [ecx]
        lea    edx, [ebx*8]
        add    ecx, edx
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax + esi*8]
        fstp    dword ptr [ecx]
        fld    dword ptr [eax + edi*8 + 4]
        fsub    dword ptr [eax + esi*8 + 4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax + esi*8 + 4]
        fstp    dword ptr [ecx + 4]
        mov    ecx, dword ptr [ebp - 0x64]
        add    ecx, edi
        lea    ecx, [eax + ecx*8]
        mov    dword ptr [ebp + 8], ecx
        mov    ecx, dword ptr [ebp - 0x64]
        add    ecx, esi
        lea    eax, [eax + ecx*8]
        mov    ecx, dword ptr [g_007b9868]
        mov    ecx, dword ptr [ecx]
        add    ecx, edx
        mov    edx, dword ptr [ebp + 8]
        fld    dword ptr [edx]
        fsub    dword ptr [eax]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax]
        fstp    dword ptr [ecx]
        fld    dword ptr [edx + 4]
        mov    edx, dword ptr [ebp - 8]
        fsub    dword ptr [eax + 4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax + 4]
        xor    eax, eax
        mov    al, byte ptr [edx + 0x13]
        test    al, al
        fstp    dword ptr [ecx + 4]
        jbe    L_3212
        mov    ecx, eax
        and    ecx, 0xff
        mov    dword ptr [ebp + 8], 1
        mov    dword ptr [ebp - 0x14], ecx
        mov    eax, 0x7da65c
L_3030:
        mov    edx, dword ptr [ebp + 8]
        test    ecx, edx
        je    L_307e
        mov    ecx, dword ptr [eax]
        mov    ecx, dword ptr [ecx]
        mov    dl, byte ptr [ecx + esi]
        mov    byte ptr [ebp - 0xc8], dl
        mov    edx, dword ptr [ebp - 0xc8]
        and    edx, 0xff
        mov    dword ptr [ebp - 0x24], edx
        xor    edx, edx
        mov    dl, byte ptr [ecx + edi]
        sub    edx, dword ptr [ebp - 0x24]
        mov    ecx, dword ptr [eax + 4]
        mov    dword ptr [ebp - 0x18], edx
        fild    dword ptr [ebp - 0x18]
        mov    edx, dword ptr [ecx]
        fmul    dword ptr [ebp - 4]
        fiadd    dword ptr [ebp - 0x24]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [ebp - 0x18]
        mov    cl, byte ptr [ebp - 0x18]
        mov    byte ptr [edx + ebx], cl
        mov    ecx, dword ptr [ebp - 0x14]
L_307e:
        mov    edx, dword ptr [ebp + 8]
        add    eax, 8
        shl    edx, 1
        cmp    eax, 0x7da66c
        mov    dword ptr [ebp + 8], edx
        jl    L_3030
        jmp    L_3212
L_3095:
        mov    edx, dword ptr [g_007da68c]
        mov    ecx, dword ptr [edx]
        mov    edx, dword ptr [g_007da684]
        mov    edx, dword ptr [edx]
        mov    eax, esi
        shl    eax, 4
        add    eax, ecx
        mov    dword ptr [ebp + 8], eax
        mov    eax, edi
        shl    eax, 4
        add    eax, ecx
        mov    ecx, ebx
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
        mov    eax, dword ptr [ebp - 0xcc]
        mov    edx, dword ptr [eax*8 + 0x7b2408]
        test    edx, edx
        fstp    dword ptr [ecx + 0xc]
        je    L_3114
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [g_007b220c]
        jmp    L_311a
L_3114:
        fld    dword ptr [g_007b220c]
L_311a:
        mov    eax, dword ptr [eax*8 + 0x7b2404]
        fstp    dword ptr [ecx + eax*4]
        mov    ecx, dword ptr [ebp - 8]
        mov    eax, dword ptr [ecx + 0x1c]
        fld    dword ptr [eax + esi*8]
        mov    ecx, dword ptr [g_007da680]
        fsub    dword ptr [eax + edi*8]
        mov    ecx, dword ptr [ecx]
        lea    edx, [ebx*8]
        add    ecx, edx
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax + edi*8]
        fstp    dword ptr [ecx]
        fld    dword ptr [eax + esi*8 + 4]
        fsub    dword ptr [eax + edi*8 + 4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax + edi*8 + 4]
        fstp    dword ptr [ecx + 4]
        mov    ecx, dword ptr [ebp - 0x64]
        add    ecx, esi
        lea    ecx, [eax + ecx*8]
        mov    dword ptr [ebp + 8], ecx
        mov    ecx, dword ptr [ebp - 0x64]
        add    ecx, edi
        lea    eax, [eax + ecx*8]
        mov    ecx, dword ptr [g_007b9868]
        mov    ecx, dword ptr [ecx]
        add    ecx, edx
        mov    edx, dword ptr [ebp + 8]
        fld    dword ptr [edx]
        fsub    dword ptr [eax]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax]
        fstp    dword ptr [ecx]
        fld    dword ptr [edx + 4]
        mov    edx, dword ptr [ebp - 8]
        fsub    dword ptr [eax + 4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [eax + 4]
        xor    eax, eax
        mov    al, byte ptr [edx + 0x13]
        test    al, al
        fstp    dword ptr [ecx + 4]
        jbe    L_3212
        mov    ecx, eax
        and    ecx, 0xff
        mov    dword ptr [ebp + 8], 1
        mov    dword ptr [ebp - 0x14], ecx
        mov    eax, 0x7da65c
L_31b8:
        mov    edx, dword ptr [ebp + 8]
        test    ecx, edx
        je    L_3200
        mov    ecx, dword ptr [eax]
        mov    ecx, dword ptr [ecx]
        mov    dl, byte ptr [ecx + edi]
        mov    byte ptr [ebp - 0x78], dl
        mov    edx, dword ptr [ebp - 0x78]
        and    edx, 0xff
        mov    dword ptr [ebp - 0x24], edx
        xor    edx, edx
        mov    dl, byte ptr [ecx + esi]
        sub    edx, dword ptr [ebp - 0x24]
        mov    ecx, dword ptr [eax + 4]
        mov    dword ptr [ebp - 0x18], edx
        fild    dword ptr [ebp - 0x18]
        mov    edx, dword ptr [ecx]
        fmul    dword ptr [ebp - 4]
        fiadd    dword ptr [ebp - 0x24]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [ebp - 0x18]
        mov    cl, byte ptr [ebp - 0x18]
        mov    byte ptr [edx + ebx], cl
        mov    ecx, dword ptr [ebp - 0x14]
L_3200:
        mov    edx, dword ptr [ebp + 8]
        add    eax, 8
        shl    edx, 1
        cmp    eax, 0x7da66c
        mov    dword ptr [ebp + 8], edx
        jl    L_31b8
L_3212:
        mov    ecx, dword ptr [ebp - 0xc]
        inc    ecx
        mov    dword ptr [ebp - 0xc], ecx
L_3219:
        mov    eax, dword ptr [ebp - 0x10]
        mov    edx, dword ptr [ebp - 0x58]
        add    eax, 3
        cmp    edx, eax
        mov    dword ptr [ebp - 0x54], eax
        jl    L_2c85
L_322d:
        mov    edx, dword ptr [g_007da670]
        mov    eax, dword ptr [edx]
        mov    edx, dword ptr [ebp - 0x70]
        mov    word ptr [eax + edx*2], cx
        jmp    L_3df4
L_3241:
        mov    esi, dword ptr [g_007da66c]
        mov    eax, dword ptr [esi + 0x40]
        mov    ebx, dword ptr [esi + 0x30]
        mov    ecx, dword ptr [esi + 0x48]
        mov    dword ptr [ebp - 0xa0], eax
        mov    eax, dword ptr [ebp - 8]
        mov    al, byte ptr [eax + 0x13]
        test    al, al
        mov    dword ptr [ebp - 0xa8], ebx
        mov    dword ptr [ebp - 0x9c], ecx
        mov    byte ptr [ebp - 0x84], al
        jbe    L_32af
        and    eax, 0xff
        mov    dword ptr [ebp - 0x14], eax
        mov    edi, 1
        lea    ecx, [ebp - 0x98]
        lea    eax, [esi + 0x50]
        mov    dword ptr [ebp + 8], 2
L_328f:
        test    dword ptr [ebp - 0x14], edi
        je    L_329e
        mov    esi, dword ptr [eax]
        mov    dword ptr [ecx], esi
        mov    ebx, dword ptr [ebp - 0xa8]
L_329e:
        mov    esi, dword ptr [ebp + 8]
        add    eax, 8
        add    ecx, 4
        shl    edi, 1
        dec    esi
        mov    dword ptr [ebp + 8], esi
        jne    L_328f
L_32af:
        mov    esi, dword ptr [ebp - 0x10]
        lea    ecx, [esi + 3]
        xor    eax, eax
        cmp    esi, ecx
        mov    byte ptr [ebp - 0x45], 0
        mov    byte ptr [ebp + 0xb], 0xff
        mov    dword ptr [ebp - 0xc], esi
        mov    dword ptr [ebp - 0x34], eax
        mov    dword ptr [ebp - 0x54], ecx
        jge    L_33f6
        mov    ecx, dword ptr [g_007da68c]
        mov    ecx, dword ptr [ecx]
        mov    dword ptr [ebp - 0x18], ecx
        mov    ecx, dword ptr [ebp - 8]
        mov    edi, dword ptr [ecx + 0x1c]
        mov    ecx, dword ptr [g_007da688]
        mov    ecx, dword ptr [ecx]
        mov    dword ptr [ebp - 0x24], edi
        mov    dword ptr [ebp - 0x50], ecx
        jmp    L_32f4
L_32f1:
        mov    edx, dword ptr [ebp - 0x58]
L_32f4:
        xor    ecx, ecx
        mov    cl, byte ptr [edx + esi]
        mov    edx, dword ptr [ebp - 0x18]
        and    eax, 0xffff
        mov    dword ptr [ebp - 0x28], eax
        shl    eax, 4
        mov    esi, ecx
        shl    ecx, 4
        add    ecx, edx
        mov    edx, dword ptr [ecx]
        mov    dword ptr [eax + ebx], edx
        mov    edx, dword ptr [ecx + 4]
        mov    dword ptr [eax + ebx + 4], edx
        mov    edx, dword ptr [ecx + 8]
        mov    ecx, dword ptr [ecx + 0xc]
        mov    dword ptr [eax + ebx + 8], edx
        mov    edx, dword ptr [edi + esi*8]
        mov    dword ptr [eax + ebx + 0xc], ecx
        mov    ecx, dword ptr [ebp - 0xa0]
        mov    dword ptr [eax + ecx], edx
        mov    edx, dword ptr [edi + esi*8 + 4]
        mov    dword ptr [eax + ecx + 4], edx
        mov    edx, dword ptr [ebp - 0x64]
        add    edx, esi
        mov    edi, dword ptr [edi + edx*8]
        mov    dword ptr [eax + ecx + 8], edi
        mov    edi, dword ptr [ebp - 0x24]
        mov    edx, dword ptr [edi + edx*8 + 4]
        mov    dword ptr [eax + ecx + 0xc], edx
        mov    eax, dword ptr [ebp - 0x50]
        mov    edx, dword ptr [eax + esi*4]
        mov    eax, dword ptr [ebp - 0x9c]
        mov    ecx, dword ptr [ebp - 0x28]
        mov    dword ptr [eax + ecx*4], edx
        mov    eax, dword ptr [ebp - 0x84]
        test    al, al
        jbe    L_33dd
        and    eax, 0xff
        lea    edx, [ebp - 0x98]
        mov    dword ptr [ebp - 0x68], 1
        mov    dword ptr [ebp - 0x14], eax
        mov    dword ptr [ebp - 0x40], edx
        mov    dword ptr [ebp - 0x20], 0x7da65c
        jmp    L_3393
L_3390:
        mov    eax, dword ptr [ebp - 0x14]
L_3393:
        mov    edx, dword ptr [ebp - 0x68]
        test    eax, edx
        je    L_33bc
        mov    eax, dword ptr [ebp - 0x20]
        mov    edx, dword ptr [eax]
        mov    eax, dword ptr [edx]
        mov    edx, dword ptr [ebp - 0x40]
        mov    al, byte ptr [eax + esi]
        mov    edx, dword ptr [edx]
        mov    byte ptr [edx + ecx], al
        cmp    al, byte ptr [ebp + 0xb]
        jae    L_33b4
        mov    byte ptr [ebp + 0xb], al
L_33b4:
        cmp    al, byte ptr [ebp - 0x45]
        jbe    L_33bc
        mov    byte ptr [ebp - 0x45], al
L_33bc:
        mov    edx, dword ptr [ebp - 0x40]
        mov    eax, dword ptr [ebp - 0x20]
        add    edx, 4
        mov    dword ptr [ebp - 0x40], edx
        mov    edx, dword ptr [ebp - 0x68]
        add    eax, 8
        shl    edx, 1
        cmp    eax, 0x7da66c
        mov    dword ptr [ebp - 0x20], eax
        mov    dword ptr [ebp - 0x68], edx
        jl    L_3390
L_33dd:
        mov    esi, dword ptr [ebp - 0xc]
        mov    eax, dword ptr [ebp - 0x34]
        mov    ecx, dword ptr [ebp - 0x54]
        inc    esi
        inc    eax
        cmp    esi, ecx
        mov    dword ptr [ebp - 0xc], esi
        mov    dword ptr [ebp - 0x34], eax
        jl    L_32f1
L_33f6:
        mov    esi, dword ptr [g_007da66c]
        mov    ecx, dword ptr [esi + 0x10]
        mov    edi, dword ptr [esi]
        mov    edx, dword ptr [esi + 0x18]
        mov    dword ptr [ebp - 0xbc], ecx
        mov    cl, byte ptr [ebp - 0x84]
        mov    word ptr [ebp - 0x90], ax
        xor    eax, eax
        test    cl, cl
        mov    dword ptr [ebp - 0x40], eax
        mov    dword ptr [ebp - 0xc4], edi
        mov    dword ptr [ebp - 0xb8], edx
        jbe    L_3477
        mov    ecx, dword ptr [ebp - 0x84]
        and    ecx, 0xff
        mov    dword ptr [ebp - 0x14], ecx
        lea    ecx, [ebp - 0xb4]
        mov    dword ptr [ebp + 8], ecx
        mov    edx, 1
        lea    ecx, [esi + 0x20]
        mov    dword ptr [ebp - 0x24], 2
L_3453:
        test    dword ptr [ebp - 0x14], edx
        je    L_3465
        mov    edi, dword ptr [ebp + 8]
        mov    esi, dword ptr [ecx]
        mov    dword ptr [edi], esi
        mov    edi, dword ptr [ebp - 0xc4]
L_3465:
        add    dword ptr [ebp + 8], 4
        mov    esi, dword ptr [ebp - 0x24]
        add    ecx, 8
        shl    edx, 1
        dec    esi
        mov    dword ptr [ebp - 0x24], esi
        jne    L_3453
L_3477:
        mov    word ptr [ebp - 0xac], 0
        mov    dword ptr [ebp - 0x54], 1
        mov    dword ptr [ebp - 0x18], 4
L_348e:
        mov    dword ptr [ebp - 0x20], 0
        mov    dword ptr [ebp - 0x34], 0x7b2404
        mov    dword ptr [ebp - 0x50], 6
L_34a3:
        mov    edx, dword ptr [ebp - 0x54]
        test    dword ptr [g_007b985c], edx
        je    L_3c27
        mov    ecx, dword ptr [ebp - 0x90]
        and    ecx, 0xffff
        mov    dword ptr [ebp - 0xc], 0
        mov    dword ptr [ebp - 0x24], ecx
        jle    L_3b0b
        mov    eax, dword ptr [ebp - 0xa0]
        mov    edx, dword ptr [ebp - 0x9c]
        mov    dword ptr [ebp - 0x28], eax
        sub    eax, ebx
        mov    dword ptr [ebp - 0x68], edx
        lea    esi, [ebx + 8]
        mov    dword ptr [ebp + 8], eax
L_34e8:
        mov    eax, dword ptr [ebp - 0xc]
        inc    eax
        xor    edx, edx
        cmp    eax, ecx
        setge    dl
        mov    dword ptr [ebp - 0x58], eax
        dec    edx
        and    edx, eax
        mov    eax, dword ptr [ebp - 0x68]
        mov    eax, dword ptr [eax]
        mov    ecx, edx
        mov    edx, dword ptr [ebp - 0x54]
        test    edx, eax
        mov    dword ptr [ebp - 0x7c], ecx
        mov    dword ptr [g_007b9858], eax
        jne    L_361f
        mov    ecx, dword ptr [ebp - 0xac]
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
        mov    edx, dword ptr [ebp - 0x68]
        mov    edx, dword ptr [edx]
        mov    edi, dword ptr [ebp - 0xb8]
        mov    dword ptr [edi + ecx*4], edx
        mov    edx, dword ptr [ebp - 0x28]
        mov    edi, dword ptr [edx]
        mov    edx, dword ptr [ebp - 0xbc]
        mov    dword ptr [eax + edx], edi
        mov    edi, dword ptr [ebp - 0x28]
        mov    edi, dword ptr [edi + 4]
        mov    dword ptr [eax + edx + 4], edi
        mov    edi, dword ptr [ebp + 8]
        mov    edi, dword ptr [edi + esi]
        mov    dword ptr [eax + edx + 8], edi
        mov    edi, dword ptr [ebp + 8]
        mov    edi, dword ptr [edi + esi + 4]
        mov    dword ptr [eax + edx + 0xc], edi
        xor    eax, eax
        mov    eax, dword ptr [ebp - 8]
        mov    al, byte ptr [eax + 0x13]
        test    al, al
        jbe    L_35d3
        mov    edx, eax
        and    edx, 0xff
        xor    eax, eax
        mov    dword ptr [ebp - 0x6c], 1
        mov    dword ptr [ebp - 0x14], edx
        mov    dword ptr [ebp - 0x38], eax
L_359c:
        mov    edi, dword ptr [ebp - 0x6c]
        test    edx, edi
        je    L_35c0
        mov    edx, dword ptr [ebp + eax - 0x98]
        mov    edi, dword ptr [ebp - 0xc]
        mov    eax, dword ptr [ebp + eax - 0xb4]
        mov    dl, byte ptr [edx + edi]
        mov    byte ptr [eax + ecx], dl
        mov    edx, dword ptr [ebp - 0x14]
        mov    eax, dword ptr [ebp - 0x38]
L_35c0:
        mov    edi, dword ptr [ebp - 0x6c]
        add    eax, 4
        shl    edi, 1
        cmp    eax, 8
        mov    dword ptr [ebp - 0x38], eax
        mov    dword ptr [ebp - 0x6c], edi
        jl    L_359c
L_35d3:
        mov    eax, dword ptr [ebp - 0x7c]
        mov    ecx, dword ptr [ebp - 0x9c]
        mov    edx, dword ptr [ebp - 0x54]
        mov    edi, dword ptr [ecx + eax*4]
        inc    word ptr [ebp - 0xac]
        test    edi, edx
        je    L_3ad9
        mov    edx, dword ptr [ebp - 0x34]
        mov    edi, eax
        shl    edi, 4
        cmp    edx, 0x7b242c
        ja    L_36b4
        mov    ecx, dword ptr [ebp - 0x20]
        jmp    dword ptr [ecx*4 + 0x4448c0]
        fld    dword ptr [esi + 4]
        fsub    dword ptr [esi - 4]
        fld    dword ptr [edi + ebx + 0xc]
        fsub    dword ptr [edi + ebx + 4]
        jmp    L_3676
L_361f:
        mov    eax, dword ptr [ebp - 0x9c]
        test    dword ptr [eax + ecx*4], edx
        jne    L_3ae4
        mov    edi, dword ptr [ebp - 0x7c]
        mov    edx, dword ptr [ebp - 0x34]
        shl    edi, 4
        cmp    edx, 0x7b242c
        ja    L_389b
        mov    eax, dword ptr [ebp - 0x20]
        jmp    dword ptr [eax*4 + 0x4448d8]
        fld    dword ptr [edi + ebx + 0xc]
        fsub    dword ptr [edi + ebx + 4]
        fld    dword ptr [esi + 4]
        fsub    dword ptr [esi - 4]
        jmp    L_385d
        fld    dword ptr [esi - 4]
        fld    dword ptr [edi + ebx + 4]
        jmp    L_3676
        fld    dword ptr [esi + 4]
        fsub    dword ptr [esi - 8]
        fld    dword ptr [edi + ebx + 0xc]
        fsub    dword ptr [edi + ebx]
L_3676:
        fld    st(1)
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_36d2
        fstp    st(0)
        fstp    st(0)
L_3689:
        mov    edx, dword ptr [ebp - 0x34]
        mov    dword ptr [ebp - 4], 0
        jmp    L_36df
        fld    dword ptr [esi - 8]
        fld    dword ptr [edi + ebx]
        jmp    L_3676
        fld    dword ptr [esi]
        fld    dword ptr [edi + ebx + 8]
        jmp    L_3676
        fld    dword ptr [esi + 4]
        fsub    dword ptr [esi]
        fld    dword ptr [edi + ebx + 0xc]
        fsub    dword ptr [edi + ebx + 8]
        jmp    L_3676
L_36b4:
        push    0x76df04
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_3689
        int 3    
        mov    edx, dword ptr [ebp - 0x34]
        mov    dword ptr [ebp - 4], 0
        jmp    L_36df
L_36d2:
        fld    st(1)
        fsub st(0), st(1)
        fdivr st(0), st(2)
        fstp    dword ptr [ebp - 4]
        fstp    st(0)
        fstp    st(0)
L_36df:
        fld    dword ptr [edi + ebx]
        mov    ecx, dword ptr [ebp - 0xac]
        fsub    dword ptr [esi - 8]
        mov    eax, dword ptr [ebp - 0xc4]
        and    ecx, 0xffff
        mov    dword ptr [ebp - 0x6c], ecx
        fmul    dword ptr [ebp - 4]
        shl    ecx, 4
        add    eax, ecx
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
        mov    ebx, dword ptr [edx + 4]
        test    ebx, ebx
        fsub    dword ptr [esi + 4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [esi + 4]
        fstp    dword ptr [eax + 0xc]
        je    L_3747
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [g_007b220c]
        jmp    L_374d
L_3747:
        fld    dword ptr [g_007b220c]
L_374d:
        mov    edx, dword ptr [edx]
        mov    ebx, dword ptr [ebp - 0xa0]
        fstp    dword ptr [eax + edx*4]
        fld    dword ptr [edi + ebx]
        mov    edx, dword ptr [ebp - 0x28]
        fsub    dword ptr [edx]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edx]
        mov    edx, dword ptr [ebp - 0xbc]
        fstp    dword ptr [ecx + edx]
        fld    dword ptr [edi + ebx + 4]
        mov    ebx, dword ptr [ebp - 0x28]
        fsub    dword ptr [ebx + 4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ebx + 4]
        mov    ebx, dword ptr [ebp - 0xa0]
        fstp    dword ptr [ecx + edx + 4]
        fld    dword ptr [edi + ebx + 8]
        mov    ebx, dword ptr [ebp + 8]
        fsub    dword ptr [ebx + esi]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ebx + esi]
        mov    ebx, dword ptr [ebp - 0xa0]
        fstp    dword ptr [ecx + edx + 8]
        fld    dword ptr [edi + ebx + 0xc]
        mov    edi, dword ptr [ebp + 8]
        fsub    dword ptr [esi + edi + 4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [esi + edi + 4]
        fstp    dword ptr [ecx + edx + 0xc]
        xor    ecx, ecx
        mov    ecx, dword ptr [ebp - 8]
        mov    cl, byte ptr [ecx + 0x13]
        test    cl, cl
        jbe    L_3a2c
        mov    edx, ecx
        and    edx, 0xff
        mov    dword ptr [ebp - 0x38], 1
        mov    dword ptr [ebp - 0x14], edx
        xor    ecx, ecx
L_37dc:
        mov    edi, dword ptr [ebp - 0x38]
        test    edx, edi
        je    L_3832
        mov    edi, dword ptr [ebp + ecx - 0x98]
        mov    edx, dword ptr [ebp - 0xc]
        mov    dl, byte ptr [edi + edx]
        mov    ebx, dword ptr [ebp - 0x7c]
        mov    byte ptr [ebp - 0x60], dl
        mov    edx, dword ptr [ebp - 0x60]
        and    edx, 0xff
        mov    dword ptr [ebp - 0x3c], edx
        xor    edx, edx
        mov    dl, byte ptr [edi + ebx]
        sub    edx, dword ptr [ebp - 0x3c]
        mov    edi, dword ptr [ebp - 0x6c]
        mov    dword ptr [ebp - 0x1c], edx
        fild    dword ptr [ebp - 0x1c]
        mov    edx, dword ptr [ebp + ecx - 0xb4]
        fmul    dword ptr [ebp - 4]
        fiadd    dword ptr [ebp - 0x3c]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [ebp - 0x1c]
        mov    bl, byte ptr [ebp - 0x1c]
        mov    byte ptr [edx + edi], bl
        mov    edx, dword ptr [ebp - 0x14]
L_3832:
        mov    ebx, dword ptr [ebp - 0x38]
        add    ecx, 4
        shl    ebx, 1
        cmp    ecx, 8
        mov    dword ptr [ebp - 0x38], ebx
        jl    L_37dc
        jmp    L_3a2c
        fld    dword ptr [edi + ebx + 4]
        fld    dword ptr [esi - 4]
        jmp    L_385d
        fld    dword ptr [edi + ebx + 0xc]
        fsub    dword ptr [edi + ebx]
        fld    dword ptr [esi + 4]
        fsub    dword ptr [esi - 8]
L_385d:
        fld    st(1)
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_38b9
        fstp    st(0)
        fstp    st(0)
L_3870:
        mov    edx, dword ptr [ebp - 0x34]
        mov    dword ptr [ebp - 4], 0
        jmp    L_38c6
        fld    dword ptr [edi + ebx]
        fld    dword ptr [esi - 8]
        jmp    L_385d
        fld    dword ptr [edi + ebx + 8]
        fld    dword ptr [esi]
        jmp    L_385d
        fld    dword ptr [edi + ebx + 0xc]
        fsub    dword ptr [edi + ebx + 8]
        fld    dword ptr [esi + 4]
        fsub    dword ptr [esi]
        jmp    L_385d
L_389b:
        push    0x76df04
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_3870
        int 3    
        mov    edx, dword ptr [ebp - 0x34]
        mov    dword ptr [ebp - 4], 0
        jmp    L_38c6
L_38b9:
        fld    st(1)
        fsub st(0), st(1)
        fdivr st(0), st(2)
        fstp    dword ptr [ebp - 4]
        fstp    st(0)
        fstp    st(0)
L_38c6:
        fld    dword ptr [esi - 8]
        mov    ecx, dword ptr [ebp - 0xac]
        fsub    dword ptr [edi + ebx]
        mov    eax, dword ptr [ebp - 0xc4]
        and    ecx, 0xffff
        mov    dword ptr [ebp - 0x6c], ecx
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
        je    L_3932
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [g_007b220c]
        jmp    L_3938
L_3932:
        fld    dword ptr [g_007b220c]
L_3938:
        mov    edx, dword ptr [edx]
        mov    ebx, dword ptr [ebp - 0xa0]
        fstp    dword ptr [eax + edx*4]
        mov    edx, dword ptr [ebp - 0x28]
        fld    dword ptr [edx]
        mov    edx, dword ptr [ebp - 0xbc]
        fsub    dword ptr [edi + ebx]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edi + ebx]
        fstp    dword ptr [ecx + edx]
        mov    edx, dword ptr [ebp - 0x28]
        fld    dword ptr [edx + 4]
        mov    edx, dword ptr [ebp - 0xbc]
        fsub    dword ptr [edi + ebx + 4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edi + ebx + 4]
        fstp    dword ptr [ecx + edx + 4]
        mov    edx, dword ptr [ebp + 8]
        fld    dword ptr [edx + esi]
        mov    edx, dword ptr [ebp - 0xbc]
        fsub    dword ptr [edi + ebx + 8]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edi + ebx + 8]
        lea    edi, [edi + ebx + 0xc]
        mov    ebx, dword ptr [ebp + 8]
        fstp    dword ptr [ecx + edx + 8]
        fld    dword ptr [esi + ebx + 4]
        fsub    dword ptr [edi]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edi]
        fstp    dword ptr [ecx + edx + 0xc]
        xor    ecx, ecx
        mov    ecx, dword ptr [ebp - 8]
        mov    cl, byte ptr [ecx + 0x13]
        test    cl, cl
        jbe    L_3a2c
        mov    edx, ecx
        and    edx, 0xff
        mov    dword ptr [ebp - 0x38], 1
        mov    dword ptr [ebp - 0x14], edx
        xor    ecx, ecx
L_39c6:
        mov    edi, dword ptr [ebp - 0x38]
        test    edx, edi
        je    L_3a1c
        mov    edi, dword ptr [ebp + ecx - 0x98]
        mov    edx, dword ptr [ebp - 0x7c]
        mov    dl, byte ptr [edx + edi]
        mov    ebx, dword ptr [ebp - 0xc]
        mov    byte ptr [ebp - 0x44], dl
        mov    edx, dword ptr [ebp - 0x44]
        and    edx, 0xff
        mov    dword ptr [ebp - 0x3c], edx
        xor    edx, edx
        mov    dl, byte ptr [ebx + edi]
        sub    edx, dword ptr [ebp - 0x3c]
        mov    edi, dword ptr [ebp - 0x6c]
        mov    dword ptr [ebp - 0x1c], edx
        fild    dword ptr [ebp - 0x1c]
        mov    edx, dword ptr [ebp + ecx - 0xb4]
        fmul    dword ptr [ebp - 4]
        fiadd    dword ptr [ebp - 0x3c]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [ebp - 0x1c]
        mov    bl, byte ptr [ebp - 0x1c]
        mov    byte ptr [edx + edi], bl
        mov    edx, dword ptr [ebp - 0x14]
L_3a1c:
        mov    ebx, dword ptr [ebp - 0x38]
        add    ecx, 4
        shl    ebx, 1
        cmp    ecx, 8
        mov    dword ptr [ebp - 0x38], ebx
        jl    L_39c6
L_3a2c:
        mov    dword ptr [ebp - 0x1c], eax
        mov    dword ptr [ebp - 0x3c], 0
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
        mov    dword ptr [ebp - 0x3c], edx
        mov    eax, dword ptr [ebp - 0x3c]
        mov    ecx, dword ptr [ebp - 0xb8]
        mov    edx, dword ptr [ebp - 0x6c]
        inc    word ptr [ebp - 0xac]
        mov    ebx, dword ptr [ebp - 0xa8]
        mov    edi, dword ptr [ebp - 0xc4]
        mov    dword ptr [ecx + edx*4], eax
        mov    eax, dword ptr [ebp - 0x40]
        jmp    L_3ae7
L_3ad9:
        mov    eax, dword ptr [ebp - 0x40]
        mov    edi, dword ptr [ebp - 0xc4]
        jmp    L_3ae7
L_3ae4:
        mov    eax, dword ptr [ebp - 0x40]
L_3ae7:
        mov    ecx, dword ptr [ebp - 0x58]
        mov    dword ptr [ebp - 0xc], ecx
        mov    ecx, dword ptr [ebp - 0x68]
        mov    edx, dword ptr [ebp - 0xc]
        add    ecx, 4
        mov    dword ptr [ebp - 0x68], ecx
        add    dword ptr [ebp - 0x28], 0x10
        mov    ecx, dword ptr [ebp - 0x24]
        add    esi, 0x10
        cmp    edx, ecx
        jl    L_34e8
L_3b0b:
        mov    ecx, dword ptr [g_007da66c]
        lea    edx, [eax + eax*2]
        shl    edx, 4
        mov    ebx, dword ptr [ecx + edx]
        add    ecx, edx
        mov    edx, dword ptr [ecx + 0x10]
        mov    ecx, dword ptr [ecx + 0x18]
        mov    dword ptr [ebp - 0xa0], edx
        mov    edx, dword ptr [ebp - 8]
        mov    dword ptr [ebp - 0x9c], ecx
        xor    ecx, ecx
        mov    cl, byte ptr [edx + 0x13]
        test    cl, cl
        mov    dword ptr [ebp - 0xa8], ebx
        jbe    L_3b82
        mov    edi, ecx
        xor    esi, esi
        and    edi, 0xff
        mov    edx, 1
        mov    dword ptr [ebp - 0x14], edi
        lea    ecx, [ebp - 0x98]
L_3b58:
        test    edi, edx
        je    L_3b77
        mov    ebx, dword ptr [g_007da66c]
        lea    edi, [eax + eax*2]
        lea    edi, [esi + edi*2]
        mov    edi, dword ptr [ebx + edi*8 + 0x20]
        mov    dword ptr [ecx], edi
        mov    ebx, dword ptr [ebp - 0xa8]
        mov    edi, dword ptr [ebp - 0x14]
L_3b77:
        inc    esi
        add    ecx, 4
        shl    edx, 1
        cmp    esi, 2
        jl    L_3b58
L_3b82:
        mov    cx, word ptr [ebp - 0xac]
        xor    edx, edx
        test    eax, eax
        sete    dl
        mov    word ptr [ebp - 0x90], cx
        mov    eax, edx
        mov    edx, dword ptr [g_007da66c]
        lea    ecx, [eax + eax*2]
        shl    ecx, 4
        mov    edi, dword ptr [ecx + edx]
        add    ecx, edx
        mov    edx, dword ptr [ecx + 0x10]
        mov    ecx, dword ptr [ecx + 0x18]
        mov    dword ptr [ebp - 0xbc], edx
        mov    edx, dword ptr [ebp - 8]
        mov    dword ptr [ebp - 0xb8], ecx
        xor    ecx, ecx
        mov    cl, byte ptr [edx + 0x13]
        test    cl, cl
        mov    dword ptr [ebp - 0x40], eax
        mov    dword ptr [ebp - 0xc4], edi
        jbe    L_3c1e
        mov    edx, ecx
        xor    esi, esi
        and    edx, 0xff
        mov    dword ptr [ebp + 8], 1
        mov    dword ptr [ebp - 0x14], edx
        lea    ecx, [ebp - 0xb4]
        jmp    L_3bf0
L_3bed:
        mov    edx, dword ptr [ebp - 0x14]
L_3bf0:
        test    dword ptr [ebp + 8], edx
        je    L_3c0d
        mov    edi, dword ptr [g_007da66c]
        lea    edx, [eax + eax*2]
        lea    edx, [esi + edx*2]
        mov    edx, dword ptr [edi + edx*8 + 0x20]
        mov    dword ptr [ecx], edx
        mov    edi, dword ptr [ebp - 0xc4]
L_3c0d:
        mov    edx, dword ptr [ebp + 8]
        inc    esi
        shl    edx, 1
        add    ecx, 4
        cmp    esi, 2
        mov    dword ptr [ebp + 8], edx
        jl    L_3bed
L_3c1e:
        mov    word ptr [ebp - 0xac], 0
L_3c27:
        mov    ecx, dword ptr [ebp - 0x54]
        mov    esi, dword ptr [ebp - 0x20]
        mov    edx, dword ptr [ebp - 0x34]
        shl    ecx, 1
        mov    dword ptr [ebp - 0x54], ecx
        mov    ecx, dword ptr [ebp - 0x50]
        inc    esi
        add    edx, 8
        dec    ecx
        mov    dword ptr [ebp - 0x20], esi
        mov    dword ptr [ebp - 0x34], edx
        mov    dword ptr [ebp - 0x50], ecx
        jne    L_34a3
        mov    esi, dword ptr [ebp - 0x90]
        xor    ecx, ecx
        and    esi, 0xffff
        jle    L_3c6a
        mov    edx, dword ptr [ebp - 0x9c]
L_3c62:
        or    ecx, dword ptr [edx]
        add    edx, 4
        dec    esi
        jne    L_3c62
L_3c6a:
        test    ecx, ecx
        mov    dword ptr [g_007b985c], ecx
        je    L_3c9c
        mov    edx, dword ptr [ebp - 0x18]
        mov    esi, edx
        dec    edx
        test    esi, esi
        mov    dword ptr [ebp - 0x18], edx
        jne    L_348e
        test    ecx, ecx
        je    L_3c9c
        mov    eax, dword ptr [g_007d98fc]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [ebp - 0x2c]
        mov    byte ptr [ecx + edx], 0
        jmp    L_3e25
L_3c9c:
        mov    eax, dword ptr [ebp - 0x90]
        xor    edi, edi
        and    eax, 0xffff
        mov    dword ptr [ebp - 0xc], edi
        mov    dword ptr [ebp - 0x24], eax
        jle    L_3dd2
        mov    eax, dword ptr [g_007b9868]
        mov    esi, dword ptr [eax]
        mov    eax, dword ptr [ebp - 0xa0]
        mov    ecx, dword ptr [ebp - 8]
        mov    dl, byte ptr [ecx + 0x13]
        mov    byte ptr [ebp - 0x84], dl
        mov    edx, dword ptr [g_007da684]
        mov    dword ptr [ebp - 0x20], eax
        mov    eax, dword ptr [ebp - 0x8c]
        mov    dword ptr [ebp - 0x1c], esi
        lea    esi, [esi + eax*8]
        shl    eax, 4
        add    eax, dword ptr [edx]
        mov    edx, dword ptr [ebp - 0xa0]
        sub    edx, ebx
        mov    dword ptr [ebp + 8], edx
        mov    edx, dword ptr [g_007da680]
        mov    edx, dword ptr [edx]
        lea    ecx, [ebx + 8]
        sub    edx, dword ptr [ebp - 0x1c]
        mov    dword ptr [ebp - 0x50], edx
L_3d04:
        mov    ebx, dword ptr [ebp - 0x8c]
        add    ebx, edi
        mov    dword ptr [ebp - 0x1c], ebx
        mov    ebx, dword ptr [ecx - 8]
        mov    dword ptr [eax], ebx
        mov    ebx, dword ptr [ecx - 4]
        mov    dword ptr [eax + 4], ebx
        mov    ebx, dword ptr [ecx]
        mov    dword ptr [eax + 8], ebx
        mov    ebx, dword ptr [ecx + 4]
        mov    dword ptr [eax + 0xc], ebx
        mov    ebx, dword ptr [ebp - 0x20]
        mov    ebx, dword ptr [ebx]
        mov    dword ptr [edx + esi], ebx
        mov    ebx, dword ptr [ebp - 0x20]
        mov    ebx, dword ptr [ebx + 4]
        mov    dword ptr [edx + esi + 4], ebx
        mov    ebx, dword ptr [ebp + 8]
        mov    ebx, dword ptr [ebx + ecx]
        mov    dword ptr [esi], ebx
        mov    ebx, dword ptr [ebp + 8]
        mov    ebx, dword ptr [ebx + ecx + 4]
        mov    dword ptr [esi + 4], ebx
        mov    ebx, dword ptr [ebp - 0x84]
        test    bl, bl
        jbe    L_3db1
        and    ebx, 0xff
        mov    dword ptr [ebp - 0x14], ebx
        mov    edx, 0x7da660
        lea    ebx, [ebp - 0x98]
        mov    dword ptr [ebp - 0x38], 1
        mov    dword ptr [ebp - 0x18], edx
        mov    dword ptr [ebp - 0x58], ebx
L_3d74:
        mov    ebx, dword ptr [ebp - 0x14]
        test    dword ptr [ebp - 0x38], ebx
        je    L_3d94
        mov    ebx, dword ptr [ebp - 0x58]
        mov    ebx, dword ptr [ebx]
        mov    edx, dword ptr [edx]
        mov    bl, byte ptr [ebx + edi]
        mov    edx, dword ptr [edx]
        mov    edi, dword ptr [ebp - 0x1c]
        mov    byte ptr [edx + edi], bl
        mov    edi, dword ptr [ebp - 0xc]
        mov    edx, dword ptr [ebp - 0x18]
L_3d94:
        add    dword ptr [ebp - 0x58], 4
        mov    ebx, dword ptr [ebp - 0x38]
        add    edx, 8
        shl    ebx, 1
        cmp    edx, 0x7da670
        mov    dword ptr [ebp - 0x18], edx
        mov    dword ptr [ebp - 0x38], ebx
        jl    L_3d74
        mov    edx, dword ptr [ebp - 0x50]
L_3db1:
        mov    ebx, dword ptr [ebp - 0x20]
        add    ebx, 0x10
        inc    edi
        mov    dword ptr [ebp - 0x20], ebx
        mov    ebx, dword ptr [ebp - 0x24]
        add    esi, 8
        add    eax, 0x10
        add    ecx, 0x10
        cmp    edi, ebx
        mov    dword ptr [ebp - 0xc], edi
        jl    L_3d04
L_3dd2:
        mov    ecx, dword ptr [g_007da670]
        mov    eax, dword ptr [ebp - 0x90]
        mov    edx, dword ptr [ecx]
        mov    cx, word ptr [ebp - 0x90]
        mov    dword ptr [ebp - 0xc], eax
        mov    eax, dword ptr [ebp - 0x70]
        mov    word ptr [edx + eax*2], cx
        mov    ecx, dword ptr [ebp - 0xc]
L_3df4:
        mov    edx, dword ptr [ebp - 0x8c]
        mov    eax, dword ptr [ebp - 0x74]
        and    ecx, 0xffff
        add    edx, ecx
        mov    ecx, dword ptr [ebp - 0x70]
        inc    ecx
        inc    eax
        mov    dword ptr [ebp - 0x8c], edx
        mov    edx, dword ptr [g_007d98fc]
        mov    dword ptr [ebp - 0x70], ecx
        mov    ecx, dword ptr [ebp - 0x2c]
        mov    dword ptr [ebp - 0x74], eax
        mov    eax, dword ptr [edx]
        mov    byte ptr [eax + ecx], 0
L_3e25:
        mov    esi, dword ptr [ebp - 0x10]
        mov    eax, dword ptr [ebp - 0x2c]
        mov    edx, dword ptr [ebp - 8]
        mov    ecx, dword ptr [edx + 0x58]
        add    esi, 3
        inc    eax
        cmp    eax, ecx
        mov    dword ptr [ebp - 0x10], esi
        mov    dword ptr [ebp - 0x2c], eax
        jl    L_2bb1
L_3e43:
        mov    bl, byte ptr [ebp + 0x1c]
        test    bl, bl
        mov    edx, dword ptr [ebp + 0x10]
        je    L_3e52
        mov    ecx, dword ptr [edx + 0x30]
        jmp    L_3e5c
L_3e52:
        mov    ecx, dword ptr [edx]
        mov    eax, dword ptr [edx + 0x10]
        shl    ecx, 5
        add    ecx, eax
L_3e5c:
        mov    eax, dword ptr [ebp - 8]
        xor    esi, esi
        test    bl, bl
        mov    dword ptr [eax + 0x44], ecx
        mov    word ptr [eax + 0xa], si
        je    L_3e71
        mov    ecx, dword ptr [edx + 0x48]
        jmp    L_3e7a
L_3e71:
        mov    ecx, dword ptr [edx + 0xc]
        mov    edx, dword ptr [edx + 0x28]
        lea    ecx, [edx + ecx*2]
L_3e7a:
        mov    dword ptr [eax + 0x50], ecx
        mov    word ptr [eax + 0x54], si
        mov    ecx, dword ptr [eax + 0x18]
        xor    ebx, ebx
        cmp    ecx, esi
        mov    dword ptr [ebp - 0xc], ecx
        mov    dword ptr [ebp - 0x10], ebx
        mov    dword ptr [ebp + 8], esi
        jle    L_40ec
L_3e97:
        mov    edx, dword ptr [g_007da600]
        mov    edx, dword ptr [edx]
        cmp    byte ptr [edx + ebx], 0
        jne    L_3ead
        inc    dword ptr [ebp + 8]
        jmp    L_40e0
L_3ead:
        mov    edx, dword ptr [ebp + 8]
        mov    ecx, ebx
        sub    ecx, edx
        mov    edx, dword ptr [g_007da5f4]
        mov    word ptr [edx + ebx*2], cx
        test    byte ptr [g_007da86c], 2
        jle    L_3fb4
        mov    ecx, dword ptr [eax + 0x28]
        test    ch, 0x3c
        je    L_3fb4
        mov    ecx, dword ptr [ebp - 8]
        mov    edx, dword ptr [g_007da68c]
        mov    edx, dword ptr [edx]
        mov    eax, dword ptr [ecx + 0x1c]
        mov    dword ptr [ebp - 0x24], eax
        mov    dword ptr [ebp - 0x1c], edx
        mov    edx, dword ptr [ebp - 0x64]
        lea    eax, [eax + edx*8]
        mov    dword ptr [ebp - 0x60], eax
        xor    eax, eax
        mov    ax, word ptr [ecx + 0xa]
        lea    edx, [eax + eax*4]
        mov    eax, dword ptr [ecx + 0x84]
        lea    esi, [eax + edx*8]
        mov    dword ptr [ebp - 0x44], esi
        mov    ecx, dword ptr [ebp - 0x1c]
        fld1    
        mov    edi, dword ptr [ebp - 0x10]
        mov    eax, edi
        shl    eax, 4
        fdiv    dword ptr [eax + ecx + 0xc]
        add    eax, ecx
        mov    edx, dword ptr [ebp - 0x44]
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
        mov    ecx, dword ptr [g_007b94a0]
        mov    eax, dword ptr [ebp - 0x24]
        mov    dword ptr [esi + 0x10], ecx
        fadd    dword ptr [g_007da874]
        fstp    dword ptr [esi]
        fld    dword ptr [g_007da878]
        fmul    dword ptr [esi + 4]
        fadd    dword ptr [g_007da870]
        fstp    dword ptr [esi + 4]
        mov    edx, dword ptr [eax + ebx*8]
        mov    dword ptr [esi + 0x18], edx
        mov    eax, dword ptr [eax + ebx*8 + 4]
        mov    dword ptr [esi + 0x1c], eax
        mov    eax, dword ptr [ebp - 0x60]
        mov    ecx, dword ptr [eax + ebx*8]
        mov    dword ptr [esi + 0x20], ecx
        mov    edx, dword ptr [eax + ebx*8 + 4]
        mov    eax, dword ptr [ebp - 8]
        test    byte ptr [eax + 0x13], 1
        mov    dword ptr [esi + 0x24], edx
        je    L_4092
        mov    ecx, dword ptr [g_007da65c]
        mov    edx, dword ptr [ecx]
        mov    ecx, dword ptr [ebp - 8]
        mov    dl, byte ptr [edx + ebx]
        xor    eax, eax
        mov    ax, word ptr [ecx + 0xa]
        mov    ecx, dword ptr [ecx + 0x84]
        lea    eax, [eax + eax*4]
        mov    byte ptr [ecx + eax*8 + 0x17], dl
        jmp    L_4092
L_3fb4:
        mov    eax, dword ptr [ebp - 8]
        mov    ecx, dword ptr [eax + 0x1c]
        mov    edx, dword ptr [g_007da68c]
        mov    edi, dword ptr [eax + 0x44]
        xor    esi, esi
        mov    si, word ptr [eax + 0xa]
        mov    dword ptr [ebp - 0x60], ecx
        mov    ecx, dword ptr [edx]
        mov    dword ptr [ebp - 0x1c], ecx
        shl    esi, 5
        add    esi, edi
        mov    dword ptr [ebp - 0x44], esi
        mov    ecx, dword ptr [ebp - 0x1c]
        fld1    
        mov    edi, dword ptr [ebp - 0x10]
        mov    eax, edi
        shl    eax, 4
        fdiv    dword ptr [eax + ecx + 0xc]
        add    eax, ecx
        mov    edx, dword ptr [ebp - 0x44]
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
        mov    edx, dword ptr [g_007b94a0]
        mov    eax, dword ptr [ebp - 0x60]
        mov    edi, dword ptr [g_007b9864]
        fadd    dword ptr [g_007da874]
        mov    dword ptr [esi + 0x10], edx
        fstp    dword ptr [esi]
        fld    dword ptr [g_007da878]
        fmul    dword ptr [esi + 4]
        fadd    dword ptr [g_007da870]
        fstp    dword ptr [esi + 4]
        mov    ecx, dword ptr [eax + ebx*8]
        mov    dword ptr [esi + 0x18], ecx
        mov    edx, dword ptr [eax + ebx*8 + 4]
        mov    ecx, dword ptr [ebp - 0x5c]
        lea    eax, [ecx*8]
        add    eax, dword ptr [edi]
        inc    ecx
        mov    dword ptr [esi + 0x1c], edx
        mov    dword ptr [ebp - 0x5c], ecx
        mov    ecx, dword ptr [ebp - 0x64]
        lea    edx, [ebx + ecx]
        mov    ecx, dword ptr [ebp - 8]
        mov    esi, dword ptr [ecx + 0x1c]
        mov    edi, dword ptr [esi + edx*8]
        mov    edx, dword ptr [esi + edx*8 + 4]
        mov    dword ptr [eax], edi
        mov    dword ptr [eax + 4], edx
        test    byte ptr [ecx + 0x13], 1
        je    L_4092
        mov    eax, dword ptr [g_007da65c]
        mov    ecx, dword ptr [eax]
        mov    eax, dword ptr [ebp - 8]
        mov    cl, byte ptr [ecx + ebx]
        xor    edx, edx
        mov    dx, word ptr [eax + 0xa]
        mov    eax, dword ptr [eax + 0x44]
        shl    edx, 5
        mov    byte ptr [edx + eax + 0x17], cl
L_4092:
        mov    al, byte ptr [ebp + 0x17]
        test    al, al
        je    L_40d3
        mov    eax, dword ptr [ebp - 8]
        fld    dword ptr [ebp - 0x88]
        mov    ecx, dword ptr [eax + 0x44]
        xor    edx, edx
        mov    dx, word ptr [eax + 0xa]
        shl    edx, 5
        fadd    dword ptr [edx + ecx + 0x18]
        lea    ecx, [edx + ecx + 0x18]
        xor    edx, edx
        fstp    dword ptr [ecx]
        mov    dx, word ptr [eax + 0xa]
        mov    ecx, dword ptr [eax + 0x44]
        fld    dword ptr [ebp - 0x80]
        shl    edx, 5
        fadd    dword ptr [edx + ecx + 0x1c]
        lea    ecx, [edx + ecx + 0x1c]
        fstp    dword ptr [ecx]
        jmp    L_40d6
L_40d3:
        mov    eax, dword ptr [ebp - 8]
L_40d6:
        inc    word ptr [eax + 0xa]
        mov    eax, dword ptr [ebp - 8]
        mov    ecx, dword ptr [ebp - 0xc]
L_40e0:
        inc    ebx
        cmp    ebx, ecx
        mov    dword ptr [ebp - 0x10], ebx
        jl    L_3e97
L_40ec:
        mov    esi, dword ptr [eax + 0x58]
        xor    edx, edx
        xor    ecx, ecx
        test    esi, esi
        mov    dword ptr [ebp - 0x2c], edx
        jle    L_4187
L_40fe:
        mov    esi, dword ptr [g_007d98fc]
        mov    esi, dword ptr [esi]
        cmp    byte ptr [esi + edx], 0
        je    L_4175
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
        mov    edx, dword ptr [ebp - 0x2c]
L_4175:
        mov    esi, dword ptr [eax + 0x58]
        add    ecx, 3
        inc    edx
        cmp    edx, esi
        mov    dword ptr [ebp - 0x2c], edx
        jl    L_40fe
L_4187:
        mov    eax, dword ptr [ebp - 0x70]
        test    eax, eax
        jle    L_4786
        mov    ecx, dword ptr [ebp - 0x70]
        xor    eax, eax
        cmp    ecx, eax
        mov    dword ptr [ebp - 0x2c], eax
        mov    dword ptr [ebp - 0x10], eax
        jle    L_4786
L_41a5:
        mov    eax, dword ptr [g_007da670]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [ebp - 0x2c]
        mov    ax, word ptr [ecx + edx*2]
        mov    dword ptr [ebp - 0xc], 1
        and    eax, 0xffff
        mov    dword ptr [ebp - 0x24], eax
        dec    eax
        cmp    eax, 1
        jle    L_4769
        mov    eax, dword ptr [ebp - 0x5c]
        mov    edx, dword ptr [ebp - 0x10]
        mov    ebx, dword ptr [ebp - 8]
        lea    ecx, [eax*8]
        lea    eax, [edx*8 + 8]
        mov    dword ptr [ebp - 0x3c], ecx
        mov    dword ptr [ebp + 8], eax
L_41e9:
        test    byte ptr [g_007da86c], 2
        jle    L_4423
        mov    eax, dword ptr [ebx + 0x28]
        test    ah, 0x3c
        je    L_4423
        mov    ecx, dword ptr [g_007b9868]
        mov    edx, dword ptr [ecx]
        mov    eax, dword ptr [g_007da680]
        mov    ecx, dword ptr [eax]
        mov    dword ptr [ebp - 0xc8], edx
        mov    edx, dword ptr [g_007da684]
        mov    eax, dword ptr [edx]
        mov    dword ptr [ebp - 0x60], eax
        mov    eax, dword ptr [ebp - 0x10]
        mov    dword ptr [ebp - 0x78], ecx
        mov    ecx, dword ptr [ebp - 0xc]
        lea    edx, [ecx + eax]
        lea    eax, [eax + ecx + 1]
        mov    dword ptr [ebp - 0x18], eax
        xor    eax, eax
        mov    ax, word ptr [ebx + 0xa]
        mov    dword ptr [ebp - 0x44], edx
        mov    edx, dword ptr [ebx + 0x84]
        lea    ecx, [eax + eax*4]
        lea    esi, [edx + ecx*8]
        mov    dword ptr [ebp - 0x1c], esi
        mov    ecx, dword ptr [ebp - 0x60]
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
        mov    eax, dword ptr [ebp - 0x18]
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
        mov    eax, dword ptr [ebp - 0x44]
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
        mov    eax, dword ptr [g_007b94a0]
        mov    ecx, dword ptr [ebp - 0x10]
        mov    dword ptr [esi + 0x10], eax
        fadd    dword ptr [g_007da874]
        mov    dword ptr [esi + 0x38], eax
        mov    dword ptr [esi + 0x60], eax
        mov    eax, dword ptr [ebp - 0x78]
        mov    edx, dword ptr [eax + ecx*8]
        fstp    dword ptr [esi]
        fld    dword ptr [g_007da878]
        lea    ecx, [ecx*8 + 4]
        fmul    dword ptr [esi + 4]
        mov    dword ptr [ebp - 0x44], ecx
        mov    ecx, dword ptr [ecx + eax]
        mov    dword ptr [esi + 0x18], edx
        fadd    dword ptr [g_007da870]
        mov    edx, dword ptr [ebp - 0x18]
        mov    dword ptr [esi + 0x1c], ecx
        mov    ecx, dword ptr [eax + edx*8]
        fstp    dword ptr [esi + 4]
        mov    dword ptr [esi + 0x40], ecx
        fld    dword ptr [g_007da87c]
        mov    ecx, dword ptr [eax + edx*8 + 4]
        fmul    dword ptr [esi + 0x28]
        mov    dword ptr [esi + 0x44], ecx
        mov    ecx, dword ptr [ebp + 8]
        mov    edi, dword ptr [ecx + eax]
        fadd    dword ptr [g_007da874]
        mov    eax, dword ptr [ecx + eax + 4]
        mov    dword ptr [esi + 0x68], edi
        mov    edi, dword ptr [ebp - 0x10]
        fstp    dword ptr [esi + 0x28]
        mov    dword ptr [esi + 0x6c], eax
        fld    dword ptr [g_007da878]
        mov    eax, dword ptr [ebp - 0xc8]
        fmul    dword ptr [esi + 0x2c]
        mov    edi, dword ptr [eax + edi*8]
        mov    dword ptr [esi + 0x20], edi
        mov    edi, dword ptr [ebp - 0x44]
        fadd    dword ptr [g_007da870]
        mov    edi, dword ptr [edi + eax]
        mov    dword ptr [esi + 0x24], edi
        mov    edi, dword ptr [eax + edx*8]
        mov    edx, dword ptr [eax + edx*8 + 4]
        fstp    dword ptr [esi + 0x2c]
        fld    dword ptr [g_007da87c]
        mov    dword ptr [esi + 0x4c], edx
        fmul    dword ptr [esi + 0x50]
        mov    edx, dword ptr [ecx + eax]
        mov    dword ptr [esi + 0x48], edi
        mov    dword ptr [esi + 0x70], edx
        fadd    dword ptr [g_007da874]
        fstp    dword ptr [esi + 0x50]
        fld    dword ptr [g_007da878]
        fmul    dword ptr [esi + 0x54]
        fadd    dword ptr [g_007da870]
        fstp    dword ptr [esi + 0x54]
        mov    eax, dword ptr [ecx + eax + 4]
        mov    dword ptr [esi + 0x74], eax
        test    byte ptr [ebx + 0x13], 1
        je    L_465e
        mov    ecx, dword ptr [g_007da660]
        mov    edx, dword ptr [ecx]
        mov    esi, dword ptr [ebx + 0x44]
        xor    eax, eax
        mov    ax, word ptr [ebx + 0xa]
        mov    ecx, eax
        mov    eax, dword ptr [ebp - 0x10]
        mov    dl, byte ptr [edx + eax]
        shl    ecx, 5
        mov    byte ptr [ecx + esi + 0x17], dl
        mov    ecx, dword ptr [g_007da660]
        mov    edx, dword ptr [ecx]
        mov    esi, dword ptr [ebp - 0xc]
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
        jmp    L_465e
L_4423:
        mov    eax, dword ptr [g_007da680]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [g_007da684]
        mov    eax, dword ptr [edx]
        xor    esi, esi
        mov    si, word ptr [ebx + 0xa]
        mov    dword ptr [ebp - 0x60], eax
        mov    eax, dword ptr [ebp - 0x10]
        mov    dword ptr [ebp - 0x78], ecx
        mov    ecx, dword ptr [ebp - 0xc]
        lea    edx, [ecx + eax]
        mov    dword ptr [ebp - 0x44], edx
        mov    edx, dword ptr [ebx + 0x44]
        shl    esi, 5
        lea    eax, [eax + ecx + 1]
        add    esi, edx
        mov    dword ptr [ebp - 0x50], eax
        mov    dword ptr [ebp - 0x18], eax
        mov    dword ptr [ebp - 0x1c], esi
        mov    ecx, dword ptr [ebp - 0x60]
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
        mov    eax, dword ptr [ebp - 0x18]
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
        mov    eax, dword ptr [ebp - 0x44]
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
        mov    eax, dword ptr [g_007b94a0]
        mov    edi, dword ptr [ebp - 0x10]
        mov    dword ptr [esi + 0x10], eax
        fadd    dword ptr [g_007da874]
        mov    dword ptr [esi + 0x30], eax
        mov    dword ptr [esi + 0x50], eax
        mov    eax, dword ptr [ebp - 0x78]
        fstp    dword ptr [esi]
        mov    ecx, dword ptr [eax + edi*8]
        fld    dword ptr [g_007da878]
        mov    edx, dword ptr [eax + edi*8 + 4]
        fmul    dword ptr [esi + 4]
        mov    dword ptr [esi + 0x18], ecx
        mov    ecx, dword ptr [ebp - 0x18]
        mov    dword ptr [esi + 0x1c], edx
        fadd    dword ptr [g_007da870]
        mov    edx, dword ptr [eax + ecx*8]
        mov    ecx, dword ptr [eax + ecx*8 + 4]
        mov    dword ptr [esi + 0x3c], ecx
        fstp    dword ptr [esi + 4]
        mov    ecx, dword ptr [ebp + 8]
        fld    dword ptr [g_007da87c]
        mov    dword ptr [esi + 0x38], edx
        fmul    dword ptr [esi + 0x20]
        mov    edx, dword ptr [ecx + eax]
        mov    eax, dword ptr [ecx + eax + 4]
        mov    ecx, dword ptr [ebp - 0x5c]
        fadd    dword ptr [g_007da874]
        inc    ecx
        mov    dword ptr [ebp - 0x5c], ecx
        mov    ecx, dword ptr [g_007b9868]
        fstp    dword ptr [esi + 0x20]
        mov    dword ptr [esi + 0x58], edx
        fld    dword ptr [g_007da878]
        mov    edx, dword ptr [ebp - 0x3c]
        fmul    dword ptr [esi + 0x24]
        mov    dword ptr [esi + 0x5c], eax
        mov    eax, dword ptr [ecx]
        mov    edi, dword ptr [eax + edi*8]
        fadd    dword ptr [g_007da870]
        mov    ecx, dword ptr [g_007b9864]
        mov    ecx, dword ptr [ecx]
        fstp    dword ptr [esi + 0x24]
        fld    dword ptr [g_007da87c]
        fmul    dword ptr [esi + 0x40]
        fadd    dword ptr [g_007da874]
        fstp    dword ptr [esi + 0x40]
        fld    dword ptr [g_007da878]
        fmul    dword ptr [esi + 0x44]
        fadd    dword ptr [g_007da870]
        fstp    dword ptr [esi + 0x44]
        mov    esi, edx
        mov    dword ptr [ecx + esi], edi
        mov    edi, dword ptr [ebp - 0x10]
        mov    edi, dword ptr [eax + edi*8 + 4]
        add    edx, 8
        mov    dword ptr [ecx + esi + 4], edi
        mov    edi, dword ptr [ebp - 0x5c]
        mov    esi, edx
        inc    edi
        mov    dword ptr [ebp - 0x5c], edi
        mov    edi, dword ptr [ebp - 0x50]
        mov    edi, dword ptr [eax + edi*8]
        mov    dword ptr [ecx + esi], edi
        mov    edi, dword ptr [ebp - 0x50]
        mov    edi, dword ptr [eax + edi*8 + 4]
        add    edx, 8
        mov    dword ptr [ecx + esi + 4], edi
        mov    edi, dword ptr [ebp - 0x5c]
        mov    esi, edx
        add    edx, 8
        inc    edi
        mov    dword ptr [ebp - 0x3c], edx
        mov    edx, dword ptr [ebp + 8]
        mov    dword ptr [ebp - 0x5c], edi
        mov    edi, dword ptr [edx + eax]
        mov    edx, dword ptr [edx + eax + 4]
        test    byte ptr [ebx + 0x13], 1
        mov    dword ptr [ecx + esi], edi
        mov    dword ptr [ecx + esi + 4], edx
        je    L_465e
        mov    eax, dword ptr [g_007da660]
        mov    ecx, dword ptr [eax]
        mov    eax, dword ptr [ebp - 0x10]
        mov    cl, byte ptr [ecx + eax]
        mov    esi, dword ptr [ebx + 0x44]
        xor    edx, edx
        mov    dx, word ptr [ebx + 0xa]
        shl    edx, 5
        mov    byte ptr [edx + esi + 0x17], cl
        mov    edx, dword ptr [g_007da660]
        mov    ecx, dword ptr [edx]
        mov    esi, dword ptr [ebp - 0xc]
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
L_465e:
        mov    al, byte ptr [ebp + 0x17]
        test    al, al
        je    L_4708
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
        fld    dword ptr [ebp - 0x80]
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
        fld    dword ptr [ebp - 0x80]
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
        fld    dword ptr [ebp - 0x80]
        shl    edx, 5
        fadd    dword ptr [edx + eax + 0x5c]
        lea    eax, [edx + eax + 0x5c]
        fstp    dword ptr [eax]
L_4708:
        mov    ax, word ptr [ebx + 0xa]
        mov    edx, dword ptr [ebx + 0x50]
        xor    ecx, ecx
        mov    cx, word ptr [ebx + 0x54]
        add    dword ptr [ebp + 8], 8
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
        mov    ecx, dword ptr [ebp - 0xc]
        mov    edx, dword ptr [ebp - 0x24]
        mov    eax, 3
        add    word ptr [ebx + 0xa], ax
        add    word ptr [ebx + 0x54], ax
        inc    ecx
        lea    eax, [edx - 1]
        cmp    ecx, eax
        mov    dword ptr [ebp - 0xc], ecx
        jl    L_41e9
L_4769:
        mov    eax, dword ptr [ebp - 0x24]
        mov    esi, dword ptr [ebp - 0x10]
        mov    ecx, dword ptr [ebp - 0x70]
        add    esi, eax
        mov    eax, dword ptr [ebp - 0x2c]
        inc    eax
        cmp    eax, ecx
        mov    dword ptr [ebp - 0x10], esi
        mov    dword ptr [ebp - 0x2c], eax
        jl    L_41a5
L_4786:
        test    byte ptr [g_007da86c], 2
        jle    L_47bb
        mov    ecx, dword ptr [ebp - 8]
        mov    eax, dword ptr [ecx + 0x28]
        test    ah, 0x3c
        je    L_47bb
        mov    al, byte ptr [ebp + 0x1c]
        test    al, al
        jne    L_4875
        mov    eax, dword ptr [ebp + 0x10]
        mov    esi, dword ptr [eax + 4]
        xor    edx, edx
        mov    dx, word ptr [ecx + 0xa]
        add    esi, edx
        mov    dword ptr [eax + 4], esi
        jmp    L_486c
L_47bb:
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
        mov    al, byte ptr [ebp - 0x2d]
        and    ecx, 3
        test    al, al
        rep movsb
        je    L_4825
        xor    edx, edx
        mov    dx, word ptr [ebx + 0xa]
        test    edx, edx
        jle    L_4857
        mov    ecx, dword ptr [g_007b9864]
        mov    eax, dword ptr [ecx]
        mov    esi, dword ptr [ebx + 0x44]
        mov    ecx, edx
        shl    ecx, 5
        lea    ecx, [ecx + esi + 0x1c]
        mov    esi, edx
L_4802:
        fld    dword ptr [ebp - 0xd4]
        add    eax, 8
        fadd    dword ptr [eax - 8]
        add    ecx, 0x20
        dec    esi
        fstp    dword ptr [ecx - 0x24]
        fld    dword ptr [ebp - 0xd0]
        fadd    dword ptr [eax - 4]
        fstp    dword ptr [ecx - 0x20]
        jne    L_4802
        jmp    L_4857
L_4825:
        xor    edx, edx
        mov    dx, word ptr [ebx + 0xa]
        test    edx, edx
        jle    L_4857
        mov    esi, dword ptr [ebx + 0x44]
        mov    eax, dword ptr [g_007b9864]
        mov    eax, dword ptr [eax]
        mov    ecx, edx
        shl    ecx, 5
        lea    ecx, [ecx + esi + 0x1c]
        mov    esi, edx
L_4844:
        mov    edi, dword ptr [eax]
        mov    dword ptr [ecx - 4], edi
        mov    edi, dword ptr [eax + 4]
        mov    dword ptr [ecx], edi
        add    eax, 8
        add    ecx, 0x20
        dec    esi
        jne    L_4844
L_4857:
        mov    al, byte ptr [ebp + 0x1c]
        test    al, al
        jne    L_4875
        mov    eax, dword ptr [ebp + 0x10]
        mov    ecx, dword ptr [eax]
        add    edx, edx
        add    ecx, edx
        mov    dword ptr [eax], ecx
        mov    ecx, dword ptr [ebp - 8]
L_486c:
        xor    edx, edx
        mov    dx, word ptr [ecx + 0x54]
        add    dword ptr [eax + 0xc], edx
L_4875:
        mov    eax, dword ptr [ebp - 8]
        cmp    word ptr [eax + 0xa], 0
        pop    edi
        setne    cl
        pop    esi
        mov    byte ptr [eax + 0x10], cl
        mov    eax, dword ptr [ebp - 0x74]
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    0x18
        nop    
        // jump-table data @ 0x00444890 (6 relocated pointers)
        __emit 0xA7
        __emit 0x2E
        __emit 0x44
        __emit 0x00
        __emit 0xB5
        __emit 0x2E
        __emit 0x44
        __emit 0x00
        __emit 0xC0
        __emit 0x2E
        __emit 0x44
        __emit 0x00
        __emit 0x1B
        __emit 0x2E
        __emit 0x44
        __emit 0x00
        __emit 0x21
        __emit 0x2E
        __emit 0x44
        __emit 0x00
        __emit 0x29
        __emit 0x2E
        __emit 0x44
        __emit 0x00
        // jump-table data @ 0x004448A8 (6 relocated pointers)
        __emit 0xA7
        __emit 0x2E
        __emit 0x44
        __emit 0x00
        __emit 0xB5
        __emit 0x2E
        __emit 0x44
        __emit 0x00
        __emit 0xC0
        __emit 0x2E
        __emit 0x44
        __emit 0x00
        __emit 0x1B
        __emit 0x2E
        __emit 0x44
        __emit 0x00
        __emit 0x21
        __emit 0x2E
        __emit 0x44
        __emit 0x00
        __emit 0x29
        __emit 0x2E
        __emit 0x44
        __emit 0x00
        // jump-table data @ 0x004448C0 (6 relocated pointers)
        __emit 0x0F
        __emit 0x36
        __emit 0x44
        __emit 0x00
        __emit 0x60
        __emit 0x36
        __emit 0x44
        __emit 0x00
        __emit 0x69
        __emit 0x36
        __emit 0x44
        __emit 0x00
        __emit 0x95
        __emit 0x36
        __emit 0x44
        __emit 0x00
        __emit 0x9D
        __emit 0x36
        __emit 0x44
        __emit 0x00
        __emit 0xA5
        __emit 0x36
        __emit 0x44
        __emit 0x00
        // jump-table data @ 0x004448D8 (14 relocated pointers)
        __emit 0x4D
        __emit 0x36
        __emit 0x44
        __emit 0x00
        __emit 0x47
        __emit 0x38
        __emit 0x44
        __emit 0x00
        __emit 0x50
        __emit 0x38
        __emit 0x44
        __emit 0x00
        __emit 0x7C
        __emit 0x38
        __emit 0x44
        __emit 0x00
        __emit 0x84
        __emit 0x38
        __emit 0x44
        __emit 0x00
        __emit 0x8C
        __emit 0x38
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
        __emit 0xA1
        __emit 0x90
        __emit 0x95
        __emit 0x7B
        __emit 0x00
        __emit 0x83
        __emit 0xEC
        __emit 0x70
        __emit 0x50
        __emit 0xE8
        __emit 0x42
        __emit 0x00
        __emit 0x2B
        __emit 0x00
        __emit 0x6A
        __emit 0x20
    }
}
