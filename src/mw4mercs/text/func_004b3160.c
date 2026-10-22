/*
 * FUN_004B3160 (82 B) — Loop over array at this->field_174, calling
 * FUN_004C1A10 or FUN_004C1950 depending on a flag bit in this->field_18.
 * Returns 1 if all pass, 0 if any fails.
 *
 * __fastcall (ECX = this), returns AL.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char __cdecl FUN_004c1a10(int a, void *b);
extern char __cdecl FUN_004c1950(void);

__declspec(naked) char FUN_004b3160(void)
{
    __asm {
        PUSH    EBX
        PUSH    ESI
        MOV     ESI, ECX
        MOV     EBX, [ESI + 0x178]
        PUSH    EDI
        XOR     EDI, EDI
        TEST    EBX, EBX
        JLE     l_all_pass
    l_loop:
        MOV     EAX, [ESI + 0x18]
        MOV     EDX, [ESI + 0x174]
        SHR     EAX, 0x5
        NOT     AL
        LEA     ECX, [ESI + 0xB0]
        TEST    AL, 0x01
        MOV     EAX, [EDX + EDI * 4]
        PUSH    ECX
        PUSH    EAX
        JZ      l_call_a10
        CALL    FUN_004c1950
        JMP     l_check
    l_call_a10:
        CALL    FUN_004c1a10
    l_check:
        ADD     ESP, 0x08
        TEST    AL, AL
        JZ      l_fail
        INC     EDI
        CMP     EDI, EBX
        JL      l_loop
    l_all_pass:
        POP     EDI
        POP     ESI
        MOV     AL, 0x01
        POP     EBX
        RET
    l_fail:
        POP     EDI
        POP     ESI
        XOR     AL, AL
        POP     EBX
        RET
    }
}
