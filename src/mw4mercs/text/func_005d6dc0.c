/*
 * FUN_005d6dc0 (469 B) — __thiscall (ECX = this, 1 stack param, RET 0x4).
 * Searches two node lists for a matching entry, computes a direction
 * vector, and returns a signed length (FCHS on one path). Calls
 * FUN_0040c9c0/FUN_0040ccd0/FUN_0040c410 (vector helpers),
 * FUN_00587830 (vec3 ctor), FUN_005d6fa0/FUN_005d6fc0 (vec copy),
 * FUN_005d6d70 (distance test), FUN_0040c5d0/FUN_0040ca10.
 *
 * CFLAGS: /O1
 */

#include <windows.h>

extern void __cdecl FUN_0040c9c0(int, int, int);
extern void __cdecl FUN_0040ccd0(void *);
extern void __cdecl FUN_0040c410(void *);
extern void __cdecl FUN_00587830(int, int, int);
extern void __cdecl FUN_005d6fa0(void *, void *);
extern void __cdecl FUN_005d6fc0(void *, void *);
extern int __cdecl FUN_005d6d70(void *);
extern void __cdecl FUN_0040c5d0(void *);
extern void __cdecl FUN_0040ca10(void *, void *);

__declspec(naked) void __fastcall FUN_005d6dc0(int param1)
{
    __asm {
        sub     esp, 0x54
        push    ebx
        push    esi
        push    edi
        push    0x0
        push    0x0
        mov     esi, ecx
        push    0x0
        lea     ecx, [esp + 0x30]
        call    FUN_0040c9c0
        lea     eax, [esp + 0x24]
        push    eax
        lea     ecx, [esp + 0x34]
        call    FUN_0040ccd0
        push    0x0
        push    0x0
        push    0x0
        lea     ecx, [esp + 0x30]
        call    FUN_0040c9c0
        lea     ecx, [esp + 0x24]
        push    ecx
        lea     ecx, [esp + 0x1c]
        call    FUN_0040ccd0
        mov     ebx, dword ptr [esp + 0x64]
        mov     eax, dword ptr [ebx + 0x4]
        cmp     eax, esi
        jnz     l_e12
        mov     edi, dword ptr [ebx + 0x8]
        jmp     l_e14
    l_e12:
        mov     edi, eax
    l_e14:
        mov     eax, dword ptr [esi + 0x18]
        mov     edx, dword ptr [esi + 0x14]
        sub     eax, edx
        sar     eax, 0x2
        xor     ecx, ecx
        test    eax, eax
        jle     l_e31
    l_e25:
        cmp     dword ptr [edx], ebx
        jz      l_e8d
        inc     ecx
        add     edx, 0x4
        cmp     ecx, eax
        jl      l_e25
    l_e31:
        push    0xbf800000
        push    0xbf800000
        push    0xbf800000
        lea     ecx, [esp + 0x54]
        call    FUN_00587830
        push    eax
        lea     ecx, [esp + 0x58]
        call    FUN_005d6fa0
        push    eax
    l_e54:
        lea     ecx, [esp + 0x28]
        call    FUN_005d6fc0
        lea     eax, [esp + 0x24]
        push    eax
        lea     ecx, [esp + 0x34]
        call    FUN_0040c410
        mov     ecx, dword ptr [edi + 0x14]
        mov     eax, dword ptr [edi + 0x18]
        sub     eax, ecx
        sar     eax, 0x2
        xor     ecx, ecx
        test    eax, eax
        jle     l_ec1
        mov     edx, dword ptr [edi + 0x14]
    l_e7f:
        cmp     dword ptr [edx], ebx
        jz      l_ea7
        inc     ecx
        add     edx, 0x4
        cmp     ecx, eax
        jl      l_e7f
        jmp     l_ec1
    l_e8d:
        mov     eax, dword ptr [esi + 0x20]
        lea     edx, [ecx + ecx*0x2]
        lea     ecx, [eax + edx*0x4]
        push    ecx
        lea     ecx, [esp + 0x40]
        call    FUN_005d6fc0
        lea     edx, [esp + 0x3c]
        push    edx
        jmp     l_e54
    l_ea7:
        mov     edx, dword ptr [edi + 0x20]
        lea     ecx, [ecx + ecx*0x2]
        lea     eax, [edx + ecx*0x4]
        push    eax
        lea     ecx, [esp + 0x40]
        call    FUN_005d6fc0
        lea     ecx, [esp + 0x3c]
        push    ecx
        jmp     l_ee4
    l_ec1:
        push    0xbf800000
        push    0xbf800000
        push    0xbf800000
        lea     ecx, [esp + 0x60]
        call    FUN_00587830
        push    eax
        lea     ecx, [esp + 0x4c]
        call    FUN_005d6fa0
        push    eax
    l_ee4:
        lea     ecx, [esp + 0x28]
        call    FUN_005d6fc0
        lea     edx, [esp + 0x24]
        push    edx
        lea     ecx, [esp + 0x1c]
        call    FUN_0040c410
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, esi
        call    FUN_005d6d70
        test    al, al
        jz      l_f57
        add     edi, 0x8
        push    edi
        lea     ecx, [esp + 0x40]
        call    FUN_0040c5d0
        lea     ecx, [esp + 0x3c]
        push    ecx
        add     esi, 0x8
        push    esi
        lea     ecx, [esp + 0x14]
        call    FUN_0040ca10
        fld     dword ptr [esp + 0x14]
        fld     dword ptr [esp + 0x10]
        pop     edi
        fld     st(0)
        pop     esi
        fmul    st(0), st(1)
        fld     st(2)
        pop     ebx
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        /* __emit: fld dword ptr [esp] D9 44 24 00; MSVC6 emits D9 04 24 (drops disp) */
        __emit 0xD9
        __emit 0x44
        __emit 0x24
        __emit 0x00
        /* __emit: fmul dword ptr [esp] D8 4C 24 00; MSVC6 emits D8 0C 24 */
        __emit 0xD8
        __emit 0x4C
        __emit 0x24
        __emit 0x00
        /* __emit: faddp DE C1 */
        __emit 0xDE
        __emit 0xC1
        fsqrt
        fstp    st(2)
        fstp    st(0)
        fchs
        add     esp, 0x54
        ret     0x4
    l_f57:
        lea     edx, [esp + 0x18]
        push    edx
        lea     eax, [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_0040ca10
        fld     dword ptr [esp + 0x14]
        fld     dword ptr [esp + 0x10]
        pop     edi
        fld     st(0)
        pop     esi
        fmul    st(0), st(1)
        fld     st(2)
        pop     ebx
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        /* __emit: fld dword ptr [esp] D9 44 24 00; MSVC6 emits D9 04 24 (drops disp) */
        __emit 0xD9
        __emit 0x44
        __emit 0x24
        __emit 0x00
        /* __emit: fmul dword ptr [esp] D8 4C 24 00; MSVC6 emits D8 0C 24 */
        __emit 0xD8
        __emit 0x4C
        __emit 0x24
        __emit 0x00
        faddp   st(1), st(0)
        fsqrt
        fstp    st(2)
        fstp    st(0)
        add     esp, 0x54
        ret     0x4
    }
}
