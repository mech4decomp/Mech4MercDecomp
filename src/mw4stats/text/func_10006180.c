/*
 * FUN_10006180 (11 B) - __thiscall setter: this[0] = param_1. RET 0x4.
 *
 * __fastcall (ECX = this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_10006180(void)
{
    __asm {
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 0x4]
        mov     dword ptr [eax], ecx
        ret     0x4
    }
}
