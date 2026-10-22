/*
 * FUN_00580a00 (227 B) — Vector push_back / insertion.
 *
 * __thiscall (ECX = this), RET 4, 1 stack param (value ptr).
 * Manages a dynamic array (begin, end, capacity pointers).
 * Grows if needed, inserts one element.
 *
 * CFLAGS: /O1
 */

#include <stddef.h>

extern void *__cdecl FUN_004084d0(int size);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void __stdcall FUN_00580a00(void)
{
    
__asm {
SUB     ESP, 0x0C
        MOV     EAX, [ECX + 8]              ; capacity ptr
        PUSH    EDI
        MOV     EDI, [ECX + 4]              ; end ptr
        CMP     EDI, EAX
        MOV     [ESP + 0x0C], ECX           ; save this
        JE      l_grow                      ; need to grow
        TEST    EDI, EDI
        JE      l_skip_store
        MOV     EAX, [ESP + 0x14]           ; value ptr
        MOV     EDX, [EAX]                  ; value
        MOV     [EDI], EDX                  ; *end = value
    l_skip_store:
        ADD     EDI, 4
        MOV     [ECX + 4], EDI              ; update end
        POP     EDI
        ADD     ESP, 0x0C
        RET     4
    l_grow:
        PUSH    EBX
        MOV     EBX, [ECX]                  ; begin ptr
        MOV     EAX, EDI
        SUB     EAX, EBX
        SAR     EAX, 2                      ; current size
        CMP     EAX, 1
        PUSH    EBP
        PUSH    ESI
        mov     dword ptr [esp + 0x10], 1
        MOV     [ESP + 0x14], EAX           ; save current size
        LEA     ECX, [ESP + 0x10]           ; &min_growth (1)
        JB      l_use_min
        LEA     ECX, [ESP + 0x14]           ; use &current_size
    l_use_min:
        MOV     ECX, [ECX]                  ; growth = max(1, current_size)
        ADD     ECX, EAX                    ; new_size = current_size + growth
        MOV     [ESP + 0x14], ECX           ; save new total
        JE      l_skip_alloc
        LEA     EAX, [ECX*4]                ; bytes to allocate
        PUSH    EAX
        CALL    FUN_004084d0
        ADD     ESP, 4
        MOV     EBP, EAX                    ; new buffer
        JMP     l_got_buffer
    l_skip_alloc:
        XOR     EBP, EBP
    l_got_buffer:
        CMP     EBX, EDI                    ; if begin == end (empty)
        MOV     EAX, EBP                    ; dest = new_buffer
        JE      l_skip_copy
        MOV     ECX, EBX
    l_copy_loop:
        TEST    EAX, EAX
        JE      l_advance_src
        MOV     EDX, [ECX]                  ; *src
        MOV     [EAX], EDX                  ; *dest = *src
    l_advance_src:
        ADD     ECX, 4
        ADD     EAX, 4
        CMP     ECX, EDI
        JNE     l_copy_loop
    l_skip_copy:
        TEST    EAX, EAX
        JE      l_skip_store_new
        MOV     ECX, [ESP + 0x20]           ; value ptr
        MOV     EDX, [ECX]                  ; value
        MOV     [EAX], EDX                  ; *dest = value
    l_skip_store_new:
        CMP     EDI, EDI                    ; always true (NOP)
        LEA     ESI, [EAX + 4]              ; new end
        JE      l_skip_copy_after
        MOV     EAX, EDI
        SUB     EAX, ESI
    l_copy_after:
        TEST    ESI, ESI
        JE      l_advance_after
        MOV     ECX, [EAX + ESI]            ; *src
        MOV     [ESI], ECX                  ; *dest = *src
    l_advance_after:
        ADD     ESI, 4
        LEA     EDX, [EAX + ESI]
        CMP     EDX, EDI
        JNE     l_copy_after
    l_skip_copy_after:
        TEST    EBX, EBX
        MOV     [ESP + 0x20], EBX           ; save old begin for free
        JE      l_skip_free
        PUSH    EBX
        CALL    FUN_004084e0
        ADD     ESP, 4
    l_skip_free:
        MOV     EAX, [ESP + 0x18]           ; this (saved)
        MOV     ECX, [ESP + 0x14]           ; new total size
        MOV     [EAX + 4], ESI              ; new end
        POP     ESI
        LEA     EDX, [EBP + ECX*4]          ; new capacity
        MOV     [EAX], EBP                  ; new begin
        POP     EBP
        POP     EBX
        MOV     [EAX + 8], EDX              ; new capacity ptr
        POP     EDI
        ADD     ESP, 0x0C
        RET     4
    }


}
