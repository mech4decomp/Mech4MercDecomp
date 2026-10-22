/* FUN_006dffd0 - 14 bytes, __thiscall, RET */
extern void __cdecl FUN_004084e0(void);
__declspec(naked) void FUN_006dffd0(void)
{
    __asm {
        mov     eax, dword ptr [ecx]
        test    eax, eax
        jz      L_dffdd
        push    eax
        call    FUN_004084e0
        pop     ecx
    L_dffdd:
        ret
    }
}
