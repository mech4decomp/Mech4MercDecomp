extern void __stdcall FUN_004f21a0(void);

__declspec(naked) void __stdcall FUN_004f0e30(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0x24]
        test    ecx, ecx
        mov     dword ptr [esi], 0x00774DC8
        jz      skip_vcall
        mov     eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
skip_vcall:
        mov     ecx, esi
        call    FUN_004f21a0
        pop     esi
        ret
    }
}
