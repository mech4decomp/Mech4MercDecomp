/*
 * FUN_1001c8b0 (23 B) — __stdcall, RET 0xC.
 * Stores param_2/param_3 into object at param_1+0x1c/+0x20. Returns 0.
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_1001c8b0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     ecx, dword ptr [esp + 0x8]
        mov     edx, dword ptr [esp + 0xc]
        mov     dword ptr [eax + 0x1c], ecx
        mov     dword ptr [eax + 0x20], edx
        xor     eax, eax
        ret     0xC
    }
}
