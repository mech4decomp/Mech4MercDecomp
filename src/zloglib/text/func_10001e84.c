/*
 * ZlogLib.dll - FUN_10001e84 (0x10001E84, 40 B, __cdecl)
 * MD5 context init: zeroes [0x14]/[0x10], sets the 4 magic constants.
 * Transcribed from ZlogLib.dll reference bytes.
 */

__declspec(naked) void FUN_10001e84(void)
{
    __asm {
        mov eax, dword ptr [esp + 0x4]
        and dword ptr [eax + 0x14], 0x0
        and dword ptr [eax + 0x10], 0x0
        mov dword ptr [eax], 0x67452301
        mov dword ptr [eax + 0x4], 0xefcdab89
        mov dword ptr [eax + 0x8], 0x98badcfe
        mov dword ptr [eax + 0xc], 0x10325476
        ret
    }
}
