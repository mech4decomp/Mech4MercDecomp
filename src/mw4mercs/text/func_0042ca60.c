/*
 * FUN_0042ca60 (real extent 0x42CA60-0x42F410) - MLR dispatcher with
 * 4 in-function switch jump tables. Transcribed from reference disasm
 * via tools/gen_asmmap_0042ca60.py. Jump-table data appended at end
 * as __emit bytes (relocated entries, masked by harness).
 */
#pragma warning(disable : 4035 4793)

extern int    g_jt_42f3a4;
extern int    g_jt_42f3bc;
extern int    g_jt_42f3d4;
extern int    g_jt_42f3ec;
extern float  g_76c5b0;
extern float  g_76d070;
extern float  g_76dd60;
extern int    g_76df04;
extern float  g_76e110;
extern float  g_76e114;
extern float  g_7b220c;
extern int    g_7b2210;
extern int    g_7b2404;
extern int    g_7b2408;
extern int    g_7b2478;
extern int    g_7b94a0;
extern int    g_7b96d0;
extern int    g_7b96d4;
extern int    g_7b96d8;
extern int    g_7d98fc;
extern int    g_7da5f4;
extern int    g_7da600;
extern int    g_7da608;
extern int    g_7da65c;
extern int    g_7da660;
extern int    g_7da664;
extern int    g_7da668;
extern int    g_7da66c;
extern int    g_7da670;
extern int    g_7da680;
extern int    g_7da684;
extern int    g_7da688;
extern int    g_7da68c;
extern int    g_7da848;
extern int    g_7da864;
extern int    g_7da86c;
extern float  g_7da870;
extern float  g_7da874;
extern float  g_7da878;
extern float  g_7da87c;
extern void __cdecl FUN_0041cb30(void);
extern void __cdecl FUN_00421f00(void);
extern void __cdecl FUN_00423e00(void);
extern void __cdecl FUN_004286e0(void);
extern void __cdecl FUN_00455da0(void);
extern void __cdecl FUN_00491cd0(void);
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_0042ca60(void)
{
    __asm {
        push    ebp
        mov    ebp, esp
        sub    esp, 0x1dc
        push    ebx
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi + 0xac]
        test    eax, eax
        push    edi
        mov    dword ptr [ebp - 8], esi
        jne    L_caab
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
        call    FUN_00455da0
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    0x18
L_caab:
        mov    eax, dword ptr [esi + 0x58]
        test    eax, eax
        mov    dword ptr [ebp - 0xac], 0
        jg    L_cacb
        mov    byte ptr [esi + 0x10], 0
        xor    eax, eax
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    0x18
L_cacb:
        cmp    word ptr [esi + 0x56], 0
        mov    ecx, dword ptr [esi + 0x18]
        mov    dword ptr [ebp - 0x18], ecx
        jne    L_cae2
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 0x98]
L_cae2:
        mov    eax, dword ptr [g_7da68c]
        mov    ebx, dword ptr [eax]
        mov    edx, dword ptr [g_7da688]
        mov    eax, dword ptr [edx]
        mov    ecx, dword ptr [ebp - 8]
        mov    esi, dword ptr [ecx + 0x14]
        mov    ecx, dword ptr [g_7da600]
        mov    edi, dword ptr [ecx]
        mov    dword ptr [ebp - 0x30], eax
        mov    eax, dword ptr [ebp + 0x14]
        test    eax, eax
        mov    dword ptr [ebp + 0x18], ebx
        je    L_cb73
        mov    eax, dword ptr [ebp - 0x18]
        test    eax, eax
        mov    dword ptr [ebp - 0x20], 0
        jle    L_cbae
L_cb1e:
        cmp    byte ptr [edi], 0
        je    L_cb50
        mov    edx, dword ptr [ebp - 0x30]
        mov    eax, dword ptr [ebp + 8]
        mov    ecx, dword ptr [ebp + 0x18]
        push    edx
        push    eax
        push    esi
        mov    byte ptr [edi], 0
        call    FUN_0041cb30
        mov    ecx, dword ptr [g_7da65c]
        mov    ebx, dword ptr [ecx]
        add    ebx, dword ptr [ebp - 0x20]
        mov    ecx, dword ptr [ebp + 0x14]
        push    esi
        call    FUN_00421f00
        mov    byte ptr [ebx], al
        mov    ebx, dword ptr [ebp + 0x18]
L_cb50:
        mov    ecx, dword ptr [ebp - 0x30]
        mov    eax, dword ptr [ebp - 0x20]
        add    ecx, 4
        inc    eax
        add    ebx, 0x10
        add    esi, 0xc
        mov    dword ptr [ebp - 0x30], ecx
        mov    ecx, dword ptr [ebp - 0x18]
        inc    edi
        cmp    eax, ecx
        mov    dword ptr [ebp - 0x20], eax
        mov    dword ptr [ebp + 0x18], ebx
        jl    L_cb1e
        jmp    L_cbae
L_cb73:
        mov    eax, dword ptr [ebp - 0x18]
        test    eax, eax
        jle    L_cbae
        mov    dword ptr [ebp + 0x14], eax
L_cb7d:
        cmp    byte ptr [edi], 0
        je    L_cb95
        mov    edx, dword ptr [ebp - 0x30]
        mov    eax, dword ptr [ebp + 8]
        push    edx
        push    eax
        push    esi
        mov    ecx, ebx
        mov    byte ptr [edi], 0
        call    FUN_0041cb30
L_cb95:
        mov    edx, dword ptr [ebp - 0x30]
        mov    eax, dword ptr [ebp + 0x14]
        add    edx, 4
        add    esi, 0xc
        add    ebx, 0x10
        inc    edi
        dec    eax
        mov    dword ptr [ebp - 0x30], edx
        mov    dword ptr [ebp + 0x14], eax
        jne    L_cb7d
L_cbae:
        mov    ecx, dword ptr [ebp - 8]
        mov    eax, dword ptr [ecx + 0x24]
        and    eax, 0x3fff
        mov    dword ptr [ebp - 0xa8], 0
        mov    dword ptr [ebp - 4], 0
        mov    byte ptr [ebp + 0x17], 0
        mov    dword ptr [ebp - 0xb4], 0
        mov    dword ptr [ebp - 0xb0], 0
        je    L_cca4
        test    eax, eax
        jle    L_cca4
        mov    edx, dword ptr [g_7da848]
        mov    esi, dword ptr [edx + eax*4 + 0x24]
        test    esi, esi
        je    L_cca4
        mov    eax, dword ptr [esi]
        push    0
        mov    ecx, esi
        call    dword ptr [eax + 4]
        mov    ecx, eax
        call    FUN_00491cd0
        cmp    eax, 0x100
        jl    L_cc25
        mov    dword ptr [g_7da864], 1
        jmp    L_cc80
L_cc25:
        cmp    eax, 0x80
        jl    L_cc38
        mov    dword ptr [g_7da864], 2
        jmp    L_cc80
L_cc38:
        cmp    eax, 0x40
        jl    L_cc49
        mov    dword ptr [g_7da864], 4
        jmp    L_cc80
L_cc49:
        cmp    eax, 0x20
        jl    L_cc5a
        mov    dword ptr [g_7da864], 8
        jmp    L_cc80
L_cc5a:
        cmp    eax, 0x10
        jl    L_cc6b
        mov    dword ptr [g_7da864], 0x10
        jmp    L_cc80
L_cc6b:
        xor    ecx, ecx
        cmp    eax, 8
        setl    cl
        dec    ecx
        and    ecx, 0xffffffe0
        add    ecx, 0x40
        mov    dword ptr [g_7da864], ecx
L_cc80:
        mov    al, byte ptr [esi + 0x24]
        test    al, al
        jne    L_ccb3
        mov    eax, dword ptr [esi + 0x28]
        test    eax, eax
        je    L_ccb3
        mov    edx, dword ptr [eax + 0xc]
        mov    eax, dword ptr [eax + 0x1c]
        mov    byte ptr [ebp + 0x17], 1
        mov    dword ptr [ebp - 0xb4], edx
        mov    dword ptr [ebp - 0xb0], eax
L_cca4:
        mov    bl, byte ptr [ebp + 0x1c]
        test    bl, bl
        mov    ecx, dword ptr [ebp + 0x10]
        je    L_ccb9
        mov    eax, dword ptr [ecx + 0x38]
        jmp    L_ccc5
L_ccb3:
        mov    byte ptr [ebp + 0x17], 0
        jmp    L_cca4
L_ccb9:
        mov    eax, dword ptr [ecx + 4]
        lea    edx, [eax + eax*4]
        mov    eax, dword ptr [ecx + 0x18]
        lea    eax, [eax + edx*8]
L_ccc5:
        mov    ecx, dword ptr [ebp - 8]
        mov    dword ptr [ecx + 0xa4], eax
        mov    eax, dword ptr [ecx + 0x68]
        and    eax, 0x3fff
        mov    dword ptr [ebp - 0xc4], 0
        mov    dword ptr [ebp - 0xc0], 0
        je    L_cd20
        xor    edx, edx
        cmp    eax, edx
        jle    L_cd22
        mov    esi, dword ptr [g_7da848]
        mov    eax, dword ptr [esi + eax*4 + 0x24]
        cmp    eax, edx
        je    L_cd22
        cmp    byte ptr [eax + 0x24], dl
        jne    L_cd22
        mov    eax, dword ptr [eax + 0x28]
        cmp    eax, edx
        je    L_cd22
        mov    esi, dword ptr [eax + 0xc]
        mov    eax, dword ptr [eax + 0x1c]
        mov    dword ptr [ebp - 0xc4], esi
        mov    dword ptr [ebp - 0xc0], eax
        jmp    L_cd22
L_cd20:
        xor    edx, edx
L_cd22:
        mov    eax, dword ptr [g_7da688]
        mov    eax, dword ptr [eax]
        mov    dword ptr [ebp - 0x30], eax
        cmp    dword ptr [ecx + 0x58], edx
        mov    dword ptr [ebp - 0xa0], edx
        mov    dword ptr [ebp - 0x7c], edx
        mov    dword ptr [ebp - 0x20], edx
        mov    dword ptr [ebp - 0x10], edx
        jle    L_e723
L_cd44:
        mov    ecx, dword ptr [g_7d98fc]
        mov    edx, dword ptr [ecx]
        mov    eax, dword ptr [ebp - 0x20]
        mov    cl, byte ptr [eax + edx]
        add    eax, edx
        test    cl, cl
        mov    dword ptr [ebp + 8], eax
        je    L_e702
        mov    ecx, dword ptr [ebp - 8]
        mov    ecx, dword ptr [ecx + 0x48]
        mov    esi, dword ptr [ebp - 0x10]
        xor    edx, edx
        mov    dl, byte ptr [ecx + esi + 2]
        xor    eax, eax
        mov    al, byte ptr [ecx + esi]
        xor    ebx, ebx
        mov    bl, byte ptr [ecx + esi + 1]
        mov    dword ptr [ebp - 0xb8], ecx
        mov    edi, edx
        mov    edx, dword ptr [ebp - 0x30]
        mov    edx, dword ptr [edx + eax*4]
        mov    dword ptr [ebp + 0x18], eax
        mov    eax, dword ptr [ebp - 0x30]
        mov    dword ptr [ebp - 0x74], edi
        mov    edi, dword ptr [eax + edi*4]
        mov    eax, dword ptr [eax + ebx*4]
        mov    dword ptr [ebp - 0x2c], ebx
        mov    ebx, eax
        and    ebx, edi
        mov    dword ptr [g_7b96d4], edx
        or    eax, edi
        mov    edi, dword ptr [g_7b96d4]
        and    edx, ebx
        or    edi, eax
        test    edx, edx
        mov    dword ptr [g_7b96d8], edx
        mov    dword ptr [g_7b96d4], edi
        je    L_cdca
        mov    ecx, dword ptr [ebp + 8]
        mov    byte ptr [ecx], 0
        jmp    L_e702
L_cdca:
        test    edi, edi
        jne    L_cdfd
        mov    eax, dword ptr [ebp - 0xac]
        mov    edx, dword ptr [g_7da600]
        mov    ecx, dword ptr [ebp + 0x18]
        inc    eax
        mov    dword ptr [ebp - 0xac], eax
        mov    eax, dword ptr [edx]
        mov    edx, dword ptr [ebp - 0x2c]
        mov    byte ptr [eax + ecx], 1
        mov    ecx, dword ptr [ebp - 0x74]
        mov    byte ptr [eax + edx], 1
        mov    byte ptr [eax + ecx], 1
        jmp    L_e702
L_cdfd:
        cmp    dword ptr [edi*4 + g_7b2478], 1
        mov    dword ptr [ebp - 0xc], 0
        jne    L_d92c
        lea    edx, [esi + 3]
        cmp    esi, edx
        mov    ecx, esi
        jge    L_d918
L_ce1f:
        mov    eax, dword ptr [ebp - 8]
        mov    eax, dword ptr [eax + 0x48]
        xor    ebx, ebx
        mov    bl, byte ptr [eax + ecx]
        inc    ecx
        cmp    ecx, edx
        mov    dword ptr [ebp - 0x24], ecx
        mov    edi, ebx
        jge    L_ce36
        mov    esi, ecx
L_ce36:
        xor    edx, edx
        mov    dl, byte ptr [eax + esi]
        mov    esi, dword ptr [ebp - 0xc]
        mov    eax, dword ptr [ebp - 0xa0]
        and    esi, 0xffff
        add    esi, eax
        mov    eax, dword ptr [ebp - 0x30]
        mov    ecx, dword ptr [eax + edi*4]
        test    ecx, ecx
        mov    dword ptr [ebp + 0x18], edx
        mov    dword ptr [ebp - 0x34], esi
        mov    dword ptr [g_7b96d0], ecx
        jne    L_cf47
        mov    ecx, dword ptr [g_7da68c]
        mov    ebx, dword ptr [ecx]
        mov    eax, edi
        shl    eax, 4
        add    eax, ebx
        mov    ebx, dword ptr [g_7da684]
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
        mov    ecx, dword ptr [eax + 0xb0]
        mov    ecx, dword ptr [ecx]
        mov    ecx, dword ptr [ecx + edi*4]
        mov    ebx, dword ptr [g_7da608]
        mov    ebx, dword ptr [ebx]
        mov    eax, dword ptr [eax + 0x1c]
        mov    dword ptr [ebx + esi*4], ecx
        mov    ebx, dword ptr [eax + edi*8]
        mov    ecx, dword ptr [g_7da680]
        mov    ecx, dword ptr [ecx]
        mov    eax, dword ptr [eax + edi*8 + 4]
        mov    dword ptr [ecx + esi*8], ebx
        mov    dword ptr [ecx + esi*8 + 4], eax
        mov    ecx, dword ptr [ebp - 8]
        xor    eax, eax
        mov    al, byte ptr [ecx + 0x13]
        test    al, al
        mov    byte ptr [ebp + 0xb], 1
        jbe    L_cf1c
        mov    ecx, eax
        and    ecx, 0xff
        mov    dword ptr [ebp - 0x18], 1
        mov    dword ptr [ebp - 0x14], ecx
        mov    eax, 0x7da660
