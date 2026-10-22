/*
 * MW4Stats.dll - FUN_10005850 (0x10005850, 33 B, __cdecl)
 * Virtual dispatch: calls (*param_1+0x1c)(param_2,1), then (*param_3+4)(result).
 * Transcribed from MW4Stats.dll reference bytes.
 */
__declspec(naked) void FUN_10005850(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 0x4]
        mov     edx, dword ptr [esp + 0x8]
        mov     eax, dword ptr [ecx]
        push    esi
        mov     esi, dword ptr [esp + 0x10]
        push    edi
        mov     edi, dword ptr [esi]
        push    0x1
        push    edx
        call    dword ptr [eax + 0x1c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edi + 0x4]
        pop     edi
        pop     esi
        ret
    }
}
