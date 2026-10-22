/*
 * FUN_004276e0 (3925 B) — MLR_BumpyWater::LightMapLighting (__thiscall).
 * Heavy FPU lightmap math with a switch on light type (3/4/6/7).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b2220;
extern char g_007b9608;
extern int g_007da864;
extern float g_007da868;
extern float g_0076d064;
extern int g_007d98fc;
extern float g_0076df00;
extern float g_0076d070;
extern float g_0076c5b0;
extern int g_007da5e0;
extern int g_007b95f0;
extern int g_007b95fc;
extern float g_0076de14;
extern int g_007b9600;
extern int g_007b95f8;
extern int g_007b95f4;
extern int g_007b95ec;
extern float g_007b220c;
extern int g_007da5dc;
extern float g_0076d5f0;
extern int g_007b960c;
extern int g_428640;

extern void __cdecl FUN_00428850(void);
extern void __cdecl FUN_00419480(void);
extern void __cdecl FUN_00482220(void);
extern void __cdecl FUN_0040ca10(void);
extern char __cdecl FUN_0047cfe0(void);
extern void __cdecl FUN_004286c0(void);
extern void __cdecl FUN_00419460(void);
extern void __cdecl FUN_00428810(void);
extern void __cdecl FUN_00428830(void);
extern void __cdecl FUN_00428730(void);
extern void __cdecl FUN_0040c610(void);
extern void __cdecl FUN_0040c410(void);
extern int __cdecl FUN_006fab90(void);
extern void __cdecl FUN_00491340(void);

__declspec(naked) void FUN_004276e0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0xf0
        push    ebx
        mov     ebx, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [ebx]
        push    esi
        mov     esi, ecx
        push    edi
        mov     ecx, ebx
        mov     dword ptr [ebp - 0x44], esi
        call    dword ptr [eax + 0x1c]
        xor     edi, edi
        cmp     eax, edi
        mov     dword ptr [ebp - 0xb4], eax
        jz      L428635
        cmp     dword ptr [g_007b2220], edi
        jz      L428635
        cmp     byte ptr [g_007b9608], 0x1
        jz      L428635
        mov     ecx, dword ptr [esi + 0x58]
        mov     dword ptr [ebp - 0x74], ecx
        push    0x7b9460
        lea     ecx, [ebp - 0xf0]
        call    FUN_00428850
        fild    dword ptr [g_007da864]
        mov     eax, dword ptr [esi + 0x14]
        mov     edx, dword ptr [eax + 0x8]
        fmul    dword ptr [g_007da868]
        mov     dword ptr [ebp - 0x5c], eax
        mov     eax, dword ptr [ebx]
        mov     ecx, ebx
        fstp    dword ptr [ebp - 0x1c]
        mov     dword ptr [ebp - 0x10], 0x3f800000
        mov     dword ptr [ebp - 0x2c], edx
        mov     byte ptr [ebp - 0xc], 0x0
        mov     byte ptr [ebp - 0x20], 0x0
        call    dword ptr [eax + 0xc]
        add     eax, -0x3
        cmp     eax, 0x4
        ja      L428515
        jmp     dword ptr [eax*4 + g_428640]

        /* case 3 */
case3:
        lea     ecx, [ebx + 0x48]
        push    ecx
        lea     ecx, [ebp - 0x40]
        call    FUN_00419480
        lea     edx, [ebp - 0x8]
        push    edx
        lea     eax, [ebp - 0x18]
        push    eax
        mov     ecx, ebx
        call    FUN_00482220
        fld     dword ptr [g_0076d064]
        fdiv    dword ptr [ebp - 0x8]
        mov     ecx, dword ptr [ebp - 0x74]
        xor     eax, eax
        cmp     ecx, edi
        mov     dword ptr [ebp - 0x4c], eax
        mov     dword ptr [ebp - 0x14], edi
        fstp    dword ptr [ebp - 0x34]
        jle     L428635
L4277b8:
        mov     ecx, dword ptr [g_007d98fc]
        mov     edx, dword ptr [ecx]
        cmp     byte ptr [edx + eax*1], 0x0
        jz      L427b31
        fld     dword ptr [ebp - 0x38]
        mov     eax, dword ptr [ebp - 0x44]
        fsub    dword ptr [ebp - 0x2c]
        mov     esi, dword ptr [eax + 0x48]
        mov     eax, dword ptr [ebp - 0x14]
        xor     edi, edi
        fstp    dword ptr [ebp - 0x8]
        mov     byte ptr [ebp - 0x1], 0x0
        mov     dword ptr [ebp - 0x24], edi
        add     esi, eax
L4277e7:
        mov     edx, dword ptr [ebp - 0x5c]
        xor     eax, eax
        mov     al, byte ptr [esi]
        lea     ecx, [eax + eax*2]
        lea     eax, [edx + ecx*4]
        mov     ecx, dword ptr [eax]
        mov     dword ptr [ebp - 0x58], ecx
        mov     edx, dword ptr [eax + 0x4]
        mov     dword ptr [ebp - 0x54], edx
        mov     eax, dword ptr [eax + 0x8]
        lea     ecx, [ebp - 0x40]
        push    ecx
        lea     edx, [ebp - 0x58]
        push    edx
        lea     ecx, [ebp - 0x58]
        mov     dword ptr [ebp - 0x50], eax
        call    FUN_0040ca10
        fld     dword ptr [ebp - 0x58]
        fmul    dword ptr [ebp - 0x34]
        mov     edx, dword ptr [g_007da5e0]
        mov     eax, dword ptr [edx]
        lea     ecx, [edi + eax*1]
        fstp    dword ptr [ecx]
        fld     dword ptr [ebp - 0x50]
        fmul    dword ptr [ebp - 0x34]
        fstp    dword ptr [ebp - 0x10]
        mov     eax, dword ptr [ebp - 0x10]
        mov     dword ptr [ecx + 0x4], eax
        fld     dword ptr [ecx]
        fcomp   dword ptr [g_0076df00]
        fnstsw  ax
        test    ah, 0x1
        jnz     L428779
        fld     dword ptr [ecx]
        fcomp   dword ptr [g_0076d070]
        fnstsw  ax
        test    ah, 0x41
        jz      L428779
        fld     dword ptr [ebp - 0x10]
        fcomp   dword ptr [g_0076df00]
        fnstsw  ax
        test    ah, 0x1
        jnz     L428779
        fld     dword ptr [ebp - 0x10]
        fcomp   dword ptr [g_0076d070]
        fnstsw  ax
        test    ah, 0x41
        jz      L428779
        mov     byte ptr [ebp - 0x1], 0x1
