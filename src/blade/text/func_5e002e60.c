/* auto-transcribed gap function 0x5E002E60 (208 B); review against reference; stepping stone */
extern void __cdecl FUN_5e02b453(void);
extern int g_5e035a48;
__declspec(naked) void FUN_5e002e60(void)
{
    __asm {
            mov ecx, dword ptr [esp + 4]
            mov eax, dword ptr [ecx + 0x38]
            dec eax
            mov dword ptr [ecx + 0x38], eax
            jne lbl_5e002e82
            test ecx, ecx
            je lbl_5e002e80
            push ecx
            mov dword ptr [ecx], offset g_5e035a48
            call FUN_5e02b453
            add esp, 4
        lbl_5e002e80:
            xor eax, eax
        lbl_5e002e82:
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
            mov eax, 0x80004001
            ret 0x14
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            mov eax, 0x80004001
            ret 0xc
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
            mov eax, 0x80004001
            ret 0xc
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
            mov eax, 0x80004001
            ret 0xc
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            nop
            mov eax, 0x80004001
            ret 0x10
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
