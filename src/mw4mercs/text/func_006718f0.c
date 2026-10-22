/*
 * FUN_006718F0 (9729 B) ??? Large rendering/visibility function.
 *
 * CFLAGS: /O1
 */

#include <windows.h>

extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_004206b0(void);
extern void __cdecl FUN_00641010(void);
extern void __cdecl FUN_00641050(void);
extern void __cdecl FUN_00561a30(void);
extern void __cdecl FUN_005619f0(void);
extern void __cdecl FUN_0040c5d0(void);
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_0040c9c0(void);
extern void __cdecl FUN_004f8790(void);
extern void __cdecl FUN_004f86c0(void);
extern void __cdecl FUN_0041c7d0(void);
extern void __cdecl FUN_00674390(void);
extern void __cdecl FUN_0075db4a(void);
extern void __cdecl FUN_0055eed0(void);
extern void __cdecl FUN_00561df0(void);
extern void __cdecl FUN_00641000(void);
extern void __cdecl FUN_0055f510(void);
extern void __cdecl FUN_0055f5b0(void);
extern void __cdecl FUN_00560420(void);
extern void __cdecl FUN_00587830(void);
extern void __cdecl FUN_00551870(void);
extern void __cdecl FUN_00419480(void);
extern void __cdecl FUN_00419460(void);
extern void __cdecl FUN_00423b30(void);
extern void __cdecl FUN_006746a0(void);
extern void __cdecl FUN_0040c0e0(void);
extern void __cdecl FUN_00428850(void);
extern void __cdecl FUN_00673f00(void);
extern void __cdecl FUN_00640fa0(void);
extern void __cdecl FUN_00642870(void);
extern void __cdecl FUN_0040ccd0(void);
extern void __cdecl FUN_006741f0(void);

extern float g_f77b290;
extern float g_f797238;
extern float g_f76d064;
extern float g_f77dff8;
extern float g_f77dff4;
extern float g_f7971e8;
extern float g_f80da60;
extern float g_f80da5c;
extern float g_f76d598;
extern float g_f77d140;
extern float g_f76d040;
extern float g_f78d0e0;
extern float g_f79722c;
extern float g_f797228;
extern float g_f797224;
extern float g_f797220;
extern float g_f79721c;
extern float g_f797218;
extern float g_f79247c;

extern int g_d7dab44;
extern int g_d7dab40;
extern int g_d7f252c;
extern int *g_p76b420;

