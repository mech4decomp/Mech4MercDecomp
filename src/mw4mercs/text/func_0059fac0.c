/*
 * FUN_0059fac0 (208 B) — Texture/surface rendering method.
 *
 * __thiscall (ECX = this), RET 0xC, 3 stack params.
 * Processes rendering with string ref-counting and iterator.
 *
 * CFLAGS: /O1
 */

#include <stddef.h>

extern int __cdecl FUN_00412570(void *dst, void *src);
extern int __cdecl FUN_005178d0(void);
extern int __cdecl FUN_006140c0(int param);
extern int __cdecl FUN_004d1f10(void *iter);
extern int __cdecl FUN_004da8d0(void *a, void *b);
extern int __cdecl FUN_0059fc10(void);
extern void __cdecl FUN_004d21c0(void *iter);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void __stdcall FUN_0059fac0(void)
{
    __asm {
        SUB     ESP, 0x44
        MOV     EAX, [ESP + 0x48]           ; param1
        PUSH    EBX
        PUSH    EBP
        PUSH    ESI
        PUSH    EDI
        MOV     EBP, ECX                    ; this
        PUSH    ECX                         ; &local
        MOV     ECX, ESP
        PUSH    EAX
        CALL    FUN_00412570                ; string copy ctor
        CALL    FUN_005178d0                ; hash/decrypt
        MOV     ECX, [EAX + 0x8C]
        CALL    FUN_006140c0
        LEA     ECX, [ESP + 0x10]
        MOV     EDI, EAX
        CALL    FUN_004d1f10                ; init iterator
        MOV     CX, [EDI + 0x10]            ; width
        MOV     DX, [EDI + 0x12]            ; height
        LEA     EAX, [ESP + 0x58]
        MOV     [ESP + 0x58], CX
        PUSH    EAX
        LEA     ECX, [ESP + 0x14]
        PUSH    ECX
        MOV     [ESP + 0x62], DX
        CALL    FUN_004da8d0                ; process dimensions
        MOV     EDX, [ESP + 0x2C]
        MOV     EAX, [EDX + 0x24]           ; get value
        MOV     ECX, [ESP + 0x68]           ; param3
        MOV     [ECX], EAX                  ; *param3 = value
        MOV     EAX, [ESP + 0x64]           ; count
        ADD     ESP, 8
        TEST    EAX, EAX
        JLE     l_cleanup
        MOV     ESI, [EDI + 0x18]           ; string ptr
        MOV     BX, [EDI + 0x10]            ; width
        MOV     DI, [EDI + 0x12]            ; height
        MOV     [ESP + 0x60], EAX           ; save count
    l_loop:
        TEST    ESI, ESI
        JE      l_skip_ref
        INC     byte ptr [ESI - 1]          ; ref count++
    l_skip_ref:
        PUSH    1
        PUSH    ESI
        LEA     EDX, [ESP + 0x60]
        PUSH    EDX
        LEA     EAX, [ESP + 0x5C]
        PUSH    EAX
        MOV     ECX, EBP
        MOV     [ESP + 0x68], BX            ; width
        MOV     [ESP + 0x6A], DI            ; height
        CALL    FUN_0059fc10
        TEST    ESI, ESI
        JE      l_dec_count
        MOV     CL, [ESI - 1]
        LEA     EAX, [ESI - 1]
        DEC     CL
        MOV     [EAX], CL
        JNE     l_dec_count
        PUSH    EAX
        CALL    FUN_004084e0                ; free string
        ADD     ESP, 4
    l_dec_count:
        DEC     DWORD PTR [ESP + 0x60]      ; count--
        JNE     l_loop
    l_cleanup:
        LEA     ECX, [ESP + 0x10]
        CALL    FUN_004d21c0                ; cleanup iterator
        POP     EDI
        POP     ESI
        POP     EBP
        POP     EBX
        ADD     ESP, 0x44
        RET     0x0C
    }
}
