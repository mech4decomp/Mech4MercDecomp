/*
 * FUN_004D2350 (22 B) — Calls FUN_00413D80 on this+0x20, then copies
 * this->field_38 to both field_14 and field_10.
 *
 * __fastcall (ECX = this), RET (no stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_00413d80(void);

__declspec(naked) void __fastcall FUN_004d2350(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        lea     ecx, [esi + 0x20]
        call    FUN_00413d80
        mov     eax, [esi + 0x38]
        mov     [esi + 0x14], eax
        mov     [esi + 0x10], eax
        pop     esi
        ret
    }
}
