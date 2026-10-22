extern void __stdcall FUN_004dd4a0(void);

__declspec(naked) void __fastcall FUN_004dd5b0(void)
{
    __asm {
        mov     dword ptr [ecx], 0x00773860
        jmp     FUN_004dd4a0
    }
}
