/*
 * FUN_004B6820 (29 B) — Vtable thunk (__thiscall, ECX=this).
 * Loads pointer at this+0x144, then calls vtable[1](param1, param2, param3).
 * RET 0xC (three stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_004b6820(void)
{
    __asm {
        MOV EDX, dword ptr [ESP + 0xC]
        MOV ECX, dword ptr [ECX + 0x144]
        MOV EAX, dword ptr [ECX]
        PUSH EDX
        MOV EDX, dword ptr [ESP + 0xC]
        PUSH EDX
        MOV EDX, dword ptr [ESP + 0xC]
        PUSH EDX
        CALL dword ptr [EAX + 0x4]
        RET 0xC
    }
}