L_cef1:
        mov    ebx, dword ptr [ebp - 0x18]
        test    ecx, ebx
        je    L_cf0a
        mov    ecx, dword ptr [eax - 4]
        mov    ecx, dword ptr [ecx]
        mov    ebx, dword ptr [eax]
        mov    cl, byte ptr [ecx + edi]
        mov    ebx, dword ptr [ebx]
        mov    byte ptr [ebx + esi], cl
        mov    ecx, dword ptr [ebp - 0x14]
L_cf0a:
        mov    ebx, dword ptr [ebp - 0x18]
        add    eax, 8
        shl    ebx, 1
        cmp    eax, 0x7da670
        mov    dword ptr [ebp - 0x18], ebx
        jl    L_cef1
L_cf1c:
        mov    eax, dword ptr [ebp - 0xc]
        mov    ecx, dword ptr [ebp - 0x30]
        inc    eax
        mov    dword ptr [ebp - 0xc], eax
        lea    eax, [edx*4]
        mov    dword ptr [ebp - 0x18], eax
        mov    eax, dword ptr [eax + ecx]
        inc    esi
        test    eax, eax
        mov    dword ptr [ebp - 0x34], esi
        je    L_d907
        mov    ecx, dword ptr [g_7b96d0]
        jmp    L_cf60
L_cf47:
        lea    ebx, [edx*4]
        mov    eax, dword ptr [ebx + eax]
        test    eax, eax
        mov    byte ptr [ebp + 0xb], 0
        mov    dword ptr [ebp - 0x18], ebx
        jne    L_d907
L_cf60:
        or    ecx, eax
        mov    dword ptr [ebp - 0x44], 1
        mov    dword ptr [g_7b96d0], ecx
        xor    ebx, ebx
L_cf71:
        mov    eax, dword ptr [ebp - 0x44]
        test    eax, ecx
        jne    L_cf89
        shl    eax, 1
        inc    ebx
        cmp    bx, 6
        mov    dword ptr [ebp - 0x44], eax
        jb    L_cf71
        jmp    L_d0ea
L_cf89:
        cmp    byte ptr [ebp + 0xb], 1
        jne    L_d039
        mov    edx, dword ptr [g_7da68c]
        mov    eax, dword ptr [ebp + 0x18]
        mov    edx, dword ptr [edx]
        mov    ecx, edi
        shl    eax, 4
        shl    ecx, 4
        and    ebx, 0xffff
        add    eax, edx
        add    ecx, edx
        cmp    ebx, 5
        ja    L_d01b
        jmp    dword ptr [ebx*4 + g_jt_42f3a4]
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx + 4]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 4]
L_cfc8:
        fld st(1)
        fcomp    dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_d0d4
        fstp st(0)
        mov    dword ptr [ebp - 4], 0
        fstp st(0)
        jmp    L_d0e1
        fld    dword ptr [ecx + 4]
        fld    dword ptr [eax + 4]
        jmp    L_cfc8
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax]
        jmp    L_cfc8
        fld    dword ptr [ecx]
        fld    dword ptr [eax]
        jmp    L_cfc8
        fld    dword ptr [ecx + 8]
        fld    dword ptr [eax + 8]
        jmp    L_cfc8
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx + 8]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 8]
        jmp    L_cfc8
L_d01b:
        push    offset g_76df04
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_d080
        int 3    
        mov    dword ptr [ebp - 4], 0
        jmp    L_d0e1
L_d039:
        mov    eax, dword ptr [g_7da68c]
        mov    edx, dword ptr [eax]
        mov    ecx, dword ptr [ebp + 0x18]
        mov    eax, edi
        shl    eax, 4
        shl    ecx, 4
        and    ebx, 0xffff
        add    eax, edx
        add    ecx, edx
        cmp    ebx, 5
        ja    L_d0b9
        jmp    dword ptr [ebx*4 + g_jt_42f3bc]
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx + 4]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 4]
L_d06d:
        fld st(1)
        fcomp    dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_d0d4
        fstp st(0)
        fstp st(0)
L_d080:
        mov    dword ptr [ebp - 4], 0
        jmp    L_d0e1
        fld    dword ptr [ecx + 4]
        fld    dword ptr [eax + 4]
        jmp    L_d06d
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax]
        jmp    L_d06d
        fld    dword ptr [ecx]
        fld    dword ptr [eax]
        jmp    L_d06d
        fld    dword ptr [ecx + 8]
        fld    dword ptr [eax + 8]
        jmp    L_d06d
        fld    dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx + 8]
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 8]
        jmp    L_d06d
L_d0b9:
        push    offset g_76df04
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_d080
        int 3    
        mov    dword ptr [ebp - 4], 0
        jmp    L_d0e1
L_d0d4:
        fld st(1)
        fsub st(0), st(1)
        fdivr st(0), st(2)
        fstp    dword ptr [ebp - 4]
        fstp st(0)
        fstp st(0)
L_d0e1:
        mov    edx, dword ptr [ebp + 0x18]
        mov    dword ptr [ebp - 0xa8], ebx
L_d0ea:
        cmp    byte ptr [ebp + 0xb], 1
        jne    L_d506
        mov    ecx, dword ptr [g_7da68c]
        mov    ebx, dword ptr [ecx]
        mov    ecx, edx
        mov    edx, dword ptr [g_7da684]
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
        mov    eax, dword ptr [ebp - 0xa8]
        mov    ecx, dword ptr [eax*8 + g_7b2408]
        test    ecx, ecx
        fstp    dword ptr [edx + 0xc]
        je    L_d16d
        fld    dword ptr [edx + 0xc]
        fsub    dword ptr [g_7b220c]
        jmp    L_d173
L_d16d:
        fld    dword ptr [g_7b220c]
L_d173:
        mov    ecx, dword ptr [ebp - 0xa8]
        mov    eax, dword ptr [ecx*8 + g_7b2404]
        fstp    dword ptr [edx + eax*4]
        mov    ecx, dword ptr [ebp - 8]
        mov    edx, dword ptr [ecx + 0xb0]
        mov    ecx, dword ptr [edx]
        mov    eax, dword ptr [ebp - 0x18]
        mov    eax, dword ptr [eax + ecx]
        mov    ecx, dword ptr [ecx + edi*4]
        mov    edx, ecx
        shr    ecx, 8
        and    edx, 0xff
        mov    esi, ecx
        mov    dword ptr [ebp - 0x174], edx
        xor    edx, edx
        mov    dword ptr [ebp - 0x170], edx
        fild    qword ptr [ebp - 0x174]
        shr    ecx, 8
        and    esi, 0xff
        mov    dword ptr [ebp - 0x16c], esi
        fmul    dword ptr [g_76e114]
        mov    esi, ecx
        mov    dword ptr [ebp - 0x168], edx
        shr    ecx, 8
        fstp    dword ptr [ebp - 0x104]
        and    esi, 0xff
        fild    qword ptr [ebp - 0x16c]
        and    ecx, 0xff
        mov    dword ptr [ebp - 0x178], edx
        mov    dword ptr [ebp - 0x17c], esi
        fmul    dword ptr [g_76e114]
        mov    dword ptr [ebp - 0x18c], ecx
        mov    dword ptr [ebp - 0x188], edx
        mov    ecx, eax
        fstp    dword ptr [ebp - 0x108]
        and    ecx, 0xff
        fild    qword ptr [ebp - 0x17c]
        mov    dword ptr [ebp - 0x19c], ecx
        mov    dword ptr [ebp - 0x198], edx
        shr    eax, 8
        fmul    dword ptr [g_76e114]
        mov    ecx, eax
        and    ecx, 0xff
        mov    dword ptr [ebp - 0x1ac], ecx
        fstp    dword ptr [ebp - 0x10c]
        mov    dword ptr [ebp - 0x1a8], edx
        fild    qword ptr [ebp - 0x18c]
        shr    eax, 8
        mov    ecx, eax
        and    ecx, 0xff
        fmul    dword ptr [g_76e114]
        mov    dword ptr [ebp - 0x1bc], ecx
        mov    dword ptr [ebp - 0x1b8], edx
        shr    eax, 8
        fstp    dword ptr [ebp - 0x100]
        and    eax, 0xff
        fild    qword ptr [ebp - 0x19c]
        mov    dword ptr [ebp - 0x1cc], eax
        mov    dword ptr [ebp - 0x1c8], edx
        mov    edx, dword ptr [ebp - 4]
        fmul    dword ptr [g_76e114]
        push    edx
        lea    eax, [ebp - 0x13c]
        lea    ecx, [ebp - 0x10c]
        fstp    dword ptr [ebp - 0x134]
        push    eax
        fild    qword ptr [ebp - 0x1ac]
        push    ecx
        mov    dword ptr [ebp - 0xdc], 0xbf800000
        mov    dword ptr [ebp - 0xe0], 0xbf800000
        fmul    dword ptr [g_76e114]
        mov    dword ptr [ebp - 0xe4], 0xbf800000
        mov    dword ptr [ebp - 0xd8], 0xbf800000
        lea    ecx, [ebp - 0xe4]
        fstp    dword ptr [ebp - 0x138]
        fild    qword ptr [ebp - 0x1bc]
        fmul    dword ptr [g_76e114]
        fstp    dword ptr [ebp - 0x13c]
        fild    qword ptr [ebp - 0x1cc]
        fmul    dword ptr [g_76e114]
        fstp    dword ptr [ebp - 0x130]
        call    FUN_004286e0
        lea    edx, [ebp - 0xe4]
        mov    dword ptr [ebp + 8], edx
        fld    dword ptr [g_76e110]
        mov    esi, dword ptr [ebp + 8]
        fld    dword ptr [esi + 0xc]
        mov    ecx, dword ptr [esi + 0xc]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0xfc]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xfc]
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
        fstp    dword ptr [ebp - 0xfc]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xfc]
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
        fstp    dword ptr [ebp - 0xfc]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xfc]
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
        fstp    dword ptr [ebp - 0xfc]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xfc]
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
        mov    eax, dword ptr [g_7da608]
        mov    edx, dword ptr [eax]
        mov    eax, dword ptr [ebp - 0xc8]
        mov    ecx, dword ptr [ebp - 0x34]
        mov    esi, dword ptr [ebp - 8]
        mov    ebx, dword ptr [ebp + 0x18]
        mov    dword ptr [edx + ecx*4], eax
        mov    eax, dword ptr [esi + 0x1c]
        fld    dword ptr [eax + ebx*8]
        mov    edx, dword ptr [g_7da680]
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
        jbe    L_d904
        mov    ecx, eax
        and    ecx, 0xff
        mov    dword ptr [ebp + 8], 1
        mov    dword ptr [ebp - 0x14], ecx
        mov    eax, 0x7da65c
        mov    edx, ebx
L_d49f:
        mov    esi, dword ptr [ebp + 8]
        test    ecx, esi
        je    L_d4ef
        mov    ecx, dword ptr [eax]
        mov    ecx, dword ptr [ecx]
        mov    bl, byte ptr [ecx + edi]
        mov    byte ptr [ebp - 0xd4], bl
        mov    esi, dword ptr [ebp - 0xd4]
        xor    ebx, ebx
        mov    bl, byte ptr [ecx + edx]
        mov    ecx, dword ptr [eax + 4]
        mov    ecx, dword ptr [ecx]
        and    esi, 0xff
        mov    dword ptr [ebp - 0x2c], esi
        sub    ebx, esi
        mov    esi, dword ptr [ebp - 0x34]
        mov    dword ptr [ebp + 0x18], ebx
        fild    dword ptr [ebp + 0x18]
        fmul    dword ptr [ebp - 4]
        fiadd    dword ptr [ebp - 0x2c]
        fadd    dword ptr [g_76dd60]
        fstp    dword ptr [ebp + 0x18]
        mov    bl, byte ptr [ebp + 0x18]
        mov    byte ptr [ecx + esi], bl
        mov    ecx, dword ptr [ebp - 0x14]
L_d4ef:
        mov    ebx, dword ptr [ebp + 8]
        add    eax, 8
        shl    ebx, 1
        cmp    eax, 0x7da66c
        mov    dword ptr [ebp + 8], ebx
        jl    L_d49f
        jmp    L_d904
L_d506:
        mov    eax, dword ptr [g_7da68c]
        mov    ebx, dword ptr [eax]
        mov    eax, edx
        mov    edx, dword ptr [g_7da684]
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
        mov    eax, dword ptr [ebp - 0xa8]
        mov    ecx, dword ptr [eax*8 + g_7b2408]
        test    ecx, ecx
        fstp    dword ptr [edx + 0xc]
        je    L_d57e
        fld    dword ptr [edx + 0xc]
        fsub    dword ptr [g_7b220c]
        jmp    L_d584
L_d57e:
        fld    dword ptr [g_7b220c]
