extern void __stdcall FUN_004d9db0(void);

__declspec(naked) void __fastcall FUN_004f4770(void)
{
    __asm {
        mov     dword ptr [ecx], 0x0077529c
        jmp     FUN_004d9db0
    }
}
