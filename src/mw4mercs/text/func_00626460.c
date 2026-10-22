/*
 * FUN_00626460 (13 B) — __thiscall: *param_1 = **this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00626460(void)
{
    __asm {
        mov     eax, dword ptr [ecx]
        mov     ecx, dword ptr [eax]
        mov     eax, dword ptr [esp + 0x4]
        mov     dword ptr [eax], ecx
        ret     0x4
    }
}