L_d584:
        mov    ecx, dword ptr [ebp - 0xa8]
        mov    eax, dword ptr [ecx*8 + g_7b2404]
        fstp    dword ptr [edx + eax*4]
        mov    ecx, dword ptr [ebp - 8]
        mov    edx, dword ptr [ecx + 0xb0]
        mov    ecx, dword ptr [edx]
        mov    eax, dword ptr [ecx + edi*4]
        mov    edx, dword ptr [ebp - 0x18]
        mov    ecx, dword ptr [edx + ecx]
        mov    edx, ecx
        shr    ecx, 8
        and    edx, 0xff
        mov    esi, ecx
        mov    dword ptr [ebp - 0x1dc], edx
        xor    edx, edx
        mov    dword ptr [ebp - 0x1d8], edx
        fild    qword ptr [ebp - 0x1dc]
        shr    ecx, 8
        and    esi, 0xff
        mov    dword ptr [ebp - 0x154], esi
        fmul    dword ptr [g_76e114]
        mov    esi, ecx
        mov    dword ptr [ebp - 0x150], edx
        shr    ecx, 8
        fstp    dword ptr [ebp - 0x124]
        and    esi, 0xff
        fild    qword ptr [ebp - 0x154]
        and    ecx, 0xff
        mov    dword ptr [ebp - 0x1d0], edx
        mov    dword ptr [ebp - 0x1d4], esi
        fmul    dword ptr [g_76e114]
        mov    dword ptr [ebp - 0x164], ecx
        mov    dword ptr [ebp - 0x160], edx
        mov    ecx, eax
        fstp    dword ptr [ebp - 0x128]
        and    ecx, 0xff
        fild    qword ptr [ebp - 0x1d4]
        mov    dword ptr [ebp - 0x1a4], ecx
        mov    dword ptr [ebp - 0x1a0], edx
        shr    eax, 8
        fmul    dword ptr [g_76e114]
        mov    ecx, eax
        and    ecx, 0xff
        mov    dword ptr [ebp - 0x144], ecx
        fstp    dword ptr [ebp - 0x12c]
        mov    dword ptr [ebp - 0x140], edx
        fild    qword ptr [ebp - 0x164]
        shr    eax, 8
        mov    ecx, eax
        and    ecx, 0xff
        fmul    dword ptr [g_76e114]
        mov    dword ptr [ebp - 0x1c4], ecx
        mov    dword ptr [ebp - 0x1c0], edx
        shr    eax, 8
        fstp    dword ptr [ebp - 0x120]
        and    eax, 0xff
        fild    qword ptr [ebp - 0x1a4]
        mov    dword ptr [ebp - 0x184], eax
        mov    dword ptr [ebp - 0x180], edx
        mov    edx, dword ptr [ebp - 4]
        fmul    dword ptr [g_76e114]
        push    edx
        lea    eax, [ebp - 0x11c]
        lea    ecx, [ebp - 0x12c]
        fstp    dword ptr [ebp - 0x114]
        push    eax
        fild    qword ptr [ebp - 0x144]
        push    ecx
        mov    dword ptr [ebp - 0xec], 0xbf800000
        mov    dword ptr [ebp - 0xf0], 0xbf800000
        fmul    dword ptr [g_76e114]
        mov    dword ptr [ebp - 0xf4], 0xbf800000
        mov    dword ptr [ebp - 0xe8], 0xbf800000
        lea    ecx, [ebp - 0xf4]
        fstp    dword ptr [ebp - 0x118]
        fild    qword ptr [ebp - 0x1c4]
        fmul    dword ptr [g_76e114]
        fstp    dword ptr [ebp - 0x11c]
        fild    qword ptr [ebp - 0x184]
        fmul    dword ptr [g_76e114]
        fstp    dword ptr [ebp - 0x110]
        call    FUN_004286e0
        lea    edx, [ebp - 0xf4]
        mov    dword ptr [ebp + 8], edx
        fld    dword ptr [g_76e110]
        mov    esi, dword ptr [ebp + 8]
        fld    dword ptr [esi + 0xc]
        mov    ecx, dword ptr [esi + 0xc]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0xf8]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xf8]
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
        fstp    dword ptr [ebp - 0xf8]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xf8]
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
        fstp    dword ptr [ebp - 0xf8]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xf8]
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
        fstp    dword ptr [ebp - 0xf8]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0xf8]
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
        mov    eax, dword ptr [g_7da608]
        mov    edx, dword ptr [eax]
        mov    eax, dword ptr [ebp - 0xcc]
        mov    ecx, dword ptr [ebp - 0x34]
        mov    esi, dword ptr [ebp - 8]
        mov    dword ptr [edx + ecx*4], eax
        mov    eax, dword ptr [esi + 0x1c]
        mov    edx, dword ptr [g_7da680]
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
        jbe    L_d904
        mov    ecx, eax
        and    ecx, 0xff
        mov    edx, 1
        mov    dword ptr [ebp - 0x14], ecx
        mov    eax, 0x7da65c
L_d8a8:
        test    ecx, edx
        je    L_d8f8
        mov    ecx, dword ptr [eax]
        mov    ecx, dword ptr [ecx]
        mov    esi, dword ptr [ebp + 0x18]
        mov    bl, byte ptr [ecx + esi]
        mov    byte ptr [ebp - 0x9c], bl
        mov    esi, dword ptr [ebp - 0x9c]
        xor    ebx, ebx
        mov    bl, byte ptr [ecx + edi]
        mov    ecx, dword ptr [eax + 4]
        mov    ecx, dword ptr [ecx]
        and    esi, 0xff
        mov    dword ptr [ebp - 0x2c], esi
        sub    ebx, esi
        mov    esi, dword ptr [ebp - 0x34]
        mov    dword ptr [ebp + 8], ebx
        fild    dword ptr [ebp + 8]
        fmul    dword ptr [ebp - 4]
        fiadd    dword ptr [ebp - 0x2c]
        fadd    dword ptr [g_76dd60]
        fstp    dword ptr [ebp + 8]
        mov    bl, byte ptr [ebp + 8]
        mov    byte ptr [ecx + esi], bl
        mov    ecx, dword ptr [ebp - 0x14]
L_d8f8:
        add    eax, 8
        shl    edx, 1
        cmp    eax, 0x7da66c
        jl    L_d8a8
L_d904:
        inc    dword ptr [ebp - 0xc]
L_d907:
        mov    esi, dword ptr [ebp - 0x10]
        mov    ecx, dword ptr [ebp - 0x24]
        lea    edx, [esi + 3]
        cmp    ecx, edx
        jl    L_ce1f
L_d918:
        mov    edx, dword ptr [g_7da670]
        mov    eax, dword ptr [edx]
        mov    ecx, dword ptr [ebp - 0x7c]
        mov    dx, word ptr [ebp - 0xc]
        jmp    L_e6c6
L_d92c:
        mov    eax, dword ptr [g_7da66c]
        mov    edx, dword ptr [eax + 0x30]
        mov    dword ptr [ebp - 0x60], edx
        mov    edx, dword ptr [eax + 0x38]
        mov    dword ptr [ebp - 0x5c], edx
        mov    edx, dword ptr [eax + 0x40]
        mov    dword ptr [ebp - 0x58], edx
        mov    edx, dword ptr [eax + 0x48]
        mov    dword ptr [ebp - 0x54], edx
        mov    edx, dword ptr [ebp - 8]
        mov    dl, byte ptr [edx + 0x13]
        test    dl, dl
        mov    byte ptr [ebp - 0xd0], dl
        jbe    L_d99f
        mov    edi, edx
        and    edi, 0xff
        lea    ebx, [ebp - 0x50]
        mov    dword ptr [ebp + 0x18], 1
        mov    dword ptr [ebp - 0x14], edi
        mov    dword ptr [ebp + 8], ebx
        add    eax, 0x50
        mov    dword ptr [ebp - 0x24], 2
L_d97b:
        mov    ebx, dword ptr [ebp + 0x18]
        test    edi, ebx
        je    L_d98c
        mov    edi, dword ptr [eax]
        mov    ebx, dword ptr [ebp + 8]
        mov    dword ptr [ebx], edi
        mov    edi, dword ptr [ebp - 0x14]
L_d98c:
        add    dword ptr [ebp + 8], 4
        shl    dword ptr [ebp + 0x18], 1
        mov    ebx, dword ptr [ebp - 0x24]
        add    eax, 8
        dec    ebx
        mov    dword ptr [ebp - 0x24], ebx
        jne    L_d97b
L_d99f:
        xor    edi, edi
        lea    ebx, [esi + 3]
        cmp    esi, ebx
        mov    eax, esi
        mov    byte ptr [ebp + 0x1b], 0
        mov    byte ptr [ebp + 0xb], 0xff
        mov    dword ptr [ebp - 0xc], eax
        mov    dword ptr [ebp - 0x3c], edi
        jge    L_db75
        mov    edx, dword ptr [g_7da68c]
        mov    edx, dword ptr [edx]
        mov    ebx, dword ptr [ebp - 0x60]
        mov    dword ptr [ebp - 0x2c], edx
        mov    edx, dword ptr [ebp - 8]
        mov    esi, dword ptr [edx + 0xb0]
        mov    edx, dword ptr [edx + 0x1c]
        mov    esi, dword ptr [esi]
        mov    dword ptr [ebp - 0x24], edx
        mov    edx, dword ptr [g_7da688]
        mov    edx, dword ptr [edx]
        mov    dword ptr [ebp - 0x74], esi
        mov    dword ptr [ebp - 0x70], edx
        jmp    L_d9f1
L_d9eb:
        mov    ecx, dword ptr [ebp - 0xb8]
L_d9f1:
        xor    edx, edx
        mov    dl, byte ptr [ecx + eax]
        and    edi, 0xffff
        mov    eax, edi
        shl    eax, 4
        mov    dword ptr [ebp - 0x1b0], 0
        mov    dword ptr [ebp - 0x190], 0
        mov    esi, edx
        mov    edx, dword ptr [ebp - 0x2c]
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
        mov    edx, dword ptr [ebp - 0x74]
        mov    dword ptr [eax + ebx + 0xc], ecx
        mov    ecx, dword ptr [edx + esi*4]
        mov    edx, ecx
        and    edx, 0xff
        mov    dword ptr [ebp - 0x1b4], edx
        fild    qword ptr [ebp - 0x1b4]
        mov    edx, dword ptr [ebp - 0x5c]
        shr    ecx, 8
        mov    ebx, ecx
        fmul    dword ptr [g_76e114]
        and    ebx, 0xff
        shr    ecx, 8
        mov    dword ptr [ebp - 0x194], ebx
        fstp    dword ptr [eax + edx + 8]
        mov    ebx, ecx
        fild    qword ptr [ebp - 0x194]
        and    ebx, 0xff
        mov    dword ptr [ebp - 0x14c], ebx
        xor    ebx, ebx
        fmul    dword ptr [g_76e114]
        mov    dword ptr [ebp - 0x148], ebx
        shr    ecx, 8
        and    ecx, 0xff
        fstp    dword ptr [eax + edx + 4]
        mov    dword ptr [ebp - 0x15c], ecx
        fild    qword ptr [ebp - 0x14c]
        mov    ecx, dword ptr [ebp - 0x58]
        mov    dword ptr [ebp - 0x158], ebx
        fmul    dword ptr [g_76e114]
        fstp    dword ptr [eax + edx]
        fild    qword ptr [ebp - 0x15c]
        fmul    dword ptr [g_76e114]
        fstp    dword ptr [eax + edx + 0xc]
        mov    eax, dword ptr [ebp - 0x24]
        mov    edx, dword ptr [eax + esi*8]
        mov    eax, dword ptr [eax + esi*8 + 4]
        mov    dword ptr [ecx + edi*8], edx
        mov    dword ptr [ecx + edi*8 + 4], eax
        mov    ecx, dword ptr [ebp - 0x70]
        mov    edx, dword ptr [ecx + esi*4]
        mov    eax, dword ptr [ebp - 0x54]
        mov    dword ptr [eax + edi*4], edx
        mov    edx, dword ptr [ebp - 0xd0]
        test    dl, dl
        jbe    L_db56
        and    edx, 0xff
        mov    dword ptr [ebp - 0x18], 1
        mov    dword ptr [ebp - 0x14], edx
        lea    ebx, [ebp - 0x50]
        mov    ecx, 0x7da65c
        jmp    L_db17
L_db14:
        mov    edx, dword ptr [ebp - 0x14]
L_db17:
        mov    eax, dword ptr [ebp - 0x18]
        test    edx, eax
        je    L_db3a
        mov    edx, dword ptr [ecx]
        mov    eax, dword ptr [edx]
        mov    al, byte ptr [eax + esi]
        mov    edx, dword ptr [ebx]
        mov    byte ptr [edi + edx], al
        cmp    al, byte ptr [ebp + 0xb]
        jae    L_db32
        mov    byte ptr [ebp + 0xb], al
L_db32:
        cmp    al, byte ptr [ebp + 0x1b]
        jbe    L_db3a
        mov    byte ptr [ebp + 0x1b], al
L_db3a:
        mov    edx, dword ptr [ebp - 0x18]
        add    ecx, 8
        shl    edx, 1
        add    ebx, 4
        cmp    ecx, 0x7da66c
        mov    dword ptr [ebp - 0x18], edx
        jl    L_db14
        mov    edx, dword ptr [ebp - 0xd0]
L_db56:
        mov    eax, dword ptr [ebp - 0xc]
        mov    edi, dword ptr [ebp - 0x3c]
        mov    ecx, dword ptr [ebp - 0x10]
        mov    ebx, dword ptr [ebp - 0x60]
        inc    eax
        inc    edi
        add    ecx, 3
        cmp    eax, ecx
        mov    dword ptr [ebp - 0xc], eax
        mov    dword ptr [ebp - 0x3c], edi
        jl    L_d9eb
L_db75:
        mov    eax, dword ptr [g_7da66c]
        mov    esi, dword ptr [eax + 8]
        mov    dword ptr [ebp - 0x94], esi
        mov    esi, dword ptr [eax + 0x10]
        mov    word ptr [ebp - 0x48], di
        mov    edi, dword ptr [eax]
        xor    ecx, ecx
        test    dl, dl
        mov    dword ptr [ebp - 0x90], esi
        mov    esi, dword ptr [eax + 0x18]
        mov    dword ptr [ebp - 0x6c], ecx
        mov    dword ptr [ebp - 0x98], edi
        mov    dword ptr [ebp - 0x8c], esi
        jbe    L_dbec
        and    edx, 0xff
        mov    ebx, 1
        mov    dword ptr [ebp - 0x14], edx
        lea    esi, [ebp - 0x88]
        add    eax, 0x20
        mov    dword ptr [ebp + 8], 2
        jmp    L_dbcd
L_dbca:
        mov    edx, dword ptr [ebp - 0x14]
L_dbcd:
        test    edx, ebx
        je    L_dbdb
        mov    edx, dword ptr [eax]
        mov    dword ptr [esi], edx
        mov    edi, dword ptr [ebp - 0x98]
L_dbdb:
        mov    edx, dword ptr [ebp + 8]
        add    eax, 8
        add    esi, 4
        shl    ebx, 1
        dec    edx
        mov    dword ptr [ebp + 8], edx
        jne    L_dbca
L_dbec:
        mov    ebx, dword ptr [ebp - 0x48]
        mov    word ptr [ebp - 0x80], 0
        mov    dword ptr [ebp - 0x44], 1
        mov    dword ptr [ebp - 0x2c], 4
L_dc03:
        mov    dword ptr [ebp - 0x64], 0
        mov    dword ptr [ebp - 0x34], 0x7b2404
        mov    dword ptr [ebp - 0x74], 6
L_dc18:
        mov    eax, dword ptr [ebp - 0x44]
        test    dword ptr [g_7b96d4], eax
        je    L_e42b
        xor    eax, eax
        mov    edx, ebx
        and    edx, 0xffff
        mov    dword ptr [ebp - 0xc], eax
        mov    dword ptr [ebp - 0x18], edx
        jle    L_e324
        mov    ecx, dword ptr [ebp - 0x58]
        mov    edx, dword ptr [ebp - 0x54]
        mov    dword ptr [ebp - 0x78], ecx
        mov    ecx, dword ptr [ebp - 0x5c]
        mov    dword ptr [ebp - 0xbc], edx
        mov    edx, dword ptr [ebp - 0x60]
        lea    ebx, [ecx + 0xc]
        sub    ecx, edx
        lea    esi, [edx + 8]
        mov    edx, dword ptr [ebp - 0x18]
        mov    dword ptr [ebp - 0xb8], ebx
        mov    dword ptr [ebp - 0x3c], ecx
