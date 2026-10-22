/*
 * FUN_0048f0c0 (67 B) — MLR struct copy (__thiscall, RET 0x4).
 * Copies a 10-dword (40-byte) structure from the argument to [this].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0048f0c0(void)
{
    __asm {
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 0x4]
        mov     edx, dword ptr [ecx]
        mov     dword ptr [eax], edx
        mov     edx, dword ptr [ecx + 0x4]
        mov     dword ptr [eax + 0x4], edx
        mov     edx, dword ptr [ecx + 0x8]
        mov     dword ptr [eax + 0x8], edx
        mov     edx, dword ptr [ecx + 0xc]
        mov     dword ptr [eax + 0xc], edx
        mov     edx, dword ptr [ecx + 0x10]
        mov     dword ptr [eax + 0x10], edx
        mov     edx, dword ptr [ecx + 0x14]
        mov     dword ptr [eax + 0x14], edx
        mov     edx, dword ptr [ecx + 0x18]
        mov     dword ptr [eax + 0x18], edx
        mov     edx, dword ptr [ecx + 0x1c]
        mov     dword ptr [eax + 0x1c], edx
        mov     edx, dword ptr [ecx + 0x20]
        mov     ecx, dword ptr [ecx + 0x24]
        mov     dword ptr [eax + 0x20], edx
        mov     dword ptr [eax + 0x24], ecx
        ret     0x4
    }
}
