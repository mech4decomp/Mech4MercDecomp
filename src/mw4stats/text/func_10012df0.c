/* auto-transcribed gap function 0x10012DF0 (31 B); review against reference; stepping stone */
extern int g_1002109c;
__declspec(naked) void FUN_10012df0(void)
{
    __asm {
            mov eax, dword ptr [esp + 4]
            mov eax, dword ptr [eax + 0x9c]
            test eax, eax
            je lbl_10012e05
            push eax
            call dword ptr [g_1002109c]
        lbl_10012e05:
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