L_dc66:
        inc    eax
        xor    ecx, ecx
        cmp    eax, edx
        mov    edx, dword ptr [ebp - 0x44]
        setge    cl
        mov    dword ptr [ebp - 0x24], eax
        dec    ecx
        and    ecx, eax
        mov    eax, dword ptr [ebp - 0xbc]
        mov    eax, dword ptr [eax]
        test    edx, eax
        mov    dword ptr [ebp + 0x18], ecx
        mov    dword ptr [g_7b96d0], eax
        jne    L_dd9f
        mov    ecx, dword ptr [ebp - 0x80]
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
        mov    edx, dword ptr [ebp - 0xbc]
        mov    edx, dword ptr [edx]
        mov    edi, dword ptr [ebp - 0x8c]
        mov    dword ptr [edi + ecx*4], edx
        mov    edx, dword ptr [ebp - 0x94]
        mov    edi, dword ptr [ebx - 0xc]
        mov    dword ptr [eax + edx], edi
        mov    edi, dword ptr [ebx - 8]
        mov    dword ptr [eax + edx + 4], edi
        mov    edi, dword ptr [ebp - 0x3c]
        mov    edi, dword ptr [edi + esi]
        mov    dword ptr [eax + edx + 8], edi
        mov    edi, dword ptr [ebx]
        mov    dword ptr [eax + edx + 0xc], edi
        mov    edx, dword ptr [ebp - 0x78]
        mov    edi, dword ptr [edx]
        mov    eax, dword ptr [ebp - 0x90]
        mov    dword ptr [eax + ecx*8], edi
        mov    edx, dword ptr [edx + 4]
        mov    dword ptr [eax + ecx*8 + 4], edx
        xor    eax, eax
        mov    eax, dword ptr [ebp - 8]
        mov    al, byte ptr [eax + 0x13]
        test    al, al
        jbe    L_dd57
        mov    edx, eax
        and    edx, 0xff
        xor    eax, eax
        mov    dword ptr [ebp + 8], 1
        mov    dword ptr [ebp - 0x14], edx
        mov    dword ptr [ebp - 0x28], eax
L_dd23:
        mov    edi, dword ptr [ebp + 8]
        test    edx, edi
        je    L_dd44
        mov    edx, dword ptr [ebp + eax - 0x50]
        mov    edi, dword ptr [ebp - 0xc]
        mov    eax, dword ptr [ebp + eax - 0x88]
        mov    dl, byte ptr [edx + edi]
        mov    byte ptr [eax + ecx], dl
        mov    eax, dword ptr [ebp - 0x28]
        mov    edx, dword ptr [ebp - 0x14]
L_dd44:
        mov    edi, dword ptr [ebp + 8]
        add    eax, 4
        shl    edi, 1
        cmp    eax, 8
        mov    dword ptr [ebp - 0x28], eax
        mov    dword ptr [ebp + 8], edi
        jl    L_dd23
L_dd57:
        mov    eax, dword ptr [ebp + 0x18]
        mov    ecx, dword ptr [ebp - 0x54]
        mov    edx, dword ptr [ebp - 0x44]
        mov    edi, dword ptr [ecx + eax*4]
        inc    word ptr [ebp - 0x80]
        test    edi, edx
        je    L_e2e6
        mov    edi, eax
        mov    eax, dword ptr [ebp - 0x34]
        shl    edi, 4
        cmp    eax, 0x7b242c
        ja    L_de3f
        mov    ecx, dword ptr [ebp - 0x64]
        jmp    dword ptr [ecx*4 + g_jt_42f3d4]
        fld    dword ptr [esi + 4]
        mov    edx, dword ptr [ebp - 0x60]
        fsub    dword ptr [esi - 4]
        fld    dword ptr [edi + edx + 0xc]
        fsub    dword ptr [edi + edx + 4]
        jmp    L_ddfb
L_dd9f:
        mov    eax, dword ptr [ebp - 0x54]
        test    dword ptr [eax + ecx*4], edx
        jne    L_e2f1
        mov    edi, dword ptr [ebp + 0x18]
        mov    eax, dword ptr [ebp - 0x34]
        shl    edi, 4
        cmp    eax, 0x7b242c
        ja    L_e06d
        mov    eax, dword ptr [ebp - 0x64]
        jmp    dword ptr [eax*4 + g_jt_42f3ec]
        mov    edx, dword ptr [ebp - 0x60]
        fld    dword ptr [edi + edx + 0xc]
        fsub    dword ptr [edi + edx + 4]
        fld    dword ptr [esi + 4]
        fsub    dword ptr [esi - 4]
        jmp    L_e029
        mov    edx, dword ptr [ebp - 0x60]
        fld    dword ptr [esi - 4]
        fld    dword ptr [edi + edx + 4]
        jmp    L_ddfb
        fld    dword ptr [esi + 4]
        mov    edx, dword ptr [ebp - 0x60]
        fsub    dword ptr [esi - 8]
        fld    dword ptr [edi + edx + 0xc]
        fsub    dword ptr [edi + edx]
L_ddfb:
        fld st(1)
        fcomp    dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_de5d
        fstp st(0)
        mov    dword ptr [ebp - 4], 0
        fstp st(0)
        jmp    L_de6a
        mov    edx, dword ptr [ebp - 0x60]
        fld    dword ptr [esi - 8]
        fld    dword ptr [edi + edx]
        jmp    L_ddfb
        mov    edx, dword ptr [ebp - 0x60]
        fld    dword ptr [esi]
        fld    dword ptr [edi + edx + 8]
        jmp    L_ddfb
        fld    dword ptr [esi + 4]
        mov    edx, dword ptr [ebp - 0x60]
        fsub    dword ptr [esi]
        fld    dword ptr [edi + edx + 0xc]
        fsub    dword ptr [edi + edx + 8]
        jmp    L_ddfb
L_de3f:
        push    offset g_76df04
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_de51
        int 3    
L_de51:
        mov    edx, dword ptr [ebp - 0x60]
        mov    dword ptr [ebp - 4], 0
        jmp    L_de6a
L_de5d:
        fld st(1)
        fsub st(0), st(1)
        fdivr st(0), st(2)
        fstp    dword ptr [ebp - 4]
        fstp st(0)
        fstp st(0)
L_de6a:
        fld    dword ptr [edi + edx]
        mov    ecx, dword ptr [ebp - 0x80]
        fsub    dword ptr [esi - 8]
        mov    eax, dword ptr [ebp - 0x98]
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
        mov    edx, dword ptr [ebp - 0x34]
        cmp    dword ptr [edx + 4], 0
        fsub    dword ptr [esi + 4]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [esi + 4]
        fstp    dword ptr [eax + 0xc]
        je    L_ded1
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [g_7b220c]
        jmp    L_ded7
L_ded1:
        fld    dword ptr [g_7b220c]
L_ded7:
        mov    edx, dword ptr [edx]
        fstp    dword ptr [eax + edx*4]
        mov    edx, dword ptr [ebp - 0x5c]
        fld    dword ptr [edi + edx]
        mov    edx, dword ptr [ebp - 0x94]
        fsub    dword ptr [ebx - 0xc]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ebx - 0xc]
        fstp    dword ptr [ecx + edx]
        mov    edx, dword ptr [ebp - 0x5c]
        fld    dword ptr [edi + edx + 4]
        mov    edx, dword ptr [ebp - 0x94]
        fsub    dword ptr [ebx - 8]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ebx - 8]
        fstp    dword ptr [ecx + edx + 4]
        mov    edx, dword ptr [ebp - 0x5c]
        fld    dword ptr [edi + edx + 8]
        mov    edx, dword ptr [ebp - 0x3c]
        fsub    dword ptr [edx + esi]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edx + esi]
        mov    edx, dword ptr [ebp - 0x94]
        fstp    dword ptr [ecx + edx + 8]
        mov    edx, dword ptr [ebp - 0x5c]
        fld    dword ptr [edi + edx + 0xc]
        mov    edx, dword ptr [ebp - 0x94]
        fsub    dword ptr [ebx]
        mov    edi, dword ptr [ebp - 0x90]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ebx]
        mov    ebx, dword ptr [ebp + 8]
        fstp    dword ptr [ecx + edx + 0xc]
        mov    edx, dword ptr [ebp + 0x18]
        mov    ecx, dword ptr [ebp - 0x58]
        fld    dword ptr [ecx + edx*8]
        mov    ecx, dword ptr [ebp - 0x78]
        fsub    dword ptr [ecx]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ecx]
        fstp    dword ptr [edi + ebx*8]
        mov    ebx, dword ptr [ebp - 0x58]
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
        jbe    L_e247
        mov    edi, ecx
        and    edi, 0xff
        mov    dword ptr [ebp - 0x28], 1
        mov    dword ptr [ebp - 0x14], edi
        xor    ecx, ecx
L_df9d:
        mov    ebx, dword ptr [ebp - 0x28]
        test    edi, ebx
        je    L_dff8
        mov    edi, dword ptr [ebp + ecx - 0x50]
        mov    ebx, dword ptr [ebp - 0xc]
        mov    bl, byte ptr [edi + ebx]
        mov    byte ptr [ebp - 0xa4], bl
        mov    ebx, dword ptr [ebp - 0xa4]
        and    ebx, 0xff
        mov    dword ptr [ebp - 0x70], ebx
        xor    ebx, ebx
        mov    bl, byte ptr [edi + edx]
        mov    edx, dword ptr [ebp - 0x70]
        mov    edi, dword ptr [ebp + 8]
        sub    ebx, edx
        mov    edx, dword ptr [ebp + ecx - 0x88]
        mov    dword ptr [ebp - 0x1c], ebx
        fild    dword ptr [ebp - 0x1c]
        fmul    dword ptr [ebp - 4]
        fiadd    dword ptr [ebp - 0x70]
        fadd    dword ptr [g_76dd60]
        fstp    dword ptr [ebp - 0x1c]
        mov    bl, byte ptr [ebp - 0x1c]
        mov    byte ptr [edx + edi], bl
        mov    edx, dword ptr [ebp + 0x18]
        mov    edi, dword ptr [ebp - 0x14]
L_dff8:
        mov    ebx, dword ptr [ebp - 0x28]
        add    ecx, 4
        shl    ebx, 1
        cmp    ecx, 8
        mov    dword ptr [ebp - 0x28], ebx
        jl    L_df9d
        jmp    L_e247
        mov    edx, dword ptr [ebp - 0x60]
        fld    dword ptr [edi + edx + 4]
        fld    dword ptr [esi - 4]
        jmp    L_e029
        mov    edx, dword ptr [ebp - 0x60]
        fld    dword ptr [edi + edx + 0xc]
        fsub    dword ptr [edi + edx]
        fld    dword ptr [esi + 4]
        fsub    dword ptr [esi - 8]
L_e029:
        fld st(1)
        fcomp    dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_e08b
        fstp st(0)
        mov    dword ptr [ebp - 4], 0
        fstp st(0)
        jmp    L_e098
        mov    edx, dword ptr [ebp - 0x60]
        fld    dword ptr [edi + edx]
        fld    dword ptr [esi - 8]
        jmp    L_e029
        mov    edx, dword ptr [ebp - 0x60]
        fld    dword ptr [edi + edx + 8]
        fld    dword ptr [esi]
        jmp    L_e029
        mov    edx, dword ptr [ebp - 0x60]
        fld    dword ptr [edi + edx + 0xc]
        fsub    dword ptr [edi + edx + 8]
        fld    dword ptr [esi + 4]
        fsub    dword ptr [esi]
        jmp    L_e029
L_e06d:
        push    offset g_76df04
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_e07f
        int 3    
L_e07f:
        mov    edx, dword ptr [ebp - 0x60]
        mov    dword ptr [ebp - 4], 0
        jmp    L_e098
L_e08b:
        fld st(1)
        fsub st(0), st(1)
        fdivr st(0), st(2)
        fstp    dword ptr [ebp - 4]
        fstp st(0)
        fstp st(0)
L_e098:
        fld    dword ptr [esi - 8]
        mov    ecx, dword ptr [ebp - 0x80]
        fsub    dword ptr [edi + edx]
        mov    eax, dword ptr [ebp - 0x98]
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
        mov    edx, dword ptr [ebp - 0x60]
        lea    edx, [edi + edx + 8]
        fstp    dword ptr [eax + 4]
        fld    dword ptr [esi]
        fsub    dword ptr [edx]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edx]
        mov    edx, dword ptr [ebp - 0x60]
        lea    edx, [edi + edx + 0xc]
        fstp    dword ptr [eax + 8]
        fld    dword ptr [esi + 4]
        fsub    dword ptr [edx]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edx]
        mov    edx, dword ptr [ebp - 0x34]
        cmp    dword ptr [edx + 4], 0
        fstp    dword ptr [eax + 0xc]
        je    L_e109
        fld    dword ptr [eax + 0xc]
        fsub    dword ptr [g_7b220c]
        jmp    L_e10f
L_e109:
        fld    dword ptr [g_7b220c]
L_e10f:
        mov    edx, dword ptr [edx]
        fstp    dword ptr [eax + edx*4]
        mov    edx, dword ptr [ebp - 0x5c]
        fld    dword ptr [ebx - 0xc]
        fsub    dword ptr [edi + edx]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edi + edx]
        mov    edx, dword ptr [ebp - 0x94]
        fstp    dword ptr [ecx + edx]
        mov    edx, dword ptr [ebp - 0x5c]
        fld    dword ptr [ebx - 8]
        lea    edx, [edi + edx + 4]
        fsub    dword ptr [edx]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edx]
        mov    edx, dword ptr [ebp - 0x94]
        fstp    dword ptr [ecx + edx + 4]
        mov    edx, dword ptr [ebp - 0x5c]
        lea    edx, [edi + edx + 8]
        mov    dword ptr [ebp - 0x1c], edx
        mov    edx, dword ptr [ebp - 0x3c]
        fld    dword ptr [edx + esi]
        mov    edx, dword ptr [ebp - 0x1c]
        fsub    dword ptr [edx]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edx]
        mov    edx, dword ptr [ebp - 0x94]
        fstp    dword ptr [ecx + edx + 8]
        mov    edx, dword ptr [ebp - 0x5c]
        fld    dword ptr [ebx]
        lea    edi, [edi + edx + 0xc]
        fsub    dword ptr [edi]
        mov    edx, dword ptr [ebp - 0x94]
        mov    ebx, dword ptr [ebp + 8]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [edi]
        mov    edi, dword ptr [ebp - 0x90]
        fstp    dword ptr [ecx + edx + 0xc]
        mov    ecx, dword ptr [ebp - 0x78]
        fld    dword ptr [ecx]
        mov    ecx, dword ptr [ebp - 0x58]
        mov    edx, dword ptr [ebp + 0x18]
        fsub    dword ptr [ecx + edx*8]
        fmul    dword ptr [ebp - 4]
        fadd    dword ptr [ecx + edx*8]
        lea    ecx, [ecx + edx*8 + 4]
        fstp    dword ptr [edi + ebx*8]
        mov    ebx, dword ptr [ebp - 0x78]
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
        jbe    L_e247
        and    ecx, 0xff
        xor    edi, edi
        mov    dword ptr [ebp - 0x28], 1
        mov    dword ptr [ebp - 0x14], ecx
        mov    dword ptr [ebp + 0x18], edi
