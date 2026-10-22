/*
 * FUN_1001cce0 (16 B) — __stdcall, RET 0x8.
 * Stores param_2 into param_1[0x4]; returns 0.
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_1001cce0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     ecx, dword ptr [esp + 0x8]
        mov     dword ptr [eax + 0x4], ecx
        xor     eax, eax
        ret     0x8
    }
}
