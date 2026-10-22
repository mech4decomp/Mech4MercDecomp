/*
 * FUN_00619d30 (16 B) — __cdecl: frees arg if non-NULL (calls FUN_004084e0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_00619d30(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        test    eax, eax
        jz      L_619d3f
        push    eax
        call    FUN_004084e0
        pop     ecx
    L_619d3f:
        ret
    }
}