L_e1de:
        mov    ebx, dword ptr [ebp - 0x28]
        test    ecx, ebx
        je    L_e234
        mov    edi, dword ptr [ebp + edi - 0x50]
        mov    cl, byte ptr [edi + edx]
        mov    ebx, dword ptr [ebp - 0xc]
        mov    byte ptr [ebp - 0x40], cl
        mov    ecx, dword ptr [ebp - 0x40]
        and    ecx, 0xff
        mov    dword ptr [ebp - 0x70], ecx
        xor    ecx, ecx
        mov    cl, byte ptr [edi + ebx]
        sub    ecx, dword ptr [ebp - 0x70]
        mov    edi, dword ptr [ebp + 8]
        mov    dword ptr [ebp - 0x1c], ecx
        fild    dword ptr [ebp - 0x1c]
        mov    ecx, dword ptr [ebp + 0x18]
        mov    ecx, dword ptr [ebp + ecx - 0x88]
        fmul    dword ptr [ebp - 4]
        fiadd    dword ptr [ebp - 0x70]
        fadd    dword ptr [g_76dd60]
        fstp    dword ptr [ebp - 0x1c]
        mov    bl, byte ptr [ebp - 0x1c]
        mov    byte ptr [ecx + edi], bl
        mov    edi, dword ptr [ebp + 0x18]
        mov    ecx, dword ptr [ebp - 0x14]
L_e234:
        mov    ebx, dword ptr [ebp - 0x28]
        add    edi, 4
        shl    ebx, 1
        cmp    edi, 8
        mov    dword ptr [ebp + 0x18], edi
        mov    dword ptr [ebp - 0x28], ebx
        jl    L_e1de
L_e247:
        mov    dword ptr [ebp - 0x1c], eax
        mov    dword ptr [ebp + 0x18], 0
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
        mov    dword ptr [ebp + 0x18], edx
        mov    edx, dword ptr [ebp + 0x18]
        mov    eax, dword ptr [ebp - 0x8c]
        mov    ecx, dword ptr [ebp + 8]
        inc    word ptr [ebp - 0x80]
        mov    ebx, dword ptr [ebp - 0xb8]
        mov    dword ptr [eax + ecx*4], edx
L_e2e6:
        mov    ecx, dword ptr [ebp - 0x6c]
        mov    edi, dword ptr [ebp - 0x98]
        jmp    L_e2f4
L_e2f1:
        mov    ecx, dword ptr [ebp - 0x6c]
L_e2f4:
        mov    edx, dword ptr [ebp - 0xbc]
        mov    eax, dword ptr [ebp - 0x24]
        add    edx, 4
        mov    dword ptr [ebp - 0xbc], edx
        add    dword ptr [ebp - 0x78], 8
        mov    edx, dword ptr [ebp - 0x18]
        add    ebx, 0x10
        add    esi, 0x10
        cmp    eax, edx
        mov    dword ptr [ebp - 0xc], eax
        mov    dword ptr [ebp - 0xb8], ebx
        jl    L_dc66
L_e324:
        mov    eax, dword ptr [g_7da66c]
        lea    edx, [ecx + ecx*2]
        shl    edx, 4
        add    eax, edx
        mov    edx, dword ptr [eax]
        mov    dword ptr [ebp - 0x60], edx
        mov    edx, dword ptr [eax + 8]
        mov    dword ptr [ebp - 0x5c], edx
        mov    edx, dword ptr [eax + 0x10]
        mov    eax, dword ptr [eax + 0x18]
        mov    dword ptr [ebp - 0x58], edx
        mov    edx, dword ptr [ebp - 8]
        xor    ebx, ebx
        mov    bl, byte ptr [edx + 0x13]
        test    bl, bl
        mov    dword ptr [ebp - 0x54], eax
        jbe    L_e398
        mov    edx, ebx
        xor    eax, eax
        and    edx, 0xff
        mov    dword ptr [ebp + 8], 1
        mov    dword ptr [ebp - 0x14], edx
        lea    esi, [ebp - 0x50]
L_e36b:
        mov    edi, dword ptr [ebp + 8]
        test    edx, edi
        je    L_e387
        mov    edi, dword ptr [g_7da66c]
        lea    edx, [ecx + ecx*2]
        lea    edx, [eax + edx*2]
        mov    edx, dword ptr [edi + edx*8 + 0x20]
        mov    dword ptr [esi], edx
        mov    edx, dword ptr [ebp - 0x14]
L_e387:
        mov    edi, dword ptr [ebp + 8]
        inc    eax
        shl    edi, 1
        add    esi, 4
        cmp    eax, 2
        mov    dword ptr [ebp + 8], edi
        jl    L_e36b
L_e398:
        mov    ax, word ptr [ebp - 0x80]
        xor    edx, edx
        test    ecx, ecx
        sete    dl
        mov    word ptr [ebp - 0x48], ax
        mov    ecx, edx
        mov    edx, dword ptr [g_7da66c]
        lea    eax, [ecx + ecx*2]
        shl    eax, 4
        mov    edi, dword ptr [eax + edx]
        add    eax, edx
        test    bl, bl
        mov    edx, dword ptr [eax + 8]
        mov    dword ptr [ebp - 0x94], edx
        mov    edx, dword ptr [eax + 0x10]
        mov    eax, dword ptr [eax + 0x18]
        mov    dword ptr [ebp - 0x6c], ecx
        mov    dword ptr [ebp - 0x98], edi
        mov    dword ptr [ebp - 0x90], edx
        mov    dword ptr [ebp - 0x8c], eax
        jbe    L_e422
        xor    eax, eax
        and    ebx, 0xff
        mov    edx, 1
        mov    dword ptr [ebp - 0x14], ebx
        lea    esi, [ebp - 0x88]
L_e3f8:
        test    ebx, edx
        je    L_e417
        mov    ebx, dword ptr [g_7da66c]
        lea    edi, [ecx + ecx*2]
        lea    edi, [eax + edi*2]
        mov    edi, dword ptr [ebx + edi*8 + 0x20]
        mov    ebx, dword ptr [ebp - 0x14]
        mov    dword ptr [esi], edi
        mov    edi, dword ptr [ebp - 0x98]
L_e417:
        inc    eax
        add    esi, 4
        shl    edx, 1
        cmp    eax, 2
        jl    L_e3f8
L_e422:
        mov    ebx, dword ptr [ebp - 0x48]
        mov    word ptr [ebp - 0x80], 0
L_e42b:
        mov    eax, dword ptr [ebp - 0x44]
        mov    esi, dword ptr [ebp - 0x64]
        mov    edx, dword ptr [ebp - 0x34]
        shl    eax, 1
        mov    dword ptr [ebp - 0x44], eax
        mov    eax, dword ptr [ebp - 0x74]
        inc    esi
        add    edx, 8
        dec    eax
        mov    dword ptr [ebp - 0x64], esi
        mov    dword ptr [ebp - 0x34], edx
        mov    dword ptr [ebp - 0x74], eax
        jne    L_dc18
        mov    esi, ebx
        xor    eax, eax
        and    esi, 0xffff
        jle    L_e467
        mov    edx, dword ptr [ebp - 0x54]
L_e45f:
        or    eax, dword ptr [edx]
        add    edx, 4
        dec    esi
        jne    L_e45f
L_e467:
        test    eax, eax
        mov    dword ptr [g_7b96d4], eax
        je    L_e499
        mov    edx, dword ptr [ebp - 0x2c]
        mov    esi, edx
        dec    edx
        test    esi, esi
        mov    dword ptr [ebp - 0x2c], edx
        jne    L_dc03
        test    eax, eax
        je    L_e499
        mov    ecx, dword ptr [g_7d98fc]
        mov    edx, dword ptr [ecx]
        mov    eax, dword ptr [ebp - 0x20]
        mov    byte ptr [edx + eax], 0
        jmp    L_e702
L_e499:
        mov    eax, dword ptr [ebp - 0x48]
        xor    edx, edx
        and    eax, 0xffff
        mov    dword ptr [ebp - 0x18], eax
        jle    L_e6b1
        mov    eax, dword ptr [ebp - 0x5c]
        mov    ecx, dword ptr [ebp - 0x58]
        mov    dword ptr [ebp - 0x28], eax
        mov    eax, dword ptr [ebp - 0xa0]
        mov    dword ptr [ebp - 0x6c], ecx
        lea    ecx, [eax*8]
        mov    dword ptr [ebp - 0x64], ecx
        lea    ecx, [eax*4]
        shl    eax, 4
        mov    dword ptr [ebp - 0x3c], eax
        mov    eax, dword ptr [ebp - 0x60]
        mov    dword ptr [ebp - 0x24], ecx
        lea    edi, [eax + 8]
L_e4de:
        mov    ecx, dword ptr [g_7da684]
        mov    eax, dword ptr [ecx]
        mov    esi, dword ptr [ebp - 0x3c]
        mov    ecx, dword ptr [edi - 8]
        add    eax, esi
        mov    dword ptr [eax], ecx
        mov    ecx, dword ptr [edi - 4]
        mov    dword ptr [eax + 4], ecx
        mov    ecx, dword ptr [edi]
        mov    dword ptr [eax + 8], ecx
        mov    ecx, dword ptr [edi + 4]
        mov    dword ptr [eax + 0xc], ecx
        mov    eax, dword ptr [ebp - 0x28]
        mov    dword ptr [ebp + 8], eax
        fld    dword ptr [g_76e110]
        mov    esi, dword ptr [ebp + 8]
        fld    dword ptr [esi + 0xc]
        mov    ecx, dword ptr [esi + 0xc]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x38]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x38]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    dword ptr [ebp - 0x68], ebx
        fld    dword ptr [esi]
        mov    ecx, dword ptr [esi]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x38]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x38]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0x68]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0x68], ecx
        fld    dword ptr [esi + 4]
        mov    ecx, dword ptr [esi + 4]
        fadd st(0), st(1)
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x38]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x38]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0x68]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0x68], ecx
        mov    ecx, dword ptr [esi + 8]
        fadd    dword ptr [esi + 8]
        rcl    ecx, 1
        sbb    eax, eax
        xor    eax, 0xffffffff
        fstp    dword ptr [ebp - 0x38]
        xor    ecx, ecx
        mov    ebx, dword ptr [ebp - 0x38]
        and    ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor    eax, eax
        sub    eax, ecx
        or    ebx, eax
        and    ebx, 0xff
        mov    ecx, dword ptr [ebp - 0x68]
        shl    ecx, 8
        or    ecx, ebx
        mov    dword ptr [ebp - 0x68], ecx
        mov    ecx, dword ptr [g_7da608]
        mov    eax, dword ptr [ecx]
        mov    ecx, dword ptr [ebp - 0x68]
        mov    esi, dword ptr [ebp - 0x24]
        mov    dword ptr [eax + esi], ecx
        mov    eax, dword ptr [g_7da680]
        mov    esi, dword ptr [eax]
        mov    ecx, dword ptr [ebp - 0x6c]
        mov    eax, dword ptr [ebp - 0x64]
        mov    ebx, dword ptr [ecx]
        mov    ecx, dword ptr [ecx + 4]
        mov    dword ptr [esi + eax], ebx
        mov    dword ptr [esi + eax + 4], ecx
        xor    eax, eax
        mov    eax, dword ptr [ebp - 8]
        mov    al, byte ptr [eax + 0x13]
        test    al, al
        jbe    L_e670
        and    eax, 0xff
        lea    esi, [ebp - 0x50]
        mov    dword ptr [ebp + 0x18], 1
        mov    dword ptr [ebp - 0x14], eax
        mov    ecx, 0x7da660
        mov    dword ptr [ebp + 8], esi
L_e638:
        mov    esi, dword ptr [ebp + 0x18]
        test    eax, esi
        je    L_e659
        mov    esi, dword ptr [ecx]
        mov    ebx, dword ptr [esi]
        mov    eax, dword ptr [ebp + 8]
        mov    eax, dword ptr [eax]
        mov    esi, dword ptr [ebp - 0xa0]
        mov    al, byte ptr [eax + edx]
        add    esi, edx
        mov    byte ptr [ebx + esi], al
        mov    eax, dword ptr [ebp - 0x14]
L_e659:
        add    dword ptr [ebp + 8], 4
        mov    ebx, dword ptr [ebp + 0x18]
        add    ecx, 8
        shl    ebx, 1
        cmp    ecx, 0x7da670
        mov    dword ptr [ebp + 0x18], ebx
        jl    L_e638
L_e670:
        mov    ebx, dword ptr [ebp - 0x24]
        mov    esi, dword ptr [ebp - 0x3c]
        mov    ecx, dword ptr [ebp - 0x6c]
        add    ebx, 4
        mov    eax, 0x10
        add    esi, eax
        mov    dword ptr [ebp - 0x24], ebx
        mov    ebx, dword ptr [ebp - 0x28]
        add    ebx, eax
        add    edi, eax
        mov    dword ptr [ebp - 0x3c], esi
        mov    esi, dword ptr [ebp - 0x64]
        mov    eax, 8
        add    esi, eax
        add    ecx, eax
        mov    eax, dword ptr [ebp - 0x18]
        inc    edx
        cmp    edx, eax
        mov    dword ptr [ebp - 0x28], ebx
        mov    dword ptr [ebp - 0x64], esi
        mov    dword ptr [ebp - 0x6c], ecx
        jl    L_e4de
L_e6b1:
        mov    ecx, dword ptr [ebp - 0x48]
        mov    edx, dword ptr [g_7da670]
        mov    eax, dword ptr [edx]
        mov    dx, word ptr [ebp - 0x48]
        mov    dword ptr [ebp - 0xc], ecx
        mov    ecx, dword ptr [ebp - 0x7c]