L428779:
        fld     dword ptr [ebp - 0x1c]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jnz     L4287c6
        fld     dword ptr [ebp - 0x1c]
        fchs
        fstp    dword ptr [ebp - 0x60]
        fld     dword ptr [ecx]
        fcomp   dword ptr [ebp - 0x60]
        fnstsw  ax
        test    ah, 0x1
        jnz     L4287c3
        fld     dword ptr [ecx]
        fcomp   dword ptr [ebp - 0x1c]
        fnstsw  ax
        test    ah, 0x41
        jz      L4287c3
        fld     dword ptr [ebp - 0x10]
        fcomp   dword ptr [ebp - 0x60]
        fnstsw  ax
        test    ah, 0x1
        jnz     L4287c3
        fld     dword ptr [ebp - 0x10]
        fcomp   dword ptr [ebp - 0x1c]
        fnstsw  ax
        test    ah, 0x41
        jnz     L4287c6
L4287c3:
        inc     dword ptr [ebp - 0x24]
L4287c6:
        add     edi, 0x8
        inc     esi
        cmp     edi, 0x18
        jl      L4277e7
        mov     eax, dword ptr [ebp - 0x24]
        test    eax, eax
        jnz     L427b2e
        cmp     byte ptr [ebp - 0x1], 0x1
        jz      L4287f7
        push    0x3
        push    edx
        call    FUN_0047cfe0
        add     esp, 0x8
        cmp     al, 0x1
        jnz     L427b2e
L4287f7:
        fld     dword ptr [ebx + 0x8]
        add     ebx, 0xc
        fstp    dword ptr [ebp - 0x48]
        push    ebx
        lea     ecx, [ebp - 0x70]
        mov     dword ptr [ebp - 0x68], 0xbf800000
        mov     dword ptr [ebp - 0x6c], 0xbf800000
        mov     dword ptr [ebp - 0x70], 0xbf800000
        mov     dword ptr [ebp - 0x64], 0xbf800000
        call    FUN_004286c0
        fld     dword ptr [ebp - 0x70]
        fmul    dword ptr [ebp - 0x48]
        mov     dword ptr [ebp - 0x64], 0x3f800000
        xor     edi, edi
        fstp    dword ptr [ebp - 0x70]
        fld     dword ptr [ebp - 0x6c]
        fmul    dword ptr [ebp - 0x48]
        fstp    dword ptr [ebp - 0x6c]
        fld     dword ptr [ebp - 0x68]
        fmul    dword ptr [ebp - 0x48]
        fstp    dword ptr [ebp - 0x68]
