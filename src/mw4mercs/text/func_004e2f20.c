/*
 * FUN_004E2F20 (26 B) — Array-indexed method dispatcher.
 *
 * __thiscall (ECX = this), RET 4, 1 stack param (index).
 * Loads array base from [this+0x17C], masks index to 16 bits,
 * indexes into array of pointers, calls FUN_0041FD80.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041fd80(void);

__declspec(naked) void __stdcall FUN_004e2f20(void)
{
    __asm {
        MOV  EAX, [ESP + 0x4]
        MOV  ECX, [ECX + 0x17C]
        AND  EAX, 0xFFFF
        MOV  ECX, [ECX + EAX * 4]
        CALL FUN_0041fd80
        RET  0x4
    }
}
