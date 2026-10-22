/*
 * FUN_004DDD20 (20 B) — Setter: stores param_1 at this+0x30, and if
 * this->field_34 is non-null, also stores it at that+0x54.
 *
 * __fastcall (ECX = this), RET 0x4 (1 stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_004ddd20(void)
{
    __asm {
        mov     eax, [esp + 4]
        mov     [ecx + 0x30], eax
        mov     ecx, [ecx + 0x34]
        test    ecx, ecx
        jz      l_skip
        mov     [ecx + 0x54], eax
    l_skip:
        ret     4
    }
}
