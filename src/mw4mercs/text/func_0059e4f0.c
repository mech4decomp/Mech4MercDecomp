/*
 * FUN_0059e4f0 (196 B) — Serialization method.
 *
 * __thiscall (ECX = this), RET 4, 1 stack param (stream pointer).
 * Iterates linked list at this+0x24, writes data via stream vtable,
 * then iterates a secondary list via iterator pattern.
 *
 * CFLAGS: /O1
 */

#include <stddef.h>

/* External callees */
extern int __cdecl FUN_00417a40(void *ptr);
extern int __cdecl FUN_00416bc0(void *dst, void *src);
extern void *__cdecl FUN_00416cc0(void *iter);
extern void __cdecl FUN_00416c60(void *iter);
extern int __cdecl FUN_00412a50(void *stream, void *data);
extern int __cdecl FUN_0059de20(void *stream, void *node);

__declspec(naked) void __stdcall FUN_0059e4f0(void)
{
    
__asm {
SUB     ESP, 0x18
        PUSH    EBX
        MOV     EBX, ECX                    ; this
        PUSH    ESI
        LEA     ECX, [EBX + 0x24]           ; &this->list_head
        PUSH    EDI
        MOV     EDI, [ECX]                  ; list_head->next
        CALL    FUN_00417a40                ; count nodes
        MOV     ESI, [ESP + 0x28]           ; stream param
        PUSH    4
        LEA     ECX, [ESP + 0x10]
        MOV     [ESP + 0x10], EAX           ; store count
        MOV     EAX, [ESI]
        PUSH    ECX
        MOV     ECX, ESI
        CALL    DWORD PTR [EAX + 0x24]      ; stream->Write(&count, 4)
    l_list1_loop:
        TEST    EDI, EDI
        JZ      l_skip_list1
        MOV     ECX, [EDI]
        TEST    ECX, ECX
        MOV     EDI, [EDI + 4]
        JZ      l_skip_list1
        PUSH    ESI
        CALL    FUN_0059de20                ; write node data
        JMP     l_list1_loop
    l_skip_list1:
        LEA     EDX, [EBX + 0x10]           ; &this->field_10
        PUSH    EDX
        LEA     ECX, [ESP + 0x14]
        CALL    FUN_00416bc0                ; init iterator
        MOV     EAX, [ESI]
        PUSH    4
        ADD     EBX, 0x2C                   ; &this->field_2C
        PUSH    EBX
        MOV     ECX, ESI
        MOV     DWORD PTR [ESP + 0x18], 0x00783958   ; stream->Write(&tag, 4)
        CALL    DWORD PTR [EAX + 0x24]      ; stream->Write(&tag, 4)
        LEA     ECX, [ESP + 0x10]
        CALL    FUN_00416cc0                ; iterator next
        MOV     EDI, EAX
        TEST    EDI, EDI
        JZ      l_cleanup
        PUSH    EBP
    l_list2_loop:
        MOV     EAX, [EDI + 0x18]           ; count
        XOR     EBX, EBX
        TEST    EAX, EAX
        JLE     l_next_iter
        LEA     EBP, [EDI + 0x10]           ; data ptr
    l_inner_loop:
        MOV     ECX, [EDI + 0x14]           ; value
        MOV     EDX, [ESI]
        PUSH    4
        LEA     EAX, [ESP + 0x30]
        MOV     [ESP + 0x30], ECX
        PUSH    EAX
        MOV     ECX, ESI
        CALL    DWORD PTR [EDX + 0x24]      ; stream->Write(&val, 4)
        PUSH    EBP
        PUSH    ESI
        CALL    FUN_00412a50                ; write string
        MOV     EAX, [EDI + 0x18]           ; reload count
        ADD     ESP, 8
        INC     EBX
        CMP     EBX, EAX
        JL      l_inner_loop
    l_next_iter:
        LEA     ECX, [ESP + 0x14]
        CALL    FUN_00416cc0                ; iterator next
        MOV     EDI, EAX
        TEST    EDI, EDI
        JNZ     l_list2_loop
        POP     EBP
    l_cleanup:
        LEA     ECX, [ESP + 0x10]
        CALL    FUN_00416c60                ; cleanup iterator
        POP     EDI
        POP     ESI
        POP     EBX
        ADD     ESP, 0x18
        RET     4
    }


}
