/*
 * FUN_1002ded0 (20 B) - __stdcall. If param_2 != NULL, call FUN_1001c2a0(param_2).
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_1001c2a0(void);

__declspec(naked) void __stdcall FUN_1002ded0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        test    eax, eax
        jnz     L1
        ret     0x8
    L1:
        push    eax
        call    FUN_1001c2a0
        ret     0x8
    }
}
