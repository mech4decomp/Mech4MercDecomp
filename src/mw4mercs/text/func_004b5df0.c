/*
 * FUN_004B5DF0 (74 B) — Copy fields from param_1 into this->field_10
 * struct, then call FUN_00490600(param_1 + 3).
 *
 * __thiscall (ECX = this), RET 0x4 (1 stack param).
 * Copies: param_1[0..2] -> dest[0xc,0x10,0x14], param_1[0xf] -> dest[0x8].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00490600(void *ptr);

__declspec(naked) void FUN_004b5df0(void)
{
    __asm {
        SUB     ESP, 0x0C
        MOV     EAX, [ESP + 0x10]
        MOV     ECX, [ECX + 0x10]
        _emit   0xD9
        _emit   0x40
        _emit   0x3C
        PUSH    ESI
        MOV     EDX, EAX
        MOV     ESI, [EDX]
        MOV     [ESP + 0x04], ESI
        MOV     ESI, [EDX + 0x04]
        MOV     EDX, [EDX + 0x08]
        MOV     [ESP + 0x0C], EDX
        MOV     EDX, [ESP + 0x04]
        MOV     [ECX + 0x0C], EDX
        MOV     EDX, ESI
        MOV     [ECX + 0x10], EDX
        MOV     EDX, [ESP + 0x0C]
        ADD     EAX, 0x0C
        _emit   0xD9
        _emit   0x59
        _emit   0x08
        PUSH    EAX
        MOV     [ESP + 0x0C], ESI
        MOV     [ECX + 0x14], EDX
        CALL    FUN_00490600
        POP     ESI
        ADD     ESP, 0x0C
        RET     0x04
    }
}
