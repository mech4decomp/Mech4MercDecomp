/*
 * FUN_00415D40 (37 B) — Item initializer / linked-list inserter.
 *
 * Called by Database vtable 0x77260C slot 10 (FUN_004D3030, "vtable_factory")
 * after allocating and populating an item's basic fields. Inserts the item
 * (ECX = this) into a singly-linked list rooted at param_1->field_08.
 *
 * If the list is empty (param_1->field_08 == NULL), the item becomes the
 * sole node (this->next = this, self-loop) and param_1->field_08 = this.
 * Otherwise, the item is inserted after the current cursor node (the node
 * pointed to by param_1->field_08): this->next = cursor->next,
 * cursor->next = this, and param_1->field_08 = this (cursor advances).
 *
 * Item layout (at time of call):
 *   +0x00  vtable pointer (set to 0x772654 after this returns)
 *   +0x04  owner pointer
 *   +0x08  next pointer (linked-list, set by this function)
 *   +0x0c  some value (param_1)
 *   +0x10  name word
 *
 * param_1 layout (the "list head" / cursor structure):
 *   +0x08  cursor pointer (points to current node in the list)
 *
 * __thiscall (ECX = this = item), 1 stack param, RET 0x4.
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall item_init(void)
{
    __asm {
        mov     edx, dword ptr [esp + 4]    ; EDX = param_1 (list head/cursor)
        mov     eax, dword ptr [edx + 8]    ; EAX = param_1->cursor
        test    eax, eax
        jnz     l_have_cursor               ; cursor != NULL: insert after it

        ; Empty list: this becomes the only node (self-loop)
        mov     dword ptr [ecx + 8], ecx    ; this->next = this
        mov     dword ptr [edx + 8], ecx    ; param_1->cursor = this
        ret     4

    l_have_cursor:
        ; Insert this after the cursor node
        push    esi
        mov     esi, dword ptr [eax + 8]    ; ESI = cursor->next
        mov     dword ptr [ecx + 8], esi    ; this->next = cursor->next
        mov     dword ptr [eax + 8], ecx    ; cursor->next = this
        mov     dword ptr [edx + 8], ecx    ; param_1->cursor = this (advance)
        pop     esi
        ret     4
    }
}
