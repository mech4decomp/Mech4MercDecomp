/*
 * FUN_00661f90 (22 B) — __thiscall. ABL predicate: returns 1 if the float at
 * [ECX+0x10] <= _DAT_00794e38, else 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_00794e38;

__declspec(naked) void FUN_00661f90(void)
{
    __asm {
        fld     dword ptr [ecx + 0x10]
        fcomp   dword ptr [g_00794e38]
        __emit 0xDF   /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* __emit: MSVC6 rejects test ah,imm8; ref is F6 C4 41 */
        __emit 0xC4
        __emit 0x41
        jz      L_1fa3
        mov     al, 0x1
        ret
L_1fa3:
        xor     al, al
        ret
    }
}
