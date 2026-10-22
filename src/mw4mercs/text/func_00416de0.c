/*
 * FUN_00416DE0 (60 B) — Item destructor body.
 *
 * Called by item_vtable_1 (FUN_004D3150, vtable 0x772654 slot 1) as the
 * first step of item destruction.
 *
 * Item layout:
 *   +0x00: vtable pointer
 *   +0x04: container pointer (back-pointer to owning container)
 *
 * Algorithm:
 *   1. Find this item's index in the container's item array (linear search
 *      via FUN_004170F0).
 *   2. Remove the item at that index from the array (memmove + shrink via
 *      FUN_00417120).
 *   3. Call FUN_00415BE0(1, &index) on the container (finalize registration).
 *   4. Unlink this item from the container's linked list (FUN_00415D00).
 *   5. Call base destructor FUN_00415CD0 (empty RET).
 *
 * __thiscall (ECX = this), no stack params, plain RET.
 * CFLAGS: /O1
 */

extern int __stdcall FUN_004170f0(void *container, void *item);
extern void __stdcall FUN_00417120(void *container, int index);
extern void __stdcall FUN_00415be0(int param1, int *param2);
extern void __stdcall FUN_00415d00(void);
extern void __stdcall FUN_00415cd0(void);

__declspec(naked) void __stdcall item_dtor_body(void)
{
    __asm {
        push    ecx
        push    esi
        mov     esi, ecx                ; ESI = this (item)
        push    edi
        mov     edi, dword ptr [esi + 4]; EDI = this->container
        push    esi                     ; push item ptr
        mov     ecx, edi                ; ECX = container
        call    FUN_004170f0            ; find index of item in array
        push    eax                     ; push index
        mov     ecx, edi                ; ECX = container
        mov     dword ptr [esp + 0xc], eax ; save index to local
        call    FUN_00417120            ; remove item at index
        lea     eax, dword ptr [esp + 0x8] ; &index
        push    eax
        push    1
        mov     ecx, edi                ; ECX = container
        call    FUN_00415be0            ; finalize(1, &index)
        mov     ecx, esi                ; ECX = this (item)
        call    FUN_00415d00            ; unlink from list
        mov     ecx, esi                ; ECX = this (item)
        call    FUN_00415cd0            ; base destructor
        pop     edi
        pop     esi
        pop     ecx
        ret
    }
}
