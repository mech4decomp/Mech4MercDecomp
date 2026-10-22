/*
 * FUN_00416110 (18 B) — "get_item from singleton" helper.
 *
 * Called by Database vtable 0x77260C slot 10 (FUN_004D3030, "vtable_factory").
 * The factory manages a singleton object (0x2C bytes) at global 0x7DB0BC.
 * This function pops the first node from a singly-linked free list rooted at
 * this->field_1c. If the list is non-empty, it returns the node pointer in EAX
 * and updates the head to node->next. If empty, it tail-calls FUN_00415E80
 * (the fallback allocator) to allocate a new node.
 *
 * __thiscall (ECX = this), no stack params, plain RET.
 * CFLAGS: /O1
 */

void FUN_00415E80(void);

__declspec(naked) void __stdcall singleton_get_item(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x1c]
        test    eax, eax
        je      l_alloc
        mov     edx, dword ptr [eax]
        mov     dword ptr [ecx + 0x1c], edx
        ret

    l_alloc:
        jmp     FUN_00415E80
    }
}
