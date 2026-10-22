/*
 * MW4Stats.dll - FUN_1001edec (0x1001EDEC, 18 B, __cdecl)
 * (FUN_1001edc0(param_1) != 0) - 1.
 * Transcribed from MW4Stats.dll reference bytes.
 */
extern int __cdecl FUN_1001edc0(void *);

__declspec(naked) int __cdecl FUN_1001edec(void *param_1)
{
    __asm {
        push    dword ptr [esp + 0x4]
        call    FUN_1001edc0
        neg     eax
        sbb     eax, eax
        pop     ecx
        neg     eax
        dec     eax
        ret
    }
}
