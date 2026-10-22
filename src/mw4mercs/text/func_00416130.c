/*
 * FUN_00416130 (15 B) — Return a node to the global pool's free list.
 *
 * Called by:
 *   - FUN_00415380 (base_dtor.c) — base object destructor, list 2 cleanup
 *   - FUN_00417980 (subobj_dtor_2c.c) — sub-object destructor at this+0x2C
 *
 * Pushes the node onto the pool manager's singly-linked free list at
 * field_0x1c. The node's first field (offset 0x00) is the next pointer.
 *
 * __thiscall (ECX = pool manager object at 0x007B8C20), 1 stack param (node).
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall pool_return(void)
{
    __asm {
        mov     edx, dword ptr [ecx + 0x1c]    ; edx = pool->free_list_head
        mov     eax, dword ptr [esp + 0x4]      ; eax = node (stack param)
        mov     dword ptr [eax], edx            ; node->next = pool->free_list_head
        mov     dword ptr [ecx + 0x1c], eax     ; pool->free_list_head = node
        ret     0x4                             ; return, popping 4 bytes
    }
}
