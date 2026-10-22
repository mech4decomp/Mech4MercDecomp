/*
 * FUN_004E2D00 (231 B) - Adept::CollisionGrid constructor (__thiscall, RET 0x1c).
 *
 * Calls FUN_004b6a30(...) with 7 args (last = DAT_007dc72c), then
 * initializes grid fields: width*height (byte-masked) cell count,
 * allocates cell array via FUN_004084d0, sets vtable 0x773ea8,
 * and fills each cell with a sub-object (vtable 0x773e90) via
 * FUN_0041fc80.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_004b6a30(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_0041fc80(void);

extern int g_007dc72c;

__declspec(naked) void __stdcall FUN_004e2d00(void)
{
    __asm {
        MOV EAX, dword ptr [g_007dc72c]
        MOV EDX, dword ptr [ESP + 0x14]
        PUSH EBX
        MOV EBX, dword ptr [ESP + 0xc]
        PUSH EBP
        PUSH ESI
        PUSH EDI
        MOV EDI, dword ptr [ESP + 0x14]
        PUSH EAX
        MOV EAX, dword ptr [ESP + 0x24]
        MOV ESI, ECX
        MOV ECX, dword ptr [ESP + 0x2c]
        PUSH ECX
        MOV ECX, dword ptr [ESP + 0x24]
        PUSH EDX
        PUSH EAX
        PUSH ECX
        PUSH EBX
        PUSH EDI
        MOV ECX, ESI
        CALL FUN_004b6a30
        AND EDI, 0xff
        AND EBX, 0xff
        IMUL EDI, EBX
        XOR EBP, EBP
        MOV dword ptr [ESI + 0x164], EBP
        LEA EDX, [EDI*4 + 0]
        MOV dword ptr [ESI + 0x168], EBP
        MOV dword ptr [ESI + 0x16c], EBP
        MOV dword ptr [ESI + 0x170], EBP
        MOV dword ptr [ESI + 0x174], EBP
        PUSH EDX
        MOV dword ptr [ESI + 0x178], EBP
        MOV dword ptr [ESI], 0x773ea8
        CALL FUN_004084d0
        MOV ECX, dword ptr [ESP + 0x30]
        ADD ESP, 0x4
        CMP EDI, EBP
        MOV dword ptr [ESI + 0x17c], EAX
        MOV dword ptr [ESI + 0x180], EBP
        MOV dword ptr [ESI + 0x184], 0x3f800000
        MOV dword ptr [ESI + 0x188], EBP
        MOV dword ptr [ESI + 0x18c], ECX
        JLE l_done
        MOV EBX, EAX
        MOV dword ptr [ESP + 0x28], EDI
    l_loop:
        PUSH 0x8
        CALL FUN_004084d0
        MOV EDI, EAX
        ADD ESP, 0x4
        CMP EDI, EBP
        JZ l_zero
        PUSH EBP
        MOV ECX, EDI
        CALL FUN_0041fc80
        MOV dword ptr [EDI], 0x773e90
        JMP l_after
    l_zero:
        XOR EDI, EDI
    l_after:
        MOV EAX, dword ptr [ESP + 0x28]
        MOV dword ptr [EBX], EDI
        ADD EBX, 0x4
        DEC EAX
        MOV dword ptr [ESP + 0x28], EAX
        JNZ l_loop
    l_done:
        POP EDI
        MOV EAX, ESI
        POP ESI
        POP EBP
        POP EBX
        RET 0x1c
    }
}
