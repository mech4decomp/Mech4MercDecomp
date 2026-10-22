/* auto-transcribed gap function 0x5E010A70 (304 B); review against reference; stepping stone */
extern void __cdecl FUN_5e010b75(void);
extern int g_5e0354f0;
extern int g_5e035500;
extern int g_5e035520;
extern int g_5e035530;
extern int g_5e035680;
extern int g_5e0362a0;
__declspec(naked) void FUN_5e010a70(void)
{
    __asm {
            mov eax, dword ptr [esp + 8]
            push esi
            push edi
            mov ecx, 4
            mov edi, eax
            mov esi, offset g_5e0362a0
            xor edx, edx
            repe cmpsd
            __emit 0x75 /* jne 0x5e010a9f: MSVC6 cannot encode natively */
            __emit 0x17 /* jne 0x5e010a9f: MSVC6 cannot encode natively */
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
            mov esi, offset g_5e0354f0
            xor edx, edx
            repe cmpsd
            __emit 0x74 /* je 0x5e010a88: MSVC6 cannot encode natively */
            __emit 0xd7 /* je 0x5e010a88: MSVC6 cannot encode natively */
            mov ecx, 4
            mov edi, eax
            mov esi, offset g_5e035500
            xor edx, edx
            repe cmpsd
            __emit 0x75 /* jne 0x5e010ae5: MSVC6 cannot encode natively */
            __emit 0x22 /* jne 0x5e010ae5: MSVC6 cannot encode natively */
            mov esi, dword ptr [esp + 0xc]
            push esi
            mov eax, dword ptr [esi]
            call dword ptr [eax + 4]
            test esi, esi
            je FUN_5e010b75
            mov ecx, dword ptr [esp + 0x14]
            lea eax, [esi + 4]
            pop edi
            pop esi
            mov dword ptr [ecx], eax
            xor eax, eax
            ret 0xc
            mov ecx, 4
            mov edi, eax
            mov esi, offset g_5e035520
            xor edx, edx
            repe cmpsd
            __emit 0x75 /* jne 0x5e010b15: MSVC6 cannot encode natively */
            __emit 0x1e /* jne 0x5e010b15: MSVC6 cannot encode natively */
            mov esi, dword ptr [esp + 0xc]
            push esi
            mov eax, dword ptr [esi]
            call dword ptr [eax + 4]
            test esi, esi
            je lbl_5e010b75
            mov ecx, dword ptr [esp + 0x14]
            lea eax, [esi + 8]
            pop edi
            pop esi
            mov dword ptr [ecx], eax
            xor eax, eax
            ret 0xc
            mov ecx, 4
            mov edi, eax
            mov esi, offset g_5e035680
            xor edx, edx
            repe cmpsd
            __emit 0x75 /* jne 0x5e010b45: MSVC6 cannot encode natively */
            __emit 0x1e /* jne 0x5e010b45: MSVC6 cannot encode natively */
            mov esi, dword ptr [esp + 0xc]
            push esi
            mov eax, dword ptr [esi]
            call dword ptr [eax + 4]
            test esi, esi
            je lbl_5e010b75
            mov ecx, dword ptr [esp + 0x14]
            lea eax, [esi + 0x10]
            pop edi
            pop esi
            mov dword ptr [ecx], eax
            xor eax, eax
            ret 0xc
            mov ecx, 4
            mov edi, eax
            mov esi, offset g_5e035530
            xor edx, edx
            repe cmpsd
            __emit 0x75 /* jne 0x5e010b82: MSVC6 cannot encode natively */
            __emit 0x2b /* jne 0x5e010b82: MSVC6 cannot encode natively */
            mov esi, dword ptr [esp + 0xc]
            push esi
            mov eax, dword ptr [esi]
            call dword ptr [eax + 4]
            test esi, esi
            je lbl_5e010b75
            mov ecx, dword ptr [esp + 0x14]
            lea eax, [esi + 0xc]
            pop edi
            pop esi
            mov dword ptr [ecx], eax
            xor eax, eax
            ret 0xc
        lbl_5e010b75:
            mov ecx, dword ptr [esp + 0x14]
            xor eax, eax
            pop edi
            pop esi
            mov dword ptr [ecx], eax
            ret 0xc
            mov edx, dword ptr [esp + 0x14]
            pop edi
            mov eax, 0x80004002
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
    }
}
