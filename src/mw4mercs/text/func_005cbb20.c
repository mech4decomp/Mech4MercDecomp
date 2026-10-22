/*
 * FUN_005cbb20 (29 B) — Copy three dwords from param_2 to param_1 if
 * param_1 is non-null.
 *
 * __cdecl, RET 0 (2 params). *param_1 = *param_2; param_1[1..2] =
 * param_2[1..2].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_005cbb20(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        test    eax, eax
        jz      l_3c
        mov     ecx, dword ptr [esp + 0x8]
        mov     edx, dword ptr [ecx]
        mov     dword ptr [eax], edx
        mov     edx, dword ptr [ecx + 0x4]
        mov     ecx, dword ptr [ecx + 0x8]
        mov     dword ptr [eax + 0x4], edx
        mov     dword ptr [eax + 0x8], ecx
l_3c:
        ret
    }
}
