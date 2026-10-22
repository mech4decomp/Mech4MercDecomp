/*
 * FUN_00658500 (22 B) — ABL tree-node copy. __thiscall, RET 0x8.
 *
 * Copies a dword from source node + a byte from a second source into this
 * node (fields 0 and 4).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00658500(void)
{
    __asm {
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 0x4]
        mov     edx, dword ptr [ecx]
        mov     ecx, dword ptr [esp + 0x8]
        mov     dword ptr [eax], edx
        mov     dl, byte ptr [ecx]
        mov     byte ptr [eax + 0x4], dl
        ret     0x8
    }
}