L427949:
        mov     ecx, dword ptr [g_007da5e0]
        mov     eax, dword ptr [ecx]
        mov     cl, byte ptr [ebp - 0x20]
        mov     esi, dword ptr [g_007b95f0]
        /* __emit: no-base SIB lea edx,[edi*8+0] (8D 14 FD 00000000) */
        __emit 0x8D
        __emit 0x14
        __emit 0xFD
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        fld     dword ptr [eax + edx*1]
        add     eax, edx
        fadd    dword ptr [g_0076d070]
        fstp    dword ptr [eax]
        fld     dword ptr [eax + 0x4]
        fadd    dword ptr [g_0076d070]
        fstp    dword ptr [eax + 0x4]
        mov     eax, dword ptr [ebp - 0x20]
        and     eax, 0xff
        inc     cl
        mov     byte ptr [ebp - 0x20], cl
        mov     ecx, dword ptr [g_007b95fc]
        lea     ebx, [eax + ecx*1]
        cmp     ebx, dword ptr [esi + 0x4]
        jnc     L428635
        mov     esi, dword ptr [esi]
        add     esi, eax
        mov     al, byte ptr [ebp - 0xc]
        mov     byte ptr [esi + ecx*1], al
        lea     ecx, [ebp - 0x70]
        mov     dword ptr [ebp - 0x28], ecx
        fld     dword ptr [g_0076de14]
        mov     esi, dword ptr [ebp - 0x28]
        fld     dword ptr [esi + 0xc]
        mov     ecx, dword ptr [esi + 0xc]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x78]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x78]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     dword ptr [ebp - 0x30], ebx
        fld     dword ptr [esi]
        mov     ecx, dword ptr [esi]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x78]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x78]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp - 0x30]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp - 0x30], ecx
        fld     dword ptr [esi + 0x4]
        mov     ecx, dword ptr [esi + 0x4]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x78]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x78]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp - 0x30]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp - 0x30], ecx
        mov     ecx, dword ptr [esi + 0x8]
        fadd    dword ptr [esi + 0x8]
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x78]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x78]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp - 0x30]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp - 0x30], ecx
        mov     eax, dword ptr [g_007da5e0]
        mov     ecx, dword ptr [eax]
        mov     esi, dword ptr [ebp - 0xc]
        add     edx, ecx
        mov     ecx, dword ptr [g_007b9600]
        mov     dword ptr [ebp - 0x28], edx
        mov     dl, byte ptr [ebp - 0xc]
        and     esi, 0xff
        inc     dl
        mov     byte ptr [ebp - 0xc], dl
        mov     edx, dword ptr [g_007b95f8]
        lea     eax, [esi + ecx*1]
        cmp     eax, dword ptr [edx + 0x4]
        jnc     L428635
        mov     ecx, dword ptr [ebp - 0x44]
        mov     edx, dword ptr [ecx + 0x14]
        mov     ecx, dword ptr [ecx + 0x48]
        mov     ebx, dword ptr [ebp - 0x14]
        add     ecx, edi
        mov     dword ptr [ebp - 0x5c], edx
        xor     edx, edx
        mov     dl, byte ptr [ecx + ebx*1]
        mov     ecx, edx
        mov     edx, dword ptr [ebp - 0x5c]
        lea     ecx, [ecx + ecx*2]
        lea     ecx, [edx + ecx*4]
        lea     edx, [eax + eax*2]
        mov     eax, dword ptr [g_007b95f8]
        push    ecx
        mov     ecx, dword ptr [eax]
        lea     ecx, [ecx + edx*4]
        call    FUN_0040c410
        mov     edx, dword ptr [g_007b9600]
        mov     ecx, dword ptr [g_007b95f4]
        lea     eax, [esi + edx*1]
        mov     edx, dword ptr [ecx]
        mov     ecx, dword ptr [ebp - 0x28]
        mov     esi, dword ptr [ecx]
        mov     ecx, dword ptr [ecx + 0x4]
        mov     dword ptr [edx + eax*8], esi
        mov     dword ptr [edx + eax*8 + 0x4], ecx
        mov     edx, dword ptr [g_007b95ec]
        mov     ecx, dword ptr [edx]
        mov     edx, dword ptr [ebp - 0x30]
        inc     edi
        cmp     edi, 0x3
        mov     dword ptr [ecx + eax*4], edx
        jl      L427949
        mov     ebx, dword ptr [ebp + 0x8]
L427b2e:
        mov     eax, dword ptr [ebp - 0x4c]
L427b31:
        mov     edx, dword ptr [ebp - 0x14]
        mov     ecx, dword ptr [ebp - 0x74]
        inc     eax
        add     edx, 0x3
        cmp     eax, ecx
        mov     dword ptr [ebp - 0x4c], eax
        mov     dword ptr [ebp - 0x14], edx
        jge     L428534
        jmp     L4277b8

        /* case 4 */
case4:
        lea     eax, [ebx + 0x48]
        push    eax
        lea     ecx, [ebp - 0xf0]
        call    FUN_00419460
        mov     ecx, dword ptr [ebp - 0xe4]
        mov     edx, dword ptr [ebp - 0xd4]
        mov     eax, dword ptr [ebp - 0xc4]
        mov     dword ptr [ebp - 0x40], ecx
        mov     ecx, dword ptr [ebx + 0x94]
        mov     dword ptr [ebp - 0x3c], edx
        lea     edx, [ebp - 0xa0]
        mov     dword ptr [ebp - 0x78], ecx
        push    edx
        lea     ecx, [ebp - 0xf0]
        mov     dword ptr [ebp - 0x38], eax
        call    FUN_00428810
        lea     eax, [ebp - 0x88]
        push    eax
        lea     ecx, [ebp - 0xf0]
        call    FUN_00428830
        lea     ecx, [ebp - 0x94]
        push    ecx
        lea     ecx, [ebp - 0xf0]
        call    FUN_00428730
        mov     ecx, dword ptr [ebp - 0x74]
        xor     eax, eax
        cmp     ecx, edi
        mov     dword ptr [ebp - 0x4c], eax
        mov     dword ptr [ebp - 0x14], edi
        jle     L428635
        mov     dword ptr [ebp - 0x34], edi
L427bcd:
        mov     edx, dword ptr [g_007d98fc]
        mov     ecx, dword ptr [edx]
        cmp     byte ptr [ecx + eax*1], 0x0
        mov     dword ptr [ebp - 0x30], edi
        mov     dword ptr [ebp - 0x18], edi
        jz      L42806f
        mov     edx, dword ptr [ebp - 0x44]
        mov     esi, dword ptr [edx + 0x5c]
        add     esi, dword ptr [ebp - 0x34]
        lea     eax, [ebp - 0x40]
        push    eax
        mov     ecx, esi
        mov     byte ptr [ebp - 0x1], 0x0
        call    FUN_0040c610
        fcomp   dword ptr [esi + 0xc]
        fnstsw  ax
        test    ah, 0x41
        jnz     L42806a
        mov     ecx, dword ptr [ebp - 0x44]
        mov     ebx, dword ptr [ecx + 0x48]
        mov     eax, dword ptr [ebp - 0x14]
        xor     edi, edi
        mov     dword ptr [ebp - 0x24], edi
        mov     dword ptr [ebp - 0x48], edi
        add     ebx, eax
