/*
 * FUN_005944b0 (226 B) — Object deserializer.
 *
 * __thiscall (ECX = this), RET 4, 1 stack param (stream pointer).
 * Reads fields from stream, including arrays.
 *
 * CFLAGS: /O1
 */

#include <stddef.h>

extern int __cdecl FUN_00412a50(void *stream, void *data);

__declspec(naked) void __stdcall FUN_005944b0(void)
{
    
__asm {
PUSH    ESI
        MOV     ESI, [ESP + 8]              ; stream param
        MOV     EAX, [ESI]
        PUSH    EDI
        MOV     EDI, ECX                    ; this
        PUSH    4
        LEA     ECX, [EDI + 0x1C]
        PUSH    ECX
        MOV     ECX, ESI
        CALL    DWORD PTR [EAX + 0x24]      ; stream->Read(&field1C, 4)
        LEA     EDX, [EDI + 0x20]
        PUSH    EDX
        PUSH    ESI
        CALL    FUN_00412a50                ; read string
        LEA     EAX, [EDI + 0x24]
        PUSH    EAX
        PUSH    ESI
        CALL    FUN_00412a50                ; read string
        MOV     EDX, [ESI]
        ADD     ESP, 0x10
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
        PUSH    4
        LEA     EAX, [EDI + 0x30]
        PUSH    EAX
        MOV     ECX, ESI
        CALL    DWORD PTR [EDX + 0x24]      ; stream->Read(&field30, 4)
        MOV     EDX, [ESI]
        PUSH    4
        LEA     EAX, [ESP + 0x10]
        PUSH    EAX
        MOV     ECX, ESI
        MOV     DWORD PTR [ESP + 0x14], 0x0C
        CALL    DWORD PTR [EDX + 0x24]      ; stream->Read(&count, 4)
        MOV     EAX, [ESP + 0x0C]           ; count
        MOV     ECX, EAX
        DEC     EAX
        TEST    ECX, ECX
        MOV     [ESP + 0x0C], EAX
        JE      l_loop2_setup
        PUSH    EBX
        MOV     EBX, [EDI + 0x34]           ; array1 base
    l_loop1:
        MOV     EDX, [ESI]
        PUSH    4
        LEA     EAX, [EBX + EAX*4]          ; &array1[index]
        PUSH    EAX
        MOV     ECX, ESI
        CALL    DWORD PTR [EDX + 0x24]      ; stream->Read(&array1[i], 4)
        MOV     EAX, [ESP + 0x10]           ; reload count
        MOV     ECX, EAX
        DEC     EAX
        TEST    ECX, ECX
        MOV     [ESP + 0x10], EAX
        JNE     l_loop1
        POP     EBX
    l_loop2_setup:
        MOV     EDX, [ESI]
        PUSH    4
        LEA     EAX, [ESP + 0x10]
        PUSH    EAX
        MOV     ECX, ESI
        MOV     DWORD PTR [ESP + 0x14], 0x0C
        CALL    DWORD PTR [EDX + 0x24]      ; stream->Read(&count2, 4)
        MOV     EAX, [ESP + 0x0C]           ; count2
        MOV     ECX, EAX
        DEC     EAX
        TEST    ECX, ECX
        MOV     [ESP + 0x0C], EAX
        JE      l_done
        MOV     EDI, [EDI + 0x38]           ; array2 base
    l_loop2:
        MOV     EDX, [ESI]
        PUSH    4
        LEA     EAX, [EDI + EAX*4]          ; &array2[index]
        PUSH    EAX
        MOV     ECX, ESI
        CALL    DWORD PTR [EDX + 0x24]      ; stream->Read(&array2[i], 4)
        MOV     EAX, [ESP + 0x0C]           ; reload count
        MOV     ECX, EAX
        DEC     EAX
        TEST    ECX, ECX
        MOV     [ESP + 0x0C], EAX
        JNE     l_loop2
    l_done:
        POP     EDI
        POP     ESI
        RET     4
    }


}
