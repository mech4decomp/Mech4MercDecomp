extern void __stdcall thunk_FUN_004f1c20(void);

__declspec(naked) void __fastcall FUN_004eb370(void)
{
    __asm {
        mov     dword ptr [ecx], 0x00774674
        jmp     thunk_FUN_004f1c20
    }
}
