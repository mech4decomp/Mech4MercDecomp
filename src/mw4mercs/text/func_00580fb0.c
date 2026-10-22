/*
 * FUN_00580fb0 (232 B) — Vector insertion with fill.
 *
 * __thiscall (ECX = this), RET 0xC, 3 stack params.
 * Manages a dynamic array (begin, end, capacity pointers).
 * Inserts elements with fill value.
 *
 * CFLAGS: /O1
 */

#include <stddef.h>

extern void *__cdecl FUN_004084d0(int size);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void __stdcall FUN_00580fb0(void)
{
    
__asm {
PUSH    ECX
        PUSH    EBX
        PUSH    EBP
        PUSH    ESI
        MOV     ESI, [ESP + 0x1C]           ; fill_count param
        MOV     EBX, ECX                    ; this (vector struct)
        MOV     EBP, [EBX]                  ; begin ptr
        PUSH    EDI
        MOV     EDI, [EBX + 4]              ; end ptr
        MOV     EAX, EDI
        SUB     EAX, EBP
        SAR     EAX, 2                      ; current size
        CMP     EAX, ESI
        MOV     [ESP + 0x10], EAX           ; save current size
        LEA     ECX, [ESP + 0x20]           ; &fill_count
        JB      l_use_count
        LEA     ECX, [ESP + 0x10]           ; use &current_size
    l_use_count:
        MOV     ECX, [ECX]                  ; growth = max(fill_count, current_size)
        ADD     ECX, EAX                    ; new_size = current_size + growth
        MOV     [ESP + 0x10], ECX           ; save new total
        JE      l_skip_alloc
        LEA     EAX, [ECX*4]                ; bytes to allocate
        PUSH    EAX
        CALL    FUN_004084d0
        ADD     ESP, 4
        MOV     [ESP + 0x20], EAX           ; save new buffer
        JMP     l_got_buffer
    l_skip_alloc:
        mov     dword ptr [esp + 0x20], 0
    l_got_buffer:
        MOV     EDX, [ESP + 0x18]           ; insert_pos ptr
        CMP     EBP, EDX
        MOV     EAX, [ESP + 0x20]           ; new buffer
        JE      l_skip_copy_before
        MOV     ECX, EBP
    l_copy_before:
        TEST    EAX, EAX
        JE      l_advance_src
        MOV     EBP, [ECX]                  ; *src
        MOV     [EAX], EBP                  ; *dest = *src
    l_advance_src:
        ADD     ECX, 4
        ADD     EAX, 4
        CMP     ECX, EDX
        JNE     l_copy_before
    l_skip_copy_before:
        CMP     ESI, 1
        JNE     l_fill_multi
        TEST    EAX, EAX
        JE      l_after_fill
        MOV     ECX, [ESP + 0x1C]           ; fill_value ptr
        MOV     ECX, [ECX]                  ; fill_value
        MOV     [EAX], ECX                  ; *dest = fill_value
    l_after_fill:
        ADD     EAX, 4
        JMP     l_after_fill_done
    l_fill_multi:
        TEST    ESI, ESI
        JBE     l_after_fill_done
        MOV     ECX, ESI                    ; count
        MOV     ESI, [ESP + 0x1C]           ; fill_value ptr
    l_fill_loop:
        TEST    EAX, EAX
        JE      l_advance_fill
        MOV     EBP, [ESI]                  ; fill_value
        MOV     [EAX], EBP                  ; *dest = fill_value
    l_advance_fill:
        ADD     EAX, 4
        DEC     ECX
        JNE     l_fill_loop
    l_after_fill_done:
        CMP     EDX, EDI                    ; if insert_pos == end
        MOV     ESI, EAX                    ; new write position
        JE      l_skip_copy_after
        MOV     ECX, EDX
        SUB     ECX, EAX
    l_copy_after:
        TEST    ESI, ESI
        JE      l_advance_after
        MOV     EDX, [ECX + ESI]            ; *src
        MOV     [ESI], EDX                  ; *dest = *src
    l_advance_after:
        ADD     ESI, 4
        LEA     EAX, [ECX + ESI]
        CMP     EAX, EDI
        JNE     l_copy_after
    l_skip_copy_after:
        MOV     EAX, [EBX]                  ; old begin
        TEST    EAX, EAX
        MOV     [ESP + 0x1C], EAX           ; save for free
        JE      l_skip_free
        PUSH    EAX
        CALL    FUN_004084e0
        ADD     ESP, 4
    l_skip_free:
        MOV     EAX, [ESP + 0x20]           ; new buffer
        MOV     ECX, [ESP + 0x10]           ; new total size
        POP     EDI
        MOV     [EBX + 4], ESI              ; new end
        POP     ESI
        LEA     EDX, [EAX + ECX*4]          ; new capacity
        POP     EBP
        MOV     [EBX], EAX                  ; new begin
        MOV     [EBX + 8], EDX              ; new capacity ptr
        POP     EBX
        POP     ECX
        RET     0x0C
    }


}
