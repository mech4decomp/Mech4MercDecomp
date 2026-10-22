/*
 * FUN_0061EF30 (17 B) — if (param_1) *param_1 = *param_2. __cdecl, 2 params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0061ef30(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        test    eax, eax
        jz      L_ef40
        mov     ecx, dword ptr [esp + 0x8]
        mov     edx, dword ptr [ecx]
        mov     dword ptr [eax], edx
L_ef40:
        ret
    }
}
