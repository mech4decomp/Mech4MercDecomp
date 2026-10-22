/*
 * FUN_004BC780 (54 B) — __thiscall method.
 * Reads two dwords from param_3, writes them into array at this+0x154
 * indexed by (param_1 & 0xffff) * 8. Then calls FUN_004BF380(param_1, param_2).
 * RET 0xC (3 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004bf380(unsigned int param_1, int param_2);

__declspec(naked) void __stdcall FUN_004bc780(void)
{
    __asm {
        MOV EAX, dword ptr [ESP + 0x4]
        MOV EDX, dword ptr [ESP + 0xC]
        PUSH EBX
        MOV EBX, dword ptr [EDX]
        MOV EDX, dword ptr [EDX + 0x4]
        PUSH ESI
        PUSH EDI
        MOV EDI, dword ptr [ECX + 0x154]
        MOV ESI, EAX
        AND ESI, 0xFFFF
        MOV dword ptr [EDI + ESI*0x8], EBX
        MOV dword ptr [EDI + ESI*0x8 + 0x4], EDX
        MOV EDX, dword ptr [ESP + 0x14]
        PUSH EDX
        PUSH EAX
        CALL FUN_004bf380
        POP EDI
        POP ESI
        POP EBX
        RET 0xC
    }
}
