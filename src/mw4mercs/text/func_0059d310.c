/*
 * FUN_0059d310 (205 B) — Buffer copy by type index.
 *
 * __thiscall (ECX = this), RET 0xC, 3 stack params:
 *   [esp+4] = type_index (byte)
 *   [esp+8] = output_ptr (int*)
 *   [esp+0xC] = dest_buffer (int*)
 *
 * Copies count+1 dwords from one of several internal buffers
 * based on type_index. Returns this->field_28 in *output_ptr.
 *
 * CFLAGS: /O1
 */

#include <stddef.h>

/* Jump table at 0x59D3E0 */
/* case 0: this+0x60, end at this+0x64 */
/* case 1: this+0x54, end at this+0x58 */
/* case 2: this+0x6C, end at this+0x70 */
/* case 3: this+0x78, end at this+0x7C */
/* case 4: this+0x84, end at this+0x88 */

__declspec(naked) void __stdcall FUN_0059d310(void)
{
    __asm {
        MOV     EDX, [ESP + 0x0C]           ; dest_buffer
        MOV     EAX, [ECX + 0x28]           ; count
        MOV     [EDX], EAX                  ; *dest_buffer = count
        MOVSX   EDX, byte ptr [ESP + 0x04]  ; type_index
        DEC     EDX
        CMP     EDX, 4
        PUSH    ESI
        PUSH    EDI
        JA      l_default
        JMP     DWORD PTR [EDX*4 + 0x59D3E0]
    l_case0:
        MOV     EDX, [ECX + 0x60]
        CMP     EDX, [ECX + 0x64]
        JE      l_default
        TEST    EAX, EAX
        JL      l_default
        MOV     EDX, [ESP + 0x10]           ; dest_buffer (reload)
        MOV     ESI, [ECX + 0x60]
        MOV     EDI, [EDX]
        LEA     ECX, [EAX + 1]
        REP MOVSD
        POP     EDI
        POP     ESI
        RET     0x0C
    l_case1:
        MOV     EDX, [ECX + 0x54]
        CMP     EDX, [ECX + 0x58]
        JE      l_default
        TEST    EAX, EAX
        JL      l_default
        MOV     EDX, [ESP + 0x10]
        MOV     ESI, [ECX + 0x54]
        MOV     EDI, [EDX]
        LEA     ECX, [EAX + 1]
        REP MOVSD
        POP     EDI
        POP     ESI
        RET     0x0C
    l_case2:
        MOV     EDX, [ECX + 0x6C]
        CMP     EDX, [ECX + 0x70]
        JE      l_default
        TEST    EAX, EAX
        JL      l_default
        MOV     EDX, [ESP + 0x10]
        MOV     ESI, [ECX + 0x6C]
        MOV     EDI, [EDX]
        LEA     ECX, [EAX + 1]
        REP MOVSD
        POP     EDI
        POP     ESI
        RET     0x0C
    l_case3:
        MOV     EDX, [ECX + 0x78]
        CMP     EDX, [ECX + 0x7C]
        JE      l_default
        TEST    EAX, EAX
        JL      l_default
        MOV     EDX, [ESP + 0x10]
        MOV     ESI, [ECX + 0x78]
        MOV     EDI, [EDX]
        LEA     ECX, [EAX + 1]
        REP MOVSD
        POP     EDI
        POP     ESI
        RET     0x0C
    l_case4:
        MOV     EDX, [ECX + 0x84]
        CMP     EDX, [ECX + 0x88]
        JE      l_default
        TEST    EAX, EAX
        JL      l_default
        MOV     EDX, [ESP + 0x10]
        MOV     ESI, [ECX + 0x84]
        MOV     EDI, [EDX]
        LEA     ECX, [EAX + 1]
        REP MOVSD
        ; Fall through to l_default (shared cleanup)
    l_default:
        POP     EDI
        POP     ESI
        RET     0x0C
    }
}
