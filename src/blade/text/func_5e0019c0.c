/* auto-transcribed gap function 0x5E0019C0 (240 B); review against reference; stepping stone */
extern void __cdecl FUN_5e02b453(void);
extern int g_5e035690;
extern int g_5e035740;
extern int g_5e0362a0;
__declspec(naked) void FUN_5e0019c0(void)
{
    __asm {
            mov ecx, dword ptr [esp + 4]
            mov eax, dword ptr [ecx + 0x54]
            dec eax
            mov dword ptr [ecx + 0x54], eax
            jne lbl_5e0019e2
            test ecx, ecx
            je lbl_5e0019e0
            push ecx
            mov dword ptr [ecx], offset g_5e035740
            call FUN_5e02b453
            add esp, 4
        lbl_5e0019e0:
            xor eax, eax
        lbl_5e0019e2:
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
            push esi
            mov esi, dword ptr [esp + 0xc]
            push edi
            lea edi, [eax + 4]
            mov ecx, 0x14
            rep movsd
            __emit 0x5f /* pop edi: MSVC6 cannot encode natively */
            xor eax, eax
            pop esi
            ret 8
            nop
            nop
            nop
            nop
            nop
            mov eax, dword ptr [esp + 4]
            push esi
            push edi
            mov edi, dword ptr [esp + 0x10]
            lea esi, [eax + 4]
            mov ecx, 0x14
            rep movsd
            __emit 0x5f /* pop edi: MSVC6 cannot encode natively */
            xor eax, eax
            pop esi
            ret 8
            nop
            nop
            nop
            nop
            nop
            mov eax, dword ptr [esp + 4]
            mov ecx, dword ptr [esp + 0xc]
            add eax, 4
            mov dword ptr [ecx], eax
            xor eax, eax
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
            nop
            nop
            nop
            mov eax, dword ptr [esp + 8]
            push esi
            push edi
            mov ecx, 4
            mov edi, eax
            mov esi, offset g_5e0362a0
            xor edx, edx
            repe cmpsd
            __emit 0x75 /* jne 0x5e001a7f: MSVC6 cannot encode natively */
            __emit 0x17 /* jne 0x5e001a7f: MSVC6 cannot encode natively */
            mov esi, dword ptr [esp + 0xc]
            push esi
            mov eax, dword ptr [esi]
            call dword ptr [eax + 4]
            pop edi
            xor eax, eax
            mov ecx, dword ptr [esp + 0x10]
            mov dword ptr [ecx], esi
            pop esi
            ret 0xc
            mov ecx, 4
            mov edi, eax
            mov esi, offset g_5e035690
            xor edx, edx
            repe cmpsd
            __emit 0x74 /* je 0x5e001a68: MSVC6 cannot encode natively */
            __emit 0xd7 /* je 0x5e001a68: MSVC6 cannot encode natively */
            mov edx, dword ptr [esp + 0x14]
            pop edi
            mov eax, 0x80004005
            pop esi
            mov dword ptr [edx], 0
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
