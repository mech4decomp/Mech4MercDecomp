/*
 * FUN_005b8a20 (16 B) — RET (one stack param, no cleanup).
 *
 * Frees param_1 via FUN_004084e0 if non-null.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_004084e0(void);

__declspec(naked) void __fastcall FUN_005b8a20(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        test    eax, eax
        jz      L_8a2f
        push    eax
        call    FUN_004084e0
        pop     ecx
    L_8a2f:
        ret
    }
}
