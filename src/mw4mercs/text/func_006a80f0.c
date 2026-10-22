/*
 * FUN_006a80f0 (16 B) — if (param_1) FUN_004084e0(param_1).
 * RET (no ret n).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_006a80f0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        test    eax, eax
        jz      Lret
        push    eax
        call    FUN_004084e0
        pop     ecx
Lret:
        ret
    }
}
