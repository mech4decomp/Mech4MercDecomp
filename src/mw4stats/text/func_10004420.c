/*
 * MW4Stats.dll - FUN_10004420 (0x10004420, 22 B, __fastcall)
 * Constructor: zeroes 7 dwords at this, then sets *this = 0x1c.
 * Transcribed from MW4Stats.dll reference bytes.
 */
__declspec(naked) void FUN_10004420(void)
{
    __asm {
        mov     edx, ecx
        push    edi
        mov     ecx, 0x7
        xor     eax, eax
        mov     edi, edx
        rep stosd
        mov     dword ptr [edx], 0x1c
        pop     edi
        ret
    }
}
