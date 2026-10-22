extern void __stdcall FUN_004e50b0(void);
extern void __stdcall FUN_0042b7c0(void);

__declspec(naked) void __stdcall FUN_004e52c0(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xC]
        mov     esi, ecx
        push    edi
        call    FUN_004e50b0
        mov     ecx, dword ptr [esi + 0x10]
        add     edi, 0x48
        push    edi
        call    FUN_0042b7c0
        pop     edi
        pop     esi
        ret     4
    }
}
