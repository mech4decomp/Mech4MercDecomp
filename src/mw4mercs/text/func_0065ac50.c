/*
 * FUN_0065ac50 (39 B) — __thiscall constructor.
 *
 * Stores 4 params into this+0x4..0x10 (one byte at +0x10), then sets
 * vtable pointer 0x794aa0 at this+0x0. RET 0x10 (4 dword params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_0065ac50(void)
{
    __asm {
        mov     edx, dword ptr [esp + 0x8]
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 0x4]
        mov     dword ptr [eax + 0x4], ecx
        mov     ecx, dword ptr [esp + 0xc]
        mov     dword ptr [eax + 0x8], edx
        mov     dl, byte ptr [esp + 0x10]
        mov     dword ptr [eax + 0xc], ecx
        mov     byte ptr [eax + 0x10], dl
        mov     dword ptr [eax], 0x794aa0
        ret     0x10
    }
}
