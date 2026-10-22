/* auto-transcribed gap function 0x100063AF (137 B); review against reference; stepping stone */
extern int g_10021128;
extern int g_100252f0;
extern int g_100252f4;
__declspec(naked) void FUN_100063af(void)
{
    __asm {
            nop
            mov ecx, dword ptr [esp + 4]
            mov edx, dword ptr [esp + 8]
            mov eax, dword ptr [ecx]
            push 1
            push edx
            call dword ptr [eax + 0x1c]
            test eax, eax
            jne lbl_100063c7
            xor al, al
            ret
        lbl_100063c7:
            mov edx, dword ptr [eax]
            mov ecx, eax
            call dword ptr [edx + 8]
            mov edx, dword ptr [eax]
            push 1
            push offset g_100252f0
            mov ecx, eax
            call dword ptr [edx + 4]
            push eax
            mov eax, dword ptr [esp + 0x10]
            push eax
            call lbl_100063f0
            add esp, 8
            ret
            nop
            nop
            nop
            nop
            nop
        lbl_100063f0:
            push esi
            mov esi, dword ptr [esp + 0xc]
            test esi, esi
            jne lbl_10006408
            mov eax, dword ptr [esp + 8]
            mov dword ptr [eax], esi
            xor eax, eax
            test esi, esi
            setne al
            pop esi
            ret
        lbl_10006408:
            mov ecx, dword ptr [esp + 8]
            mov edx, dword ptr [esi]
            push ecx
            push offset g_100252f4
            mov ecx, esi
            call dword ptr [edx]
            push eax
            call dword ptr [g_10021128]
            add esp, 0xc
            xor eax, eax
            test esi, esi
            setne al
            pop esi
            ret
            nop
            nop
            nop
            nop
            nop
            mov ecx, dword ptr [esp + 4]
            mov edx, dword ptr [esp + 8]
    }
}
