/*
 * FUN_00417120 (80 B) — Remove item at a given index from the container's
 * item array.
 *
 * Called by item_dtor_body (FUN_00416DE0) after finding the item's index
 * via FUN_004170F0. Shifts the array elements down (memmove), decrements
 * the count. If the array becomes empty, frees the array and resets
 * capacity to 0.
 *
 * Container layout:
 *   +0x00  vtable pointer
 *   +0x0c  item array (pointer to array of item pointers)
 *   +0x10  capacity (max items the allocated array can hold)
 *   +0x14  item count
 *
 * __thiscall (ECX = this = container), RET 4 (1 stack param: index).
 * CFLAGS: /O1
 */

/* __imp__memmove — IAT entry for memmove (from msvcrt.lib) */
extern int __imp__memmove;

extern void __stdcall FUN_004084e0(void *ptr);

__declspec(naked) void __stdcall list_remove_at(void)
{
    __asm {
        push    esi
        mov     esi, ecx                    ; ESI = this (container)

        mov     eax, dword ptr [esi + 0x0c] ; EAX = items array
        mov     ecx, dword ptr [esp + 0x08] ; ECX = index
        push    edi
        mov     edi, dword ptr [esi + 0x14] ; EDI = count

        lea     ecx, [eax + ecx * 4]        ; ECX = &items[index] (dest)
        lea     eax, [eax + edi * 4 - 4]    ; EAX = &items[count - 1] (source end)

        cmp     ecx, eax                    ; if dest >= source_end
        jae     l_store_count               ;   skip memmove

        sub     eax, ecx                    ; EAX = size = source_end - dest
        push    eax                         ; push size
        lea     edx, [ecx + 4]              ; EDX = &items[index + 1] (source)
        push    edx                         ; push source
        push    ecx                         ; push dest
        call    dword ptr [__imp__memmove]  ; memmove(dest, source, size)
        add     esp, 0x0c

    l_store_count:
        dec     edi                         ; EDI = new_count = count - 1
        test    edi, edi
        jne     l_done                      ; if new_count != 0, skip free

        mov     eax, dword ptr [esi + 0x10] ; EAX = capacity
        test    eax, eax
        je      l_done                      ; if capacity == 0, skip free

        mov     eax, dword ptr [esi + 0x0c] ; EAX = items array
        push    eax
        call    FUN_004084e0                ; free(items)
        add     esp, 4

        mov     dword ptr [esi + 0x0c], edi ; this->items = NULL (EDI is 0)
        mov     dword ptr [esi + 0x10], edi ; this->capacity = 0

    l_done:
        mov     dword ptr [esi + 0x14], edi ; this->count = new_count

        pop     edi
        pop     esi
        ret     4
    }
}
