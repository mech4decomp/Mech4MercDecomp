/*
 * FUN_10007d70 (18 B) - __thiscall, RET 0x4.
 * this[0] = param_1; this[1] = 0.
 *
 * __thiscall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_10007d70(void)
{
    __asm {
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 4]
        mov     dword ptr [eax], ecx
        mov     dword ptr [eax + 4], 0
        ret     4
    }
}
