/*
 * FUN_0041CC70 (57 B) — thiscall; initializes a 4x4 identity matrix at `this`.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_0041CC70(void)
{
    __asm {
        mov     eax, ecx
        xor     ecx, ecx
        mov     edx, 0x3f800000
        mov     dword ptr [eax], edx
        mov     dword ptr [eax + 4], ecx
        mov     dword ptr [eax + 8], ecx
        mov     dword ptr [eax + 0xc], ecx
        mov     dword ptr [eax + 0x10], ecx
        mov     dword ptr [eax + 0x14], edx
        mov     dword ptr [eax + 0x18], ecx
        mov     dword ptr [eax + 0x1c], ecx
        mov     dword ptr [eax + 0x20], ecx
        mov     dword ptr [eax + 0x24], ecx
        mov     dword ptr [eax + 0x28], edx
        mov     dword ptr [eax + 0x2c], ecx
        mov     dword ptr [eax + 0x30], ecx
        mov     dword ptr [eax + 0x34], ecx
        mov     dword ptr [eax + 0x38], ecx
        mov     dword ptr [eax + 0x3c], edx
        ret
    }
}
