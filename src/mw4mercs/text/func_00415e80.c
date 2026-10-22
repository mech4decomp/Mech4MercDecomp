/*
 * FUN_00415E80 (93 B) — Singleton item-pool bump allocator.
 *
 * Called by singleton_get_item (FUN_00416110) when the free list at
 * this->field_1c is empty. This function implements a bump allocator
 * within a pre-allocated region. If the current region has room for
 * another item, it bumps the end pointer and returns the old end.
 * Otherwise, it allocates a new region via FUN_004084c0, links it
 * into a singly-linked list of regions (each region has an 8-byte
 * header: [next_region_ptr, region_size]), and bumps from the new
 * region.
 *
 * Singleton object layout (0x2C bytes):
 *   +0x00: param_4 (ptr)
 *   +0x04: allocated buffer (first region)
 *   +0x08: region_size (aligned_p2_size - 8, updated on realloc)
 *   +0x0C: item_size (aligned_p1)
 *   +0x10: new_region_size (aligned_p3_size - 8)
 *   +0x14: free_ptr (current bump pointer)
 *   +0x18: end_ptr (end of current region)
 *   +0x1C: free_list_head (used by singleton_get_item)
 *   +0x20: alloc_param (retval from FUN_006f4710, passed to FUN_004084c0)
 *   +0x24: doubly-linked list prev
 *   +0x28: doubly-linked list next
 *
 * __thiscall (ECX = this), no stack params, returns void* in EAX.
 * CFLAGS: /O1
 */

/* ---- external functions ---- */
void * __stdcall FUN_004084c0(int size, void *param);

__declspec(naked) void __stdcall singleton_pool_alloc(void)
{
    __asm {
        /* Entry: ECX = this */
        push    ebp
        push    esi
        mov     esi, ecx                    /* ESI = this */

        /* Load current region state */
        mov     eax, dword ptr [esi + 0x18] /* EAX = end_ptr */
        mov     ecx, dword ptr [esi + 0x14] /* ECX = free_ptr */
        mov     ebp, dword ptr [esi + 0x0c] /* EBP = item_size */
        push    edi
        mov     edi, dword ptr [esi + 0x08] /* EDI = region_size */

        /* Check if current region has room */
        mov     edx, eax                    /* EDX = end_ptr */
        sub     edx, ecx                    /* EDX = remaining = end_ptr - free_ptr */
        sub     edi, ebp                    /* EDI = region_size - item_size */
        cmp     edx, edi                    /* if remaining > region_size - item_size */
        ja      l_alloc_new_region          /*   not enough room, alloc new region */

        /* Fast path: bump from current region */
        add     ebp, eax                    /* EBP = end_ptr + item_size (new end) */
        pop     edi
        mov     dword ptr [esi + 0x18], ebp /* this->end_ptr = new end */
        pop     esi
        pop     ebp
        ret                                 /* return EAX = old end_ptr (allocated item) */

    l_alloc_new_region:
        /* Allocate a new region */
        mov     edi, dword ptr [esi + 0x10] /* EDI = new_region_size */
        mov     eax, dword ptr [esi + 0x20] /* EAX = alloc_param */
        push    ebx
        lea     ebx, dword ptr [ecx - 0x8]  /* EBX = free_ptr - 8 (prev region header) */
        push    eax                         /* alloc_param */
        lea     ecx, dword ptr [edi + 0x8]  /* ECX = new_region_size + 8 (alloc size) */
        push    ecx                         /* size */
        mov     dword ptr [esi + 0x08], edi /* this->region_size = new_region_size */
        mov     dword ptr [esi + 0x14], ebx /* this->free_ptr = prev header */
        call    FUN_004084c0                /* FUN_004084c0(size, alloc_param) */
        add     esp, 0x8                    /* pop args */

        /* Initialize new region header */
        mov     dword ptr [ebx], eax        /* prev_header->next = new_buffer */
        mov     dword ptr [eax + 0x4], edi  /* new_buffer[1] = new_region_size */
        mov     dword ptr [eax], 0x0        /* new_buffer[0] = 0 */
        add     eax, 0x8                    /* EAX = new_buffer + 8 (usable data) */

        pop     ebx
        lea     edx, dword ptr [eax + ebp]  /* EDX = usable + item_size (new end) */
        pop     edi
        mov     dword ptr [esi + 0x14], eax /* this->free_ptr = usable */
        mov     dword ptr [esi + 0x18], edx /* this->end_ptr = usable + item_size */
        pop     esi
        pop     ebp
        ret                                 /* return EAX = usable */
    }
}
