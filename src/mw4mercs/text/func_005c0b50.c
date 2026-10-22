/*
 * FUN_005c0b50 (11 B) — __thiscall copy: *param_1 = *this.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_005c0b50(void *param)
{
    __asm {
        mov     ecx, dword ptr [ecx]
        mov     eax, dword ptr [esp + 0x4]
        mov     dword ptr [eax], ecx
        ret     4
    }
}
