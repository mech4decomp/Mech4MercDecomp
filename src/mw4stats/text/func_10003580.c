/* FUN_10003580 - __fastcall, 29 bytes
 * Indirect call through +0x4 with 4 args from fields, stores result at +0xc. */

__declspec(naked) void FUN_10003580(void)
{
    __asm {
        push esi
        mov  esi, ecx
        mov  eax, dword ptr [esi + 0x18]
        mov  ecx, dword ptr [esi + 0x14]
        mov  edx, dword ptr [esi + 0x10]
        push eax
        mov  eax, dword ptr [esi + 0x8]
        push ecx
        push edx
        push eax
        call dword ptr [esi + 0x4]
        mov  ecx, dword ptr [esi + 0xc]
        mov  dword ptr [ecx], eax
        pop  esi
        ret
    }
}
