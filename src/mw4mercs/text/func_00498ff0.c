/*
 * FUN_00498FF0 (1215 B) — __thiscall, RET 0x4.
 * MLR particle/flare subsystem. Computes a 4x4 matrix transform of a
 * particle's basis vectors, evaluates a curve (ceil of length), builds a
 * particle strip, and calls into the render path.
 *
 * CFLAGS: /O1
 */

#include <windows.h>

extern float DAT_0076d064;
extern float DAT_0076d070;
extern float DAT_007b220c;

extern void __cdecl FUN_004206b0(void);
extern void __cdecl FUN_0041fde0(void);
extern void __cdecl FUN_00420790(void);
extern void __cdecl FUN_00499620(void);
extern void __cdecl FUN_00420a40(void);
extern void __cdecl FUN_00494440(void);
extern void __cdecl FUN_00417d80(void);
extern void __cdecl FUN_004188e0(void);
extern void __cdecl FUN_0075db4a(void);          /* _ftol */
extern double (__cdecl *g_0076b2ec)(double);     /* IAT: ceil */

__declspec(naked) void FUN_00498ff0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x148
        push    ebx
        mov     ebx, ecx
        test    byte ptr [ebx + 0x9c], 0x1
        push    esi
        push    edi
        jnz     l_main
        xor     al, al
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
    l_main:
        mov     edi, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [edi + 0x14]
        mov     dword ptr [ebp - 0x28], eax
        lea     eax, [ebx + 0x58]
        lea     ecx, [ebp - 0xd8]
        mov     dword ptr [ebp - 0x4c], eax
        mov     dword ptr [ebp - 0x24], eax
        mov     dword ptr [ebp - 0x4], ecx
        mov     edx, dword ptr [ebp - 0x24]
        push    esi
        mov     esi, dword ptr [ebp - 0x28]
        mov     eax, dword ptr [ebp - 0x4]
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
        lea     edx, [ebp - 0xd8]
        push    edx
        lea     ecx, [ebp - 0x108]
        call    FUN_004206b0
        mov     ecx, dword ptr [edi]
        mov     edx, dword ptr [edi + 0x4]
        mov     eax, dword ptr [ebx + 0x90]
        mov     esi, dword ptr [ebx + 0x10]
        mov     dword ptr [ebp - 0x48], ecx
        mov     dword ptr [ebp - 0x44], edx
        fld     qword ptr [ebp - 0x48]
        mov     dword ptr [ebp - 0x50], eax
        fsub    qword ptr [ebx + 0x88]
        fmul    dword ptr [ebx + 0x94]
        fadd    dword ptr [ebx + 0x90]
        fst     dword ptr [ebx + 0x90]
        fcomp   dword ptr [DAT_0076d064]
        __emit 0xDF        /* fnstsw ax: MSVC6 inserts 9B WAIT prefix */
        __emit 0xE0
        __emit 0xF6        /* test ah,0x41: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jnz     l_skipclamp
        mov     dword ptr [ebx + 0x90], 0x3f800000
    l_skipclamp:
        mov     eax, dword ptr [edi + 0x1c]
        fld     dword ptr [eax + 0x8]
        push    0x0
        fsub    dword ptr [ebp - 0xac]
        push    0x2
        fld     dword ptr [eax + 0x4]
        mov     dword ptr [ebp - 0x28], eax
        fsub    dword ptr [ebp - 0xbc]
        push    0x1
        fld     dword ptr [eax]
        lea     eax, [ebp - 0x20]
        fsub    dword ptr [ebp - 0xcc]
        push    eax
        lea     ecx, [ebp - 0xd8]
        fstp    dword ptr [ebp - 0x20]
        fstp    dword ptr [ebp - 0x1c]
        fstp    dword ptr [ebp - 0x18]
        call    FUN_0041fde0
        fld     dword ptr [ebp - 0x18]
        sub     esp, 0x8
        fmul    dword ptr [ebp - 0x18]
        fld     dword ptr [ebp - 0x1c]
        fmul    dword ptr [ebp - 0x1c]
        faddp   st(1), st(0)
        fld     dword ptr [ebp - 0x20]
        fmul    dword ptr [ebp - 0x20]
        faddp   st(1), st(0)
        fsqrt
        fmul    dword ptr [esi + 0x64]
        fstp    qword ptr [esp]
        call    dword ptr [g_0076b2ec]
        add     esp, 0x8
        call    FUN_0075db4a
        cmp     eax, 0x2
        mov     dword ptr [ebx + 0xa0], eax
        jge     l_ge2
        mov     dword ptr [ebx + 0xa0], 0x2
        jmp     l_afterclamp
    l_ge2:
        mov     esi, dword ptr [esi + 0x170]
        cmp     eax, esi
        jle     l_afterclamp
        mov     dword ptr [ebx + 0xa0], esi
    l_afterclamp:
        push    0x7b8d88
        push    0x7b8d88
        lea     ecx, [ebp - 0x40]
        call    FUN_00420790
        mov     edx, dword ptr [ebx + 0xa0]
        test    edx, edx
        mov     dword ptr [ebp - 0x4], 0x0
        __emit 0x0F        /* jle l_loopend: MSVC6 miscomputes forward jcc disp (call-reloc between branch and target) */
        __emit 0x8E
        __emit 0x17
        __emit 0x01
        __emit 0x00
        __emit 0x00
    l_loop:
        mov     eax, dword ptr [ebp - 0x4]
        fild    dword ptr [ebp - 0x4]
        mov     ecx, dword ptr [ebx + 0xac]
        shl     eax, 0x6
        add     eax, ecx
        dec     edx
        mov     dword ptr [ebp - 0x24], edx
        fidiv   dword ptr [ebp - 0x24]
        mov     edi, eax
        mov     ecx, 0xc
        lea     esi, [ebp - 0xd8]
        rep movsd
        mov     ecx, dword ptr [ebp - 0x28]
        mov     edx, dword ptr [ebp - 0x44]
        fld     dword ptr [DAT_0076d064]
        fsub    st(0), st(1)
        fld     st(0)
        fmul    dword ptr [ebp - 0xcc]
        fld     st(2)
        fmul    dword ptr [ecx]
        faddp   st(1), st(0)
        fstp    dword ptr [eax + 0xc]
        fld     st(0)
        fmul    dword ptr [ebp - 0xbc]
        fld     st(2)
        fmul    dword ptr [ecx + 0x4]
        faddp   st(1), st(0)
        fstp    dword ptr [eax + 0x1c]
        fmul    dword ptr [ebp - 0xac]
        fxch    st(1)
        fmul    dword ptr [ecx + 0x8]
        lea     ecx, [ebp - 0x14]
        push    ecx
        push    edx
        mov     edx, dword ptr [ebp - 0x4]
        faddp   st(1), st(0)
        lea     ecx, [ebp - 0x108]
        fstp    dword ptr [eax + 0x2c]
        mov     eax, dword ptr [ebp - 0x48]
        push    eax
        push    ecx
        push    edx
        mov     ecx, ebx
        call    FUN_00499620
        fld     dword ptr [ebp - 0x8]
        mov     esi, dword ptr [ebp - 0x4]
        fadd    dword ptr [ebp - 0x14]
        test    esi, esi
        jnz     l_else
        fstp    dword ptr [ebp - 0x3c]
        fld     dword ptr [ebp - 0x14]
        fsub    dword ptr [ebp - 0x8]
        fstp    dword ptr [ebp - 0x40]
        fld     dword ptr [ebp - 0x10]
        fadd    dword ptr [ebp - 0x8]
        fstp    dword ptr [ebp - 0x34]
        fld     dword ptr [ebp - 0x10]
        fsub    dword ptr [ebp - 0x8]
        fstp    dword ptr [ebp - 0x38]
        fld     dword ptr [ebp - 0xc]
        fadd    dword ptr [ebp - 0x8]
        fstp    dword ptr [ebp - 0x2c]
        fld     dword ptr [ebp - 0xc]
        fsub    dword ptr [ebp - 0x8]
        fstp    dword ptr [ebp - 0x30]
        jmp     l_loopcont
    l_else:
        fstp    dword ptr [ebp - 0x64]
        lea     eax, [ebp - 0x68]
        fld     dword ptr [ebp - 0x14]
        push    eax
        fsub    dword ptr [ebp - 0x8]
        lea     ecx, [ebp - 0x40]
        push    ecx
        lea     ecx, [ebp - 0x40]
        fstp    dword ptr [ebp - 0x68]
        fld     dword ptr [ebp - 0x10]
        fadd    dword ptr [ebp - 0x8]
        fstp    dword ptr [ebp - 0x5c]
        fld     dword ptr [ebp - 0x10]
        fsub    dword ptr [ebp - 0x8]
        fstp    dword ptr [ebp - 0x60]
        fld     dword ptr [ebp - 0xc]
        fadd    dword ptr [ebp - 0x8]
        fstp    dword ptr [ebp - 0x54]
        fld     dword ptr [ebp - 0xc]
        fsub    dword ptr [ebp - 0x8]
        fstp    dword ptr [ebp - 0x58]
        call    FUN_00420a40
    l_loopcont:
        mov     edx, dword ptr [ebx + 0xa0]
        inc     esi
        cmp     esi, edx
        mov     dword ptr [ebp - 0x4], esi
        jl      l_loop
    l_loopend:
        mov     edi, dword ptr [ebp + 0x8]
        mov     edx, dword ptr [ebp - 0x50]
        push    edi
        mov     ecx, ebx
        mov     dword ptr [ebx + 0x90], edx
        call    FUN_00494440
        test    al, al
        jnz     l_draw
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
    l_draw:
        fld     dword ptr [ebp - 0x3c]
        mov     ecx, 0xc
        fsub    dword ptr [ebp - 0x40]
        mov     esi, 0x7b8c28
        lea     edi, [ebp - 0xa8]
        rep movsd
        mov     eax, dword ptr [ebp - 0x4c]
        fmul    dword ptr [DAT_0076d070]
        push    eax
        lea     ecx, [ebp - 0xa8]
        push    ecx
        fstp    dword ptr [ebp - 0x78]
        lea     ecx, [ebp - 0x148]
        fld     dword ptr [ebp - 0x34]
        fsub    dword ptr [ebp - 0x38]
        fmul    dword ptr [DAT_0076d070]
        fstp    dword ptr [ebp - 0x74]
        fld     dword ptr [ebp - 0x2c]
        fsub    dword ptr [ebp - 0x30]
        fmul    dword ptr [DAT_0076d070]
        fst     dword ptr [ebp - 0x70]
        fld     dword ptr [ebp - 0x78]
        fadd    dword ptr [ebp - 0x40]
        fstp    dword ptr [ebp - 0x9c]
        fld     dword ptr [ebp - 0x74]
        fadd    dword ptr [ebp - 0x38]
        fstp    dword ptr [ebp - 0x8c]
        fld     st(0)
        fadd    dword ptr [ebp - 0x30]
        fstp    dword ptr [ebp - 0x7c]
        fld     dword ptr [ebp - 0x74]
        fld     st(0)
        fmul    st(0), st(1)
        fld     st(2)
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fld     dword ptr [ebp - 0x78]
        fmul    dword ptr [ebp - 0x78]
        faddp   st(1), st(0)
        fsqrt
        fstp    st(2)
        fstp    st(0)
        fadd    dword ptr [DAT_007b220c]
        fstp    dword ptr [ebp - 0x6c]
        call    FUN_00417d80
        mov     edx, dword ptr [ebp + 0x8]
        mov     ecx, dword ptr [edx + 0x18]
        lea     eax, [ebp - 0x148]
        push    eax
        push    ecx
        call    FUN_004188e0
        pop     edi
        pop     esi
        mov     al, 0x1
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
    }
}
