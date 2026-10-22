/*
 * FUN_00422360 (134 B) — MLR animation/light update (__thiscall, RET 0x4).
 * Advances a frame counter and accumulates a float (time) using FPU
 * compares against a global threshold (0x0076c5b0) and a time source
 * FUN_00707e70.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b2234;
extern float g_0076c5b0;
extern void FUN_00707e70(void);

__declspec(naked) void FUN_00422360(void)
{
    __asm {
        mov     eax, dword ptr [g_007b2234]
        test    eax, eax
        push    esi
        mov     esi, ecx
        jnz     L77
        mov     dword ptr [esi + 0x44], 0x0
        pop     esi
        ret     0x4
L77:
        fld     dword ptr [esi + 0x3c]
        push    0x0
        fcomp   dword ptr [g_0076c5b0]
        __emit 0xDF  /* __emit: fnstsw ax no-WAIT (DF E0); MSVC6 inserts 9B WAIT */
        __emit 0xE0
        __emit 0xF6  /* __emit: test ah,0x41 (F6 C4 41) rejected by MSVC6 */
        __emit 0xC4
        __emit 0x41
        jnz     LD4
        call    FUN_00707e70
        fld     dword ptr [esi + 0x3c]
        fadd    dword ptr [esi + 0x38]
        fld     st(1)
        fcompp
        __emit 0xDF
        __emit 0xE0
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jnz     LE0
        mov     ecx, dword ptr [esi + 0x48]
LA2:
        mov     edx, dword ptr [esi + 0x44]
        inc     edx
        mov     eax, edx
        cmp     eax, ecx
        mov     dword ptr [esi + 0x44], edx
        jl      LB6
        mov     dword ptr [esi + 0x44], 0x0
LB6:
        fld     dword ptr [esi + 0x3c]
        fadd    dword ptr [esi + 0x38]
        fst     dword ptr [esi + 0x3c]
        fadd    dword ptr [esi + 0x38]
        fld     st(1)
        fcompp
        __emit 0xDF
        __emit 0xE0
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jz      LA2
        fstp    dword ptr [esi + 0x3c]
        pop     esi
        ret     0x4
LD4:
        call    FUN_00707e70
        fstp    dword ptr [esi + 0x3c]
        pop     esi
        ret     0x4
LE0:
        fstp    st(0)
        pop     esi
        ret     0x4
    }
}
