/*
 * FUN_00499D50 (1948 B) — __thiscall, RET 0x4.
 * MLR particle/flare subsystem. Builds a particle strip: transforms basis
 * vectors, evaluates curves, and writes strip vertices.
 *
 * CFLAGS: /O1
 */

#include <windows.h>

extern void __cdecl FUN_0048bcf0(void);
extern void __cdecl FUN_00491670(void);
extern void __cdecl FUN_00419480(void);
extern void __cdecl FUN_004206b0(void);
extern void __cdecl FUN_0041c830(void);
extern void __cdecl FUN_00495e60(void);
extern void __cdecl FUN_00495e10(void);
extern void __cdecl FUN_0040ca40(void);
extern void __cdecl FUN_00419e70(void);
extern void __cdecl FUN_0041fde0(void);
extern void __cdecl FUN_0041c7d0(void);
extern void __cdecl FUN_0048e890(void);
extern void __cdecl FUN_00494990(void);

__declspec(naked) void FUN_00499d50(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x1b0
        push    ebx
        mov     ebx, ecx
        cmp     dword ptr [ebx + 0xa0], 0x1
        push    esi
        push    edi
        jle     l_ret
        lea     ecx, [ebp - 0xc0]
        call    FUN_0048bcf0
        mov     edi, dword ptr [ebx + 0x10]
        mov     esi, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [ebx + 0xbc]
        lea     ecx, [edi + 0x48]
        push    ecx
        lea     edx, [esi + 0x8]
        push    edx
        lea     ecx, [ebp - 0xbc]
        mov     dword ptr [ebp - 0xc0], eax
        call    FUN_00491670
        mov     eax, dword ptr [esi + 0x4]
        mov     ecx, dword ptr [esi]
        mov     dword ptr [ebp - 0xa4], eax
        lea     edx, [ebx + 0x58]
        lea     eax, [ebp - 0x120]
        mov     dword ptr [ebp - 0x8], ecx
        mov     dword ptr [ebp - 0xc], edx
        mov     dword ptr [ebp - 0x10], eax
        mov     edx, dword ptr [ebp - 0xc]
        push    esi
        mov     esi, dword ptr [ebp - 0x8]
        mov     eax, dword ptr [ebp - 0x10]
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
        mov     eax, dword ptr [ebx + 0xa0]
        lea     ecx, [ebp - 0x120]
        mov     dword ptr [ebp - 0xa0], ecx
        mov     esi, dword ptr [edi + 0x180]
        mov     edx, eax
        lea     eax, [eax + eax - 0x2]
        imul    edx, esi
        lea     ecx, [esi - 0x1]
        imul    eax, ecx
        mov     dword ptr [ebx + 0xa4], eax
        cmp     dword ptr [edi + 0x174], 0x1
        mov     dword ptr [ebp - 0x60], esi
        mov     dword ptr [ebx + 0xa8], edx
        jnz     l_skipbig
        mov     edx, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [edx + 0x20]
        add     eax, 0x44
        push    eax
        lea     ecx, [ebp - 0x50]
        call    FUN_00419480
        lea     ecx, [ebp - 0x120]
        push    ecx
        lea     ecx, [ebp - 0x150]
        call    FUN_004206b0
        mov     ecx, dword ptr [ebx + 0xa0]
        xor     eax, eax
        cmp     ecx, eax
        mov     dword ptr [ebp - 0x10], eax
        jle     l_skipbig
        lea     edx, [ebp - 0x9c]
        mov     dword ptr [ebp - 0x58], edx
        lea     ecx, [ebp - 0x180]
        lea     edx, [ebp - 0x150]
        mov     dword ptr [ebp - 0xc], eax
        mov     dword ptr [ebp - 0x14], eax
        lea     eax, [esi + esi*2]
        mov     dword ptr [ebp - 0x6c], ecx
        mov     dword ptr [ebp - 0x54], edx
        lea     ecx, [ebp - 0x180]
        lea     edx, [ebp - 0x1b0]
        shl     eax, 0x2
        mov     dword ptr [ebp - 0x44], ecx
        mov     dword ptr [ebp - 0x64], edx
        mov     dword ptr [ebp - 0x5c], eax
    l_loop:
        mov     eax, dword ptr [ebx + 0xac]
        mov     esi, dword ptr [ebp - 0x14]
        add     esi, eax
        push    esi
        lea     eax, [ebp - 0x50]
        push    eax
        lea     ecx, [ebp - 0x40]
        mov     dword ptr [ebp - 0x68], esi
        call    FUN_0041c830
        mov     ecx, dword ptr [ebx + 0x90]
        mov     edx, dword ptr [esi + 0x3c]
        mov     eax, ecx
        push    0x0
        mov     dword ptr [ebp - 0x28], ecx
        push    eax
        lea     ecx, [edi + 0xa4]
        mov     dword ptr [ebp - 0x24], edx
        call    FUN_00495e60
        fstp    dword ptr [ebp - 0x4]
        mov     al, byte ptr [edi + 0xbc]
        test    al, al
        jz      l_skip1
        mov     ecx, dword ptr [ebp - 0x24]
        push    0x0
        push    ecx
        lea     ecx, [edi + 0xb0]
        call    FUN_00495e60
        fmul    dword ptr [ebp - 0x4]
        fstp    dword ptr [ebp - 0x4]
    l_skip1:
        mov     edx, dword ptr [ebp - 0x28]
        push    0x0
        push    edx
        lea     ecx, [edi + 0x7c]
        call    FUN_00495e60
        fst     dword ptr [ebp - 0x8]
        mov     al, byte ptr [edi + 0x9c]
        test    al, al
        jz      l_skip2
        mov     eax, dword ptr [ebp - 0x24]
        fstp    st(0)
        push    0x0
        push    eax
        lea     ecx, [edi + 0x88]
        call    FUN_00495e10
        fmul    dword ptr [ebp - 0x8]
    l_skip2:
        push    ecx
        fstp    dword ptr [esp]
        add     esi, 0x30
        push    esi
        lea     ecx, [ebp - 0x20]
        call    FUN_0040ca40
        fld     dword ptr [ebp - 0x40]
        fsub    dword ptr [ebp - 0x20]
        lea     ecx, [ebp - 0xf0]
        fstp    dword ptr [ebp - 0x34]
        fld     dword ptr [ebp - 0x3c]
        fsub    dword ptr [ebp - 0x1c]
        fstp    dword ptr [ebp - 0x30]
        fld     dword ptr [ebp - 0x38]
        fsub    dword ptr [ebp - 0x18]
        fstp    dword ptr [ebp - 0x2c]
        call    FUN_00419e70
        push    -0x1
        push    0x1
        push    0x2
        lea     ecx, [ebp - 0x34]
        push    ecx
        lea     ecx, [ebp - 0xf0]
        call    FUN_0041fde0
        fld     dword ptr [ebp - 0xf0]
        fmul    dword ptr [ebp - 0x4]
        mov     edx, dword ptr [ebp - 0x20]
        mov     eax, dword ptr [ebp - 0x1c]
        mov     ecx, dword ptr [ebp - 0x18]
        fstp    dword ptr [ebp - 0x9c]
        mov     dword ptr [ebp - 0x90], edx
        fld     dword ptr [ebp - 0xe0]
        mov     dword ptr [ebp - 0x80], eax
        fmul    dword ptr [ebp - 0x4]
        mov     dword ptr [ebp - 0x70], ecx
        fstp    dword ptr [ebp - 0x8c]
        fld     dword ptr [ebp - 0xd0]
        fmul    dword ptr [ebp - 0x4]
        fstp    dword ptr [ebp - 0x7c]
        fld     dword ptr [ebp - 0xec]
        fmul    dword ptr [ebp - 0x4]
        fstp    dword ptr [ebp - 0x98]
        fld     dword ptr [ebp - 0xdc]
        fmul    dword ptr [ebp - 0x4]
        fstp    dword ptr [ebp - 0x88]
        fld     dword ptr [ebp - 0xcc]
        fmul    dword ptr [ebp - 0x4]
        fstp    dword ptr [ebp - 0x78]
        fld     dword ptr [ebp - 0xe8]
        fmul    dword ptr [ebp - 0x4]
        fstp    dword ptr [ebp - 0x94]
        fld     dword ptr [ebp - 0xd8]
        fmul    dword ptr [ebp - 0x4]
        fstp    dword ptr [ebp - 0x84]
        fld     dword ptr [ebp - 0xc8]
        fmul    dword ptr [ebp - 0x4]
        fstp    dword ptr [ebp - 0x74]
        mov     edx, dword ptr [ebp - 0x58]
        push    esi
        mov     esi, dword ptr [ebp - 0x68]
        mov     eax, dword ptr [ebp - 0x6c]
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
        mov     edx, dword ptr [ebp - 0x44]
        push    esi
        mov     esi, dword ptr [ebp - 0x54]
        mov     eax, dword ptr [ebp - 0x64]
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
        mov     ecx, dword ptr [ebp - 0x60]
        test    ecx, ecx
        jbe     l_afterstore
        mov     eax, dword ptr [ebp - 0xc]
        mov     esi, dword ptr [ebx + 0xc0]
        mov     edx, dword ptr [edi + 0x17c]
        mov     dword ptr [ebp - 0x8], ecx
        mov     ecx, dword ptr [ebp - 0x5c]
        add     esi, eax
        add     eax, ecx
        mov     dword ptr [ebp - 0x4], edx
        mov     dword ptr [ebp - 0xc], eax
    l_storeloop:
        mov     edx, dword ptr [ebp - 0x4]
        lea     eax, [ebp - 0x1b0]
        push    eax
        mov     ecx, esi
        push    edx
        add     esi, 0xc
        call    FUN_0041c7d0
        mov     ecx, dword ptr [ebp - 0x4]
        mov     eax, dword ptr [ebp - 0x8]
        add     ecx, 0xc
        dec     eax
        mov     dword ptr [ebp - 0x4], ecx
        mov     dword ptr [ebp - 0x8], eax
        jnz     l_storeloop
    l_afterstore:
        mov     eax, dword ptr [ebp - 0x10]
        mov     edx, dword ptr [ebp - 0x14]
        mov     ecx, dword ptr [ebx + 0xa0]
        inc     eax
        add     edx, 0x40
        cmp     eax, ecx
        mov     dword ptr [ebp - 0x10], eax
        mov     dword ptr [ebp - 0x14], edx
        jl      l_loop
    l_skipbig:
        mov     ecx, dword ptr [ebp + 0x8]
        mov     ecx, dword ptr [ecx + 0x20]
        lea     eax, [ebp - 0xc0]
        push    eax
        call    FUN_0048e890
    l_ret:
        mov     edx, dword ptr [ebp + 0x8]
        push    edx
        mov     ecx, ebx
        call    FUN_00494990
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
    }
}
