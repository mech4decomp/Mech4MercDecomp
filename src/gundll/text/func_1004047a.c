/*
 * FUN_1004047a (31 B) - __cdecl. Searches a table of shorts from
 * 0x10054444 to 0x10054458 (exclusive) for param_1; returns 0 if found,
 * else 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_1004047a(void)
{
    __asm {
        mov     eax, 0x10054444
L_47f:
        mov     cx, word ptr [esp + 4]
        cmp     cx, word ptr [eax]
        jz      L_496
        inc     eax
        inc     eax
        cmp     eax, 0x10054458
        jc      L_47f
        push    1
        pop     eax
        ret
L_496:
        xor     eax, eax
        ret
    }
}
