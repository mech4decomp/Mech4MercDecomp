extern void __stdcall FUN_004f0e30(void);
extern void __stdcall FUN_004084e0(void);

__declspec(naked) void __stdcall FUN_004efbf0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_004f0e30
        test    byte ptr [esp + 8], 1
        jz      skip_delete
        push    esi
        call    FUN_004084e0
        add     esp, 4
skip_delete:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
