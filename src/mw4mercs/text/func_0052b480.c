// FUN_0052B480 (98 bytes)
__declspec(naked) void func_0052b480(void)
{
    __asm {
        xor     eax, eax
        mov     dword ptr [ecx + 4], eax
        mov     dword ptr [ecx + 0x10], eax
        mov     dword ptr [ecx + 0x1c], eax
        mov     eax, dword ptr [esp + 4]
        lea     edx, [eax + 0x30]
        mov     dword ptr [ecx + 0x24], eax
        or      eax, 0xffffffff
        mov     dword ptr [ecx], 0x18
        mov     dword ptr [ecx + 8], 0x64
        mov     dword ptr [ecx + 0xc], 0x960
        mov     dword ptr [ecx + 0x14], 0x02160ec0
        mov     dword ptr [ecx + 0x18], 0x1dcd6500
        mov     dword ptr [ecx + 0x20], edx
        mov     dword ptr [ecx + 0x28], eax
        mov     dword ptr [ecx + 0x30], eax
        mov     dword ptr [ecx + 0x38], 0xf7ffffff
        mov     dword ptr [ecx + 0x40], eax
        mov     dword ptr [ecx + 0x48], eax
        mov     dword ptr [ecx + 0x2c], eax
        mov     dword ptr [ecx + 0x34], eax
        mov     dword ptr [ecx + 0x3c], eax
        mov     dword ptr [ecx + 0x44], eax
        mov     dword ptr [ecx + 0x4c], eax
        ret     4
    }
}
