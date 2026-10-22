/*
 * FUN_00492590 (17 B) — __cdecl, RET 4 (1 stack param).
 * Thunk: pushes param onto stack via local and calls FUN_00492680.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_00492680(void);

__declspec(naked) void __cdecl FUN_00492590(void)
{
    __asm {
        mov     edx, dword ptr [esp + 4]
        push    ecx
        mov     eax, esp
        mov     dword ptr [eax], edx
        call    FUN_00492680
        ret     4
    }
}
