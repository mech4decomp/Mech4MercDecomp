/*
 * FUN_00415BC0 (1 B) — Base class empty destructor.
 *
 * This is the base-class destructor for the container/list hierarchy.
 * It is a no-op — just a single RET instruction (0xC3).
 *
 * Called by:
 *   - FUN_00416E50 (list_dtor_body.c) as the base destructor call
 *   - FUN_004D2A40 (database_dtor_body_0.c) as the base destructor call
 *   - FUN_004D2B80 (database_dtor_body_1.c) as the base destructor call
 *
 * __thiscall (ECX = this), no stack params, plain RET.
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall base_dtor_empty(void)
{
    __asm {
        ret
    }
}
