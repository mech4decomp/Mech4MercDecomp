/*
 * FUN_004084E0 (11 B) — Free/dealloc wrapper.
 *
 * Called by:
 *   - FUN_00415380 (base_dtor.c) — base object destructor
 *   - FUN_00416DE0 (item_dtor_body.c) — item destructor body
 *   - FUN_00416E50 (list_dtor_body.c) — list destructor body
 *   - FUN_00416F90 (register_add_item.c) — register/add-item helper
 *   - FUN_00417120 (list_remove_at.c) — remove item at index
 *   - FUN_00415E30 (singleton_dtor.c) — singleton destructor
 *   - FUN_004D3210 (vtable_dtor_0.c) — vtable slot 0 destructor wrapper
 *   - FUN_004D2B60 (vtable_dtor_1.c) — vtable slot 1 destructor wrapper
 *   - FUN_004D3110 (vtable_dtor_2.c) — vtable slot 2 destructor wrapper
 *
 * Loads the pointer argument from the stack, pushes it, and calls
 * FUN_006F4230 (free). __cdecl (plain ret, caller cleans stack).
 * CFLAGS: /O1
 */

extern void __stdcall FUN_006f4230(void *ptr);

__declspec(naked) void __cdecl FUN_004084e0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]    ; eax = ptr (stack param)
        push    eax                          ; push ptr as arg to free
        call    FUN_006f4230                 ; free(ptr)
        ret                                  ; return (caller cleans stack)
    }
}
