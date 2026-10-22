/*
 * FUN_100043a0 (11 B, __fastcall) - returns ([ecx+4] == 0).
 * Transcribed from MW4Stats.dll reference bytes.
 */

__declspec(naked) void FUN_100043a0(void)
{
    __asm {
        mov     edx, dword ptr [ecx+0x4]
        xor     eax, eax
        test    edx, edx
        setz    al
        ret
    }
}
