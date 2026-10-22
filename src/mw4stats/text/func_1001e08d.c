/* auto-transcribed gap function 0x1001E08D (99 B); review against reference; stepping stone */
extern int g_10021478;
extern int g_10021c00;
__declspec(naked) void FUN_1001e08d(void)
{
    __asm {
            nop
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
            __emit 0x74 /* je 0x1001e0ba: MSVC6 cannot encode natively */
            __emit 0x12 /* je 0x1001e0ba: MSVC6 cannot encode natively */
            mov ecx, 4
            mov edi, offset g_10021478
            mov esi, eax
            xor edx, edx
            repe cmpsd
            __emit 0x75 /* jne 0x1001e0d1: MSVC6 cannot encode natively */
            __emit 0x17 /* jne 0x1001e0d1: MSVC6 cannot encode natively */
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
    }
}
