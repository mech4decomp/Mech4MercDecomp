/*
 * FUN_00445100 (57 B) - MLR mesh/render setter (__thiscall, RET 0x18).
 * Stores six params into this+0x9c/0xa0/0xa4/0x10/0x14/0xa8.
 *
 * CFLAGS: /O1
 */

__declspec(naked) void FUN_00445100(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     edx, dword ptr [esp + 0x8]
        mov     dword ptr [ecx + 0x9c], eax
        mov     eax, dword ptr [esp + 0xc]
        mov     dword ptr [ecx + 0xa0], edx
        mov     edx, dword ptr [esp + 0x10]
        mov     dword ptr [ecx + 0xa4], eax
        mov     eax, dword ptr [esp + 0x14]
        mov     dword ptr [ecx + 0x10], edx
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [ecx + 0x14], eax
        mov     dword ptr [ecx + 0xa8], edx
        ret     0x18
    }
}
