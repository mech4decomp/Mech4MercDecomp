/*
 * FUN_004AC610 (33 B) — check: calls FUN_00494b90, returns 1 if true and field_0xa0==0.
 *
 * __fastcall (ECX = this), RET (no stack params).
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char __fastcall FUN_00494b90(void);

__declspec(naked) int __fastcall FUN_004ac610(int this)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_00494b90
        test    al, al
        jz      l_return_0
        mov     eax, [esi + 0xa0]
        test    eax, eax
        jnz     l_return_0
        mov     eax, 0x1
        pop     esi
        ret
    l_return_0:
        xor     eax, eax
        pop     esi
        ret
    }
}
