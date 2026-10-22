/*
 * FUN_0058adf0 (211 B) — Game object initialization/update.
 *
 * __thiscall (ECX = this), RET (no stack params).
 * Initializes various fields, calls virtual methods,
 * performs FPU calculations for positioning.
 *
 * CFLAGS: /O1
 */

#include <stddef.h>

extern int __cdecl FUN_0054a780(int param);
extern int __cdecl FUN_005eb100(int param);
extern int __cdecl FUN_005a1990(int param, int val);
extern int __cdecl FUN_0041afd0(void *dst, void *src);
extern int __cdecl FUN_0041b680(void *ptr);
extern double __cdecl FUN_00707e70(int param);

__declspec(naked) void __stdcall FUN_0058adf0(void)
{
    

extern int DAT_0076de20;
__asm {
PUSH    ESI
        MOV     ESI, ECX                    ; this
        MOV     ECX, [ESI + 0x3B0]
        TEST    ECX, ECX
        PUSH    EDI
        MOV     byte ptr [ESI + 0x52C], 0
        MOV     byte ptr [ESI + 0x620], 0
        MOV     dword ptr [ESI + 0x624], 0
        JE      l_skip_call
        PUSH    9
        CALL    FUN_0054a780
    l_skip_call:
        MOV     EAX, [ESI + 0x410]
        MOV     EDX, [ESI + 0x40C]
        SUB     EAX, EDX
        SAR     EAX, 2                      ; divide by 4
        JE      l_zero
        MOV     ECX, EDX
        MOV     ECX, [ECX]                  ; deref
        JMP     l_call
    l_zero:
        XOR     ECX, ECX
    l_call:
        CALL    FUN_005eb100
        MOV     ECX, [ESI + 0x9AC]
        PUSH    0x3F800000                  ; 1.0f
        CALL    FUN_005a1990
        MOV     ECX, [ESI + 0xE0]
        MOV     EDX, [ECX]
        PUSH    0
        PUSH    8
        CALL    DWORD PTR [EDX + 4]         ; virtual call
        MOV     EAX, [ESI + 0x82C]
        MOV     ECX, [EAX + 0xD8]
        ADD     ECX, 0x50
        LEA     EDI, [ESI + 0x5F0]
        PUSH    ECX
        MOV     ECX, EDI
        CALL    FUN_0041afd0
        MOV     ECX, EDI
        CALL    FUN_0041b680
        MOV     EDX, [ESI + 0x78]
        LEA     ECX, [ESI + 0x78]
        CALL    DWORD PTR [EDX + 4]         ; virtual call
        FLD     DWORD PTR [EAX + 0x314]
        FADD    DWORD PTR [EAX + 0x30C]
        PUSH    0
        FSTP    DWORD PTR [ESI + 0x600]
        FLD     DWORD PTR [EAX + 0x318]
        FADD    DWORD PTR [EAX + 0x310]
        FSTP    DWORD PTR [ESI + 0x604]
        CALL    FUN_00707e70
        ; FADD QWORD PTR [0x76DE20]
        fadd qword ptr [DAT_0076de20]
        POP     EDI
        FSTP    QWORD PTR [ESI + 0x564]
        POP     ESI
        RET
    }


}
