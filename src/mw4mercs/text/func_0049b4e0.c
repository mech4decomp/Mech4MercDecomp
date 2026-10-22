extern void __stdcall FUN_004084e0(void *ptr);

__declspec(naked) void __fastcall FUN_0049b4e0(void *this)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x14]
        test    eax, eax
        jz      l_skip1
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_skip1:
        mov     esi, dword ptr [esi + 8]
        test    esi, esi
        jz      l_skip2
        push    esi
        call    FUN_004084e0
        add     esp, 4
    l_skip2:
        pop     esi
        ret
    }
}
