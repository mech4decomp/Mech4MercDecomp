/*
 * FUN_006a7510 (50 B) - __thiscall constructor. Initializes this fields
 * from three stack params, zeroes this+8/0xc/0x10, sets this+0x1c =
 * 0x3f4ccccd (float 0.8f), and sets this->0 = 0x799e6c (vtable).
 *
 * __thiscall (ECX = this), RET 0x10 (three stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_006a7510(void)
{
    __asm {
        mov     edx, dword ptr [esp + 0x8]
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 0x4]
        mov     dword ptr [eax + 0x4], ecx
        xor     ecx, ecx
        mov     dword ptr [eax + 0x8], ecx
        mov     dword ptr [eax + 0xc], ecx
        mov     dword ptr [eax + 0x10], ecx
        mov     ecx, dword ptr [esp + 0xc]
        mov     dword ptr [eax + 0x14], edx
        mov     dword ptr [eax + 0x18], ecx
        mov     dword ptr [eax + 0x1c], 0x3f4ccccd
        mov     dword ptr [eax], 0x799e6c
        ret     0x10
    }
}
