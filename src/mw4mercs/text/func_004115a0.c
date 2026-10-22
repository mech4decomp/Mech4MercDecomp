/*
 * FUN_004115a0 (14 B) — __thiscall getter: returns the dword at
 * [*this + 8] into the caller's out-param.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_004115a0(void)
{
    __asm {
        mov     eax, dword ptr [ecx]
        mov     ecx, dword ptr [eax + 8]
        mov     eax, dword ptr [esp + 4]
        mov     dword ptr [eax], ecx
        ret     4
    }
}
