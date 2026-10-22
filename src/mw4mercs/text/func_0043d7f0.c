/*
 * FUN_0043d7f0 (2276 B) — MLR light/material renderer. Reallocates several
 * internal buffers, builds color/normal arrays with FPU, dispatches through
 * vtables. Heavy FPU + extern-global usage.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b9590;
extern void *g_007da724;
extern int g_007b958c;
extern double g_0076e3e8;
extern void *g_0076b2ec;
extern int g_007da5f0;
extern void *g_007b9838;
extern int g_007b220c;
extern char g_007b2314[];
extern char g_007b2284[];
extern float g_0076d064;
extern float g_0076d070;
extern float g_0076e4dc;

extern void FUN_006f4950(void);
extern void *FUN_004084d0(unsigned int);
extern void FUN_00487830(void);
extern void FUN_006f49a0(void);
extern void FUN_0075db86(void);
extern void FUN_0075db4a(void);
extern void FUN_00439e40(void);
extern void FUN_004084e0(void *);
extern void FUN_00406c90(void);
extern void FUN_0040ccd0(void);
extern void FUN_0040c410(void);
extern void FUN_0047f1b0(void);
extern void FUN_0041c540(void);
extern void FUN_0040c2e0(void);
extern void FUN_00487ce0(void);

__declspec(naked) void FUN_0043d7f0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x88
        mov     eax, dword ptr [g_007b9590]
        push    ebx
        push    esi
        push    edi
        push    eax
        call    FUN_006f4950
        push    0x20
        call    FUN_004084d0
        xor     edi, edi
        add     esp, 0x4
        cmp     eax, edi
        jz      L_d82c
        mov     ecx, dword ptr [g_007da724]
        push    ecx
        push    0x14
        mov     ecx, eax
        call    FUN_00487830
        mov     dword ptr [ebp + -0x28], eax
        jmp     L_d82f
L_d82c:
        mov     dword ptr [ebp + -0x28], edi
L_d82f:
        call    FUN_006f49a0
        mov     edx, dword ptr [g_007b958c]
        push    edx
        call    FUN_006f4950
        fld     qword ptr [g_0076e3e8]
        mov     esi, dword ptr [ebp + 0x8]
        fild    dword ptr [esi + 0x4]
        call    FUN_0075db86
        fmul    dword ptr [esi + 0x10]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        call    dword ptr [g_0076b2ec]
        add     esp, 0x8
        call    FUN_0075db4a
        lea     ecx, [eax + eax*0x2]
        cmp     ecx, 0x100
        mov     dword ptr [ebp + -0x20], eax
        jl      L_d87e
        mov     eax, 0x55
        mov     dword ptr [ebp + -0x20], eax
L_d87e:
        lea     edx, [eax + eax*0x2]
        mov     dword ptr [ebp + -0x24], edi
        mov     dword ptr [ebp + -0x18], edx
L_d887:
        xor     esi, esi
        push    0x9c
        mov     dword ptr [g_007da5f0], esi
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, esi
        jz      L_d8b3
        mov     ecx, dword ptr [g_007b9838]
        push    ecx
        mov     ecx, eax
        call    FUN_00439e40
        mov     dword ptr [ebp + -0x10], eax
        jmp     L_d8b6
L_d8b3:
        mov     dword ptr [ebp + -0x10], esi
L_d8b6:
        mov     edx, dword ptr [ebp + -0x10]
        mov     ebx, dword ptr [edx + 0xc]
        mov     edi, dword ptr [ebx + 0x14]
        mov     esi, dword ptr [ebp + -0x18]
        cmp     esi, edi
        mov     dword ptr [ebp + -0x8], ebx
        jz      L_d963
        test    esi, esi
        jbe     L_d94d
        lea     eax, [esi + esi*0x2]
        shl     eax, 0x2
        push    eax
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_d8ef
        lea     ecx, [esi + -0x1]
        mov     dword ptr [ebp + -0x1c], ecx
        mov     dword ptr [ebp + -0x4], eax
        jmp     L_d8f6
L_d8ef:
        mov     dword ptr [ebp + -0x4], 0x0
L_d8f6:
        mov     ecx, dword ptr [ebx + 0x10]
        test    ecx, ecx
        mov     dword ptr [ebp + -0x14], ecx
        jz      L_d945
        cmp     esi, edi
        mov     eax, esi
        jc      L_d908
        mov     eax, edi
L_d908:
        mov     edx, eax
        dec     eax
        test    edx, edx
        jz      L_d93c
        mov     ecx, dword ptr [ebp + -0x4]
        mov     ebx, dword ptr [ebp + -0x14]
        lea     edx, [eax + eax*0x2]
        lea     edi, [ecx + edx*0x4]
        sub     ebx, ecx
        lea     esi, [eax + 0x1]
L_d920:
        lea     eax, [ebx + edi*0x1]
        push    eax
        mov     ecx, edi
        call    FUN_0040ccd0
        dec     esi
        sub     edi, 0xc
        test    esi, esi
        ja      L_d920
        mov     ecx, dword ptr [ebp + -0x14]
        mov     esi, dword ptr [ebp + -0x18]
        mov     ebx, dword ptr [ebp + -0x8]
L_d93c:
        push    ecx
        call    FUN_004084e0
        add     esp, 0x4
L_d945:
        mov     ecx, dword ptr [ebp + -0x4]
        mov     dword ptr [ebx + 0x10], ecx
        jmp     L_d960
L_d94d:
        mov     edx, dword ptr [ebx + 0x10]
        push    edx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [ebx + 0x10], 0x0
L_d960:
        mov     dword ptr [ebx + 0x14], esi
L_d963:
        cmp     esi, dword ptr [ebx + 0x4]
        jz      L_d9c2
        test    esi, esi
        jbe     L_d9ae
        push    esi
        call    FUN_004084d0
        mov     edi, dword ptr [ebx]
        add     esp, 0x4
        test    edi, edi
        mov     dword ptr [ebp + -0x4], eax
        jz      L_d9a7
        mov     eax, dword ptr [ebx + 0x4]
        cmp     esi, eax
        jnc     L_d987
        mov     eax, esi
L_d987:
        mov     ecx, eax
        dec     eax
        test    ecx, ecx
        jz      L_d99e
        mov     ecx, dword ptr [ebp + -0x4]
L_d991:
        mov     dl, byte ptr [edi + eax*0x1]
        mov     byte ptr [eax + ecx*0x1], dl
        mov     edx, eax
        dec     eax
        test    edx, edx
        jnz     L_d991
L_d99e:
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
L_d9a7:
        mov     eax, dword ptr [ebp + -0x4]
        mov     dword ptr [ebx], eax
        jmp     L_d9bf
L_d9ae:
        mov     ecx, dword ptr [ebx]
        push    ecx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [ebx], 0x0
L_d9bf:
        mov     dword ptr [ebx + 0x4], esi
L_d9c2:
        mov     edi, dword ptr [ebp + -0x20]
        mov     eax, dword ptr [ebx + 0x1c]
        lea     edi, [edi + edi*0x2]
        shl     edi, 0x1
        cmp     edi, eax
        jz      L_da6e
        test    edi, edi
        jbe     L_da58
        lea     edx, [edi*0x8 + 0x0]
        push    edx
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        mov     dword ptr [ebp + -0x4], eax
        jz      L_da06
        push    0x423b70
        push    edi
        push    0x8
        push    eax
        call    FUN_00406c90
        mov     ecx, dword ptr [ebp + -0x4]
        mov     dword ptr [ebp + -0x4], ecx
        jmp     L_da0d
L_da06:
        mov     dword ptr [ebp + -0x4], 0x0
L_da0d:
        mov     ecx, dword ptr [ebx + 0x18]
        test    ecx, ecx
        jz      L_da50
        mov     edx, dword ptr [ebx + 0x1c]
        cmp     edi, edx
        jnc     L_da1d
        mov     edx, edi
L_da1d:
        mov     eax, edx
        dec     edx
        test    eax, eax
        jz      L_da44
        mov     ebx, dword ptr [ebp + -0x4]
        lea     eax, [ebx + edx*0x8]
        sub     ecx, ebx
        inc     edx
L_da2d:
        mov     ebx, dword ptr [ecx + eax*0x1]
        mov     dword ptr [eax], ebx
        mov     ebx, dword ptr [ecx + eax*0x1 + 0x4]
        mov     dword ptr [eax + 0x4], ebx
        dec     edx
        sub     eax, 0x8
        test    edx, edx
        ja      L_da2d
        mov     ebx, dword ptr [ebp + -0x8]
L_da44:
        mov     eax, dword ptr [ebx + 0x18]
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_da50:
        mov     ecx, dword ptr [ebp + -0x4]
        mov     dword ptr [ebx + 0x18], ecx
        jmp     L_da6b
L_da58:
        mov     edx, dword ptr [ebx + 0x18]
        push    edx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [ebx + 0x18], 0x0
L_da6b:
        mov     dword ptr [ebx + 0x1c], edi
L_da6e:
        cmp     esi, dword ptr [ebx + 0x24]
        jz      L_dae0
        test    esi, esi
        jbe     L_daca
        lea     eax, [esi*0x4 + 0x0]
        push    eax
        call    FUN_004084d0
        mov     edx, dword ptr [ebx + 0x20]
        add     esp, 0x4
        test    edx, edx
        mov     edi, eax
        mov     dword ptr [ebp + -0xc], edi
        jz      L_dac5
        mov     ecx, dword ptr [ebx + 0x24]
        cmp     esi, ecx
        jnc     L_da9c
        mov     ecx, esi
L_da9c:
        mov     eax, ecx
        dec     ecx
        test    eax, eax
        jz      L_dab9
        lea     eax, [edi + ecx*0x4]
        sub     edx, edi
        inc     ecx
L_daa9:
        mov     edi, dword ptr [edx + eax*0x1]
        mov     dword ptr [eax], edi
        dec     ecx
        sub     eax, 0x4
        test    ecx, ecx
        ja      L_daa9
        mov     edi, dword ptr [ebp + -0xc]
L_dab9:
        mov     eax, dword ptr [ebx + 0x20]
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_dac5:
        mov     dword ptr [ebx + 0x20], edi
        jmp     L_dadd
L_daca:
        mov     ecx, dword ptr [ebx + 0x20]
        push    ecx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [ebx + 0x20], 0x0
L_dadd:
        mov     dword ptr [ebx + 0x24], esi
L_dae0:
        mov     eax, dword ptr [ebx + 0x2c]
        cmp     esi, eax
        mov     dword ptr [ebp + -0xc], eax
        jz      L_db96
        test    esi, esi
        jbe     L_db80
        lea     edx, [esi + esi*0x2]
        shl     edx, 0x2
        push    edx
        call    FUN_004084d0
        mov     edi, eax
        add     esp, 0x4
        test    edi, edi
        jz      L_db1e
        push    0x435c30
        push    esi
        push    0xc
        push    edi
        call    FUN_00406c90
        mov     dword ptr [ebp + -0x4], edi
        jmp     L_db25
L_db1e:
        mov     dword ptr [ebp + -0x4], 0x0
L_db25:
        mov     eax, dword ptr [ebx + 0x28]
        test    eax, eax
        jz      L_db78
        mov     eax, dword ptr [ebp + -0xc]
        cmp     esi, eax
        jnc     L_db35
        mov     eax, esi
L_db35:
        mov     ecx, eax
        dec     eax
        test    ecx, ecx
        jz      L_db63
        mov     ecx, dword ptr [ebp + -0x4]
        lea     edx, [eax + eax*0x2]
        lea     edi, [ecx + edx*0x4]
        mov     edx, dword ptr [ebp + -0x8]
        mov     ebx, dword ptr [edx + 0x28]
        sub     ebx, ecx
        lea     esi, [eax + 0x1]
L_db50:
        lea     eax, [ebx + edi*0x1]
        push    eax
        mov     ecx, edi
        call    FUN_0040c410
        dec     esi
        sub     edi, 0xc
        test    esi, esi
        ja      L_db50
L_db63:
        mov     ecx, dword ptr [ebp + -0x8]
        mov     eax, dword ptr [ecx + 0x28]
        push    eax
        call    FUN_004084e0
        mov     esi, dword ptr [ebp + -0x18]
        mov     ebx, dword ptr [ebp + -0x8]
        add     esp, 0x4
L_db78:
        mov     edx, dword ptr [ebp + -0x4]
        mov     dword ptr [ebx + 0x28], edx
        jmp     L_db93
L_db80:
        mov     eax, dword ptr [ebx + 0x28]
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [ebx + 0x28], 0x0
L_db93:
        mov     dword ptr [ebx + 0x2c], esi
L_db96:
        mov     eax, dword ptr [ebp + -0x24]
        lea     edx, [eax + eax*0x2]
        lea     ecx, [ebp + 0xffffff7c]
        lea     edx, [edx*0x4 + g_007b2314]
        mov     edi, 0x3
L_dbae:
        mov     eax, dword ptr [edx]
        lea     eax, [eax + eax*0x2]
        shl     eax, 0x2
        mov     ebx, dword ptr [eax + g_007b2284]
        mov     dword ptr [ecx + -0x4], ebx
        mov     ebx, dword ptr [eax + g_007b2284 + 0x4]
        mov     eax, dword ptr [eax + g_007b2284 + 0x8]
        mov     dword ptr [ecx], ebx
        mov     dword ptr [ecx + 0x4], eax
        add     edx, 0x4
        add     ecx, 0xc
        dec     edi
        jnz     L_dbae
        mov     edi, dword ptr [ebp + 0x8]
        mov     ecx, dword ptr [edi + 0xc]
        mov     edx, dword ptr [ebp + -0x20]
        mov     eax, dword ptr [edi + 0x4]
        push    ecx
        push    edx
        push    eax
        lea     ecx, [ebp + -0x70]
        push    ecx
        mov     ecx, dword ptr [ebp + -0x8]
        lea     edx, [ebp + -0x7c]
        push    edx
        mov     edx, dword ptr [ecx + 0x10]
        lea     eax, [ebp + 0xffffff78]
        lea     ebx, [ecx + 0x10]
        push    eax
        push    edx
        call    FUN_0047f1b0
        mov     edx, dword ptr [ebp + -0x20]
        mov     ecx, dword ptr [ebp + -0x10]
        mov     eax, dword ptr [ecx]
        add     esp, 0x1c
        push    0x1
        push    edx
        push    0x0
        call    dword ptr [eax + 0xc]
        cmp     byte ptr [edi + 0x8], 0x1
        jnz     L_dd39
        lea     eax, [esi + esi*0x2]
        shl     eax, 0x2
        mov     edi, 0x1
        push    eax
        mov     dword ptr [ebp + -0x4], edi
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_dc47
        dec     esi
        mov     dword ptr [ebp + -0x1c], esi
        mov     dword ptr [ebp + -0x14], eax
        jmp     L_dc4e
L_dc47:
        mov     dword ptr [ebp + -0x14], 0x0
L_dc4e:
        mov     ebx, dword ptr [ebx]
        mov     ecx, dword ptr [ebp + -0x14]
        push    ebx
        call    FUN_0040c410
        mov     ecx, dword ptr [ebp + -0x8]
        mov     eax, dword ptr [ecx]
        mov     dword ptr [ebp + -0x1c], eax
        mov     byte ptr [eax], 0x0
        mov     eax, dword ptr [ebp + -0x18]
        mov     esi, 0x1
        cmp     eax, esi
        mov     dword ptr [ebp + -0xc], esi
        jle     L_dce3
        mov     edx, dword ptr [ebp + -0x14]
        add     ebx, 0xc
        add     edx, 0xc
        mov     dword ptr [ebp + -0x4], ebx
        mov     dword ptr [ebp + -0x30], edx
L_dc82:
        xor     ebx, ebx
        test    edi, edi
        jle     L_dcad
        mov     esi, dword ptr [ebp + -0x14]
L_dc8b:
        mov     eax, dword ptr [g_007b220c]
        mov     ecx, dword ptr [ebp + -0x4]
        push    eax
        push    esi
        push    ecx
        call    FUN_0041c540
        add     esp, 0xc
        test    al, al
        jnz     L_dcaa
        inc     ebx
        add     esi, 0xc
        cmp     ebx, edi
        jl      L_dc8b
L_dcaa:
        mov     esi, dword ptr [ebp + -0xc]
L_dcad:
        cmp     ebx, edi
        jnz     L_dcc6
        mov     eax, dword ptr [ebp + -0x30]
        mov     edx, dword ptr [ebp + -0x4]
        mov     ecx, eax
        add     eax, 0xc
        push    edx
        inc     edi
        mov     dword ptr [ebp + -0x30], eax
        call    FUN_0040c410
L_dcc6:
        mov     eax, dword ptr [ebp + -0x1c]
        mov     ecx, dword ptr [ebp + -0x4]
        mov     byte ptr [eax + esi*0x1], bl
        mov     eax, dword ptr [ebp + -0x18]
        inc     esi
        add     ecx, 0xc
        cmp     esi, eax
        mov     dword ptr [ebp + -0xc], esi
        mov     dword ptr [ebp + -0x4], ecx
        jl      L_dc82
        mov     dword ptr [ebp + -0x4], edi
L_dce3:
        mov     ecx, dword ptr [ebp + -0x8]
        lea     esi, [ecx + 0x10]
        push    edi
        mov     ecx, esi
        call    FUN_0040c2e0
        mov     eax, dword ptr [esi + 0x4]
        test    eax, eax
        jbe     L_dd19
        mov     ebx, dword ptr [esi]
        mov     esi, dword ptr [ebp + -0x14]
        sub     esi, ebx
        mov     dword ptr [ebp + -0xc], eax
L_dd02:
        lea     edx, [esi + ebx*0x1]
        push    edx
        mov     ecx, ebx
        call    FUN_0040c410
        mov     eax, dword ptr [ebp + -0xc]
        add     ebx, 0xc
        dec     eax
        mov     dword ptr [ebp + -0xc], eax
        jnz     L_dd02
L_dd19:
        mov     edx, dword ptr [ebp + -0x8]
        mov     ecx, dword ptr [ebp + -0x10]
        mov     eax, dword ptr [ecx]
        lea     ebx, [edx + 0x10]
        mov     edx, dword ptr [ebx]
        push    edi
        push    edx
        call    dword ptr [eax + 0x24]
        mov     eax, dword ptr [ebp + -0x14]
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
        jmp     L_dd63
L_dd39:
        mov     edi, esi
        xor     eax, eax
        test    esi, esi
        mov     dword ptr [ebp + -0x4], edi
        jle     L_dd51
        mov     ecx, dword ptr [ebp + -0x8]
        mov     ecx, dword ptr [ecx]
L_dd49:
        mov     byte ptr [ecx + eax*0x1], al
        inc     eax
        cmp     eax, esi
        jl      L_dd49
L_dd51:
        mov     eax, dword ptr [ebp + -0x8]
        mov     ecx, dword ptr [ebp + -0x10]
        mov     edx, dword ptr [ecx]
        lea     ebx, [eax + 0x10]
        mov     eax, dword ptr [ebx]
        push    esi
        push    eax
        call    dword ptr [edx + 0x24]
L_dd63:
        mov     eax, dword ptr [ebp + -0x18]
        mov     ecx, dword ptr [ebp + -0x8]
        mov     esi, dword ptr [ebp + -0x10]
        mov     edx, dword ptr [esi]
        push    eax
        mov     eax, dword ptr [ecx]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x88]
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x94]
        mov     esi, dword ptr [ebp + 0xc]
        test    esi, esi
        jnz     L_ddb4
        lea     ecx, [edi + edi*0x1]
        test    ecx, ecx
        jle     L_deab
        mov     eax, dword ptr [ebp + -0x8]
        mov     eax, dword ptr [eax + 0x18]
        mov     dword ptr [ebp + -0x54], esi
        mov     dword ptr [ebp + -0x50], esi
        mov     edx, esi
L_dda4:
        mov     dword ptr [eax], edx
        mov     dword ptr [eax + 0x4], esi
        add     eax, 0x8
        dec     ecx
        jnz     L_dda4
        jmp     L_deab
L_ddb4:
        mov     ecx, dword ptr [esi + 0x4]
        and     ecx, 0xffffc7ff
        or      ecx, 0x400
        mov     dword ptr [esi + 0x4], ecx
        or      dword ptr [esi + 0x10], 0x3c00
        mov     ecx, dword ptr [ebp + -0x10]
        mov     edx, dword ptr [ecx]
        push    0x0
        push    esi
        call    dword ptr [edx + 0x14]
        mov     edx, dword ptr [esi + 0x4]
        mov     ecx, dword ptr [esi + 0x10]
        mov     eax, dword ptr [esi]
        and     edx, 0xffffc3ff
        or      ecx, 0x3c00
        test    eax, 0x3fff
        mov     dword ptr [esi + 0x4], edx
        mov     dword ptr [esi + 0x10], ecx
        jbe     L_de7f
        test    edi, edi
        jle     L_deab
        mov     eax, dword ptr [ebp + -0x8]
        mov     edx, dword ptr [eax + 0x18]
        mov     eax, dword ptr [ebx]
        mov     ecx, edx
        lea     edx, [edx + edi*0x8]
L_de12:
        fld     dword ptr [eax]
        add     ecx, 0x8
        fadd    dword ptr [g_0076d064]
        add     edx, 0x8
        add     eax, 0xc
        dec     edi
        fmul    dword ptr [g_0076d070]
        fstp    dword ptr [ebp + -0x38]
        fld     dword ptr [eax + -0x8]
        mov     esi, dword ptr [ebp + -0x38]
        fadd    dword ptr [g_0076d064]
        mov     dword ptr [ecx + -0x8], esi
        fmul    dword ptr [g_0076d070]
        fstp    dword ptr [ebp + -0x34]
        fld     dword ptr [eax + -0xc]
        mov     esi, dword ptr [ebp + -0x34]
        fadd    dword ptr [g_0076d064]
        mov     dword ptr [ecx + -0x4], esi
        fmul    dword ptr [g_0076d070]
        fstp    dword ptr [ebp + -0x40]
        fld     dword ptr [eax + -0x4]
        mov     esi, dword ptr [ebp + -0x40]
        fadd    dword ptr [g_0076d064]
        mov     dword ptr [edx + -0x8], esi
        fmul    dword ptr [g_0076d070]
        fstp    dword ptr [ebp + -0x3c]
        mov     esi, dword ptr [ebp + -0x3c]
        mov     dword ptr [edx + -0x4], esi
        jnz     L_de12
        jmp     L_deab
L_de7f:
        lea     ecx, [edi + edi*0x1]
        test    ecx, ecx
        jle     L_deab
        mov     edx, dword ptr [ebp + -0x8]
        mov     eax, dword ptr [edx + 0x18]
        mov     dword ptr [ebp + -0x48], 0x0
        mov     edx, dword ptr [ebp + -0x48]
        mov     dword ptr [ebp + -0x44], 0x0
        mov     esi, dword ptr [ebp + -0x44]
L_dea0:
        mov     dword ptr [eax], edx
        mov     dword ptr [eax + 0x4], esi
        add     eax, 0x8
        dec     ecx
        jnz     L_dea0
L_deab:
        mov     esi, dword ptr [ebp + -0x4]
        mov     ecx, dword ptr [ebp + -0x10]
        mov     eax, dword ptr [ecx]
        lea     edx, [esi + esi*0x1]
        push    edx
        mov     edx, dword ptr [ebp + -0x8]
        mov     edx, dword ptr [edx + 0x18]
        push    edx
        call    dword ptr [eax + 0x2c]
        xor     edi, edi
        test    esi, esi
        jle     L_e061
        mov     eax, dword ptr [ebp + -0x8]
        add     eax, 0x10
        mov     eax, dword ptr [eax]
        lea     ecx, [ebp + -0x64]
        mov     dword ptr [ebp + -0x1c], ecx
        xor     edx, edx
L_dedb:
        fld     dword ptr [edx + eax*0x1 + 0x8]
        fadd    dword ptr [g_0076d064]
        fmul    dword ptr [g_0076d070]
        fld     dword ptr [edx + eax*0x1 + 0x4]
        fadd    dword ptr [g_0076d064]
        fmul    dword ptr [g_0076d070]
        fld     dword ptr [edx + eax*0x1]
        mov     dword ptr [ebp + -0x58], 0x3f800000
        fadd    dword ptr [g_0076d064]
        fmul    dword ptr [g_0076d070]
        fstp    dword ptr [ebp + -0x64]
        fstp    dword ptr [ebp + -0x60]
        fstp    dword ptr [ebp + -0x5c]
        fld     dword ptr [g_0076e4dc]
        mov     esi, dword ptr [ebp + -0x1c]
        fld     dword ptr [esi + 0xc]
        mov     ecx, dword ptr [esi + 0xc]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp + -0x4c]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp + -0x4c]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     dword ptr [ebp + -0x2c], ebx
        fld     dword ptr [esi]
        mov     ecx, dword ptr [esi]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp + -0x4c]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp + -0x4c]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp + -0x2c]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp + -0x2c], ecx
        fld     dword ptr [esi + 0x4]
        mov     ecx, dword ptr [esi + 0x4]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp + -0x4c]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp + -0x4c]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp + -0x2c]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp + -0x2c], ecx
        mov     ecx, dword ptr [esi + 0x8]
        fadd    dword ptr [esi + 0x8]
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp + -0x4c]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp + -0x4c]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp + -0x2c]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp + -0x2c], ecx
        mov     esi, dword ptr [ebp + -0x8]
        mov     eax, dword ptr [esi + 0x20]
        mov     ecx, dword ptr [ebp + -0x2c]
        mov     dword ptr [eax + edi*0x4], ecx
        mov     eax, dword ptr [esi + 0x10]
        fld     dword ptr [edx + eax*0x1 + 0x8]
        mov     ebx, dword ptr [esi + 0x28]
        fld     dword ptr [edx + eax*0x1 + 0x4]
        mov     ecx, edx
        fld     dword ptr [edx + eax*0x1]
        add     ecx, ebx
        fld     st(0)
        inc     edi
        fmul    st(0), st(1)
        add     edx, 0xc
        fld     st(2)
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fld     st(3)
        fmul    st(0), st(4)
        faddp   st(1), st(0)
        fsqrt
        fstp    st(3)
        fstp    st(0)
        fstp    st(0)
        fdivr   dword ptr [g_0076d064]
        fld     st(0)
        fmul    dword ptr [edx + eax*0x1 + -0xc]
        fstp    dword ptr [ecx]
        fld     st(0)
        fmul    dword ptr [edx + eax*0x1 + -0x8]
        fstp    dword ptr [ecx + 0x4]
        fmul    dword ptr [edx + eax*0x1 + -0x4]
        fstp    dword ptr [ecx + 0x8]
        mov     ecx, dword ptr [ebp + -0x4]
        cmp     edi, ecx
        jl      L_dedb
L_e061:
        mov     edi, dword ptr [ebp + -0x4]
        mov     ebx, dword ptr [ebp + -0x8]
        mov     esi, dword ptr [ebp + -0x10]
        mov     eax, dword ptr [ebx + 0x28]
        mov     edx, dword ptr [esi]
        push    edi
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0xac]
        mov     eax, dword ptr [ebx + 0x20]
        mov     edx, dword ptr [esi]
        push    edi
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0xa4]
        mov     eax, dword ptr [ebp + 0x10]
        mov     edx, dword ptr [esi]
        push    0x1
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x14]
        mov     ecx, dword ptr [ebp + -0x28]
        push    esi
        call    FUN_00487ce0
        dec     word ptr [esi + 0x8]
        cmp     word ptr [esi + 0x8], 0x0
        jnz     L_e0b5
        test    esi, esi
        jz      L_e0b5
        mov     edx, dword ptr [esi]
        push    0x1
        mov     ecx, esi
        call    dword ptr [edx]
L_e0b5:
        mov     eax, dword ptr [ebp + -0x24]
        inc     eax
        cmp     eax, 0x14
        mov     dword ptr [ebp + -0x24], eax
        jl      L_d887
        call    FUN_006f49a0
        mov     eax, dword ptr [ebp + -0x28]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
