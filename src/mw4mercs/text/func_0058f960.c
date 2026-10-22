/* FUN_0058F960: Initialize array at this+0x944 with -1, then populate via FUN_00416b60 (105 B)
 * fastcall: ECX = this
 * Calls: FUN_00416b60
 */
extern void __cdecl FUN_00416B60(void);

__declspec(naked) void FUN_0058F960(void)
{
    __asm {
        PUSH ECX
        PUSH ESI
        MOV ESI, ECX                    /* ESI = this */
        PUSH EDI
        MOV ECX, 0xB
        OR EAX, 0xFFFFFFFF
        LEA EDI, [ESI + 0x944]
        REP STOSD                       /* memset field_944 to -1 (11 dwords) */

        MOV dword ptr [ESP + 0x8], 0x0  /* local_4 = 0 */

        LEA EDI, [ESI + 0x370]          /* EDI = this + 0x370 */
loop_start:
        LEA EAX, [ESP + 0x8]            /* &local_4 */
        PUSH EAX
        MOV ECX, EDI
        CALL FUN_00416B60

        TEST EAX, EAX
        JZ set_neg_one

        MOV ECX, dword ptr [ESP + 0x8]  /* local_4 */
        MOV EDX, dword ptr [EAX + 0x44] /* field_44 */
        LEA ECX, [ESI + ECX*0x4 + 0x944] /* &field_944[local_4] */
        MOV dword ptr [ECX], EDX        /* field_944[local_4] = field_44 */
        MOV dword ptr [EAX + 0x38], ECX /* field_38 = &field_944[local_4] */
        JMP next_iter

set_neg_one:
        MOV EAX, dword ptr [ESP + 0x8]  /* local_4 */
        MOV dword ptr [ESI + EAX*0x4 + 0x944], 0xFFFFFFFF

next_iter:
        MOV EAX, dword ptr [ESP + 0x8]  /* local_4 */
        INC EAX
        CMP EAX, 0xB
        MOV dword ptr [ESP + 0x8], EAX
        JL loop_start

        POP EDI
        POP ESI
        POP ECX
        RET
    }
}
