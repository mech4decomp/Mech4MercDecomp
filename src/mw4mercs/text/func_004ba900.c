/*
 * FUN_004BA900 (90 B) — Allocate 0x194 bytes, call virtual method at
 * vtable+0x20 to read param, call FUN_006F4950, then FUN_004BA600.
 * Returns result or 0 on alloc failure.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(int size);
extern void __cdecl FUN_006f4950(int param);
extern void __cdecl FUN_006f49a0(void);
extern int __cdecl FUN_004ba600(void *a, void *b, void *c, int d);

__declspec(naked) int FUN_004ba900(void)
{
    __asm {
        PUSH    ESI
        MOV     ESI, [ESP + 0x08]
        MOV     EAX, [ESI]
        PUSH    0x04
        LEA     ECX, [ESP + 0x0C]
        PUSH    ECX
        MOV     ECX, ESI
        _emit   0xFF
        _emit   0x50
        _emit   0x20
        _emit   0x8B
        _emit   0x15
        _emit   0x50
        _emit   0xAA
        _emit   0x7D
        _emit   0x00
        PUSH    EDX
        CALL    FUN_006f4950
        PUSH    0x194
        CALL    FUN_004084d0
        ADD     ESP, 0x04
        TEST    EAX, EAX
        JZ      l_fail
        MOV     ECX, [ESP + 0x10]
        MOV     EDX, [ESP + 0x0C]
        PUSH    0x00
        PUSH    ECX
        PUSH    EDX
        PUSH    ESI
        MOV     ECX, EAX
        CALL    FUN_004ba600
        MOV     ESI, EAX
        CALL    FUN_006f49a0
        MOV     EAX, ESI
        POP     ESI
        RET
    l_fail:
        XOR     ESI, ESI
        CALL    FUN_006f49a0
        MOV     EAX, ESI
        POP     ESI
        RET
    }
}
