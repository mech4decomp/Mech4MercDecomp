/*
 * FUN_006ae5e0 (46 B) — __thiscall (RET 0x10, four stack params).
 *
 * Copies a 12-byte struct from param_1 into this, then stores three
 * additional scalar fields.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_006ae5e0(void)
{
    __asm {
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 0x4]
        mov     edx, dword ptr [ecx]
        mov     dword ptr [eax], edx
        mov     edx, dword ptr [ecx + 0x4]
        mov     ecx, dword ptr [ecx + 0x8]
        mov     dword ptr [eax + 0x4], edx
        mov     edx, dword ptr [esp + 0x8]
        mov     dword ptr [eax + 0x8], ecx
        mov     cl, byte ptr [esp + 0xc]
        mov     dword ptr [eax + 0xc], edx
        mov     edx, dword ptr [esp + 0x10]
        mov     byte ptr [eax + 0x10], cl
        mov     dword ptr [eax + 0x14], edx
        ret     0x10
    }
}
