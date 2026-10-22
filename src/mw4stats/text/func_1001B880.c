/* FUN_1001b880 - __fastcall, 33 bytes
 * Constructor: sets function ptr at [this+4]=FUN_1001b920, zeroes fields,
 * sets vtable 0x10021bc0. */

__declspec(naked) void __cdecl FUN_1001b880(void)
{
    __asm {
        mov  eax, ecx
        xor  ecx, ecx
        mov  dword ptr [eax + 4], 0x1001b920
        mov  dword ptr [eax + 8], ecx
        mov  dword ptr [eax + 0xc], ecx
        mov  dword ptr [eax + 0x10], ecx
        mov  byte ptr [eax + 0x14], cl
        mov  byte ptr [eax + 0x15], cl
        mov  dword ptr [eax], 0x10021bc0
        ret
    }
}
