/* auto-transcribed gap function 0x5E001B30 (48 B); review against reference; stepping stone */
__declspec(naked) void FUN_5e001b30(void)
{
    __asm {
            push esi
            push edi
            mov edi, dword ptr [esp + 0x10]
            mov eax, dword ptr [edi]
            cmp eax, 0x50
            jb lbl_5e001b42
            mov eax, 0x50
        lbl_5e001b42:
            mov ecx, eax
            mov eax, dword ptr [esp + 0xc]
            mov edx, ecx
            lea esi, [eax + 4]
            xor eax, eax
            shr ecx, 2
            rep movsd
            __emit 0x8b /* mov ecx, edx: MSVC6 cannot encode natively */
            __emit 0xca /* mov ecx, edx: MSVC6 cannot encode natively */
            and ecx, 3
            __emit 0xf3 /* rep movsb byte ptr es:[edi], byte ptr [esi]: MSVC6 cannot encode natively */
            __emit 0xa4 /* rep movsb byte ptr es:[edi], byte ptr [esi]: MSVC6 cannot encode natively */
            __emit 0x5f /* pop edi: MSVC6 cannot encode natively */
            pop esi
            ret 8
    }
}
