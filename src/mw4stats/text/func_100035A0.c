/* FUN_100035a0 - __thiscall, 78 bytes
 * Constructor: stores 6 params into fields, zeroes +0x1c/20/21,
 * sets vtable 0x10021228, InitializeCriticalSection on +0x24. */

extern void *g_1002103c; /* IAT: InitializeCriticalSection */

__declspec(naked) void FUN_100035a0(void)
{
    __asm {
        mov  eax, dword ptr [esp + 0x8]
        mov  edx, dword ptr [esp + 0xc]
        push esi
        mov  esi, ecx
        mov  ecx, dword ptr [esp + 0x8]
        mov  dword ptr [esi + 0x4], eax
        mov  eax, dword ptr [esp + 0x14]
        mov  dword ptr [esi + 0x10], eax
        xor  eax, eax
        mov  dword ptr [esi + 0x1c], eax
        mov  byte ptr [esi + 0x20], al
        mov  byte ptr [esi + 0x21], al
        mov  dword ptr [esi + 0x8], ecx
        mov  ecx, dword ptr [esp + 0x18]
        mov  dword ptr [esi + 0xc], edx
        mov  edx, dword ptr [esp + 0x1c]
        lea  eax, [esi + 0x24]
        push eax
        mov  dword ptr [esi + 0x14], ecx
        mov  dword ptr [esi + 0x18], edx
        mov  dword ptr [esi], 0x10021228
        call dword ptr [g_1002103c]
        mov  eax, esi
        pop  esi
        ret  0x18
    }
}
