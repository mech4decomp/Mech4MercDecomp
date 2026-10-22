/*
 * FUN_006189f0 (79 B) — __thiscall (this in ECX, RET 0x4).
 *
 * Iterates a list via FUN_00416cc0, calling FUN_006149a0 on each element,
 * then tears down with FUN_00416c60.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00416bc0(void);
extern void __cdecl FUN_00416cc0(void);
extern void __cdecl FUN_006149a0(void);
extern void __cdecl FUN_00416c60(void);

__declspec(naked) void FUN_006189f0(void)
{
    __asm {
        sub     esp, 0x14
        add     ecx, 0x40
        push    ecx
        lea     ecx, [esp + 0x4]
        call    FUN_00416bc0
        __emit  0x8D          /* __emit: lea ecx,[esp] — MSVC6 drops zero disp (8D 0C 24 vs ref 8D 4C 24 00) */
        __emit  0x4C
        __emit  0x24
        __emit  0x00
        __emit  0xC7          /* __emit: mov dword ptr [esp],imm32 — MSVC6 drops zero disp byte */
        __emit  0x44
        __emit  0x24
        __emit  0x00
        __emit  0x8C
        __emit  0xA3
        __emit  0x77
        __emit  0x00
        call    FUN_00416cc0
        test    eax, eax
        jz      L_a30
        push    esi
        mov     esi, dword ptr [esp + 0x1c]
    L_a1a:
        push    esi
        mov     ecx, eax
        call    FUN_006149a0
        lea     ecx, [esp + 0x4]
        call    FUN_00416cc0
        test    eax, eax
        jnz     L_a1a
        pop     esi
    L_a30:
        __emit  0x8D          /* __emit: lea ecx,[esp] — zero disp */
        __emit  0x4C
        __emit  0x24
        __emit  0x00
        call    FUN_00416c60
        add     esp, 0x14
        ret     0x4
    }
}
