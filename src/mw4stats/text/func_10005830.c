/*
 * MW4Stats.dll - FUN_10005830 (0x10005830, 24 B, __cdecl)
 * Loads three stack args and forwards them to FUN_100064b0.
 * Transcribed from MW4Stats.dll reference bytes.
 */
extern void __cdecl FUN_100064b0(void);

__declspec(naked) void FUN_10005830(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [esp + 0x8]
        mov     edx, dword ptr [esp + 0x4]
        push    eax
        push    ecx
        push    edx
        call    FUN_100064b0
        add     esp, 0xc
        ret
    }
}
