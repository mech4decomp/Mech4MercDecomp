/*
 * MW4Stats.dll - FUN_10005810 (0x10005810, 24 B, __cdecl)
 * Loads three stack args and forwards them to FUN_10006330.
 * Transcribed from MW4Stats.dll reference bytes.
 */
extern void __cdecl FUN_10006330(void);

__declspec(naked) void FUN_10005810(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [esp + 0x8]
        mov     edx, dword ptr [esp + 0x4]
        push    eax
        push    ecx
        push    edx
        call    FUN_10006330
        add     esp, 0xc
        ret
    }
}
