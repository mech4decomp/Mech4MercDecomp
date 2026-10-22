/*
 * FUN_00761090 (159 B per CSV; actual body 167 B) — __stdcall, RET 0x8 (2 params).
 *
 * Stores param_1 into DAT_008bd2fc, then calls FUN_00762410(FUN_007620a0,
 * param_2). Returns 0x51 if the result != 10, else 0x50.
 *
 * The long runs of `jmp +0` (EB 00) and the `jmp +4` over 4 data bytes
 * (D6 D6 3C 00) are remnants of a stripped switch/jump-table — the compiler
 * left self-jump padding. The 4 data bytes are emitted with __emit because
 * inline asm has no way to place raw data bytes inside a code stream.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_008bd2fc;   /* DAT_008bd2fc */

extern int __cdecl FUN_00762410(int a, int b);

__declspec(naked) int __stdcall FUN_00761090(int param_1, int param_2)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     eax, dword ptr [ebp + 0x8]
        mov     dword ptr [g_008bd2fc], eax
        jmp     L1
        __emit 0xD6   /* data bytes skipped by jmp +4 (stripped jump-table remnant) */
        __emit 0xD6
        __emit 0x3C
        __emit 0x00
L1:
        jmp     L2
L2:
        jmp     L3
L3:
        jmp     L4
L4:
        jmp     L5
L5:
        jmp     L6
L6:
        jmp     L7
L7:
        jmp     L8
L8:
        jmp     L9
L9:
        jmp     L10
L10:
        jmp     L11
L11:
        jmp     L12
L12:
        jmp     L13
L13:
        jmp     L14
L14:
        jmp     L15
L15:
        jmp     L16
L16:
        jmp     L17
L17:
        jmp     L18
L18:
        jmp     L19
L19:
        jmp     L20
L20:
        jmp     L21
L21:
        jmp     L22
L22:
        jmp     L23
L23:
        jmp     L24
L24:
        jmp     L25
L25:
        jmp     L26
L26:
        jmp     L27
L27:
        jmp     L28
L28:
        mov     ecx, dword ptr [ebp + 0xc]
        push    ecx
        push    0x7620a0
        call    FUN_00762410
        add     esp, 0x8
        cmp     eax, 0xa
        jz      LF4
        mov     eax, 0x51
        pop     ebp
        ret
LF4:
        jmp     M1
        __emit 0xD6   /* data bytes skipped by jmp +4 (stripped jump-table remnant) */
        __emit 0xD6
        __emit 0x3C
        __emit 0x00
M1:
        jmp     M2
M2:
        jmp     M3
M3:
        jmp     M4
M4:
        jmp     M5
M5:
        jmp     M6
M6:
        jmp     M7
M7:
        jmp     M8
M8:
        jmp     M9
M9:
        jmp     M10
M10:
        jmp     M11
M11:
        jmp     M12
M12:
        jmp     M13
M13:
        jmp     M14
M14:
        jmp     M15
M15:
        jmp     M16
M16:
        jmp     M17
M17:
        jmp     M18
M18:
        jmp     M19
M19:
        jmp     M20
M20:
        jmp     M21
M21:
        jmp     M22
M22:
        jmp     M23
M23:
        jmp     M24
M24:
        jmp     M25
M25:
        jmp     M26
M26:
        jmp     M27
M27:
        jmp     M28
M28:
        mov     eax, 0x50
        pop     ebp
        ret
    }
}
