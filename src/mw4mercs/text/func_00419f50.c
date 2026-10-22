/*
 * FUN_00419f50 (59 B) — __thiscall matrix/transform init: fills this with an
 * identity-ish layout (1.0f at +0/+0x14/+0x28, zeros elsewhere) then copies
 * three dwords from the source arg into +0xc/+0x1c/+0x2c. Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00419f50(void)
{
    __asm {
        mov     eax, ecx
        xor     ecx, ecx
        mov     edx, 0x3f800000
        mov     dword ptr [eax], edx
        mov     dword ptr [eax + 0x10], ecx
        mov     dword ptr [eax + 0x20], ecx
        mov     dword ptr [eax + 0x4], ecx
        mov     dword ptr [eax + 0x14], edx
        mov     dword ptr [eax + 0x24], ecx
        mov     dword ptr [eax + 0x8], ecx
        mov     dword ptr [eax + 0x18], ecx
        mov     ecx, dword ptr [esp + 0x4]
        mov     dword ptr [eax + 0x28], edx
        mov     edx, dword ptr [ecx]
        mov     dword ptr [eax + 0xc], edx
        mov     edx, dword ptr [ecx + 0x4]
        mov     ecx, dword ptr [ecx + 0x8]
        mov     dword ptr [eax + 0x1c], edx
        mov     dword ptr [eax + 0x2c], ecx
        ret     0x4
    }
}
