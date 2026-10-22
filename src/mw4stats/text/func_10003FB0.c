/*
 * FUN_10003FB0 (19 B, __thiscall) - copies [ecx+0x24] to [ecx+0x28], calls
 * FUN_100040b0(this, param).
 * Transcribed from MW4Stats.dll reference bytes.
 */

extern void __cdecl FUN_100040b0(void);

__declspec(naked) void FUN_10003FB0(void)
{
    __asm {
        mov     edx, dword ptr [esp+0x4]
        mov     eax, dword ptr [ecx+0x24]
        push    edx
        mov     dword ptr [ecx+0x28], eax
        call    FUN_100040b0
        ret     0x4
    }
}
