/* auto-transcribed gap function 0x5E001AC0 (64 B); review against reference; stepping stone */
extern void __cdecl FUN_5e02b453(void);
extern int g_5e035758;
__declspec(naked) void FUN_5e001ac0(void)
{
    __asm {
            mov ecx, dword ptr [esp + 4]
            mov eax, dword ptr [ecx + 0x54]
            dec eax
            mov dword ptr [ecx + 0x54], eax
            jne lbl_5e001ae2
            test ecx, ecx
            je lbl_5e001ae0
            push ecx
            mov dword ptr [ecx], offset g_5e035758
            call FUN_5e02b453
            add esp, 4
        lbl_5e001ae0:
            xor eax, eax
        lbl_5e001ae2:
            ret 4
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
            nop
            mov eax, 0x80004001
            ret 8
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
    }
}
