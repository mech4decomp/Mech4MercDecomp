/* FUN_10003070 - __fastcall, 53 bytes
 * Frees four BSTR members via SysFreeString (IAT at 0x10021158). */

extern void *g_10021158; /* IAT entry -> SysFreeString */

__declspec(naked) void FUN_10003070(void)
{
    __asm {
        push esi
        mov  esi, ecx
        mov  eax, dword ptr [esi + 0xc]
        test eax, eax
        push edi
        mov  edi, dword ptr [g_10021158]
        jz   L1
        push eax
        call edi
L1:
        mov  eax, dword ptr [esi + 0x1c]
        test eax, eax
        jz   L2
        push eax
        call edi
L2:
        mov  eax, dword ptr [esi + 0x18]
        test eax, eax
        jz   L3
        push eax
        call edi
L3:
        mov  esi, dword ptr [esi + 0x8]
        test esi, esi
        jz   L4
        push esi
        call edi
L4:
        pop  edi
        pop  esi
        ret
    }
}
