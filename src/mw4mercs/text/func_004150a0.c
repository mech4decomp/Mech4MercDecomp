/*
 * FUN_004150a0 (25 B) — archive/database subsystem: __fastcall bounded PRNG
 * helper. Loops calling FUN_00414fd0 until value <= *param, then returns
 * value % param[1] + 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_00414fd0(void);

__declspec(naked) void FUN_004150a0(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, ecx
        mov     esi, dword ptr [edi]
    loop_rand:
        call    FUN_00414fd0
        cmp     eax, esi
        jg      loop_rand
        cdq
        idiv    dword ptr [edi + 0x4]
        pop     edi
        pop     esi
        mov     eax, edx
        inc     eax
        ret
    }
}
