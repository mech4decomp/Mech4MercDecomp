extern void __stdcall FUN_004f18f0(void);

__declspec(naked) void __fastcall FUN_004f1c20(void)
{
    __asm {
        mov     dword ptr [ecx], 0x00774fa0
        jmp     FUN_004f18f0
    }
}
