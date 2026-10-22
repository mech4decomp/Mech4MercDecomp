/*
 * Vtable 0x772654 slot 0 — FUN_00415CF0 (14 B).
 *
 * Scalar deleting destructor for the item objects created by the Database
 * vtable factory (FUN_004D3030). If this != NULL, calls the virtual destructor
 * at vtable+0x04 (slot 1 = FUN_004D3150) with arg 1 (delete flag), then
 * returns this.
 *
 * __thiscall (ECX = this), RET 4 (1 stack param: flags).
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall item_vtable_0(void)
{
    __asm {
        test    ecx, ecx
        je      l_done
        mov     eax, dword ptr [ecx]     /* vtable */
        push    1
        call    dword ptr [eax + 4]      /* vtable slot 1 (FUN_004D3150) */
    l_done:
        ret     4
    }
}
