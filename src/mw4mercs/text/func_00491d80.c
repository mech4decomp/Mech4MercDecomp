/*
 * FUN_00491d80 (41 B) — __fastcall (ECX=ptr, EDX=-1).
 * Initializes a 0x28-byte struct with defaults.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_00491d80(void)
{
    __asm {
        mov     eax, ecx
        xor     ecx, ecx
        or      edx, -1
        mov     dword ptr [eax], ecx
        mov     dword ptr [eax + 0x4], ecx
        mov     dword ptr [eax + 0x8], ecx
        mov     dword ptr [eax + 0xc], 0x3f800000
        mov     dword ptr [eax + 0x10], edx
        mov     dword ptr [eax + 0x18], ecx
        mov     dword ptr [eax + 0x1c], ecx
        mov     dword ptr [eax + 0x20], ecx
        mov     dword ptr [eax + 0x24], ecx
        mov     dword ptr [eax + 0x14], edx
        ret
    }
}
