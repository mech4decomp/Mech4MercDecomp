/*
 * FUN_005fc130 (18 B) — RET 8. Frees param_1 if non-null.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_005fc130(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        test    eax, eax
        jz      loc_5fc13f
        push    eax
        call    FUN_004084e0
        pop     ecx
loc_5fc13f:
        ret     0x8
    }
}
