/*
 * FUN_00694450 (15 B) - HUD helper: pushes arg2 and calls FUN_0041f270.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041f270(void);

__declspec(naked) void FUN_00694450(void *param_1)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [esp + 0x4]
        push    eax
        call    FUN_0041f270
        ret
    }
}