L427c1e:
        xor     eax, eax
        mov     al, byte ptr [ebx]
        lea     edx, [eax + eax*2]
        mov     eax, dword ptr [ebp - 0x5c]
        fld     dword ptr [eax + edx*4]
        lea     eax, [eax + edx*4]
        fsub    dword ptr [ebp - 0x40]
        fstp    dword ptr [ebp - 0x58]
        fld     dword ptr [eax + 0x4]
        fsub    dword ptr [ebp - 0x3c]
        fstp    dword ptr [ebp - 0x54]
        fld     dword ptr [eax + 0x8]
        fsub    dword ptr [ebp - 0x38]
        fst     dword ptr [ebp - 0x50]
        fmul    dword ptr [ebp - 0x8c]
        fld     dword ptr [ebp - 0x54]
        fmul    dword ptr [ebp - 0x90]
        faddp   st(1), st(0)
        fld     dword ptr [ebp - 0x94]
        fmul    dword ptr [ebp - 0x58]
        faddp   st(1), st(0)
        fcom    dword ptr [g_007b220c]
        fnstsw  ax
        test    ah, 0x41
        jnz     L427cea
        mov     ecx, dword ptr [ebp + 0x8]
        fld     st(0)
        fcomp   dword ptr [ecx + 0x80]
        fnstsw  ax
        test    ah, 0x41
        jz      L427c8a
        mov     dword ptr [ebp - 0x10], 0x3f800000
        jmp     L427cad
L427c8a:
        fcom    dword ptr [ecx + 0x84]
        fnstsw  ax
        test    ah, 0x1
        jz      L427caa
        fld     dword ptr [ecx + 0x84]
        fsub    st(0), st(1)
        fmul    dword ptr [ecx + 0x88]
        fstp    dword ptr [ebp - 0x10]
        jmp     L427cad
L427caa:
        inc     dword ptr [ebp - 0x18]
L427cad:
        fld     dword ptr [ecx + 0x8]
        mov     ecx, dword ptr [g_007da5dc]
        mov     edx, dword ptr [ecx]
        fmul    dword ptr [ebp - 0x10]
        mov     eax, 0x7f000000
        fmul    dword ptr [ebp - 0x10]
        fstp    dword ptr [edx + edi*1]
        fmul    dword ptr [ebp - 0x78]
        fadd    st(0), st(0)
        fstp    dword ptr [ebp - 0x28]
        mov     ecx, dword ptr [ebp - 0x28]
        sub     eax, ecx
        mov     dword ptr [ebp - 0x8], eax
        fld     dword ptr [ebp - 0x8]
        fmul    dword ptr [ebp - 0x28]
        fsubr   dword ptr [g_0076d5f0]
        fmul    dword ptr [ebp - 0x8]
        fstp    dword ptr [ebp - 0x28]
        jmp     L427d09
L427cea:
        mov     eax, dword ptr [ebp - 0x30]
        fstp    st(0)
        mov     ecx, dword ptr [g_007da5dc]
        mov     edx, dword ptr [ecx]
        inc     eax
        mov     dword ptr [ebp - 0x30], eax
        mov     dword ptr [ebp - 0x28], 0x3ca3d70a
        mov     dword ptr [edx + edi*1], 0x0
L427d09:
        mov     eax, dword ptr [g_007da5e0]
        mov     ecx, dword ptr [eax]
        mov     esi, dword ptr [ebp - 0x48]
        add     esi, ecx
        lea     ecx, [ebp - 0x58]
        push    ecx
        lea     ecx, [ebp - 0xa0]
        call    FUN_0040c610
        mov     edx, dword ptr [g_007da5e0]
        mov     eax, dword ptr [edx]
        fmul    dword ptr [ebp - 0x28]
        mov     ecx, dword ptr [ebp - 0x48]
        add     ecx, eax
        fstp    dword ptr [esi]
        fld     dword ptr [ebp - 0x54]
        fmul    dword ptr [ebp - 0x84]
        fld     dword ptr [ebp - 0x50]
        fmul    dword ptr [ebp - 0x80]
        faddp   st(1), st(0)
        fld     dword ptr [ebp - 0x88]
        fmul    dword ptr [ebp - 0x58]
        faddp   st(1), st(0)
        fmul    dword ptr [ebp - 0x28]
        fchs
        fstp    dword ptr [ebp - 0x8]
        mov     edx, dword ptr [ebp - 0x8]
        mov     dword ptr [ecx + 0x4], edx
        fld     dword ptr [ecx]
        fcomp   dword ptr [g_0076df00]
        fnstsw  ax
        test    ah, 0x1
        jnz     L427da2
        fld     dword ptr [ecx]
        fcomp   dword ptr [g_0076d070]
        fnstsw  ax
        test    ah, 0x41
        jz      L427da2
        fld     dword ptr [ebp - 0x8]
        fcomp   dword ptr [g_0076df00]
        fnstsw  ax
        test    ah, 0x1
        jnz     L427da2
        fld     dword ptr [ebp - 0x8]
        fcomp   dword ptr [g_0076d070]
        fnstsw  ax
        test    ah, 0x41
        jz      L427da2
        mov     byte ptr [ebp - 0x1], 0x1
L427da2:
        fld     dword ptr [ebp - 0x1c]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jnz     L427def
        fld     dword ptr [ebp - 0x1c]
        fchs
        fstp    dword ptr [ebp - 0x60]
        fld     dword ptr [ecx]
        fcomp   dword ptr [ebp - 0x60]
        fnstsw  ax
        test    ah, 0x1
        jnz     L427dec
        fld     dword ptr [ecx]
        fcomp   dword ptr [ebp - 0x1c]
        fnstsw  ax
        test    ah, 0x41
        jz      L427dec
        fld     dword ptr [ebp - 0x8]
        fcomp   dword ptr [ebp - 0x60]
        fnstsw  ax
        test    ah, 0x1
        jnz     L427dec
        fld     dword ptr [ebp - 0x8]
        fcomp   dword ptr [ebp - 0x1c]
        fnstsw  ax
        test    ah, 0x41
        jnz     L427def
