extern void __stdcall FUN_004e4e00(void);
extern void __stdcall FUN_0042b750(void);

__declspec(naked) void __stdcall FUN_004e52a0(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xC]
        mov     esi, ecx
        push    edi
        call    FUN_004e4e00
        mov     ecx, dword ptr [esi + 0x10]
        add     edi, 0x48
        push    edi
        call    FUN_0042b750
        pop     edi
        pop     esi
        ret     4
    }
}
