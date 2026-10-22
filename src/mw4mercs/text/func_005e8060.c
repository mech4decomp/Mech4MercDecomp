/*
 * FUN_005E8060 (27 B) — __cdecl, RET 0xc (3 params).
 * Clamps *param1 into [param2, param3].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_005e8060(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 0x4]
        mov     eax, dword ptr [ecx]
        mov     edx, dword ptr [esp + 0x8]
        cmp     eax, edx
        jl      L_5e8076
        mov     edx, dword ptr [esp + 0xc]
        cmp     eax, edx
        jle     L_5e8078
L_5e8076:
        mov     dword ptr [ecx], edx
L_5e8078:
        ret     0xc
    }
}
