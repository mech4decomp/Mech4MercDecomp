/*
 * FUN_00646d30 (40 B) — __thiscall, RET 0x10 (4 params).
 *
 * this[0x104] = ((param4<<8 + param1)<<8 + param2)<<8 + param3.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_00646d30(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x4]
        shl     eax, 0x8
        add     eax, edx
        mov     edx, dword ptr [esp + 0x8]
        shl     eax, 0x8
        add     eax, edx
        mov     edx, dword ptr [esp + 0xc]
        shl     eax, 0x8
        add     eax, edx
        mov     dword ptr [ecx + 0x104], eax
        ret     0x10
    }
}
