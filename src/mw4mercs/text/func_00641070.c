/*
 * FUN_00641070 (18 B) — frees param_1 via FUN_004084e0 if non-null.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_004084e0(void);

__declspec(naked) void FUN_00641070(void)
{
    __asm {
        mov     eax, dword ptr [esp+0x4]
        test    eax, eax
        jz      loc_4107f
        push    eax
        call    FUN_004084e0
        pop     ecx
loc_4107f:
        ret     0x8
    }
}
