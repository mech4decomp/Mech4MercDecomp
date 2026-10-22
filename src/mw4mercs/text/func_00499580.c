/*
 * FUN_00499580 (152 B) — __thiscall, RET 0x4.
 * MLR particle/flare subsystem. Computes a curve value, clamps it, evaluates
 * sin/cos of an angle, and stores the resulting direction into a particle slot.
 *
 * CFLAGS: /O1
 */

#include <windows.h>

extern float DAT_0076c5b0;
extern float DAT_0076d070;

extern void __cdecl FUN_00415020(void);

__declspec(naked) void FUN_00499580(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x10
        mov     eax, dword ptr [ecx + 0x10]
        fld     dword ptr [eax + 0x74]
        mov     edx, dword ptr [ebp + 0x8]
        push    ebx
        push    esi
        mov     esi, dword ptr [ecx + 0xac]
        mov     ecx, dword ptr [eax + 0x6c]
        mov     dword ptr [ebp - 0x8], ecx
        fsub    dword ptr [ebp - 0x8]
        shl     edx, 0x6
        add     esi, edx
        fst     dword ptr [ebp - 0x4]
        fcomp   dword ptr [DAT_0076c5b0]
        __emit 0xDF        /* fnstsw ax: MSVC6 inserts 9B WAIT prefix */
        __emit 0xE0
        __emit 0xF6        /* test ah,0x1: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      l_skipclamp
        mov     dword ptr [ebp - 0x4], 0x0
    l_skipclamp:
        call    FUN_00415020
        fmul    dword ptr [ebp - 0x4]
        lea     edx, [ebp + 0x8]
        lea     eax, [ebp - 0x10]
        fadd    dword ptr [ebp - 0x8]
        mov     dword ptr [ebp - 0x8], edx
        mov     dword ptr [ebp - 0x4], eax
        fstp    dword ptr [ebp + 0x8]
        push    ebx
        push    edx
        mov     ebx, dword ptr [ebp - 0x4]
        mov     edx, dword ptr [ebp - 0x8]
        fld     dword ptr [edx]
        fsincos
        fstp    dword ptr [ebx + 0x4]
        fstp    dword ptr [ebx]
        pop     edx
        pop     ebx
        call    FUN_00415020
        fcomp   dword ptr [DAT_0076d070]
        fld     dword ptr [ebp - 0x10]
        __emit 0xDF        /* fnstsw ax: MSVC6 inserts 9B WAIT prefix */
        __emit 0xE0
        __emit 0xF6        /* test ah,0x1: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      l_nofchs
        fchs
    l_nofchs:
        fstp    dword ptr [esi + 0x30]
        mov     dword ptr [esi + 0x34], 0x0
        mov     ecx, dword ptr [ebp - 0xc]
        mov     dword ptr [esi + 0x38], ecx
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
    }
}
