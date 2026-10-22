extern void __stdcall FUN_004084e0(void);
extern void __stdcall FUN_00415200(void);

__declspec(naked) void __stdcall FUN_004d5d20(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     al, byte ptr [esi + 0x1C]
        test    al, al
        jz      skip_free
        mov     eax, dword ptr [esi + 0x18]
        push    eax
        call    FUN_004084e0
        add     esp, 4
skip_free:
        mov     ecx, esi
        call    FUN_00415200
        pop     esi
        ret
    }
}
