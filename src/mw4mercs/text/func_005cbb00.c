/*
 * FUN_005cbb00 (17 B) — Copy one dword from param_2 to param_1 if
 * param_1 is non-null.
 *
 * __cdecl, RET 0 (2 params). *param_1 = *param_2.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_005cbb00(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        test    eax, eax
        jz      l_10
        mov     ecx, dword ptr [esp + 0x8]
        mov     edx, dword ptr [ecx]
        mov     dword ptr [eax], edx
l_10:
        ret
    }
}