L_e6c6:
        mov    word ptr [eax + ecx*2], dx
        mov    eax, dword ptr [ebp - 0xc]
        mov    edx, dword ptr [ebp - 0xa0]
        mov    ecx, dword ptr [ebp - 0x7c]
        and    eax, 0xffff
        add    edx, eax
        mov    eax, dword ptr [ebp - 0xac]
        inc    ecx
        inc    eax
        mov    dword ptr [ebp - 0xac], eax
        mov    eax, dword ptr [g_7d98fc]
        mov    dword ptr [ebp - 0xa0], edx
        mov    edx, dword ptr [ebp - 0x20]
        mov    dword ptr [ebp - 0x7c], ecx
        mov    ecx, dword ptr [eax]
        mov    byte ptr [ecx + edx], 0
L_e702:
        mov    edi, dword ptr [ebp - 0x10]
        mov    eax, dword ptr [ebp - 0x20]
        mov    ecx, dword ptr [ebp - 8]
        mov    edx, dword ptr [ecx + 0x58]
        add    edi, 3
        inc    eax
        cmp    eax, edx
        mov    dword ptr [ebp - 0x10], edi
        mov    dword ptr [ebp - 0x20], eax
        jl    L_cd44
        mov    bl, byte ptr [ebp + 0x1c]
L_e723:
        test    bl, bl
        mov    edx, dword ptr [ebp + 0x10]
        je    L_e72f
        mov    ecx, dword ptr [edx + 0x30]
        jmp    L_e739
L_e72f:
        mov    ecx, dword ptr [edx]
        mov    eax, dword ptr [edx + 0x10]
        shl    ecx, 5
        add    ecx, eax
L_e739:
        mov    eax, dword ptr [ebp - 8]
        xor    esi, esi
        test    bl, bl
        mov    dword ptr [eax + 0x44], ecx
        mov    word ptr [eax + 0xa], si
        je    L_e74e
        mov    ecx, dword ptr [edx + 0x48]
        jmp    L_e757
L_e74e:
        mov    ecx, dword ptr [edx + 0xc]
        mov    edx, dword ptr [edx + 0x28]
        lea    ecx, [edx + ecx*2]
L_e757:
        mov    dword ptr [eax + 0x50], ecx
        mov    word ptr [eax + 0x54], si
        mov    ecx, dword ptr [eax + 0x18]
        xor    ebx, ebx
        cmp    ecx, esi
        mov    dword ptr [ebp - 0xc], ecx
        mov    dword ptr [ebp - 0x10], ebx
        mov    dword ptr [ebp + 8], esi
        jle    L_ea1c
L_e774:
        mov    edx, dword ptr [g_7da600]
        mov    edx, dword ptr [edx]
        cmp    byte ptr [edx + ebx], 0
        jne    L_e78a
        inc    dword ptr [ebp + 8]
        jmp    L_ea0e
L_e78a:
        mov    edx, dword ptr [ebp + 8]
        mov    ecx, ebx
        sub    ecx, edx
        mov    edx, dword ptr [g_7da5f4]
        mov    word ptr [edx + ebx*2], cx
        test    byte ptr [g_7da86c], 2
        jle    L_e8a7
        mov    ecx, dword ptr [eax + 0x28]
        test    ch, 0x3c
        je    L_e8a7
        cmp    dword ptr [g_7b2210], 1
        jne    L_e8a7
        mov    ecx, dword ptr [ebp - 8]
        mov    eax, dword ptr [ecx + 0x1c]
        mov    edx, dword ptr [ecx + 0xb0]
        mov    dword ptr [ebp - 0x24], eax
        mov    eax, dword ptr [edx]
        mov    edx, dword ptr [g_7da68c]
        mov    dword ptr [ebp + 0x18], eax
        mov    eax, dword ptr [edx]
        mov    dword ptr [ebp - 0x40], eax
        xor    eax, eax
        mov    ax, word ptr [ecx + 0xa]
        lea    edx, [eax + eax*4]
        mov    eax, dword ptr [ecx + 0xa4]
        lea    esi, [eax + edx*8]
        mov    dword ptr [ebp - 0x38], esi
        mov    ecx, dword ptr [ebp - 0x40]
        fld1    
        mov    edi, dword ptr [ebp - 0x10]
        mov    eax, edi
        shl    eax, 4
        fdiv    dword ptr [eax + ecx + 0xc]
        add    eax, ecx
        mov    edx, dword ptr [ebp - 0x38]
        fst    dword ptr [edx + 0xc]
        fld st(0)
        fmul    dword ptr [eax]
        fstp    dword ptr [edx]
        fld    dword ptr [eax + 4]
        fmul st(0), st(1)
        fstp    dword ptr [edx + 4]
        fmul    dword ptr [eax + 8]
        fstp    dword ptr [edx + 8]
        fld    dword ptr [g_7da87c]
        fmul    dword ptr [esi]
        mov    eax, dword ptr [ebp + 0x18]
        test    eax, eax
        fadd    dword ptr [g_7da874]
        fstp    dword ptr [esi]
        fld    dword ptr [g_7da878]
        fmul    dword ptr [esi + 4]
        fadd    dword ptr [g_7da870]
        fstp    dword ptr [esi + 4]
        je    L_e852
        mov    ecx, eax
        mov    eax, dword ptr [ecx + ebx*4]
        jmp    L_e857
L_e852:
        mov    eax, dword ptr [g_7b94a0]
L_e857:
        mov    dword ptr [esi + 0x10], eax
        mov    eax, dword ptr [ebp - 0x24]
        mov    edx, dword ptr [eax + ebx*8]
        mov    dword ptr [esi + 0x18], edx
        mov    ecx, dword ptr [eax + ebx*8 + 4]
        mov    dword ptr [esi + 0x1c], ecx
        mov    edx, dword ptr [eax + ebx*8]
        mov    ecx, dword ptr [ebp - 8]
        mov    dword ptr [esi + 0x20], edx
        mov    eax, dword ptr [eax + ebx*8 + 4]
        mov    dword ptr [esi + 0x24], eax
        test    byte ptr [ecx + 0x13], 1
        je    L_e96e
        mov    edx, dword ptr [g_7da65c]
        mov    ecx, dword ptr [edx]
        mov    eax, dword ptr [ebp - 8]
        mov    cl, byte ptr [ecx + ebx]
        xor    edx, edx
        mov    dx, word ptr [eax + 0xa]
        mov    eax, dword ptr [eax + 0x44]
        shl    edx, 5
        mov    byte ptr [edx + eax + 0x17], cl
        jmp    L_e96e
L_e8a7:
        mov    eax, dword ptr [ebp - 8]
        mov    edx, dword ptr [eax + 0x1c]
        mov    ecx, dword ptr [eax + 0xb0]
        xor    esi, esi
        mov    si, word ptr [eax + 0xa]
        mov    dword ptr [ebp - 0x1c], edx
        mov    edx, dword ptr [ecx]
        mov    ecx, dword ptr [g_7da68c]
        mov    dword ptr [ebp + 0x18], edx
        mov    edx, dword ptr [ecx]
        mov    ecx, dword ptr [eax + 0x44]
        shl    esi, 5
        add    esi, ecx
        mov    dword ptr [ebp - 0x40], edx
        mov    dword ptr [ebp - 0x38], esi
        mov    ecx, dword ptr [ebp - 0x40]
        fld1    
        mov    edi, dword ptr [ebp - 0x10]
        mov    eax, edi
        shl    eax, 4
        fdiv    dword ptr [eax + ecx + 0xc]
        add    eax, ecx
        mov    edx, dword ptr [ebp - 0x38]
        fst    dword ptr [edx + 0xc]
        fld st(0)
        fmul    dword ptr [eax]
        fstp    dword ptr [edx]
        fld    dword ptr [eax + 4]
        fmul st(0), st(1)
        fstp    dword ptr [edx + 4]
        fmul    dword ptr [eax + 8]
        fstp    dword ptr [edx + 8]
        fld    dword ptr [g_7da87c]
        fmul    dword ptr [esi]
        mov    eax, dword ptr [ebp + 0x18]
        test    eax, eax
        fadd    dword ptr [g_7da874]
        fstp    dword ptr [esi]
        fld    dword ptr [g_7da878]
        fmul    dword ptr [esi + 4]
        fadd    dword ptr [g_7da870]
        fstp    dword ptr [esi + 4]
        je    L_e932
        mov    eax, dword ptr [eax + ebx*4]
        jmp    L_e937
L_e932:
        mov    eax, dword ptr [g_7b94a0]
L_e937:
        mov    dword ptr [esi + 0x10], eax
        mov    eax, dword ptr [ebp - 0x1c]
        mov    ecx, dword ptr [eax + ebx*8]
        mov    dword ptr [esi + 0x18], ecx
        mov    edx, dword ptr [eax + ebx*8 + 4]
        mov    eax, dword ptr [ebp - 8]
        test    byte ptr [eax + 0x13], 1
        mov    dword ptr [esi + 0x1c], edx
        je    L_e96e
        mov    ecx, dword ptr [g_7da65c]
        mov    edx, dword ptr [ecx]
        mov    dl, byte ptr [edx + ebx]
        xor    ecx, ecx
        mov    cx, word ptr [eax + 0xa]
        mov    eax, dword ptr [eax + 0x44]
        shl    ecx, 5
        mov    byte ptr [ecx + eax + 0x17], dl
L_e96e:
        mov    al, byte ptr [ebp + 0x17]
        test    al, al
        je    L_e9b2
        mov    eax, dword ptr [ebp - 8]
        fld    dword ptr [ebp - 0xb4]
        mov    edx, dword ptr [eax + 0x44]
        xor    ecx, ecx
        mov    cx, word ptr [eax + 0xa]
        shl    ecx, 5
        fadd    dword ptr [ecx + edx + 0x18]
        lea    ecx, [ecx + edx + 0x18]
        fstp    dword ptr [ecx]
        mov    edx, dword ptr [eax + 0x44]
        fld    dword ptr [ebp - 0xb0]
        xor    ecx, ecx
        mov    cx, word ptr [eax + 0xa]
        shl    ecx, 5
        fadd    dword ptr [ecx + edx + 0x1c]
        lea    ecx, [ecx + edx + 0x1c]
        fstp    dword ptr [ecx]
        jmp    L_e9b5
L_e9b2:
        mov    eax, dword ptr [ebp - 8]
L_e9b5:
        test    byte ptr [eax + 0x13], 2
        je    L_ea04
        mov    edx, dword ptr [eax + 0x44]
        xor    ecx, ecx
        mov    cx, word ptr [eax + 0xa]
        shl    ecx, 5
        mov    esi, dword ptr [ecx + edx + 0x14]
        lea    ecx, [ecx + edx + 0x14]
        and    esi, 0xff000000
        mov    dword ptr [ecx], esi
        mov    edx, dword ptr [eax + 0x44]
        xor    ecx, ecx
        mov    cx, word ptr [eax + 0xa]
        shl    ecx, 5
        lea    esi, [ecx + edx + 0x14]
        xor    ecx, ecx
        mov    ecx, dword ptr [g_7da664]
        mov    edx, dword ptr [ecx]
        xor    ecx, ecx
        mov    cl, byte ptr [edx + ebx]
        mov    edx, ecx
        shl    edx, 8
        add    edx, ecx
        shl    edx, 8
        add    edx, ecx
        add    dword ptr [esi], edx
L_ea04:
        inc    word ptr [eax + 0xa]
        mov    eax, dword ptr [ebp - 8]
        mov    ecx, dword ptr [ebp - 0xc]
L_ea0e:
        inc    ebx
        cmp    ebx, ecx
        mov    dword ptr [ebp - 0x10], ebx
        jl    L_e774
        xor    esi, esi
L_ea1c:
        mov    edi, dword ptr [eax + 0x58]
        xor    edx, edx
        xor    ecx, ecx
        cmp    edi, esi
        mov    dword ptr [ebp - 0x20], edx
        jle    L_eab9
L_ea2e:
        mov    esi, dword ptr [g_7d98fc]
        mov    esi, dword ptr [esi]
        cmp    byte ptr [esi + edx], 0
        je    L_eaa5
        mov    edx, dword ptr [eax + 0x48]
        mov    edi, dword ptr [g_7da5f4]
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
        mov    edi, dword ptr [g_7da5f4]
        mov    esi, dword ptr [eax + 0x50]
        xor    edx, edx
        mov    dx, word ptr [eax + 0x54]
        mov    di, word ptr [edi + ebx*2]
        xor    ebx, ebx
        mov    word ptr [esi + edx*2 + 2], di
        mov    edx, dword ptr [eax + 0x48]
        mov    bl, byte ptr [edx + ecx + 1]
        mov    edi, dword ptr [g_7da5f4]
        mov    esi, dword ptr [eax + 0x50]
        xor    edx, edx
        mov    dx, word ptr [eax + 0x54]
        mov    di, word ptr [edi + ebx*2]
        mov    word ptr [esi + edx*2 + 4], di
        add    word ptr [eax + 0x54], 3
        mov    edx, dword ptr [ebp - 0x20]
L_eaa5:
        mov    esi, dword ptr [eax + 0x58]
        add    ecx, 3
        inc    edx
        cmp    edx, esi
        mov    dword ptr [ebp - 0x20], edx
        jl    L_ea2e
        xor    esi, esi
L_eab9:
        mov    eax, dword ptr [ebp - 0x7c]
        cmp    eax, esi
        jle    L_f173
        mov    dword ptr [ebp - 0x20], esi
        mov    dword ptr [ebp - 0x10], esi
L_eaca:
        mov    eax, dword ptr [g_7da670]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [ebp - 0x20]
        mov    ax, word ptr [ecx + edx*2]
        mov    dword ptr [ebp - 0xc], 1
        and    eax, 0xffff
        mov    dword ptr [ebp - 0x2c], eax
        dec    eax
        cmp    eax, 1
        jle    L_f156
        mov    eax, dword ptr [ebp - 0x10]
        mov    ebx, dword ptr [ebp - 8]
        lea    ecx, [eax*8 + 8]
        lea    edx, [eax*4 + 4]
        mov    dword ptr [ebp + 8], ecx
        mov    dword ptr [ebp + 0x18], edx
