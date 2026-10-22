/*
 * Vtable 0x77260C slot 5 — FUN_00416EF0 (23 B).
 *
 * Bounds-checked indexer: returns items[param]->field_0c, or 0 if
 * param >= this->field_14 (count).
 *
 * __thiscall (ECX = this), RET 4 (1 stack param: index).
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall vtable_get_item(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        cmp     eax, dword ptr [ecx + 0x14]
        jae     l_null
        mov     ecx, dword ptr [ecx + 0x0c]
        mov     edx, dword ptr [ecx + eax * 4]
        mov     eax, dword ptr [edx + 0x0c]
        ret     4
    l_null:
        xor     eax, eax
        ret     4
    }
}
