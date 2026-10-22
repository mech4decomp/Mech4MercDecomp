/*
 * FUN_004BA320 (80 B) — Compute pointers into various arrays indexed by
 * param_1. Returns 5 pointers via output params.
 *
 * __thiscall (ECX = this), RET 0x14 (5 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_004ba320(void)
{
    __asm {
        MOV     EAX, [ESP + 0x04]
        MOV     EDX, [ECX + 0x15C]
        PUSH    ESI
        MOV     ESI, [ESP + 0x18]
        ADD     EDX, EAX
        MOV     [ESI], EDX
        MOV     ESI, [ECX + 0x144]
        LEA     EDX, [EAX * 4]
        MOV     EAX, EDX
        SHL     EAX, 0x4
        ADD     ESI, EAX
        PUSH    EDI
        MOV     EDI, [ESP + 0x10]
        MOV     [EDI], ESI
        MOV     ESI, [ECX + 0x14C]
        MOV     ECX, [ECX + 0x154]
        ADD     ESI, EAX
        MOV     EAX, [ESP + 0x14]
        MOV     [EAX], ESI
        MOV     EAX, [ESP + 0x18]
        LEA     EDX, [ECX + EDX * 8]
        POP     EDI
        MOV     [EAX], EDX
        POP     ESI
        RET     0x14
    }
}
