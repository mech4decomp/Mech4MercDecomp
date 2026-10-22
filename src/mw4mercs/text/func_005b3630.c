/*
 * FUN_005b3630 (24 B) — __thiscall, RET 0xC.
 *
 * Stores three dwords at [ECX+0x18], [ECX+0x1c], [ECX+0x20] from three
 * stack params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_005b3630(void *param1, void *param2, void *param3)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     edx, dword ptr [esp + 0x8]
        mov     dword ptr [ecx + 0x18], eax
        mov     eax, dword ptr [esp + 0xc]
        mov     dword ptr [ecx + 0x1c], edx
        mov     dword ptr [ecx + 0x20], eax
        ret     0xc
    }
}
