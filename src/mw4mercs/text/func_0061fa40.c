/*
 * FUN_0061fa40 (11 B) - __thiscall. Resets the count field of the int-array
 * container (ECX) to 0, returning the old count in EAX.
 *
 * CFLAGS: /O1
 */

__declspec(naked) void FUN_0061fa40(void)
{
    __asm {
        mov     eax, dword ptr [ecx+4]
        mov     dword ptr [ecx+4], 0
        ret
    }
}
