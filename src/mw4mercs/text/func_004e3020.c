/*
 * FUN_004E3020 (553 B) - Adept::CollisionGrid query/update (__thiscall, RET 0xc).
 *
 * Guarded by DAT_007b9648 != 0 and DAT_007b222c == 1. Computes grid
 * cell ranges from FPU math against 0x0076d064/0x0076d070/0x0076dd60
 * and this+0x154..0x160, allocates a 0x20-byte object via
 * FUN_004084d0/FUN_00487830, iterates cells via FUN_004e2ee0 calling
 * virtual method [EAX+0x34], and either decrements a refcount or calls
 * FUN_00428c60.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00487830(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_004e2ee0(void);
extern void __cdecl FUN_00428c60(void);

extern int g_007b9648;
extern int g_007b222c;
extern float g_0076d064;
extern float g_0076c5b0;
extern float g_0076d070;
extern float g_0076dd60;
extern int g_007b9590;
extern int g_007da724;

__declspec(naked) void __stdcall FUN_004e3020(void)
{
    __asm {
        SUB ESP, 0x1c
        MOV EAX, dword ptr [g_007b9648]
        TEST EAX, EAX
        MOV EDX, ECX
        MOV dword ptr [ESP + 0xc], EDX
        JZ l_ret0
        CMP dword ptr [g_007b222c], 0x1
        JNZ l_ret0
        FLD dword ptr [g_0076d064]
        MOV EAX, dword ptr [ESP + 0x20]
        FDIV dword ptr [EDX + 0x154]
        MOV ECX, dword ptr [EAX + 0xc]
        MOV dword ptr [ESP + 0x10], ECX
        MOV ECX, dword ptr [EAX + 0x1c]
        MOV EAX, dword ptr [EAX + 0x2c]
        MOV dword ptr [ESP + 0x18], EAX
        PUSH EBX
        PUSH ESI
        MOV dword ptr [ESP + 0x1c], ECX
        FLD dword ptr [g_0076d064]
        FDIV dword ptr [EDX + 0x158]
        FSTP dword ptr [ESP + 0xc]
        FLD dword ptr [ESP + 0x20]
        FSUB dword ptr [EDX + 0x15c]
        FLD ST(0)
        FSUB dword ptr [ESP + 0x2c]
        FMUL ST(0), ST(2)
        FCOM dword ptr [g_0076c5b0]
        FNSTSW AX
        TEST AH, 0x1
        JZ l_fsub1
        FSTP ST(0)
        XOR BL, BL
        JMP l_fadd2
    l_fsub1:
        FSUB dword ptr [g_0076d070]
        FADD dword ptr [g_0076dd60]
        FSTP dword ptr [ESP + 0x10]
        MOV BL, byte ptr [ESP + 0x10]
    l_fadd2:
        FADD dword ptr [ESP + 0x2c]
        MOV AL, byte ptr [EDX + 0x150]
        FMUL ST(0), ST(1)
        FSUB dword ptr [g_0076d070]
        FADD dword ptr [g_0076dd60]
        FSTP dword ptr [ESP + 0x10]
        MOV CL, byte ptr [ESP + 0x10]
        CMP CL, AL
        FSTP ST(0)
        MOV byte ptr [ESP + 0xa], CL
        JC l_fld18
        DEC AL
        MOV byte ptr [ESP + 0xa], AL
    l_fld18:
        FLD dword ptr [ESP + 0x18]
        FSUB dword ptr [EDX + 0x160]
        FLD ST(0)
        FSUB dword ptr [ESP + 0x2c]
        FMUL dword ptr [ESP + 0xc]
        FCOM dword ptr [g_0076c5b0]
        FNSTSW AX
        TEST AH, 0x1
        JZ l_fsub3
        FSTP ST(0)
        MOV byte ptr [ESP + 0xb], 0x0
        JMP l_fadd4
    l_fsub3:
        FSUB dword ptr [g_0076d070]
        FADD dword ptr [g_0076dd60]
        FSTP dword ptr [ESP + 0x10]
        MOV CL, byte ptr [ESP + 0x10]
        MOV byte ptr [ESP + 0xb], CL
    l_fadd4:
        FADD dword ptr [ESP + 0x2c]
        MOV AL, byte ptr [EDX + 0x151]
        FMUL dword ptr [ESP + 0xc]
        FSUB dword ptr [g_0076d070]
        FADD dword ptr [g_0076dd60]
        FSTP dword ptr [ESP + 0x10]
        MOV CL, byte ptr [ESP + 0x10]
        CMP CL, AL
        MOV byte ptr [ESP + 0x9], CL
        JC l_movedx
        DEC AL
        MOV byte ptr [ESP + 0x9], AL
    l_movedx:
        MOV EDX, dword ptr [g_007b9590]
        PUSH EDX
        CALL FUN_006f4950
        PUSH 0x20
        CALL FUN_004084d0
        ADD ESP, 0x4
        TEST EAX, EAX
        JZ l_xoresi
        MOV ECX, dword ptr [g_007da724]
        PUSH ECX
        PUSH 0x8
        MOV ECX, EAX
        CALL FUN_00487830
        MOV ESI, EAX
        JMP l_cmpbl
    l_xoresi:
        XOR ESI, ESI
    l_cmpbl:
        CALL FUN_006f49a0
        CMP BL, byte ptr [ESP + 0xa]
        MOV byte ptr [ESP + 0xc], BL
        JA l_moval
        PUSH EBP
        MOV EBP, dword ptr [ESP + 0x34]
        PUSH EDI
    l_moval4:
        MOV AL, byte ptr [ESP + 0x13]
        CMP AL, byte ptr [ESP + 0x11]
        MOV BL, AL
        MOV byte ptr [ESP + 0x38], BL
        JA l_moval2
    l_movedi:
        MOV EDI, dword ptr [ESP + 0x14]
        MOV EDX, dword ptr [ESP + 0x38]
        MOV ECX, dword ptr [ESP + 0x1c]
        PUSH EDX
        PUSH EDI
        CALL FUN_004e2ee0
        TEST EAX, EAX
        JZ l_moval3
        MOV ECX, dword ptr [EAX + 0x14c]
        TEST ECX, ECX
        JZ l_moval3
        MOV EDX, dword ptr [ESP + 0x34]
        MOV EAX, dword ptr [ECX]
        PUSH EBP
        PUSH EDX
        MOV EDX, dword ptr [ESP + 0x38]
        PUSH EDX
        PUSH ESI
        CALL dword ptr [EAX + 0x34]
    l_moval3:
        MOV AL, byte ptr [ESP + 0x11]
        INC BL
        CMP BL, AL
        MOV byte ptr [ESP + 0x38], BL
        /* __emit: backward JBE rel-offset miscomputed by 4 (call-reloc between branch and target) */
        __emit 0x76
        __emit 0xC4
    l_moval2:
        MOV AL, byte ptr [ESP + 0x14]
        MOV CL, byte ptr [ESP + 0x12]
        INC AL
        CMP AL, CL
        MOV byte ptr [ESP + 0x14], AL
        JBE l_moval4
        POP EDI
        POP EBP
    l_moval:
        MOV AL, byte ptr [ESI + 0x1c]
        TEST AL, AL
        JNZ l_leacx
        DEC word ptr [ESI + 0x10]
        CMP word ptr [ESI + 0x10], 0x0
        JNZ l_popesi
        TEST ESI, ESI
        JZ l_popesi
        MOV EAX, dword ptr [ESI]
        PUSH 0x1
        MOV ECX, ESI
        CALL dword ptr [EAX]
        POP ESI
        XOR AL, AL
        POP EBX
        ADD ESP, 0x1c
        RET 0xc
    l_leacx:
        LEA ECX, [ESP + 0x18]
        PUSH ECX
        MOV ECX, dword ptr [g_007b9648]
        PUSH ESI
        CALL FUN_00428c60
    l_popesi:
        POP ESI
        XOR AL, AL
        POP EBX
        ADD ESP, 0x1c
        RET 0xc
    l_ret0:
        XOR AL, AL
        ADD ESP, 0x1c
        RET 0xc
    }
}
