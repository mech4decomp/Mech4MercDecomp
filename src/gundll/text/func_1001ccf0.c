/*
 * FUN_1001ccf0 (26 B) - __stdcall, RET 0x4. Returns
 * (-(*(int*)(param_1+0x208)==0) & 0x3eede3fe) + 0xc1121c02.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_1001ccf0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        cmp     dword ptr [eax + 0x208], 1
        sbb     eax, eax
        and     eax, 0x3eede3fe
        add     eax, 0xc1121c02
        ret     4
    }
}
