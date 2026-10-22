/* func_0070e390 - FUN_0070e390 - 42 bytes: MD5 context init */

__declspec(naked) void func_0070e390(void)
{
    __asm {
        mov eax, dword ptr [esp + 0x4]
        xor ecx, ecx
        mov dword ptr [eax + 0x14], ecx
        mov dword ptr [eax + 0x10], ecx
        mov dword ptr [eax], 0x67452301
        mov dword ptr [eax + 0x4], 0xefcdab89
        mov dword ptr [eax + 0x8], 0x98badcfe
        mov dword ptr [eax + 0xc], 0x10325476
        ret 0x4
    }
}
