/*
 * FUN_00415040 (38 B) — archive/database subsystem: bounded PRNG helper.
 * Loops calling FUN_00414fd0 until the value is <= (0x7fff - 0x8000 % n),
 * then returns value % n. __stdcall-style wrapper (arg at [esp+0xc] after
 * two pushes).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_00414fd0(void);

__declspec(naked) void FUN_00415040(void)
{
    __asm {
        push    esi
        mov     eax, 0x8000
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        cdq
        idiv    edi
        mov     esi, 0x7fff
        sub     esi, edx
    loop_rand:
        call    FUN_00414fd0
        cmp     eax, esi
        jg      loop_rand
        cdq
        idiv    edi
        pop     edi
        pop     esi
        mov     eax, edx
        ret
    }
}
