/*
 * FUN_005d6bf0 (372 B) — __thiscall (ECX = this, 1 stack param, RET 0x4).
 * Adds a node to a list, computes a normalized direction vector, and
 * appends a transform entry. Calls FUN_006f4950/FUN_006f49a0 (lock/unlock),
 * FUN_005da060/FUN_005da150 (list grow), FUN_005da4c0 (append),
 * FUN_0040ca40/FUN_0040c410 (vector math).
 *
 * CFLAGS: /O1
 */

#include <windows.h>

extern void __cdecl FUN_006f4950(int);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_005da060(void *, void *, int);
extern void __cdecl FUN_005da4c0(void *, void *);
extern void __cdecl FUN_005da150(void *, void *, int);
extern void __cdecl FUN_0040ca40(void *, float);
extern void __cdecl FUN_0040c410(void *);

extern int   DAT_007f2464;
extern float DAT_0076d064;

__declspec(naked) void __fastcall FUN_005d6bf0(int param1)
{
    __asm {
        mov     eax, dword ptr [DAT_007f2464]
        sub     esp, 0x34
        push    ebx
        push    esi
        push    edi
        push    eax
        mov     esi, ecx
        call    FUN_006f4950
        mov     edx, dword ptr [esi + 0x14]
        mov     eax, dword ptr [esi + 0x18]
        mov     ebx, dword ptr [esp + 0x44]
        lea     ecx, [esi + 0x14]
        sub     eax, edx
        sar     eax, 0x2
        xor     edx, edx
        test    eax, eax
        jle     l_c2d
    l_c1b:
        mov     edi, dword ptr [ecx]
    l_c1d:
        cmp     dword ptr [edi], ebx
        jz      l_d56
        inc     edx
        add     edi, 0x4
        cmp     edx, eax
        jl      l_c1d
    l_c2d:
        mov     eax, dword ptr [ecx + 0x4]
        cmp     eax, dword ptr [ecx + 0x8]
        jz      l_c47
        test    eax, eax
        jz      l_c3f
        mov     dword ptr [eax], ebx
        mov     ebx, dword ptr [esp + 0x44]
    l_c3f:
        add     eax, 0x4
        mov     dword ptr [ecx + 0x4], eax
        jmp     l_c58
    l_c47:
        push    0x1
        lea     edx, [esp + 0x48]
        push    edx
        push    eax
        call    FUN_005da060
        mov     ebx, dword ptr [esp + 0x44]
    l_c58:
        mov     eax, dword ptr [ebx + 0x4]
        cmp     eax, esi
        jnz     l_c62
        mov     eax, dword ptr [ebx + 0x8]
    l_c62:
        fld     dword ptr [eax + 0x8]
        mov     eax, dword ptr [eax + 0x10]
        mov     ecx, dword ptr [esi + 0x8]
        mov     edx, dword ptr [esi + 0x10]
        mov     dword ptr [esp + 0x28], ecx
        fsub    dword ptr [esp + 0x28]
        mov     dword ptr [esp + 0x24], eax
        fld     dword ptr [esp + 0x24]
        mov     dword ptr [esp + 0x30], edx
        fsub    dword ptr [esp + 0x30]
        push    ecx
        lea     ecx, [esp + 0x14]
        fst     dword ptr [esp + 0x28]
        mov     dword ptr [esp + 0x18], 0x0
        fmul    dword ptr [esp + 0x28]
        fld     st(1)
        fmul    st(0), st(2)
        faddp   st(1), st(0)
        fsqrt
        fdivr   dword ptr [DAT_0076d064]
        fstp    dword ptr [esp + 0x10]
        fmul    dword ptr [esp + 0x10]
        fstp    dword ptr [esp + 0x14]
        fld     dword ptr [esp + 0x28]
        fmul    dword ptr [esp + 0x10]
        fstp    dword ptr [esp + 0x1c]
        fld     dword ptr [esi + 0x50]
        fmul    dword ptr [esi + 0x44]
        fstp    dword ptr [esp]
        push    ecx
        lea     ecx, [esp + 0x18]
        call    FUN_0040ca40
        fld     dword ptr [esp + 0x28]
        fadd    dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x14]
        fld     dword ptr [esp + 0x18]
        mov     eax, edx
        fadd    dword ptr [esp + 0x30]
        mov     dword ptr [esp + 0x20], edx
        lea     edx, [esp + 0x34]
        push    edx
        fstp    dword ptr [esp + 0x28]
        mov     ecx, dword ptr [esp + 0x28]
        mov     dword ptr [esp + 0x40], ecx
        lea     ecx, [esp + 0x2c]
        fstp    dword ptr [esp + 0x38]
        mov     dword ptr [esp + 0x3c], eax
        call    FUN_0040c410
        mov     ebx, dword ptr [esi + 0x24]
        mov     eax, dword ptr [esi + 0x28]
        cmp     ebx, eax
        lea     edi, [esi + 0x20]
        jz      l_d43
        lea     eax, [esp + 0x28]
        push    eax
        push    ebx
        call    FUN_005da4c0
        add     ebx, 0xc
        add     esp, 0x8
        mov     dword ptr [edi + 0x4], ebx
        mov     byte ptr [esi + 0x4], 0x1
        call    FUN_006f49a0
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x34
        ret     0x4
    l_d43:
        push    0x1
        lea     ecx, [esp + 0x2c]
        push    ecx
        push    ebx
        mov     ecx, edi
        call    FUN_005da150
        mov     byte ptr [esi + 0x4], 0x1
    l_d56:
        call    FUN_006f49a0
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x34
        ret     0x4
    }
}
