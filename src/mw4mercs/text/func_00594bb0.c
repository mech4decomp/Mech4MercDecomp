/*
 * FUN_00594bb0 (211 B) — Serialize multiple linked lists.
 *
 * __thiscall (ECX = this), RET 4, 1 stack param (stream pointer).
 * Counts nodes in 4 linked lists, writes total count to stream,
 * then writes each node's data via FUN_005946b0.
 *
 * CFLAGS: /O1
 */

#include <stddef.h>

extern int __cdecl FUN_00417a40(void *list_head);
extern int __cdecl FUN_005946b0(void *stream, void *node);

__declspec(naked) void __stdcall FUN_00594bb0(void)
{
    
__asm {
PUSH    ECX                         ; local for count
        PUSH    EBX
        PUSH    EBP
        PUSH    ESI
        MOV     ESI, ECX                    ; this
        PUSH    EDI
        LEA     EDI, [ESI + 0x14]           ; list1 head
        MOV     ECX, EDI
        MOV     DWORD PTR [ESP + 0x10], 0
        CALL    FUN_00417a40                ; count list1
        ADD     [ESP + 0x10], EAX
        LEA     EBX, [ESI + 0x1C]           ; list2 head
        MOV     ECX, EBX
        CALL    FUN_00417a40                ; count list2
        ADD     [ESP + 0x10], EAX
        LEA     EBP, [ESI + 0x24]           ; list3 head
        MOV     ECX, EBP
        CALL    FUN_00417a40                ; count list3
        MOV     EDX, [ESP + 0x10]
        ADD     EDX, EAX
        ADD     ESI, 0x2C                   ; list4 head
        MOV     ECX, ESI
        MOV     [ESP + 0x10], EDX
        CALL    FUN_00417a40                ; count list4
        ADD     [ESP + 0x10], EAX           ; total count
        MOV     ECX, [ESP + 0x18]           ; stream param
        MOV     EAX, [ECX]
        PUSH    4
        LEA     EDX, [ESP + 0x14]           ; &count
        PUSH    EDX
        CALL    DWORD PTR [EAX + 0x24]      ; stream->Write(&count, 4)
        MOV     EDI, [EDI]                  ; list1 current
        MOV     EBX, [EBX]                  ; list2 current
        MOV     EBP, [EBP]                  ; list3 current
        MOV     ESI, [ESI]                  ; list4 current
    l_list1_test:
        TEST    EDI, EDI
        JE      l_list2_test
        MOV     ECX, [EDI]
        TEST    ECX, ECX
        MOV     EDI, [EDI + 4]
        JE      l_list2_test
        MOV     EAX, [ESP + 0x18]           ; stream
        PUSH    EAX
        CALL    FUN_005946b0
        JMP     l_list1_test
    l_list2_test:
        TEST    EBX, EBX
        JE      l_list3_test
    l_list2_loop:
        MOV     ECX, [EBX]
        TEST    ECX, ECX
        MOV     EBX, [EBX + 4]
        JE      l_list3_test
        MOV     EDX, [ESP + 0x18]
        PUSH    EDX
        CALL    FUN_005946b0
        JMP     l_list2_test
    l_list3_test:
        TEST    EBP, EBP
        JE      l_list4_test
    l_list3_loop:
        MOV     ECX, [EBP]
        TEST    ECX, ECX
        MOV     EBP, [EBP + 4]
        JE      l_list4_test
        MOV     EAX, [ESP + 0x18]
        PUSH    EAX
        CALL    FUN_005946b0
        JMP     l_list3_test
    l_list4_test:
        TEST    ESI, ESI
        JE      l_done
    l_list4_loop:
        MOV     ECX, [ESI]
        TEST    ECX, ECX
        MOV     ESI, [ESI + 4]
        JE      l_done
        MOV     EDX, [ESP + 0x18]
        PUSH    EDX
        CALL    FUN_005946b0
        JMP     l_list4_test
    l_done:
        POP     EDI
        POP     ESI
        POP     EBP
        POP     EBX
        POP     ECX
        RET     4
    }


}
