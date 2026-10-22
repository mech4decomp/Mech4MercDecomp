/*
 * FUN_1001c460 (13 B) - __stdcall, RET 0x4. Sets byte at param_1+4 to 1,
 * returns 0.
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_1001c460(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     byte ptr [eax + 4], 1
        xor     eax, eax
        ret     4
    }
}
