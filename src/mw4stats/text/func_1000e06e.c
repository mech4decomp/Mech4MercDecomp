/* auto-transcribed gap function 0x1000E06E (130 B); review against reference; stepping stone */
extern int g_10021054;
extern int g_10021488;
extern int g_10021c00;
__declspec(naked) void FUN_1000e06e(void)
{
    __asm {
            nop
            nop
            mov eax, dword ptr [esp + 8]
            push esi
            push edi
            mov ecx, 4
            mov edi, offset g_10021c00
            mov esi, eax
            xor edx, edx
            repe cmpsd
            __emit 0x74 /* je 0x1000e09a: MSVC6 cannot encode natively */
            __emit 0x12 /* je 0x1000e09a: MSVC6 cannot encode natively */
            mov ecx, 4
            mov edi, offset g_10021488
            mov esi, eax
            xor edx, edx
            repe cmpsd
            __emit 0x75 /* jne 0x1000e0b1: MSVC6 cannot encode natively */
            __emit 0x17 /* jne 0x1000e0b1: MSVC6 cannot encode natively */
            mov ecx, dword ptr [esp + 0x14]
            mov eax, dword ptr [esp + 0xc]
            push eax
            mov dword ptr [ecx], eax
            mov edx, dword ptr [eax]
            call dword ptr [edx + 4]
            pop edi
            xor eax, eax
            pop esi
            ret 0xc
            mov eax, dword ptr [esp + 0x14]
            pop edi
            pop esi
            mov dword ptr [eax], 0
            mov eax, 0x80004002
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
            nop
            nop
            mov eax, dword ptr [esp + 4]
            add eax, 8
            push eax
            call dword ptr [g_10021054]
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
    }
}
