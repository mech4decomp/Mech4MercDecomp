/*
 * FUN_005922E0 (251 B) — Large constructor (__thiscall, RET 0x58).
 * Reads 22 DWORDs of stack params, stores into object fields.
 * Calls FUN_004ea0f0, FUN_00419460, FUN_00767400 (x2).
 *
 * CFLAGS: /O1
 */

extern void __fastcall FUN_004ea0f0(void);
extern void __fastcall FUN_00419460(void);
extern void __fastcall FUN_00767400(void);

__declspec(naked) void __stdcall FUN_005922E0(void)
{
    __asm {
        MOV  EAX, [ESP + 0x4]       /* param1 */
        MOV  EDX, [ESP + 0xC]       /* param3 */
        PUSH ESI
        MOV  ESI, ECX               /* this */
        MOV  ECX, [ESP + 0xC]       /* param2 (after push) */
        MOV  [ESI + 0x8], ECX
        MOV  ECX, [ESP + 0x18]      /* param6 */
        MOV  [ESI], EAX             /* field_00 */
        MOV  EAX, [ESP + 0x14]      /* param5 */
        MOV  [ESI + 0x14], ECX      /* field_14 */
        PUSH 0x7dc694
        LEA  ECX, [ESI + 0x18]
        MOV  dword ptr [ESI + 0x4], 0x2
        MOV  [ESI + 0xC], EDX       /* field_0C */
        MOV  [ESI + 0x10], EAX      /* field_10 */
        CALL FUN_004ea0f0

        MOV  EDX, [ESP + 0x20]      /* param8 */
        PUSH EDX
        LEA  ECX, [ESI + 0x1C]
        CALL FUN_00419460

        MOV  EAX, [ESP + 0x28]      /* param10 */
        MOV  ECX, [ESP + 0x24]      /* param9 */
        MOV  [ESI + 0x4C], EAX      /* field_4C */
        MOV  EAX, [ESP + 0x1C]      /* param7 (pointer to 2 words) */
        MOV  DX, [EAX]              /* word[0] */
        MOV  AX, [EAX + 0x2]        /* word[1] */
        MOV  [ESI + 0x50], ECX      /* field_50 */
        MOV  ECX, [ESP + 0x30]      /* param12 */
        MOV  [ESI + 0x56], AX       /* field_56 */
        MOV  EAX, [ESP + 0x34]      /* param13 */
        MOV  [ESI + 0x54], DX       /* field_54 */
        MOV  EDX, [ESP + 0x2C]      /* param11 */
        MOV  [ESI + 0x58], ECX      /* field_58 */
        PUSH EAX
        LEA  ECX, [ESI + 0x60]
        MOV  [ESI + 0x5C], EDX      /* field_5C */
        CALL FUN_00767400

        MOV  ECX, [ESP + 0x38]      /* param14 */
        PUSH ECX
        LEA  ECX, [ESI + 0x78]
        CALL FUN_00767400

        MOV  EDX, [ESP + 0x3C]      /* param15 */
        MOV  EAX, [ESP + 0x44]      /* param17 */
        MOV  CL, [ESP + 0x48]       /* param18 low byte */
        MOV  [ESI + 0x90], EDX      /* field_90 */
        MOV  DX, [ESP + 0x4A]       /* param18 word at +2 */
        MOV  [ESI + 0x94], EAX      /* field_94 */
        MOV  EAX, [ESP + 0x40]      /* param16 */
        MOV  [ESI + 0x98], CL       /* field_98 */
        MOV  ECX, [ESP + 0x4C]      /* param19 */
        MOV  [ESI + 0x9A], DX       /* field_9A */
        MOV  EDX, [ESP + 0x50]      /* param20 */
        MOV  [ESI + 0x9C], EAX      /* field_9C */
        MOV  EAX, [ESP + 0x54]      /* param21 */
        MOV  [ESI + 0xA0], ECX      /* field_A0 */
        MOV  ECX, [ESP + 0x58]      /* param22 */
        MOV  [ESI + 0xA4], EDX      /* field_A4 */
        MOV  EDX, [ESP + 0x5C]      /* param23 */
        MOV  [ESI + 0xA8], EAX      /* field_A8 */
        MOV  [ESI + 0xAC], ECX      /* field_AC */
        MOV  [ESI + 0xB0], EDX      /* field_B0 */
        MOV  EAX, ESI
        POP  ESI
        RET  0x58
    }
}
