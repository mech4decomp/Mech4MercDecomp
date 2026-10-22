/*
 * MW4Stats.dll - FUN_10004460 (0x10004460, 25 B, __fastcall)
 * Constructor: zeroes fields 0x0..0x10, then sets *this = 0x14.
 * Transcribed from MW4Stats.dll reference bytes.
 */
__declspec(naked) void FUN_10004460(void)
{
    __asm {
        xor eax, eax
        mov edx, ecx
        mov dword ptr [edx], eax
        mov dword ptr [edx+0x4], eax
        mov dword ptr [edx+0x8], eax
        mov dword ptr [edx+0xc], eax
        mov dword ptr [edx+0x10], eax
        mov dword ptr [ecx], 0x14
        ret
    }
}
