/*
 * FUN_004994C0 (186 B) — __thiscall, RET 0x4.
 * MLR particle/flare subsystem. Evaluates a curve (Horner-style polynomial in
 * the particle's progress value), clamps the result, and calls FUN_00499580.
 *
 * CFLAGS: /O1
 */

#include <windows.h>

extern float DAT_0076c5b0;
extern float DAT_0076d064;

extern void __cdecl FUN_00415020(void);
extern void __cdecl FUN_00499580(void);

__declspec(naked) void FUN_004994c0(void)
{
    __asm {
        push    ecx
        push    ebx
        push    ebp
        push    esi
        mov     ebp, dword ptr [esp + 0x14]
        push    edi
        mov     edi, ecx
        mov     esi, dword ptr [edi + 0x10]
        fld     dword ptr [edi + 0x90]
        fld     st(0)
        mov     ecx, dword ptr [edi + 0x90]
        fmul    dword ptr [esi + 0x2c]
        mov     ebx, dword ptr [edi + 0xac]
        mov     eax, ebp
        shl     eax, 0x6
        fadd    dword ptr [esi + 0x30]
        add     ebx, eax
        mov     dword ptr [esp + 0x18], ecx
        fmul    st(0), st(1)
        fadd    dword ptr [esi + 0x28]
        fmul    st(0), st(1)
        fadd    dword ptr [esi + 0x24]
        fstp    dword ptr [esp + 0x10]
        fstp    st(0)
        call    FUN_00415020
        fld     dword ptr [esp + 0x18]
        fmul    dword ptr [esi + 0x40]
        fadd    dword ptr [esi + 0x44]
        fmul    dword ptr [esp + 0x18]
        fadd    dword ptr [esi + 0x3c]
        fmul    dword ptr [esp + 0x18]
        fadd    dword ptr [esi + 0x38]
        fsub    dword ptr [esp + 0x10]
        fmulp   st(1), st(0)
        fadd    dword ptr [esp + 0x10]
        fcom    dword ptr [DAT_0076c5b0]
        __emit 0xDF        /* fnstsw ax: MSVC6 inserts 9B WAIT prefix */
        __emit 0xE0
        __emit 0xF6        /* test ah,0x1: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      l_second
        fstp    st(0)
        push    ebp
        fld     dword ptr [DAT_0076c5b0]
        mov     ecx, edi
        fstp    dword ptr [ebx + 0x3c]
        call    FUN_00499580
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x4
    l_second:
        fcom    dword ptr [DAT_0076d064]
        __emit 0xDF        /* fnstsw ax: MSVC6 inserts 9B WAIT prefix */
        __emit 0xE0
        __emit 0xF6        /* test ah,0x41: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jnz     l_store
        fstp    st(0)
        fld     dword ptr [DAT_0076d064]
    l_store:
        push    ebp
        fstp    dword ptr [ebx + 0x3c]
        mov     ecx, edi
        call    FUN_00499580
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x4
    }
}
