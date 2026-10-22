/*
 * FUN_004222D0 (131 B) — __thiscall (this in ECX), RET (no args).
 * FPU-driven animation/state advance: compares g_007b95bc against
 * g_0076c5b0, calls FUN_00707E70, and loops incrementing [esi+0x44]
 * while accumulating [esi+0x38], storing the result back to g_007b95bc.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b2234;
extern float g_007b95bc;
extern float g_0076c5b0;

extern void __cdecl FUN_00707E70(void);

__declspec(naked) void FUN_004222D0(void)
{
    __asm {
        mov     eax, dword ptr [g_007b2234]
        test    eax, eax
        push    esi
        mov     esi, ecx
        jne     L4222e3
        mov     dword ptr [esi + 0x44], 0
    L4222e3:
        fld     dword ptr [g_007b95bc]
        push    0
        fcomp   dword ptr [g_0076c5b0]
        __emit 0xDF /* fnstsw ax: MSVC6 inserts 9B WAIT prefix; ref uses no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6 /* test ah,0x41: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jne     L422340
        call    FUN_00707E70
        fld     dword ptr [g_007b95bc]
        fadd    dword ptr [esi + 0x38]
        fld     st(1)
        fcomp   st(1)
        __emit 0xDF /* fnstsw ax: no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6 /* test ah,0x41 */
        __emit 0xC4
        __emit 0x41
        jne     L42234d
        mov     ecx, dword ptr [esi + 0x48]
    L422314:
        mov     edx, dword ptr [esi + 0x44]
        inc     edx
        mov     eax, edx
        cmp     eax, ecx
        mov     dword ptr [esi + 0x44], edx
        jl      L422328
        mov     dword ptr [esi + 0x44], 0
    L422328:
        fadd    dword ptr [esi + 0x38]
        fld     st(1)
        fcomp   st(1)
        __emit 0xDF /* fnstsw ax: no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6 /* test ah,0x41 */
        __emit 0xC4
        __emit 0x41
        je      L422314
        fstp    st(0)
        pop     esi
        fstp    dword ptr [g_007b95bc]
        ret
    L422340:
        call    FUN_00707E70
        fstp    dword ptr [g_007b95bc]
        pop     esi
        ret
    L42234d:
        fstp    st(0)
        pop     esi
        fstp    st(0)
        ret
    }
}
