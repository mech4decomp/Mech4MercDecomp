extern void __stdcall FUN_004f21a0(void);

__declspec(naked) void __fastcall FUN_004eb280(void)
{
    __asm {
        mov     dword ptr [ecx], 0x00774644
        jmp     FUN_004f21a0
    }
}
