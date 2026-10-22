/*
 * FUN_00648590 (14 B) — __thiscall tree node helper (RET 0x4). Returns the
 * node's right child (offset +8) via *param_1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00648590(void)
{
    __asm {
        mov     eax, dword ptr [ecx]
        mov     ecx, dword ptr [eax + 0x8]
        mov     eax, dword ptr [esp + 0x4]
        mov     dword ptr [eax], ecx
        ret     0x4
    }
}
