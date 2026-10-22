/*
 * FUN_005bf9a0 (26 B) - __thiscall copy/initializer.
 *
 * Copies [this+0x2c]->[this+0x1c], [this+0x30]->[this+0x20],
 * [this+0x34]->[this+0x24], and sets [this+0x48]=0. RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_005bf9a0(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x2c]
        mov     edx, dword ptr [ecx + 0x30]
        mov     dword ptr [ecx + 0x1c], eax
        mov     eax, dword ptr [ecx + 0x34]
        mov     dword ptr [ecx + 0x48], 0x0
        mov     dword ptr [ecx + 0x20], edx
        mov     dword ptr [ecx + 0x24], eax
        ret
    }
}
