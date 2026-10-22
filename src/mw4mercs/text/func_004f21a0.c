extern void __stdcall FUN_00415380(void);

__declspec(naked) void __fastcall FUN_004f21a0(void)
{
    __asm {
        mov     dword ptr [ecx], 0x00774fe4
        jmp     FUN_00415380
    }
}
