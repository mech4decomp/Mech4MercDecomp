/*
 * FUN_00694460 (15 B) - HUD helper: pushes &arg2 and calls FUN_0041f210.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041f210(void);

__declspec(naked) void FUN_00694460(void *param_1)
{
    __asm {
        mov     ecx, dword ptr [esp + 0x4]
        lea     eax, [esp + 0x8]
        push    eax
        call    FUN_0041f210
        ret
    }
}
