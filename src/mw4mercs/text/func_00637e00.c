/*
 * FUN_00637e00 (18 B) — __thiscall: copies *param_1 into *this, then
 * clears bit 0 of *param_1. RET 0x4 (1 param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00637e00(void)
{
    __asm {
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 0x4]
        mov     edx, dword ptr [ecx]
        mov     dword ptr [eax], edx
        and     edx, 0xfffffffe
        mov     dword ptr [ecx], edx
        ret     0x4
    }
}
