/*
 * FUN_00415CD0 (1 B) — Item base class empty destructor.
 *
 * This is the base-class destructor for the item hierarchy.
 * It is a no-op — just a single RET instruction (0xC3).
 *
 * Called by:
 *   - FUN_00416DE0 (item_dtor_body.c) as the base destructor call
 *
 * __thiscall (ECX = this), no stack params, plain RET.
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall item_base_dtor_empty(void)
{
    __asm {
        ret
    }
}
