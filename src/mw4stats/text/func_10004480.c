/*
 * MW4Stats.dll - FUN_10004480 (0x10004480, 19 B, __fastcall)
 * Constructor: zeroes fields 0x0..0x8, then sets *this = 0xc.
 * Transcribed from MW4Stats.dll reference bytes.
 */
__declspec(naked) void FUN_10004480(void)
{
    __asm {
        xor     eax, eax
        mov     edx, ecx
        mov     dword ptr [edx], eax
        mov     dword ptr [edx+0x4], eax
        mov     dword ptr [edx+0x8], eax
        mov     dword ptr [ecx], 0xc
        ret
    }
}
