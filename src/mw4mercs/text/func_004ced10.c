/*
 * FUN_004CED10 (27 B) — __thiscall bit setter.
 * Sets bit (param_1 & 7) at byte offset (param_1 >> 3) + 0x48 in this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_004ced10(void)
{
    __asm {
        PUSH ESI
        MOV ESI, ECX
        MOV ECX, dword ptr [ESP + 0x8]
        MOV EAX, ECX
        AND ECX, 0x7
        MOV DL, 0x1
        SHL DL, CL
        SAR EAX, 0x3
        OR byte ptr [EAX + ESI + 0x48], DL
        POP ESI
        RET 0x4
    }
}
