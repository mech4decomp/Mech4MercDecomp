/*
 * FUN_0075D710 (80 B) — calls FUN_0075CA60 four times. If any result is
 * -1, returns -1 (0xFFFFFFFF). Otherwise combines the four results into a
 * bitfield: (r1 << 12) | (r2 << 8) | (r3 << 4) | r4.
 *
 * __cdecl, no params, returns EAX.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_0075CA60(void);

__declspec(naked) int __cdecl FUN_0075D710(void)
{
    __asm {
        push    esi
        call    FUN_0075CA60
        cmp     eax, -1
        jne     l1
        or      eax, eax
        pop     esi
        ret
l1:
        shl     eax, 0xC
        mov     esi, eax
        call    FUN_0075CA60
        cmp     eax, -1
        jne     l2
        or      eax, eax
        pop     esi
        ret
l2:
        shl     eax, 0x8
        or      esi, eax
        call    FUN_0075CA60
        cmp     eax, -1
        jne     l3
        or      eax, eax
        pop     esi
        ret
l3:
        shl     eax, 0x4
        or      esi, eax
        call    FUN_0075CA60
        mov     ecx, eax
        cmp     ecx, -1
        jne     l4
        or      eax, eax
        pop     esi
        ret
l4:
        mov     eax, esi
        or      eax, ecx
        pop     esi
        ret
    }
}
