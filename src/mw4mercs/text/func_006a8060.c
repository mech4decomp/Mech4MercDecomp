/*
 * FUN_006a8060 (14 B) — __thiscall accessor: returns *(*(this)+8) via out-param.
 * RET 0x4 (1 param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_006a8060(void)
{
    __asm {
        mov     eax, dword ptr [ecx]
        mov     ecx, dword ptr [eax + 0x8]
        mov     eax, dword ptr [esp + 0x4]
        mov     dword ptr [eax], ecx
        ret     0x4
    }
}