L427dec:
        inc     dword ptr [ebp - 0x24]
L427def:
        mov     ecx, dword ptr [ebp - 0x48]
        add     edi, 0x4
        add     ecx, 0x8
        inc     ebx
        cmp     edi, 0xc
        mov     dword ptr [ebp - 0x48], ecx
        jl      L427c1e
        mov     eax, dword ptr [ebp - 0x24]
        test    eax, eax
        jnz     L42806a
        mov     ecx, dword ptr [ebp - 0x30]
        mov     eax, 0x3
        cmp     ecx, eax
        jge     L42806a
        cmp     dword ptr [ebp - 0x18], eax
        jge     L42806a
        cmp     byte ptr [ebp - 0x1], 0x1
        jz      L427e46
        push    eax
        mov     eax, dword ptr [g_007da5e0]
        push    eax
        call    FUN_0047cfe0
        add     esp, 0x8
        cmp     al, 0x1
        jnz     L42806a
L427e46:
        xor     edi, edi
L427e48:
        mov     eax, dword ptr [g_007da5dc]
        mov     dword ptr [ebp - 0x68], 0xbf800000
        mov     dword ptr [ebp - 0x6c], 0xbf800000
        mov     dword ptr [ebp - 0x70], 0xbf800000
        mov     dword ptr [ebp - 0x64], 0xbf800000
        mov     ecx, dword ptr [eax]
        fld     dword ptr [ecx + edi*4]
        mov     ecx, dword ptr [g_007da5e0]
        fstp    dword ptr [ebp - 0x70]
        mov     edx, dword ptr [eax]
        fld     dword ptr [edx + edi*4]
        mov     esi, dword ptr [g_007b95f0]
        fstp    dword ptr [ebp - 0x6c]
        mov     eax, dword ptr [eax]
        fld     dword ptr [eax + edi*4]
        mov     dword ptr [ebp - 0x64], 0x3f800000
        fstp    dword ptr [ebp - 0x68]
        mov     eax, dword ptr [ecx]
        mov     cl, byte ptr [ebp - 0x20]
        /* __emit: no-base SIB lea edx,[edi*8+0] (8D 14 FD 00000000) */
        __emit 0x8D
        __emit 0x14
        __emit 0xFD
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        fld     dword ptr [eax + edx*1]
        add     eax, edx
        fadd    dword ptr [g_0076d070]
        fstp    dword ptr [eax]
        fld     dword ptr [eax + 0x4]
        fadd    dword ptr [g_0076d070]
        fstp    dword ptr [eax + 0x4]
        mov     eax, dword ptr [ebp - 0x20]
        and     eax, 0xff
        inc     cl
        mov     byte ptr [ebp - 0x20], cl
        mov     ecx, dword ptr [g_007b95fc]
        lea     ebx, [eax + ecx*1]
        cmp     ebx, dword ptr [esi + 0x4]
        jnc     L428635
        mov     esi, dword ptr [esi]
        add     esi, eax
        mov     al, byte ptr [ebp - 0xc]
        mov     byte ptr [esi + ecx*1], al
        lea     ecx, [ebp - 0x70]
        mov     dword ptr [ebp - 0x18], ecx
        fld     dword ptr [g_0076de14]
        mov     esi, dword ptr [ebp - 0x18]
        fld     dword ptr [esi + 0xc]
        mov     ecx, dword ptr [esi + 0xc]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x7c]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x7c]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     dword ptr [ebp - 0x2c], ebx
        fld     dword ptr [esi]
        mov     ecx, dword ptr [esi]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x7c]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x7c]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp - 0x2c]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp - 0x2c], ecx
        fld     dword ptr [esi + 0x4]
        mov     ecx, dword ptr [esi + 0x4]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x7c]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x7c]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp - 0x2c]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp - 0x2c], ecx
        mov     ecx, dword ptr [esi + 0x8]
        fadd    dword ptr [esi + 0x8]
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x7c]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x7c]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp - 0x2c]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp - 0x2c], ecx
        mov     eax, dword ptr [g_007da5e0]
        mov     ecx, dword ptr [eax]
        mov     esi, dword ptr [ebp - 0xc]
        add     edx, ecx
        mov     ecx, dword ptr [g_007b9600]
        mov     dword ptr [ebp - 0x18], edx
        mov     dl, byte ptr [ebp - 0xc]
        and     esi, 0xff
        inc     dl
        mov     byte ptr [ebp - 0xc], dl
        mov     edx, dword ptr [g_007b95f8]
        lea     eax, [esi + ecx*1]
        cmp     eax, dword ptr [edx + 0x4]
        jnc     L428635
        mov     ecx, dword ptr [ebp - 0x44]
        mov     edx, dword ptr [ecx + 0x14]
        mov     ecx, dword ptr [ecx + 0x48]
        mov     ebx, dword ptr [ebp - 0x14]
        add     ecx, edi
        mov     dword ptr [ebp - 0x5c], edx
        xor     edx, edx
        mov     dl, byte ptr [ecx + ebx*1]
        mov     ecx, edx
        mov     edx, dword ptr [ebp - 0x5c]
        lea     ecx, [ecx + ecx*2]
        lea     ecx, [edx + ecx*4]
        lea     edx, [eax + eax*2]
        mov     eax, dword ptr [g_007b95f8]
        push    ecx
        mov     ecx, dword ptr [eax]
        lea     ecx, [ecx + edx*4]
        call    FUN_0040c410
        mov     edx, dword ptr [g_007b9600]
        mov     ecx, dword ptr [g_007b95f4]
        lea     eax, [esi + edx*1]
        mov     edx, dword ptr [ecx]
        mov     ecx, dword ptr [ebp - 0x18]
        mov     esi, dword ptr [ecx]
        mov     ecx, dword ptr [ecx + 0x4]
        mov     dword ptr [edx + eax*8], esi
        mov     dword ptr [edx + eax*8 + 0x4], ecx
        mov     edx, dword ptr [g_007b95ec]
        mov     ecx, dword ptr [edx]
        mov     edx, dword ptr [ebp - 0x2c]
        inc     edi
        cmp     edi, 0x3
        mov     dword ptr [ecx + eax*4], edx
        jl      L427e48
