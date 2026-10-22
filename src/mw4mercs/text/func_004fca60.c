/*
 * FUN_004FCA60 (22 B) — Array lookup: if param_1 < 18, returns
 * this->field_14[param_1 * 8]; else returns -1.
 *
 * __fastcall (ECX = this), RET 0x4 (1 stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __fastcall FUN_004fca60(void)
{
    __asm {
        mov     eax, [esp + 4]
        cmp     eax, 0x12
        jge     l_out_of_range
        mov     eax, [ecx + eax * 8 + 0x14]
        ret     4
    l_out_of_range:
        or      eax, 0xffffffff
        ret     4
    }
}
