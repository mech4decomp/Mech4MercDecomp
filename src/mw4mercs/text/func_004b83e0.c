/*
 * FUN_004B83E0 (54 B) — __thiscall constructor-like method.
 * Calls FUN_00491280(), then if param_2 > 3, calls FUN_00421E60(param_1).
 * Sets this+0x18 = 0, calls FUN_00491440(param_1, param_2).
 * Returns this. RET 0x8 (2 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00491280(void);
extern int __cdecl FUN_00421e60(int param_1);
extern void __cdecl FUN_00491440(int param_1, int param_2);

__declspec(naked) void __stdcall FUN_004b83e0(void)
{
    __asm {
        PUSH ESI
        PUSH EDI
        MOV ESI, ECX
        CALL FUN_00491280
        MOV EAX, dword ptr [ESP + 0x10]
        CMP EAX, 0x3
        MOV EDI, dword ptr [ESP + 0xC]
        JLE l_skip_call
        PUSH EDI
        CALL FUN_00421e60
        ADD ESP, 0x4
    l_skip_call:
        PUSH EAX
        PUSH EDI
        MOV ECX, ESI
        MOV dword ptr [ESI + 0x18], 0x0
        CALL FUN_00491440
        POP EDI
        MOV EAX, ESI
        POP ESI
        RET 0x8
    }
}
