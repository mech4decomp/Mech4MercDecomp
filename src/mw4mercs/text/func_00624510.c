/*
 * FUN_00624510 (4 B) - __thiscall (ECX = this). Returns byte at this+0x24.
 *
 * ABL interpreter region. Accessor.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00624510(void)
{
    __asm {
        mov     al, byte ptr [ecx + 0x24]
        ret
    }
}
