/*
 * FUN_004E3250 (3851 B) - Adept::CollisionGrid broad-phase update (__thiscall, RET 0x8).
 *
 * Large collision-grid update: iterates grid cell lists, computes cell
 * ranges via FPU, allocates cell objects, builds collision pair lists,
 * and calls FUN_004e2f40 per candidate. Heavy FPU + list management.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_004de340(void);
extern void __cdecl FUN_00417ad0(void);
extern void __cdecl FUN_0040c0e0(void);
extern void __cdecl FUN_00417d80(void);
extern void __cdecl FUN_00420840(void);
extern void __cdecl FUN_00420a40(void);
extern void __cdecl FUN_004e2ee0(void);
extern void __cdecl FUN_004179b0(void);
extern void __cdecl FUN_004e4550(void);
extern void __cdecl FUN_004e2be0(void);
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_004fea30(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_004e4160(void);
extern void __cdecl FUN_004e4180(void);
extern void __cdecl FUN_004e4190(void);
extern void __cdecl FUN_004e2f40(void);
extern void __cdecl FUN_004daa20(void);
extern void __cdecl FUN_004e45b0(void);
extern void __cdecl FUN_004e4600(void);
extern void __cdecl FUN_00421100(void);

extern float g_0076d064;
extern float g_0076c5b0;
extern float g_0076d070;
extern float g_0076dd60;
extern float g_007b220c;
extern char g_007dc730;
extern int g_008bd5d8;
extern int g_008bd5dc;
extern int g_008bd5e0;
extern int g_007b8810;

__declspec(naked) void __stdcall FUN_004e3250(void)
{
    __asm {
        SUB ESP, 0x11c
        PUSH EBX
        PUSH EBP
        PUSH ESI
        MOV ESI, ECX
        LEA EAX, [ESI + 0x174]
        MOV dword ptr [ESP + 0xb4], EAX
        MOV EAX, dword ptr [EAX]
        PUSH EDI
        MOV dword ptr [ESP + 0x3c], ESI
        MOV dword ptr [ESP + 0xbc], EAX
        MOV dword ptr [ESP + 0xb4], 0x773ef8
        MOV EDI, 0x772d80
    l_3286:
        TEST EAX, EAX
        JZ l_32db
        MOV EAX, dword ptr [EAX]
        TEST EAX, EAX
        JZ l_32db
        ADD EAX, 0x15c
        MOV dword ptr [ESP + 0x44], EAX
        MOV EAX, dword ptr [EAX]
        LEA ECX, [ESP + 0x40]
        MOV dword ptr [ESP + 0x48], EAX
        MOV dword ptr [ESP + 0x40], EDI
        CALL FUN_004de340
        TEST EAX, EAX
        JZ l_32c6
    l_32b0:
        LEA ECX, [ESP + 0x40]
        CALL FUN_00417ad0
        LEA ECX, [ESP + 0x40]
        CALL FUN_004de340
        TEST EAX, EAX
        JNZ l_32b0
    l_32c6:
        LEA ECX, [ESP + 0xb4]
        CALL FUN_00417ad0
        MOV EAX, dword ptr [ESP + 0xbc]
        JMP l_3286
    l_32db:
        FLD dword ptr [g_0076d064]
        MOV ECX, dword ptr [ESI + 0x16c]
        FDIV dword ptr [ESI + 0x154]
        LEA EAX, [ESI + 0x16c]
        MOV dword ptr [ESP + 0xcc], ECX
        LEA ECX, [ESP + 0xc4]
        MOV dword ptr [ESP + 0xc8], EAX
        MOV dword ptr [ESP + 0xc4], EDI
        MOV dword ptr [ESP + 0x28], 0x0
        FSTP dword ptr [ESP + 0x14]
        FLD dword ptr [g_0076d064]
        FDIV dword ptr [ESI + 0x158]
        FSTP dword ptr [ESP + 0x24]
        CALL FUN_0040c0e0
        MOV ESI, EAX
        TEST ESI, ESI
        JZ l_3556
    l_333a:
        MOV ECX, dword ptr [ESP + 0x28]
        MOV EDI, dword ptr [ESI + 0x128]
        MOV EBX, dword ptr [ESI + 0xd8]
        INC ECX
        TEST EDI, EDI
        MOV dword ptr [ESP + 0x28], ECX
        JNZ l_335b
        MOV EDI, dword ptr [ESI + 0x124]
        JMP l_3371
    l_335b:
        MOV EAX, dword ptr [ESI + 0x124]
        LEA EDX, [EBX + 0x20]
        LEA ECX, [EAX + 0x10]
        PUSH EDX
        PUSH ECX
        LEA ECX, [EAX + 0x50]
        CALL FUN_00417d80
    l_3371:
        LEA EDX, [EBX + 0x80]
        LEA EBP, [EDI + 0x10]
        PUSH EDX
        ADD EDI, 0x50
        PUSH EBP
        MOV ECX, EDI
        CALL FUN_00417d80
        PUSH EDI
        LEA ECX, [ESP + 0x44]
        CALL FUN_00420840
        ADD EBX, 0x20
        PUSH EBX
        PUSH EBP
        MOV ECX, EDI
        CALL FUN_00417d80
        PUSH EDI
        LEA ECX, [ESP + 0xe0]
        CALL FUN_00420840
        LEA EAX, [ESP + 0xdc]
        PUSH EAX
        LEA ECX, [ESP + 0x44]
        PUSH ECX
        LEA ECX, [ESP + 0xe4]
        CALL FUN_00420a40
        FLD dword ptr [ESP + 0xec]
        MOV EDX, dword ptr [ESP + 0x3c]
        FSUB dword ptr [EDX + 0x15c]
        FMUL dword ptr [ESP + 0x14]
        FCOM dword ptr [g_0076c5b0]
        FNSTSW AX
        TEST AH, 0x1
        JZ l_33ea
        FSTP ST(0)
        XOR DL, DL
        JMP l_33fe
    l_33ea:
        FSUB dword ptr [g_0076d070]
        FADD dword ptr [g_0076dd60]
        FSTP dword ptr [ESP + 0x1c]
        MOV DL, byte ptr [ESP + 0x1c]
    l_33fe:
        MOV EBP, dword ptr [ESP + 0x3c]
        FLD dword ptr [ESP + 0xf0]
        FSUB dword ptr [EBP + 0x15c]
        MOV AL, byte ptr [EBP + 0x150]
        MOV byte ptr [ESI + 0x138], DL
        FMUL dword ptr [ESP + 0x14]
        FSUB dword ptr [g_0076d070]
        FADD dword ptr [g_0076dd60]
        FSTP dword ptr [ESP + 0x1c]
        MOV CL, byte ptr [ESP + 0x1c]
        CMP CL, AL
        MOV byte ptr [ESI + 0x139], CL
        JC l_3445
        DEC AL
        MOV byte ptr [ESI + 0x139], AL
    l_3445:
        FLD dword ptr [ESP + 0xdc]
        FSUB dword ptr [EBP + 0x160]
        FMUL dword ptr [ESP + 0x24]
        FCOM dword ptr [g_0076c5b0]
        FNSTSW AX
        TEST AH, 0x1
        JZ l_3469
        FSTP ST(0)
        XOR AL, AL
        JMP l_347d
    l_3469:
        FSUB dword ptr [g_0076d070]
        FADD dword ptr [g_0076dd60]
        FSTP dword ptr [ESP + 0x1c]
        MOV AL, byte ptr [ESP + 0x1c]
    l_347d:
        FLD dword ptr [ESP + 0xe0]
        MOV byte ptr [ESI + 0x13a], AL
        FSUB dword ptr [EBP + 0x160]
        MOV AL, byte ptr [EBP + 0x151]
        FMUL dword ptr [ESP + 0x24]
        FSUB dword ptr [g_0076d070]
        FADD dword ptr [g_0076dd60]
        FSTP dword ptr [ESP + 0x1c]
        MOV CL, byte ptr [ESP + 0x1c]
        CMP CL, AL
        MOV byte ptr [ESI + 0x13b], CL
        JC l_34c0
        DEC AL
        MOV byte ptr [ESI + 0x13b], AL
    l_34c0:
        MOV CL, byte ptr [ESI + 0x139]
        MOV AL, DL
        CMP AL, CL
        MOV byte ptr [ESP + 0x18], AL
        JA l_3540
    l_34d0:
        MOV BL, byte ptr [ESI + 0x13a]
        CMP BL, byte ptr [ESI + 0x13b]
        MOV byte ptr [ESP + 0x20], BL
        JA l_3530
    l_34e2:
        MOV EAX, dword ptr [ESP + 0x20]
        MOV ECX, dword ptr [ESP + 0x18]
        PUSH EAX
        PUSH ECX
        MOV ECX, EBP
        CALL FUN_004e2ee0
        MOV ECX, dword ptr [EAX + 0x15c]
        TEST ECX, ECX
        LEA EDI, [EAX + 0x15c]
        JZ l_3508
        CMP dword ptr [ECX], 0x0
        JNZ l_3514
    l_3508:
        PUSH EAX
        LEA ECX, [EBP + 0x174]
        CALL FUN_004179b0
    l_3514:
        PUSH ESI
        MOV ECX, EDI
        CALL FUN_004179b0
        MOV AL, byte ptr [ESI + 0x13b]
        INC BL
        CMP BL, AL
        MOV byte ptr [ESP + 0x20], BL
        JBE l_34e2
        MOV AL, byte ptr [ESP + 0x18]
    l_3530:
        MOV CL, byte ptr [ESI + 0x139]
        INC AL
        CMP AL, CL
        MOV byte ptr [ESP + 0x18], AL
        JBE l_34d0
    l_3540:
        LEA ECX, [ESP + 0xc4]
        CALL FUN_0040c0e0
        MOV ESI, EAX
        TEST ESI, ESI
        JNZ l_333a
    l_3556:
        MOV AL, byte ptr [g_007dc730]
        TEST AL, AL
        JNZ l_3e96
        MOV ESI, dword ptr [ESP + 0x28]
        XOR EBX, EBX
        PUSH ESI
        LEA ECX, [ESP + 0x38]
        MOV dword ptr [ESP + 0x38], EBX
        MOV dword ptr [ESP + 0x3c], EBX
        CALL FUN_004e4550
        PUSH ESI
        LEA ECX, [ESP + 0x30]
        MOV dword ptr [ESP + 0x30], EBX
        MOV dword ptr [ESP + 0x34], EBX
        CALL FUN_004e2be0
        CMP ESI, EBX
        JBE l_359b
        MOV EDI, dword ptr [ESP + 0x2c]
        MOV ECX, ESI
        XOR EAX, EAX
        REP STOSD
    l_359b:
        MOV EDX, dword ptr [ESP + 0xb8]
        MOV EAX, dword ptr [EDX]
        LEA ECX, [ESP + 0xb4]
        MOV dword ptr [ESP + 0x20], EBX
        MOV dword ptr [ESP + 0xbc], EAX
        CALL FUN_0040c0e0
        MOV ESI, EAX
        CMP ESI, EBX
        MOV dword ptr [ESP + 0x18], ESI
        JZ l_3d8b
    l_35c9:
        MOV ECX, dword ptr [ESI + 0x15c]
        LEA EAX, [ESI + 0x15c]
        MOV dword ptr [ESP + 0xcc], ECX
        LEA ECX, [ESP + 0xc4]
        MOV dword ptr [ESP + 0xc8], EAX
        MOV dword ptr [ESP + 0xc4], 0x772d80
        CALL FUN_0040c0e0
        MOV EBP, EAX
        CMP EBP, EBX
        MOV dword ptr [ESP + 0x24], EBP
        JZ l_3d6f
        JMP l_360e
    l_360a:
        MOV ESI, dword ptr [ESP + 0x18]
    l_360e:
        PUSH 0x7b8d88
        LEA ECX, [ESP + 0x8c]
        CALL FUN_0040c410
        PUSH 0x8bd5d8
        LEA ECX, [ESP + 0x98]
        CALL FUN_0040c410
        PUSH 0x8bd5d8
        LEA ECX, [ESP + 0xa4]
        CALL FUN_0040c410
        MOV EDX, dword ptr [EBP + 0x124]
        LEA EAX, [ESI + 0x154]
        MOV dword ptr [ESP + 0xe0], EAX
        MOV EAX, dword ptr [EAX]
        LEA ECX, [ESP + 0xdc]
        MOV dword ptr [ESP + 0x7c], EDX
        MOV dword ptr [ESP + 0xe4], EAX
        MOV dword ptr [ESP + 0xdc], 0x772d80
        CALL FUN_0040c0e0
        TEST EAX, EAX
        MOV dword ptr [ESP + 0x84], EAX
        JZ l_38e4
    l_3687:
        MOV ECX, dword ptr [EAX + 0x10]
        SHR ECX, 0xf
        TEST CL, 0x1
        JZ l_38c9
        MOV CL, byte ptr [EBP + 0x138]
        MOV DL, byte ptr [EAX + 0x138]
        CMP CL, DL
        MOV BL, CL
        JA l_36aa
        MOV BL, DL
    l_36aa:
        MOV CL, byte ptr [EBP + 0x13a]
        MOV DL, byte ptr [EAX + 0x13a]
        CMP CL, DL
        JA l_36bc
        MOV CL, DL
    l_36bc:
        CMP BL, byte ptr [ESI + 0x150]
        JNZ l_38c9
        CMP CL, byte ptr [ESI + 0x151]
        JNZ l_38c9
        MOV ECX, dword ptr [EAX + 0x124]
        TEST ECX, ECX
        MOV dword ptr [ESP + 0x80], ECX
        JNZ l_36f2
        MOV ECX, dword ptr [EAX + 0x128]
        MOV dword ptr [ESP + 0x80], ECX
    l_36f2:
        MOV EDX, dword ptr [EAX + 0xd8]
        ADD EDX, 0x80
        PUSH EDX
        PUSH EAX
        MOV EAX, dword ptr [ESP + 0x84]
        PUSH EAX
        CALL FUN_004fea30
        TEST EAX, EAX
        MOV dword ptr [ESP + 0x80], EAX
        JZ l_38c9
        MOV EDX, dword ptr [ESP + 0x28]
        XOR EDI, EDI
        XOR ESI, ESI
        CMP EDX, EDI
        MOV dword ptr [ESP + 0x10], EDI
        JBE l_3785
    l_3730:
        MOV ECX, dword ptr [ESP + 0x2c]
        MOV EAX, dword ptr [ECX]
        CMP EAX, EDI
        JZ l_3744
        CMP EAX, EBP
        JZ l_377a
        INC ESI
        ADD ECX, 0x4
        CMP ESI, EDX
        /* __emit: backward JC rel-offset miscomputed by MSVC6 (call-reloc) */
        __emit 0x72
        __emit 0xEE
        JMP l_3785
    l_3744:
        PUSH 0x8
        CALL FUN_004084d0
        ADD ESP, 0x4
        CMP EAX, EDI
        JZ l_3759
        MOV dword ptr [EAX], EDI
        MOV dword ptr [EAX + 0x4], EDI
        JMP l_375b
    l_3759:
        XOR EAX, EAX
    l_375b:
        MOV ECX, dword ptr [ESP + 0x34]
        MOV dword ptr [ECX + ESI*0x4], EAX
        MOV EDX, dword ptr [ESP + 0x2c]
        MOV EDI, EAX
        MOV EAX, dword ptr [ESP + 0x20]
        INC EAX
        MOV dword ptr [ESP + 0x10], EDI
        MOV dword ptr [EDX + ESI*0x4], EBP
        MOV dword ptr [ESP + 0x20], EAX
        JMP l_3785
    l_377a:
        MOV EAX, dword ptr [ESP + 0x34]
        MOV EDI, dword ptr [EAX + ESI*0x4]
        MOV dword ptr [ESP + 0x10], EDI
    l_3785:
        MOV EAX, dword ptr [EDI + 0x4]
        LEA EBX, [EAX + 0x1]
        CMP EBX, EAX
        MOV dword ptr [ESP + 0x14], EAX
        JZ l_3859
        TEST EBX, EBX
        JBE l_3832
        LEA ECX, [EBX*0x8 + 0x0]
        SUB ECX, EBX
        SHL ECX, 0x3
        PUSH ECX
        CALL FUN_004084d0
        MOV EDI, EAX
        ADD ESP, 0x4
        TEST EDI, EDI
        JZ l_37d7
        LEA EAX, [EBX + -0x1]
        TEST EAX, EAX
        MOV ESI, EDI
        JL l_37d3
        LEA EBP, [EAX + 0x1]
    l_37c6:
        MOV ECX, ESI
        CALL FUN_004e4180
        ADD ESI, 0x38
        DEC EBP
        JNZ l_37c6
    l_37d3:
        MOV EBX, EDI
        JMP l_37d9
    l_37d7:
        XOR EBX, EBX
    l_37d9:
        MOV EDX, dword ptr [ESP + 0x10]
        MOV EBP, dword ptr [EDX]
        TEST EBP, EBP
        JZ l_382a
        MOV EAX, dword ptr [ESP + 0x14]
        LEA ECX, [EAX + 0x1]
        CMP ECX, EAX
        JNC l_37f0
        MOV EAX, ECX
    l_37f0:
        MOV ECX, EAX
        DEC EAX
        TEST ECX, ECX
        JZ l_381b
        LEA EDX, [EAX*0x8 + 0x0]
        SUB EDX, EAX
        LEA ESI, [EBX + EDX*0x8]
        SUB EBP, EBX
        LEA EDI, [EAX + 0x1]
    l_3808:
        LEA EAX, [ESI + EBP*0x1]
        PUSH EAX
        MOV ECX, ESI
        CALL FUN_004e4190
        DEC EDI
        SUB ESI, 0x38
        TEST EDI, EDI
        JA l_3808
    l_381b:
        MOV ECX, dword ptr [ESP + 0x10]
        MOV EAX, dword ptr [ECX]
        PUSH EAX
        CALL FUN_004084e0
        ADD ESP, 0x4
    l_382a:
        MOV EDX, dword ptr [ESP + 0x10]
        MOV dword ptr [EDX], EBX
        JMP l_3843
    l_3832:
        MOV EAX, dword ptr [EDI]
        PUSH EAX
        CALL FUN_004084e0
        ADD ESP, 0x4
        MOV dword ptr [EDI], 0x0
    l_3843:
        MOV ECX, dword ptr [ESP + 0x14]
        MOV EDX, dword ptr [ESP + 0x10]
        MOV EBP, dword ptr [ESP + 0x24]
        LEA EAX, [ECX + 0x1]
        MOV dword ptr [EDX + 0x4], EAX
        MOV EAX, ECX
        MOV EDI, EDX
    l_3859:
        MOV EDX, dword ptr [EDI]
        LEA ECX, [EAX*0x8 + 0x0]
        SUB ECX, EAX
        MOV EAX, dword ptr [ESP + 0x7c]
        LEA ESI, [EDX + ECX*0x8]
        MOV dword ptr [ESI], EAX
        MOV ECX, dword ptr [ESP + 0x80]
        MOV dword ptr [ESI + 0x4], ECX
        MOV EDX, dword ptr [ESP + 0x84]
        LEA EAX, [ESP + 0x88]
        PUSH EAX
        LEA ECX, [ESI + 0xc]
        MOV dword ptr [ESI + 0x8], EDX
        CALL FUN_0040c410
        LEA ECX, [ESP + 0x94]
        PUSH ECX
        LEA ECX, [ESI + 0x18]
        CALL FUN_00421100
        LEA EDX, [ESP + 0xa0]
        PUSH EDX
        LEA ECX, [ESI + 0x24]
        CALL FUN_00421100
        MOV EAX, dword ptr [ESP + 0xac]
        MOV dword ptr [ESI + 0x30], EAX
        MOV CL, byte ptr [ESP + 0xb0]
        MOV byte ptr [ESI + 0x34], CL
        MOV ESI, dword ptr [ESP + 0x18]
    l_38c9:
        LEA ECX, [ESP + 0xdc]
        CALL FUN_0040c0e0
        TEST EAX, EAX
        MOV dword ptr [ESP + 0x84], EAX
        JNZ l_3687
    l_38e4:
        MOV EDX, dword ptr [g_007b8810]
        PUSH EDX
        PUSH 0xc
        CALL FUN_004084c0
        MOV ESI, EAX
        ADD ESP, 0x8
        TEST ESI, ESI
        JZ l_3912
        LEA EAX, [ESP + 0xc4]
        PUSH EAX
        MOV ECX, ESI
        CALL FUN_004e4160
        MOV dword ptr [ESI], 0x772d80
        JMP l_3914
    l_3912:
        XOR ESI, ESI
    l_3914:
        MOV EDI, dword ptr [ESP + 0x18]
        MOV dword ptr [ESP + 0x1c], ESI
    l_391c:
        MOV ECX, dword ptr [ESI + 0x8]
        TEST ECX, ECX
        JZ l_392d
        MOV EAX, dword ptr [ECX]
        MOV ECX, dword ptr [ECX + 0x4]
        MOV dword ptr [ESI + 0x8], ECX
        JMP l_392f
    l_392d:
        XOR EAX, EAX
    l_392f:
        TEST EAX, EAX
        MOV dword ptr [ESP + 0x84], EAX
        JZ l_3d4c
        CMP EAX, dword ptr [EBP + 0x13c]
        JZ l_391c
        MOV CL, byte ptr [EBP + 0x138]
        MOV DL, byte ptr [EAX + 0x138]
        CMP CL, DL
        MOV BL, CL
        JA l_395a
        MOV BL, DL
    l_395a:
        MOV CL, byte ptr [EBP + 0x13a]
        MOV DL, byte ptr [EAX + 0x13a]
        CMP CL, DL
        JA l_396c
        MOV CL, DL
    l_396c:
        CMP BL, byte ptr [EDI + 0x150]
        JNZ l_391c
        CMP CL, byte ptr [EDI + 0x151]
        JNZ l_391c
        MOV ECX, dword ptr [EAX + 0x124]
        MOV dword ptr [ESP + 0x80], ECX
        MOV EDX, dword ptr [EAX + 0xd8]
        ADD EDX, 0x20
        PUSH EDX
        MOV EDX, dword ptr [ESP + 0x80]
        PUSH EAX
        PUSH EDX
        CALL FUN_004fea30
        TEST EAX, EAX
        MOV dword ptr [ESP + 0x80], EAX
        JZ l_391c
        MOV EDX, dword ptr [ESP + 0x28]
        XOR EBX, EBX
        XOR ESI, ESI
        TEST EDX, EDX
        MOV dword ptr [ESP + 0x10], EBX
        JBE l_3a25
    l_39c8:
        MOV ECX, dword ptr [ESP + 0x2c]
        MOV EDI, dword ptr [ESP + 0x24]
        MOV EAX, dword ptr [ECX]
        TEST EAX, EAX
        JZ l_39dc
        CMP EAX, EDI
        JZ l_3a1a
        INC ESI
        ADD ECX, 0x4
        CMP ESI, EDX
        /* __emit: backward JC rel-offset miscomputed by MSVC6 (call-reloc) */
        __emit 0x72
        __emit 0xEE
        JMP l_3a25
    l_39dc:
        PUSH 0x8
        CALL FUN_004084d0
        ADD ESP, 0x4
        TEST EAX, EAX
        JZ l_39f9
        MOV dword ptr [EAX], 0x0
        MOV dword ptr [EAX + 0x4], 0x0
        JMP l_39fb
    l_39f9:
        XOR EAX, EAX
    l_39fb:
        MOV ECX, dword ptr [ESP + 0x34]
        MOV dword ptr [ECX + ESI*0x4], EAX
        MOV EDX, dword ptr [ESP + 0x2c]
        MOV EBX, EAX
        MOV EAX, dword ptr [ESP + 0x20]
        INC EAX
        MOV dword ptr [ESP + 0x10], EBX
        MOV dword ptr [EDX + ESI*0x4], EDI
        MOV dword ptr [ESP + 0x20], EAX
        JMP l_3a25
    l_3a1a:
        MOV EAX, dword ptr [ESP + 0x34]
        MOV EBX, dword ptr [EAX + ESI*0x4]
        MOV dword ptr [ESP + 0x10], EBX
    l_3a25:
        MOV EBP, dword ptr [EBX + 0x4]
        LEA EAX, [EBP + 0x1]
        CMP EAX, EBP
        MOV dword ptr [ESP + 0xc0], EBP
        JZ l_3afe
        TEST EAX, EAX
        JBE l_3ae7
        LEA EAX, [EBP + 0x1]
        LEA ECX, [EAX*0x8 + 0x0]
        SUB ECX, EAX
        SHL ECX, 0x3
        PUSH ECX
        CALL FUN_004084d0
        MOV EDI, EAX
        ADD ESP, 0x4
        TEST EDI, EDI
        JZ l_3a86
        LEA EAX, [EBP]
        TEST EAX, EAX
        MOV ESI, EDI
        JL l_3a80
        LEA EBP, [EAX + 0x1]
    l_3a6c:
        MOV ECX, ESI
        CALL FUN_004e4180
        ADD ESI, 0x38
        DEC EBP
        JNZ l_3a6c
        MOV EBP, dword ptr [ESP + 0xc0]
    l_3a80:
        MOV dword ptr [ESP + 0x14], EDI
        JMP l_3a8e
    l_3a86:
        MOV dword ptr [ESP + 0x14], 0x0
    l_3a8e:
        CMP dword ptr [EBX], 0x0
        JZ l_3adf
        LEA EAX, [EBP + 0x1]
        CMP EAX, EBP
        JC l_3a9c
        MOV EAX, EBP
    l_3a9c:
        MOV EDX, EAX
        DEC EAX
        TEST EDX, EDX
        JZ l_3ad4
        MOV ECX, dword ptr [ESP + 0x14]
        MOV EBP, dword ptr [EBX]
        LEA EDX, [EAX*0x8 + 0x0]
        SUB EDX, EAX
        LEA ESI, [ECX + EDX*0x8]
        SUB EBP, ECX
        LEA EDI, [EAX + 0x1]
    l_3aba:
        LEA EAX, [ESI + EBP*0x1]
        PUSH EAX
        MOV ECX, ESI
        CALL FUN_004e4190
        DEC EDI
        SUB ESI, 0x38
        TEST EDI, EDI
        JA l_3aba
        MOV EBP, dword ptr [ESP + 0xc0]
    l_3ad4:
        MOV EAX, dword ptr [EBX]
        PUSH EAX
        CALL FUN_004084e0
        ADD ESP, 0x4
    l_3adf:
        MOV ECX, dword ptr [ESP + 0x14]
        MOV dword ptr [EBX], ECX
        JMP l_3af8
    l_3ae7:
        MOV EDX, dword ptr [EBX]
        PUSH EDX
        CALL FUN_004084e0
        ADD ESP, 0x4
        MOV dword ptr [EBX], 0x0
    l_3af8:
        LEA EAX, [EBP + 0x1]
        MOV dword ptr [EBX + 0x4], EAX
    l_3afe:
        MOV EDX, dword ptr [ESP + 0x7c]
        MOV ECX, dword ptr [EBX]
        LEA EAX, [EBP*0x8 + 0x0]
        SUB EAX, EBP
        LEA ESI, [ECX + EAX*0x8]
        MOV dword ptr [ESI], EDX
        MOV EAX, dword ptr [ESP + 0x80]
        MOV dword ptr [ESI + 0x4], EAX
        MOV ECX, dword ptr [ESP + 0x84]
        LEA EDX, [ESP + 0x88]
        MOV dword ptr [ESI + 0x8], ECX
        PUSH EDX
        LEA ECX, [ESI + 0xc]
        CALL FUN_0040c410
        LEA EAX, [ESP + 0x94]
        PUSH EAX
        LEA ECX, [ESI + 0x18]
        CALL FUN_00421100
        LEA ECX, [ESP + 0xa0]
        PUSH ECX
        LEA ECX, [ESI + 0x24]
        CALL FUN_00421100
        MOV EDX, dword ptr [ESP + 0xac]
        MOV dword ptr [ESI + 0x30], EDX
        MOV AL, byte ptr [ESP + 0xb0]
        MOV EDX, dword ptr [ESP + 0x24]
        MOV byte ptr [ESI + 0x34], AL
        MOV EAX, dword ptr [ESP + 0x7c]
        MOV ECX, dword ptr [ESP + 0x80]
        MOV EDI, dword ptr [ESP + 0x84]
        MOV dword ptr [ESP + 0x80], EAX
        MOV EAX, dword ptr [ESP + 0x28]
        XOR ESI, ESI
        TEST EAX, EAX
        MOV dword ptr [ESP + 0x7c], ECX
        MOV dword ptr [ESP + 0x84], EDX
        JBE l_3bff
    l_3ba2:
        MOV ECX, dword ptr [ESP + 0x2c]
        MOV EDX, EAX
        MOV EAX, dword ptr [ECX]
        TEST EAX, EAX
        JZ l_3bb6
        CMP EAX, EDI
        JZ l_3bf4
        INC ESI
        ADD ECX, 0x4
        CMP ESI, EDX
        /* __emit: backward JC rel-offset miscomputed by MSVC6 (call-reloc) */
        __emit 0x72
        __emit 0xEE
        JMP l_3bff
    l_3bb6:
        PUSH 0x8
        CALL FUN_004084d0
        ADD ESP, 0x4
        TEST EAX, EAX
        JZ l_3bd3
        MOV dword ptr [EAX], 0x0
        MOV dword ptr [EAX + 0x4], 0x0
        JMP l_3bd5
    l_3bd3:
        XOR EAX, EAX
    l_3bd5:
        MOV ECX, dword ptr [ESP + 0x34]
        MOV dword ptr [ECX + ESI*0x4], EAX
        MOV EDX, dword ptr [ESP + 0x2c]
        MOV EBX, EAX
        MOV EAX, dword ptr [ESP + 0x20]
        INC EAX
        MOV dword ptr [ESP + 0x10], EBX
        MOV dword ptr [EDX + ESI*0x4], EDI
        MOV dword ptr [ESP + 0x20], EAX
        JMP l_3bff
    l_3bf4:
        MOV EAX, dword ptr [ESP + 0x34]
        MOV EBX, dword ptr [EAX + ESI*0x4]
        MOV dword ptr [ESP + 0x10], EBX
    l_3bff:
        MOV EAX, dword ptr [EBX + 0x4]
        LEA EBP, [EAX + 0x1]
        CMP EBP, EAX
        MOV dword ptr [ESP + 0x14], EAX
        JZ l_3ccf
        TEST EBP, EBP
        JBE l_3cac
        LEA ECX, [EBP*0x8 + 0x0]
        SUB ECX, EBP
        SHL ECX, 0x3
        PUSH ECX
        CALL FUN_004084d0
        MOV EDI, EAX
        ADD ESP, 0x4
        TEST EDI, EDI
        JZ l_3c51
        LEA EAX, [EBP + -0x1]
        TEST EAX, EAX
        MOV ESI, EDI
        JL l_3c4d
        LEA EBP, [EAX + 0x1]
    l_3c40:
        MOV ECX, ESI
        CALL FUN_004e4180
        ADD ESI, 0x38
        DEC EBP
        JNZ l_3c40
    l_3c4d:
        MOV EBX, EDI
        JMP l_3c53
    l_3c51:
        XOR EBX, EBX
    l_3c53:
        MOV EDX, dword ptr [ESP + 0x10]
        MOV EBP, dword ptr [EDX]
        TEST EBP, EBP
        JZ l_3ca4
        MOV EAX, dword ptr [ESP + 0x14]
        LEA ECX, [EAX + 0x1]
        CMP ECX, EAX
        JNC l_3c6a
        MOV EAX, ECX
    l_3c6a:
        MOV ECX, EAX
        DEC EAX
        TEST ECX, ECX
        JZ l_3c95
        LEA EDX, [EAX*0x8 + 0x0]
        SUB EDX, EAX
        LEA ESI, [EBX + EDX*0x8]
        SUB EBP, EBX
        LEA EDI, [EAX + 0x1]
    l_3c82:
        LEA EAX, [ESI + EBP*0x1]
        PUSH EAX
        MOV ECX, ESI
        CALL FUN_004e4190
        DEC EDI
        SUB ESI, 0x38
        TEST EDI, EDI
        JA l_3c82
    l_3c95:
        MOV ECX, dword ptr [ESP + 0x10]
        MOV EAX, dword ptr [ECX]
        PUSH EAX
        CALL FUN_004084e0
        ADD ESP, 0x4
    l_3ca4:
        MOV EDX, dword ptr [ESP + 0x10]
        MOV dword ptr [EDX], EBX
        JMP l_3cbd
    l_3cac:
        MOV EAX, dword ptr [EBX]
        PUSH EAX
        CALL FUN_004084e0
        ADD ESP, 0x4
        MOV dword ptr [EBX], 0x0
    l_3cbd:
        MOV ECX, dword ptr [ESP + 0x14]
        MOV EDX, dword ptr [ESP + 0x10]
        LEA EAX, [ECX + 0x1]
        MOV dword ptr [EDX + 0x4], EAX
        MOV EAX, ECX
        MOV EBX, EDX
    l_3ccf:
        MOV EDX, dword ptr [EBX]
        LEA ECX, [EAX*0x8 + 0x0]
        SUB ECX, EAX
        MOV EAX, dword ptr [ESP + 0x7c]
        LEA ESI, [EDX + ECX*0x8]
        MOV dword ptr [ESI], EAX
        MOV ECX, dword ptr [ESP + 0x80]
        MOV dword ptr [ESI + 0x4], ECX
        MOV EDX, dword ptr [ESP + 0x84]
        LEA EAX, [ESP + 0x88]
        PUSH EAX
        LEA ECX, [ESI + 0xc]
        MOV dword ptr [ESI + 0x8], EDX
        CALL FUN_0040c410
        LEA ECX, [ESP + 0x94]
        PUSH ECX
        LEA ECX, [ESI + 0x18]
        CALL FUN_00421100
        LEA EDX, [ESP + 0xa0]
        PUSH EDX
        LEA ECX, [ESI + 0x24]
        CALL FUN_00421100
        MOV EAX, dword ptr [ESP + 0xac]
        MOV EDI, dword ptr [ESP + 0x18]
        MOV EBP, dword ptr [ESP + 0x24]
        MOV dword ptr [ESI + 0x30], EAX
        MOV CL, byte ptr [ESP + 0xb0]
        MOV byte ptr [ESI + 0x34], CL
        MOV ESI, dword ptr [ESP + 0x1c]
        JMP l_391c
    l_3d4c:
        PUSH ESI
        CALL FUN_004084e0
        ADD ESP, 0x4
        LEA ECX, [ESP + 0xc4]
        CALL FUN_0040c0e0
        MOV EBP, EAX
        TEST EBP, EBP
        MOV dword ptr [ESP + 0x24], EBP
        JNZ l_360a
    l_3d6f:
        LEA ECX, [ESP + 0xb4]
        CALL FUN_0040c0e0
        MOV ESI, EAX
        XOR EBX, EBX
        CMP ESI, EBX
        MOV dword ptr [ESP + 0x18], ESI
        JNZ l_35c9
    l_3d8b:
        MOV EBP, dword ptr [ESP + 0x20]
        XOR ESI, ESI
        PUSH EBP
        LEA ECX, [ESP + 0x5c]
        MOV dword ptr [ESP + 0x5c], ESI
        MOV dword ptr [ESP + 0x60], ESI
        CALL FUN_004e45b0
        PUSH EBP
        LEA ECX, [ESP + 0x44]
        MOV dword ptr [ESP + 0x44], ESI
        MOV dword ptr [ESP + 0x48], ESI
        CALL FUN_004e4600
        CMP EBP, ESI
        JLE l_3e52
        XOR EBX, EBX
    l_3dbf:
        MOV EDX, dword ptr [ESP + 0x2c]
        MOV ECX, dword ptr [EDX + ESI*0x4]
        MOV AL, byte ptr [ECX + 0x144]
        TEST AL, AL
        JZ l_3def
        MOV EAX, dword ptr [ESP + 0x58]
        MOV EDX, dword ptr [ECX]
        LEA EDI, [EAX + ESI*0x1]
        MOV EAX, dword ptr [ESP + 0x34]
        MOV EAX, dword ptr [EAX + ESI*0x4]
        PUSH EAX
        MOV EAX, dword ptr [ESP + 0x44]
        ADD EAX, EBX
        PUSH EAX
        CALL dword ptr [EDX + 0x44]
        MOV byte ptr [EDI], AL
        JMP l_3e1a
    l_3def:
        MOV ECX, dword ptr [ESP + 0x58]
        MOV byte ptr [ECX + ESI*0x1], 0x0
        MOV EDX, dword ptr [ESP + 0x34]
        MOV EDI, dword ptr [EDX + ESI*0x4]
        TEST EDI, EDI
        JZ l_3e1a
        MOV EAX, dword ptr [EDI]
        TEST EAX, EAX
        JZ l_3e11
        PUSH EAX
        CALL FUN_004084e0
        ADD ESP, 0x4
    l_3e11:
        PUSH EDI
        CALL FUN_004084e0
        ADD ESP, 0x4
    l_3e1a:
        INC ESI
        ADD EBX, 0x30
        CMP ESI, EBP
        JL l_3dbf
        XOR ESI, ESI
        CMP EBP, ESI
        JLE l_3e52
        XOR EDI, EDI
    l_3e2a:
        MOV EAX, dword ptr [ESP + 0x58]
        CMP byte ptr [EAX + ESI*0x1], 0x0
        JZ l_3e48
        MOV ECX, dword ptr [ESP + 0x40]
        MOV EAX, dword ptr [ESP + 0x2c]
        LEA EDX, [EDI + ECX*0x1]
        MOV ECX, dword ptr [EAX + ESI*0x4]
        PUSH EDX
        CALL FUN_004daa20
    l_3e48:
        INC ESI
        ADD EDI, 0x30
        CMP ESI, EBP
        JL l_3e2a
        XOR ESI, ESI
    l_3e52:
        MOV EAX, dword ptr [ESP + 0x40]
        CMP EAX, ESI
        JZ l_3e63
        PUSH EAX
        CALL FUN_004084e0
        ADD ESP, 0x4
    l_3e63:
        MOV EAX, dword ptr [ESP + 0x58]
        CMP EAX, ESI
        JZ l_3e74
        PUSH EAX
        CALL FUN_004084e0
        ADD ESP, 0x4
    l_3e74:
        MOV EAX, dword ptr [ESP + 0x2c]
        CMP EAX, ESI
        JZ l_3e85
        PUSH EAX
        CALL FUN_004084e0
        ADD ESP, 0x4
    l_3e85:
        MOV EAX, dword ptr [ESP + 0x34]
        CMP EAX, ESI
        JZ l_3e96
        PUSH EAX
        CALL FUN_004084e0
        ADD ESP, 0x4
    l_3e96:
        MOV ECX, dword ptr [ESP + 0x3c]
        MOV EBP, dword ptr [ECX + 0x164]
    l_3ea0:
        XOR EBX, EBX
        JMP l_3ea6
    l_3ea4:
        FSTP ST(0)
    l_3ea6:
        CMP EBP, EBX
        JZ l_414e
        MOV EDI, dword ptr [EBP]
        CMP EDI, EBX
        MOV EBP, dword ptr [EBP + 0x4]
        JZ l_414e
        MOV EAX, dword ptr [EDI + 0xd8]
        MOV EDX, dword ptr [EAX + 0x8c]
        MOV dword ptr [ESP + 0x60], EDX
        MOV ECX, dword ptr [EAX + 0x9c]
        MOV dword ptr [ESP + 0x64], ECX
        MOV EDX, dword ptr [EAX + 0xac]
        MOV dword ptr [ESP + 0x68], EDX
        FLD dword ptr [EAX + 0x2c]
        FSUB dword ptr [ESP + 0x60]
        MOV ECX, dword ptr [EAX + 0x3c]
        MOV EDX, dword ptr [EAX + 0x4c]
        MOV dword ptr [ESP + 0x44], ECX
        FLD dword ptr [ESP + 0x44]
        FSUB dword ptr [ESP + 0x64]
        MOV dword ptr [ESP + 0x48], EDX
        FSTP dword ptr [ESP + 0x44]
        FLD dword ptr [ESP + 0x48]
        FSUB dword ptr [ESP + 0x68]
        FST dword ptr [ESP + 0x48]
        FLD dword ptr [ESP + 0x44]
        FLD ST(2)
        FMUL ST(0), ST(3)
        FLD ST(1)
        FMUL ST(0), ST(2)
        FADDP ST(1), ST(0)
        FLD ST(2)
        FMUL ST(0), ST(3)
        FADDP ST(1), ST(0)
        FSQRT
        FSTP dword ptr [ESP + 0x78]
        FSTP ST(0)
        FSTP ST(0)
        FLD dword ptr [ESP + 0x78]
        FABS
        FLD dword ptr [g_007b220c]
        FCOMPP
        FNSTSW AX
        TEST AH, 0x1
        JZ l_3ea4
        FLD dword ptr [g_0076d064]
        MOV EAX, dword ptr [g_008bd5d8]
        FDIV dword ptr [ESP + 0x78]
        MOV ECX, dword ptr [g_008bd5dc]
        MOV EDX, dword ptr [g_008bd5e0]
        MOV dword ptr [ESP + 0x118], EAX
        MOV dword ptr [ESP + 0x11c], ECX
        LEA EAX, [ESP + 0x60]
        LEA ECX, [ESP + 0x10c]
        MOV dword ptr [ESP + 0xc4], EAX
        MOV EAX, dword ptr [EDI + 0x10]
        MOV dword ptr [ESP + 0xc8], ECX
        LEA ECX, [ESP + 0xc4]
        MOV dword ptr [ESP + 0x120], EDX
        MOV EDX, dword ptr [EDI + 0x13c]
        AND EAX, 0x1f000
        PUSH ECX
        MOV ECX, dword ptr [ESP + 0x40]
        MOV dword ptr [ESP + 0xd0], EBX
        MOV dword ptr [ESP + 0xd8], EDX
        MOV dword ptr [ESP + 0xdc], EAX
        FSTP dword ptr [ESP + 0x1c]
        FMUL dword ptr [ESP + 0x1c]
        FSTP dword ptr [ESP + 0x70]
        FLD dword ptr [ESP + 0x48]
        FMUL dword ptr [ESP + 0x1c]
        FSTP dword ptr [ESP + 0x74]
        FLD dword ptr [ESP + 0x4c]
        FMUL dword ptr [ESP + 0x1c]
        FSTP dword ptr [ESP + 0x78]
        CALL FUN_004e2f40
        CMP EAX, EBX
        MOV dword ptr [ESP + 0xfc], EAX
        MOV dword ptr [ESP + 0xf8], EBX
        MOV dword ptr [ESP + 0xf4], EBX
        JZ l_3ea0
        FLD qword ptr [ESP + 0x130]
        MOV DL, byte ptr [ESP + 0xd0]
        FSUB qword ptr [EDI + 0xe4]
        PUSH 0x8
        FLD dword ptr [ESP + 0x1c]
        MOV byte ptr [ESP + 0x12c], DL
        FMUL dword ptr [ESP + 0x7c]
        FMULP ST(1), ST(0)
        FSTP dword ptr [ESP + 0x128]
        FLD dword ptr [ESP + 0x70]
        FMUL dword ptr [ESP + 0x7c]
        FLD dword ptr [ESP + 0x74]
        FMUL dword ptr [ESP + 0x7c]
        FSTP dword ptr [ESP + 0xe4]
        FLD dword ptr [ESP + 0x78]
        FMUL dword ptr [ESP + 0x7c]
        FSTP dword ptr [ESP + 0xe8]
        FADD dword ptr [ESP + 0x64]
        FSTP dword ptr [ESP + 0x104]
        FLD dword ptr [ESP + 0xe4]
        FADD dword ptr [ESP + 0x68]
        FSTP dword ptr [ESP + 0x108]
        FLD dword ptr [ESP + 0xe8]
        FADD dword ptr [ESP + 0x6c]
        FSTP dword ptr [ESP + 0x10c]
        CALL FUN_004084d0
        MOV ESI, EAX
        ADD ESP, 0x4
        CMP ESI, EBX
        JZ l_40aa
        PUSH 0x38
        MOV dword ptr [ESI], EBX
        MOV dword ptr [ESI + 0x4], 0x1
        CALL FUN_004084d0
        ADD ESP, 0x4
        MOV dword ptr [ESI], EAX
        JMP l_40ac
    l_40aa:
        XOR ESI, ESI
    l_40ac:
        MOV EAX, dword ptr [ESI]
        MOV ECX, dword ptr [ESP + 0xf4]
        MOV dword ptr [EAX], ECX
        MOV EDX, dword ptr [ESP + 0xf8]
        MOV dword ptr [EAX + 0x4], EDX
        MOV ECX, dword ptr [ESP + 0xfc]
        MOV dword ptr [EAX + 0x8], ECX
        MOV EDX, dword ptr [ESP + 0x100]
        MOV dword ptr [EAX + 0xc], EDX
        MOV ECX, dword ptr [ESP + 0x104]
        MOV dword ptr [EAX + 0x10], ECX
        MOV EDX, dword ptr [ESP + 0x108]
        MOV dword ptr [EAX + 0x14], EDX
        MOV ECX, dword ptr [ESP + 0x10c]
        MOV dword ptr [EAX + 0x18], ECX
        MOV EDX, dword ptr [ESP + 0x110]
        MOV dword ptr [EAX + 0x1c], EDX
        MOV ECX, dword ptr [ESP + 0x114]
        MOV dword ptr [EAX + 0x20], ECX
        MOV EDX, dword ptr [ESP + 0x118]
        MOV dword ptr [EAX + 0x24], EDX
        MOV ECX, dword ptr [ESP + 0x11c]
        MOV dword ptr [EAX + 0x28], ECX
        MOV EDX, dword ptr [ESP + 0x120]
        MOV dword ptr [EAX + 0x2c], EDX
        MOV ECX, dword ptr [ESP + 0x124]
        MOV dword ptr [EAX + 0x30], ECX
        MOV DL, byte ptr [ESP + 0x128]
        PUSH ESI
        LEA ECX, [ESP + 0x80]
        MOV byte ptr [EAX + 0x34], DL
        MOV EAX, dword ptr [EDI]
        PUSH ECX
        MOV ECX, EDI
        CALL dword ptr [EAX + 0x44]
        JMP l_3ea6
    l_414e:
        POP EDI
        POP ESI
        POP EBP
        POP EBX
        ADD ESP, 0x11c
        RET 0x8
    }
}
