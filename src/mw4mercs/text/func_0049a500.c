extern void __stdcall FUN_004084e0(void *ptr);

__declspec(naked) void __fastcall FUN_0049a500(int *param_1)
{
    __asm {
        mov     eax, dword ptr [ecx]
        test    eax, eax
        jz      l_ret
        push    eax
        call    FUN_004084e0
        pop     ecx
    l_ret:
        ret
    }
}
