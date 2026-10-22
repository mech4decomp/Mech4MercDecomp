__declspec(naked) void func_004e6180(void)
{
    __asm {
        mov     eax, [ecx+0x10]
        xor     edx, edx
        mov     [ecx+0x14], eax
        mov     eax, [ecx+0x38]
        cmp     eax, edx
        mov     [ecx+0x40], edx
        mov     [ecx+0x44], edx
        je      l_skip1
        mov     [eax], edx
l_skip1:
        mov     dword ptr [ecx+0x48], 0x3F800000
        mov     ecx, [ecx+0x3C]
        cmp     ecx, edx
        je      l_skip2
        mov     dword ptr [ecx], 0x3F800000
l_skip2:
        ret
    }
}
