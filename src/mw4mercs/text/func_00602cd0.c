/*
 * FUN_00602cd0 (30 B) — __thiscall: zeroes this->[0..4] (5 dwords) and
 * stores byte [esp+4] into this->[0x10].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00602cd0(void)
{
    __asm {
        mov     edx, dword ptr [esp + 0x4]
        mov     dl, byte ptr [edx]
        mov     eax, ecx
        xor     ecx, ecx
        mov     dword ptr [eax], ecx
        mov     dword ptr [eax + 0x8], ecx
        mov     dword ptr [eax + 0x4], ecx
        mov     byte ptr [eax + 0x10], dl
        mov     dword ptr [eax + 0xc], ecx
        mov     dword ptr [eax + 0x10], ecx
        ret     0x4
    }
}
