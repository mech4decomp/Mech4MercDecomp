/*
 * FUN_004E2E10 (124 B) - Adept::CollisionGrid destructor (__thiscall).
 *
 * Sets vtable 0x773ea8, iterates cell array [0x17c] (count [0x148])
 * calling virtual dtor on each non-null cell, frees the array via
 * FUN_004084e0, zeroes the [0x144] buffer, then calls FUN_00417980 x3
 * and FUN_004b6b20.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00417980(void);
extern void __cdecl FUN_004b6b20(void);

__declspec(naked) void __stdcall FUN_004e2e10(void)
{
    __asm {
        PUSH EBX
        PUSH ESI
        MOV ESI, ECX
        MOV dword ptr [ESI], 0x773ea8
        MOV EBX, dword ptr [ESI + 0x148]
        TEST EBX, EBX
        PUSH EDI
        JBE l_skip1
        MOV EDI, dword ptr [ESI + 0x17c]
        PUSH EBP
        MOV EBP, EBX
    l_loop:
        MOV ECX, dword ptr [EDI]
        TEST ECX, ECX
        JZ l_skipcall
        MOV EAX, dword ptr [ECX]
        PUSH 0x1
        CALL dword ptr [EAX]
    l_skipcall:
        ADD EDI, 0x4
        DEC EBP
        JNZ l_loop
        POP EBP
    l_skip1:
        MOV ECX, dword ptr [ESI + 0x17c]
        PUSH ECX
        CALL FUN_004084e0
        ADD ESP, 0x4
        TEST EBX, EBX
        JBE l_skip2
        MOV EDI, dword ptr [ESI + 0x144]
        MOV ECX, EBX
        XOR EAX, EAX
        REP STOSD
    l_skip2:
        LEA ECX, [ESI + 0x174]
        CALL FUN_00417980
        LEA ECX, [ESI + 0x16c]
        CALL FUN_00417980
        LEA ECX, [ESI + 0x164]
        CALL FUN_00417980
        MOV ECX, ESI
        CALL FUN_004b6b20
        POP EDI
        POP ESI
        POP EBX
        RET
    }
}