L42806a:
        mov     eax, dword ptr [ebp - 0x4c]
        xor     edi, edi
L42806f:
        mov     esi, dword ptr [ebp - 0x34]
        mov     edx, dword ptr [ebp - 0x14]
        mov     ecx, dword ptr [ebp - 0x74]
        inc     eax
        add     esi, 0x10
        add     edx, 0x3
        cmp     eax, ecx
        mov     dword ptr [ebp - 0x4c], eax
        mov     dword ptr [ebp - 0x34], esi
        mov     dword ptr [ebp - 0x14], edx
        jge     L428534
        jmp     L427bcd

        /* case 6 */
case6:
        mov     eax, dword ptr [ebx + 0x54]
        mov     ecx, dword ptr [ebx + 0x64]
        mov     edx, dword ptr [ebx + 0x74]
        lea     esi, [ebx + 0x48]
        mov     dword ptr [ebp - 0x40], eax
        mov     dword ptr [ebp - 0x3c], ecx
        lea     eax, [ebp - 0x34]
        push    eax
        lea     ecx, [ebp - 0x18]
        push    ecx
        mov     ecx, ebx
        mov     dword ptr [ebp - 0x38], edx
        call    FUN_00482220
        lea     edx, [ebp - 0x58]
        push    edx
        mov     ecx, esi
        call    FUN_00428730
        fld     dword ptr [ebp - 0x50]
        fmul    dword ptr [ebp - 0x50]
        fld     dword ptr [ebp - 0x58]
        fmul    dword ptr [ebp - 0x58]
        faddp   st(1), st(0)
        fsqrt
        fdivr   dword ptr [g_0076d064]
        fld     dword ptr [ebp - 0x58]
        fmul    st(0), st(1)
        fstp    dword ptr [ebp - 0xc0]
        fld     dword ptr [ebp - 0x50]
        fmul    st(0), st(1)
        fstp    dword ptr [ebp - 0xb8]
        fstp    st(0)
        fld     dword ptr [ebp - 0x3c]
        fcomp   dword ptr [g_007b220c]
        fnstsw  ax
        test    ah, 0x41
        jnz     L428635
        fld     dword ptr [ebx + 0xb0]
        fmul    dword ptr [ebp - 0x3c]
        fdivr   dword ptr [g_0076d064]
        fstp    dword ptr [ebp - 0x2c]
        fld     dword ptr [ebp - 0x3c]
        fcomp   dword ptr [ebx + 0x80]
        fnstsw  ax
        test    ah, 0x41
        jz      L428131
        mov     dword ptr [ebp - 0x10], 0x3f800000
        jmp     L428157
L428131:
        fld     dword ptr [ebp - 0x3c]
        fcomp   dword ptr [ebx + 0x84]
        fnstsw  ax
        test    ah, 0x1
        jz      L428635
        fld     dword ptr [ebx + 0x84]
        fsub    dword ptr [ebp - 0x3c]
        fmul    dword ptr [ebx + 0x88]
        fstp    dword ptr [ebp - 0x10]
L428157:
        mov     ecx, dword ptr [ebp - 0x74]
        xor     eax, eax
        cmp     ecx, edi
        mov     dword ptr [ebp - 0x4c], eax
        mov     dword ptr [ebp - 0x14], edi
        jle     L428635
        mov     esi, dword ptr [g_007da5e0]
L428170:
        mov     ecx, dword ptr [g_007d98fc]
        mov     edx, dword ptr [ecx]
        cmp     byte ptr [edx + eax*1], 0x0
        jz      L4284f9
        fld     dword ptr [ebp - 0x54]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jz      L4284f9
        mov     eax, dword ptr [ebp - 0x44]
        mov     edx, dword ptr [eax + 0x48]
        mov     eax, dword ptr [ebp - 0x14]
        mov     ecx, dword ptr [esi]
        mov     ebx, dword ptr [ebp - 0x5c]
        mov     byte ptr [ebp - 0x1], 0x0
        mov     dword ptr [ebp - 0x24], 0x0
        add     edx, eax
        mov     edi, 0x3
