/* auto-transcribed gap function 0x1000700F (97 B); review against reference; stepping stone */
extern void __cdecl FUN_10007070(void);
extern void __cdecl FUN_100070e0(void);
__declspec(naked) void FUN_1000700f(void)
{
    __asm {
            nop
            mov eax, dword ptr [ecx + 4]
            xor edx, edx
            test eax, eax
            je lbl_1000702d
            mov ecx, dword ptr [esp + 4]
        lbl_1000701d:
            cmp edx, ecx
            jae lbl_1000702d
            test eax, eax
            je lbl_10007028
            mov eax, dword ptr [eax + 4]
        lbl_10007028:
            inc edx
            test eax, eax
            jne lbl_1000701d
        lbl_1000702d:
            ret 4
            mov eax, dword ptr [esp + 8]
            mov edx, dword ptr [esp + 4]
            push eax
            push edx
            call FUN_10007070
            ret 8
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
            nop
            nop
            nop
            mov eax, dword ptr [esp + 0xc]
            mov edx, dword ptr [esp + 8]
            push eax
            mov eax, dword ptr [esp + 8]
            push edx
            push eax
            call FUN_100070e0
            ret 0xc
            nop
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
