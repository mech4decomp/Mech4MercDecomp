/*
 * FUN_004E41F0 (718 B) - Adept::CollisionGrid query (__thiscall, RET 0xc).
 *
 * Computes grid cell ranges via FPU, iterates cells via FUN_004e2ee0,
 * walks two linked lists ([+0x15c] and [+0x154]) of collision objects,
 * does distance checks, and invokes a callback function pointer
 * (param at [ESP+0x98]) for hits.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_004e2ee0(void);
extern void __cdecl FUN_00419480(void);
extern void __cdecl FUN_0040cb00(void);
extern void __cdecl FUN_00417d80(void);

extern float g_0076d064;
extern float g_0076c5b0;
extern float g_0076d070;
extern float g_0076dd60;
extern float g_007b220c;

__declspec(naked) void __stdcall FUN_004e41f0(void)
{
    __asm {
        SUB ESP, 0x74
        FLD dword ptr [g_0076d064]
        PUSH EBX
        PUSH ESI
        PUSH EDI
        MOV EDI, ECX
        FDIV dword ptr [EDI + 0x154]
        MOV ESI, dword ptr [ESP + 0x84]
        MOV dword ptr [ESP + 0x18], EDI
        FLD dword ptr [g_0076d064]
        FDIV dword ptr [EDI + 0x158]
        FSTP dword ptr [ESP + 0x14]
        FLD dword ptr [ESI + 0x8]
        FSUB dword ptr [ESI + 0xc]
        FSUB dword ptr [EDI + 0x15c]
        FMUL ST(0), ST(1)
        FCOM dword ptr [g_0076c5b0]
        FNSTSW AX
        TEST AH, 0x1
        JZ l_4240
        FSTP ST(0)
        XOR BL, BL
        JMP l_4254
    l_4240:
        FSUB dword ptr [g_0076d070]
        FADD dword ptr [g_0076dd60]
        FSTP dword ptr [ESP + 0x10]
        MOV BL, byte ptr [ESP + 0x10]
    l_4254:
        FLD dword ptr [ESI + 0xc]
        MOV AL, byte ptr [EDI + 0x150]
        FADD dword ptr [ESI + 0x8]
        FSUB dword ptr [EDI + 0x15c]
        FMUL ST(0), ST(1)
        FSUB dword ptr [g_0076d070]
        FADD dword ptr [g_0076dd60]
        FSTP dword ptr [ESP + 0x10]
        MOV CL, byte ptr [ESP + 0x10]
        CMP CL, AL
        FSTP ST(0)
        MOV byte ptr [ESP + 0xf], CL
        JC l_428c
        DEC AL
        MOV byte ptr [ESP + 0xf], AL
    l_428c:
        FLD dword ptr [ESI]
        FSUB dword ptr [ESI + 0xc]
        FSUB dword ptr [EDI + 0x160]
        FMUL dword ptr [ESP + 0x14]
        FCOM dword ptr [g_0076c5b0]
        FNSTSW AX
        TEST AH, 0x1
        JZ l_42b2
        XOR DL, DL
        FSTP ST(0)
        MOV byte ptr [ESP + 0xe], DL
        JMP l_42cc
    l_42b2:
        FSUB dword ptr [g_0076d070]
        FADD dword ptr [g_0076dd60]
        FSTP dword ptr [ESP + 0x10]
        MOV AL, byte ptr [ESP + 0x10]
        MOV byte ptr [ESP + 0xe], AL
        MOV DL, AL
    l_42cc:
        FLD dword ptr [ESI]
        MOV AL, byte ptr [EDI + 0x151]
        FADD dword ptr [ESI + 0xc]
        FSUB dword ptr [EDI + 0x160]
        FMUL dword ptr [ESP + 0x14]
        FSUB dword ptr [g_0076d070]
        FADD dword ptr [g_0076dd60]
        FSTP dword ptr [ESP + 0x14]
        MOV CL, byte ptr [ESP + 0x14]
        CMP CL, AL
        MOV byte ptr [ESP + 0xd], CL
        JC l_4303
        DEC AL
        MOV byte ptr [ESP + 0xd], AL
    l_4303:
        CMP BL, byte ptr [ESP + 0xf]
        MOV byte ptr [ESP + 0x14], BL
        JA l_44b5
        PUSH EBP
    l_4312:
        CMP DL, byte ptr [ESP + 0x11]
        MOV byte ptr [ESP + 0x14], DL
        JA l_449e
        JMP l_4326
    l_4322:
        MOV EDI, dword ptr [ESP + 0x1c]
    l_4326:
        MOV ECX, dword ptr [ESP + 0x14]
        MOV EDX, dword ptr [ESP + 0x18]
        PUSH ECX
        PUSH EDX
        MOV ECX, EDI
        CALL FUN_004e2ee0
        MOV EBX, dword ptr [EAX + 0x15c]
        MOV dword ptr [ESP + 0x24], EAX
        TEST EBX, EBX
        JZ l_43df
    l_4341:
        MOV EBP, dword ptr [EBX]
        TEST EBP, EBP
        MOV EBX, dword ptr [EBX + 0x4]
        JZ l_43df
        MOV EDI, dword ptr [EBP + 0xd8]
        ADD EDI, 0xf0
        PUSH EDI
        LEA ECX, [ESP + 0x38]
        CALL FUN_00419480
        MOV EAX, dword ptr [EDI + 0x3c]
        MOV dword ptr [ESP + 0x40], EAX
        FLD dword ptr [ESP + 0x40]
        FADD dword ptr [ESI + 0xc]
        LEA ECX, [ESP + 0x28]
        FLD dword ptr [ESI]
        FSUB dword ptr [ESP + 0x34]
        FSTP dword ptr [ESP + 0x28]
        FLD dword ptr [ESI + 0x4]
        FSUB dword ptr [ESP + 0x38]
        FSTP dword ptr [ESP + 0x2c]
        FLD dword ptr [ESI + 0x8]
        FSUB dword ptr [ESP + 0x3c]
        FSTP dword ptr [ESP + 0x30]
        FLD ST(0)
        FMUL ST(0), ST(1)
        FSTP dword ptr [ESP + 0x20]
        FSTP ST(0)
        CALL FUN_0040cb00
        FSUBR dword ptr [ESP + 0x20]
        FLD dword ptr [g_007b220c]
        FCHS
        FCOMPP
        FNSTSW AX
        TEST AH, 0x41
        /* __emit: MSVC6 picks short JZ (74) but ref uses near form (0F 84 7B FF FF FF) */
        __emit 0x0F
        __emit 0x84
        __emit 0x7B
        __emit 0xFF
        __emit 0xFF
        __emit 0xFF
        MOV ECX, dword ptr [ESP + 0x90]
        PUSH ESI
        PUSH ECX
        PUSH EBP
        CALL dword ptr [ESP + 0x98]
        ADD ESP, 0xc
        /* __emit: backward JMP rel-offset miscomputed by MSVC6 (call-relocs between) */
        __emit 0xE9
        __emit 0x62
        __emit 0xFF
        __emit 0xFF
        __emit 0xFF
    l_43df:
        MOV EDX, dword ptr [ESP + 0x24]
        MOV EBX, dword ptr [EDX + 0x154]
        TEST EBX, EBX
        JZ l_4480
    l_43e9:
        MOV EDI, dword ptr [EBX]
        TEST EDI, EDI
        MOV EBX, dword ptr [EBX + 0x4]
        JZ l_4480
        MOV EAX, dword ptr [EDI + 0xd8]
        LEA ECX, [EAX + 0x80]
        PUSH ECX
        ADD EAX, 0xb0
        PUSH EAX
        LEA ECX, [ESP + 0x4c]
        CALL FUN_00417d80
        FLD dword ptr [ESP + 0x80]
        FADD dword ptr [ESI + 0xc]
        FLD dword ptr [ESI]
        FSUB dword ptr [ESP + 0x50]
        FLD dword ptr [ESI + 0x4]
        FSUB dword ptr [ESP + 0x60]
        FLD dword ptr [ESI + 0x8]
        FSUB dword ptr [ESP + 0x70]
        FLD ST(3)
        FMUL ST(0), ST(4)
        FLD ST(1)
        FMUL ST(0), ST(2)
        FLD ST(3)
        FMUL ST(0), ST(4)
        FADDP ST(1), ST(0)
        FLD ST(4)
        FMUL ST(0), ST(5)
        FADDP ST(1), ST(0)
        FSUBP ST(1), ST(0)
        FLD dword ptr [g_007b220c]
        FCHS
        FCOMPP
        FSTP ST(0)
        FSTP ST(0)
        FNSTSW AX
        FSTP ST(0)
        TEST AH, 0x41
        FSTP ST(0)
        /* __emit: backward JZ rel-offset miscomputed by MSVC6 (call-reloc between) */
        __emit 0x74
        __emit 0x82
        MOV EDX, dword ptr [ESP + 0x90]
        PUSH ESI
        PUSH EDX
        PUSH EDI
        CALL dword ptr [ESP + 0x98]
        ADD ESP, 0xc
        /* __emit: backward JMP rel-offset miscomputed by MSVC6 (call-reloc between) */
        __emit 0xE9
        __emit 0x69
        __emit 0xFF
        __emit 0xFF
        __emit 0xFF
    l_4480:
        MOV AL, byte ptr [ESP + 0x14]
        MOV CL, byte ptr [ESP + 0x11]
        INC AL
        CMP AL, CL
        MOV byte ptr [ESP + 0x14], AL
        JBE l_4322
        MOV DL, byte ptr [ESP + 0x12]
        MOV EDI, dword ptr [ESP + 0x1c]
    l_449e:
        MOV AL, byte ptr [ESP + 0x18]
        MOV CL, byte ptr [ESP + 0x13]
        INC AL
        CMP AL, CL
        MOV byte ptr [ESP + 0x18], AL
        JBE l_4312
        POP EBP
    l_44b5:
        POP EDI
        POP ESI
        POP EBX
        ADD ESP, 0x74
        RET 0xc
    }
}
