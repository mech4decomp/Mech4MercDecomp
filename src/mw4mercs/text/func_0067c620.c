/*
 * FUN_0067C620 (2698 B) — HUD map/radar update routine (__thiscall, RET 8).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int g_007dab44;
extern unsigned int g_007dab40;
extern double g_0077b648;
extern float g_0076d070;
extern double g_0076d970;
extern double g_00798810;
extern double g_00798808;
extern float g_0078235c;
extern double g_00798800;
extern double g_0076de20;
extern float g_007987f8;
extern float g_0076d3c8;
extern double g_0076d588;
extern float g_007b220c;
extern float g_0076f5d8;
extern float g_0076d048;
extern unsigned int g_007b9460[3];
extern char g_007b8d78[];

extern void __cdecl FUN_0067dc80(void);
extern void __cdecl FUN_0041eb40(void);
extern void __cdecl FUN_005bcdc0(void);
extern void __cdecl FUN_00707e70(void);
extern void __cdecl FUN_00680ac0(void);
extern void __cdecl FUN_0067f7f0(void);
extern void __cdecl FUN_00680190(void);
extern void __cdecl FUN_0062d870(void);
extern void __cdecl FUN_0069d4a0(void);
extern void __cdecl FUN_0062da00(void);
extern void __cdecl FUN_006ad130(void);
extern void __cdecl FUN_0067d0b0(void);
extern void __cdecl FUN_0041c540(void);
extern void __cdecl FUN_0075db4a(void);
extern void __cdecl FUN_0041a070(void);
extern void __cdecl FUN_004daa20(void);
extern void __cdecl FUN_004e2690(void);

__declspec(naked) void __fastcall FUN_0067c620(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        and     esp, 0xfffffff8
        sub     esp, 0xa4
        mov     eax, dword ptr [g_007dab44]
        push    ebx
        push    esi
        mov     esi, dword ptr [g_007dab40]
        push    edi
        mov     edi, ecx
        mov     ecx, dword ptr [eax]
        xor     ecx, esi
        mov     ebx, dword ptr [ecx]
        mov     esi, dword ptr [ebp + 8]
        xor     ebx, 0x85739531
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x68], edi
        mov     dword ptr [esp + 0x24], ebx
        call    FUN_0067dc80
        mov     ebx, dword ptr [ebx + esi*4 + 0x530]
        test    ebx, ebx
        jz      L_d0a1
        mov     eax, dword ptr [esp + 0x20]
        mov     eax, dword ptr [eax + esi*4 + 0xb4]
        test    eax, eax
        mov     edx, dword ptr [ebx + 0x440]
        mov     dword ptr [esp + 0x40], edx
        mov     dword ptr [esp + 0x18], 0
        mov     dword ptr [esp + 0x68], 0
        mov     dword ptr [esp + 0x6c], 0
        mov     dword ptr [esp + 0x10], eax
        jz      L_ca2b
        push    0x8
        lea     ecx, [esp + 0x74]
        push    ecx
        mov     ecx, dword ptr [ebp + 0xc]
        mov     dword ptr [esp + 0x78], 0
        call    FUN_0041eb40
        mov     ecx, dword ptr [ebp + 0xc]
        push    0x8
        lea     edx, [esp + 0x60]
        push    edx
        mov     byte ptr [esp + 0x64], 0
        call    FUN_0041eb40
        mov     ecx, dword ptr [esp + 0x5c]
        xor     eax, eax
        mov     al, byte ptr [esi + edi + 0xff4]
        push    0xff
        push    0x28
        and     ecx, 0xff
        push    eax
        push    ecx
        call    FUN_005bcdc0
        add     esp, 0x10
        test    al, al
        jnz     L_d0a1
        mov     ecx, dword ptr [ebp + 0xc]
        push    0x20
        lea     edx, [esp + 0x40]
        push    edx
        mov     dword ptr [esp + 0x44], 0
        call    FUN_0041eb40
        push    0x1
        call    FUN_00707e70
        fmul    qword ptr [g_0077b648]
        mov     ecx, dword ptr [ebp + 0xc]
        fstp    dword ptr [esp + 0x20]
        push    0x20
        lea     eax, [esp + 0x64]
        push    eax
        mov     dword ptr [esp + 0x68], 0
        call    FUN_0041eb40
        fld     dword ptr [esp + 0x20]
        mov     ecx, dword ptr [g_007dab44]
        fsub    dword ptr [esp + 0x60]
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [g_007dab40]
        xor     edx, eax
        fst     dword ptr [edi + esi*4 + 0x10f4]
        fadd    dword ptr [esp + 0x3c]
        lea     ecx, [edx + 0xc]
        mov     edx, dword ptr [ecx]
        mov     eax, esi
        shl     eax, 0x7
        add     eax, esi
        shl     eax, 0x3
        xor     edx, 0x85739531
        sub     eax, esi
        shl     eax, 0x3
        fstp    dword ptr [edx + eax + 0x35a4]
        mov     edx, dword ptr [ecx]
        mov     ecx, dword ptr [ecx]
        xor     edx, 0x85739531
        xor     ecx, 0x85739531
        fld     dword ptr [ecx + eax + 0x35a4]
        mov     ecx, dword ptr [edx + eax + 0x35ac]
        lea     edx, [edx + eax + 0x35a8]
        mov     dword ptr [esp + 0x20], edx
        mov     edx, dword ptr [edx + 8]
        fstp    dword ptr [edx + ecx*4]
        mov     ecx, dword ptr [esp + 0x20]
        mov     edx, dword ptr [ecx + 4]
        inc     edx
        cmp     edx, dword ptr [ecx]
        mov     dword ptr [ecx + 4], edx
        jc      L_c7c1
        mov     dword ptr [ecx + 4], 0
L_c7c1:
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [edx + 0xc]
        xor     ecx, 0x85739531
        fld     dword ptr [ecx + eax + 0x35a4]
        mov     byte ptr [esp + 0xf], 0x1
        fmul    dword ptr [g_0076d070]
        fcom    qword ptr [g_0076d970]
        fnstsw  ax
        test    ah, 0x1
        jz      L_c7fc
        mov     byte ptr [esp + 0xf], 0
L_c7fc:
        fcom    qword ptr [g_00798810]
        fnstsw  ax
        test    ah, 0x1
        jz      L_c811
        fstp    st(0)
        fld     qword ptr [g_00798810]
L_c811:
        fmul    qword ptr [g_00798808]
        push    0x1
        fstp    qword ptr [esp + 0x2c]
        fld     dword ptr [esp + 0x64]
        fmul    dword ptr [g_0078235c]
        fstp    dword ptr [esp + 0x1c]
        call    FUN_00707e70
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jz      L_c898
        cmp     byte ptr [esi + edi + 0x2dd7], 0x5
        jbe     L_c87a
        fld     qword ptr [esp + 0x28]
        fcomp   qword ptr [edi + esi*8 + 0x7fc]
        fnstsw  ax
        test    ah, 0x1
        jz      L_c898
        fld     dword ptr [esp + 0x18]
        mov     edx, dword ptr [esp + 0x28]
        fadd    qword ptr [esp + 0x28]
        mov     eax, dword ptr [esp + 0x2c]
        mov     dword ptr [edi + esi*8 + 0x7fc], edx
        mov     dword ptr [edi + esi*8 + 0x800], eax
        fsubr   st(0), st(1)
        fstp    qword ptr [edi + esi*8 + 0x4]
        jmp     L_c898
L_c87a:
        fld     dword ptr [esp + 0x18]
        fadd    qword ptr [esp + 0x28]
        fsubr   st(0), st(1)
        fstp    qword ptr [edi + esi*8 + 0x4]
        mov     al, byte ptr [esi + edi + 0x2dd7]
        inc     al
        mov     byte ptr [esi + edi + 0x2dd7], al
L_c898:
        fld     dword ptr [esp + 0x18]
        fadd    qword ptr [edi + esi*8 + 0x4]
        fsubp   st(1), st(0)
        fst     qword ptr [esp + 0x68]
        fld     qword ptr [esp + 0x28]
        fcomp   qword ptr [g_00798800]
        fnstsw  ax
        test    ah, 0x1
        jz      L_c8c7
        mov     dword ptr [esp + 0x28], 0x80000000
        mov     dword ptr [esp + 0x2c], 0x3ee4f8b5
L_c8c7:
        fcomp   qword ptr [g_00798800]
        fnstsw  ax
        test    ah, 0x1
        jz      L_c8e4
        mov     dword ptr [esp + 0x68], 0x80000000
        mov     dword ptr [esp + 0x6c], 0x3ee4f8b5
L_c8e4:
        mov     al, byte ptr [esp + 0xf]
        test    al, al
        jz      L_c909
        fld     qword ptr [esp + 0x28]
        fcomp   qword ptr [g_0076d970]
        fnstsw  ax
        test    ah, 0x1
        jz      L_c909
        fld     qword ptr [esp + 0x28]
        fadd    qword ptr [edi + esi*8 + 0x4]
        fstp    qword ptr [edi + esi*8 + 0x4]
L_c909:
        mov     cl, byte ptr [esp + 0x5c]
        mov     byte ptr [esi + edi + 0xff4], cl
        mov     ecx, dword ptr [esp + 0x10]
        call    FUN_00680ac0
        test    eax, eax
        mov     dword ptr [esp + 0x10], eax
        jz      L_ca2b
        mov     eax, dword ptr [eax + 0x30]
        push    eax
        lea     edx, [esp + 0x24]
        push    0x0
        push    edx
        mov     dword ptr [esp + 0x20], eax
        call    FUN_0067f7f0
        mov     eax, dword ptr [eax]
        push    eax
        call    FUN_00680190
        fstp    dword ptr [esp + 0x30]
        mov     eax, dword ptr [esp + 0x20]
        fld     qword ptr [esp + 0x38]
        mov     eax, dword ptr [eax + 0x2c]
        fstp    dword ptr [esp + 0x38]
        mov     ecx, dword ptr [esp + 0x24]
        mov     edx, dword ptr [esp + 0x38]
        push    ecx
        push    eax
        push    esi
        push    edx
        push    0x0
        mov     dword ptr [esp + 0x34], eax
        mov     eax, dword ptr [ebp + 0xc]
        push    0x0
        push    eax
        push    ebx
        call    FUN_0062d870
        mov     ecx, dword ptr [esp + 0x50]
        mov     edx, dword ptr [esp + 0x44]
        mov     eax, dword ptr [esp + 0x40]
        push    ecx
        mov     ecx, dword ptr [esp + 0x5c]
        push    edx
        mov     edx, dword ptr [ebp + 0xc]
        push    eax
        push    esi
        push    ecx
        push    0x0
        push    0x0
        push    edx
        push    ebx
        call    FUN_0069d4a0
        mov     eax, dword ptr [esp + 0x68]
        mov     ecx, dword ptr [esp + 0x64]
        mov     edx, dword ptr [esp + 0x7c]
        add     esp, 0x54
        push    eax
        mov     eax, dword ptr [ebp + 0xc]
        push    ecx
        push    esi
        push    edx
        push    0x0
        push    0x0
        push    eax
        push    ebx
        call    FUN_0062da00
        mov     ecx, dword ptr [esp + 0x40]
        mov     edx, dword ptr [esp + 0x34]
        mov     eax, dword ptr [esp + 0x30]
        push    ecx
        mov     ecx, dword ptr [esp + 0x4c]
        push    edx
        mov     edx, dword ptr [ebp + 0xc]
        push    eax
        push    esi
        push    ecx
        push    0x0
        push    0x0
        push    edx
        push    ebx
        call    FUN_006ad130
        mov     ecx, dword ptr [ebp + 0xc]
        add     esp, 0x44
        push    0x8
        lea     eax, [esp + 0x20]
        push    eax
        mov     dword ptr [esp + 0x24], 0
        call    FUN_0041eb40
        mov     eax, dword ptr [esp + 0x1c]
        test    eax, eax
        jz      L_ca2b
L_c9ff:
        push    0x5
        lea     ecx, [esp + 0x24]
        push    ecx
        mov     ecx, dword ptr [ebp + 0xc]
        mov     dword ptr [esp + 0x28], 0
        call    FUN_0041eb40
        mov     eax, dword ptr [esp + 0x20]
        mov     edx, dword ptr [ebx]
        push    eax
        mov     ecx, ebx
        call    dword ptr [edx + 0x118]
        dec     dword ptr [esp + 0x1c]
        jnz     L_c9ff
L_ca2b:
        mov     edx, dword ptr [ebx]
        lea     ecx, [esp + 0xa4]
        push    ecx
        mov     ecx, dword ptr [g_007dab44]
        mov     ecx, dword ptr [ecx]
        xor     ecx, dword ptr [g_007dab40]
        mov     eax, esi
        mov     ecx, dword ptr [ecx + 0xc]
        shl     eax, 0x7
        add     eax, esi
        shl     eax, 0x3
        sub     eax, esi
        shl     eax, 0x3
        xor     ecx, 0x85739531
        mov     dword ptr [esp + 0x20], eax
        lea     eax, [ecx + eax + 0x3560]
        push    eax
        mov     ecx, ebx
        call    dword ptr [edx + 0x158]
        fld     dword ptr [esp + 0xa4]
        mov     ecx, dword ptr [g_007dab44]
        mov     eax, dword ptr [g_007dab40]
        mov     edx, dword ptr [ecx]
        xor     edx, eax
        mov     eax, dword ptr [edx + 0xc]
        mov     edx, dword ptr [esp + 0x1c]
        xor     eax, 0x85739531
        fstp    dword ptr [eax + edx + 0x356c]
        mov     eax, dword ptr [ebx + 0xd8]
        mov     edx, dword ptr [eax + 0x8c]
        add     eax, 0x80
        mov     dword ptr [esp + 0x50], edx
        mov     edx, dword ptr [eax + 0x1c]
        mov     eax, dword ptr [eax + 0x2c]
        mov     dword ptr [esp + 0x58], eax
        lea     eax, [esi + edi + 0x36d4]
        mov     dword ptr [esp + 0x54], edx
        cmp     byte ptr [eax], 0
        mov     dword ptr [esp + 0x10], eax
        jnz     L_cdf0
        mov     byte ptr [esi + edi + 0x2cd8], 0
        lea     edx, [esi + esi*2]
        lea     eax, [edi + edx*4 + 0x20e4]
        mov     edx, dword ptr [eax]
        mov     dword ptr [esp + 0x44], edx
        mov     edx, dword ptr [eax + 4]
        mov     dword ptr [esp + 0x48], edx
        mov     edx, dword ptr [eax + 8]
        mov     dword ptr [esp + 0x4c], edx
        mov     ecx, dword ptr [ecx]
        xor     ecx, dword ptr [g_007dab40]
        mov     edx, dword ptr [ecx + 0xc]
        mov     ecx, dword ptr [esp + 0x1c]
        xor     edx, 0x85739531
        lea     ecx, [edx + ecx + 0x3560]
        mov     edx, dword ptr [ecx]
        mov     dword ptr [eax], edx
        fld     dword ptr [eax]
        fsub    dword ptr [esp + 0x44]
        mov     edx, dword ptr [ecx + 4]
        mov     ecx, dword ptr [ecx + 8]
        mov     dword ptr [eax + 8], ecx
        fstp    dword ptr [esp + 0x28]
        push    0x1
        fld     dword ptr [eax + 8]
        mov     dword ptr [esp + 0x18], eax
        fsub    dword ptr [esp + 0x50]
        mov     dword ptr [eax + 4], edx
        fstp    dword ptr [esp + 0x34]
        call    FUN_00707e70
        fsub    qword ptr [esp + 0x68]
        push    0x1
        mov     byte ptr [esp + 0x13], 0x1
        fstp    dword ptr [esp + 0x40]
        fld     dword ptr [esp + 0x1c]
        fsub    dword ptr [edi + esi*4 + 0x14f0]
        fld     dword ptr [esp + 0x40]
        fsub    dword ptr [edi + esi*4 + 0x18ec]
        fsubp   st(1), st(0)
        fstp    dword ptr [esp + 0x14]
        call    FUN_00707e70
        fsub    dword ptr [edi + esi*4 + 0x1ce8]
        fcomp   qword ptr [g_0076de20]
        fnstsw  ax
        test    ah, 0x1
        jz      L_cb8a
        mov     byte ptr [esp + 0xf], 0
L_cb8a:
        fld     dword ptr [esp + 0x10]
        fcomp   dword ptr [g_007987f8]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_cba9
        push    0x1
        call    FUN_00707e70
        fstp    dword ptr [edi + esi*4 + 0x1ce8]
L_cba9:
        push    0x42c80000
        lea     edx, [esp + 0x48]
        push    0x7b8d78
        push    edx
        call    FUN_0041c540
        add     esp, 0xc
        test    al, al
        jnz     L_cdd1
        mov     al, byte ptr [esp + 0xf]
        fld     dword ptr [esp + 0x10]
        test    al, al
        jz      L_cbdc
        fcomp   dword ptr [g_0076d3c8]
        jmp     L_cbe2
L_cbdc:
        fcomp   dword ptr [g_007987f8]
L_cbe2:
        fnstsw  ax
        test    ah, 0x41
        jnz     L_cc6e
        mov     dword ptr [edi + esi*8 + 0x7fc], 0
        push    0x1
        mov     dword ptr [edi + esi*8 + 0x800], 0x3fe00000
        call    FUN_00707e70
        fsub    dword ptr [esp + 0x18]
        mov     eax, dword ptr [ebx]
        mov     ecx, ebx
        fadd    qword ptr [g_0076d588]
        fstp    qword ptr [edi + esi*8 + 0x4]
        call    dword ptr [eax + 0x15c]
        mov     ecx, dword ptr [esp + 0x40]
        xor     eax, eax
        mov     dword ptr [ebx + 0x440], ecx
        push    esi
        mov     ecx, edi
        mov     dword ptr [ebx + 0x42c], eax
        mov     dword ptr [ebx + 0x430], eax
        call    FUN_0067d0b0
        mov     ebx, dword ptr [ebx + 0xd8]
        mov     eax, dword ptr [esp + 0x14]
        mov     edx, dword ptr [ebx + 0x8c]
        mov     ecx, dword ptr [ebx + 0x9c]
        add     ebx, 0x80
        mov     dword ptr [eax], edx
        mov     edx, dword ptr [ebx + 0x2c]
        mov     dword ptr [eax + 4], ecx
        mov     dword ptr [eax + 8], edx
        jmp     L_cdb4
L_cc6e:
        mov     eax, dword ptr [ebx + 0xe0]
        fld     dword ptr [esp + 0x18]
        mov     ecx, dword ptr [eax + 0x14]
        fsub    dword ptr [edi + esi*4 + 0x14f0]
        cmp     ecx, 0x9
        jnz     L_cd24
        mov     edx, dword ptr [ebx]
        fstp    dword ptr [esp + 0x20]
        mov     ecx, ebx
        call    dword ptr [edx + 0x114]
        fmul    dword ptr [esp + 0x20]
        fadd    st(0), st(0)
        fld     st(0)
        fmulp   st(1), st(0)
        fld     dword ptr [esp + 0x20]
        fabs
        fld     dword ptr [g_007b220c]
        fcompp
        fnstsw  ax
        test    ah, 0x1
        jz      L_cdcf
        fld     dword ptr [esp + 0x30]
        fmul    dword ptr [esp + 0x30]
        fld     dword ptr [esp + 0x28]
        fmul    dword ptr [esp + 0x28]
        faddp   st(1), st(0)
        fcomp   st(1)
        fnstsw  ax
        fstp    st(0)
        test    ah, 0x41
        jnz     L_cdd1
        mov     eax, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [eax + 0x15c]
        mov     ecx, dword ptr [esp + 0x40]
        xor     eax, eax
        mov     dword ptr [ebx + 0x440], ecx
        push    esi
        mov     ecx, edi
        mov     dword ptr [ebx + 0x42c], eax
        mov     dword ptr [ebx + 0x430], eax
        call    FUN_0067d0b0
        mov     eax, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x50]
        mov     ecx, dword ptr [esp + 0x54]
        mov     dword ptr [eax], edx
        mov     edx, dword ptr [esp + 0x58]
        mov     dword ptr [eax + 4], ecx
        mov     dword ptr [eax + 8], edx
        jmp     L_cdb4
L_cd24:
        mov     eax, dword ptr [ebx]
        fstp    dword ptr [esp + 0x20]
        mov     ecx, ebx
        call    dword ptr [eax + 0x114]
        fmul    dword ptr [esp + 0x20]
        fmul    dword ptr [g_0076f5d8]
        fld     st(0)
        fmulp   st(1), st(0)
        fld     dword ptr [esp + 0x20]
        fabs
        fld     dword ptr [g_007b220c]
        fcompp
        fnstsw  ax
        test    ah, 0x1
        jz      L_cdcf
        fld     dword ptr [esp + 0x30]
        fmul    dword ptr [esp + 0x30]
        fld     dword ptr [esp + 0x28]
        fmul    dword ptr [esp + 0x28]
        faddp   st(1), st(0)
        fcomp   st(1)
        fnstsw  ax
        fstp    st(0)
        test    ah, 0x41
        jnz     L_cdd1
        mov     edx, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [edx + 0x15c]
        xor     eax, eax
        mov     dword ptr [ebx + 0x42c], eax
        mov     dword ptr [ebx + 0x430], eax
        mov     eax, dword ptr [esp + 0x40]
        push    esi
        mov     ecx, edi
        mov     dword ptr [ebx + 0x440], eax
        call    FUN_0067d0b0
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esp + 0x50]
        mov     edx, dword ptr [esp + 0x54]
        mov     dword ptr [eax], ecx
        mov     ecx, dword ptr [esp + 0x58]
        mov     dword ptr [eax + 4], edx
        mov     dword ptr [eax + 8], ecx
L_cdb4:
        push    0x1
        call    FUN_00707e70
        fmul    qword ptr [g_0077b648]
        call    FUN_0075db4a
        mov     dword ptr [edi + esi*4 + 0x32d8], eax
        jmp     L_cdd1
L_cdcf:
        fstp    st(0)
L_cdd1:
        fld     dword ptr [esp + 0x3c]
        fstp    dword ptr [edi + esi*4 + 0x18ec]
        fld     dword ptr [esp + 0x18]
        fstp    dword ptr [edi + esi*4 + 0x14f0]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x8
L_cdf0:
        mov     ecx, dword ptr [g_007b220c]
        push    ecx
        lea     edx, [esi + esi*2]
        lea     eax, [edi + edx*4 + 0x20e4]
        push    0x7b8d78
        push    eax
        mov     dword ptr [esp + 0x20], eax
        call    FUN_0041c540
        add     esp, 0xc
        test    al, al
        jz      L_cee4
        mov     edx, dword ptr [g_007dab44]
        mov     eax, dword ptr [edx]
        xor     eax, dword ptr [g_007dab40]
        mov     ecx, dword ptr [g_007b220c]
        mov     edx, dword ptr [eax + 0xc]
        mov     eax, dword ptr [esp + 0x1c]
        push    ecx
        xor     edx, 0x85739531
        lea     ecx, [edx + eax + 0x3560]
        push    0x7b8d78
        push    ecx
        call    FUN_0041c540
        add     esp, 0xc
        test    al, al
        jnz     L_cee4
        mov     edx, dword ptr [esp + 0x10]
        mov     byte ptr [edx], al
        mov     eax, dword ptr [ebx]
        lea     ecx, [esp + 0x50]
        push    ecx
        lea     edx, [esp + 0x48]
        push    edx
        mov     ecx, ebx
        call    dword ptr [eax + 0x158]
        mov     eax, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [eax + 0x15c]
        mov     ecx, dword ptr [esp + 0x44]
        mov     edx, dword ptr [esp + 0x48]
        mov     eax, dword ptr [esp + 0x4c]
        mov     dword ptr [esp + 0x80], ecx
        lea     ecx, [esp + 0x50]
        push    ecx
        lea     ecx, [esp + 0x78]
        mov     dword ptr [esp + 0x94], edx
        mov     dword ptr [esp + 0xa4], eax
        call    FUN_0041a070
        lea     edx, [esp + 0x74]
        push    edx
        mov     ecx, ebx
        call    FUN_004daa20
        mov     eax, dword ptr [ebx]
        push    0x1
        mov     ecx, ebx
        call    dword ptr [eax + 0x48]
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        push    ebx
        xor     edx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [edx + 0x1c]
        xor     ecx, 0x85739531
        call    FUN_004e2690
        jmp     L_d088
L_cee4:
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [g_007dab40]
        mov     eax, dword ptr [esp + 0x1c]
        xor     ecx, edx
        mov     edx, dword ptr [ecx + 0xc]
        mov     ecx, dword ptr [esp + 0x14]
        fld     dword ptr [ecx]
        xor     edx, 0x85739531
        fsub    dword ptr [edx + eax + 0x3560]
        lea     eax, [edx + eax + 0x3560]
        fld     dword ptr [ecx + 8]
        fsub    dword ptr [eax + 8]
        fld     st(0)
        fmul    st(0), st(1)
        fld     st(2)
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fabs
        fstp    st(2)
        fstp    st(0)
        fcomp   dword ptr [g_0076d048]
        fnstsw  ax
        test    ah, 0x41
        jz      L_cfc5
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [ebx]
        mov     byte ptr [ecx], 0
        lea     eax, [esp + 0x50]
        push    eax
        lea     ecx, [esp + 0x48]
        push    ecx
        mov     ecx, ebx
        call    dword ptr [edx + 0x158]
        mov     edx, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [edx + 0x15c]
        mov     eax, dword ptr [esp + 0x44]
        mov     ecx, dword ptr [esp + 0x48]
        mov     edx, dword ptr [esp + 0x4c]
        mov     dword ptr [esp + 0x80], eax
        lea     eax, [esp + 0x50]
        mov     dword ptr [esp + 0x90], ecx
        push    eax
        lea     ecx, [esp + 0x78]
        mov     dword ptr [esp + 0xa4], edx
        call    FUN_0041a070
        lea     ecx, [esp + 0x74]
        push    ecx
        mov     ecx, ebx
        call    FUN_004daa20
        mov     edx, dword ptr [ebx]
        push    0x1
        mov     ecx, ebx
        call    dword ptr [edx + 0x48]
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [eax]
        push    ebx
        xor     ecx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [ecx + 0x1c]
        xor     ecx, 0x85739531
        call    FUN_004e2690
        jmp     L_d088
L_cfc5:
        mov     edx, dword ptr [esp + 0x40]
        xor     eax, eax
        mov     dword ptr [ebx + 0x42c], eax
        mov     dword ptr [ebx + 0x430], eax
        mov     eax, dword ptr [ebx]
        mov     ecx, ebx
        mov     dword ptr [ebx + 0x440], edx
        call    dword ptr [eax + 0x15c]
        mov     cl, byte ptr [esi + edi + 0x2cd8]
        inc     cl
        mov     al, cl
        cmp     al, 0xa
        mov     byte ptr [esi + edi + 0x2cd8], cl
        jbe     L_d088
        mov     eax, dword ptr [esp + 0x14]
        mov     edx, dword ptr [eax + 4]
        mov     ecx, 0xc
        mov     esi, offset g_007b9460
        lea     edi, [esp + 0x74]
        rep     movsd
        mov     ecx, dword ptr [eax]
        mov     eax, dword ptr [eax + 8]
        mov     dword ptr [esp + 0x80], ecx
        lea     ecx, [esp + 0x74]
        push    ecx
        mov     ecx, ebx
        mov     dword ptr [esp + 0x94], edx
        mov     dword ptr [esp + 0xa4], eax
        call    FUN_004daa20
        mov     edx, dword ptr [ebx]
        push    0x1
        mov     ecx, ebx
        call    dword ptr [edx + 0x48]
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [ecx + 0x1c]
        push    ebx
        xor     ecx, 0x85739531
        call    FUN_004e2690
        mov     edx, dword ptr [ebp + 8]
        mov     ecx, dword ptr [esp + 0x64]
        push    edx
        call    FUN_0067d0b0
        mov     eax, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [eax + 0x15c]
        mov     ecx, dword ptr [esp + 0x10]
        mov     edi, dword ptr [esp + 0x64]
        mov     esi, dword ptr [ebp + 8]
        mov     byte ptr [ecx], 0
L_d088:
        push    0x1
        call    FUN_00707e70
        fmul    qword ptr [g_0077b648]
        call    FUN_0075db4a
        mov     dword ptr [edi + esi*4 + 0x32d8], eax
L_d0a1:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x8
    }
}
