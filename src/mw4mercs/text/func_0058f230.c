/* FUN_0058F230: Animation/script trigger function (288 B)
 * thiscall: ECX = this
 * References globals: 0x007dab44, 0x007dab40, 0x007b220c, 0x0076d5ec
 * Calls: vtable[0x60], FUN_00415020, FUN_004084d0, FUN_0058f190,
 *        FUN_00412570, FUN_005178d0, FUN_006140c0, FUN_00618120, FUN_004084e0
 */
extern int DAT_007dab44;
extern int DAT_007dab40;
extern float DAT_007b220c;
extern float DAT_0076d5ec;

extern void __cdecl FUN_00415020(void);
extern void __cdecl FUN_004084D0(void);
extern void __cdecl FUN_0058F190(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_005178D0(void);
extern void __cdecl FUN_006140C0(void);
extern void __cdecl FUN_00618120(void);
extern void __cdecl FUN_004084E0(void);

__declspec(naked) void FUN_0058F230(void)
{
    __asm {
        SUB ESP, 0xC
        PUSH ESI
        MOV ESI, ECX                    /* ESI = this */
        MOV EAX, dword ptr [ESI]        /* vtable */
        PUSH EDI
        CALL dword ptr [EAX + 0x60]     /* vtable[0x60]() */

        CMP EAX, 0x2
        JNZ exit

        MOV ECX, dword ptr [DAT_007dab44]
        MOV EDX, dword ptr [ECX]
        XOR EDX, dword ptr [DAT_007dab40]
        MOV EDI, dword ptr [EDX + 0x44]
        XOR EDI, 0x85739531
        JZ exit

        MOV EAX, dword ptr [ESI + 0x61C]
        MOV dword ptr [ESP + 0xC], EAX  /* fStack_8 = this->field_61C */

        CALL FUN_00415020

        FLD dword ptr [ESP + 0xC]       /* fStack_8 */
        FABS
        FLD dword ptr [DAT_007b220c]
        FCOMPP
        FNSTSW AX
        TEST AH, 0x01
        JZ pop_st0_exit

        FLD dword ptr [ESP + 0xC]       /* fStack_8 */
        FMUL dword ptr [DAT_0076d5ec]
        FXCH
        FCOMPP
        FNSTSW AX
        TEST AH, 0x41
        JZ exit

        PUSH 0x64
        MOV byte ptr [ESI + 0x3B4], 0x1
        CALL FUN_004084D0
        ADD ESP, 0x4

        LEA ECX, [ESP + 0x8]
        PUSH ECX
        MOV ECX, ESI
        MOV dword ptr [ESP + 0xC], EAX  /* uStack_c = result */
        CALL FUN_0058F190

        MOV EDX, dword ptr [DAT_007dab44]
        MOV ECX, dword ptr [DAT_007dab40]
        MOV EAX, dword ptr [EDX]
        XOR EAX, ECX
        MOV ECX, dword ptr [EAX + 0xC]
        ADD EAX, 0xC
        XOR ECX, 0x85739531
        JZ clear_flag

        MOV EDX, dword ptr [EAX]
        XOR EDX, 0x85739531
        MOV EAX, dword ptr [EDX + 0x84]
        TEST EAX, EAX
        JZ clear_flag

        MOV EAX, dword ptr [ESP + 0x8]
        PUSH ECX
        MOV ECX, ESP
        PUSH EAX
        CALL FUN_00412570

        CALL FUN_005178D0

        MOV ECX, dword ptr [EAX + 0x84]
        CALL FUN_006140C0

        TEST EAX, EAX
        JNZ do_action

clear_flag:
        MOV byte ptr [ESI + 0x3B4], 0x0
        POP EDI
        POP ESI
        ADD ESP, 0xC
        RET

do_action:
        MOV EDX, dword ptr [ESP + 0x8]
        PUSH 0x0
        LEA ECX, [ESP + 0x14]
        PUSH ECX
        PUSH EDX
        MOV ECX, EDI
        CALL FUN_00618120

        MOV EAX, dword ptr [ESP + 0x8]
        PUSH EAX
        CALL FUN_004084E0
        ADD ESP, 0x4

        POP EDI
        POP ESI
        ADD ESP, 0xC
        RET

pop_st0_exit:
        FSTP ST(0)

exit:
        POP EDI
        POP ESI
        ADD ESP, 0xC
        RET
    }
}
