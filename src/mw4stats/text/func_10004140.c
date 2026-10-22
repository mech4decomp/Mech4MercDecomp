/*
 * FUN_10004140 (3 B, __fastcall) - returns *ecx.
 * Transcribed from MW4Stats.dll reference bytes.
 */

__declspec(naked) void FUN_10004140(void)
{
    __asm {
        mov     eax, dword ptr [ecx]
        ret
    }
}
