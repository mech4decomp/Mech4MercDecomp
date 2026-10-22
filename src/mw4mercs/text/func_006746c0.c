/*
 * FUN_006746c0 (24 B) — __thiscall ctor-ish: zeroes [this+0..8] and
 * stores a byte from arg into [this+8].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_006746c0(void)
{
    __asm {
        mov     edx, dword ptr [esp+0x4]
        mov     dl, byte ptr [edx]
        mov     eax, ecx
        xor     ecx, ecx
        mov     dword ptr [eax], ecx
        mov     byte ptr [eax+0x8], dl
        mov     dword ptr [eax+0x4], ecx
        mov     dword ptr [eax+0x8], ecx
        ret     0x4
    }
}
