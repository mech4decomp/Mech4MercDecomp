/* auto-transcribed gap function 0x100096EC (100 B); review against reference; stepping stone */
extern int g_100214b8;
extern int g_10021c00;
__declspec(naked) void FUN_100096ec(void)
{
    __asm {
            nop
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
            __emit 0x74 /* je 0x1000971a: MSVC6 cannot encode natively */
            __emit 0x12 /* je 0x1000971a: MSVC6 cannot encode natively */
            mov ecx, 4
            mov edi, offset g_100214b8
            mov esi, eax
            xor edx, edx
            repe cmpsd
            __emit 0x75 /* jne 0x10009731: MSVC6 cannot encode natively */
            __emit 0x17 /* jne 0x10009731: MSVC6 cannot encode natively */
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
