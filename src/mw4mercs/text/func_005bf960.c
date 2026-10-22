/*
 * FUN_005bf960 (23 B) - __thiscall initializer.
 *
 * Sets [this+0x48]=3, [this+0x1c]=1.0f (0x3f800000), [this+0x20]=0,
 * [this+0x24]=0. RET (no stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_005bf960(void)
{
    __asm {
        xor     eax, eax
        mov     dword ptr [ecx + 0x48], 0x3
        mov     dword ptr [ecx + 0x1c], 0x3f800000
        mov     dword ptr [ecx + 0x20], eax
        mov     dword ptr [ecx + 0x24], eax
        ret
    }
}
