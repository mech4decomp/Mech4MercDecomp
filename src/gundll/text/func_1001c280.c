/*
 * FUN_1001c280 (29 B) - __stdcall, RET 0x4.
 * Returns (param_1 && param_1[*param_1 + 1] == 0x454e4f5a).
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_1001c280(void)
{
    __asm {
        mov     eax, dword ptr [esp+4]
        test    eax, eax
        jnz     L1
        xor     al, al
        ret     4
L1:
        mov     ecx, dword ptr [eax]
        cmp     dword ptr [eax+ecx*4+4], 0x454e4f5a
        setz    al
        ret     4
    }
}
