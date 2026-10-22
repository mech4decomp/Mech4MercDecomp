/*
 * FUN_006a8230 (17 B) — if (param_1) *param_1 = *param_2.
 * RET (no ret n).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_006a8230(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        test    eax, eax
        jz      Lret
        mov     ecx, dword ptr [esp + 0x8]
        mov     edx, dword ptr [ecx]
        mov     dword ptr [eax], edx
Lret:
        ret
    }
}
