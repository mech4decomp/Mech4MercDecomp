extern void __stdcall FUN_004084E0(void *ptr);
extern void __fastcall FUN_00415380(int this);

__declspec(naked) void __fastcall FUN_004D5B40(int this, int dummy_edx, int flags)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_00415380
        test    byte ptr [esp + 8], 1
        jz      l_skip
        push    esi
        call    FUN_004084E0
        add     esp, 4
    l_skip:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
