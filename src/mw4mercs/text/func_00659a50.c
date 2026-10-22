/*
 * FUN_00659a50 (67 B) — __thiscall copy constructor.
 *
 * Copies a 0x28-byte structure from param_1 into this. Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00659a50(void)
{
    __asm {
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 0x4]
        mov     edx, dword ptr [ecx]
        mov     dword ptr [eax], edx
        mov     dl, byte ptr [ecx + 0x4]
        mov     byte ptr [eax + 0x4], dl
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
        mov     dl, byte ptr [ecx + 0x20]
        mov     ecx, dword ptr [ecx + 0x24]
        mov     byte ptr [eax + 0x20], dl
        mov     dword ptr [eax + 0x24], ecx
        ret     0x4
    }
}