L_eb0b:
        test    byte ptr [g_7da86c], 2
        jle    L_ed69
        mov    eax, dword ptr [ebx + 0x28]
        test    ah, 0x3c
        je    L_ed69
        cmp    dword ptr [g_7b2210], 1
        jne    L_ed69
        mov    eax, dword ptr [g_7da680]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [g_7da608]
        mov    eax, dword ptr [edx]
        mov    dword ptr [ebp - 0x9c], ecx
        mov    ecx, dword ptr [g_7da684]
        mov    edx, dword ptr [ecx]
        mov    ecx, dword ptr [ebp - 0xc]
        mov    dword ptr [ebp - 0xa4], eax
        mov    eax, dword ptr [ebp - 0x10]
        mov    dword ptr [ebp - 0x1c], edx
        lea    edx, [ecx + eax]
        lea    eax, [ecx + eax + 1]
        mov    dword ptr [ebp - 0x68], eax
        xor    eax, eax
        mov    ax, word ptr [ebx + 0xa]
        mov    dword ptr [ebp - 0x38], edx
        mov    edx, dword ptr [ebx + 0xa4]
        lea    ecx, [eax + eax*4]
        lea    esi, [edx + ecx*8]
        mov    dword ptr [ebp - 0x40], esi
        mov    ecx, dword ptr [ebp - 0x1c]
        fld1    
        mov    edi, dword ptr [ebp - 0x10]
        mov    eax, edi
        shl    eax, 4
        fdiv    dword ptr [eax + ecx + 0xc]
        add    eax, ecx
        mov    edx, dword ptr [ebp - 0x40]
        fst    dword ptr [edx + 0xc]
        fld st(0)
        fmul    dword ptr [eax]
        fstp    dword ptr [edx]
        fld    dword ptr [eax + 4]
        fmul st(0), st(1)
        fstp    dword ptr [edx + 4]
        fld    dword ptr [eax + 8]
        mov    eax, dword ptr [ebp - 0x68]
        fmul st(0), st(1)
        shl    eax, 4
        add    eax, ecx
        fstp    dword ptr [edx + 8]
        fstp st(0)
        fld1    
        fdiv    dword ptr [eax + 0xc]
        fst    dword ptr [edx + 0x34]
        fld st(0)
        fmul    dword ptr [eax]
        fstp    dword ptr [edx + 0x28]
        fld    dword ptr [eax + 4]
        fmul st(0), st(1)
        fstp    dword ptr [edx + 0x2c]
        fld    dword ptr [eax + 8]
        mov    eax, dword ptr [ebp - 0x38]
        fmul st(0), st(1)
        shl    eax, 4
        add    eax, ecx
        fstp    dword ptr [edx + 0x30]
        fstp st(0)
        fld1    
        fdiv    dword ptr [eax + 0xc]
        fst    dword ptr [edx + 0x5c]
        fld st(0)
        fmul    dword ptr [eax]
        fstp    dword ptr [edx + 0x50]
        fld    dword ptr [eax + 4]
        fmul st(0), st(1)
        fstp    dword ptr [edx + 0x54]
        fld    dword ptr [eax + 8]
        fmul st(0), st(1)
        fstp    dword ptr [edx + 0x58]
        fstp st(0)
        fld    dword ptr [g_7da87c]
        fmul    dword ptr [esi]
        mov    edx, dword ptr [ebp - 0x10]
        mov    eax, dword ptr [ebp - 0xa4]
        mov    ecx, dword ptr [eax + edx*4]
        fadd    dword ptr [g_7da874]
        mov    dword ptr [esi + 0x10], ecx
        mov    ecx, dword ptr [ebp - 0x68]
        mov    edi, dword ptr [eax + ecx*4]
        fstp    dword ptr [esi]
        mov    dword ptr [esi + 0x38], edi
        fld    dword ptr [g_7da878]
        mov    edi, dword ptr [ebp + 0x18]
        fmul    dword ptr [esi + 4]
        mov    eax, dword ptr [eax + edi]
        mov    dword ptr [esi + 0x60], eax
        mov    eax, dword ptr [ebp - 0x9c]
        fadd    dword ptr [g_7da870]
        mov    edi, dword ptr [eax + edx*8]
        mov    dword ptr [esi + 0x18], edi
        lea    edi, [edx*8 + 4]
        fstp    dword ptr [esi + 4]
        mov    edx, dword ptr [eax + edx*8]
        fld    dword ptr [g_7da87c]
        mov    dword ptr [ebp - 0x38], edi
        fmul    dword ptr [esi + 0x28]
        mov    edi, dword ptr [eax + edi]
        mov    dword ptr [esi + 0x1c], edi
        mov    edi, dword ptr [eax + ecx*8]
        fadd    dword ptr [g_7da874]
        mov    dword ptr [esi + 0x40], edi
        mov    edi, dword ptr [eax + ecx*8 + 4]
        mov    dword ptr [esi + 0x44], edi
        fstp    dword ptr [esi + 0x28]
        mov    edi, dword ptr [ebp + 8]
        fld    dword ptr [g_7da878]
        mov    edi, dword ptr [eax + edi]
        fmul    dword ptr [esi + 0x2c]
        mov    dword ptr [esi + 0x20], edx
        mov    edx, dword ptr [ebp - 0x38]
        mov    edx, dword ptr [eax + edx]
        fadd    dword ptr [g_7da870]
        mov    dword ptr [esi + 0x68], edi
        mov    edi, dword ptr [ebp + 8]
        mov    edi, dword ptr [eax + edi + 4]
        fstp    dword ptr [esi + 0x2c]
        mov    dword ptr [esi + 0x24], edx
        fld    dword ptr [g_7da87c]
        mov    edx, dword ptr [eax + ecx*8]
        fmul    dword ptr [esi + 0x50]
        mov    ecx, dword ptr [eax + ecx*8 + 4]
        mov    dword ptr [esi + 0x6c], edi
        mov    dword ptr [esi + 0x48], edx
        fadd    dword ptr [g_7da874]
        fstp    dword ptr [esi + 0x50]
        fld    dword ptr [g_7da878]
        fmul    dword ptr [esi + 0x54]
        fadd    dword ptr [g_7da870]
        fstp    dword ptr [esi + 0x54]
        mov    dword ptr [esi + 0x4c], ecx
        mov    ecx, dword ptr [ebp + 8]
        mov    edx, dword ptr [eax + ecx]
        mov    eax, dword ptr [eax + ecx + 4]
        mov    dword ptr [esi + 0x74], eax
        test    byte ptr [ebx + 0x13], 1
        mov    dword ptr [esi + 0x70], edx
        je    L_ef56
        mov    ecx, dword ptr [g_7da660]
        mov    edx, dword ptr [ecx]
        mov    esi, dword ptr [ebx + 0xa4]
        xor    eax, eax
        mov    ax, word ptr [ebx + 0xa]
        lea    ecx, [eax + eax*4]
        mov    eax, dword ptr [ebp - 0x10]
        mov    dl, byte ptr [edx + eax]
        mov    byte ptr [esi + ecx*8 + 0x17], dl
        mov    ecx, dword ptr [g_7da660]
        mov    edx, dword ptr [ecx]
        mov    esi, dword ptr [ebp - 0xc]
        mov    edi, dword ptr [ebx + 0xa4]
        xor    ecx, ecx
        mov    cx, word ptr [ebx + 0xa]
        add    edx, esi
        mov    dl, byte ptr [edx + eax + 1]
        lea    ecx, [ecx + ecx*4]
        mov    byte ptr [edi + ecx*8 + 0x3f], dl
        mov    ecx, dword ptr [g_7da660]
        mov    edx, dword ptr [ecx]
        add    edx, esi
        mov    esi, dword ptr [ebx + 0xa4]
        mov    dl, byte ptr [edx + eax]
        xor    ecx, ecx
        mov    cx, word ptr [ebx + 0xa]
        lea    ecx, [ecx + ecx*4]
        mov    byte ptr [esi + ecx*8 + 0x67], dl
        jmp    L_ef56
L_ed69:
        mov    eax, dword ptr [g_7da680]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [g_7da608]
        mov    eax, dword ptr [edx]
        xor    esi, esi
        mov    si, word ptr [ebx + 0xa]
        mov    dword ptr [ebp - 0x9c], ecx
        mov    ecx, dword ptr [g_7da684]
        mov    edx, dword ptr [ecx]
        mov    ecx, dword ptr [ebp - 0xc]
        mov    dword ptr [ebp - 0xa4], eax
        mov    eax, dword ptr [ebp - 0x10]
        mov    dword ptr [ebp - 0x1c], edx
        lea    edx, [ecx + eax]
        lea    eax, [ecx + eax + 1]
        mov    ecx, dword ptr [ebx + 0x44]
        shl    esi, 5
        add    esi, ecx
        mov    dword ptr [ebp - 0x38], edx
        mov    dword ptr [ebp - 0x68], eax
        mov    dword ptr [ebp - 0x40], esi
        mov    ecx, dword ptr [ebp - 0x1c]
        fld1    
        mov    edi, dword ptr [ebp - 0x10]
        mov    eax, edi
        shl    eax, 4
        fdiv    dword ptr [eax + ecx + 0xc]
        add    eax, ecx
        mov    edx, dword ptr [ebp - 0x40]
        fst    dword ptr [edx + 0xc]
        fld st(0)
        fmul    dword ptr [eax]
        fstp    dword ptr [edx]
        fld    dword ptr [eax + 4]
        fmul st(0), st(1)
        fstp    dword ptr [edx + 4]
        fld    dword ptr [eax + 8]
        mov    eax, dword ptr [ebp - 0x68]
        fmul st(0), st(1)
        shl    eax, 4
        add    eax, ecx
        fstp    dword ptr [edx + 8]
        fstp st(0)
        fld1    
        fdiv    dword ptr [eax + 0xc]
        fst    dword ptr [edx + 0x2c]
        fld st(0)
        fmul    dword ptr [eax]
        fstp    dword ptr [edx + 0x20]
        fld    dword ptr [eax + 4]
        fmul st(0), st(1)
        fstp    dword ptr [edx + 0x24]
        fld    dword ptr [eax + 8]
        mov    eax, dword ptr [ebp - 0x38]
        fmul st(0), st(1)
        shl    eax, 4
        add    eax, ecx
        fstp    dword ptr [edx + 0x28]
        fstp st(0)
        fld1    
        fdiv    dword ptr [eax + 0xc]
        fst    dword ptr [edx + 0x4c]
        fld st(0)
        fmul    dword ptr [eax]
        fstp    dword ptr [edx + 0x40]
        fld    dword ptr [eax + 4]
        fmul st(0), st(1)
        fstp    dword ptr [edx + 0x44]
        fld    dword ptr [eax + 8]
        fmul st(0), st(1)
        fstp    dword ptr [edx + 0x48]
        fstp st(0)
        fld    dword ptr [g_7da87c]
        fmul    dword ptr [esi]
        mov    eax, dword ptr [ebp - 0xa4]
        mov    ecx, dword ptr [ebp - 0x10]
        mov    edx, dword ptr [eax + ecx*4]
        fadd    dword ptr [g_7da874]
        mov    dword ptr [esi + 0x10], edx
        mov    edx, dword ptr [ebp - 0x68]
        mov    edi, dword ptr [eax + edx*4]
        fstp    dword ptr [esi]
        mov    dword ptr [esi + 0x30], edi
        fld    dword ptr [g_7da878]
        mov    edi, dword ptr [ebp + 0x18]
        fmul    dword ptr [esi + 4]
        mov    eax, dword ptr [eax + edi]
        mov    dword ptr [esi + 0x50], eax
        mov    eax, dword ptr [ebp - 0x9c]
        fadd    dword ptr [g_7da870]
        mov    edi, dword ptr [eax + ecx*8]
        mov    ecx, dword ptr [eax + ecx*8 + 4]
        mov    dword ptr [esi + 0x1c], ecx
        fstp    dword ptr [esi + 4]
        mov    ecx, dword ptr [eax + edx*8]
        fld    dword ptr [g_7da87c]
        mov    edx, dword ptr [eax + edx*8 + 4]
        fmul    dword ptr [esi + 0x20]
        mov    dword ptr [esi + 0x38], ecx
        mov    ecx, dword ptr [ebp + 8]
        mov    dword ptr [esi + 0x3c], edx
        fadd    dword ptr [g_7da874]
        mov    edx, dword ptr [eax + ecx]
        mov    eax, dword ptr [eax + ecx + 4]
        mov    dword ptr [esi + 0x5c], eax
        fstp    dword ptr [esi + 0x20]
        mov    al, byte ptr [ebx + 0x13]
        test    al, 1
        fld    dword ptr [g_7da878]
        fmul    dword ptr [esi + 0x24]
        mov    dword ptr [esi + 0x18], edi
        mov    dword ptr [esi + 0x58], edx
        fadd    dword ptr [g_7da870]
        fstp    dword ptr [esi + 0x24]
        fld    dword ptr [g_7da87c]
        fmul    dword ptr [esi + 0x40]
        fadd    dword ptr [g_7da874]
        fstp    dword ptr [esi + 0x40]
        fld    dword ptr [g_7da878]
        fmul    dword ptr [esi + 0x44]
        fadd    dword ptr [g_7da870]
        fstp    dword ptr [esi + 0x44]
        je    L_ef56
        mov    ecx, dword ptr [g_7da660]
        mov    edx, dword ptr [ecx]
        mov    esi, dword ptr [ebx + 0x44]
        xor    eax, eax
        mov    ax, word ptr [ebx + 0xa]
        mov    ecx, eax
        mov    eax, dword ptr [ebp - 0x10]
        mov    dl, byte ptr [edx + eax]
        shl    ecx, 5
        mov    byte ptr [ecx + esi + 0x17], dl
        mov    ecx, dword ptr [g_7da660]
        mov    edx, dword ptr [ecx]
        mov    esi, dword ptr [ebp - 0xc]
        mov    edi, dword ptr [ebx + 0x44]
        xor    ecx, ecx
        mov    cx, word ptr [ebx + 0xa]
        add    edx, esi
        mov    dl, byte ptr [edx + eax + 1]
        shl    ecx, 5
        mov    byte ptr [ecx + edi + 0x37], dl
        mov    ecx, dword ptr [g_7da660]
        mov    edx, dword ptr [ecx]
        xor    ecx, ecx
        mov    cx, word ptr [ebx + 0xa]
        add    edx, esi
        mov    esi, dword ptr [ebx + 0x44]
        mov    dl, byte ptr [edx + eax]
        shl    ecx, 5
        mov    byte ptr [ecx + esi + 0x57], dl
