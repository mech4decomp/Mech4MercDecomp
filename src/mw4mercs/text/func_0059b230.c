/*
 * FUN_0059b230 (223 B) — Object constructor/deserializer.
 *
 * __thiscall (ECX = this), RET 4, 1 stack param (stream pointer).
 * Initializes object fields and reads data from stream.
 *
 * CFLAGS: /O1
 */

#include <stddef.h>

extern int __cdecl FUN_00415180(void *obj, void *param);
extern int __cdecl FUN_00412a00(void *dst, void *stream);

__declspec(naked) void __stdcall FUN_0059b230(void)
{
    

extern int DAT_007b8c10;
__asm {
; MOV EAX, DWORD PTR [0x7B8C10]
        mov eax, dword ptr [DAT_007b8c10]
        PUSH    EBX
        PUSH    EBP
        PUSH    ESI
        PUSH    EDI
        MOV     EDI, ECX                    ; this
        PUSH    EAX
        CALL    FUN_00415180                ; init base
        MOV     ESI, [ESP + 0x14]           ; stream param
        XOR     ECX, ECX
        LEA     EAX, [EDI + 0x10]
        MOV     [EAX], ECX
        MOV     [EDI + 0x14], ECX
        LEA     EBX, [EDI + 0x14]
        PUSH    EAX
        MOV     word ptr [EDI + 0x50], 0xFFFF
        MOV     word ptr [EDI + 0x52], CX
        PUSH    ESI
        MOV     [EDI + 8], ECX
        MOV     [EDI + 0x0C], ECX
        mov     dword ptr [EDI], 0x78383C
        CALL    FUN_00412a00
        PUSH    EBX
        PUSH    ESI
        CALL    FUN_00412a00
        MOV     EDX, [ESI]
        ADD     ESP, 0x10
        PUSH    4
        LEA     EAX, [EDI + 0x18]
        PUSH    EAX
        MOV     ECX, ESI
        CALL    DWORD PTR [EDX + 0x20]      ; stream->Read(&field18, 4)
        MOV     EDX, [ESI]
        PUSH    4
        LEA     EAX, [EDI + 0x1C]
        PUSH    EAX
        MOV     ECX, ESI
        CALL    DWORD PTR [EDX + 0x20]      ; stream->Read(&field1C, 4)
        MOV     EDX, [ESI]
        PUSH    4
        LEA     EAX, [EDI + 0x20]
        PUSH    EAX
        MOV     ECX, ESI
        CALL    DWORD PTR [EDX + 0x20]      ; stream->Read(&field20, 4)
        MOV     EDX, [ESI]
        PUSH    4
        LEA     EAX, [EDI + 0x24]
        PUSH    EAX
        MOV     ECX, ESI
        CALL    DWORD PTR [EDX + 0x20]      ; stream->Read(&field24, 4)
        MOV     EDX, [ESI]
        PUSH    4
        LEA     EAX, [EDI + 0x28]
        PUSH    EAX
        MOV     ECX, ESI
        CALL    DWORD PTR [EDX + 0x20]      ; stream->Read(&field28, 4)
        MOV     EDX, [ESI]
        PUSH    4
        LEA     EAX, [EDI + 0x2C]
        PUSH    EAX
        MOV     ECX, ESI
        CALL    DWORD PTR [EDX + 0x20]      ; stream->Read(&field2C, 4)
        MOV     EDX, [ESI]
        PUSH    4
        LEA     EAX, [EDI + 0x30]
        PUSH    EAX
        MOV     ECX, ESI
        CALL    DWORD PTR [EDX + 0x20]      ; stream->Read(&field30, 4)
        MOV     EDX, [ESI]
        PUSH    4
        LEA     EAX, [EDI + 0x34]
        PUSH    EAX
        MOV     ECX, ESI
        CALL    DWORD PTR [EDX + 0x20]      ; stream->Read(&field34, 4)
        MOV     EDX, [ESI]
        PUSH    4
        LEA     EAX, [EDI + 0x4C]
        PUSH    EAX
        MOV     ECX, ESI
        CALL    DWORD PTR [EDX + 0x20]      ; stream->Read(&field4C, 4)
        LEA     EBX, [EDI + 0x38]
        MOV     EBP, 5
    l_loop:
        MOV     EDX, [ESI]
        PUSH    4
        PUSH    EBX
        MOV     ECX, ESI
        CALL    DWORD PTR [EDX + 0x20]      ; stream->Read(ptr, 4)
        ADD     EBX, 4
        DEC     EBP
        JNE     l_loop
        MOV     EAX, EDI
        POP     EDI
        POP     ESI
        POP     EBP
        POP     EBX
        RET     4
    }


}
