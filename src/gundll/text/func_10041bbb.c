/*
 * FUN_10041bbb (12 B) - __cdecl. Zeroes 3 dwords at param_1.
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __cdecl FUN_10041bbb(void)
{
    __asm {
        push    edi
        mov     edi, dword ptr [esp + 8]
        xor     eax, eax
        stosd
        stosd
        stosd
        pop     edi
        ret
    }
}
