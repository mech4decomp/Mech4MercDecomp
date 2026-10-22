/*
 * FUN_10034340 (39 B) - __thiscall, RET 0x10. Stores 4 dwords at this+4..0x10
 * and sets vtable 0x1004b21c.
 *
 * __thiscall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_10034340(void)
{
    __asm {
        mov     edx, dword ptr [esp + 8]
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 4]
        mov     dword ptr [eax + 4], ecx
        mov     ecx, dword ptr [esp + 0xc]
        mov     dword ptr [eax + 8], edx
        mov     edx, dword ptr [esp + 0x10]
        mov     dword ptr [eax + 0xc], ecx
        mov     dword ptr [eax + 0x10], edx
        mov     dword ptr [eax], 0x1004b21c
        ret     0x10
    }
}
