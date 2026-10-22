/*
 * FUN_004A9B40 (2178 B) — __thiscall MLR sub-object update (RET 0x10).
 *   Heavy FPU matrix/vector math: computes a scaled sub-object pointer,
 *   builds 4x4 transform matrices, evaluates cubic splines, and updates
 *   position/rotation fields. Branches on the &0xc mode field.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __cdecl FUN_0041c7d0(void);
extern void __cdecl FUN_00419f30(void);
extern void __cdecl FUN_0041afd0(void);
extern void __cdecl FUN_0041c680(void);
extern void __cdecl FUN_00495e60(void);
extern void __cdecl FUN_004206b0(void);
extern void __cdecl FUN_0041c6e0(void);
extern void __cdecl FUN_0040c9e0(void);
extern void __cdecl FUN_00495e10(void);
extern void __cdecl FUN_0040ca40(void);
extern void __cdecl FUN_0041b140(void);
extern void __cdecl FUN_0041b320(void);
extern void __cdecl FUN_0041b680(void);
extern void __cdecl FUN_00419e70(void);
extern void __cdecl FUN_0041fde0(void);
extern void __cdecl FUN_00495e30(void);

extern float g_0076d064;
extern float g_0076c5b0;
extern unsigned long g_007b8d6c;
extern unsigned long g_007b8d68;
extern unsigned long g_007b8d70;

__declspec(naked) void __fastcall FUN_004a9b40(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0xd0
        push    ebx
        push    esi
        push    edi
        mov     edi, ecx
        mov     eax, dword ptr [edi + 0x10]
        mov     ebx, dword ptr [eax + 0x270]
        imul    ebx, dword ptr [ebp + 8]
        add     ebx, dword ptr [edi + 0xa8]
        mov     dword ptr [ebp - 0x2c], edi
        fld     dword ptr [ebx + 0x1c]
        fst     dword ptr [ebp + 8]
        fcomp   dword ptr [g_0076d064]
        __emit  0xDF            /* fnstsw ax: MSVC6 inserts 9B WAIT prefix; ref uses no-WAIT DF E0 */
        __emit  0xE0
        __emit  0xF6            /* test ah,0x1: MSVC6 rejects test ah,imm8 */
        __emit  0xC4
        __emit  0x01
        jnz     l_9b82
        xor     al, al
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x10
    l_9b82:
        lea     eax, [ebx + 0x48]
        mov     dword ptr [ebp - 0x1c], eax
        mov     eax, dword ptr [edi + 0x9c]
        and     eax, 0xc
        cmp     eax, 4
        lea     edx, [ebx + 0x30]
        mov     dword ptr [ebp - 0x20], edx
        mov     esi, ebx
        mov     dword ptr [ebp - 0x24], eax
        jnz     l_9d80
        add     edi, 0x28
        push    edi
        lea     ecx, [ebx + 0x3c]
        push    edx
        call    FUN_0041c7d0
        mov     ecx, dword ptr [ebp - 0x1c]
        push    ecx
        lea     ecx, [ebp - 0xd0]
        call    FUN_00419f30
        lea     edx, [ebp - 0xd0]
        lea     eax, [ebp - 0xa0]
        mov     dword ptr [ebp - 0x28], edi
        mov     dword ptr [ebp - 0x20], edx
        mov     dword ptr [ebp - 0x18], eax
        mov     edx, dword ptr [ebp - 0x20]
        push    esi
        mov     esi, dword ptr [ebp - 0x28]
        mov     eax, dword ptr [ebp - 0x18]
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
        fxch
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
        fxch
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
        fxch
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
        fxch
        fadd    dword ptr [esi + 0xc]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x18]
        fxch
        fstp    dword ptr [eax + 0xc]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 4]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x14]
        fxch
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
        fxch
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
        fxch
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
        fxch
        fadd    dword ptr [esi + 0x1c]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x28]
        fxch
        fstp    dword ptr [eax + 0x1c]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 4]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x24]
        fxch
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
        fxch
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
        fxch
        fstp    dword ptr [eax + 0x28]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        faddp   st(1), st(0)
        fadd    dword ptr [esi + 0x2c]
        fstp    dword ptr [eax + 0x2c]
        pop     esi
        lea     ecx, [ebp - 0xa0]
        lea     esi, [ebx + 0x58]
        push    ecx
        mov     ecx, esi
        call    FUN_0041afd0
        push    edi
        lea     ecx, [ebx + 0xc]
        push    ebx
        call    FUN_0041c680
        mov     edi, dword ptr [ebp - 0x2c]
        lea     eax, [ebx + 0x3c]
        mov     dword ptr [ebp - 0x1c], esi
        mov     dword ptr [ebp - 0x20], eax
        lea     esi, [ebx + 0xc]
    l_9d80:
        mov     eax, dword ptr [ebp + 8]
        mov     edx, dword ptr [ebx + 0x18]
        mov     edi, dword ptr [edi + 0x10]
        push    0
        push    eax
        lea     ecx, [edi + 0x1cc]
        mov     dword ptr [ebp - 4], edx
        call    FUN_00495e60
        fst     dword ptr [ebp - 0x18]
        mov     al, byte ptr [edi + 0x1e4]
        test    al, al
        jz      l_9dbd
        mov     ecx, dword ptr [ebp - 4]
        fstp    st(0)
        push    0
        push    ecx
        lea     ecx, [edi + 0x1d8]
        call    FUN_00495e60
        fmul    dword ptr [ebp - 0x18]
    l_9dbd:
        fchs
        fst     dword ptr [ebp - 8]
        fcomp   dword ptr [g_0076c5b0]
        __emit  0xDF            /* fnstsw ax: MSVC6 inserts 9B WAIT prefix; ref uses no-WAIT DF E0 */
        __emit  0xE0
        __emit  0xF6            /* test ah,0x41: MSVC6 rejects test ah,imm8 */
        __emit  0xC4
        __emit  0x41
        jnz     l_9dd6
        mov     dword ptr [ebp - 8], 0
    l_9dd6:
        mov     al, byte ptr [edi + 0x114]
        fld     dword ptr [edi + 0x104]
        test    al, al
        fst     dword ptr [ebp - 0x28]
        jz      l_9dfd
        fld     dword ptr [ebp - 4]
        fmul    dword ptr [edi + 0x110]
        fadd    dword ptr [edi + 0x10c]
        fmulp   st(1), st(0)
        fst     dword ptr [ebp - 0x28]
    l_9dfd:
        fstp    dword ptr [ebp - 0x44]
        mov     al, byte ptr [edi + 0x130]
        test    al, al
        fld     dword ptr [edi + 0x120]
        fst     dword ptr [ebp - 0x18]
        jz      l_9e27
        fld     dword ptr [ebp - 4]
        fmul    dword ptr [edi + 0x12c]
        fadd    dword ptr [edi + 0x128]
        fmulp   st(1), st(0)
        fst     dword ptr [ebp - 0x18]
    l_9e27:
        fstp    dword ptr [ebp - 0x40]
        mov     al, byte ptr [edi + 0x14c]
        test    al, al
        fld     dword ptr [edi + 0x13c]
        jz      l_9e4b
        fld     dword ptr [ebp - 4]
        fmul    dword ptr [edi + 0x148]
        fadd    dword ptr [edi + 0x144]
        fmulp   st(1), st(0)
    l_9e4b:
        mov     eax, dword ptr [g_007b8d6c]
        fst     dword ptr [ebp - 0x3c]
        mov     edx, dword ptr [g_007b8d68]
        mov     ecx, dword ptr [g_007b8d70]
        mov     dword ptr [ebp - 0x10], eax
        cmp     dword ptr [ebp - 0x24], 8
        mov     dword ptr [ebp - 0x14], edx
        mov     dword ptr [ebp - 0xc], ecx
        jnz     l_9fad
        mov     edx, dword ptr [ebp - 0x2c]
        fstp    st(0)
        add     edx, 0x28
        push    edx
        lea     ecx, [ebp - 0xa0]
        call    FUN_004206b0
        lea     eax, [ebp - 0xa0]
        push    eax
        lea     ecx, [ebp - 0x44]
        push    ecx
        lea     ecx, [ebp - 0x38]
        call    FUN_0041c6e0
        fld     dword ptr [esi]
        fsub    dword ptr [ebp - 0x38]
        fld     dword ptr [esi + 4]
        fsub    dword ptr [ebp - 0x34]
        fstp    dword ptr [ebp - 0x6c]
        fld     dword ptr [esi + 8]
        fsub    dword ptr [ebp - 0x30]
        fstp    dword ptr [ebp - 0x68]
        fmul    dword ptr [ebp - 8]
        fstp    dword ptr [ebp - 0x14]
        fld     dword ptr [ebp - 0x6c]
        fmul    dword ptr [ebp - 8]
        fstp    dword ptr [ebp - 0x10]
        fld     dword ptr [ebp - 0x68]
        fmul    dword ptr [ebp - 8]
        fstp    dword ptr [ebp - 0xc]
        mov     al, byte ptr [edi + 0x174]
        test    al, al
        fld     dword ptr [ebp + 8]
        fmul    dword ptr [edi + 0x160]
        fadd    dword ptr [edi + 0x164]
        fmul    dword ptr [ebp + 8]
        fadd    dword ptr [edi + 0x15c]
        fmul    dword ptr [ebp + 8]
        fadd    dword ptr [edi + 0x158]
        jz      l_9f04
        fld     dword ptr [ebp - 4]
        fmul    dword ptr [edi + 0x170]
        fadd    dword ptr [edi + 0x16c]
        fmulp   st(1), st(0)
    l_9f04:
        mov     al, byte ptr [edi + 0x19c]
        fstp    dword ptr [ebp - 0x50]
        test    al, al
        fld     dword ptr [ebp + 8]
        fmul    dword ptr [edi + 0x188]
        fadd    dword ptr [edi + 0x18c]
        fmul    dword ptr [ebp + 8]
        fadd    dword ptr [edi + 0x184]
        fmul    dword ptr [ebp + 8]
        fadd    dword ptr [edi + 0x180]
        jz      l_9f43
        fld     dword ptr [ebp - 4]
        fmul    dword ptr [edi + 0x198]
        fadd    dword ptr [edi + 0x194]
        fmulp   st(1), st(0)
    l_9f43:
        mov     al, byte ptr [edi + 0x1c4]
        fstp    dword ptr [ebp - 0x4c]
        test    al, al
        fld     dword ptr [ebp + 8]
        fmul    dword ptr [edi + 0x1b0]
        fadd    dword ptr [edi + 0x1b4]
        fmul    dword ptr [ebp + 8]
        fadd    dword ptr [edi + 0x1ac]
        fmul    dword ptr [ebp + 8]
        fadd    dword ptr [edi + 0x1a8]
        jz      l_9f82
        fld     dword ptr [ebp - 4]
        fmul    dword ptr [edi + 0x1c0]
        fadd    dword ptr [edi + 0x1bc]
        fmulp   st(1), st(0)
    l_9f82:
        lea     edx, [ebp - 0xa0]
        fstp    dword ptr [ebp - 0x48]
        push    edx
        lea     eax, [ebp - 0x50]
        push    eax
        lea     ecx, [ebp - 0x60]
        call    FUN_0041c680
        lea     ecx, [ebp - 0x60]
        push    ecx
        lea     edx, [ebp - 0x14]
        push    edx
        lea     ecx, [ebp - 0x14]
        call    FUN_0040c9e0
        jmp     l_aa08f
    l_9fad:
        fld     dword ptr [esi]
        fsub    dword ptr [ebp - 0x28]
        fstp    dword ptr [ebp - 0x50]
        fld     dword ptr [esi + 4]
        fsub    dword ptr [ebp - 0x18]
        fstp    dword ptr [ebp - 0x4c]
        fsubr   dword ptr [esi + 8]
        fld     dword ptr [ebp - 0x50]
        fmul    dword ptr [ebp - 8]
        fstp    dword ptr [ebp - 0x14]
        fld     dword ptr [ebp - 0x4c]
        fmul    dword ptr [ebp - 8]
        fstp    dword ptr [ebp - 0x10]
        fmul    dword ptr [ebp - 8]
        fstp    dword ptr [ebp - 0xc]
        mov     al, byte ptr [edi + 0x174]
        test    al, al
        fld     dword ptr [ebp + 8]
        fmul    dword ptr [edi + 0x160]
        fadd    dword ptr [edi + 0x164]
        fmul    dword ptr [ebp + 8]
        fadd    dword ptr [edi + 0x15c]
        fmul    dword ptr [ebp + 8]
        fadd    dword ptr [edi + 0x158]
        jz      l_aa015
        fld     dword ptr [ebp - 4]
        fmul    dword ptr [edi + 0x170]
        fadd    dword ptr [edi + 0x16c]
        fmulp   st(1), st(0)
    l_aa015:
        fadd    dword ptr [ebp - 0x14]
        fstp    dword ptr [ebp - 0x14]
        mov     al, byte ptr [edi + 0x19c]
        test    al, al
        fld     dword ptr [ebp + 8]
        fmul    dword ptr [edi + 0x188]
        fadd    dword ptr [edi + 0x18c]
        fmul    dword ptr [ebp + 8]
        fadd    dword ptr [edi + 0x184]
        fmul    dword ptr [ebp + 8]
        fadd    dword ptr [edi + 0x180]
        jz      l_aa057
        fld     dword ptr [ebp - 4]
        fmul    dword ptr [edi + 0x198]
        fadd    dword ptr [edi + 0x194]
        fmulp   st(1), st(0)
    l_aa057:
        fadd    dword ptr [ebp - 0x10]
        mov     eax, dword ptr [ebp + 8]
        push    0
        push    eax
        lea     ecx, [edi + 0x1a4]
        fstp    dword ptr [ebp - 0x10]
        call    FUN_00495e10
        mov     al, byte ptr [edi + 0x1c4]
        test    al, al
        jz      l_aa089
        fld     dword ptr [ebp - 4]
        fmul    dword ptr [edi + 0x1c0]
        fadd    dword ptr [edi + 0x1bc]
        fmulp   st(1), st(0)
    l_aa089:
        fadd    dword ptr [ebp - 0xc]
        fstp    dword ptr [ebp - 0xc]
    l_aa08f:
        fld     qword ptr [ebp + 0x10]
        mov     ecx, dword ptr [ebp - 0x2c]
        fsub    qword ptr [ecx + 0x88]
        mov     eax, dword ptr [ebp - 0x20]
        fst     dword ptr [ebp + 0x14]
        fmul    dword ptr [ebp - 0x14]
        fadd    dword ptr [esi]
        fstp    dword ptr [esi]
        fld     dword ptr [ebp + 0x14]
        fmul    dword ptr [ebp - 0x10]
        fadd    dword ptr [esi + 4]
        fstp    dword ptr [esi + 4]
        fld     dword ptr [ebp + 0x14]
        fmul    dword ptr [ebp - 0xc]
        fadd    dword ptr [esi + 8]
        fstp    dword ptr [esi + 8]
        fld     dword ptr [ebp + 0x14]
        fmul    dword ptr [esi]
        fadd    dword ptr [eax]
        fstp    dword ptr [eax]
        fld     dword ptr [ebp + 0x14]
        fmul    dword ptr [esi + 4]
        fadd    dword ptr [eax + 4]
        fstp    dword ptr [eax + 4]
        fld     dword ptr [ebp + 0x14]
        fmul    dword ptr [esi + 8]
        fadd    dword ptr [eax + 8]
        fstp    dword ptr [eax + 8]
        mov     al, byte ptr [edi + 0x2b1]
        test    al, al
        jnz     l_aa14a
        mov     edx, dword ptr [ebx + 0x24]
        mov     eax, dword ptr [ebx + 0x28]
        mov     ecx, dword ptr [ebx + 0x2c]
        mov     dword ptr [ebp - 0x38], edx
        mov     edx, dword ptr [ebp + 0x14]
        mov     dword ptr [ebp - 0x34], eax
        push    edx
        lea     eax, [ebp - 0x38]
        mov     dword ptr [ebp - 0x30], ecx
        push    eax
        lea     ecx, [ebp - 0x38]
        call    FUN_0040ca40
        lea     ecx, [ebp - 0x38]
        push    ecx
        lea     ecx, [ebp - 0x54]
        call    FUN_0041b140
        mov     ecx, dword ptr [ebp - 0x1c]
        mov     edx, ecx
        mov     eax, dword ptr [edx]
        mov     dword ptr [ebp - 0x64], eax
        mov     eax, dword ptr [edx + 4]
        mov     dword ptr [ebp - 0x60], eax
        mov     eax, dword ptr [edx + 8]
        mov     edx, dword ptr [edx + 0xc]
        mov     dword ptr [ebp - 0x5c], eax
        lea     eax, [ebp - 0x64]
        mov     dword ptr [ebp - 0x58], edx
        push    eax
        lea     edx, [ebp - 0x54]
        push    edx
        call    FUN_0041b320
        mov     ecx, dword ptr [ebp - 0x1c]
        call    FUN_0041b680
    l_aa14a:
        cmp     dword ptr [ebp - 0x24], 4
        jnz     l_aa320
        mov     eax, dword ptr [ebp + 0xc]
        push    eax
        push    esi
        mov     ecx, ebx
        call    FUN_0041c680
        mov     ecx, dword ptr [ebp + 0xc]
        mov     edx, dword ptr [ebp - 0x20]
        push    ecx
        push    edx
        lea     ecx, [ebx + 0x30]
        call    FUN_0041c7d0
        mov     eax, dword ptr [ebp - 0x1c]
        push    eax
        lea     ecx, [ebp - 0xa0]
        call    FUN_00419f30
        lea     ecx, [ebp - 0xa0]
        lea     edx, [ebp - 0xd0]
        mov     dword ptr [ebp - 0x24], ecx
        mov     dword ptr [ebp + 0x14], edx
        mov     edx, dword ptr [ebp - 0x24]
        push    esi
        mov     esi, dword ptr [ebp + 0xc]
        mov     eax, dword ptr [ebp + 0x14]
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
        fxch
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
        fxch
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
        fxch
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
        fxch
        fadd    dword ptr [esi + 0xc]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x18]
        fxch
        fstp    dword ptr [eax + 0xc]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 4]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x14]
        fxch
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
        fxch
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
        fxch
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
        fxch
        fadd    dword ptr [esi + 0x1c]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x28]
        fxch
        fstp    dword ptr [eax + 0x1c]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 4]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x24]
        fxch
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
        fxch
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
        fxch
        fstp    dword ptr [eax + 0x28]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp   st(1), st(0)
        faddp   st(1), st(0)
        fadd    dword ptr [esi + 0x2c]
        fstp    dword ptr [eax + 0x2c]
        pop     esi
        lea     eax, [ebp - 0xd0]
        push    eax
        lea     ecx, [ebx + 0x48]
        call    FUN_0041afd0
    l_aa320:
        mov     al, byte ptr [edi + 0x2b1]
        test    al, al
        jz      l_aa356
        lea     ecx, [ebp - 0xa0]
        call    FUN_00419e70
        push    0x2
        push    0x0
        push    0x1
        push    ebx
        lea     ecx, [ebp - 0xa0]
        call    FUN_0041fde0
        lea     ecx, [ebp - 0xa0]
        push    ecx
        lea     ecx, [ebx + 0x48]
        call    FUN_0041afd0
    l_aa356:
        mov     edx, dword ptr [ebp + 8]
        lea     esi, [edi + 0x294]
        push    edx
        mov     ecx, esi
        call    FUN_00495e30
        fld     dword ptr [ebp + 8]
        mov     ecx, dword ptr [esi + 4]
        lea     eax, [eax + eax*2]
        fsub    dword ptr [ecx + eax*4]
        lea     eax, [ecx + eax*4]
        fmul    dword ptr [eax + 4]
        fadd    dword ptr [eax + 8]
        mov     al, byte ptr [edi + 0x2ac]
        test    al, al
        fst     dword ptr [ebp + 0xc]
        jz      l_aa3b4
        mov     edx, dword ptr [ebp - 4]
        fstp    st(0)
        lea     esi, [edi + 0x2a0]
        push    edx
        mov     ecx, esi
        call    FUN_00495e30
        fld     dword ptr [ebp - 4]
        mov     ecx, dword ptr [esi + 4]
        lea     eax, [eax + eax*2]
        fsub    dword ptr [ecx + eax*4]
        lea     eax, [ecx + eax*4]
        fmul    dword ptr [eax + 4]
        fadd    dword ptr [eax + 8]
        fmul    dword ptr [ebp + 0xc]
    l_aa3b4:
        pop     edi
        fstp    dword ptr [ebx + 0x6c]
        pop     esi
        mov     al, 1
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x10
    }
}
