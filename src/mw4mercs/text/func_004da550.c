__declspec(naked) void func_004da550(void)
{
    __asm {
        and     dword ptr [ecx+0x10], 0xFFF7FFFF
        mov     eax, [ecx+0x124]
        test    eax, eax
        mov     dl, 0x7F
        je      l_skip1
        and     byte ptr [eax+0x9C], dl
l_skip1:
        mov     ecx, [ecx+0x128]
        test    ecx, ecx
        je      l_skip2
        and     byte ptr [ecx+0x9C], dl
l_skip2:
        ret
    }
}
