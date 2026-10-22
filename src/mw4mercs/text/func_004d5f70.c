extern void __stdcall FUN_004084E0(void *ptr);
extern void __fastcall FUN_004D5F90(int this);

__declspec(naked) void __fastcall FUN_004D5F70(int this, int dummy_edx, int flags)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_004D5F90
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
