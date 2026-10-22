/*
 * Vtable 0x77260C slot 6 — FUN_00416EE0 (3 B).
 *
 * Returns this->field_14 (count / size of the collection).
 *
 * __thiscall (ECX = this), no stack params, plain RET.
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall vtable_get_count(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x14]
        ret
    }
}
