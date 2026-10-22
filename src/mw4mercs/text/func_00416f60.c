/*
 * Vtable 0x77260C slot 9 — FUN_00416F60 (37 B).
 *
 * Lookup by name: calls FUN_004170A0(param) to find an index, then
 * returns items[index]->field_0c. Returns 0 if not found (index == -1).
 *
 * __thiscall (ECX = this), RET 4 (1 stack param: name/key).
 * CFLAGS: /O1
 */

extern int __stdcall FUN_004170a0(void *name);

__declspec(naked) void __stdcall vtable_lookup(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        mov     esi, ecx
        push    eax
        call    FUN_004170a0
        cmp     eax, -1
        jz      l_null
        mov     ecx, dword ptr [esi + 0x0c]
        mov     edx, dword ptr [ecx + eax * 4]
        mov     eax, dword ptr [edx + 0x0c]
        pop     esi
        ret     4
    l_null:
        xor     eax, eax
        pop     esi
        ret     4
    }
}
