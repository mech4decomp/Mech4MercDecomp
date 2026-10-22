/* FUN_006e1b10 - 56 bytes, __thiscall, RET */
__declspec(naked) void FUN_006e1b10(void)
{
    __asm {
        mov     eax, ecx
        xor     ecx, ecx
        mov     edx, 0x100
        mov     dword ptr [eax], 0x79ecec
        mov     dword ptr [eax + 0x30], 0x40
        mov     dword ptr [eax + 0x2c], ecx
        mov     dword ptr [eax + 0x28], ecx
        mov     dword ptr [eax + 0x24], ecx
        mov     dword ptr [eax + 0x8], edx
        mov     dword ptr [eax + 0x4], edx
        mov     dword ptr [eax + 0x1c], ecx
        mov     dword ptr [eax + 0x14], ecx
        mov     dword ptr [eax + 0xc], ecx
        mov     dword ptr [eax + 0x20], ecx
        mov     dword ptr [eax + 0x18], ecx
        mov     dword ptr [eax + 0x10], ecx
        ret
    }
}
