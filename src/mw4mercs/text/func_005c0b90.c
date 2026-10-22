/*
 * FUN_005c0b90 (13 B) — __thiscall copy: *this = *param.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_005c0b90(void *param)
{
    __asm {
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 0x4]
        mov     edx, dword ptr [ecx]
        mov     dword ptr [eax], edx
        ret     4
    }
}
