/*
 * FUN_00661fc0 (174 B) — __thiscall. ABL movement/update routine: compares a
 * double at [ESI+0x14] against _DAT_0076d970, integrates a velocity/position
 * (FUN_00707e70 time base), and clamps a float at [ESI+0x10] between
 * _DAT_0076d064 and _DAT_0076c5b0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern double g_0076d970;
extern double g_00794e40;
extern double g_00794e30;
extern float g_0076d064;
extern float g_0076c5b0;

extern int __cdecl FUN_00707e70(int);

__declspec(naked) void FUN_00661fc0(void)
{
    __asm {
        sub     esp, 0x8
        push    esi
        mov     esi, ecx
        fld     qword ptr [esi + 0x14]
        fcomp   qword ptr [g_0076d970]
        __emit 0xDF   /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* __emit: MSVC6 rejects test ah,imm8; ref is F6 C4 40 */
        __emit 0xC4
        __emit 0x40
        jnz     L_6205f
        fld     dword ptr [esi + 0x4]
        push    0x0
        fadd    qword ptr [g_00794e40]
        fstp    qword ptr [esp + 0x8]
        call    FUN_00707e70
        fcomp   qword ptr [esp + 0x4]
        __emit 0xDF   /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* __emit: MSVC6 rejects test ah,imm8; ref is F6 C4 41 */
        __emit 0xC4
        __emit 0x41
        jnz     L_6205f
        push    0x0
        call    FUN_00707e70
        fsub    qword ptr [esi + 0x14]
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        fstp    qword ptr [esp + 0x4]
        call    dword ptr [eax + 0x20]
        cmp     al, 0x1
        fld     qword ptr [g_00794e30]
        fmul    qword ptr [esp + 0x4]
        jnz     L_62045
        fadd    dword ptr [esi + 0x10]
        fst     dword ptr [esi + 0x10]
        fcomp   dword ptr [g_0076d064]
        __emit 0xDF   /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* __emit: MSVC6 rejects test ah,imm8; ref is F6 C4 41 */
        __emit 0xC4
        __emit 0x41
        jnz     L_6205f
        push    0x0
        mov     dword ptr [esi + 0x10], 0x3f800000
        call    FUN_00707e70
        fstp    qword ptr [esi + 0x14]
        pop     esi
        add     esp, 0x8
        ret
L_62045:
        fsubr   dword ptr [esi + 0x10]
        fst     dword ptr [esi + 0x10]
        fcomp   dword ptr [g_0076c5b0]
        __emit 0xDF   /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* __emit: MSVC6 rejects test ah,imm8; ref is F6 C4 01 */
        __emit 0xC4
        __emit 0x01
        jz      L_6205f
        mov     dword ptr [esi + 0x10], 0x0
L_6205f:
        push    0x0
        call    FUN_00707e70
        fstp    qword ptr [esi + 0x14]
        pop     esi
        add     esp, 0x8
        ret
    }
}
