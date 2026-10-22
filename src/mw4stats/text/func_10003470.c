/* FUN_10003470 - __thiscall, 85 bytes
 * Constructor: stores 7 params into fields, zeroes +0x20/24/25,
 * sets vtable 0x10021218, InitializeCriticalSection on +0x28. */

extern void *g_1002103c; /* IAT: InitializeCriticalSection */

__declspec(naked) void FUN_10003470(void)
{
    __asm {
        mov  eax, dword ptr [esp + 0x8]
        mov  edx, dword ptr [esp + 0xc]
        push esi
        mov  esi, ecx
        mov  ecx, dword ptr [esp + 0x8]
        mov  dword ptr [esi + 0x4], eax
        mov  eax, dword ptr [esp + 0x14]
        mov  dword ptr [esi + 0x8], ecx
        mov  ecx, dword ptr [esp + 0x18]
        mov  dword ptr [esi + 0x10], eax
        mov  eax, dword ptr [esp + 0x20]
        mov  dword ptr [esi + 0x14], ecx
        mov  dword ptr [esi + 0xc], edx
        mov  edx, dword ptr [esp + 0x1c]
        mov  dword ptr [esi + 0x1c], eax
        xor  eax, eax
        lea  ecx, [esi + 0x28]
        push ecx
        mov  dword ptr [esi + 0x18], edx
        mov  dword ptr [esi + 0x20], eax
        mov  byte ptr [esi + 0x24], al
        mov  byte ptr [esi + 0x25], al
        mov  dword ptr [esi], 0x10021218
        call dword ptr [g_1002103c]
        mov  eax, esi
        pop  esi
        ret  0x1c
    }
}
