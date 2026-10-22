/* FUN_1001b920 - __stdcall, 38 bytes (1 arg, RET 0x4)
 * Virtual dispatch: sets [this+0x10]=1, calls vtable[3], if nonzero calls
 * vtable[4], then vtable[5]. */

__declspec(naked) void __cdecl FUN_1001b920(void)
{
    __asm {
        push esi
        mov  esi, dword ptr [esp + 8]
        push esi
        mov  eax, dword ptr [esi]
        mov  dword ptr [esi + 0x10], 1
        call dword ptr [eax + 0xc]
        test al, al
        jz   L1
        mov  ecx, dword ptr [esi]
        push esi
        call dword ptr [ecx + 0x10]
L1:
        mov  edx, dword ptr [esi]
        push esi
        call dword ptr [edx + 0x14]
        pop  esi
        ret  4
    }
}
