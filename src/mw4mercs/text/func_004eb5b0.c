extern void __stdcall FUN_004ebe80(void);

__declspec(naked) void __fastcall FUN_004eb5b0(void)
{
    __asm {
        mov     dword ptr [ecx], 0x007746bc
        jmp     FUN_004ebe80
    }
}
