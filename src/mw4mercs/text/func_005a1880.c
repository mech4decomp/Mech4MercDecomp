/* Auto-generated inline asm for FUN_005a1880 (0x005A1880) */

#include <stddef.h>

void __declspec(naked) FUN_005a1880(void)
{
    

extern int DAT_007f2038;
extern void __cdecl FUN_1004d5b0a(void);
__asm {
        mov eax, dword ptr [DAT_007f2038]
        PUSH EBX
        PUSH ESI
        PUSH EDI
        MOV  EBX, ECX
        PUSH EAX
        call FUN_1004d5b0a
        MOV  ECX, dword ptr [ESP + 0x10]
        MOV  dword ptr [EBX + 0x140], ECX
        MOV  dword ptr [EBX], 0x783f64
        LEA  EDI, [EBX + 0xa4]
        MOV  ECX, 0xc
        MOV  ESI, 0x7b9460
        REP MOVSD
        LEA  EDI, [EBX + 0xd4]
        MOV  ECX, 0xc
        MOV  ESI, 0x7b9460
        REP MOVSD
        LEA  EDI, [EBX + 0x14]
        MOV  ECX, 0xc
        MOV  ESI, 0x7b9460
        REP MOVSD
        LEA  EDI, [EBX + 0x44]
        MOV  ECX, 0xc
        MOV  ESI, 0x7b9460
        REP MOVSD
        LEA  EDI, [EBX + 0x74]
        MOV  ECX, 0xc
        MOV  ESI, 0x7b9460
        REP MOVSD
        XOR  EAX, EAX
        LEA  EDI, [EBX + 0x104]
        MOV  ECX, 0xc
        MOV  ESI, 0x7b9460
        REP MOVSD
        POP  EDI
        MOV  byte ptr [EBX + 0x134], AL
        MOV  dword ptr [EBX + 0x144], EAX
        MOV  dword ptr [EBX + 0x14c], EAX
        MOV  dword ptr [EBX + 0x148], EAX
        MOV  dword ptr [EBX + 0x10], EAX
        POP  ESI
        MOV  EAX, EBX
        POP  EBX
        RET  0x4
    }


}
