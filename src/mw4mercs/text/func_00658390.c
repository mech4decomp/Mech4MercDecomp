/*
 * FUN_00658390 (24 B) — ABL tree-node constructor. __thiscall, RET 0x4.
 *
 * Initializes a node from a source byte: zeroes fields 0/4/8, stores the
 * source byte at +8 (then overwritten by the dword zero at +8).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00658390(void)
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
