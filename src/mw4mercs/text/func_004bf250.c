/*
 * FUN_004BF250 (83 B) — Destructor-like function. Sets vtable pointer,
 * iterates array calling virtual method 0 on each non-null entry,
 * frees the array, then calls FUN_004C68F0.
 *
 * __fastcall (ECX = this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *ptr);
extern void __cdecl FUN_004c68f0(void);

__declspec(naked) void FUN_004bf250(void)
{
    __asm {
        PUSH    EDI
        MOV     EDI, ECX
        MOV     DWORD PTR [EDI], 0x771454
        MOV     EAX, [EDI + 0x148]
        TEST    AX, AX
        JBE     l_free_array
        PUSH    EBX
        AND     EAX, 0xFFFF
        PUSH    ESI
        MOV     ESI, [EDI + 0x144]
        MOV     EBX, EAX
    l_loop:
        MOV     ECX, [ESI]
        TEST    ECX, ECX
        JZ      l_skip
        MOV     EAX, [ECX]
        PUSH    0x01
        _emit   0xFF
        _emit   0x10
    l_skip:
        ADD     ESI, 0x04
        DEC     EBX
        JNZ     l_loop
        POP     ESI
        POP     EBX
    l_free_array:
        MOV     EAX, [EDI + 0x144]
        TEST    EAX, EAX
        JZ      l_call_cleanup
        PUSH    EAX
        CALL    FUN_004084e0
        ADD     ESP, 0x04
    l_call_cleanup:
        MOV     ECX, EDI
        CALL    FUN_004c68f0
        POP     EDI
        RET
    }
}
