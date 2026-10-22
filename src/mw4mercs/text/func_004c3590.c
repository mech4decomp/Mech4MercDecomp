__declspec(naked) void __fastcall FUN_004c3590(void *param_1)
{
    __asm {
        mov eax, [ecx + 0x18]
        shr eax, 2
        and eax, 1
        mov edx, dword ptr [eax * 4 + 0x007b3908]
        mov [ecx + 0x1c], edx
        ret
    }
}