L4281b6:
        xor     eax, eax
        mov     al, byte ptr [edx]
        lea     eax, [eax + eax*2]
        fld     dword ptr [ebx + eax*4]
        lea     eax, [ebx + eax*4]
        fsub    dword ptr [ebp - 0x40]
        mov     eax, dword ptr [eax + 0x8]
        mov     dword ptr [ebp - 0x64], eax
        fld     dword ptr [ebp - 0x64]
        fsub    dword ptr [ebp - 0x38]
        fstp    dword ptr [ebp - 0x64]
        fmul    dword ptr [ebp - 0x2c]
        fld     dword ptr [ebp - 0x64]
        fmul    dword ptr [ebp - 0x2c]
        fld     dword ptr [ebp - 0xb8]
        fmul    st(0), st(2)
        fld     dword ptr [ebp - 0xc0]
        fmul    st(0), st(2)
        fsubp   st(1), st(0)
        fstp    dword ptr [ecx]
        fld     dword ptr [ebp - 0xb8]
        fmul    st(0), st(1)
        fld     dword ptr [ebp - 0xc0]
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fstp    dword ptr [ebp - 0x8]
        mov     eax, dword ptr [ebp - 0x8]
        mov     dword ptr [ecx + 0x4], eax
        fstp    st(0)
        fstp    st(0)
        fld     dword ptr [ecx]
        fcomp   dword ptr [g_0076df00]
        fnstsw  ax
        test    ah, 0x1
        jnz     L428253
        fld     dword ptr [ecx]
        fcomp   dword ptr [g_0076d070]
        fnstsw  ax
        test    ah, 0x41
        jz      L428253
        fld     dword ptr [ebp - 0x8]
        fcomp   dword ptr [g_0076df00]
        fnstsw  ax
        test    ah, 0x1
        jnz     L428253
        fld     dword ptr [ebp - 0x8]
        fcomp   dword ptr [g_0076d070]
        fnstsw  ax
        test    ah, 0x41
        jz      L428253
        mov     byte ptr [ebp - 0x1], 0x1
L428253:
        fld     dword ptr [ebp - 0x1c]
        fcomp   dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jnz     L4282a0
        fld     dword ptr [ebp - 0x1c]
        fchs
        fstp    dword ptr [ebp - 0x60]
        fld     dword ptr [ecx]
        fcomp   dword ptr [ebp - 0x60]
        fnstsw  ax
        test    ah, 0x1
        jnz     L42829d
        fld     dword ptr [ecx]
        fcomp   dword ptr [ebp - 0x1c]
        fnstsw  ax
        test    ah, 0x41
        jz      L42829d
        fld     dword ptr [ebp - 0x8]
        fcomp   dword ptr [ebp - 0x60]
        fnstsw  ax
        test    ah, 0x1
        jnz     L42829d
        fld     dword ptr [ebp - 0x8]
        fcomp   dword ptr [ebp - 0x1c]
        fnstsw  ax
        test    ah, 0x41
        jnz     L4282a0
L42829d:
        inc     dword ptr [ebp - 0x24]
L4282a0:
        inc     edx
        add     ecx, 0x8
        dec     edi
        jnz     L4281b6
        mov     eax, dword ptr [ebp - 0x24]
        test    eax, eax
        jnz     L4284f9
        cmp     byte ptr [ebp - 0x1], 0x1
        jz      L4282d5
        push    0x3
        push    esi
        call    FUN_0047cfe0
        mov     esi, dword ptr [g_007da5e0]
        add     esp, 0x8
        cmp     al, 0x1
        jnz     L4284f9
L4282d5:
        mov     eax, dword ptr [ebp + 0x8]
        fld     dword ptr [eax + 0x8]
        mov     ecx, dword ptr [eax + 0x10]
        mov     edx, dword ptr [eax + 0x14]
        fmul    dword ptr [ebp - 0x10]
        mov     dword ptr [ebp - 0xac], ecx
        mov     dword ptr [ebp - 0xa8], edx
        fmul    dword ptr [ebp - 0x10]
        mov     dword ptr [ebp - 0xa4], 0x3f800000
        fld     dword ptr [eax + 0xc]
        xor     edi, edi
        fmul    st(0), st(1)
        fstp    dword ptr [ebp - 0xb0]
        fld     dword ptr [ebp - 0xac]
        fmul    st(0), st(1)
        fstp    dword ptr [ebp - 0xac]
        fld     dword ptr [ebp - 0xa8]
        fmul    st(0), st(1)
        fstp    dword ptr [ebp - 0xa8]
        fstp    st(0)
