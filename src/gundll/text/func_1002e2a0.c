/*
 * FUN_1002e2a0 (63 B) — __fastcall (ECX = this).
 * Initializes a struct: sets field 0 to 2, field 0x14 to 1, zeroes the rest.
 */

__declspec(naked) void __fastcall FUN_1002e2a0(void)
{
    __asm {
        mov     eax, ecx
        xor     ecx, ecx
        mov     dword ptr [eax], 0x2
        mov     dword ptr [eax + 0x14], 0x1
        mov     dword ptr [eax + 0x18], ecx
        mov     dword ptr [eax + 0x1c], ecx
        mov     dword ptr [eax + 0x20], ecx
        mov     dword ptr [eax + 0x8], ecx
        mov     dword ptr [eax + 0x24], ecx
        mov     dword ptr [eax + 0x2c], ecx
        mov     dword ptr [eax + 0x4], ecx
        mov     dword ptr [eax + 0x30], ecx
        mov     dword ptr [eax + 0x28], ecx
        mov     dword ptr [eax + 0x438], ecx
        mov     dword ptr [eax + 0x43c], ecx
        mov     dword ptr [eax + 0x434], ecx
        ret
    }
}
