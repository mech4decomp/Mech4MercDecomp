/*
 * FUN_004E2E90 (66 B) - Adept::CollisionGrid cell setter (__thiscall, RET 0xc).
 *
 * Computes cell index = (byte[0x151] * (arg0 & 0xff) + (arg1 & 0xff)),
 * stores arg2 into the [0x144] array at that index, and calls
 * FUN_0041fcd0(arg2).
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_0041fcd0(void);

__declspec(naked) void __stdcall FUN_004e2e90(void)
{
    __asm {
        MOV EDX, dword ptr [ESP + 0x4]
        XOR EAX, EAX
        MOV AL, byte ptr [ECX + 0x151]
        AND EDX, 0xff
        PUSH ESI
        MOV ESI, dword ptr [ECX + 0x144]
        MOV ECX, dword ptr [ECX + 0x17c]
        IMUL EAX, EDX
        MOV EDX, dword ptr [ESP + 0xc]
        AND EDX, 0xff
        ADD EAX, EDX
        MOV EDX, dword ptr [ESP + 0x10]
        MOV ECX, dword ptr [ECX + EAX*0x4]
        PUSH EDX
        MOV dword ptr [ESI + EAX*0x4], EDX
        CALL FUN_0041fcd0
        POP ESI
        RET 0xc
    }
}