L428328:
        mov     eax, dword ptr [esi]
        mov     cl, byte ptr [ebp - 0x20]
        mov     esi, dword ptr [g_007b95f0]
        /* __emit: no-base SIB lea edx,[edi*8+0] (8D 14 FD 00000000) */
        __emit 0x8D
        __emit 0x14
        __emit 0xFD
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        fld     dword ptr [eax + edx*1]
        add     eax, edx
        fadd    dword ptr [g_0076d070]
        fstp    dword ptr [eax]
        fld     dword ptr [eax + 0x4]
        fadd    dword ptr [g_0076d070]
        fstp    dword ptr [eax + 0x4]
        mov     eax, dword ptr [ebp - 0x20]
        and     eax, 0xff
        inc     cl
        mov     byte ptr [ebp - 0x20], cl
        mov     ecx, dword ptr [g_007b95fc]
        lea     ebx, [eax + ecx*1]
        cmp     ebx, dword ptr [esi + 0x4]
        jnc     L428635
        mov     esi, dword ptr [esi]
        add     esi, eax
        mov     al, byte ptr [ebp - 0xc]
        mov     byte ptr [esi + ecx*1], al
        lea     ecx, [ebp - 0xb0]
        mov     dword ptr [ebp - 0x7c], ecx
        fld     dword ptr [g_0076de14]
        mov     esi, dword ptr [ebp - 0x7c]
        fld     dword ptr [esi + 0xc]
        mov     ecx, dword ptr [esi + 0xc]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x78]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x78]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     dword ptr [ebp - 0x30], ebx
        fld     dword ptr [esi]
        mov     ecx, dword ptr [esi]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x78]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x78]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp - 0x30]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp - 0x30], ecx
        fld     dword ptr [esi + 0x4]
        mov     ecx, dword ptr [esi + 0x4]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x78]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x78]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp - 0x30]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp - 0x30], ecx
        mov     ecx, dword ptr [esi + 0x8]
        fadd    dword ptr [esi + 0x8]
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x78]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x78]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp - 0x30]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp - 0x30], ecx
        mov     eax, dword ptr [ebp - 0x44]
        mov     esi, dword ptr [eax + 0x14]
        mov     eax, dword ptr [eax + 0x48]
        mov     ebx, dword ptr [ebp - 0x14]
        add     eax, edi
        xor     ecx, ecx
        mov     cl, byte ptr [eax + ebx*1]
        mov     dword ptr [ebp - 0x5c], esi
        mov     eax, ecx
        mov     cl, byte ptr [ebp - 0xc]
        lea     eax, [eax + eax*2]
        lea     esi, [esi + eax*4]
        mov     eax, dword ptr [ebp - 0xc]
        and     eax, 0xff
        inc     cl
        mov     byte ptr [ebp - 0xc], cl
        mov     ecx, dword ptr [g_007b9600]
        add     eax, ecx
        mov     ecx, dword ptr [g_007b95f8]
        cmp     eax, dword ptr [ecx + 0x4]
        jnc     L428635
        mov     ecx, dword ptr [ecx]
        lea     ebx, [eax + eax*2]
        lea     ecx, [ecx + ebx*4]
        mov     ebx, dword ptr [esi]
        mov     dword ptr [ecx], ebx
        mov     ebx, dword ptr [esi + 0x4]
        mov     esi, dword ptr [esi + 0x8]
        mov     dword ptr [ecx + 0x8], esi
        mov     esi, dword ptr [g_007da5e0]
        mov     dword ptr [ecx + 0x4], ebx
        mov     ebx, dword ptr [esi]
        mov     ecx, dword ptr [g_007b95f4]
        mov     ecx, dword ptr [ecx]
        add     edx, ebx
        mov     ebx, dword ptr [edx]
        mov     edx, dword ptr [edx + 0x4]
        mov     dword ptr [ecx + eax*8], ebx
        mov     dword ptr [ecx + eax*8 + 0x4], edx
        mov     ecx, dword ptr [g_007b95ec]
        mov     edx, dword ptr [ecx]
        mov     ecx, dword ptr [ebp - 0x30]
        inc     edi
        cmp     edi, 0x3
        mov     dword ptr [edx + eax*4], ecx
        jl      L428328
L4284f9:
        mov     eax, dword ptr [ebp - 0x4c]
        mov     edx, dword ptr [ebp - 0x14]
        mov     ecx, dword ptr [ebp - 0x74]
        inc     eax
        add     edx, 0x3
        cmp     eax, ecx
        mov     dword ptr [ebp - 0x4c], eax
        mov     dword ptr [ebp - 0x14], edx
        jge     L428534
        jmp     L428170

        /* default */
L428515:
        push    0x76df20
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L428635
        int     3
        /* dead-code epilogue copy (9 B) placed by compiler after the trap */
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4

L428534:
        mov     al, byte ptr [ebp - 0x20]
        test    al, al
        jz      L428635
        mov     al, byte ptr [ebp - 0xc]
        test    al, al
        jz      L428635
        mov     eax, dword ptr [ebp - 0xc]
        mov     edx, dword ptr [ebp - 0x20]
        mov     ecx, dword ptr [g_007b960c]
        and     eax, 0xff
        and     edx, 0xff
        mov     dword ptr [ebp + 0x8], eax
        push    0x4
        lea     eax, [ebp - 0x7c]
        mov     dword ptr [ebp - 0x2c], edx
        mov     dword ptr [ebp - 0x7c], 0x3
        mov     edx, dword ptr [ecx]
        push    eax
        call    dword ptr [edx + 0x24]
        mov     ecx, dword ptr [g_007b960c]
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0x8]
        cmp     eax, 0x100
        jc      L4285d5
        mov     eax, dword ptr [ebp - 0xb4]
        mov     edx, dword ptr [ebp - 0x44]
        mov     edi, dword ptr [eax + 0x1c]
        lea     ecx, [eax + 0xc]
        mov     eax, dword ptr [edx + 0x30]
        mov     edx, dword ptr [ecx + 0x4]
        and     eax, 0xf
        or      edi, 0xf
        inc     eax
        and     edx, 0xfffffff0
        or      eax, edx
        mov     dword ptr [ecx + 0x4], eax
        mov     eax, dword ptr [g_007b960c]
        push    eax
        mov     dword ptr [ecx + 0x10], edi
        call    FUN_00491340
        mov     ecx, dword ptr [g_007b960c]
        mov     eax, dword ptr [ecx + 0x14]
        test    al, 0x3
        jz      L4285db
        mov     edx, dword ptr [ecx]
        neg     eax
        and     eax, 0x3
        push    eax
        call    dword ptr [edx + 0x18]
L4285d5:
        mov     ecx, dword ptr [g_007b960c]
L4285db:
        mov     eax, dword ptr [ecx]
        push    0x4
        push    0x7b9600
        call    dword ptr [eax + 0x24]
        mov     edx, dword ptr [eax]
        push    0x4
        lea     ecx, [ebp + 0x8]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x24]
        mov     ecx, dword ptr [g_007b960c]
        mov     edx, dword ptr [ecx]
        push    0x4
        push    0x7b95fc
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [eax]
        push    0x4
        lea     ecx, [ebp - 0x2c]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x24]
        mov     esi, dword ptr [g_007b9600]
        mov     edx, dword ptr [ebp + 0x8]
        mov     ecx, dword ptr [g_007b95fc]
        mov     eax, dword ptr [ebp - 0x2c]
        add     esi, edx
        add     ecx, eax
        mov     dword ptr [g_007b9600], esi
        mov     dword ptr [g_007b95fc], ecx
L428635:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
    }
}
