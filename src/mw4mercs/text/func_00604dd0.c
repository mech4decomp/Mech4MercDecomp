/*
 * FUN_00604dd0 (30 B) — __thiscall (RET 0x10, 4 params). Stores four dwords
 * into the object at +0x00/+0x04/+0x08/+0x0c.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00604dd0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     edx, dword ptr [esp + 0x8]
        mov     dword ptr [ecx], eax
        mov     eax, dword ptr [esp + 0xc]
        mov     dword ptr [ecx + 0x4], edx
        mov     edx, dword ptr [esp + 0x10]
        mov     dword ptr [ecx + 0x8], eax
        mov     dword ptr [ecx + 0xc], edx
        ret     0x10
    }
}
