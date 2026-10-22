/*
 * FUN_004D3FC0 (21 B) — Calls virtual method at vtable+4 on
 * this->field_4c with args (6, 0), then sets this+0x15 to 0.
 *
 * __fastcall (ECX = this), RET (no stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_004d3fc0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, [esi + 0x4c]
        mov     eax, [ecx]
        push    0
        push    6
        call    dword ptr [eax + 4]
        mov     byte ptr [esi + 0x15], 0
        pop     esi
        ret
    }
}
