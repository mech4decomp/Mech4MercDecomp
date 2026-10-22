/*
 * FUN_006595d0 (14 B) — ABL tree-node helper (__thiscall): writes
 * *(this->0) + 8 into the out-param. RET 4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_006595d0(void)
{
    __asm {
        mov     eax, dword ptr [ecx]
        mov     ecx, dword ptr [eax+8]
        mov     eax, dword ptr [esp+4]
        mov     dword ptr [eax], ecx
        ret     4
    }
}
