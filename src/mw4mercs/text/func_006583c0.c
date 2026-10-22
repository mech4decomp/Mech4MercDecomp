/*
 * FUN_006583c0 (24 B) — ABL tree-node constructor. __thiscall, RET 0x4.
 *
 * Identical body to FUN_00658390: initializes a node from a source byte.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_006583c0(void)
{
    __asm {
        mov     edx, dword ptr [esp + 0x4]
        mov     dl, byte ptr [edx]
        mov     eax, ecx
        xor     ecx, ecx
        mov     dword ptr [eax], ecx
        mov     byte ptr [eax + 0x8], dl
        mov     dword ptr [eax + 0x4], ecx
        mov     dword ptr [eax + 0x8], ecx
        ret     0x4
    }
}
