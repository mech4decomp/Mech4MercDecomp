/*
 * MW4Stats.dll - FUN_10004440 (0x10004440, 22 B, __fastcall)
 * Constructor: zeroes 0xc dwords at this, then sets *this = 0x30.
 * Transcribed from MW4Stats.dll reference bytes.
 */
__declspec(naked) void FUN_10004440(void)
{
    __asm {
        mov     edx, ecx
        push    edi
        mov     ecx, 0xc
        xor     eax, eax
        mov     edi, edx
        rep stosd
        mov     dword ptr [edx], 0x30
        pop     edi
        ret
    }
}
