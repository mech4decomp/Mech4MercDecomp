/*
 * FUN_0059f840 (230 B) — Object deserializer with iterator.
 *
 * __thiscall (ECX = this), RET 4, 1 stack param (stream pointer).
 * Reads fields from stream, then iterates a sub-structure
 * reading arrays of data.
 *
 * CFLAGS: /O1
 */

#include <stddef.h>

extern int __cdecl FUN_00416bc0(void *dst, void *src);
extern void *__cdecl FUN_00416cc0(void *iter);
extern void __cdecl FUN_00416c60(void *iter);
extern int __cdecl FUN_00412a50(void *stream, void *data);

__declspec(naked) void __stdcall FUN_0059f840(void)
{
    
__asm {
SUB     ESP, 0x14
        PUSH    ESI
        MOV     ESI, [ESP + 0x1C]           ; stream param
        MOV     EAX, [ESI]
        PUSH    EDI
        MOV     EDI, ECX                    ; this
        PUSH    4
        LEA     ECX, [EDI + 0x1C]
        PUSH    ECX
        MOV     ECX, ESI
        CALL    DWORD PTR [EAX + 0x24]      ; stream->Read(&field1C, 4)
        MOV     EDX, [ESI]
        PUSH    4
        LEA     EAX, [EDI + 0x20]
        PUSH    EAX
        MOV     ECX, ESI
        CALL    DWORD PTR [EDX + 0x24]      ; stream->Read(&field20, 4)
        MOV     EDX, [ESI]
        PUSH    4
        LEA     EAX, [EDI + 0x24]
        PUSH    EAX
        MOV     ECX, ESI
        CALL    DWORD PTR [EDX + 0x24]      ; stream->Read(&field24, 4)
        MOV     EDX, [ESI]
        PUSH    4
        LEA     EAX, [EDI + 0x28]
        PUSH    EAX
        MOV     ECX, ESI
        CALL    DWORD PTR [EDX + 0x24]      ; stream->Read(&field28, 4)
        MOV     EDX, [ESI]
        PUSH    4
        LEA     EAX, [EDI + 0x2C]
        PUSH    EAX
        MOV     ECX, ESI
        CALL    DWORD PTR [EDX + 0x24]      ; stream->Read(&field2C, 4)
        MOV     EDX, [ESI]
        PUSH    1
        LEA     EAX, [EDI + 0x30]
        PUSH    EAX
        MOV     ECX, ESI
        CALL    DWORD PTR [EDX + 0x24]      ; stream->Read(&field30, 1)
        LEA     ECX, [EDI + 0x34]
        PUSH    ECX
        LEA     ECX, [ESP + 0x0C]
        CALL    FUN_00416bc0                ; init iterator
        MOV     EDX, [ESI]
        PUSH    4
        ADD     EDI, 0x50
        PUSH    EDI
        MOV     ECX, ESI
        MOV     DWORD PTR [ESP + 0x10], 0x0077A3CC
        CALL    DWORD PTR [EDX + 0x24]      ; stream->Read(&tag, 4)
        LEA     ECX, [ESP + 8]
        CALL    FUN_00416cc0                ; iterator next
        MOV     EDI, EAX
        TEST    EDI, EDI
        JE      l_cleanup
        PUSH    EBX
        PUSH    EBP
    l_outer_loop:
        MOV     EAX, [EDI + 0x1C]           ; count
        XOR     EBX, EBX
        TEST    EAX, EAX
        JLE     l_next_iter
        LEA     EBP, [EDI + 0x14]           ; data ptr
    l_inner_loop:
        MOV     EAX, [ESI]
        PUSH    4
        PUSH    EBP
        MOV     ECX, ESI
        CALL    DWORD PTR [EAX + 0x24]      ; stream->Read(&data, 4)
        MOV     EDX, [ESI]
        PUSH    4
        LEA     EAX, [EDI + 0x18]
        PUSH    EAX
        MOV     ECX, ESI
        CALL    DWORD PTR [EDX + 0x24]      ; stream->Read(&field18, 4)
        LEA     EAX, [EDI + 0x20]
        PUSH    EAX
        PUSH    ESI
        CALL    FUN_00412a50                ; read string
        MOV     EAX, [EDI + 0x1C]           ; reload count
        ADD     ESP, 8
        INC     EBX
        CMP     EBX, EAX
        JL      l_inner_loop
    l_next_iter:
        LEA     ECX, [ESP + 0x10]
        CALL    FUN_00416cc0                ; iterator next
        MOV     EDI, EAX
        TEST    EDI, EDI
        JNE     l_outer_loop
        POP     EBP
        POP     EBX
    l_cleanup:
        LEA     ECX, [ESP + 8]
        CALL    FUN_00416c60                ; cleanup iterator
        POP     EDI
        POP     ESI
        ADD     ESP, 0x14
        RET     4
    }


}
