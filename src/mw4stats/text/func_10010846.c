/* auto-transcribed gap function 0x10010846 (41 B); review against reference; stepping stone */
extern int g_1002109c;
__declspec(naked) void FUN_10010846(void)
{
    __asm {
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            mov eax, dword ptr [esp + 4]
            mov eax, dword ptr [eax + 0x80]
            test eax, eax
            je lbl_10010865
            push eax
            call dword ptr [g_1002109c]
        lbl_10010865:
            ret 4
            nop
            nop
            nop
            nop
            nop
            nop
            nop
    }
}
