/*
 * FUN_00624600 (7 B) - __thiscall (ECX = this). Returns dword at this+0x2dc.
 *
 * ABL interpreter region. Accessor.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00624600(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x2dc]
        ret
    }
}
