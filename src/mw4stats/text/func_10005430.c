/*
 * MW4Stats.dll - FUN_10005430 (0x10005430, 26 B, __thiscall)
 * Forwards two args to FUN_10005450(this,...), returns this. RET 0x8.
 * Transcribed from MW4Stats.dll reference bytes.
 */
extern void __cdecl FUN_10005450(void);

__declspec(naked) void FUN_10005430(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x8]
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_10005450
        mov     eax, esi
        pop     esi
        ret     0x8
    }
}
