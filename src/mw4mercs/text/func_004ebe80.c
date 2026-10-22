extern void __stdcall FUN_00415380(void);

__declspec(naked) void __fastcall FUN_004ebe80(void)
{
    __asm {
        mov     dword ptr [ecx], 0x00774724
        jmp     FUN_00415380
    }
}