__declspec(naked) void __fastcall FUN_006718f0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x32c
        push    ebx
        push    esi
        mov     esi, ecx
        push    edi
        lea     ecx, [esi + 0xc]
        mov     dword ptr [ebp - 0x40], esi
        call    FUN_0041fd80
        test    eax, eax
        mov     dword ptr [ebp - 0x64], eax
        jz      l_73eea
        mov     ecx, dword ptr [eax + 0x3d4]
        test    ecx, ecx
        jz      l_73eea
        mov     ecx, dword ptr [eax + 0x410]
        mov     edi, dword ptr [eax + 0x40c]
        sub     ecx, edi
        sar     ecx, 2
        jz      l_73eea
        mov     edx, edi
        cmp     dword ptr [edx], 0
        jz      l_73eea
        mov     eax, 0x6a
        mov     dword ptr [esi + 0x5c], eax
        mov     dword ptr [esi + 0x60], eax
        lea     eax, [ebp - 8]
        push    eax
        lea     ecx, [ebp - 0x3c]
        lea     ebx, [esi + 0x38]
        push    ecx
        mov     edi, 0xa
        mov     ecx, ebx
        mov     dword ptr [esi + 0x54], 0x191
        mov     dword ptr [esi + 0x58], 0x20e
        mov     dword ptr [ebp - 8], edi
        call    FUN_00641010
        mov     eax, dword ptr [eax]
        cmp     eax, dword ptr [ebx]
        mov     dword ptr [ebp - 0x30], eax
        jz      l_71988
        mov     edx, dword ptr [ebp - 8]
        cmp     edx, dword ptr [eax + 0x10]
        jge     l_719bf
    l_71988:
        lea     eax, [ebp - 0x1c]
        push    eax
        lea     ecx, [ebp - 8]
        push    ecx
        lea     ecx, [ebp + 0xffffff4c]
        mov     dword ptr [ebp - 0x1c], 0
        call    FUN_00641050
        push    eax
        push    ecx
        lea     edx, [ebp - 0x30]
        mov     ecx, esp
        push    edx
        call    FUN_00561a30
        lea     eax, [ebp - 0x38]
        push    eax
        mov     ecx, ebx
        call    FUN_005619f0
        mov     eax, dword ptr [eax]
        mov     dword ptr [ebp - 0x30], eax
    l_719bf:
        mov     eax, dword ptr [eax + 0x14]
        fld     dword ptr [eax + 0xc]
        lea     ecx, [ebp - 0x4c]
        fsub    dword ptr [eax + 4]
        push    ecx
        lea     ecx, [ebp - 0x70]
        fmul    dword ptr [eax + 0x14]
        mov     dword ptr [ebp - 0x44], 0
        fstp    dword ptr [ebp - 0x4c]
        fld     dword ptr [eax + 0x10]
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [eax + 0x18]
        fstp    dword ptr [ebp - 0x48]
        call    FUN_0040c5d0
        lea     edx, [ebp - 0x70]
        push    edx
        lea     ecx, [ebp - 0x58]
        call    FUN_0040c410
        lea     eax, [ebp - 8]
        push    eax
        lea     ecx, [ebp - 0x3c]
        push    ecx
        mov     ecx, ebx
        mov     dword ptr [ebp - 8], edi
        call    FUN_00641010
        mov     eax, dword ptr [eax]
        cmp     eax, dword ptr [ebx]
        mov     dword ptr [ebp - 0x30], eax
        jz      l_71a1c
        mov     edx, dword ptr [ebp - 8]
        cmp     edx, dword ptr [eax + 0x10]
        jge     l_71a53
    l_71a1c:
        lea     eax, [ebp - 0x1c]
        push    eax
        lea     ecx, [ebp - 8]
        push    ecx
        lea     ecx, [ebp + 0xffffff4c]
        mov     dword ptr [ebp - 0x1c], 0
        call    FUN_00641050
        push    eax
        push    ecx
        lea     edx, [ebp - 0x30]
        mov     ecx, esp
        push    edx
        call    FUN_00561a30
        lea     eax, [ebp - 0x38]
        push    eax
        mov     ecx, ebx
        call    FUN_005619f0
        mov     eax, dword ptr [eax]
        mov     dword ptr [ebp - 0x30], eax
    l_71a53:
        mov     ecx, dword ptr [eax + 0x14]
        lea     edx, [ebp - 8]
        mov     dword ptr [ecx + 0x38], 2
        push    edx
        lea     eax, [ebp - 0x3c]
        push    eax
        mov     ecx, ebx
        mov     dword ptr [ebp - 8], edi
        call    FUN_00641010
        mov     eax, dword ptr [eax]
        cmp     eax, dword ptr [ebx]
        mov     dword ptr [ebp - 0x30], eax
        jz      l_71a80
        mov     ecx, dword ptr [ebp - 8]
        cmp     ecx, dword ptr [eax + 0x10]
        jge     l_71ab7
    l_71a80:
        lea     edx, [ebp - 0x1c]
        push    edx
        lea     eax, [ebp - 8]
        push    eax
        lea     ecx, [ebp + 0xffffff4c]
        mov     dword ptr [ebp - 0x1c], 0
        call    FUN_00641050
        push    eax
        push    ecx
        lea     edx, [ebp - 0x30]
        mov     ecx, esp
        push    edx
        call    FUN_00561a30
        lea     eax, [ebp - 0x38]
        push    eax
        mov     ecx, ebx
        call    FUN_005619f0
        mov     eax, dword ptr [eax]
        mov     dword ptr [ebp - 0x30], eax
    l_71ab7:
        mov     ecx, dword ptr [eax + 0x14]
        fild    dword ptr [esi + 0x58]
        push    0x3f666666
        push    ecx
        fstp    dword ptr [esp]
        fild    dword ptr [esi + 0x54]
        mov     dword ptr [ecx + 0x3c], 3
        push    ecx
        lea     ecx, [ebp - 0x70]
        fstp    dword ptr [esp]
        mov     dword ptr [ebp - 8], edi
        call    FUN_0040c9c0
        lea     edx, [ebp - 8]
        push    edx
        lea     eax, [ebp - 0x3c]
        push    eax
        mov     ecx, ebx
        call    FUN_00641010
        mov     eax, dword ptr [eax]
        cmp     eax, dword ptr [ebx]
        mov     dword ptr [ebp - 0x30], eax
        jz      l_71aff
        mov     ecx, dword ptr [ebp - 8]
        cmp     ecx, dword ptr [eax + 0x10]
        jge     l_71b36
    l_71aff:
        lea     edx, [ebp - 0x1c]
        push    edx
        lea     eax, [ebp - 8]
        push    eax
        lea     ecx, [ebp + 0xffffff4c]
        mov     dword ptr [ebp - 0x1c], 0
        call    FUN_00641050
        push    eax
        push    ecx
        lea     edx, [ebp - 0x30]
        mov     ecx, esp
        push    edx
        call    FUN_00561a30
        lea     eax, [ebp - 0x38]
        push    eax
        mov     ecx, ebx
        call    FUN_005619f0
        mov     eax, dword ptr [eax]
        mov     dword ptr [ebp - 0x30], eax
    l_71b36:
        push    1
        push    0
        push    0x80ffffff
        lea     ecx, [ebp - 0x58]
        push    ecx
        mov     ecx, dword ptr [eax + 0x14]
        lea     edx, [ebp - 0x70]
        push    edx
        call    FUN_0055f5b0
        fild    dword ptr [esi + 0x58]
        push    0x3f666666
        push    ecx
        fsub    dword ptr [g_f77b290]
        fstp    dword ptr [esp]
        fild    dword ptr [esi + 0x54]
        push    ecx
        lea     ecx, [ebp - 0x70]
        fsub    dword ptr [g_f797238]
        fstp    dword ptr [esp]
        call    FUN_0040c9c0
        lea     eax, [ebp - 0x70]
        add     esi, 0x14
        push    eax
        mov     ecx, esi
        call    FUN_0040c410
        push    esi
        lea     ecx, [ebp - 0x4c]
        call    FUN_0040c410
        fld     dword ptr [ebp - 0x4c]
        fcomp   dword ptr [g_f76d064]
        fnstsw  ax
        test    ah, 0x41
        jz      l_71ba9
        fld     dword ptr [ebp - 0x4c]
        fmul    dword ptr [g_f77dff8]
        fstp    dword ptr [ebp - 0x4c]
    l_71ba9:
        fld     dword ptr [ebp - 0x48]
        fcomp   dword ptr [g_f76d064]
        fnstsw  ax
        test    ah, 0x41
        jz      l_71bc5
        fld     dword ptr [ebp - 0x48]
        fmul    dword ptr [g_f77dff4]
        fstp    dword ptr [ebp - 0x48]
    l_71bc5:
        lea     ecx, [ebp - 0x4c]
        push    ecx
        lea     ecx, [ebp - 0x70]
        call    FUN_0040c5d0
        lea     edx, [ebp - 0x70]
        push    edx
        lea     ecx, [ebp + 0xffffff10]
        call    FUN_0040c410
        mov     eax, dword ptr [ebp - 0x40]
        fild    dword ptr [eax + 0x58]
        push    0x3f666666
        push    ecx
        fstp    dword ptr [esp]
        fild    dword ptr [eax + 0x54]
        push    ecx
        lea     ecx, [ebp + 0xffffff5c]
        fstp    dword ptr [esp]
        call    FUN_0040c9c0
        mov     eax, dword ptr [ebp - 0x64]
        mov     esi, dword ptr [eax + 0xd8]
        add     esi, 0x80
        mov     ecx, 0xc
        lea     edi, [ebp + 0xfffffcd4]
        rep     movsd
        lea     ecx, [ebp + 0xfffffcd4]
        push    ecx
        lea     ecx, [ebp + 0xfffffd78]
        call    FUN_004206b0
        mov     edx, dword ptr [g_d7dab44]
        mov     eax, dword ptr [edx]
        xor     eax, dword ptr [g_d7dab40]
        mov     ecx, dword ptr [eax + 0x20]
        lea     edx, [ebp + 0xffffff54]
        xor     ecx, 0x85739531
        xor     esi, esi
        push    edx
        mov     dword ptr [ebp - 0x1c], ecx
        mov     dword ptr [ebp + 0xffffff54], esi
        mov     dword ptr [ebp + 0xffffff58], esi
        call    FUN_004f8790
        mov     eax, dword ptr [ebp + 0xffffff58]
        cmp     eax, esi
        mov     edi, dword ptr [ebp - 0x40]
        mov     dword ptr [ebp - 8], eax
        jle     l_71e1e
    l_71c77:
        mov     eax, dword ptr [ebp + 0xffffff54]
        fld     dword ptr [eax + esi*8]
        mov     ecx, dword ptr [ebp - 8]
        fstp    dword ptr [ebp - 0x18]
        dec     ecx
        cmp     esi, ecx
        fld     dword ptr [eax + esi*8 + 4]
        fstp    dword ptr [ebp - 0xc]
        jnz     l_71c9c
        mov     edx, dword ptr [eax]
        mov     dword ptr [ebp - 0x14], edx
        fld     dword ptr [eax + 4]
        jmp     l_71ca7
    l_71c9c:
        fld     dword ptr [eax + esi*8 + 8]
        fstp    dword ptr [ebp - 0x14]
        fld     dword ptr [eax + esi*8 + 0xc]
    l_71ca7:
        fld     dword ptr [ebp - 0x18]
        mov     dword ptr [ebp - 0x48], 0
        fmul    dword ptr [g_f7971e8]
        mov     dword ptr [ebp + 0xffffff3c], 0
        fadd    dword ptr [g_f80da60]
        fstp    dword ptr [ebp - 0x18]
        mov     eax, dword ptr [ebp - 0x18]
        fld     dword ptr [ebp - 0x14]
        mov     dword ptr [ebp - 0x4c], eax
        fmul    dword ptr [g_f7971e8]
        lea     eax, [ebp + 0xfffffd78]
        push    eax
        fadd    dword ptr [g_f80da60]
        fstp    dword ptr [ebp - 0x14]
        mov     edx, dword ptr [ebp - 0x14]
        fld     dword ptr [ebp - 0xc]
        mov     dword ptr [ebp + 0xffffff38], edx
        fmul    dword ptr [g_f7971e8]
        fadd    dword ptr [g_f80da5c]
        fstp    dword ptr [ebp - 0xc]
        mov     ecx, dword ptr [ebp - 0xc]
        mov     dword ptr [ebp - 0x44], ecx
        fmul    dword ptr [g_f7971e8]
        lea     ecx, [ebp - 0x4c]
        push    ecx
        lea     ecx, [ebp - 0x2c]
        fadd    dword ptr [g_f80da5c]
        fst     dword ptr [ebp - 0x34]
        fstp    dword ptr [ebp + 0xffffff40]
        call    FUN_0041c7d0
        fld     dword ptr [edi + 0x50]
        lea     edx, [ebp + 0xfffffd78]
        fadd    st(0), st(0)
        push    edx
        fild    dword ptr [edi + 0x5c]
        lea     eax, [ebp + 0xffffff38]
        push    eax
        lea     ecx, [ebp - 0x2c]
        fdiv    st(0), st(1)
        fst     dword ptr [ebp - 0x20]
        fmul    dword ptr [ebp - 0x2c]
        fchs
        fstp    dword ptr [ebp - 0x18]
        fild    dword ptr [edi + 0x60]
        fdiv    st(0), st(1)
        fstp    dword ptr [ebp - 0x10]
        fstp    st(0)
        fld     dword ptr [ebp - 0x10]
        fmul    dword ptr [ebp - 0x24]
        fchs
        fstp    dword ptr [ebp - 0xc]
        call    FUN_0041c7d0
        fld     dword ptr [ebp - 0x20]
        fmul    dword ptr [ebp - 0x2c]
        push    0x42640000
        push    0
        push    0
        fchs
        lea     ecx, [ebp - 0x34]
        push    ecx
        fstp    dword ptr [ebp - 0x14]
        fld     dword ptr [ebp - 0x10]
        lea     edx, [ebp - 0x14]
        fmul    dword ptr [ebp - 0x24]
        push    edx
        lea     eax, [ebp - 0xc]
        push    eax
        lea     ecx, [ebp - 0x18]
        fchs
        push    ecx
        fstp    dword ptr [ebp - 0x34]
        mov     ecx, edi
        call    FUN_00674390
        fld     dword ptr [ebp - 0x18]
        fcomp   dword ptr [g_f76d598]
        fnstsw  ax
        test    ah, 0x40
        jnz     l_71e12
        fld     dword ptr [ebp + 0xffffff5c]
        push    0xffff0000
        fadd    dword ptr [ebp - 0x18]
        fstp    dword ptr [ebp - 0x18]
        fld     dword ptr [ebp + 0xffffff60]
        fadd    dword ptr [ebp - 0xc]
        fstp    dword ptr [ebp - 0xc]
        fld     dword ptr [ebp + 0xffffff5c]
        fadd    dword ptr [ebp - 0x14]
        fstp    dword ptr [ebp - 0x14]
        fld     dword ptr [ebp + 0xffffff60]
        fadd    dword ptr [ebp - 0x34]
        fstp    dword ptr [ebp - 0x34]
        fld     dword ptr [ebp - 0x34]
        call    FUN_0075db4a
        fld     dword ptr [ebp - 0x14]
        push    eax
        call    FUN_0075db4a
        fld     dword ptr [ebp - 0xc]
        push    eax
        call    FUN_0075db4a
        fld     dword ptr [ebp - 0x18]
        push    eax
        call    FUN_0075db4a
        push    eax
        call    FUN_0055eed0
        add     esp, 0x14
    l_71e12:
        mov     eax, dword ptr [ebp - 8]
        inc     esi
        cmp     esi, eax
        jl      l_71c77
    l_71e1e:
        mov     ecx, dword ptr [ebp - 0x1c]
        lea     edx, [ebp + 0xffffff54]
        push    edx
        call    FUN_004f86c0
        mov     eax, dword ptr [ebp + 0xffffff58]
        xor     esi, esi
        test    eax, eax
        mov     dword ptr [ebp - 8], eax
        jle     l_71fe6
        mov     ecx, eax
    l_71e42:
        mov     eax, dword ptr [ebp + 0xffffff54]
        fld     dword ptr [eax + esi*8]
        dec     ecx
        cmp     esi, ecx
        fstp    dword ptr [ebp - 0x14]
        fld     dword ptr [eax + esi*8 + 4]
        fstp    dword ptr [ebp - 0xc]
        jnz     l_71e64
        mov     ecx, dword ptr [eax]
        mov     dword ptr [ebp - 0x18], ecx
        fld     dword ptr [eax + 4]
        jmp     l_71e6f
    l_71e64:
        fld     dword ptr [eax + esi*8 + 8]
        fstp    dword ptr [ebp - 0x18]
        fld     dword ptr [eax + esi*8 + 0xc]
    l_71e6f:
        fld     dword ptr [ebp - 0x14]
        mov     dword ptr [ebp - 0x48], 0
        fmul    dword ptr [g_f7971e8]
        mov     dword ptr [ebp + 0xffffff3c], 0
        fadd    dword ptr [g_f80da60]
        fstp    dword ptr [ebp - 0x14]
        mov     edx, dword ptr [ebp - 0x14]
        fld     dword ptr [ebp - 0x18]
        mov     dword ptr [ebp - 0x4c], edx
        fmul    dword ptr [g_f7971e8]
        lea     edx, [ebp + 0xfffffd78]
        push    edx
        fadd    dword ptr [g_f80da60]
        fstp    dword ptr [ebp - 0x18]
        mov     ecx, dword ptr [ebp - 0x18]
        fld     dword ptr [ebp - 0xc]
        mov     dword ptr [ebp + 0xffffff38], ecx
        fmul    dword ptr [g_f7971e8]
        lea     ecx, [ebp - 0x2c]
        fadd    dword ptr [g_f80da5c]
        fstp    dword ptr [ebp - 0xc]
        mov     eax, dword ptr [ebp - 0xc]
        mov     dword ptr [ebp - 0x44], eax
        fmul    dword ptr [g_f7971e8]
        lea     eax, [ebp - 0x4c]
        push    eax
        fadd    dword ptr [g_f80da5c]
        fst     dword ptr [ebp - 0x34]
        fstp    dword ptr [ebp + 0xffffff40]
        call    FUN_0041c7d0
        fld     dword ptr [edi + 0x50]
        lea     ecx, [ebp + 0xfffffd78]
        fadd    st(0), st(0)
        push    ecx
        fild    dword ptr [edi + 0x5c]
        lea     edx, [ebp + 0xffffff38]
        push    edx
        lea     ecx, [ebp - 0x2c]
        fdiv    st(0), st(1)
        fst     dword ptr [ebp - 0x20]
        fmul    dword ptr [ebp - 0x2c]
        fchs
        fstp    dword ptr [ebp - 0x14]
        fild    dword ptr [edi + 0x60]
        fdiv    st(0), st(1)
        fstp    dword ptr [ebp - 0x10]
        fstp    st(0)
        fld     dword ptr [ebp - 0x10]
        fmul    dword ptr [ebp - 0x24]
        fchs
        fstp    dword ptr [ebp - 0xc]
        call    FUN_0041c7d0
        fld     dword ptr [ebp - 0x20]
        fmul    dword ptr [ebp - 0x2c]
        push    0x42640000
        push    0
        push    0
        fchs
        lea     eax, [ebp - 0x34]
        fstp    dword ptr [ebp - 0x18]
        fld     dword ptr [ebp - 0x10]
        push    eax
        fmul    dword ptr [ebp - 0x24]
        lea     ecx, [ebp - 0x18]
        push    ecx
        lea     edx, [ebp - 0xc]
        fchs
        push    edx
        lea     eax, [ebp - 0x14]
        fstp    dword ptr [ebp - 0x34]
        push    eax
        mov     ecx, edi
        call    FUN_00674390
        fld     dword ptr [ebp - 0x14]
        fcomp   dword ptr [g_f76d598]
        fnstsw  ax
        test    ah, 0x40
        jnz     l_71fda
        fld     dword ptr [ebp - 0x14]
        push    0xffff8000
        fadd    dword ptr [ebp + 0xffffff5c]
        fstp    dword ptr [ebp - 0x14]
        fld     dword ptr [ebp - 0xc]
        fadd    dword ptr [ebp + 0xffffff60]
        fstp    dword ptr [ebp - 0xc]
        fld     dword ptr [ebp - 0x18]
        fadd    dword ptr [ebp + 0xffffff5c]
        fstp    dword ptr [ebp - 0x18]
        fld     dword ptr [ebp - 0x34]
        fadd    dword ptr [ebp + 0xffffff60]
        fstp    dword ptr [ebp - 0x34]
        fld     dword ptr [ebp - 0x34]
        call    FUN_0075db4a
        fld     dword ptr [ebp - 0x18]
        push    eax
        call    FUN_0075db4a
        fld     dword ptr [ebp - 0xc]
        push    eax
        call    FUN_0075db4a
        fld     dword ptr [ebp - 0x14]
        push    eax
        call    FUN_0075db4a
        push    eax
        call    FUN_0055eed0
        add     esp, 0x14
    l_71fda:
        mov     ecx, dword ptr [ebp - 8]
        inc     esi
        cmp     esi, ecx
        jl      l_71e42
    l_71fe6:
        lea     ecx, [ebp - 8]
        push    ecx
        lea     edx, [ebp - 0x3c]
        mov     esi, 0x10
        push    edx
        mov     ecx, ebx
        mov     dword ptr [ebp - 8], esi
        call    FUN_00561df0
        mov     eax, dword ptr [eax]
        lea     ecx, [ebp - 0x38]
        push    ecx
        mov     ecx, ebx
        mov     dword ptr [ebp - 0x10], eax
        call    FUN_00641000
        mov     edx, eax
        mov     eax, dword ptr [ebp - 0x10]
        cmp     eax, dword ptr [edx]
        jz      l_7201e
        mov     ecx, dword ptr [ebp - 8]
        cmp     ecx, dword ptr [eax + 0x10]
        jge     l_72055
    l_7201e:
        lea     edx, [ebp - 0x1c]
        push    edx
        lea     eax, [ebp - 8]
        push    eax
        lea     ecx, [ebp + 0xffffff4c]
        mov     dword ptr [ebp - 0x1c], 0
        call    FUN_00641050
        push    eax
        push    ecx
        lea     edx, [ebp - 0x10]
        mov     ecx, esp
        push    edx
        call    FUN_00561a30
        lea     eax, [ebp - 0x5c]
        push    eax
        mov     ecx, ebx
        call    FUN_005619f0
        mov     eax, dword ptr [eax]
        mov     dword ptr [ebp - 0x10], eax
    l_72055:
        mov     eax, dword ptr [eax + 0x14]
        fld     dword ptr [eax + 0xc]
        lea     edx, [ebp - 0x4c]
        fsub    dword ptr [eax + 4]
        push    edx
        fmul    dword ptr [eax + 0x14]
        fld     dword ptr [eax + 0x10]
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [eax + 0x18]
        mov     dword ptr [ebp - 0x44], 0
        fstp    dword ptr [ebp - 0x6c]
        mov     ecx, dword ptr [ebp - 0x6c]
        mov     dword ptr [ebp - 0x48], ecx
        lea     ecx, [ebp - 0x58]
        fstp    dword ptr [ebp - 0x4c]
        call    FUN_0040c410
        lea     eax, [ebp - 8]
        push    eax
        lea     ecx, [ebp - 0x3c]
        push    ecx
        mov     ecx, ebx
        mov     dword ptr [ebp - 8], esi
        call    FUN_00561df0
        mov     edx, dword ptr [eax]
        lea     eax, [ebp - 0x38]
        push    eax
        mov     ecx, ebx
        mov     dword ptr [ebp - 0x10], edx
        call    FUN_00641000
        mov     ecx, eax
        mov     eax, dword ptr [ebp - 0x10]
        cmp     eax, dword ptr [ecx]
        jz      l_720bc
        mov     edx, dword ptr [ebp - 8]
        cmp     edx, dword ptr [eax + 0x10]
        jge     l_720f3
    l_720bc:
        lea     eax, [ebp - 0x1c]
        push    eax
        lea     ecx, [ebp - 8]
        push    ecx
        lea     ecx, [ebp + 0xffffff4c]
        mov     dword ptr [ebp - 0x1c], 0
        call    FUN_00641050
        push    eax
        push    ecx
        lea     edx, [ebp - 0x10]
        mov     ecx, esp
        push    edx
        call    FUN_00561a30
        lea     eax, [ebp - 0x5c]
        push    eax
        mov     ecx, ebx
        call    FUN_005619f0
        mov     eax, dword ptr [eax]
        mov     dword ptr [ebp - 0x10], eax
    l_720f3:
        fld     dword ptr [edi + 0x7c]
        push    ecx
        mov     ecx, dword ptr [eax + 0x14]
        fchs
        fstp    dword ptr [esp]
        call    FUN_0055f510
        fild    dword ptr [edi + 0x54]
        lea     ecx, [ebp - 8]
        push    ecx
        lea     edx, [ebp - 0x3c]
        fstp    dword ptr [ebp - 0x4c]
        fild    dword ptr [edi + 0x58]
        push    edx
        mov     ecx, ebx
        mov     dword ptr [ebp - 8], esi
        fstp    dword ptr [ebp - 0x48]
        mov     dword ptr [ebp - 0x44], 0x3f666666
        call    FUN_00561df0
        mov     eax, dword ptr [eax]
        lea     ecx, [ebp - 0x38]
        push    ecx
        mov     ecx, ebx
        mov     dword ptr [ebp - 0x10], eax
        call    FUN_00641000
        mov     edx, eax
        mov     eax, dword ptr [ebp - 0x10]
        cmp     eax, dword ptr [edx]
        jz      l_7214a
        mov     ecx, dword ptr [ebp - 8]
        cmp     ecx, dword ptr [eax + 0x10]
        jge     l_72181
    l_7214a:
        lea     edx, [ebp - 0x1c]
        push    edx
        lea     eax, [ebp - 8]
        push    eax
        lea     ecx, [ebp + 0xffffff4c]
        mov     dword ptr [ebp - 0x1c], 0
        call    FUN_00641050
        push    eax
        push    ecx
        lea     edx, [ebp - 0x10]
        mov     ecx, esp
        push    edx
        call    FUN_00561a30
        lea     eax, [ebp - 0x5c]
        push    eax
        mov     ecx, ebx
        call    FUN_005619f0
        mov     eax, dword ptr [eax]
        mov     dword ptr [ebp - 0x10], eax
    l_72181:
        push    1
        push    0
        push    0x9600af00
        lea     ecx, [ebp - 0x58]
        push    ecx
        mov     ecx, dword ptr [eax + 0x14]
        lea     edx, [ebp - 0x4c]
        push    edx
        call    FUN_0055f5b0
        fld     dword ptr [edi + 0x50]
        mov     esi, dword ptr [edi + 0x6c]
        sub     esp, 8
        fstp    qword ptr [esp]
        lea     eax, [ebp + 0xfffffef8]
        push    0x797230
        push    eax
        mov     dword ptr [esi + 0x104], 0xffffffff
        call    dword ptr [g_p76b420]
        add     esp, 0x10
        push    0
        push    0
        lea     ecx, [ebp + 0xfffffef8]
        push    ecx
        mov     ecx, esi
        call    FUN_00560420
        fld     dword ptr [ebp + 0xffffff14]
        fadd    dword ptr [g_f79722c]
        mov     esi, dword ptr [esi]
        push    1
        push    0x3f666666
        push    ecx
        fstp    dword ptr [esp]
        push    ecx
        fld     dword ptr [ebp + 0xffffff10]
        lea     ecx, [ebp + 0xfffffe50]
        fadd    dword ptr [g_f797228]
        fsub    dword ptr [g_f797224]
        fstp    dword ptr [esp]
        call    FUN_00587830
        sub     esp, 0xc
        mov     ecx, esp
        push    eax
        call    FUN_00551870
        mov     ecx, dword ptr [edi + 0x6c]
        call    dword ptr [esi + 0x14]
        mov     edx, dword ptr [ebp - 0x64]
        mov     esi, dword ptr [edx + 0x3d4]
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x64]
        test    eax, eax
        jnz     l_72393
    l_7223a:
        lea     ecx, [ebp - 8]
        push    ecx
        lea     edx, [ebp - 0x3c]
        push    edx
        mov     ecx, ebx
        mov     dword ptr [ebp - 8], eax
        call    FUN_00561df0
        mov     eax, dword ptr [eax]
        lea     ecx, [ebp - 0x38]
        push    ecx
        mov     ecx, ebx
        mov     dword ptr [ebp - 0x10], eax
        call    FUN_00641000
        mov     edx, eax
        mov     eax, dword ptr [ebp - 0x10]
        cmp     eax, dword ptr [edx]
        jz      l_7226d
        mov     ecx, dword ptr [ebp - 8]
        cmp     ecx, dword ptr [eax + 0x10]
        jge     l_722a4
    l_7226d:
        lea     edx, [ebp - 0x1c]
        push    edx
        lea     eax, [ebp - 8]
        push    eax
        lea     ecx, [ebp + 0xffffff4c]
        mov     dword ptr [ebp - 0x1c], 0
        call    FUN_00641050
        push    eax
        push    ecx
        lea     edx, [ebp - 0x10]
        mov     ecx, esp
        push    edx
        call    FUN_00561a30
        lea     eax, [ebp - 0x5c]
        push    eax
        mov     ecx, ebx
        call    FUN_005619f0
        mov     eax, dword ptr [eax]
        mov     dword ptr [ebp - 0x10], eax
    l_722a4:
        mov     eax, dword ptr [eax + 0x14]
        fld     dword ptr [eax + 0xc]
        lea     ecx, [ebp - 0x4c]
        fsub    dword ptr [eax + 4]
        push    ecx
        lea     ecx, [ebp - 0x70]
        fmul    dword ptr [eax + 0x14]
        mov     dword ptr [ebp - 0x44], 0
        fstp    dword ptr [ebp - 0x4c]
        fld     dword ptr [eax + 0x10]
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [eax + 0x18]
        fstp    dword ptr [ebp - 0x48]
        call    FUN_0040c5d0
        lea     edx, [ebp - 0x70]
        push    edx
        lea     ecx, [ebp + 0xffffff04]
        call    FUN_0040c410
        fld     dword ptr [ebp + 0xffffff10]
        fadd    dword ptr [g_f797220]
        lea     eax, [ebp - 8]
        push    eax
        lea     ecx, [ebp - 0x3c]
        fsub    dword ptr [g_f79721c]
        push    ecx
        mov     ecx, ebx
        mov     dword ptr [ebp - 8], 0
        fstp    dword ptr [ebp - 0x4c]
        fld     dword ptr [ebp + 0xffffff14]
        mov     dword ptr [ebp - 0x44], 0x3f666666
        fadd    dword ptr [g_f797218]
        fstp    dword ptr [ebp - 0x48]
        call    FUN_00561df0
        mov     edx, dword ptr [eax]
        lea     eax, [ebp - 0x38]
        push    eax
        mov     ecx, ebx
        mov     dword ptr [ebp - 0x10], edx
        call    FUN_00641000
        mov     ecx, eax
        mov     eax, dword ptr [ebp - 0x10]
        cmp     eax, dword ptr [ecx]
        jz      l_72343
        mov     edx, dword ptr [ebp - 8]
        cmp     edx, dword ptr [eax + 0x10]
        jge     l_7237a
    l_72343:
        lea     eax, [ebp - 0x1c]
        push    eax
        lea     ecx, [ebp - 8]
        push    ecx
        lea     ecx, [ebp + 0xffffff4c]
        mov     dword ptr [ebp - 0x1c], 0
        call    FUN_00641050
        push    eax
        push    ecx
        lea     edx, [ebp - 0x10]
        mov     ecx, esp
        push    edx
        call    FUN_00561a30
        lea     eax, [ebp - 0x5c]
        push    eax
        mov     ecx, ebx
        call    FUN_005619f0
        mov     eax, dword ptr [eax]
        mov     dword ptr [ebp - 0x10], eax
    l_7237a:
        push    0
        push    0
        push    -1
        lea     ecx, [ebp + 0xffffff04]
        push    ecx
        mov     ecx, dword ptr [eax + 0x14]
        lea     edx, [ebp - 0x4c]
        push    edx
        call    FUN_0055f5b0
    l_72393:
        mov     eax, dword ptr [esi + 0x180]
        test    eax, eax
        mov     dword ptr [ebp - 8], 0
        jle     l_72e7c
        mov     dword ptr [ebp + 0xffffff68], 0x254
    l_723b2:
        mov     eax, dword ptr [ebp + 0xffffff68]
        mov     ecx, dword ptr [esi + eax]
        add     ecx, 0x10
        call    FUN_0041fd80
        test    eax, eax
        mov     dword ptr [ebp - 0xc], eax
        jz      l_72e4c
        mov     esi, eax
        mov     eax, dword ptr [esi + 0x2fc]
        test    eax, eax
        mov     byte ptr [ebp - 1], 1
        jnz     l_723e2
        mov     byte ptr [ebp - 1], 0
    l_723e2:
        mov     al, byte ptr [esi + 0xdc]
        test    al, al
        jz      l_723f0
        mov     byte ptr [ebp - 1], 1
    l_723f0:
        mov     ecx, dword ptr [esi + 0x10]
        shr     ecx, 0x13
        test    cl, 1
        jz      l_723ff
        mov     byte ptr [ebp - 1], 0
    l_723ff:
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x60]
        mov     edi, eax
        test    edi, edi
        jz      l_7241c
        mov     ecx, dword ptr [ebp - 0x64]
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0x60]
        test    eax, eax
        jz      l_7241c
        cmp     eax, edi
        jz      l_7242d
    l_7241c:
        mov     ecx, dword ptr [ebp - 0x40]
        mov     eax, dword ptr [ecx + 0x80]
        test    eax, eax
        jz      l_7242d
        mov     byte ptr [ebp - 1], 0
    l_7242d:
        mov     edx, dword ptr [ebp - 0x40]
        cmp     dword ptr [edx + 0x80], 2
        jnz     l_7243d
        mov     byte ptr [ebp - 1], 0
    l_7243d:
        mov     esi, dword ptr [esi + 0xd8]
        add     esi, 0x80
        push    esi
        lea     ecx, [ebp - 0x4c]
        call    FUN_00419480
        fld     dword ptr [ebp - 0x48]
        fcomp   dword ptr [g_f77d140]
        fnstsw  ax
        test    ah, 1
        jnz     l_72e4c
        mov     al, byte ptr [ebp - 1]
        test    al, al
        jz      l_72e4c
        mov     ecx, 0xc
        lea     edi, [ebp + 0xfffffd48]
        rep     movsd
        lea     eax, [ebp + 0xfffffd78]
        lea     ecx, [ebp + 0xfffffd48]
        lea     edx, [ebp + 0xfffffe14]
        mov     dword ptr [ebp + 0xffffff2c], eax
        mov     dword ptr [ebp + 0xffffff34], ecx
        mov     dword ptr [ebp - 0x1c], edx
        mov     edx, dword ptr [ebp + 0xffffff34]
        push    esi
        mov     esi, dword ptr [ebp + 0xffffff2c]
        mov     eax, dword ptr [ebp - 0x1c]
        fld     dword ptr [edx]
        fmul    dword ptr [esi]
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 4]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 4]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 4]
        fxch    st(1)
        fstp    dword ptr [eax]
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 8]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 4]
        fxch    st(1)
        fstp    dword ptr [eax + 4]
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0xc]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 4]
        fxch    st(1)
        fstp    dword ptr [eax + 8]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fadd    dword ptr [esi + 0xc]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x18]
        fxch    st(1)
        fstp    dword ptr [eax + 0xc]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 4]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x10]
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 8]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x14]
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0xc]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x18]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fadd    dword ptr [esi + 0x1c]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x28]
        fxch    st(1)
        fstp    dword ptr [eax + 0x1c]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 4]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x20]
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 8]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x24]
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0xc]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x28]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        faddp   st(1), st(0)
        fadd    dword ptr [esi + 0x2c]
        fstp    dword ptr [eax + 0x2c]
        pop     esi
        mov     eax, dword ptr [ebp + 0xfffffe40]
        mov     dword ptr [ebp - 0x24], eax
        mov     eax, dword ptr [ebp - 0x40]
        add     eax, 0x14
        fld     dword ptr [eax + 0x3c]
        fadd    st(0), st(0)
        fild    dword ptr [eax + 0x48]
        fdiv    st(0), st(1)
        fmul    dword ptr [ebp + 0xfffffe20]
        fchs
        fadd    dword ptr [ebp + 0xffffff5c]
        fstp    dword ptr [ebp - 0x2c]
        fild    dword ptr [eax + 0x4c]
        fdiv    st(0), st(1)
        fmul    dword ptr [ebp + 0xfffffe40]
        fchs
        fadd    dword ptr [ebp + 0xffffff60]
        fstp    dword ptr [ebp - 0x28]
        fstp    st(0)
        fld     dword ptr [eax]
        fadd    dword ptr [g_f76d040]
        fcomp   dword ptr [ebp - 0x2c]
        fnstsw  ax
        test    ah, 1
        jz      l_72e4c
        mov     ecx, dword ptr [ebp - 0x40]
        fld     dword ptr [ecx + 0x18]
        fadd    dword ptr [g_f76d040]
        fcomp   dword ptr [ebp - 0x28]
        fnstsw  ax
        test    ah, 1
        jz      l_72e4c
        fld     dword ptr [ecx + 0x20]
        fadd    dword ptr [ecx + 0x14]
        fsub    dword ptr [g_f78d0e0]
        fcomp   dword ptr [ebp - 0x2c]
        fnstsw  ax
        test    ah, 0x41
        jnz     l_72e4c
        fld     dword ptr [ecx + 0x24]
        fadd    dword ptr [ecx + 0x18]
        fsub    dword ptr [g_f78d0e0]
        fcomp   dword ptr [ebp - 0x28]
        fnstsw  ax
        test    ah, 0x41
        jnz     l_72e4c
        mov     ecx, dword ptr [ebp - 0xc]
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0x60]
        mov     esi, eax
        xor     edi, edi
        cmp     esi, edi
        jnz     l_726df
        xor     eax, eax
        jmp     l_726f9
    l_726df:
        mov     ecx, dword ptr [ebp - 0x64]
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0x60]
        cmp     eax, edi
        jnz     l_726ef
        xor     eax, eax
        jmp     l_726f9
    l_726ef:
        xor     ecx, ecx
        cmp     eax, esi
        setnz   cl
        inc     ecx
        mov     eax, ecx
    l_726f9:
        sub     eax, edi
        jz      l_729ec
        sub     eax, 2
        jz      l_72872
        lea     edx, [ebp - 0x10]
        push    edx
        lea     eax, [ebp - 0x3c]
        mov     esi, 0xf
        push    eax
        mov     ecx, ebx
        mov     dword ptr [ebp - 0x10], esi
        call    FUN_00561df0
        mov     ecx, dword ptr [eax]
        lea     edx, [ebp - 0x38]
        mov     dword ptr [ebp - 0x20], ecx
        push    edx
        mov     ecx, ebx
        call    FUN_00641000
        mov     ecx, eax
        mov     eax, dword ptr [ebp - 0x20]
        cmp     eax, dword ptr [ecx]
        jz      l_72742
        mov     edx, dword ptr [ebp - 0x10]
        cmp     edx, dword ptr [eax + 0x10]
        jge     l_7277e
    l_72742:
        lea     eax, [ebp + 0xffffff1c]
        push    eax
        lea     ecx, [ebp - 0x10]
        push    ecx
        lea     ecx, [ebp + 0xffffff4c]
        mov     dword ptr [ebp + 0xffffff1c], edi
        call    FUN_00641050
        push    eax
        push    ecx
        lea     edx, [ebp - 0x20]
        mov     ecx, esp
        push    edx
        call    FUN_00561a30
        lea     eax, [ebp + 0xfffffe44]
        push    eax
        mov     ecx, ebx
        call    FUN_005619f0
        mov     eax, dword ptr [eax]
        mov     dword ptr [ebp - 0x20], eax
    l_7277e:
        mov     eax, dword ptr [eax + 0x14]
        fld     dword ptr [eax + 0xc]
        lea     ecx, [ebp + 0xffffff38]
        fsub    dword ptr [eax + 4]
        push    ecx
        lea     ecx, [ebp + 0xfffffdcc]
        fmul    dword ptr [eax + 0x14]
        mov     dword ptr [ebp + 0xffffff40], 0
        fstp    dword ptr [ebp + 0xffffff38]
        fld     dword ptr [eax + 0x10]
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [eax + 0x18]
        fstp    dword ptr [ebp + 0xffffff3c]
        call    FUN_0040c5d0
        lea     edx, [ebp + 0xfffffdcc]
        push    edx
        lea     ecx, [ebp - 0x58]
        call    FUN_0040c410
        fld     dword ptr [ebp - 0x2c]
        lea     eax, [ebp - 0x34]
        fstp    dword ptr [ebp + 0xfffffdfc]
        fld     dword ptr [ebp - 0x28]
        push    eax
        lea     ecx, [ebp + 0xfffffe6c]
        push    ecx
        fstp    dword ptr [ebp + 0xfffffe00]
        mov     ecx, ebx
        mov     dword ptr [ebp - 0x34], esi
        mov     dword ptr [ebp + 0xfffffe04], 0x3f666666
        call    FUN_00561df0
        mov     edx, dword ptr [eax]
        lea     eax, [ebp + 0xfffffe80]
        push    eax
        mov     ecx, ebx
        mov     dword ptr [ebp - 0x18], edx
        call    FUN_00641000
        mov     ecx, eax
        mov     eax, dword ptr [ebp - 0x18]
        cmp     eax, dword ptr [ecx]
        jz      l_7281f
        mov     edx, dword ptr [ebp - 0x34]
        cmp     edx, dword ptr [eax + 0x10]
        jge     l_7285b
    l_7281f:
        lea     eax, [ebp + 0xffffff28]
        push    eax
        lea     ecx, [ebp - 0x34]
        push    ecx
        lea     ecx, [ebp + 0xfffffd28]
        mov     dword ptr [ebp + 0xffffff28], edi
        call    FUN_00641050
        push    eax
        push    ecx
        lea     edx, [ebp - 0x18]
        mov     ecx, esp
        push    edx
        call    FUN_00561a30
        lea     eax, [ebp + 0xfffffecc]
        push    eax
        mov     ecx, ebx
        call    FUN_005619f0
        mov     eax, dword ptr [eax]
        mov     dword ptr [ebp - 0x18], eax
    l_7285b:
        push    1
        push    edi
        push    0xff0000ff
        lea     ecx, [ebp - 0x58]
        push    ecx
        lea     edx, [ebp + 0xfffffdfc]
        jmp     l_72b73
    l_72872:
        lea     eax, [ebp - 0x14]
        push    eax
        lea     ecx, [ebp + 0xfffffec8]
        push    ecx
        mov     esi, 0xc
        mov     ecx, ebx
        mov     dword ptr [ebp - 0x14], esi
        call    FUN_00561df0
        mov     edx, dword ptr [eax]
        lea     eax, [ebp + 0xfffffec0]
        push    eax
        mov     ecx, ebx
        mov     dword ptr [ebp + 0xffffff7c], edx
        call    FUN_00641000
        mov     ecx, eax
        mov     eax, dword ptr [ebp + 0xffffff7c]
        cmp     eax, dword ptr [ecx]
        jz      l_728b6
        mov     edx, dword ptr [ebp - 0x14]
        cmp     edx, dword ptr [eax + 0x10]
        jge     l_728f8
    l_728b6:
        lea     eax, [ebp + 0xffffff20]
        push    eax
        lea     ecx, [ebp - 0x14]
        push    ecx
        lea     ecx, [ebp + 0xfffffd40]
        mov     dword ptr [ebp + 0xffffff20], edi
        call    FUN_00641050
        push    eax
        push    ecx
        lea     edx, [ebp + 0xffffff7c]
        mov     ecx, esp
        push    edx
        call    FUN_00561a30
        lea     eax, [ebp + 0xfffffeb8]
        push    eax
        mov     ecx, ebx
        call    FUN_005619f0
        mov     eax, dword ptr [eax]
        mov     dword ptr [ebp + 0xffffff7c], eax
    l_728f8:
        mov     eax, dword ptr [eax + 0x14]
        fld     dword ptr [eax + 0xc]
        lea     ecx, [ebp + 0xfffffe08]
        fsub    dword ptr [eax + 4]
        push    ecx
        lea     ecx, [ebp + 0xfffffda8]
        fmul    dword ptr [eax + 0x14]
        mov     dword ptr [ebp + 0xfffffe10], 0
        fstp    dword ptr [ebp + 0xfffffe08]
        fld     dword ptr [eax + 0x10]
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [eax + 0x18]
        fstp    dword ptr [ebp + 0xfffffe0c]
        call    FUN_0040c5d0
        lea     edx, [ebp + 0xfffffda8]
        push    edx
        lea     ecx, [ebp - 0x58]
        call    FUN_0040c410
        fld     dword ptr [ebp - 0x2c]
        lea     eax, [ebp - 0x7c]
        fstp    dword ptr [ebp + 0xfffffe74]
        fld     dword ptr [ebp - 0x28]
        push    eax
        lea     ecx, [ebp + 0xfffffeb0]
        push    ecx
        fstp    dword ptr [ebp + 0xfffffe78]
        mov     ecx, ebx
        mov     dword ptr [ebp - 0x7c], esi
        mov     dword ptr [ebp + 0xfffffe7c], 0x3f666666
        call    FUN_00561df0
        mov     edx, dword ptr [eax]
        lea     eax, [ebp + 0xfffffea8]
        push    eax
        mov     ecx, ebx
        mov     dword ptr [ebp - 0x80], edx
        call    FUN_00641000
        mov     ecx, eax
        mov     eax, dword ptr [ebp - 0x80]
        cmp     eax, dword ptr [ecx]
        jz      l_72999
        mov     edx, dword ptr [ebp - 0x7c]
        cmp     edx, dword ptr [eax + 0x10]
        jge     l_729d5
    l_72999:
        lea     eax, [ebp + 0xffffff24]
        push    eax
        lea     ecx, [ebp - 0x7c]
        push    ecx
        lea     ecx, [ebp + 0xfffffd30]
        mov     dword ptr [ebp + 0xffffff24], edi
        call    FUN_00641050
        push    eax
        push    ecx
        lea     edx, [ebp - 0x80]
        mov     ecx, esp
        push    edx
        call    FUN_00561a30
        lea     eax, [ebp + 0xfffffea0]
        push    eax
        mov     ecx, ebx
        call    FUN_005619f0
        mov     eax, dword ptr [eax]
        mov     dword ptr [ebp - 0x80], eax
    l_729d5:
        push    1
        push    edi
        push    0xffff0000
        lea     ecx, [ebp - 0x58]
        push    ecx
        lea     edx, [ebp + 0xfffffe74]
        jmp     l_72b73
    l_729ec:
        lea     eax, [ebp + 0xffffff78]
        push    eax
        lea     ecx, [ebp + 0xfffffe9c]
        push    ecx
        mov     esi, 0xe
        mov     ecx, ebx
        mov     dword ptr [ebp + 0xffffff78], esi
        call    FUN_00561df0
        mov     edx, dword ptr [eax]
        lea     eax, [ebp + 0xfffffe64]
        push    eax
        mov     ecx, ebx
        mov     dword ptr [ebp + 0xffffff6c], edx
        call    FUN_00641000
        mov     ecx, eax
        mov     eax, dword ptr [ebp + 0xffffff6c]
        cmp     eax, dword ptr [ecx]
        jz      l_72a39
        mov     edx, dword ptr [ebp + 0xffffff78]
        cmp     edx, dword ptr [eax + 0x10]
        jge     l_72a7e
    l_72a39:
        lea     eax, [ebp + 0xffffff30]
        push    eax
        lea     ecx, [ebp + 0xffffff78]
        push    ecx
        lea     ecx, [ebp + 0xfffffd10]
        mov     dword ptr [ebp + 0xffffff30], edi
        call    FUN_00641050
        push    eax
        push    ecx
        lea     edx, [ebp + 0xffffff6c]
        mov     ecx, esp
        push    edx
        call    FUN_00561a30
        lea     eax, [ebp + 0xfffffe5c]
        push    eax
        mov     ecx, ebx
        call    FUN_005619f0
        mov     eax, dword ptr [eax]
        mov     dword ptr [ebp + 0xffffff6c], eax
    l_72a7e:
        mov     eax, dword ptr [eax + 0x14]
        fld     dword ptr [eax + 0xc]
        lea     edx, [ebp + 0xfffffed4]
        fsub    dword ptr [eax + 4]
        push    edx
        fmul    dword ptr [eax + 0x14]
        fld     dword ptr [eax + 0x10]
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [eax + 0x18]
        mov     dword ptr [ebp + 0xfffffedc], 0
        fstp    dword ptr [ebp + 0xfffffdb8]
        mov     ecx, dword ptr [ebp + 0xfffffdb8]
        mov     dword ptr [ebp + 0xfffffed8], ecx
        lea     ecx, [ebp - 0x58]
        fstp    dword ptr [ebp + 0xfffffed4]
        call    FUN_0040c410
        fld     dword ptr [ebp - 0x2c]
        lea     eax, [ebp + 0xffffff74]
        fstp    dword ptr [ebp + 0xfffffeec]
        fld     dword ptr [ebp - 0x28]
        push    eax
        lea     ecx, [ebp + 0xfffffe4c]
        push    ecx
        fstp    dword ptr [ebp + 0xfffffef0]
        mov     ecx, ebx
        mov     dword ptr [ebp + 0xffffff74], esi
        mov     dword ptr [ebp + 0xfffffef4], 0x3f666666
        call    FUN_00561df0
        mov     edx, dword ptr [eax]
        lea     eax, [ebp + 0xfffffed0]
        push    eax
        mov     ecx, ebx
        mov     dword ptr [ebp - 0x78], edx
        call    FUN_00641000
        mov     ecx, eax
        mov     eax, dword ptr [ebp - 0x78]
        cmp     eax, dword ptr [ecx]
        jz      l_72b22
        mov     edx, dword ptr [ebp + 0xffffff74]
        cmp     edx, dword ptr [eax + 0x10]
        jge     l_72b61
    l_72b22:
        lea     eax, [ebp + 0xffffff48]
        push    eax
        lea     ecx, [ebp + 0xffffff74]
        push    ecx
        lea     ecx, [ebp + 0xfffffd18]
        mov     dword ptr [ebp + 0xffffff48], edi
        call    FUN_00641050
        push    eax
        push    ecx
        lea     edx, [ebp - 0x78]
        mov     ecx, esp
        push    edx
        call    FUN_00561a30
        lea     eax, [ebp + 0xfffffe60]
        push    eax
        mov     ecx, ebx
        call    FUN_005619f0
        mov     eax, dword ptr [eax]
        mov     dword ptr [ebp - 0x78], eax
    l_72b61:
        push    1
        push    edi
        push    0xff00ff00
        lea     ecx, [ebp - 0x58]
        push    ecx
        lea     edx, [ebp + 0xfffffeec]
    l_72b73:
        mov     ecx, dword ptr [eax + 0x14]
        push    edx
        call    FUN_0055f5b0
        mov     esi, dword ptr [ebp - 0x40]
        lea     ecx, [esi + 0x64]
        call    FUN_0041fd80
        mov     ecx, dword ptr [ebp - 0xc]
        cmp     ecx, eax
        jnz     l_72cd5
        lea     eax, [ebp - 0xc]
        push    eax
        lea     ecx, [ebp + 0xfffffec4]
        push    ecx
        mov     esi, 0xb
        mov     ecx, ebx
        mov     dword ptr [ebp - 0xc], esi
        call    FUN_00641010
        mov     eax, dword ptr [eax]
        cmp     eax, dword ptr [ebx]
        mov     dword ptr [ebp - 0x30], eax
        jz      l_72bbd
        mov     edx, dword ptr [ebp - 0xc]
        cmp     edx, dword ptr [eax + 0x10]
        jge     l_72bf9
    l_72bbd:
        lea     eax, [ebp + 0xffffff44]
        push    eax
        lea     ecx, [ebp - 0xc]
        push    ecx
        lea     ecx, [ebp + 0xfffffd20]
        mov     dword ptr [ebp + 0xffffff44], edi
        call    FUN_00641050
        push    eax
        push    ecx
        lea     edx, [ebp - 0x30]
        mov     ecx, esp
        push    edx
        call    FUN_00561a30
        lea     eax, [ebp + 0xfffffe70]
        push    eax
        mov     ecx, ebx
        call    FUN_005619f0
        mov     eax, dword ptr [eax]
        mov     dword ptr [ebp - 0x30], eax
    l_72bf9:
        mov     eax, dword ptr [eax + 0x14]
        fld     dword ptr [eax + 0xc]
        lea     ecx, [ebp + 0xfffffee0]
        fsub    dword ptr [eax + 4]
        push    ecx
        lea     ecx, [ebp + 0xfffffdf0]
        fmul    dword ptr [eax + 0x14]
        mov     dword ptr [ebp + 0xfffffee8], 0
        fstp    dword ptr [ebp + 0xfffffee0]
        fld     dword ptr [eax + 0x10]
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [eax + 0x18]
        fstp    dword ptr [ebp + 0xfffffee4]
        call    FUN_0040c5d0
        lea     edx, [ebp + 0xfffffdf0]
        push    edx
        lea     ecx, [ebp - 0x58]
        call    FUN_0040c410
        fld     dword ptr [ebp - 0x2c]
        lea     eax, [ebp - 0xc]
        fstp    dword ptr [ebp + 0xffffff04]
        fld     dword ptr [ebp - 0x28]
        push    eax
        lea     ecx, [ebp + 0xfffffebc]
        push    ecx
        fstp    dword ptr [ebp + 0xffffff08]
        mov     ecx, ebx
        mov     dword ptr [ebp - 0xc], esi
        mov     dword ptr [ebp + 0xffffff0c], 0x3f666666
        call    FUN_00641010
        mov     eax, dword ptr [eax]
        cmp     eax, dword ptr [ebx]
        mov     dword ptr [ebp - 0x60], eax
        jz      l_72c87
        mov     edx, dword ptr [ebp - 0xc]
        cmp     edx, dword ptr [eax + 0x10]
        jge     l_72cbd
    l_72c87:
        lea     eax, [ebp - 0x5c]
        push    eax
        lea     ecx, [ebp - 0xc]
        push    ecx
        lea     ecx, [ebp + 0xfffffd38]
        mov     dword ptr [ebp - 0x5c], edi
        call    FUN_00641050
        push    eax
        push    ecx
        lea     edx, [ebp - 0x60]
        mov     ecx, esp
        push    edx
        call    FUN_00561a30
        lea     eax, [ebp + 0xfffffe48]
        push    eax
        mov     ecx, ebx
        call    FUN_005619f0
        mov     eax, dword ptr [eax]
        mov     dword ptr [ebp - 0x60], eax
    l_72cbd:
        push    1
        push    edi
        push    0xff00ff00
        lea     ecx, [ebp - 0x58]
        push    ecx
        lea     edx, [ebp + 0xffffff04]
        push    edx
        jmp     l_72e44
    l_72cd5:
        mov     eax, dword ptr [ecx + 0x30]
        push    eax
        mov     ecx, esi
        call    FUN_006741f0
        test    al, al
        jz      l_72e4c
        lea     ecx, [ebp - 0xc]
        push    ecx
        lea     edx, [ebp + 0xfffffeb4]
        mov     esi, 0xd
        push    edx
        mov     ecx, ebx
        mov     dword ptr [ebp - 0xc], esi
        call    FUN_00641010
        mov     eax, dword ptr [eax]
        lea     ecx, [ebp + 0xfffffe68]
        push    ecx
        mov     ecx, ebx
        mov     dword ptr [ebp - 0x74], eax
        call    FUN_00641000
        mov     edx, eax
        mov     ecx, dword ptr [edx]
        mov     eax, dword ptr [ebp - 0x74]
        cmp     eax, ecx
        mov     ecx, dword ptr [ebp - 0xc]
        jz      l_72d28
        cmp     ecx, dword ptr [eax + 0x10]
        jge     l_72d5a
    l_72d28:
        lea     eax, [ebp + 0xfffffe8c]
        push    eax
        push    ecx
        mov     dword ptr [ebp + 0xfffffe8c], ecx
        lea     edx, [ebp - 0x74]
        mov     ecx, esp
        push    edx
        mov     dword ptr [ebp + 0xfffffe90], edi
        call    FUN_00561a30
        lea     eax, [ebp + 0xfffffeac]
        push    eax
        mov     ecx, ebx
        call    FUN_005619f0
        mov     eax, dword ptr [eax]
        mov     dword ptr [ebp - 0x74], eax
    l_72d5a:
        mov     eax, dword ptr [eax + 0x14]
        fld     dword ptr [eax + 0xc]
        lea     ecx, [ebp - 0x70]
        fsub    dword ptr [eax + 4]
        push    ecx
        lea     ecx, [ebp + 0xfffffde4]
        fmul    dword ptr [eax + 0x14]
        mov     dword ptr [ebp - 0x68], 0
        fstp    dword ptr [ebp - 0x70]
        fld     dword ptr [eax + 0x10]
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [eax + 0x18]
        fstp    dword ptr [ebp - 0x6c]
        call    FUN_0040c5d0
        lea     edx, [ebp + 0xfffffde4]
        push    edx
        lea     ecx, [ebp - 0x58]
        call    FUN_0040c410
        fld     dword ptr [ebp - 0x28]
        push    0x3f666666
        push    ecx
        fstp    dword ptr [esp]
        fld     dword ptr [ebp - 0x2c]
        push    ecx
        fstp    dword ptr [esp]
        lea     ecx, [ebp + 0xfffffdd8]
        mov     dword ptr [ebp - 0xc], esi
        call    FUN_0040c9c0
        lea     eax, [ebp - 0xc]
        push    eax
        lea     ecx, [ebp + 0xfffffe88]
        push    ecx
        mov     ecx, ebx
        call    FUN_00641010
        mov     edx, dword ptr [eax]
        lea     eax, [ebp + 0xfffffea4]
        push    eax
        mov     ecx, ebx
        mov     dword ptr [ebp + 0xffffff70], edx
        call    FUN_00641000
        mov     ecx, eax
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [ebp + 0xffffff70]
        cmp     eax, edx
        mov     ecx, dword ptr [ebp - 0xc]
        jz      l_72df9
        cmp     ecx, dword ptr [eax + 0x10]
        jge     l_72e31
    l_72df9:
        lea     edx, [ebp + 0xfffffe94]
        push    edx
        push    ecx
        mov     dword ptr [ebp + 0xfffffe94], ecx
        lea     eax, [ebp + 0xffffff70]
        mov     ecx, esp
        push    eax
        mov     dword ptr [ebp + 0xfffffe98], edi
        call    FUN_00561a30
        lea     ecx, [ebp + 0xfffffe84]
        push    ecx
        mov     ecx, ebx
        call    FUN_005619f0
        mov     eax, dword ptr [eax]
        mov     dword ptr [ebp + 0xffffff70], eax
    l_72e31:
        push    1
        push    edi
        push    0xff00ff00
        lea     edx, [ebp - 0x58]
        push    edx
        lea     ecx, [ebp + 0xfffffdd8]
        push    ecx
    l_72e44:
        mov     ecx, dword ptr [eax + 0x14]
        call    FUN_0055f5b0
    l_72e4c:
        mov     edx, dword ptr [ebp + 0xffffff68]
        mov     eax, dword ptr [ebp - 8]
        add     edx, 4
        mov     dword ptr [ebp + 0xffffff68], edx
        mov     edx, dword ptr [ebp - 0x64]
        mov     esi, dword ptr [edx + 0x3d4]
        mov     ecx, dword ptr [esi + 0x180]
        inc     eax
        cmp     eax, ecx
        mov     dword ptr [ebp - 8], eax
        jl      l_723b2
        mov     edi, dword ptr [ebp - 0x40]
    l_72e7c:
        mov     eax, dword ptr [ebp - 0x64]
        mov     eax, dword ptr [eax + 0x3d4]
        mov     ecx, dword ptr [eax + 0x17c]
        test    ecx, ecx
        mov     dword ptr [ebp - 8], 0
        jle     l_739a7
        mov     dword ptr [ebp - 0x30], 0x1d4
    l_72ea1:
        mov     ecx, dword ptr [ebp - 0x30]
        mov     ecx, dword ptr [eax + ecx]
        add     ecx, 0x10
        call    FUN_0041fd80
        test    eax, eax
        mov     dword ptr [ebp - 0xc], eax
        jz      l_7397d
        mov     ecx, eax
        mov     eax, dword ptr [ecx + 0x2fc]
        test    eax, eax
        mov     byte ptr [ebp - 1], 1
        jnz     l_72eec
        mov     edx, dword ptr [g_d7dab44]
        mov     eax, dword ptr [edx]
        xor     eax, dword ptr [g_d7dab40]
        mov     edx, dword ptr [eax + 0xc]
        xor     edx, 0x85739531
        mov     al, byte ptr [edx + 0x17]
        test    al, al
        jnz     l_72eec
        mov     byte ptr [ebp - 1], 0
    l_72eec:
        mov     al, byte ptr [ecx + 0xdc]
        test    al, al
        jz      l_72efa
        mov     byte ptr [ebp - 1], 1
    l_72efa:
        mov     eax, dword ptr [ecx + 0x10]
        shr     eax, 0x13
        test    al, 1
        jz      l_72f08
        mov     byte ptr [ebp - 1], 0
    l_72f08:
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0x60]
        mov     esi, eax
        test    esi, esi
        jz      l_72f23
        mov     ecx, dword ptr [ebp - 0x64]
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0x60]
        test    eax, eax
        jz      l_72f23
        cmp     eax, esi
        jz      l_72f34
    l_72f23:
        mov     ecx, dword ptr [ebp - 0x40]
        mov     eax, dword ptr [ecx + 0x80]
        test    eax, eax
        jz      l_72f34
        mov     byte ptr [ebp - 1], 0
    l_72f34:
        mov     edx, dword ptr [ebp - 0x40]
        cmp     dword ptr [edx + 0x80], 2
        jz      l_7397d
        mov     al, byte ptr [ebp - 1]
        test    al, al
        jz      l_7397d
        mov     eax, dword ptr [ebp - 0xc]
        mov     esi, dword ptr [eax + 0xd8]
        add     esi, 0x80
        mov     ecx, 0xc
        lea     edi, [ebp + 0xfffffd48]
        rep     movsd
        lea     ecx, [ebp + 0xfffffd78]
        lea     edx, [ebp + 0xfffffd48]
        lea     eax, [ebp + 0xfffffe14]
        mov     dword ptr [ebp + 0xffffff44], ecx
        mov     dword ptr [ebp + 0xffffff48], edx
        mov     dword ptr [ebp - 0x5c], eax
        mov     edx, dword ptr [ebp + 0xffffff48]
        push    esi
        mov     esi, dword ptr [ebp + 0xffffff44]
        mov     eax, dword ptr [ebp - 0x5c]
        fld     dword ptr [edx]
        fmul    dword ptr [esi]
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 4]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 4]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 4]
        fxch    st(1)
        fstp    dword ptr [eax]
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 8]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 4]
        fxch    st(1)
        fstp    dword ptr [eax + 4]
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0xc]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 4]
        fxch    st(1)
        fstp    dword ptr [eax + 8]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fadd    dword ptr [esi + 0xc]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x18]
        fxch    st(1)
        fstp    dword ptr [eax + 0xc]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 4]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x10]
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 8]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x14]
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0xc]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x18]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fadd    dword ptr [esi + 0x1c]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x28]
        fxch    st(1)
        fstp    dword ptr [eax + 0x1c]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 4]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x20]
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 8]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x24]
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0xc]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x28]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        faddp   st(1), st(0)
        fadd    dword ptr [esi + 0x2c]
        fstp    dword ptr [eax + 0x2c]
        pop     esi
        mov     eax, dword ptr [ebp - 0x40]
        mov     ecx, dword ptr [ebp + 0xfffffe40]
        fld     dword ptr [eax + 0x50]
        add     eax, 0x14
        fadd    st(0), st(0)
        mov     dword ptr [ebp - 0x24], ecx
        fild    dword ptr [eax + 0x48]
        fdiv    st(0), st(1)
        fmul    dword ptr [ebp + 0xfffffe20]
        fchs
        fadd    dword ptr [ebp + 0xffffff5c]
        fstp    dword ptr [ebp - 0x2c]
        fild    dword ptr [eax + 0x4c]
        fdiv    st(0), st(1)
        fmul    dword ptr [ebp + 0xfffffe40]
        fchs
        fadd    dword ptr [ebp + 0xffffff60]
        fstp    dword ptr [ebp - 0x28]
        fstp    st(0)
        fld     dword ptr [eax]
        fadd    dword ptr [g_f76d040]
        fcomp   dword ptr [ebp - 0x2c]
        fnstsw  ax
        test    ah, 1
        jz      l_7397d
        mov     ecx, dword ptr [ebp - 0x40]
        fld     dword ptr [ecx + 0x18]
        fadd    dword ptr [g_f76d040]
        fcomp   dword ptr [ebp - 0x28]
        fnstsw  ax
        test    ah, 1
        jz      l_7397d
        fld     dword ptr [ecx + 0x20]
        fadd    dword ptr [ecx + 0x14]
        fsub    dword ptr [g_f78d0e0]
        fcomp   dword ptr [ebp - 0x2c]
        fnstsw  ax
        test    ah, 0x41
        jnz     l_7397d
        fld     dword ptr [ecx + 0x24]
        fadd    dword ptr [ecx + 0x18]
        fsub    dword ptr [g_f78d0e0]
        fcomp   dword ptr [ebp - 0x28]
        fnstsw  ax
        test    ah, 0x41
        jnz     l_7397d
        mov     ecx, dword ptr [ebp - 0xc]
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0x60]
        mov     esi, eax
        xor     edi, edi
        cmp     esi, edi
        jnz     l_731cc
        xor     eax, eax
        jmp     l_731e6
    l_731cc:
        mov     ecx, dword ptr [ebp - 0x64]
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0x60]
        cmp     eax, edi
        jnz     l_731dc
        xor     eax, eax
        jmp     l_731e6
    l_731dc:
        xor     ecx, ecx
        cmp     eax, esi
        setnz   cl
        inc     ecx
        mov     eax, ecx
    l_731e6:
        sub     eax, edi
        jz      l_73507
        sub     eax, 2
        jz      l_73373
        lea     edx, [ebp + 0xffffff68]
        push    edx
        lea     eax, [ebp + 0xfffffe84]
        mov     esi, 0xf
        push    eax
        mov     ecx, ebx
        mov     dword ptr [ebp + 0xffffff68], esi
        call    FUN_00641010
        mov     ecx, dword ptr [eax]
        lea     edx, [ebp + 0xfffffea4]
        mov     dword ptr [ebp + 0xffffff70], ecx
        push    edx
        mov     ecx, ebx
        call    FUN_00641000
        mov     ecx, eax
        mov     eax, dword ptr [ebp + 0xffffff70]
        cmp     eax, dword ptr [ecx]
        jz      l_73244
        mov     edx, dword ptr [ebp + 0xffffff68]
        cmp     edx, dword ptr [eax + 0x10]
        jge     l_73289
    l_73244:
        lea     eax, [ebp + 0xffffff30]
        push    eax
        lea     ecx, [ebp + 0xffffff68]
        push    ecx
        lea     ecx, [ebp + 0xfffffd38]
        mov     dword ptr [ebp + 0xffffff30], edi
        call    FUN_00641050
        push    eax
        push    ecx
        lea     edx, [ebp + 0xffffff70]
        mov     ecx, esp
        push    edx
        call    FUN_00561a30
        lea     eax, [ebp + 0xfffffe88]
        push    eax
        mov     ecx, ebx
        call    FUN_005619f0
        mov     eax, dword ptr [eax]
        mov     dword ptr [ebp + 0xffffff70], eax
    l_73289:
        mov     eax, dword ptr [eax + 0x14]
        fld     dword ptr [eax + 0xc]
        lea     ecx, [ebp - 0x70]
        fsub    dword ptr [eax + 4]
        push    ecx
        lea     ecx, [ebp + 0xfffffdd8]
        fmul    dword ptr [eax + 0x14]
        mov     dword ptr [ebp - 0x68], 0
        fstp    dword ptr [ebp - 0x70]
        fld     dword ptr [eax + 0x10]
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [eax + 0x18]
        fstp    dword ptr [ebp - 0x6c]
        call    FUN_0040c5d0
        lea     edx, [ebp + 0xfffffdd8]
        push    edx
        lea     ecx, [ebp - 0x58]
        call    FUN_0040c410
        fld     dword ptr [ebp - 0x28]
        push    0x3f666666
        push    ecx
        fstp    dword ptr [esp]
        fld     dword ptr [ebp - 0x2c]
        push    ecx
        fstp    dword ptr [esp]
        lea     ecx, [ebp + 0xfffffde4]
        mov     dword ptr [ebp - 0x74], esi
        call    FUN_0040c9c0
        lea     eax, [ebp - 0x74]
        push    eax
        lea     ecx, [ebp + 0xfffffeac]
        push    ecx
        mov     ecx, ebx
        call    FUN_00641010
        mov     edx, dword ptr [eax]
        lea     eax, [ebp + 0xfffffe68]
        push    eax
        mov     ecx, ebx
        mov     dword ptr [ebp - 0x78], edx
        call    FUN_00641000
        mov     ecx, eax
        mov     eax, dword ptr [ebp - 0x78]
        cmp     eax, dword ptr [ecx]
        jz      l_73320
        mov     edx, dword ptr [ebp - 0x74]
        cmp     edx, dword ptr [eax + 0x10]
        jge     l_7335c
    l_73320:
        lea     eax, [ebp + 0xffffff24]
        push    eax
        lea     ecx, [ebp - 0x74]
        push    ecx
        lea     ecx, [ebp + 0xfffffd20]
        mov     dword ptr [ebp + 0xffffff24], edi
        call    FUN_00641050
        push    eax
        push    ecx
        lea     edx, [ebp - 0x78]
        mov     ecx, esp
        push    edx
        call    FUN_00561a30
        lea     eax, [ebp + 0xfffffeb4]
        push    eax
        mov     ecx, ebx
        call    FUN_005619f0
        mov     eax, dword ptr [eax]
        mov     dword ptr [ebp - 0x78], eax
    l_7335c:
        push    1
        push    edi
        push    0xff0000ff
        lea     ecx, [ebp - 0x58]
        push    ecx
        lea     edx, [ebp + 0xfffffde4]
        jmp     l_73676
    l_73373:
        lea     eax, [ebp + 0xffffff74]
        push    eax
        lea     ecx, [ebp + 0xfffffe48]
        push    ecx
        mov     esi, 0xc
        mov     ecx, ebx
        mov     dword ptr [ebp + 0xffffff74], esi
        call    FUN_00641010
        mov     edx, dword ptr [eax]
        lea     eax, [ebp + 0xfffffebc]
        push    eax
        mov     ecx, ebx
        mov     dword ptr [ebp + 0xffffff6c], edx
        call    FUN_00641000
        mov     ecx, eax
        mov     eax, dword ptr [ebp + 0xffffff6c]
        cmp     eax, dword ptr [ecx]
        jz      l_733c0
        mov     edx, dword ptr [ebp + 0xffffff74]
        cmp     edx, dword ptr [eax + 0x10]
        jge     l_73405
    l_733c0:
        lea     eax, [ebp + 0xffffff20]
        push    eax
        lea     ecx, [ebp + 0xffffff74]
        push    ecx
        lea     ecx, [ebp + 0xfffffd18]
        mov     dword ptr [ebp + 0xffffff20], edi
        call    FUN_00641050
        push    eax
        push    ecx
        lea     edx, [ebp + 0xffffff6c]
        mov     ecx, esp
        push    edx
        call    FUN_00561a30
        lea     eax, [ebp + 0xfffffe70]
        push    eax
        mov     ecx, ebx
        call    FUN_005619f0
        mov     eax, dword ptr [eax]
        mov     dword ptr [ebp + 0xffffff6c], eax
    l_73405:
        mov     eax, dword ptr [eax + 0x14]
        fld     dword ptr [eax + 0xc]
        lea     ecx, [ebp + 0xffffff04]
        fsub    dword ptr [eax + 4]
        push    ecx
        lea     ecx, [ebp + 0xfffffdf0]
        fmul    dword ptr [eax + 0x14]
        mov     dword ptr [ebp + 0xffffff0c], 0
        fstp    dword ptr [ebp + 0xffffff04]
        fld     dword ptr [eax + 0x10]
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [eax + 0x18]
        fstp    dword ptr [ebp + 0xffffff08]
        call    FUN_0040c5d0
        lea     edx, [ebp + 0xfffffdf0]
        push    edx
        lea     ecx, [ebp - 0x58]
        call    FUN_0040c410
        fld     dword ptr [ebp - 0x28]
        push    0x3f666666
        push    ecx
        fstp    dword ptr [esp]
        fld     dword ptr [ebp - 0x2c]
        push    ecx
        fstp    dword ptr [esp]
        lea     ecx, [ebp + 0xfffffdb4]
        mov     dword ptr [ebp + 0xffffff78], esi
        call    FUN_0040c9c0
        lea     eax, [ebp + 0xffffff78]
        push    eax
        lea     ecx, [ebp + 0xfffffec4]
        push    ecx
        mov     ecx, ebx
        call    FUN_00641010
        mov     edx, dword ptr [eax]
        lea     eax, [ebp + 0xfffffe60]
        push    eax
        mov     ecx, ebx
        mov     dword ptr [ebp - 0x80], edx
        call    FUN_00641000
        mov     ecx, eax
        mov     eax, dword ptr [ebp - 0x80]
        cmp     eax, dword ptr [ecx]
        jz      l_734b1
        mov     edx, dword ptr [ebp + 0xffffff78]
        cmp     edx, dword ptr [eax + 0x10]
        jge     l_734f0
    l_734b1:
        lea     eax, [ebp + 0xffffff28]
        push    eax
        lea     ecx, [ebp + 0xffffff78]
        push    ecx
        lea     ecx, [ebp + 0xfffffd10]
        mov     dword ptr [ebp + 0xffffff28], edi
        call    FUN_00641050
        push    eax
        push    ecx
        lea     edx, [ebp - 0x80]
        mov     ecx, esp
        push    edx
        call    FUN_00561a30
        lea     eax, [ebp + 0xfffffed0]
        push    eax
        mov     ecx, ebx
        call    FUN_005619f0
        mov     eax, dword ptr [eax]
        mov     dword ptr [ebp - 0x80], eax
    l_734f0:
        push    1
        push    edi
        push    0xffff0000
        lea     ecx, [ebp - 0x58]
        push    ecx
        lea     edx, [ebp + 0xfffffdb4]
        jmp     l_73676
    l_73507:
        lea     eax, [ebp - 0x1c]
        push    eax
        lea     ecx, [ebp + 0xfffffe4c]
        push    ecx
        mov     esi, 0xe
        mov     ecx, ebx
        mov     dword ptr [ebp - 0x1c], esi
        call    FUN_00641010
        mov     edx, dword ptr [eax]
        lea     eax, [ebp + 0xfffffe5c]
        push    eax
        mov     ecx, ebx
        mov     dword ptr [ebp - 0x7c], edx
        call    FUN_00641000
        mov     ecx, eax
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [ebp - 0x7c]
        cmp     eax, edx
        mov     ecx, dword ptr [ebp - 0x1c]
        jz      l_73547
        cmp     ecx, dword ptr [eax + 0x10]
        jge     l_73579
    l_73547:
        lea     edx, [ebp + 0xffffff4c]
        push    edx
        push    ecx
        mov     dword ptr [ebp + 0xffffff4c], ecx
        lea     eax, [ebp - 0x7c]
        mov     ecx, esp
        push    eax
        mov     dword ptr [ebp + 0xffffff50], edi
        call    FUN_00561a30
        lea     ecx, [ebp + 0xfffffe64]
        push    ecx
        mov     ecx, ebx
        call    FUN_005619f0
        mov     eax, dword ptr [eax]
        mov     dword ptr [ebp - 0x7c], eax
    l_73579:
        mov     eax, dword ptr [eax + 0x14]
        fld     dword ptr [eax + 0xc]
        lea     edx, [ebp + 0xfffffee0]
        fsub    dword ptr [eax + 4]
        push    edx
        lea     ecx, [ebp + 0xfffffda8]
        fmul    dword ptr [eax + 0x14]
        mov     dword ptr [ebp + 0xfffffee8], 0
        fstp    dword ptr [ebp + 0xfffffee0]
        fld     dword ptr [eax + 0x10]
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [eax + 0x18]
        fstp    dword ptr [ebp + 0xfffffee4]
        call    FUN_0040c5d0
        lea     eax, [ebp + 0xfffffda8]
        push    eax
        lea     ecx, [ebp - 0x58]
        call    FUN_0040c410
        fld     dword ptr [ebp - 0x28]
        push    0x3f666666
        push    ecx
        fstp    dword ptr [esp]
        fld     dword ptr [ebp - 0x2c]
        push    ecx
        fstp    dword ptr [esp]
        lea     ecx, [ebp + 0xfffffdcc]
        mov     dword ptr [ebp + 0xffffff7c], esi
        call    FUN_0040c9c0
        lea     ecx, [ebp + 0xffffff7c]
        push    ecx
        lea     edx, [ebp + 0xfffffe9c]
        push    edx
        mov     ecx, ebx
        call    FUN_00641010
        mov     eax, dword ptr [eax]
        lea     ecx, [ebp + 0xfffffea0]
        push    ecx
        mov     ecx, ebx
        mov     dword ptr [ebp - 0x10], eax
        call    FUN_00641000
        mov     edx, eax
        mov     eax, dword ptr [ebp - 0x10]
        cmp     eax, dword ptr [edx]
        jz      l_73625
        mov     ecx, dword ptr [ebp + 0xffffff7c]
        cmp     ecx, dword ptr [eax + 0x10]
        jge     l_73664
    l_73625:
        lea     edx, [ebp + 0xffffff1c]
        push    edx
        lea     eax, [ebp + 0xffffff7c]
        push    eax
        lea     ecx, [ebp + 0xfffffd30]
        mov     dword ptr [ebp + 0xffffff1c], edi
        call    FUN_00641050
        push    eax
        push    ecx
        lea     edx, [ebp - 0x10]
        mov     ecx, esp
        push    edx
        call    FUN_00561a30
        lea     eax, [ebp + 0xfffffea8]
        push    eax
        mov     ecx, ebx
        call    FUN_005619f0
        mov     eax, dword ptr [eax]
        mov     dword ptr [ebp - 0x10], eax
    l_73664:
        push    1
        push    edi
        push    0xff00ff00
        lea     ecx, [ebp - 0x58]
        push    ecx
        lea     edx, [ebp + 0xfffffdcc]
    l_73676:
        mov     ecx, dword ptr [eax + 0x14]
        push    edx
        call    FUN_0055f5b0
        mov     esi, dword ptr [ebp - 0x40]
        lea     ecx, [esi + 0x64]
        call    FUN_0041fd80
        mov     ecx, dword ptr [ebp - 0xc]
        cmp     ecx, eax
        jnz     l_73805
        lea     eax, [ebp - 0x20]
        push    eax
        lea     ecx, [ebp + 0xfffffeb0]
        push    ecx
        mov     esi, 0xb
        mov     ecx, ebx
        mov     dword ptr [ebp - 0x20], esi
        call    FUN_00641010
        mov     edx, dword ptr [eax]
        lea     eax, [ebp + 0xfffffeb8]
        push    eax
        mov     ecx, ebx
        mov     dword ptr [ebp - 0x34], edx
        call    FUN_00641000
        mov     ecx, eax
        mov     eax, dword ptr [ebp - 0x34]
        cmp     eax, dword ptr [ecx]
        jz      l_736d3
        mov     edx, dword ptr [ebp - 0x20]
        cmp     edx, dword ptr [eax + 0x10]
        jge     l_7370f
    l_736d3:
        lea     eax, [ebp + 0xffffff34]
        push    eax
        lea     ecx, [ebp - 0x20]
        push    ecx
        lea     ecx, [ebp + 0xfffffe0c]
        mov     dword ptr [ebp + 0xffffff34], edi
        call    FUN_00641050
        push    eax
        push    ecx
        lea     edx, [ebp - 0x34]
        mov     ecx, esp
        push    edx
        call    FUN_00561a30
        lea     eax, [ebp + 0xfffffec0]
        push    eax
        mov     ecx, ebx
        call    FUN_005619f0
        mov     eax, dword ptr [eax]
        mov     dword ptr [ebp - 0x34], eax
    l_7370f:
        mov     eax, dword ptr [eax + 0x14]
        fld     dword ptr [eax + 0xc]
        lea     ecx, [ebp + 0xfffffeec]
        fsub    dword ptr [eax + 4]
        push    ecx
        lea     ecx, [ebp + 0xfffffe74]
        fmul    dword ptr [eax + 0x14]
        mov     dword ptr [ebp + 0xfffffef4], 0
        fstp    dword ptr [ebp + 0xfffffeec]
        fld     dword ptr [eax + 0x10]
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [eax + 0x18]
        fstp    dword ptr [ebp + 0xfffffef0]
        call    FUN_0040c5d0
        lea     edx, [ebp + 0xfffffe74]
        push    edx
        lea     ecx, [ebp - 0x58]
        call    FUN_0040c410
        fld     dword ptr [ebp - 0x28]
        push    0x3f666666
        push    ecx
        fstp    dword ptr [esp]
        fld     dword ptr [ebp - 0x2c]
        push    ecx
        fstp    dword ptr [esp]
        lea     ecx, [ebp + 0xfffffd04]
        mov     dword ptr [ebp - 0x20], esi
        call    FUN_0040c9c0
        lea     eax, [ebp - 0x20]
        push    eax
        lea     ecx, [ebp + 0xfffffec8]
        push    ecx
        mov     ecx, ebx
        call    FUN_00641010
        mov     edx, dword ptr [eax]
        lea     eax, [ebp + 0xfffffecc]
        push    eax
        mov     ecx, ebx
        mov     dword ptr [ebp - 0x18], edx
        call    FUN_00641000
        mov     ecx, eax
        mov     eax, dword ptr [ebp - 0x18]
        cmp     eax, dword ptr [ecx]
        jz      l_737b2
        mov     edx, dword ptr [ebp - 0x20]
        cmp     edx, dword ptr [eax + 0x10]
        jge     l_737ee
    l_737b2:
        lea     eax, [ebp + 0xffffff2c]
        push    eax
        lea     ecx, [ebp - 0x20]
        push    ecx
        lea     ecx, [ebp + 0xfffffe00]
        mov     dword ptr [ebp + 0xffffff2c], edi
        call    FUN_00641050
        push    eax
        push    ecx
        lea     edx, [ebp - 0x18]
        mov     ecx, esp
        push    edx
        call    FUN_00561a30
        lea     eax, [ebp + 0xfffffe80]
        push    eax
        mov     ecx, ebx
        call    FUN_005619f0
        mov     eax, dword ptr [eax]
        mov     dword ptr [ebp - 0x18], eax
    l_737ee:
        push    1
        push    edi
        push    0xff00ff00
        lea     ecx, [ebp - 0x58]
        push    ecx
        lea     edx, [ebp + 0xfffffd04]
        jmp     l_73974
    l_73805:
        mov     eax, dword ptr [ecx + 0x30]
        push    eax
        mov     ecx, esi
        call    FUN_006741f0
        test    al, al
        jz      l_7397d
        lea     ecx, [ebp - 0x20]
        push    ecx
        lea     edx, [ebp + 0xfffffe6c]
        mov     esi, 0xd
        push    edx
        mov     ecx, ebx
        mov     dword ptr [ebp - 0x20], esi
        call    FUN_00641010
        mov     eax, dword ptr [eax]
        lea     ecx, [ebp + 0xfffffe44]
        push    ecx
        mov     ecx, ebx
        mov     dword ptr [ebp - 0x14], eax
        call    FUN_00641000
        mov     edx, eax
        mov     eax, dword ptr [ebp - 0x14]
        cmp     eax, dword ptr [edx]
        jz      l_73856
        mov     ecx, dword ptr [ebp - 0x20]
        cmp     ecx, dword ptr [eax + 0x10]
        jge     l_7388c
    l_73856:
        lea     edx, [ebp - 0x38]
        push    edx
        lea     eax, [ebp - 0x20]
        push    eax
        lea     ecx, [ebp + 0xffffff3c]
        mov     dword ptr [ebp - 0x38], edi
        call    FUN_00641050
        push    eax
        push    ecx
        lea     edx, [ebp - 0x14]
        mov     ecx, esp
        push    edx
        call    FUN_00561a30
        lea     eax, [ebp + 0xfffffd44]
        push    eax
        mov     ecx, ebx
        call    FUN_005619f0
        mov     eax, dword ptr [eax]
        mov     dword ptr [ebp - 0x14], eax
    l_7388c:
        mov     eax, dword ptr [eax + 0x14]
        fld     dword ptr [eax + 0xc]
        lea     ecx, [ebp + 0xfffffed4]
        fsub    dword ptr [eax + 4]
        push    ecx
        lea     ecx, [ebp + 0xfffffdc0]
        fmul    dword ptr [eax + 0x14]
        mov     dword ptr [ebp + 0xfffffedc], 0
        fstp    dword ptr [ebp + 0xfffffed4]
        fld     dword ptr [eax + 0x10]
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [eax + 0x18]
        fstp    dword ptr [ebp + 0xfffffed8]
        call    FUN_0040c5d0
        lea     edx, [ebp + 0xfffffdc0]
        push    edx
        lea     ecx, [ebp - 0x58]
        call    FUN_0040c410
        fld     dword ptr [ebp - 0x28]
        push    0x3f666666
        push    ecx
        fstp    dword ptr [esp]
        fld     dword ptr [ebp - 0x2c]
        push    ecx
        fstp    dword ptr [esp]
        lea     ecx, [ebp + 0xfffffe50]
        mov     dword ptr [ebp - 0x20], esi
        call    FUN_0040c9c0
        lea     eax, [ebp - 0x20]
        push    eax
        lea     ecx, [ebp + 0xfffffd2c]
        push    ecx
        mov     ecx, ebx
        call    FUN_00641010
        mov     edx, dword ptr [eax]
        lea     eax, [ebp + 0xfffffe98]
        push    eax
        mov     ecx, ebx
        mov     dword ptr [ebp - 0x60], edx
        call    FUN_00641000
        mov     ecx, eax
        mov     eax, dword ptr [ebp - 0x60]
        cmp     eax, dword ptr [ecx]
        jz      l_7392f
        mov     edx, dword ptr [ebp - 0x20]
        cmp     edx, dword ptr [eax + 0x10]
        jge     l_73962
    l_7392f:
        lea     eax, [ebp - 0x3c]
        push    eax
        lea     ecx, [ebp - 0x20]
        push    ecx
        lea     ecx, [ebp - 0x48]
        mov     dword ptr [ebp - 0x3c], edi
        call    FUN_00641050
        push    eax
        push    ecx
        lea     edx, [ebp - 0x60]
        mov     ecx, esp
        push    edx
        call    FUN_00561a30
        lea     eax, [ebp + 0xfffffe90]
        push    eax
        mov     ecx, ebx
        call    FUN_005619f0
        mov     eax, dword ptr [eax]
        mov     dword ptr [ebp - 0x60], eax
    l_73962:
        push    1
        push    edi
        push    0xff00ff00
        lea     ecx, [ebp - 0x58]
        push    ecx
        lea     edx, [ebp + 0xfffffe50]
    l_73974:
        mov     ecx, dword ptr [eax + 0x14]
        push    edx
        call    FUN_0055f5b0
    l_7397d:
        mov     eax, dword ptr [ebp - 0x64]
        mov     ecx, dword ptr [ebp - 8]
        mov     esi, dword ptr [ebp - 0x30]
        mov     eax, dword ptr [eax + 0x3d4]
        mov     edx, dword ptr [eax + 0x17c]
        inc     ecx
        add     esi, 4
        cmp     ecx, edx
        mov     dword ptr [ebp - 8], ecx
        mov     dword ptr [ebp - 0x30], esi
        jl      l_72ea1
        mov     edi, dword ptr [ebp - 0x40]
    l_739a7:
        mov     ecx, dword ptr [g_d7dab44]
        mov     eax, dword ptr [ecx]
        xor     eax, dword ptr [g_d7dab40]
        mov     edx, dword ptr [eax + 0xc]
        xor     edx, 0x85739531
        mov     cl, byte ptr [edx + 0x16]
        test    cl, cl
        jz      l_73d53
        mov     eax, dword ptr [eax + 0x10]
        xor     eax, 0x85739531
        mov     ecx, dword ptr [eax + 0x44]
        xor     esi, esi
        cmp     ecx, esi
        mov     dword ptr [ebp - 0x3c], eax
        mov     dword ptr [ebp + 0xffffff48], ecx
        mov     dword ptr [ebp - 0xc], esi
        mov     dword ptr [ebp - 0x60], esi
        jle     l_73edf
        mov     dword ptr [ebp - 0x30], esi
        jmp     l_739f8
    l_739f2:
        mov     esi, dword ptr [ebp - 0xc]
        mov     eax, dword ptr [ebp - 0x3c]
    l_739f8:
        mov     eax, dword ptr [eax + 0x40]
        mov     ecx, dword ptr [ebp - 0x30]
        mov     ecx, dword ptr [eax + ecx + 0x14]
        call    FUN_0041fd80
        test    eax, eax
        jz      l_73d23
        cmp     esi, 6
        jz      l_73edf
        mov     cl, byte ptr [eax + 0x41c]
        test    cl, cl
        jz      l_73d23
        mov     ecx, dword ptr [eax + 0x420]
        cmp     ecx, -1
        mov     dword ptr [ebp - 0x1c], esi
        jz      l_73a3a
        dec     ecx
        mov     dword ptr [ebp - 0x1c], ecx
        jmp     l_73a3e
    l_73a3a:
        inc     esi
        mov     dword ptr [ebp - 0xc], esi
    l_73a3e:
        mov     edx, dword ptr [eax + 0xd8]
        add     edx, 0x80
        push    edx
        lea     ecx, [ebp + 0xfffffd48]
        call    FUN_00419460
        lea     eax, [ebp + 0xfffffd78]
        lea     ecx, [ebp + 0xfffffd48]
        lea     edx, [ebp + 0xfffffe14]
        mov     dword ptr [ebp - 0x5c], eax
        mov     dword ptr [ebp + 0xffffff44], ecx
        mov     dword ptr [ebp - 0x38], edx
        mov     edx, dword ptr [ebp + 0xffffff44]
        push    esi
        mov     esi, dword ptr [ebp - 0x5c]
        mov     eax, dword ptr [ebp - 0x38]
        fld     dword ptr [edx]
        fmul    dword ptr [esi]
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 4]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 4]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 4]
        fxch    st(1)
        fstp    dword ptr [eax]
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 8]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 4]
        fxch    st(1)
        fstp    dword ptr [eax + 4]
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0xc]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 4]
        fxch    st(1)
        fstp    dword ptr [eax + 8]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fadd    dword ptr [esi + 0xc]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x18]
        fxch    st(1)
        fstp    dword ptr [eax + 0xc]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 4]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x10]
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 8]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x14]
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0xc]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x18]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fadd    dword ptr [esi + 0x1c]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x28]
        fxch    st(1)
        fstp    dword ptr [eax + 0x1c]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 4]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x20]
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 8]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x24]
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0xc]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x28]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        faddp   st(1), st(0)
        fadd    dword ptr [esi + 0x2c]
        fstp    dword ptr [eax + 0x2c]
        pop     esi
        fld     dword ptr [edi + 0x50]
        fadd    st(0), st(0)
        mov     eax, dword ptr [ebp + 0xfffffe40]
        fild    dword ptr [edi + 0x5c]
        mov     dword ptr [ebp - 0x24], eax
        fdiv    st(0), st(1)
        fmul    dword ptr [ebp + 0xfffffe20]
        fchs
        fadd    dword ptr [ebp + 0xffffff5c]
        fstp    dword ptr [ebp - 0x2c]
        fild    dword ptr [edi + 0x60]
        fdiv    st(0), st(1)
        fmul    dword ptr [ebp + 0xfffffe40]
        fchs
        fadd    dword ptr [ebp + 0xffffff60]
        fstp    dword ptr [ebp - 0x28]
        fstp    st(0)
        fld     dword ptr [edi + 0x14]
        fadd    dword ptr [g_f76d040]
        fcomp   dword ptr [ebp - 0x2c]
        fnstsw  ax
        test    ah, 1
        jz      l_73d23
        fld     dword ptr [edi + 0x18]
        fadd    dword ptr [g_f78d0e0]
        fcomp   dword ptr [ebp - 0x28]
        fnstsw  ax
        test    ah, 1
        jz      l_73d23
        fld     dword ptr [edi + 0x20]
        fadd    dword ptr [edi + 0x14]
        fsub    dword ptr [g_f79247c]
        fcomp   dword ptr [ebp - 0x2c]
        fnstsw  ax
        test    ah, 0x41
        jnz     l_73d23
        fld     dword ptr [edi + 0x24]
        fadd    dword ptr [edi + 0x18]
        fsub    dword ptr [g_f76d040]
        fcomp   dword ptr [ebp - 0x28]
        fnstsw  ax
        test    ah, 0x41
        jnz     l_73d23
        mov     ecx, dword ptr [ebp - 0x1c]
        lea     esi, [ecx + 0x14]
        lea     edx, [ebp - 0x38]
        push    edx
        mov     ecx, ebx
        mov     dword ptr [ebp - 0x38], esi
        call    FUN_00640fa0
        mov     eax, dword ptr [eax]
        fld     dword ptr [eax + 0xc]
        lea     ecx, [ebp + 0xfffffe50]
        fsub    dword ptr [eax + 4]
        mov     dword ptr [ebp - 0x68], 0
        fmul    dword ptr [eax + 0x14]
        fstp    dword ptr [ebp - 0x70]
        fld     dword ptr [eax + 0x10]
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [eax + 0x18]
        lea     eax, [ebp - 0x70]
        push    eax
        fstp    dword ptr [ebp - 0x6c]
        call    FUN_0040c5d0
        lea     ecx, [ebp + 0xfffffe50]
        push    ecx
        lea     ecx, [ebp - 0x58]
        call    FUN_0040ccd0
        mov     eax, dword ptr [ebp - 0x28]
        mov     ecx, dword ptr [ebp - 0x2c]
        push    1
        push    0
        push    0xfaffffff
        lea     edx, [ebp - 0x58]
        push    edx
        push    0x3f666666
        push    eax
        push    ecx
        lea     ecx, [ebp + 0xfffffdc0]
        mov     dword ptr [ebp - 0x38], esi
        call    FUN_00587830
        push    eax
        lea     edx, [ebp - 0x38]
        push    edx
        mov     ecx, ebx
        call    FUN_00640fa0
        mov     ecx, dword ptr [eax]
        call    FUN_0055f5b0
    l_73d23:
        mov     eax, dword ptr [ebp - 0x60]
        mov     edx, dword ptr [ebp - 0x30]
        mov     ecx, dword ptr [ebp + 0xffffff48]
        inc     eax
        add     edx, 0x1c
        cmp     eax, ecx
        mov     dword ptr [ebp - 0x60], eax
        mov     dword ptr [ebp - 0x30], edx
        jl      l_739f2
        lea     ecx, [ebp + 0xffffff54]
        call    FUN_00423b30
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    l_73d53:
        mov     eax, dword ptr [g_d7f252c]
        push    eax
        lea     ecx, [ebp - 0x70]
        call    FUN_006746a0
        xor     esi, esi
        lea     ecx, [ebp - 0x70]
        mov     dword ptr [ebp - 0xc], esi
        call    FUN_0040c0e0
        test    eax, eax
        jz      l_73edf
        jmp     l_73d7b
    l_73d78:
        mov     esi, dword ptr [ebp - 0xc]
    l_73d7b:
        cmp     esi, 6
        jz      l_73edf
        mov     cl, byte ptr [eax + 0x41c]
        test    cl, cl
        jz      l_73ecf
        mov     ecx, dword ptr [eax + 0x420]
        cmp     ecx, -1
        jz      l_73da2
        lea     esi, [ecx - 1]
        jmp     l_73da5
    l_73da2:
        inc     dword ptr [ebp - 0xc]
    l_73da5:
        mov     ecx, dword ptr [eax + 0xd8]
        add     ecx, 0x80
        push    ecx
        lea     ecx, [ebp + 0xfffffd48]
        call    FUN_00428850
        lea     edx, [ebp + 0xfffffd78]
        push    edx
        lea     eax, [ebp + 0xfffffd48]
        push    eax
        lea     ecx, [ebp + 0xfffffe14]
        call    FUN_00673f00
        lea     ecx, [ebp + 0xfffffe14]
        push    ecx
        lea     ecx, [ebp - 0x2c]
        call    FUN_00419480
        fld     dword ptr [edi + 0x50]
        fadd    st(0), st(0)
        fild    dword ptr [edi + 0x5c]
        fdiv    st(0), st(1)
        fmul    dword ptr [ebp - 0x2c]
        fchs
        fadd    dword ptr [ebp + 0xffffff5c]
        fstp    dword ptr [ebp - 0x2c]
        fild    dword ptr [edi + 0x60]
        fdiv    st(0), st(1)
        fmul    dword ptr [ebp - 0x24]
        fchs
        fadd    dword ptr [ebp + 0xffffff60]
        fstp    dword ptr [ebp - 0x28]
        fstp    st(0)
        fld     dword ptr [edi + 0x14]
        fadd    dword ptr [g_f76d040]
        fcomp   dword ptr [ebp - 0x2c]
        fnstsw  ax
        test    ah, 1
        jz      l_73ecf
        fld     dword ptr [edi + 0x18]
        fadd    dword ptr [g_f78d0e0]
        fcomp   dword ptr [ebp - 0x28]
        fnstsw  ax
        test    ah, 1
        jz      l_73ecf
        fld     dword ptr [edi + 0x20]
        fadd    dword ptr [edi + 0x14]
        fsub    dword ptr [g_f79247c]
        fcomp   dword ptr [ebp - 0x2c]
        fnstsw  ax
        test    ah, 0x41
        jnz     l_73ecf
        fld     dword ptr [edi + 0x24]
        fadd    dword ptr [edi + 0x18]
        fsub    dword ptr [g_f76d040]
        fcomp   dword ptr [ebp - 0x28]
        fnstsw  ax
        test    ah, 0x41
        jnz     l_73ecf
        lea     edx, [ebp + 0xfffffe50]
        push    edx
        lea     eax, [ebp - 0x3c]
        add     esi, 0x14
        push    eax
        mov     ecx, ebx
        mov     dword ptr [ebp - 0x3c], esi
        call    FUN_00640fa0
        mov     ecx, dword ptr [eax]
        call    FUN_00642870
        push    eax
        lea     ecx, [ebp - 0x58]
        call    FUN_0040ccd0
        mov     edx, dword ptr [ebp - 0x28]
        mov     eax, dword ptr [ebp - 0x2c]
        push    1
        push    0
        push    0xfaffffff
        lea     ecx, [ebp - 0x58]
        push    ecx
        push    0x3f666666
        push    edx
        push    eax
        lea     ecx, [ebp + 0xfffffdc0]
        mov     dword ptr [ebp - 0x3c], esi
        call    FUN_00587830
        push    eax
        lea     ecx, [ebp - 0x3c]
        push    ecx
        mov     ecx, ebx
        call    FUN_00640fa0
        mov     ecx, dword ptr [eax]
        call    FUN_0055f5b0
    l_73ecf:
        lea     ecx, [ebp - 0x70]
        call    FUN_0040c0e0
        test    eax, eax
        jnz     l_73d78
    l_73edf:
        lea     ecx, [ebp + 0xffffff54]
        call    FUN_00423b30
    l_73eea:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
