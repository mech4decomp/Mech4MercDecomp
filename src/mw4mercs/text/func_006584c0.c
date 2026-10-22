/*
 * FUN_006584c0 (13 B) — ABL tree-node copy. __thiscall, RET 0x4.
 *
 * Copies the source node's first field into this node.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_006584c0(void)
{
    __asm {
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 0x4]
        mov     edx, dword ptr [ecx]
        mov     dword ptr [eax], edx
        ret     0x4
    }
}
