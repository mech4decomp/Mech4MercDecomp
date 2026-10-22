/*
 * FUN_006a6600 (39 B) — __thiscall constructor, RET 0x10 (4 params).
 *
 * Stores 4 dword params into this+0x4..0x10, then sets vtable
 * 0x799e44 at this+0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_006a6600(void)
{
    __asm {
        mov     edx, dword ptr [esp + 0xc]
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 0x8]
        mov     dword ptr [eax + 0x4], ecx
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [eax + 0x8], edx
        mov     edx, dword ptr [esp + 0x4]
        mov     dword ptr [eax + 0xc], ecx
        mov     dword ptr [eax + 0x10], edx
        mov     dword ptr [eax], 0x799e44
        ret     0x10
    }
}
