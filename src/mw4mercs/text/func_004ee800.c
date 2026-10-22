extern void __stdcall FUN_004f0e30(void);

__declspec(naked) void __fastcall FUN_004ee800(void)
{
    __asm {
        mov     dword ptr [ecx], 0x00774bcc
        jmp     FUN_004f0e30
    }
}
