/*
 * FUN_004E2EE0 (50 B) - Adept::CollisionGrid cell getter (__thiscall, RET 0x8).
 *
 * Computes cell index = (byte[0x151] * (arg0 & 0xff) + (arg1 & 0xff)),
 * loads the cell pointer from the [0x17c] array, and calls
 * FUN_0041fd80() on it.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_0041fd80(void);

__declspec(naked) void __stdcall FUN_004e2ee0(void)
{
    __asm {
        MOV EDX, dword ptr [ESP + 0x4]
        XOR EAX, EAX
        MOV AL, byte ptr [ECX + 0x151]
        MOV ECX, dword ptr [ECX + 0x17c]
        AND EDX, 0xff
        IMUL EAX, EDX
        MOV EDX, dword ptr [ESP + 0x8]
        AND EDX, 0xff
        ADD EAX, EDX
        MOV ECX, dword ptr [ECX + EAX*0x4]
        CALL FUN_0041fd80
        RET 0x8
    }
}
