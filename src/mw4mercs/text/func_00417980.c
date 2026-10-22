/*
 * FUN_00417980 (43 B) — Sub-object destructor at this+0x2C.
 *
 * Called by FUN_004D2B80 (database_dtor_body_1) to tear down the sub-object
 * at `this+0x2C`. This sub-object manages a singly-linked list rooted at
 * field_00. Each node has the layout:
 *   node+0x00: next pointer (singly-linked list)
 *   node+0x04: child/sub-object pointer (may be null)
 *
 * For each node in the list:
 *   1. Saves the next pointer (edi = node->next)
 *   2. Calls FUN_00417890(node) to recursively destroy the node's contents
 *   3. Calls FUN_00416130(global_pool, node) to return the node to the free pool
 *   4. Advances to the next node
 *
 * The global at 0x007B8C20 is the pool manager object (a singleton with a
 * free-list at field_0x1c). FUN_00416130 pushes the node onto that free list.
 *
 * __thiscall (ECX = this), no stack params, void return.
 * CFLAGS: /O1
 */

/* ---- external functions (called via inline asm, decoration irrelevant) ---- */
extern void __stdcall FUN_00417890(void);
extern void __stdcall FUN_00416130(void);

/* Global pool manager object at 0x007B8C20 */
extern int g_pool_manager;

__declspec(naked) void __stdcall subobj_dtor_2c(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [ecx]        ; esi = this->field_00 (head of list)
        test    esi, esi
        je      l_end                       ; if list is empty, return

        push    edi

    l_loop:
        test    esi, esi
        mov     edi, dword ptr [esi + 4]    ; edi = esi->next (save next pointer)
        je      l_free                      ; if esi is null (skip destroy)

        mov     ecx, esi
        call    FUN_00417890                ; destroy node contents

        mov     ecx, dword ptr [g_pool_manager] ; ecx = global pool manager
        push    esi
        call    FUN_00416130                ; return node to free pool

    l_free:
        test    edi, edi
        mov     esi, edi                    ; advance to next node
        jne     l_loop                      ; if next != null, continue

        pop     edi

    l_end:
        pop     esi
        ret
    }
}
