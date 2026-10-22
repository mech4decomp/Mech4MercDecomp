/*
 * FUN_006583e0 (11 B) — ABL tree-node getter. __thiscall, RET 0x4.
 *
 * Copies the node's first field into the caller's out-pointer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_006583e0(void)
{
    __asm {
        mov     ecx, dword ptr [ecx]
        mov     eax, dword ptr [esp + 0x4]
        mov     dword ptr [eax], ecx
        ret     0x4
    }
}
