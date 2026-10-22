/*
 * FUN_00682170 (25 B) — HUD element constructor: sets vtable 0x798a84, stores
 * the first stack arg at this+0x4, zeroes this+0x8. __thiscall, RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00682170(void)
{
    __asm {
        mov     eax, ecx
        mov     ecx, dword ptr [esp+0x4]
        mov     dword ptr [eax+0x4], ecx
        mov     dword ptr [eax+0x8], 0x0
        mov     dword ptr [eax], 0x798a84
        ret     0x4
    }
}
