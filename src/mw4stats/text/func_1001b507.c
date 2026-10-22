/* auto-transcribed gap function 0x1001B507 (73 B); review against reference; stepping stone */
extern void __cdecl FUN_1000bee0(void);
__declspec(naked) void FUN_1001b507(void)
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
            mov eax, dword ptr [esp + 8]
            push esi
            push edi
            mov edi, dword ptr [esp + 0xc]
            lea esi, [edi + 0x464]
            push esi
            push eax
            call FUN_1000bee0
            mov eax, dword ptr [esi + 0xc]
            add esp, 8
            test eax, eax
            jbe lbl_1001b53f
            mov ecx, dword ptr [edi + 0x38]
            mov esi, dword ptr [esi]
            pop edi
            xor eax, eax
            mov dword ptr [ecx], esi
            pop esi
            ret 8
        lbl_1001b53f:
            mov ecx, dword ptr [edi + 0x38]
            mov esi, 0x100274ec
            pop edi
            xor eax, eax
            mov dword ptr [ecx], esi
            pop esi
            ret 8
    }
}
