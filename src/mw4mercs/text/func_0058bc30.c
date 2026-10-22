/*
 * FUN_0058bc30 (46 B) — Looks up a value by arg. First tries
 * FUN_00416B60(this+0x974, &arg), then falls back to [this+0x970].
 * Returns [result+0x10] or 0.
 *
 * __thiscall (ECX = this), 1 arg on stack, callee cleans 4 bytes.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __fastcall FUN_00416B60(void *, void *);

__declspec(naked) void __fastcall FUN_0058bc30(void)
{
    __asm {
        push    esi
        mov     esi, ecx            /* this */
        lea     eax, [esp + 8]      /* address of arg1 */
        push    eax                 /* push &arg1 */
        lea     ecx, [esi + 0x974]  /* sub-object */
        call    FUN_00416B60
        test    eax, eax
        jne     found
        mov     eax, [esi + 0x970]  /* fallback */
        test    eax, eax
        je      not_found
    found:
        mov     eax, [eax + 0x10]   /* return [result+0x10] */
        pop     esi
        ret     4
    not_found:
        xor     eax, eax            /* return 0 */
        pop     esi
        ret     4
    }
}
