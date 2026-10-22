/*
 * FUN_00684a20 (137 B) — __thiscall HUD element field setter. Copies
 * 13 dword params + 6 byte params from the stack into the object
 * (this=ECX) at offsets 0x00..0x3e. RET 0x4c.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00684a20(void)
{
    __asm {
        mov     edx, dword ptr [esp + 0x8]
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 0x4]
        mov     dword ptr [eax], ecx
        mov     ecx, dword ptr [esp + 0xc]
        mov     dword ptr [eax + 0x4], edx
        mov     edx, dword ptr [esp + 0x10]
        mov     dword ptr [eax + 0x8], ecx
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [eax + 0xc], edx
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [eax + 0x10], ecx
        mov     ecx, dword ptr [esp + 0x1c]
        mov     dword ptr [eax + 0x14], edx
        mov     edx, dword ptr [esp + 0x20]
        mov     dword ptr [eax + 0x18], ecx
        mov     ecx, dword ptr [esp + 0x24]
        mov     dword ptr [eax + 0x1c], edx
        mov     edx, dword ptr [esp + 0x28]
        mov     dword ptr [eax + 0x20], ecx
        mov     ecx, dword ptr [esp + 0x2c]
        mov     dword ptr [eax + 0x24], edx
        mov     edx, dword ptr [esp + 0x30]
        mov     dword ptr [eax + 0x28], ecx
        mov     ecx, dword ptr [esp + 0x34]
        mov     dword ptr [eax + 0x2c], edx
        mov     dl, byte ptr [esp + 0x38]
        mov     dword ptr [eax + 0x30], ecx
        mov     cl, byte ptr [esp + 0x3c]
        mov     byte ptr [eax + 0x34], dl
        mov     edx, dword ptr [esp + 0x40]
        mov     byte ptr [eax + 0x35], cl
        mov     cl, byte ptr [esp + 0x44]
        mov     dword ptr [eax + 0x38], edx
        mov     dl, byte ptr [esp + 0x48]
        mov     byte ptr [eax + 0x3c], cl
        mov     cl, byte ptr [esp + 0x4c]
        mov     byte ptr [eax + 0x3d], dl
        mov     byte ptr [eax + 0x3e], cl
        ret     0x4c
    }
}
