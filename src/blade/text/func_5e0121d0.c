/*
 * FUN_5e0121d0 (61 B) — 4x4 identity matrix initializer.
 *
 * __stdcall, RET 0x4 (1 stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_5e0121d0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     edx, 0x3f800000
        xor     ecx, ecx
        mov     dword ptr [eax], edx
        mov     dword ptr [eax + 0x4], ecx
        mov     dword ptr [eax + 0x8], ecx
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
        ret     0x4
    }
}
