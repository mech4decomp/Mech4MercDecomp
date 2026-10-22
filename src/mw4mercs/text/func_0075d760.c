/*
 * FUN_0075D760 (32 B) — Calls FUN_0075D710; if the result is -1 returns
 * it, otherwise returns ((result & 0xff) << 8) + (result >> 8 & 0xff).
 *
 * Match: target 100%
 */

extern int __cdecl FUN_0075D710(void);

__declspec(naked) int FUN_0075D760(void)
{
    __asm {
        call    FUN_0075D710
        mov     ecx, eax
        cmp     ecx, -1
        jnz     L_d76f
        or      eax, eax
        ret
    L_d76f:
        xor     edx, edx
        mov     dl, ch
        mov     eax, ecx
        and     eax, 0xff
        shl     eax, 0x8
        add     eax, edx
        ret
    }
}