L_ef56:
        mov    al, byte ptr [ebp + 0x17]
        test    al, al
        je    L_f009
        mov    ecx, dword ptr [ebx + 0x44]
        fld    dword ptr [ebp - 0xb4]
        xor    eax, eax
        mov    ax, word ptr [ebx + 0xa]
        xor    edx, edx
        shl    eax, 5
        fadd    dword ptr [eax + ecx + 0x18]
        lea    eax, [eax + ecx + 0x18]
        xor    ecx, ecx
        fstp    dword ptr [eax]
        mov    dx, word ptr [ebx + 0xa]
        mov    eax, dword ptr [ebx + 0x44]
        fld    dword ptr [ebp - 0xb0]
        shl    edx, 5
        fadd    dword ptr [edx + eax + 0x1c]
        lea    eax, [edx + eax + 0x1c]
        fstp    dword ptr [eax]
        mov    cx, word ptr [ebx + 0xa]
        mov    edx, dword ptr [ebx + 0x44]
        fld    dword ptr [ebp - 0xb4]
        shl    ecx, 5
        fadd    dword ptr [ecx + edx + 0x38]
        lea    eax, [ecx + edx + 0x38]
        xor    edx, edx
        fstp    dword ptr [eax]
        mov    ecx, dword ptr [ebx + 0x44]
        fld    dword ptr [ebp - 0xb0]
        xor    eax, eax
        mov    ax, word ptr [ebx + 0xa]
        shl    eax, 5
        fadd    dword ptr [eax + ecx + 0x3c]
        lea    eax, [eax + ecx + 0x3c]
        xor    ecx, ecx
        fstp    dword ptr [eax]
        mov    dx, word ptr [ebx + 0xa]
        mov    eax, dword ptr [ebx + 0x44]
        fld    dword ptr [ebp - 0xb4]
        shl    edx, 5
        fadd    dword ptr [edx + eax + 0x58]
        lea    eax, [edx + eax + 0x58]
        fstp    dword ptr [eax]
        mov    cx, word ptr [ebx + 0xa]
        mov    edx, dword ptr [ebx + 0x44]
        fld    dword ptr [ebp - 0xb0]
        shl    ecx, 5
        fadd    dword ptr [ecx + edx + 0x5c]
        lea    eax, [ecx + edx + 0x5c]
        fstp    dword ptr [eax]
L_f009:
        mov    ecx, dword ptr [ebx + 0x50]
        mov    dx, word ptr [ebx + 0xa]
        xor    eax, eax
        mov    ax, word ptr [ebx + 0x54]
        mov    word ptr [ecx + eax*2], dx
        mov    ax, word ptr [ebx + 0xa]
        mov    edx, dword ptr [ebx + 0x50]
        xor    ecx, ecx
        mov    cx, word ptr [ebx + 0x54]
        inc    ax
        mov    word ptr [edx + ecx*2 + 2], ax
        mov    ax, word ptr [ebx + 0xa]
        mov    edx, dword ptr [ebx + 0x50]
        xor    ecx, ecx
        mov    cx, word ptr [ebx + 0x54]
        add    ax, 2
        mov    word ptr [edx + ecx*2 + 4], ax
        test    byte ptr [ebx + 0x13], 2
        je    L_f124
        mov    ecx, dword ptr [ebx + 0x44]
        xor    eax, eax
        mov    ax, word ptr [ebx + 0xa]
        xor    edx, edx
        mov    esi, dword ptr [ebp - 0x10]
        shl    eax, 5
        lea    eax, [eax + ecx + 0x14]
        and    dword ptr [eax], 0xff000000
        mov    dx, word ptr [ebx + 0xa]
        mov    eax, dword ptr [ebx + 0x44]
        shl    edx, 5
        lea    ecx, [edx + eax + 0x14]
        xor    edx, edx
        mov    edx, dword ptr [g_7da668]
        mov    eax, dword ptr [edx]
        mov    edi, dword ptr [ecx]
        xor    edx, edx
        mov    dl, byte ptr [eax + esi]
        mov    eax, edx
        shl    edx, 8
        add    edx, eax
        shl    edx, 8
        add    edx, eax
        add    edi, edx
        mov    dword ptr [ecx], edi
        mov    ecx, dword ptr [ebx + 0x44]
        xor    eax, eax
        mov    ax, word ptr [ebx + 0xa]
        xor    edx, edx
        mov    edi, dword ptr [ebp - 0xc]
        shl    eax, 5
        lea    eax, [eax + ecx + 0x34]
        and    dword ptr [eax], 0xff000000
        mov    dx, word ptr [ebx + 0xa]
        mov    eax, dword ptr [ebx + 0x44]
        shl    edx, 5
        lea    ecx, [edx + eax + 0x34]
        mov    edx, dword ptr [g_7da668]
        mov    eax, dword ptr [edx]
        xor    edx, edx
        add    eax, edi
        mov    dl, byte ptr [eax + esi + 1]
        mov    eax, edx
        shl    edx, 8
        add    edx, eax
        shl    edx, 8
        add    edx, eax
        add    dword ptr [ecx], edx
        mov    ecx, dword ptr [ebx + 0x44]
        xor    eax, eax
        mov    ax, word ptr [ebx + 0xa]
        xor    edx, edx
        shl    eax, 5
        lea    eax, [eax + ecx + 0x54]
        and    dword ptr [eax], 0xff000000
        mov    dx, word ptr [ebx + 0xa]
        mov    eax, dword ptr [ebx + 0x44]
        shl    edx, 5
        lea    ecx, [edx + eax + 0x54]
        mov    edx, dword ptr [g_7da668]
        mov    eax, dword ptr [edx]
        xor    edx, edx
        add    eax, edi
        mov    dl, byte ptr [eax + esi]
        mov    eax, edx
        shl    edx, 8
        add    edx, eax
        shl    edx, 8
        add    edx, eax
        add    dword ptr [ecx], edx
        jmp    L_f127
L_f124:
        mov    edi, dword ptr [ebp - 0xc]
L_f127:
        mov    esi, dword ptr [ebp + 0x18]
        mov    edx, dword ptr [ebp + 8]
        mov    eax, 3
        add    word ptr [ebx + 0xa], ax
        add    word ptr [ebx + 0x54], ax
        mov    eax, dword ptr [ebp - 0x2c]
        inc    edi
        add    esi, 4
        add    edx, 8
        dec    eax
        cmp    edi, eax
        mov    dword ptr [ebp - 0xc], edi
        mov    dword ptr [ebp + 0x18], esi
        mov    dword ptr [ebp + 8], edx
        jl    L_eb0b
L_f156:
        mov    ecx, dword ptr [ebp - 0x2c]
        mov    esi, dword ptr [ebp - 0x10]
        mov    eax, dword ptr [ebp - 0x20]
        add    esi, ecx
        mov    ecx, dword ptr [ebp - 0x7c]
        inc    eax
        cmp    eax, ecx
        mov    dword ptr [ebp - 0x10], esi
        mov    dword ptr [ebp - 0x20], eax
        jl    L_eaca
L_f173:
        cmp    dword ptr [g_7b2210], 1
        mov    edx, dword ptr [ebp - 8]
        jne    L_f365
        test    byte ptr [g_7da86c], 2
        jle    L_f25c
        mov    eax, dword ptr [edx + 0x28]
        test    ah, 0x3c
        je    L_f25c
        xor    esi, esi
        mov    si, word ptr [edx + 0xa]
        test    esi, esi
        jle    L_f246
        mov    ecx, dword ptr [edx + 0xa4]
        add    ecx, 0x20
        mov    edi, esi
        mov    ebx, 0xffffff
L_f1ba:
        fld    dword ptr [ecx - 8]
        fmul    dword ptr [edx + 0x9c]
        fadd    dword ptr [edx + 0x94]
        fadd    dword ptr [ebp - 0xc4]
        fstp    dword ptr [ecx]
        fld    dword ptr [ecx - 4]
        fmul    dword ptr [edx + 0xa0]
        fadd    dword ptr [edx + 0x98]
        fadd    dword ptr [ebp - 0xc0]
        fstp    dword ptr [ecx + 4]
        fld    dword ptr [ecx - 0x14]
        fcomp    dword ptr [edx + 0x8c]
        fnstsw  ax
        test    ah, 1
        je    L_f1fe
        and    dword ptr [ecx - 0x10], ebx
        jmp    L_f23c
L_f1fe:
        fld    dword ptr [ecx - 0x14]
        fcomp    dword ptr [edx + 0x88]
        fnstsw  ax
        test    ah, 1
        je    L_f23c
        fld    dword ptr [ecx - 0x14]
        fsub    dword ptr [edx + 0x8c]
        fmul    dword ptr [edx + 0x90]
        fsub    dword ptr [g_76d070]
        fadd    dword ptr [g_76dd60]
        fstp    dword ptr [ebp + 0x14]
        mov    eax, dword ptr [ebp + 0x14]
        and    eax, 0xffff
        shl    eax, 0x18
        or    eax, ebx
        and    dword ptr [ecx - 0x10], eax
L_f23c:
        add    ecx, 0x28
        dec    edi
        jne    L_f1ba
L_f246:
        mov    al, byte ptr [ebp + 0x1c]
        test    al, al
        jne    L_f387
        mov    eax, dword ptr [ebp + 0x10]
        add    dword ptr [eax + 4], esi
        jmp    L_f37e
L_f25c:
        mov    edx, dword ptr [ebp - 8]
        mov    esi, dword ptr [edx + 0x44]
        xor    ecx, ecx
        mov    cx, word ptr [edx + 0xa]
        mov    dword ptr [ebp + 0x14], 0
        shl    ecx, 5
        lea    edi, [esi + ecx]
        mov    eax, ecx
        shr    ecx, 2
        rep movsd
        mov    ecx, eax
        and    ecx, 3
        rep movsb
        xor    esi, esi
        mov    si, word ptr [edx + 0xa]
        test    esi, esi
        jle    L_f343
        mov    eax, dword ptr [edx + 0x44]
        mov    ecx, esi
        shl    ecx, 5
        lea    ecx, [ecx + eax + 0xc]
        lea    edi, [eax + 0x1c]
        mov    ebx, esi
L_f2a2:
        fld    dword ptr [edi - 4]
        fmul    dword ptr [edx + 0x9c]
        fadd    dword ptr [edx + 0x94]
        fadd    dword ptr [ebp - 0xc4]
        fstp    dword ptr [ecx + 0xc]
        fld    dword ptr [edx + 0xa0]
        fmul    dword ptr [edi]
        fadd    dword ptr [edx + 0x98]
        fadd    dword ptr [ebp - 0xc0]
        fstp    dword ptr [ecx + 0x10]
        fld    dword ptr [ecx]
        fcomp    dword ptr [edx + 0x8c]
        fnstsw  ax
        test    ah, 1
        je    L_f2e9
        and    dword ptr [ecx + 4], 0xffffff
        jmp    L_f32f
L_f2e9:
        fld    dword ptr [ecx]
        mov    eax, dword ptr [ebp + 0x14]
        fcomp    dword ptr [edx + 0x88]
        inc    eax
        mov    dword ptr [ebp + 0x14], eax
        fnstsw  ax
        test    ah, 1
        je    L_f32f
        fld    dword ptr [ecx]
        fsub    dword ptr [edx + 0x8c]
        fmul    dword ptr [edx + 0x90]
        fsub    dword ptr [g_76d070]
        fadd    dword ptr [g_76dd60]
        fstp    dword ptr [ebp + 8]
        mov    eax, dword ptr [ebp + 8]
        and    eax, 0xffff
        shl    eax, 0x18
        or    eax, 0xffffff
        and    dword ptr [ecx + 4], eax
L_f32f:
        add    edi, 0x20
        add    ecx, 0x20
        dec    ebx
        jne    L_f2a2
        cmp    word ptr [ebp + 0x14], 0
        jne    L_f349
L_f343:
        mov    byte ptr [edx + 0x64], 0
        jmp    L_f34d
L_f349:
        mov    byte ptr [edx + 0x64], 1
L_f34d:
        mov    al, byte ptr [ebp + 0x1c]
        test    al, al
        jne    L_f387
        mov    eax, dword ptr [ebp + 0x10]
        mov    edx, dword ptr [eax]
        lea    ecx, [esi + esi]
        add    edx, ecx
        mov    dword ptr [eax], edx
        mov    edx, dword ptr [ebp - 8]
        jmp    L_f37b
L_f365:
        mov    al, byte ptr [ebp + 0x1c]
        test    al, al
        jne    L_f387
        mov    eax, dword ptr [ebp + 0x10]
        mov    esi, dword ptr [eax]
        xor    ecx, ecx
        mov    cx, word ptr [edx + 0xa]
        add    esi, ecx
        mov    dword ptr [eax], esi
L_f37b:
        mov    eax, dword ptr [ebp + 0x10]
L_f37e:
        xor    ecx, ecx
        mov    cx, word ptr [edx + 0x54]
        add    dword ptr [eax + 0xc], ecx
L_f387:
        mov    eax, dword ptr [ebp - 8]
        cmp    word ptr [eax + 0xa], 0
        pop    edi
        setne    dl
        pop    esi
        mov    byte ptr [eax + 0x10], dl
        mov    eax, dword ptr [ebp - 0xac]
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    0x18
        // jump-table data @ 0x0042F3A4 (6 relocated pointers)
        __emit 0xBC
        __emit 0xCF
        __emit 0x42
        __emit 0x00
        __emit 0xEB
        __emit 0xCF
        __emit 0x42
        __emit 0x00
        __emit 0xF3
        __emit 0xCF
        __emit 0x42
        __emit 0x00
        __emit 0xFF
        __emit 0xCF
        __emit 0x42
        __emit 0x00
        __emit 0x05
        __emit 0xD0
        __emit 0x42
        __emit 0x00
        __emit 0x0D
        __emit 0xD0
        __emit 0x42
        __emit 0x00
        // jump-table data @ 0x0042F3BC (6 relocated pointers)
        __emit 0x61
        __emit 0xD0
        __emit 0x42
        __emit 0x00
        __emit 0x89
        __emit 0xD0
        __emit 0x42
        __emit 0x00
        __emit 0x91
        __emit 0xD0
        __emit 0x42
        __emit 0x00
        __emit 0x9D
        __emit 0xD0
        __emit 0x42
        __emit 0x00
        __emit 0xA3
        __emit 0xD0
        __emit 0x42
        __emit 0x00
        __emit 0xAB
        __emit 0xD0
        __emit 0x42
        __emit 0x00
        // jump-table data @ 0x0042F3D4 (6 relocated pointers)
        __emit 0x8C
        __emit 0xDD
        __emit 0x42
        __emit 0x00
        __emit 0xDF
        __emit 0xDD
        __emit 0x42
        __emit 0x00
        __emit 0xEB
        __emit 0xDD
        __emit 0x42
        __emit 0x00
        __emit 0x17
        __emit 0xDE
        __emit 0x42
        __emit 0x00
        __emit 0x22
        __emit 0xDE
        __emit 0x42
        __emit 0x00
        __emit 0x2D
        __emit 0xDE
        __emit 0x42
        __emit 0x00
        // jump-table data @ 0x0042F3EC (6 relocated pointers)
        __emit 0xC9
        __emit 0xDD
        __emit 0x42
        __emit 0x00
        __emit 0x0D
        __emit 0xE0
        __emit 0x42
        __emit 0x00
        __emit 0x19
        __emit 0xE0
        __emit 0x42
        __emit 0x00
        __emit 0x45
        __emit 0xE0
        __emit 0x42
        __emit 0x00
        __emit 0x50
        __emit 0xE0
        __emit 0x42
        __emit 0x00
        __emit 0x5B
        __emit 0xE0
        __emit 0x42
        __emit 0x00
    }
}