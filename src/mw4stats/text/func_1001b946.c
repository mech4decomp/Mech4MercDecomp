/* auto-transcribed gap function 0x1001B946 (445 B); review against reference; stepping stone */
extern int g_10021020;
extern int g_10021024;
extern int g_10021028;
extern int g_10021058;
extern int g_100210b4;
__declspec(naked) void FUN_1001b946(void)
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
            mov edx, dword ptr [esp + 8]
            mov eax, dword ptr [esp + 4]
            push edx
            push 0
            mov ecx, dword ptr [eax]
            push 0
            push eax
            call dword ptr [ecx + 4]
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
            push ebx
            mov bl, byte ptr [esp + 0x14]
            mov cl, bl
            push esi
            mov esi, dword ptr [esp + 0xc]
            neg cl
            mov edx, dword ptr [esi + 4]
            lea eax, [esi + 8]
            sbb ecx, ecx
            push eax
            mov eax, dword ptr [esp + 0x18]
            and ecx, 4
            push ecx
            mov ecx, dword ptr [esp + 0x18]
            push esi
            push edx
            push eax
            push ecx
            call dword ptr [g_100210b4]
            add esp, 0x18
            mov dword ptr [esi + 0xc], eax
            test eax, eax
            setne al
            test al, al
            je lbl_1001b9b7
            test bl, bl
            je lbl_1001b9b7
            mov dword ptr [esi + 0x10], 2
        lbl_1001b9b7:
            pop esi
            pop ebx
            ret 0x10
            nop
            nop
            nop
            nop
            mov al, 1
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
            xor eax, eax
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
            mov eax, dword ptr [esp + 4]
            mov ecx, dword ptr [eax + 0xc]
            push ecx
            call dword ptr [g_10021024]
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
            nop
            nop
            nop
            nop
            mov eax, dword ptr [esp + 4]
            mov ecx, dword ptr [eax + 0xc]
            push ecx
            call dword ptr [g_10021020]
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
            nop
            nop
            nop
            nop
            mov eax, dword ptr [esp + 4]
            push -1
            mov ecx, dword ptr [eax + 0xc]
            push ecx
            call dword ptr [g_10021058]
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
            mov ecx, dword ptr [esp + 4]
            mov eax, dword ptr [esp + 8]
            push eax
            mov edx, dword ptr [ecx + 0xc]
            push edx
            call dword ptr [g_10021058]
            neg eax
            sbb eax, eax
            neg eax
            ret 8
            nop
            nop
            nop
            nop
            mov eax, dword ptr [esp + 4]
            push eax
            mov ecx, dword ptr [eax]
            mov byte ptr [eax + 0x14], 1
            call dword ptr [ecx + 0x20]
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
            nop
            nop
            nop
            nop
            mov eax, dword ptr [esp + 4]
            mov eax, dword ptr [eax + 0xc]
            test eax, eax
            je lbl_1001ba9f
            mov ecx, dword ptr [esp + 8]
            push ecx
            push eax
            call dword ptr [g_10021028]
            neg eax
            sbb eax, eax
            inc eax
            ret 8
        lbl_1001ba9f:
            mov eax, 1
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
            mov eax, dword ptr [esp + 4]
            mov eax, dword ptr [eax + 0xc]
            test eax, eax
            je lbl_1001bacc
            push 0
            push eax
            call dword ptr [g_10021028]
            neg eax
            sbb eax, eax
            inc eax
            ret 4
        lbl_1001bacc:
            mov eax, 1
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
            nop
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
            nop
            nop
            push esi
            mov esi, dword ptr [esp + 8]
            push esi
            mov eax, dword ptr [esi]
            call dword ptr [eax + 0x24]
            mov ecx, dword ptr [esi]
            mov edx, dword ptr [esp + 0xc]
            push edx
            push esi
    }
}
