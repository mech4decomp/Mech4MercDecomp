__declspec(naked) void func_004e7760(void)
{
    __asm {
        fld     dword ptr [ecx+0x14]
        fcomp   dword ptr [ecx+0x10]
        fnstsw  ax
        test    ah, 0x40
        je      l_check2
        xor     eax, eax
        ret
l_check2:
        fld     dword ptr [ecx+0x14]
        _emit 0xD8
        _emit 0x1D
        _emit 0xB0
        _emit 0xC5
        _emit 0x76
        _emit 0x00
        fnstsw  ax
        test    ah, 0x41
        mov     eax, 2
        jne     l_done
        mov     eax, 1
l_done:
        ret
    }
}
