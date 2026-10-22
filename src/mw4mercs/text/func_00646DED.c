/*
 * FUN_00646DED (90 B, +3 leading NOP pad) — __thiscall (1 stack arg, RET 8).
 * FPU accumulator update: compares [this+0x54] against g_76D970, optionally
 * stores the arg, then loops adding g_77ED38 while a counter at [this+0x50]
 * is < 0xFF (clamped to 0xF); stores the result to [this+0x2C].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern double g_76d970;
extern double g_77ed38;

__declspec(naked) void FUN_00646DED(void)
{
    __asm {
        nop
        nop
        nop
        fld     qword ptr [ecx + 0x54]
        fcomp   qword ptr [g_76d970]
        fld     qword ptr [esp + 4]
        __emit 0xDF /* fnstsw ax: MSVC6 inserts 9B WAIT prefix; ref uses no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6 /* test ah,imm8: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x40
        je      loc_646e07
        fst     qword ptr [ecx + 0x54]
loc_646e07:
        fcom    qword ptr [ecx + 0x54]
        __emit 0xDF /* fnstsw ax: no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6 /* test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jne     loc_646e41
        mov     edx, 5
loc_646e16:
        mov     eax, dword ptr [ecx + 0x50]
        add     eax, edx
        cmp     eax, 0xff
        mov     dword ptr [ecx + 0x50], eax
        jl      loc_646e2c
        mov     dword ptr [ecx + 0x50], 0xf
loc_646e2c:
        fld     qword ptr [ecx + 0x54]
        fadd    qword ptr [g_77ed38]
        fst     qword ptr [ecx + 0x54]
        fcomp   st(1)
        __emit 0xDF /* fnstsw ax: no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6 /* test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jne     loc_646e16
loc_646e41:
        fstp    qword ptr [ecx + 0x2c]
        ret     8
    }
}
