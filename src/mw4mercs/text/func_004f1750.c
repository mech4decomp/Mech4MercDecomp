/*
 * FUN_004F1750 (37 B) — thiscall method.
 *
 * __thiscall (ECX = this), RET 0 (void return).
 * Walks a linked list starting at this->field_18.
 * For each node, checks if node->field_0 is non-null and
 * node->field_0->field_4->[0] == 0x21E. If match, calls FUN_004F08C0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004F08C0(void);

__declspec(naked) void __fastcall FUN_004f1750(void)
{
    __asm {
        PUSH ESI
        MOV ESI, DWORD PTR [ECX + 0x18]
    l_loop:
        TEST ESI, ESI
        JZ l_end
        MOV ECX, DWORD PTR [ESI]
        TEST ECX, ECX
        MOV ESI, DWORD PTR [ESI + 4]
        JZ l_end
        MOV EAX, DWORD PTR [ECX + 4]
        CMP DWORD PTR [EAX], 0x21E
        JNZ l_loop
        CALL FUN_004F08C0
        JMP l_loop
    l_end:
        POP ESI
        RET
    }
}
