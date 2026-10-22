/*
 * FUN_00416F90 (148 B) — Base container: grow item array and append item.
 *
 * Called by vtable_register (FUN_00416F20, vtable 0x77260C slot 8) after
 * the self-dispatch `this->vtable[8](param1, param2)` returns the item.
 * This function ensures the item array at this+0x0c has room for the new
 * item, growing it if necessary, then appends the item at array[count]
 * and increments the count.
 *
 * Container layout:
 *   +0x00  vtable pointer
 *   +0x0c  item array (void **items, pointer to array of pointers)
 *   +0x10  capacity (max items the allocated array can hold)
 *   +0x14  count (current number of items)
 *
 * __thiscall (ECX = this = container), RET 4 (1 stack param: item to add).
 * CFLAGS: /O1
 */

extern void * __stdcall FUN_004084d0(int size);
extern void   __stdcall FUN_004084e0(void *ptr);

__declspec(naked) void __stdcall register_add_item(void)
{
    __asm {
        push    ebp
        push    esi
        mov     esi, ecx                    ; esi = this

        mov     eax, dword ptr [esi + 0x10] ; eax = capacity
        push    edi
        mov     edi, dword ptr [esi + 0x14] ; edi = count
        inc     edi                         ; edi = new_count = count + 1
        cmp     edi, eax                    ; if new_count <= capacity
        jbe     l_store                     ;   skip growth

        mov     ebp, eax                    ; ebp = old capacity
        cmp     edi, ebp                    ; if new_count == old capacity
        je      l_store                     ;   skip growth (dead code in practice)

        test    edi, edi                    ; if new_count == 0
        jbe     l_free_and_null             ;   free old array, set to NULL

        ; Allocate new array: edi * 4 bytes
        lea     eax, [edi * 4]
        push    ebx
        push    eax
        call    FUN_004084d0                ; alloc(new_count * 4)
        mov     edx, dword ptr [esi + 0x0c] ; edx = old array
        add     esp, 4
        test    edx, edx                    ; if old array is NULL
        mov     ebx, eax                    ; ebx = new array
        je      l_store_new                 ;   skip copy

        ; Copy old items to new array
        cmp     edi, ebp                    ; copy_count = min(new_count, old_capacity)
        mov     ecx, edi
        jb      l_copy_count_ok
        mov     ecx, ebp
    l_copy_count_ok:
        mov     eax, ecx
        dec     ecx
        test    eax, eax
        je      l_free_old                  ; if copy_count == 0, skip copy

    l_copy_loop:
        lea     eax, [ebx + ecx * 4]        ; eax = &new_array[ecx]
        sub     edx, ebx                    ; edx = old_array - new_array (delta)
        inc     ecx
    l_copy_item:
        mov     ebp, dword ptr [edx + eax]  ; ebp = old_array[ecx-1]
        mov     dword ptr [eax], ebp        ; new_array[ecx-1] = ebp
        dec     ecx
        sub     eax, 4
        test    ecx, ecx
        ja      l_copy_item

    l_free_old:
        mov     eax, dword ptr [esi + 0x0c]
        push    eax
        call    FUN_004084e0                ; free(old_array)
        add     esp, 4

    l_store_new:
        mov     dword ptr [esi + 0x0c], ebx ; this->items = new_array
        pop     ebx
        jmp     l_store_capacity

    l_free_and_null:
        mov     ecx, dword ptr [esi + 0x0c]
        push    ecx
        call    FUN_004084e0                ; free(old_array)
        add     esp, 4
        mov     dword ptr [esi + 0x0c], 0   ; this->items = NULL

    l_store_capacity:
        mov     dword ptr [esi + 0x10], edi ; this->capacity = new_count

    l_store:
        mov     eax, dword ptr [esi + 0x14] ; eax = old count
        mov     edx, dword ptr [esi + 0x0c] ; edx = items array
        mov     ecx, dword ptr [esp + 0x10] ; ecx = item param (on stack)
        mov     dword ptr [edx + eax * 4], ecx ; items[old_count] = item
        mov     dword ptr [esi + 0x14], edi ; this->count = new_count

        pop     edi
        pop     esi
        pop     ebp
        ret     4
    }
}
