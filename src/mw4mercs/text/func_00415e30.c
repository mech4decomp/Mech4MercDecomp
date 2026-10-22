/*
 * FUN_00415E30 (75 B) — Singleton destructor body.
 *
 * Called by item_vtable_1 (FUN_004D3150, vtable 0x772654 slot 1) when the
 * global counter at 0x7DB0C0 reaches zero. The item destructor calls this
 * function to tear down the singleton (0x2C-byte object at 0x7DB0BC), then
 * frees the singleton via FUN_004084e0.
 *
 * This function:
 *   1. Walks the singly-linked list of allocated regions starting at
 *      this->field_04, freeing each via FUN_004084e0.
 *   2. Unlinks this singleton from the global circular doubly-linked list
 *      rooted at DAT_007b8c18.
 *
 * __thiscall (ECX = this), no stack params, no return value.
 * CFLAGS: /O1
 */

/* ---- external functions ---- */
extern void __stdcall FUN_004084e0(void *ptr);

/* ---- external globals ---- */
extern void * DAT_007b8c18;  /* global linked-list head */

__declspec(naked) void __stdcall singleton_dtor(void)
{
    __asm {
        /* Entry: ECX = this */

        push    edi
        mov     edi, ecx                    /* EDI = this */

        /* Walk the region chain at this->field_04, freeing each */
        mov     eax, dword ptr [edi + 0x04] /* EAX = this->field_04 (first region) */
        test    eax, eax
        jz      l_regions_done

        push    esi
    l_free_loop:
        mov     esi, dword ptr [eax]        /* ESI = [EAX] = next region pointer */
        push    eax                         /* arg: current region ptr */
        call    FUN_004084e0                /* free(current_region) */
        add     esp, 0x4
        test    esi, esi
        mov     eax, esi                    /* EAX = next region */
        jnz     l_free_loop                 /* loop if more regions */
        pop     esi

    l_regions_done:
        /* Check if this is the global list head */
        cmp     dword ptr [DAT_007b8c18], edi
        jnz     l_unlink

        /* This is the head. Check if it's the only node. */
        mov     eax, dword ptr [edi + 0x24] /* EAX = this->prev */
        cmp     eax, edi
        jnz     l_update_head

        /* Only node: set head to NULL */
        mov     dword ptr [DAT_007b8c18], 0x0
        pop     edi
        ret

    l_update_head:
        /* Update head to this->prev */
        mov     dword ptr [DAT_007b8c18], eax

    l_unlink:
        /* Standard doubly-linked list unlink */
        mov     eax, dword ptr [edi + 0x24] /* EAX = this->prev */
        mov     edi, dword ptr [edi + 0x28] /* EDI = this->next */
        mov     dword ptr [eax + 0x28], edi /* prev->next = this->next */
        mov     dword ptr [edi + 0x24], eax /* next->prev = this->prev */
        pop     edi
        ret
    }
}
