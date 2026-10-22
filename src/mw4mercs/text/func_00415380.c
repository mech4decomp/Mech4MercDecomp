/*
 * FUN_00415380 (91 B) — Base object destructor.
 *
 * Called by:
 *   - FUN_004D2A40 (database_dtor_body_0.c) as the base destructor call
 *   - FUN_004D2B80 (database_dtor_body_1.c) as the base destructor call
 *
 * This is the base-class destructor for the container/list hierarchy.
 * It tears down two linked lists rooted at the object:
 *
 *   List 1 (this+0x08): nodes with vtable at +0x00, next pointer at +0x08.
 *     For each node: calls vtable[0](node, this) to notify the node that
 *     its owner is being destroyed.
 *
 *   List 2 (this+0x0c): nodes with next pointer at +0x10.
 *     For each node: calls FUN_00417890 (recursive destroy), then
 *     FUN_00416130 (return to global pool at 0x007B8C20).
 *
 * The vtable is updated twice: first to 0x76cd9c (intermediate destructor
 * vtable), then to 0x76d3f0 (fully-destroyed vtable) at the end.
 *
 * __thiscall (ECX = this), no stack params, void return.
 * CFLAGS: /O1
 */

/* ---- external functions (called via inline asm, decoration irrelevant) ---- */
extern void __stdcall FUN_00417890(void);
extern void __stdcall FUN_00416130(void);

/* Global pool manager object at 0x007B8C20 */
extern int g_pool_manager;

__declspec(naked) void __stdcall base_dtor(void)
{
    __asm {
        push    ebx
        mov     ebx, ecx                    ; ebx = this

        push    esi
        mov     esi, dword ptr [ebx + 0x08] ; esi = this->field_08 (list 1 head)
        test    esi, esi
        push    edi
        mov     dword ptr [ebx], 0x76cd9c   ; set intermediate vtable
        jz      l_list2                     ; if list 1 is empty, skip

    l_list1_loop:
        mov     eax, dword ptr [esi]        ; eax = esi->vtable
        mov     edi, dword ptr [esi + 0x08] ; edi = esi->field_08 (next node)
        push    ebx                         ; push this as param
        mov     ecx, esi                    ; ecx = esi (this for the call)
        call    dword ptr [eax]             ; call esi->vtable[0](esi, this)
        cmp     esi, edi
        jz      l_list2                     ; if current == next, break
        test    edi, edi
        mov     esi, edi                    ; esi = next
        jnz     l_list1_loop                ; if next != 0, continue

    l_list2:
        mov     esi, dword ptr [ebx + 0x0c] ; esi = this->field_0c (list 2 head)
        test    esi, esi
        jz      l_done                      ; if list 2 is empty, skip

    l_list2_loop:
        test    esi, esi
        mov     edi, dword ptr [esi + 0x10] ; edi = esi->field_10 (next node)
        jz      l_list2_check_next          ; if esi == 0, skip destroy

        mov     ecx, esi
        call    FUN_00417890                ; destroy node contents

        mov     ecx, dword ptr [g_pool_manager]
        push    esi
        call    FUN_00416130                ; return node to pool

    l_list2_check_next:
        cmp     esi, edi
        jz      l_done                      ; if current == next, break
        test    edi, edi
        mov     esi, edi                    ; esi = next
        jnz     l_list2_loop                ; if next != 0, continue

    l_done:
        pop     edi
        pop     esi
        mov     dword ptr [ebx], 0x76d3f0   ; set final vtable
        pop     ebx
        ret
    }
}
