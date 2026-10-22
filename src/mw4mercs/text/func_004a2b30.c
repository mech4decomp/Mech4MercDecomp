/*
 * FUN_004A2B30 (264 B) — __thiscall MLR helper. Computes two interpolated
 *   scalar values (fVar2/fVar3) from piecewise-linear tables in the object at
 *   [this+0x10], stores them at [this+0xf0]/[this+0xec], and stores
 *   sqrt(fVar2^2 + fVar3^2) at [this+0xe4]. Sets bit 1 of the byte at
 *   [*(this+0xf4)+0x18].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __stdcall FUN_004a3b70(void);

__declspec(naked) void __stdcall FUN_004a2b30(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    ebx
        push    esi
        push    edi
        mov     ebx, ecx
        push    eax
        call    FUN_004a3b70
        mov     ecx, dword ptr [ebx + 0x10]
        mov     al, byte ptr [ecx + 0x138]
        fld     dword ptr [ecx + 0x128]
        test    al, al
        mov     edx, dword ptr [ebx + 0x98]
        mov     dword ptr [esp + 0x10], edx
        jz      l_skip1
        mov     esi, dword ptr [ecx + 0x134]
        xor     edx, edx
        test    esi, esi
        jbe     l_after_loop1
        mov     edi, dword ptr [ecx + 0x130]
    l_loop1:
        fld     dword ptr [edi]
        fcomp   dword ptr [esp + 0x10]
        __emit 0xDF
        __emit 0xE0          /* __emit: fnstsw ax no-WAIT (DF E0); MSVC6 adds 9B WAIT */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41          /* __emit: test ah,0x41 rejected by MSVC6 inline asm */
        jz      l_after_loop1
        inc     edx
        add     edi, 0xc
        cmp     edx, esi
        jc      l_loop1
    l_after_loop1:
        fld     dword ptr [esp + 0x10]
        lea     eax, [edx + edx*2]
        mov     edx, dword ptr [ecx + 0x130]
        fsub    dword ptr [edx + eax*4 - 0xc]
        lea     eax, [edx + eax*4 - 0xc]
        fmul    dword ptr [eax + 4]
        fadd    dword ptr [eax + 8]
        fmulp   st(1), st(0)
    l_skip1:
        mov     eax, dword ptr [ebx + 0x98]
        fst     dword ptr [ebx + 0xf0]
        fld     dword ptr [ecx + 0x144]
        mov     dword ptr [esp + 0x10], eax
        mov     al, byte ptr [ecx + 0x154]
        test    al, al
        jz      l_skip2
        mov     esi, dword ptr [ecx + 0x150]
        xor     edx, edx
        test    esi, esi
        jbe     l_after_loop2
        mov     edi, dword ptr [ecx + 0x14c]
    l_loop2:
        fld     dword ptr [edi]
        fcomp   dword ptr [esp + 0x10]
        __emit 0xDF
        __emit 0xE0          /* __emit: fnstsw ax no-WAIT (DF E0); MSVC6 adds 9B WAIT */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41          /* __emit: test ah,0x41 rejected by MSVC6 inline asm */
        jz      l_after_loop2
        inc     edx
        add     edi, 0xc
        cmp     edx, esi
        jc      l_loop2
    l_after_loop2:
        mov     eax, dword ptr [ecx + 0x14c]
        fld     dword ptr [esp + 0x10]
        lea     edx, [edx + edx*2]
        fsub    dword ptr [eax + edx*4 - 0xc]
        lea     eax, [eax + edx*4 - 0xc]
        fmul    dword ptr [eax + 4]
        fadd    dword ptr [eax + 8]
        fmulp   st(1), st(0)
    l_skip2:
        fmul    st(0), st(1)
        mov     ecx, dword ptr [ebx + 0xf4]
        mov     eax, dword ptr [ecx + 0x18]
        mov     cl, byte ptr [eax]
        fst     dword ptr [ebx + 0xec]
        pop     edi
        fld     st(0)
        or      cl, 0x2
        fmul    st(0), st(1)
        pop     esi
        fld     st(2)
        mov     byte ptr [eax], cl
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fsqrt
        fstp    dword ptr [ebx + 0xe4]
        pop     ebx
        fstp    st(0)
        fstp    st(0)
        ret     4
    }
}
