/*
 * FUN_00415BE0 (40 B) — Finalize registration: walk a linked list and
 * call a virtual method on each node.
 *
 * Called by vtable_register (FUN_00416F20, vtable 0x77260C slot 8) as
 * FUN_00415BE0(0, result) — the last call in the register path.
 *
 * Iterates a singly-linked list starting at this->field_04. For each node,
 * calls virtual method at vtable+0x34 (slot 13) with two params.
 * Node layout:
 *   +0x00  vtable pointer
 *   +0x04  (unknown)
 *   +0x08  next pointer (NULL = end)
 *
 * __thiscall (ECX = this), RET 8 (2 stack params).
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall register_finalize(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [ecx + 0x4]
        test    esi, esi
        je      l_done
        push    ebx
        mov     ebx, dword ptr [esp + 0xc]
        push    edi
        mov     edi, dword ptr [esp + 0x14]
    l_loop:
        mov     eax, dword ptr [esi]
        push    edi
        push    ebx
        mov     ecx, esi
        call    dword ptr [eax + 0x34]
        mov     esi, dword ptr [esi + 0x8]
        test    esi, esi
        jne     l_loop
        pop     edi
        pop     ebx
    l_done:
        pop     esi
        ret     8
    }
}
