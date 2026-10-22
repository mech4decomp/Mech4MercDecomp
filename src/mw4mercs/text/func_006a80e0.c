/*
 * FUN_006a80e0 (11 B) — __thiscall setter: *this = param_1.
 * RET 0x4 (1 param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_006a80e0(void)
{
    __asm {
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 0x4]
        mov     dword ptr [eax], ecx
        ret     0x4
    }
}
