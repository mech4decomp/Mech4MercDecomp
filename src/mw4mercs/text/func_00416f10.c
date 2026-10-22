/*
 * Vtable 0x77260C slot 7 — FUN_00416F10 (11 B).
 *
 * Returns 1 if this->field_14 (count) == 0, else 0.
 *
 * __thiscall (ECX = this), no stack params, plain RET.
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall vtable_is_empty(void)
{
    __asm {
        mov     edx, dword ptr [ecx + 0x14]
        xor     eax, eax
        test    edx, edx
        sete    al
        ret
    }
}
