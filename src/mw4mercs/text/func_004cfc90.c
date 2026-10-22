__declspec(naked) void __fastcall FUN_004cfc90(void *param_1)
{
    __asm {
        mov eax, [ecx + 8]
        mov edx, [ecx + 4]
        mov edx, [edx + eax * 4]
        dec eax
        push edx
        mov [ecx + 8], eax
        _emit 0xFF
        _emit 0x15
        _emit 0xD0
        _emit 0xB2
        _emit 0x76
        _emit 0x00
        pop ecx
        ret
    }
}
