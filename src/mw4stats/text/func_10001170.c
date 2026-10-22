/*
 * FUN_10001170 (28 B) - __thiscall ctor. Zeroes 5 dwords at this[0..0x10]
 * and stores param_1 at this[0x14]. RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_10001170(void)
{
    __asm {
        mov     eax, ecx
        xor     ecx, ecx
        mov     dword ptr [eax], ecx
        mov     dword ptr [eax + 4], ecx
        mov     dword ptr [eax + 8], ecx
        mov     dword ptr [eax + 0xc], ecx
        mov     dword ptr [eax + 0x10], ecx
        mov     ecx, dword ptr [esp + 4]
        mov     dword ptr [eax + 0x14], ecx
        ret     4
    }
}
