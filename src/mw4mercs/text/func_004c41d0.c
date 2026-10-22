__declspec(naked) void __fastcall FUN_004c41d0(void)
{
    __asm {
        mov eax, ecx
        mov ecx, [esp + 4]
        mov [eax + 4], ecx
        mov ecx, [ecx]
        mov [eax + 8], ecx
        ret 4
    }
}
