extern void __stdcall FUN_004e00f0(void);

__declspec(naked) void __fastcall FUN_004e0420(void)
{
    __asm {
        mov     dword ptr [ecx], 0x00773ab4
        jmp     FUN_004e00f0
    }
}
