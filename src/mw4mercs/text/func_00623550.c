/*
 * FUN_00623550 (7 B) - __thiscall (ECX = this). Returns this + 0x2d0.
 *
 * ABL interpreter region. Accessor returning a sub-object pointer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00623550(void)
{
    __asm {
        lea     eax, [ecx + 0x2d0]
        ret
    }
}
