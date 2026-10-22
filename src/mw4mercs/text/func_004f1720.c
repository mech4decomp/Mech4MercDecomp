extern void __stdcall thunk_FUN_004f1c20(void);

__declspec(naked) void __fastcall FUN_004f1720(void)
{
    __asm {
        mov     dword ptr [ecx], 0x00774eec
        jmp     thunk_FUN_004f1c20
    }
}
