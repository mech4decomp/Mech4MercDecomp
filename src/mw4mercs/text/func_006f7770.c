/*
 * FUN_006F7770 (29 B) — Conditional call based on index result.
 *
 * __thiscall (ECX = this), RET 4, 1 stack param.
 * Calls FUN_006F8560(param). If result >= 0, calls FUN_006F8520(result).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_006f8560(int param);
extern void __fastcall FUN_006f8520(int index);

__declspec(naked) void __stdcall FUN_006f7770(void)
{
    __asm {
        MOV EAX, dword ptr [ESP + 0x4]
        PUSH ESI
        MOV ESI, ECX
        PUSH EAX
        CALL FUN_006f8560
        TEST EAX, EAX
        JL l_done
        PUSH EAX
        MOV ECX, ESI
        CALL FUN_006f8520
    l_done:
        POP ESI
        RET 0x4
    }
}
