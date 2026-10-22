/*
 * FUN_00499620 (1833 B) — __thiscall, RET 0x14 (5 args).
 * MLR particle/flare subsystem. Evaluates several curves, transforms basis
 * vectors by a matrix, and writes particle strip vertices.
 *
 * CFLAGS: /O1
 */

#include <windows.h>

extern void __cdecl FUN_00495e60(void);
extern void __cdecl FUN_00495e10(void);
extern void __cdecl FUN_00499580(void);
extern void __cdecl FUN_0040ca40(void);
extern void __cdecl FUN_00419e70(void);
extern void __cdecl FUN_0041c7d0(void);
extern void __cdecl FUN_00495e30(void);

__declspec(naked) void FUN_00499620(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0xc0
        mov     eax, dword ptr [ebp + 0x8]
        push    ebx
        mov     ebx, ecx
        mov     edx, dword ptr [ebx + 0x90]
        push    esi
        mov     esi, dword ptr [ebx + 0xac]
        shl     eax, 0x6
        mov     ecx, dword ptr [esi + eax + 0x3c]
        add     esi, eax
        push    edi
        mov     edi, dword ptr [ebx + 0x10]
        push    0x0
        mov     eax, edx
        mov     dword ptr [ebp - 0x10], ecx
        push    eax
        lea     ecx, [edi + 0xa4]
        mov     dword ptr [ebp - 0x1c], ebx
        mov     dword ptr [ebp - 0x14], esi
        mov     dword ptr [ebp - 0x4], edx
        call    FUN_00495e60
        fstp    dword ptr [ebp - 0xc]
        mov     al, byte ptr [edi + 0xbc]
        test    al, al
        jz      l_skip1
        mov     ecx, dword ptr [ebp - 0x10]
        push    0x0
        push    ecx
        lea     ecx, [edi + 0xb0]
        call    FUN_00495e60
        fmul    dword ptr [ebp - 0xc]
        fstp    dword ptr [ebp - 0xc]
    l_skip1:
        mov     edx, dword ptr [ebp - 0x4]
        push    0x0
        push    edx
        lea     ecx, [edi + 0x7c]
        call    FUN_00495e60
        fstp    dword ptr [ebp - 0x8]
        mov     al, byte ptr [edi + 0x9c]
        test    al, al
        jz      l_skip2
        mov     eax, dword ptr [ebp - 0x10]
        push    0x0
        push    eax
        lea     ecx, [edi + 0x88]
        call    FUN_00495e10
        fmul    dword ptr [ebp - 0x8]
        fstp    dword ptr [ebp - 0x8]
    l_skip2:
        mov     al, byte ptr [edi + 0x179]
        test    al, al
        jz      l_skip3
        mov     ecx, dword ptr [ebp + 0x8]
        push    ecx
        mov     ecx, ebx
        call    FUN_00499580
    l_skip3:
        mov     edx, dword ptr [ebp - 0x8]
        push    edx
        add     esi, 0x30
        push    esi
        lea     ecx, [ebp - 0x28]
        call    FUN_0040ca40
        lea     ecx, [ebp - 0x60]
        call    FUN_00419e70
        mov     eax, dword ptr [ebp - 0xc]
        mov     ecx, eax
        mov     edx, eax
        mov     dword ptr [ebp - 0x60], eax
        mov     eax, dword ptr [ebp - 0x28]
        mov     dword ptr [ebp - 0x4c], ecx
        mov     ecx, dword ptr [ebp - 0x24]
        mov     dword ptr [ebp - 0x38], edx
        mov     edx, dword ptr [ebp - 0x20]
        mov     dword ptr [ebp - 0x54], eax
        mov     dword ptr [ebp - 0x44], ecx
        lea     eax, [ebp - 0x60]
        lea     ecx, [ebp - 0xc0]
        mov     dword ptr [ebp - 0x34], edx
        mov     dword ptr [ebp - 0x18], eax
        mov     dword ptr [ebp - 0x8], ecx
        mov     edx, dword ptr [ebp - 0x18]
        push    esi
        mov     esi, dword ptr [ebp - 0x14]
        mov     eax, dword ptr [ebp - 0x8]
        fld     dword ptr [edx]
        fmul    dword ptr [esi]
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x4]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x4]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x4]
        fxch    st(1)
        fstp    dword ptr [eax]
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x8]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x4]
        fxch    st(1)
        fstp    dword ptr [eax + 0x4]
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0xc]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x4]
        fxch    st(1)
        fstp    dword ptr [eax + 0x8]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x8]
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
        fld     dword ptr [edx + 0x4]
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
        fld     dword ptr [edx + 0x8]
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
        fld     dword ptr [edx + 0x4]
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
        fld     dword ptr [edx + 0x8]
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
        lea     edx, [ebp - 0xc0]
        lea     eax, [ebp - 0x90]
        mov     dword ptr [ebp - 0x14], edx
        mov     dword ptr [ebp - 0x18], eax
        mov     edx, dword ptr [ebp - 0x14]
        push    esi
        mov     esi, dword ptr [ebp + 0xc]
        mov     eax, dword ptr [ebp - 0x18]
        fld     dword ptr [edx]
        fmul    dword ptr [esi]
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x4]
        fld     dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x4]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x4]
        fxch    st(1)
        fstp    dword ptr [eax]
        fld     dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x8]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x4]
        fxch    st(1)
        fstp    dword ptr [eax + 0x4]
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x8]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0xc]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x4]
        fxch    st(1)
        fstp    dword ptr [eax + 0x8]
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x8]
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
        fld     dword ptr [edx + 0x4]
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
        fld     dword ptr [edx + 0x8]
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
        fld     dword ptr [edx + 0x4]
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
        fld     dword ptr [edx + 0x8]
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
        fld     dword ptr [ebp - 0x84]
        mov     eax, dword ptr [ebp + 0x18]
        mov     ecx, dword ptr [ebp - 0x74]
        fstp    dword ptr [eax]
        mov     edx, dword ptr [ebp - 0x64]
        mov     dword ptr [eax + 0x4], ecx
        mov     ecx, dword ptr [ebp - 0xc]
        mov     dword ptr [eax + 0xc], ecx
        mov     ecx, dword ptr [edi + 0x180]
        mov     dword ptr [eax + 0x8], edx
        mov     edx, dword ptr [edi + 0x174]
        mov     eax, ecx
        imul    eax, dword ptr [ebp + 0x8]
        cmp     edx, 0x1
        mov     dword ptr [ebp - 0xc], ecx
        mov     dword ptr [ebp + 0x18], eax
        jz      l_afterloop
        test    ecx, ecx
        jbe     l_afterloop
        mov     esi, dword ptr [edi + 0x17c]
        lea     edx, [eax + eax*2]
        mov     eax, dword ptr [ebx + 0xc0]
        lea     ebx, [eax + edx*4]
        mov     dword ptr [ebp + 0xc], ecx
    l_loop2:
        lea     ecx, [ebp - 0x90]
        push    ecx
        push    esi
        mov     ecx, ebx
        call    FUN_0041c7d0
        mov     eax, dword ptr [ebp + 0xc]
        add     esi, 0xc
        add     ebx, 0xc
        dec     eax
        mov     dword ptr [ebp + 0xc], eax
        jnz     l_loop2
        mov     ebx, dword ptr [ebp - 0x1c]
    l_afterloop:
        mov     edx, dword ptr [edi + 0x148]
        xor     ecx, ecx
        test    edx, edx
        jbe     l_curve1end
        mov     esi, dword ptr [edi + 0x144]
    l_curve1:
        fld     dword ptr [esi]
        fcomp   dword ptr [ebp - 0x4]
        __emit 0xDF        /* fnstsw ax: MSVC6 inserts 9B WAIT prefix */
        __emit 0xE0
        __emit 0xF6        /* test ah,0x41: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jz      l_curve1end
        inc     ecx
        add     esi, 0xc
        cmp     ecx, edx
        jc      l_curve1
    l_curve1end:
        mov     eax, dword ptr [edi + 0x144]
        fld     dword ptr [ebp - 0x4]
        lea     edx, [ecx + ecx*2]
        fsub    dword ptr [eax + edx*4 - 0xc]
        lea     eax, [eax + edx*4 - 0xc]
        mov     edx, dword ptr [edi + 0x154]
        xor     ecx, ecx
        test    edx, edx
        fmul    dword ptr [eax + 0x4]
        fadd    dword ptr [eax + 0x8]
        fstp    dword ptr [ebp + 0xc]
        jbe     l_curve2end
        mov     esi, dword ptr [edi + 0x150]
    l_curve2:
        fld     dword ptr [esi]
        fcomp   dword ptr [ebp - 0x4]
        __emit 0xDF        /* fnstsw ax: MSVC6 inserts 9B WAIT prefix */
        __emit 0xE0
        __emit 0xF6        /* test ah,0x41: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jz      l_curve2end
        inc     ecx
        add     esi, 0xc
        cmp     ecx, edx
        jc      l_curve2
    l_curve2end:
        mov     edx, dword ptr [edi + 0x150]
        fld     dword ptr [ebp - 0x4]
        lea     ecx, [ecx + ecx*2]
        fsub    dword ptr [edx + ecx*4 - 0xc]
        lea     eax, [edx + ecx*4 - 0xc]
        mov     edx, dword ptr [edi + 0x160]
        xor     ecx, ecx
        test    edx, edx
        fmul    dword ptr [eax + 0x4]
        fadd    dword ptr [eax + 0x8]
        fstp    dword ptr [ebp - 0x8]
        jbe     l_curve3end
        mov     esi, dword ptr [edi + 0x15c]
    l_curve3:
        fld     dword ptr [esi]
        fcomp   dword ptr [ebp - 0x4]
        __emit 0xDF        /* fnstsw ax: MSVC6 inserts 9B WAIT prefix */
        __emit 0xE0
        __emit 0xF6        /* test ah,0x41: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jz      l_curve3end
        inc     ecx
        add     esi, 0xc
        cmp     ecx, edx
        jc      l_curve3
    l_curve3end:
        fld     dword ptr [ebp - 0x4]
        mov     edx, dword ptr [ebp - 0x4]
        lea     eax, [ecx + ecx*2]
        mov     ecx, dword ptr [edi + 0x15c]
        fsub    dword ptr [ecx + eax*4 - 0xc]
        lea     eax, [ecx + eax*4 - 0xc]
        lea     esi, [edi + 0x164]
        push    edx
        fmul    dword ptr [eax + 0x4]
        mov     ecx, esi
        fadd    dword ptr [eax + 0x8]
        fstp    dword ptr [ebp - 0x18]
        call    FUN_00495e30
        mov     ecx, dword ptr [esi + 0x4]
        fld     dword ptr [ebp - 0x4]
        mov     edx, dword ptr [ebp + 0x8]
        lea     eax, [eax + eax*2]
        fsub    dword ptr [ecx + eax*4]
        lea     eax, [ecx + eax*4]
        mov     dword ptr [ebp - 0x30], edx
        mov     edx, dword ptr [ebp - 0xc]
        test    edx, edx
        fmul    dword ptr [eax + 0x4]
        mov     dword ptr [ebp - 0x2c], 0x0
        fadd    dword ptr [eax + 0x8]
        fstp    dword ptr [ebp - 0x14]
        fild    qword ptr [ebp - 0x30]
        fmul    dword ptr [ebp - 0x18]
        fadd    dword ptr [ebp + 0xc]
        fstp    dword ptr [ebp + 0xc]
        jbe     l_storeend
        mov     eax, dword ptr [ebx + 0xc8]
        mov     ebx, dword ptr [ebp + 0x18]
        lea     ecx, [eax + ebx*8]
        mov     eax, dword ptr [edi + 0x184]
        add     eax, 0x4
    l_storeloop:
        fld     dword ptr [ebp - 0x14]
        mov     esi, dword ptr [ebp + 0xc]
        fmul    dword ptr [eax]
        mov     dword ptr [ecx], esi
        add     eax, 0x8
        add     ecx, 0x8
        dec     edx
        fadd    dword ptr [ebp - 0x8]
        fstp    dword ptr [ecx - 0x4]
        jnz     l_storeloop
        jmp     l_storeend2
    l_storeend:
        mov     ebx, dword ptr [ebp + 0x18]
    l_storeend2:
        mov     ecx, dword ptr [ebp - 0x4]
        lea     esi, [edi + 0xc4]
        push    ecx
        mov     ecx, esi
        call    FUN_00495e30
        fld     dword ptr [ebp - 0x4]
        lea     edx, [eax + eax*2]
        mov     eax, dword ptr [esi + 0x4]
        fsub    dword ptr [eax + edx*4]
        lea     eax, [eax + edx*4]
        fmul    dword ptr [eax + 0x4]
        fadd    dword ptr [eax + 0x8]
        mov     al, byte ptr [edi + 0xdc]
        test    al, al
        fstp    dword ptr [ebp + 0x8]
        jz      l_skip4
        mov     ecx, dword ptr [ebp - 0x10]
        push    0x0
        push    ecx
        lea     ecx, [edi + 0xd0]
        call    FUN_00495e60
        fmul    dword ptr [ebp + 0x8]
        fstp    dword ptr [ebp + 0x8]
    l_skip4:
        mov     edx, dword ptr [ebp - 0x4]
        lea     esi, [edi + 0xe4]
        push    edx
        mov     ecx, esi
        call    FUN_00495e30
        fld     dword ptr [ebp - 0x4]
        mov     ecx, dword ptr [esi + 0x4]
        lea     eax, [eax + eax*2]
        fsub    dword ptr [ecx + eax*4]
        lea     eax, [ecx + eax*4]
        fmul    dword ptr [eax + 0x4]
        fadd    dword ptr [eax + 0x8]
        mov     al, byte ptr [edi + 0xfc]
        test    al, al
        fstp    dword ptr [ebp + 0xc]
        jz      l_skip5
        mov     edx, dword ptr [ebp - 0x10]
        push    0x0
        push    edx
        lea     ecx, [edi + 0xf0]
        call    FUN_00495e60
        fmul    dword ptr [ebp + 0xc]
        fstp    dword ptr [ebp + 0xc]
    l_skip5:
        mov     eax, dword ptr [ebp - 0x4]
        lea     esi, [edi + 0x104]
        push    eax
        mov     ecx, esi
        call    FUN_00495e30
        fld     dword ptr [ebp - 0x4]
        mov     edx, dword ptr [esi + 0x4]
        lea     ecx, [eax + eax*2]
        fsub    dword ptr [edx + ecx*4]
        lea     eax, [edx + ecx*4]
        fmul    dword ptr [eax + 0x4]
        fadd    dword ptr [eax + 0x8]
        mov     al, byte ptr [edi + 0x11c]
        test    al, al
        fstp    dword ptr [ebp + 0x18]
        jz      l_skip6
        mov     eax, dword ptr [ebp - 0x10]
        push    0x0
        push    eax
        lea     ecx, [edi + 0x110]
        call    FUN_00495e60
        fmul    dword ptr [ebp + 0x18]
        fstp    dword ptr [ebp + 0x18]
    l_skip6:
        mov     ecx, dword ptr [ebp - 0x4]
        lea     esi, [edi + 0x124]
        push    ecx
        mov     ecx, esi
        call    FUN_00495e30
        fld     dword ptr [ebp - 0x4]
        lea     edx, [eax + eax*2]
        mov     eax, dword ptr [esi + 0x4]
        fsub    dword ptr [eax + edx*4]
        lea     eax, [eax + edx*4]
        fmul    dword ptr [eax + 0x4]
        fadd    dword ptr [eax + 0x8]
        mov     al, byte ptr [edi + 0x13c]
        test    al, al
        fstp    dword ptr [ebp - 0x8]
        jz      l_skip7
        mov     ecx, dword ptr [ebp - 0x10]
        push    0x0
        push    ecx
        lea     ecx, [edi + 0x130]
        call    FUN_00495e60
        fmul    dword ptr [ebp - 0x8]
        fstp    dword ptr [ebp - 0x8]
    l_skip7:
        mov     ecx, dword ptr [ebp - 0xc]
        test    ecx, ecx
        jbe     l_final
        mov     edx, dword ptr [ebp - 0x1c]
        mov     eax, dword ptr [edx + 0xc4]
        shl     ebx, 0x4
        add     ebx, eax
    l_store2:
        mov     eax, ebx
        mov     edx, dword ptr [ebp + 0x8]
        mov     dword ptr [eax], edx
        mov     edx, dword ptr [ebp + 0xc]
        mov     dword ptr [eax + 0x4], edx
        mov     edx, dword ptr [ebp + 0x18]
        mov     dword ptr [eax + 0x8], edx
        mov     edx, dword ptr [ebp - 0x8]
        mov     dword ptr [eax + 0xc], edx
        add     eax, 0x10
        dec     ecx
        __emit 0x75        /* jnz l_store2: MSVC6 miscomputes backward jcc disp (off-by-2) */
        __emit 0xE3
    l_final:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x14
    }
}
