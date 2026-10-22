/*
 * FUN_004FD360 (30 B) — Conditional lookup + thiscall dispatch.
 *
 * __stdcall, RET 8, 2 stack params.
 * Calls FUN_004FCC00(param_1) to look up an object.
 * If result is non-null, calls FUN_00412780(this=result+0x10, param_2).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void * __cdecl FUN_004fcc00(int param_1);
extern void __cdecl FUN_00412780(void);

__declspec(naked) void __stdcall FUN_004fd360(void)
{
    __asm {
        MOV EAX, dword ptr [ESP + 0x4]
        PUSH EAX
        CALL FUN_004fcc00
        TEST EAX, EAX
        JZ l_skip
        MOV ECX, dword ptr [ESP + 0x8]
        PUSH ECX
        LEA ECX, [EAX + 0x10]
        CALL FUN_00412780
    l_skip:
        RET 0x8
    }
}
