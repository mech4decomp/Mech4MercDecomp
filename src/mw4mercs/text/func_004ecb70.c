extern void __stdcall FUN_004ee460(void);

__declspec(naked) void __fastcall FUN_004ecb70(void)
{
    __asm {
        mov     dword ptr [ecx], 0x007747c8
        jmp     FUN_004ee460
    }
}
