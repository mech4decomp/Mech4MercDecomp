/* FUN_00711190 - graphics/render-state setup (mode/color/format config, info dump)
 * __cdecl, ret (no args), returns int in EAX
 * Transcribed from reference MW4Mercs.exe @ 0x00711190 (8632 bytes)
 */

/* IAT function pointers */
extern void *g_76b2e4;   /* float conversion (qword arg) */
extern void *g_76b420;   /* sprintf (called via CALL EBP) */

/* game functions */
extern void __cdecl FUN_00723bd0(void);
extern void __cdecl FUN_00723b40(void);
extern void __cdecl FUN_00713cc0(void);
extern void __cdecl FUN_00713aa0(void);
extern void __cdecl FUN_007103b0(void);
extern void __cdecl FUN_0073d430(void);
extern void __cdecl FUN_0073d3b0(void);
extern void __cdecl FUN_0075db4a(void);
extern void __cdecl FUN_0074c120(void);
extern void __cdecl FUN_0070f9f0(void);
extern void __cdecl FUN_0070fa90(void);
extern void __cdecl FUN_0073cfc0(void);
extern void __cdecl FUN_00713ae0(void);
extern void __cdecl FUN_00751100(void);
extern void __cdecl FUN_00711060(void);

/* globals */
extern int g_87bc4c;
extern int g_87c5b4;
extern unsigned char g_87bc34;
extern unsigned char g_87b620;
extern int g_87bc2c;
extern int g_87c460;
extern int g_87c480;
extern int g_87c4a0;
extern int g_87c458;
extern int g_87c478;
extern int g_87c498;
extern int g_87c45c;
extern int g_87c47c;
extern int g_87c49c;
extern int g_858950;
extern int g_87c55c;
extern int g_87bc30;
extern int g_87c450;
extern int g_87bc48;
extern int g_7b706c[];
extern int g_7b7084;
extern int g_87b63c;
extern int g_858940;
extern int g_87c514;
extern int g_8aaf30;
extern int g_8aaf2c;
extern float g_87c508;
extern float g_87c4e8;
extern int g_87c548;
extern float g_87c4c8;
extern float g_87c50c;
extern float g_87c4ec;
extern float g_87c4cc;
extern int g_87bbf4;
extern int g_87c520;
extern int g_87c544;
extern int g_87c54c;
extern int g_87c550;
extern int g_87c554;
extern int g_87c524;
extern int g_87c528;
extern int g_87c530;
extern int g_87c538;
extern int g_87c52c;
extern int g_87c534;
extern int g_87c53c;
extern int g_87c540;
extern int g_87c558;
extern float g_87c4f0;
extern float g_87c4d0;
extern float g_87c4b0;
extern float g_87c4f4;
extern float g_87c4f8;
extern float g_87c4fc;
extern int g_87c500;
extern int g_87c504;
extern int g_87c4e0;
extern int g_87c4e4;
extern float g_87c4d4;
extern float g_87c4d8;
extern float g_87c4dc;
extern float g_87c4b4;
extern float g_87c4b8;
extern float g_87c4bc;
extern int g_87c4c0;
extern int g_87c4c4;
extern int g_8aaf48;
extern int g_8aaf50;
extern int g_8aaf38;
extern int g_8aaf34;
extern int g_8aaf1c;
extern int g_8aaf18;
extern int g_8aaf28;
extern int g_8aaf24;
extern int g_87c5b8;
extern int g_7b70c4;
extern int g_87b61c;
extern int g_87bc40;
extern int g_87bc44;
extern int g_87b638;
extern int g_87bc38;
extern int g_87bc3c;
extern int g_8b7b18[];
extern int g_7b7088;

/* float constants */
extern float g_76d064;
extern double g_76d968;

__declspec(naked) void FUN_00711190(void)
{
    __asm {
        PUSH EBP
        MOV EBP,ESP
        AND ESP,0xfffffff8
        SUB ESP,0x1e8
        PUSH EBX
        PUSH EBP
        PUSH ESI
        PUSH EDI
        CALL FUN_00723bd0
        MOV EDI,EAX
        MOV ESI,EDI
        AND ESI,0xff00ff00
        XOR EBX,EBX
        CMP ESI,0x2600
        JNZ L_7111d3
        PUSH 0x10
        CALL FUN_00723b40
        TEST EAX,EAX
        JZ L_7111d3
        MOV EAX,dword ptr [g_87bc4c]
        CMP EAX,EBX
        JBE L_7111d3
        DEC EAX
        MOV dword ptr [g_87bc4c],EAX
L_7111d3:
        CMP ESI,0x2800
        JNZ L_7111f6
        PUSH 0x10
        CALL FUN_00723b40
        TEST EAX,EAX
        JZ L_7111f6
        MOV EAX,dword ptr [g_87bc4c]
        CMP EAX,0x5
        JNC L_7111f6
        INC EAX
        MOV dword ptr [g_87bc4c],EAX
L_7111f6:
        MOV EAX,dword ptr [g_87c5b4]
        AND EDI,0xff
        CMP EAX,EBX
        MOV dword ptr [ESP + 0xb4],EDI
        MOV EDI,0x2
        JZ L_71134b
        MOV AL,byte ptr [g_87bc34]
        TEST AL,AL
        JZ L_713340
        TEST byte ptr [g_87b620],0x2
        JNZ L_7112fa
        MOV EAX,dword ptr [g_87bc2c]
        CMP EAX,0x80ffffff
        JNZ L_711240
        MOV EAX,0x40ffffff
L_711240:
        PUSH 0x3
        PUSH 0xd
        MOV dword ptr [g_87c460],EAX
        MOV dword ptr [g_87c480],EAX
        MOV dword ptr [g_87c4a0],EAX
        MOV dword ptr [g_87c458],0x0
        MOV dword ptr [g_87c478],0x0
        MOV dword ptr [g_87c498],0x0
        MOV dword ptr [g_87c45c],0x3f800000
        MOV dword ptr [g_87c47c],0x3f800000
        MOV dword ptr [g_87c49c],0x3f800000
        CALL FUN_00713cc0
        PUSH EDI
        PUSH 0x10
        CALL FUN_00713cc0
        PUSH EBX
        PUSH 0x1
        CALL FUN_00713cc0
        PUSH 0x1
        PUSH 0xb
        CALL FUN_00713cc0
        CMP dword ptr [g_858950],0x3
        JNZ L_7112cc
        MOV EAX,dword ptr [g_87c55c]
        TEST AH,0x1
        JZ L_7112cc
        PUSH 0x100
        PUSH 0x13
        CALL FUN_00713cc0
L_7112cc:
        MOV ESI,dword ptr [g_87bc30]
        PUSH 0x3
        PUSH 0x87c450
        MOV dword ptr [g_87bc30],EBX
        CALL FUN_00713aa0
        PUSH EBX
        PUSH 0x13
        MOV dword ptr [g_87bc30],ESI
        CALL FUN_00713cc0
        PUSH EBX
        PUSH 0xb
        CALL FUN_00713cc0
L_7112fa:
        MOV EAX,dword ptr [g_87bc2c]
        CMP EAX,0x80ffffff
        JNZ L_711312
        MOV dword ptr [g_87bc2c],0x40ff0000
        JMP L_71134b
L_711312:
        CMP EAX,0x40ff0000
        JNZ L_711325
        MOV dword ptr [g_87bc2c],0x4000ff00
        JMP L_71134b
L_711325:
        CMP EAX,0x4000ff00
        JNZ L_711338
        MOV dword ptr [g_87bc2c],0x400000ff
        JMP L_71134b
L_711338:
        SUB EAX,0x400000ff
        NEG EAX
        SBB EAX,EAX
        AND EAX,0x80ffffff
        MOV dword ptr [g_87bc2c],EAX
L_71134b:
        MOV AL,byte ptr [g_87bc34]
        TEST AL,AL
        JZ L_713340
        MOV EAX,dword ptr [g_87bc4c]
        MOV ECX,dword ptr [EAX*0x4 + g_7b706c]
        CMP dword ptr [g_7b7084],EDI
        MOV EDX,dword ptr [g_87b63c]
        MOV dword ptr [g_87bc48],ECX
        MOV ECX,dword ptr [g_858940]
        JNZ L_711395
        CMP EDX,0x11d
        JG L_7113a5
        LEA EAX,[ECX + 0xfffffee0]
        CMP EAX,EDI
        MOV dword ptr [g_7b7084],EAX
        JZ L_7113a5
L_711395:
        ADD ECX,0xfffffede
        CMP EDX,ECX
        JL L_7113a5
        MOV dword ptr [g_7b7084],EDI
L_7113a5:
        PUSH EBX
        PUSH 0x1
        CALL FUN_00713cc0
        MOV EDX,dword ptr [g_87bc48]
        AND EDX,0xff000000
        CMP EDX,0xff000000
        JNZ L_7113c5
        PUSH 0x1
        JMP L_7113c7
L_7113c5:
        PUSH 0x3
L_7113c7:
        PUSH 0xd
        CALL FUN_00713cc0
        MOV EAX,dword ptr [g_7b7088]
        MOV ECX,dword ptr [g_7b7084]
        PUSH 0x60
        PUSH 0x1d8
        PUSH 0x11c
        PUSH EAX
        PUSH ECX
        CALL FUN_007103b0
        CMP dword ptr [g_87c5b4],EBX
        MOV dword ptr [ESP + 0x28],0x3f800000
        MOV dword ptr [ESP + 0x14],0x3f800000
        MOV dword ptr [ESP + 0x20],EBX
        JZ L_7131ac
        MOV EAX,dword ptr [g_87c514]
        XOR EBX,EBX
        CMP EAX,EBX
        MOV dword ptr [ESP + 0x30],EAX
        JNZ L_711459
        CALL FUN_0073d430
        PUSH 0x3
        PUSH 0xd
        CALL FUN_00713cc0
        MOV EDX,dword ptr [g_7b7084]
        MOV EAX,dword ptr [g_7b7088]
        PUSH 0x7a2350
        ADD EDX,0xe
        ADD EAX,0x10
        PUSH 0xc0c0c0
        MOV dword ptr [g_8aaf30],EDX
        MOV dword ptr [g_8aaf2c],EAX
        CALL FUN_0073d3b0
        JMP L_712369
L_711459:
        CMP dword ptr [g_858940],0x200
        MOV EBP,0x100
        JNZ L_71146f
        MOV EBP,0x80
L_71146f:
        TEST byte ptr [g_87b620],0x2
        JNZ L_71148e
        PUSH 0x3
        PUSH 0xd
        CALL FUN_00713cc0
        PUSH 0x3
        PUSH 0x10
        CALL FUN_00713cc0
        PUSH 0x1
        JMP L_7114a1
L_71148e:
        PUSH 0x1
        PUSH 0xd
        CALL FUN_00713cc0
        PUSH 0x1
        PUSH 0x10
        CALL FUN_00713cc0
        PUSH EBX
L_7114a1:
        PUSH 0x7
        CALL FUN_00713cc0
        MOV ECX,dword ptr [g_87bbf4]
        PUSH ECX
        PUSH 0x11
        CALL FUN_00713cc0
        MOV EDX,dword ptr [g_87c514]
        PUSH EDX
        PUSH 0x1
        CALL FUN_00713cc0
        MOV EAX,dword ptr [g_87c548]
        PUSH EAX
        PUSH 0xe
        CALL FUN_00713cc0
        FLD dword ptr [g_87c508]
        FCOMP dword ptr [g_87c4e8]
        MOV EAX,dword ptr [g_87c548]
        CMP EAX,0x2
        FNSTSW AX
        JNZ L_711c1e
        TEST AH,0x1
        JZ L_71150d
        FLD dword ptr [g_87c508]
        FCOMP dword ptr [g_87c4c8]
        FNSTSW AX
        TEST AH,0x1
        JZ L_711528
        FLD dword ptr [g_87c508]
        JMP L_71152e
L_71150d:
        FLD dword ptr [g_87c4e8]
        FCOMP dword ptr [g_87c4c8]
        FNSTSW AX
        TEST AH,0x1
        JZ L_711528
        FLD dword ptr [g_87c4e8]
        JMP L_71152e
L_711528:
        FLD dword ptr [g_87c4c8]
L_71152e:
        SUB ESP,0x8
        FSTP qword ptr [ESP]
        CALL dword ptr [g_76b2e4]
        FSTP dword ptr [ESP + 0x34]
        ADD ESP,0x8
        FLD dword ptr [g_87c50c]
        FCOMP dword ptr [g_87c4ec]
        FNSTSW AX
        TEST AH,0x1
        JZ L_71156f
        FLD dword ptr [g_87c50c]
        FCOMP dword ptr [g_87c4cc]
        FNSTSW AX
        TEST AH,0x1
        JZ L_71158a
        FLD dword ptr [g_87c50c]
        JMP L_711590
L_71156f:
        FLD dword ptr [g_87c4ec]
        FCOMP dword ptr [g_87c4cc]
        FNSTSW AX
        TEST AH,0x1
        JZ L_71158a
        FLD dword ptr [g_87c4ec]
        JMP L_711590
L_71158a:
        FLD dword ptr [g_87c4cc]
L_711590:
        SUB ESP,0x8
        FSTP qword ptr [ESP]
        CALL dword ptr [g_76b2e4]
        MOV AL,byte ptr [g_87b620]
        FSTP dword ptr [ESP + 0x28]
        ADD ESP,0x8
        TEST AL,0x2
        JNZ L_711836
        FLD dword ptr [g_87c508]
        FCOMP dword ptr [g_87c4e8]
        FNSTSW AX
        TEST AH,0x41
        JNZ L_7115de
        FLD dword ptr [g_87c508]
        FCOMP dword ptr [g_87c4c8]
        FNSTSW AX
        TEST AH,0x41
        JNZ L_7115f9
        FLD dword ptr [g_87c508]
        JMP L_7115ff
L_7115de:
        FLD dword ptr [g_87c4e8]
        FCOMP dword ptr [g_87c4c8]
        FNSTSW AX
        TEST AH,0x41
        JNZ L_7115f9
        FLD dword ptr [g_87c4e8]
        JMP L_7115ff
L_7115f9:
        FLD dword ptr [g_87c4c8]
L_7115ff:
        SUB ESP,0x8
        FSTP qword ptr [ESP]
        CALL dword ptr [g_76b2e4]
        FADD dword ptr [g_76d064]
        ADD ESP,0x8
        FSUB dword ptr [ESP + 0x2c]
        FSTP dword ptr [ESP + 0x28]
        FLD dword ptr [g_87c508]
        FCOMP dword ptr [g_87c4e8]
        FNSTSW AX
        TEST AH,0x41
        JNZ L_71164a
        FLD dword ptr [g_87c508]
        FCOMP dword ptr [g_87c4c8]
        FNSTSW AX
        TEST AH,0x41
        JNZ L_711665
        FLD dword ptr [g_87c508]
        JMP L_71166b
L_71164a:
        FLD dword ptr [g_87c4e8]
        FCOMP dword ptr [g_87c4c8]
        FNSTSW AX
        TEST AH,0x41
        JNZ L_711665
        FLD dword ptr [g_87c4e8]
        JMP L_71166b
L_711665:
        FLD dword ptr [g_87c4c8]
L_71166b:
        FLD dword ptr [g_87c508]
        FCOMP dword ptr [g_87c4e8]
        FNSTSW AX
        TEST AH,0x41
        JNZ L_711699
        FLD dword ptr [g_87c508]
        FCOMP dword ptr [g_87c4c8]
        FNSTSW AX
        TEST AH,0x41
        JNZ L_7116b4
        FLD dword ptr [g_87c508]
        JMP L_7116ba
L_711699:
        FLD dword ptr [g_87c4e8]
        FCOMP dword ptr [g_87c4c8]
        FNSTSW AX
        TEST AH,0x41
        JNZ L_7116b4
        FLD dword ptr [g_87c4e8]
        JMP L_7116ba
L_7116b4:
        FLD dword ptr [g_87c4c8]
L_7116ba:
        FXCH
        CALL FUN_0075db4a
        MOV dword ptr [ESP + 0x18],EAX
        FILD dword ptr [ESP + 0x18]
        FCOMP
        FNSTSW AX
        fstp st(0)
        TEST AH,0x40
        JZ L_7116f3
        FLD dword ptr [ESP + 0x28]
        FCOMP qword ptr [g_76d968]
        FNSTSW AX
        TEST AH,0x41
        JNZ L_7116f3
        FLD dword ptr [ESP + 0x28]
        FSUB qword ptr [g_76d968]
        FSTP dword ptr [ESP + 0x28]
L_7116f3:
        FLD dword ptr [g_87c50c]
        FCOMP dword ptr [g_87c4ec]
        FNSTSW AX
        TEST AH,0x41
        JNZ L_711721
        FLD dword ptr [g_87c50c]
        FCOMP dword ptr [g_87c4cc]
        FNSTSW AX
        TEST AH,0x41
        JNZ L_71173c
        FLD dword ptr [g_87c50c]
        JMP L_711742
L_711721:
        FLD dword ptr [g_87c4ec]
        FCOMP dword ptr [g_87c4cc]
        FNSTSW AX
        TEST AH,0x41
        JNZ L_71173c
        FLD dword ptr [g_87c4ec]
        JMP L_711742
L_71173c:
        FLD dword ptr [g_87c4cc]
L_711742:
        SUB ESP,0x8
        FSTP qword ptr [ESP]
        CALL dword ptr [g_76b2e4]
        FADD dword ptr [g_76d064]
        ADD ESP,0x8
        FSUB dword ptr [ESP + 0x20]
        FSTP dword ptr [ESP + 0x14]
        FLD dword ptr [g_87c50c]
        FCOMP dword ptr [g_87c4ec]
        FNSTSW AX
        TEST AH,0x41
        JNZ L_71178d
        FLD dword ptr [g_87c50c]
        FCOMP dword ptr [g_87c4cc]
        FNSTSW AX
        TEST AH,0x41
        JNZ L_7117a8
        FLD dword ptr [g_87c50c]
        JMP L_7117ae
L_71178d:
        FLD dword ptr [g_87c4ec]
        FCOMP dword ptr [g_87c4cc]
        FNSTSW AX
        TEST AH,0x41
        JNZ L_7117a8
        FLD dword ptr [g_87c4ec]
        JMP L_7117ae
L_7117a8:
        FLD dword ptr [g_87c4cc]
L_7117ae:
        FLD dword ptr [g_87c50c]
        FCOMP dword ptr [g_87c4ec]
        FNSTSW AX
        TEST AH,0x41
        JNZ L_7117dc
        FLD dword ptr [g_87c50c]
        FCOMP dword ptr [g_87c4cc]
        FNSTSW AX
        TEST AH,0x41
        JNZ L_7117f7
        FLD dword ptr [g_87c50c]
        JMP L_7117fd
L_7117dc:
        FLD dword ptr [g_87c4ec]
        FCOMP dword ptr [g_87c4cc]
        FNSTSW AX
        TEST AH,0x41
        JNZ L_7117f7
        FLD dword ptr [g_87c4ec]
        JMP L_7117fd
L_7117f7:
        FLD dword ptr [g_87c4cc]
L_7117fd:
        FXCH
        CALL FUN_0075db4a
        MOV dword ptr [ESP + 0x18],EAX
        FILD dword ptr [ESP + 0x18]
        FCOMP
        FNSTSW AX
        fstp st(0)
        TEST AH,0x40
        JZ L_711836
        FLD dword ptr [ESP + 0x14]
        FCOMP qword ptr [g_76d968]
        FNSTSW AX
        TEST AH,0x41
        JNZ L_711836
        FLD dword ptr [ESP + 0x14]
        FSUB qword ptr [g_76d968]
        FSTP dword ptr [ESP + 0x14]
L_711836:
        MOV EAX,dword ptr [g_7b7084]
        LEA ECX,[EAX + 0xe]
        MOV dword ptr [ESP + 0x18],ECX
        MOV dword ptr [ESP + 0x1c],EBX
        FILD qword ptr [ESP + 0x18]
        LEA EDX,[EAX + EBP*0x1 + 0xe]
        MOV EAX,dword ptr [g_7b7088]
        MOV dword ptr [ESP + 0x18],EDX
        FST dword ptr [ESP + 0x34]
        MOV dword ptr [ESP + 0x1c],EBX
        FSTP dword ptr [ESP + 0x54]
        LEA ECX,[EAX + 0xe]
        FILD qword ptr [ESP + 0x18]
        MOV dword ptr [ESP + 0x18],ECX
        MOV ECX,dword ptr [ESP + 0x28]
        MOV dword ptr [ESP + 0x1c],EBX
        FST dword ptr [ESP + 0x74]
        LEA EDX,[EAX + EBP*0x1 + 0xe]
        MOV EAX,dword ptr [g_87bc48]
        FSTP dword ptr [ESP + 0x94]
        FILD qword ptr [ESP + 0x18]
        MOV dword ptr [ESP + 0x18],EDX
        ADD EAX,0xffffff
        MOV dword ptr [ESP + 0x1c],EBX
        FST dword ptr [ESP + 0x38]
        MOV EDX,ECX
        FILD qword ptr [ESP + 0x18]
        MOV dword ptr [ESP + 0x44],EAX
        MOV dword ptr [ESP + 0x64],EAX
        MOV dword ptr [ESP + 0x84],EAX
        FST dword ptr [ESP + 0x58]
        MOV dword ptr [ESP + 0xa4],EAX
        MOV EAX,dword ptr [ESP + 0x14]
        FSTP dword ptr [ESP + 0x78]
        MOV dword ptr [ESP + 0xac],EDX
        MOV dword ptr [ESP + 0x8c],ECX
        FSTP dword ptr [ESP + 0x98]
        LEA EDX,[ESP + 0x34]
        MOV ECX,EAX
        PUSH EDX
        MOV dword ptr [ESP + 0x50],0x0
        MOV dword ptr [ESP + 0x70],0x0
        MOV dword ptr [ESP + 0x54],0x0
        MOV dword ptr [ESP + 0x74],EAX
        MOV dword ptr [ESP + 0x94],ECX
        MOV dword ptr [ESP + 0xb4],0x0
        MOV dword ptr [ESP + 0x40],0x0
        MOV dword ptr [ESP + 0x60],0x0
        MOV dword ptr [ESP + 0x80],0x0
        MOV dword ptr [ESP + 0xa0],0x0
        MOV dword ptr [ESP + 0x44],0x3f800000
        MOV dword ptr [ESP + 0x64],0x3f800000
        MOV dword ptr [ESP + 0x84],0x3f800000
        MOV dword ptr [ESP + 0xa4],0x3f800000
        CALL FUN_0074c120
        TEST byte ptr [g_87b620],0x2
        MOV ECX,0x8
        MOV ESI,0x87c4f0
        LEA EDI,[ESP + 0x34]
        REP MOVSD
        MOV ECX,0x8
        MOV ESI,0x87c4d0
        LEA EDI,[ESP + 0x54]
        REP MOVSD
        MOV ECX,0x8
        MOV ESI,0x87c4b0
        LEA EDI,[ESP + 0x74]
        REP MOVSD
        JNZ L_711a65
        MOV EAX,dword ptr [g_7b7084]
        MOV dword ptr [ESP + 0x18],EBP
        MOV dword ptr [ESP + 0x1c],EBX
        FILD qword ptr [ESP + 0x18]
        ADD EAX,0xe
        MOV dword ptr [ESP + 0x18],EAX
        MOV dword ptr [ESP + 0x1c],EBX
        FILD qword ptr [ESP + 0x18]
        MOV ECX,dword ptr [g_7b7088]
        FLD dword ptr [ESP + 0x4c]
        ADD ECX,0xe
        FSUB dword ptr [ESP + 0x2c]
        MOV dword ptr [ESP + 0x18],ECX
        MOV dword ptr [ESP + 0x1c],EBX
        FDIV dword ptr [ESP + 0x28]
        fmul st(0), st(2)
        fadd st(0), st(1)
        FSTP dword ptr [ESP + 0x34]
        FILD qword ptr [ESP + 0x18]
        FSTP dword ptr [ESP + 0x18]
        FLD dword ptr [ESP + 0x50]
        FSUB dword ptr [ESP + 0x20]
        FDIV dword ptr [ESP + 0x14]
        fmul st(0), st(2)
        FADD dword ptr [ESP + 0x18]
        FSTP dword ptr [ESP + 0x38]
        FLD dword ptr [ESP + 0x6c]
        FSUB dword ptr [ESP + 0x2c]
        FDIV dword ptr [ESP + 0x28]
        fmul st(0), st(2)
        fadd st(0), st(1)
        FSTP dword ptr [ESP + 0x54]
        FLD dword ptr [ESP + 0x70]
        FSUB dword ptr [ESP + 0x20]
        FDIV dword ptr [ESP + 0x14]
        fmul st(0), st(2)
        FADD dword ptr [ESP + 0x18]
        FSTP dword ptr [ESP + 0x58]
        FLD dword ptr [ESP + 0x8c]
        FSUB dword ptr [ESP + 0x2c]
        FDIV dword ptr [ESP + 0x28]
        fmul st(0), st(2)
        fadd st(0), st(1)
        FSTP dword ptr [ESP + 0x74]
        fstp st(0)
        FLD dword ptr [ESP + 0x90]
        FSUB dword ptr [ESP + 0x20]
        FDIV dword ptr [ESP + 0x14]
        fmul st(0), st(1)
        FADD dword ptr [ESP + 0x18]
        FSTP dword ptr [ESP + 0x78]
        fstp st(0)
        JMP L_711b63
L_711a65:
        MOV EDX,dword ptr [ESP + 0x4c]
        MOV dword ptr [ESP + 0x20],EBP
        MOV dword ptr [ESP + 0x24],EBX
        FILD qword ptr [ESP + 0x20]
        PUSH EDX
        FSTP dword ptr [ESP + 0x18]
        CALL FUN_0070f9f0
        MOV EAX,dword ptr [g_7b7084]
        FMUL dword ptr [ESP + 0x14]
        MOV ECX,dword ptr [ESP + 0x50]
        ADD EAX,0xe
        MOV dword ptr [ESP + 0x20],EAX
        MOV dword ptr [ESP + 0x24],EBX
        FIADD dword ptr [ESP + 0x20]
        PUSH ECX
        FSTP dword ptr [ESP + 0x38]
        CALL FUN_0070f9f0
        MOV EDX,dword ptr [g_7b7088]
        FMUL dword ptr [ESP + 0x14]
        MOV EAX,dword ptr [ESP + 0x6c]
        ADD EDX,0xe
        MOV dword ptr [ESP + 0x20],EDX
        MOV dword ptr [ESP + 0x24],EBX
        FIADD dword ptr [ESP + 0x20]
        PUSH EAX
        FSTP dword ptr [ESP + 0x3c]
        CALL FUN_0070f9f0
        MOV ECX,dword ptr [g_7b7084]
        FMUL dword ptr [ESP + 0x14]
        MOV EDX,dword ptr [ESP + 0x70]
        ADD ECX,0xe
        MOV dword ptr [ESP + 0x20],ECX
        MOV dword ptr [ESP + 0x24],EBX
        FIADD dword ptr [ESP + 0x20]
        PUSH EDX
        FSTP dword ptr [ESP + 0x58]
        CALL FUN_0070f9f0
        MOV EAX,dword ptr [g_7b7088]
        FMUL dword ptr [ESP + 0x14]
        MOV ECX,dword ptr [ESP + 0x8c]
        ADD EAX,0xe
        MOV dword ptr [ESP + 0x20],EAX
        MOV dword ptr [ESP + 0x24],EBX
        FIADD dword ptr [ESP + 0x20]
        PUSH ECX
        FSTP dword ptr [ESP + 0x5c]
        CALL FUN_0070f9f0
        MOV EDX,dword ptr [g_7b7084]
        FMUL dword ptr [ESP + 0x14]
        MOV EAX,dword ptr [ESP + 0x90]
        ADD EDX,0xe
        MOV dword ptr [ESP + 0x20],EDX
        MOV dword ptr [ESP + 0x24],EBX
        FIADD dword ptr [ESP + 0x20]
        PUSH EAX
        FSTP dword ptr [ESP + 0x78]
        CALL FUN_0070f9f0
        MOV ECX,dword ptr [g_7b7088]
        FMUL dword ptr [ESP + 0x14]
        ADD ECX,0xe
        MOV dword ptr [ESP + 0x20],ECX
        MOV dword ptr [ESP + 0x24],EBX
        FIADD dword ptr [ESP + 0x20]
        FSTP dword ptr [ESP + 0x78]
L_711b63:
        MOV EAX,dword ptr [g_87bc48]
        CMP EAX,0xff000000
        JNZ L_711b76
        MOV EAX,dword ptr [g_87bc2c]
        JMP L_711b84
L_711b76:
        MOV EDX,dword ptr [g_87bc2c]
        AND EDX,0xffffff
        ADD EAX,EDX
L_711b84:
        PUSH 0x3
        PUSH 0xd
        MOV dword ptr [ESP + 0x4c],EAX
        MOV dword ptr [ESP + 0x6c],EAX
        MOV dword ptr [ESP + 0x8c],EAX
        MOV dword ptr [ESP + 0x44],0x0
        MOV dword ptr [ESP + 0x64],0x0
        MOV dword ptr [ESP + 0x84],0x0
        MOV dword ptr [ESP + 0x48],0x3f800000
        MOV dword ptr [ESP + 0x68],0x3f800000
        MOV dword ptr [ESP + 0x88],0x3f800000
        CALL FUN_00713cc0
        PUSH 0x3
        PUSH 0x10
        CALL FUN_00713cc0
        PUSH 0x1
        PUSH 0x7
        CALL FUN_00713cc0
        TEST byte ptr [g_87b620],0x2
        JNZ L_71234c
        PUSH EBX
        PUSH 0x11
        CALL FUN_00713cc0
        PUSH 0x3
        PUSH 0xd
        CALL FUN_00713cc0
        PUSH 0x2
        PUSH 0x10
        CALL FUN_00713cc0
        PUSH EBX
        PUSH 0x1
        CALL FUN_00713cc0
        PUSH 0x3
        LEA EAX,[ESP + 0x38]
        JMP L_712346
L_711c1e:
        TEST AH,0x1
        JZ L_711c3e
        FLD dword ptr [g_87c508]
        FCOMP dword ptr [g_87c4c8]
        FNSTSW AX
        TEST AH,0x1
        JZ L_711c59
        FLD dword ptr [g_87c508]
        JMP L_711c5f
L_711c3e:
        FLD dword ptr [g_87c4e8]
        FCOMP dword ptr [g_87c4c8]
        FNSTSW AX
        TEST AH,0x1
        JZ L_711c59
        FLD dword ptr [g_87c4e8]
        JMP L_711c5f
L_711c59:
        FLD dword ptr [g_87c4c8]
L_711c5f:
        SUB ESP,0x8
        FSTP qword ptr [ESP]
        CALL dword ptr [g_76b2e4]
        FSTP dword ptr [ESP + 0x28]
        ADD ESP,0x8
        FLD dword ptr [g_87c50c]
        FCOMP dword ptr [g_87c4ec]
        FNSTSW AX
        TEST AH,0x1
        JZ L_711ca0
        FLD dword ptr [g_87c50c]
        FCOMP dword ptr [g_87c4cc]
        FNSTSW AX
        TEST AH,0x1
        JZ L_711cbb
        FLD dword ptr [g_87c50c]
        JMP L_711cc1
L_711ca0:
        FLD dword ptr [g_87c4ec]
        FCOMP dword ptr [g_87c4cc]
        FNSTSW AX
        TEST AH,0x1
        JZ L_711cbb
        FLD dword ptr [g_87c4ec]
        JMP L_711cc1
L_711cbb:
        FLD dword ptr [g_87c4cc]
L_711cc1:
        SUB ESP,0x8
        FSTP qword ptr [ESP]
        CALL dword ptr [g_76b2e4]
        MOV AL,byte ptr [g_87b620]
        FSTP dword ptr [ESP + 0x34]
        ADD ESP,0x8
        TEST AL,0x2
        JNZ L_711f67
        FLD dword ptr [g_87c508]
        FCOMP dword ptr [g_87c4e8]
        FNSTSW AX
        TEST AH,0x41
        JNZ L_711d0f
        FLD dword ptr [g_87c508]
        FCOMP dword ptr [g_87c4c8]
        FNSTSW AX
        TEST AH,0x41
        JNZ L_711d2a
        FLD dword ptr [g_87c508]
        JMP L_711d30
L_711d0f:
        FLD dword ptr [g_87c4e8]
        FCOMP dword ptr [g_87c4c8]
        FNSTSW AX
        TEST AH,0x41
        JNZ L_711d2a
        FLD dword ptr [g_87c4e8]
        JMP L_711d30
L_711d2a:
        FLD dword ptr [g_87c4c8]
L_711d30:
        SUB ESP,0x8
        FSTP qword ptr [ESP]
        CALL dword ptr [g_76b2e4]
        FADD dword ptr [g_76d064]
        ADD ESP,0x8
        FSUB dword ptr [ESP + 0x20]
        FSTP dword ptr [ESP + 0x28]
        FLD dword ptr [g_87c508]
        FCOMP dword ptr [g_87c4e8]
        FNSTSW AX
        TEST AH,0x41
        JNZ L_711d7b
        FLD dword ptr [g_87c508]
        FCOMP dword ptr [g_87c4c8]
        FNSTSW AX
        TEST AH,0x41
        JNZ L_711d96
        FLD dword ptr [g_87c508]
        JMP L_711d9c
L_711d7b:
        FLD dword ptr [g_87c4e8]
        FCOMP dword ptr [g_87c4c8]
        FNSTSW AX
        TEST AH,0x41
        JNZ L_711d96
        FLD dword ptr [g_87c4e8]
        JMP L_711d9c
L_711d96:
        FLD dword ptr [g_87c4c8]
L_711d9c:
        FLD dword ptr [g_87c508]
        FCOMP dword ptr [g_87c4e8]
        FNSTSW AX
        TEST AH,0x41
        JNZ L_711dca
        FLD dword ptr [g_87c508]
        FCOMP dword ptr [g_87c4c8]
        FNSTSW AX
        TEST AH,0x41
        JNZ L_711de5
        FLD dword ptr [g_87c508]
        JMP L_711deb
L_711dca:
        FLD dword ptr [g_87c4e8]
        FCOMP dword ptr [g_87c4c8]
        FNSTSW AX
        TEST AH,0x41
        JNZ L_711de5
        FLD dword ptr [g_87c4e8]
        JMP L_711deb
L_711de5:
        FLD dword ptr [g_87c4c8]
L_711deb:
        FXCH
        CALL FUN_0075db4a
        MOV dword ptr [ESP + 0x18],EAX
        FILD dword ptr [ESP + 0x18]
        FCOMP
        FNSTSW AX
        fstp st(0)
        TEST AH,0x40
        JZ L_711e24
        FLD dword ptr [ESP + 0x28]
        FCOMP qword ptr [g_76d968]
        FNSTSW AX
        TEST AH,0x41
        JNZ L_711e24
        FLD dword ptr [ESP + 0x28]
        FSUB qword ptr [g_76d968]
        FSTP dword ptr [ESP + 0x28]
L_711e24:
        FLD dword ptr [g_87c50c]
        FCOMP dword ptr [g_87c4ec]
        FNSTSW AX
        TEST AH,0x41
        JNZ L_711e52
        FLD dword ptr [g_87c50c]
        FCOMP dword ptr [g_87c4cc]
        FNSTSW AX
        TEST AH,0x41
        JNZ L_711e6d
        FLD dword ptr [g_87c50c]
        JMP L_711e73
L_711e52:
        FLD dword ptr [g_87c4ec]
        FCOMP dword ptr [g_87c4cc]
        FNSTSW AX
        TEST AH,0x41
        JNZ L_711e6d
        FLD dword ptr [g_87c4ec]
        JMP L_711e73
L_711e6d:
        FLD dword ptr [g_87c4cc]
L_711e73:
        SUB ESP,0x8
        FSTP qword ptr [ESP]
        CALL dword ptr [g_76b2e4]
        FADD dword ptr [g_76d064]
        ADD ESP,0x8
        FSUB dword ptr [ESP + 0x2c]
        FSTP dword ptr [ESP + 0x14]
        FLD dword ptr [g_87c50c]
        FCOMP dword ptr [g_87c4ec]
        FNSTSW AX
        TEST AH,0x41
        JNZ L_711ebe
        FLD dword ptr [g_87c50c]
        FCOMP dword ptr [g_87c4cc]
        FNSTSW AX
        TEST AH,0x41
        JNZ L_711ed9
        FLD dword ptr [g_87c50c]
        JMP L_711edf
L_711ebe:
        FLD dword ptr [g_87c4ec]
        FCOMP dword ptr [g_87c4cc]
        FNSTSW AX
        TEST AH,0x41
        JNZ L_711ed9
        FLD dword ptr [g_87c4ec]
        JMP L_711edf
L_711ed9:
        FLD dword ptr [g_87c4cc]
L_711edf:
        FLD dword ptr [g_87c50c]
        FCOMP dword ptr [g_87c4ec]
        FNSTSW AX
        TEST AH,0x41
        JNZ L_711f0d
        FLD dword ptr [g_87c50c]
        FCOMP dword ptr [g_87c4cc]
        FNSTSW AX
        TEST AH,0x41
        JNZ L_711f28
        FLD dword ptr [g_87c50c]
        JMP L_711f2e
L_711f0d:
        FLD dword ptr [g_87c4ec]
        FCOMP dword ptr [g_87c4cc]
        FNSTSW AX
        TEST AH,0x41
        JNZ L_711f28
        FLD dword ptr [g_87c4ec]
        JMP L_711f2e
L_711f28:
        FLD dword ptr [g_87c4cc]
L_711f2e:
        FXCH
        CALL FUN_0075db4a
        MOV dword ptr [ESP + 0x18],EAX
        FILD dword ptr [ESP + 0x18]
        FCOMP
        FNSTSW AX
        fstp st(0)
        TEST AH,0x40
        JZ L_711f67
        FLD dword ptr [ESP + 0x14]
        FCOMP qword ptr [g_76d968]
        FNSTSW AX
        TEST AH,0x41
        JNZ L_711f67
        FLD dword ptr [ESP + 0x14]
        FSUB qword ptr [g_76d968]
        FSTP dword ptr [ESP + 0x14]
L_711f67:
        MOV EAX,dword ptr [g_7b7084]
        LEA ECX,[EAX + 0xe]
        MOV dword ptr [ESP + 0x18],ECX
        MOV dword ptr [ESP + 0x1c],EBX
        FILD qword ptr [ESP + 0x18]
        LEA EDX,[EAX + EBP*0x1 + 0xe]
        MOV EAX,dword ptr [g_7b7088]
        MOV dword ptr [ESP + 0x18],EDX
        FST dword ptr [ESP + 0x34]
        MOV dword ptr [ESP + 0x1c],EBX
        FSTP dword ptr [ESP + 0x54]
        LEA ECX,[EAX + 0xe]
        FILD qword ptr [ESP + 0x18]
        MOV dword ptr [ESP + 0x18],ECX
        MOV ECX,dword ptr [ESP + 0x28]
        MOV dword ptr [ESP + 0x1c],EBX
        FST dword ptr [ESP + 0x74]
        LEA EDX,[EAX + EBP*0x1 + 0xe]
        MOV EAX,dword ptr [g_87bc48]
        FSTP dword ptr [ESP + 0x94]
        FILD qword ptr [ESP + 0x18]
        MOV dword ptr [ESP + 0x18],EDX
        ADD EAX,0xffffff
        MOV dword ptr [ESP + 0x1c],EBX
        FST dword ptr [ESP + 0x38]
        MOV EDX,ECX
        FILD qword ptr [ESP + 0x18]
        MOV dword ptr [ESP + 0x44],EAX
        MOV dword ptr [ESP + 0x64],EAX
        MOV dword ptr [ESP + 0x84],EAX
        FST dword ptr [ESP + 0x58]
        MOV dword ptr [ESP + 0xa4],EAX
        MOV EAX,dword ptr [ESP + 0x14]
        FSTP dword ptr [ESP + 0x78]
        MOV dword ptr [ESP + 0xac],EDX
        MOV dword ptr [ESP + 0x8c],ECX
        FSTP dword ptr [ESP + 0x98]
        LEA EDX,[ESP + 0x34]
        MOV ECX,EAX
        PUSH EDX
        MOV dword ptr [ESP + 0x50],0x0
        MOV dword ptr [ESP + 0x70],0x0
        MOV dword ptr [ESP + 0x54],0x0
        MOV dword ptr [ESP + 0x74],EAX
        MOV dword ptr [ESP + 0x94],ECX
        MOV dword ptr [ESP + 0xb4],0x0
        MOV dword ptr [ESP + 0x40],0x0
        MOV dword ptr [ESP + 0x60],0x0
        MOV dword ptr [ESP + 0x80],0x0
        MOV dword ptr [ESP + 0xa0],0x0
        MOV dword ptr [ESP + 0x44],0x3f800000
        MOV dword ptr [ESP + 0x64],0x3f800000
        MOV dword ptr [ESP + 0x84],0x3f800000
        MOV dword ptr [ESP + 0xa4],0x3f800000
        CALL FUN_0074c120
        TEST byte ptr [g_87b620],0x2
        MOV ECX,0x8
        MOV ESI,0x87c4f0
        LEA EDI,[ESP + 0x34]
        REP MOVSD
        MOV ECX,0x8
        MOV ESI,0x87c4d0
        LEA EDI,[ESP + 0x54]
        REP MOVSD
        MOV ECX,0x8
        MOV ESI,0x87c4b0
        LEA EDI,[ESP + 0x74]
        REP MOVSD
        JNZ L_712196
        MOV EAX,dword ptr [g_7b7084]
        MOV dword ptr [ESP + 0x18],EBP
        MOV dword ptr [ESP + 0x1c],EBX
        FILD qword ptr [ESP + 0x18]
        ADD EAX,0xe
        MOV dword ptr [ESP + 0x18],EAX
        MOV dword ptr [ESP + 0x1c],EBX
        FILD qword ptr [ESP + 0x18]
        MOV ECX,dword ptr [g_7b7088]
        FLD dword ptr [ESP + 0x4c]
        ADD ECX,0xe
        FSUB dword ptr [ESP + 0x20]
        MOV dword ptr [ESP + 0x18],ECX
        MOV dword ptr [ESP + 0x1c],EBX
        FDIV dword ptr [ESP + 0x28]
        fmul st(0), st(2)
        fadd st(0), st(1)
        FSTP dword ptr [ESP + 0x34]
        FILD qword ptr [ESP + 0x18]
        FSTP dword ptr [ESP + 0x18]
        FLD dword ptr [ESP + 0x50]
        FSUB dword ptr [ESP + 0x2c]
        FDIV dword ptr [ESP + 0x14]
        fmul st(0), st(2)
        FADD dword ptr [ESP + 0x18]
        FSTP dword ptr [ESP + 0x38]
        FLD dword ptr [ESP + 0x6c]
        FSUB dword ptr [ESP + 0x20]
        FDIV dword ptr [ESP + 0x28]
        fmul st(0), st(2)
        fadd st(0), st(1)
        FSTP dword ptr [ESP + 0x54]
        FLD dword ptr [ESP + 0x70]
        FSUB dword ptr [ESP + 0x2c]
        FDIV dword ptr [ESP + 0x14]
        fmul st(0), st(2)
        FADD dword ptr [ESP + 0x18]
        FSTP dword ptr [ESP + 0x58]
        FLD dword ptr [ESP + 0x8c]
        FSUB dword ptr [ESP + 0x20]
        FDIV dword ptr [ESP + 0x28]
        fmul st(0), st(2)
        fadd st(0), st(1)
        FSTP dword ptr [ESP + 0x74]
        fstp st(0)
        FLD dword ptr [ESP + 0x90]
        FSUB dword ptr [ESP + 0x2c]
        FDIV dword ptr [ESP + 0x14]
        fmul st(0), st(1)
        FADD dword ptr [ESP + 0x18]
        FSTP dword ptr [ESP + 0x78]
        fstp st(0)
        JMP L_712294
L_712196:
        MOV EDX,dword ptr [ESP + 0x4c]
        MOV dword ptr [ESP + 0x20],EBP
        MOV dword ptr [ESP + 0x24],EBX
        FILD qword ptr [ESP + 0x20]
        PUSH EDX
        FSTP dword ptr [ESP + 0x18]
        CALL FUN_0070f9f0
        MOV EAX,dword ptr [g_7b7084]
        FMUL dword ptr [ESP + 0x14]
        MOV ECX,dword ptr [ESP + 0x50]
        ADD EAX,0xe
        MOV dword ptr [ESP + 0x20],EAX
        MOV dword ptr [ESP + 0x24],EBX
        FIADD dword ptr [ESP + 0x20]
        PUSH ECX
        FSTP dword ptr [ESP + 0x38]
        CALL FUN_0070f9f0
        MOV EDX,dword ptr [g_7b7088]
        FMUL dword ptr [ESP + 0x14]
        MOV EAX,dword ptr [ESP + 0x6c]
        ADD EDX,0xe
        MOV dword ptr [ESP + 0x20],EDX
        MOV dword ptr [ESP + 0x24],EBX
        FIADD dword ptr [ESP + 0x20]
        PUSH EAX
        FSTP dword ptr [ESP + 0x3c]
        CALL FUN_0070f9f0
        MOV ECX,dword ptr [g_7b7084]
        FMUL dword ptr [ESP + 0x14]
        MOV EDX,dword ptr [ESP + 0x70]
        ADD ECX,0xe
        MOV dword ptr [ESP + 0x20],ECX
        MOV dword ptr [ESP + 0x24],EBX
        FIADD dword ptr [ESP + 0x20]
        PUSH EDX
        FSTP dword ptr [ESP + 0x58]
        CALL FUN_0070f9f0
        MOV EAX,dword ptr [g_7b7088]
        FMUL dword ptr [ESP + 0x14]
        MOV ECX,dword ptr [ESP + 0x8c]
        ADD EAX,0xe
        MOV dword ptr [ESP + 0x20],EAX
        MOV dword ptr [ESP + 0x24],EBX
        FIADD dword ptr [ESP + 0x20]
        PUSH ECX
        FSTP dword ptr [ESP + 0x5c]
        CALL FUN_0070f9f0
        MOV EDX,dword ptr [g_7b7084]
        FMUL dword ptr [ESP + 0x14]
        MOV EAX,dword ptr [ESP + 0x90]
        ADD EDX,0xe
        MOV dword ptr [ESP + 0x20],EDX
        MOV dword ptr [ESP + 0x24],EBX
        FIADD dword ptr [ESP + 0x20]
        PUSH EAX
        FSTP dword ptr [ESP + 0x78]
        CALL FUN_0070f9f0
        MOV ECX,dword ptr [g_7b7088]
        FMUL dword ptr [ESP + 0x14]
        ADD ECX,0xe
        MOV dword ptr [ESP + 0x20],ECX
        MOV dword ptr [ESP + 0x24],EBX
        FIADD dword ptr [ESP + 0x20]
        FSTP dword ptr [ESP + 0x78]
L_712294:
        MOV EAX,dword ptr [g_87bc48]
        CMP EAX,0xff000000
        JNZ L_7122a7
        MOV EAX,dword ptr [g_87bc2c]
        JMP L_7122b5
L_7122a7:
        MOV EDX,dword ptr [g_87bc2c]
        AND EDX,0xffffff
        ADD EAX,EDX
L_7122b5:
        PUSH 0x3
        PUSH 0xd
        MOV dword ptr [ESP + 0x4c],EAX
        MOV dword ptr [ESP + 0x6c],EAX
        MOV dword ptr [ESP + 0x8c],EAX
        MOV dword ptr [ESP + 0x44],0x0
        MOV dword ptr [ESP + 0x64],0x0
        MOV dword ptr [ESP + 0x84],0x0
        MOV dword ptr [ESP + 0x48],0x3f800000
        MOV dword ptr [ESP + 0x68],0x3f800000
        MOV dword ptr [ESP + 0x88],0x3f800000
        CALL FUN_00713cc0
        PUSH 0x3
        PUSH 0x10
        CALL FUN_00713cc0
        PUSH 0x1
        PUSH 0x7
        CALL FUN_00713cc0
        TEST byte ptr [g_87b620],0x2
        JNZ L_71234c
        PUSH EBX
        PUSH 0x11
        CALL FUN_00713cc0
        PUSH 0x3
        PUSH 0xd
        CALL FUN_00713cc0
        PUSH 0x2
        PUSH 0x10
        CALL FUN_00713cc0
        PUSH EBX
        PUSH 0x1
        CALL FUN_00713cc0
        PUSH 0x3
        LEA EAX,[ESP + 0x38]
L_712346:
        PUSH EAX
        CALL FUN_00713aa0
L_71234c:
        MOV ECX,dword ptr [ESP + 0x30]
        PUSH 0x87c4b0
        PUSH 0x87c4d0
        PUSH 0x87c4f0
        PUSH ECX
        CALL FUN_0070fa90
        MOV dword ptr [ESP + 0x20],EAX
L_712369:
        PUSH EBX
        PUSH 0x11
        CALL FUN_00713cc0
        CALL FUN_0073d430
        PUSH 0x3
        PUSH 0xd
        CALL FUN_00713cc0
        MOV EDX,dword ptr [g_7b7084]
        LEA EAX,[EDX + 0x8]
        MOV dword ptr [g_8aaf30],EAX
        MOV dword ptr [g_8aaf28],EAX
        MOV EAX,dword ptr [g_7b7088]
        ADD EAX,0x3
        MOV dword ptr [g_8aaf2c],EAX
        MOV dword ptr [g_8aaf24],EAX
        CMP dword ptr [g_87c5b8],0x1
        JBE L_71242c
        PUSH 0x7a2348
        PUSH 0xc0c0c0
        CALL FUN_0073d3b0
        MOV EAX,dword ptr [g_87c5b8]
        CMP EAX,0x9
        JBE L_7123d0
        MOV EAX,0x9
        MOV dword ptr [g_87c5b8],EAX
L_7123d0:
        MOV EBX,0x1
        CMP EAX,EBX
        JC L_71242c
        XOR ESI,ESI
L_7123db:
        CMP EBX,dword ptr [g_7b70c4]
        JNZ L_7123f4
        PUSH 0x1
        CALL FUN_0073cfc0
        XOR ECX,ECX
        MOV CL,BL
        ADD CL,0x30
        PUSH ECX
        JMP L_7123fc
L_7123f4:
        XOR EDX,EDX
        MOV DL,BL
        ADD DL,0x30
        PUSH EDX
L_7123fc:
        CALL FUN_0073cfc0
        PUSH 0x20
        CALL FUN_0073cfc0
        MOV EAX,dword ptr [g_8aaf48]
        CMP EAX,ESI
        JZ L_71241c
        PUSH EAX
        PUSH 0x8aaf50
        CALL FUN_00713ae0
L_71241c:
        MOV EAX,dword ptr [g_87c5b8]
        INC EBX
        CMP EBX,EAX
        MOV dword ptr [g_8aaf48],ESI
        JBE L_7123db
L_71242c:
        MOV EAX,dword ptr [g_87c514]
        MOV EBP,dword ptr [g_76b420]
        XOR EDI,EDI
        CMP EAX,EDI
        JZ L_7124d7
        MOV EAX,dword ptr [g_7b7084]
        MOV ESI,dword ptr [g_87bbf4]
        MOV EDX,dword ptr [ESP + 0x30]
        ADD EAX,0x9c
        CMP ESI,EDI
        MOV dword ptr [g_8aaf30],EAX
        MOV dword ptr [g_8aaf28],EAX
        JZ L_7124a6
        TEST byte ptr [EDX + 0x6],0x1
        JNZ L_7124a6
        XOR ECX,ECX
        MOV CX,word ptr [EDX + 0x2]
        MOV EAX,ESI
        AND EAX,0xffff
        MOV EBX,ECX
        MOV CL,AL
        SHR EBX,CL
        XOR ECX,ECX
        MOV CX,word ptr [EDX]
        PUSH EBX
        MOV EDX,ECX
        MOV CL,AL
        SHR EDX,CL
        LEA EAX,[ESP + 0x1dc]
        PUSH EDX
        PUSH ESI
        PUSH 0x7a2334
        PUSH EAX
        CALL EBP
        ADD ESP,0x14
        LEA ECX,[ESP + 0x1d8]
        PUSH ECX
        JMP L_7124cd
L_7124a6:
        XOR EAX,EAX
        MOV AX,word ptr [EDX + 0x2]
        XOR ECX,ECX
        MOV CX,word ptr [EDX]
        LEA EDX,[ESP + 0x1d8]
        PUSH EAX
        PUSH ECX
        PUSH 0x7a2320
        PUSH EDX
        CALL EBP
        ADD ESP,0x10
        LEA EAX,[ESP + 0x1d8]
        PUSH EAX
L_7124cd:
        PUSH 0xc0c0c0
        CALL FUN_0073d3b0
L_7124d7:
        MOV ECX,dword ptr [g_7b7084]
        LEA EAX,[ECX + 0x8]
        MOV dword ptr [g_8aaf30],EAX
        MOV dword ptr [g_8aaf28],EAX
        CMP dword ptr [g_858940],0x200
        JZ L_712504
        MOV EDX,dword ptr [g_7b7088]
        LEA EAX,[EDX + 0x112]
        JMP L_71250e
L_712504:
        MOV EAX,dword ptr [g_7b7088]
        ADD EAX,0xb2
L_71250e:
        MOV dword ptr [g_8aaf2c],EAX
        MOV dword ptr [g_8aaf24],EAX
        CMP dword ptr [g_87c514],EDI
        MOV dword ptr [g_8aaf38],EDI
        MOV dword ptr [g_8aaf34],EDI
        MOV dword ptr [g_8aaf1c],0x1e
        MOV dword ptr [g_8aaf18],0x18
        JZ L_7128c5
        MOV EBX,dword ptr [ESP + 0x30]
        MOV EDX,dword ptr [EBX + 0x14]
        OR ECX,0xffffffff
        XOR EAX,EAX
        MOV EDI,EDX
        REPNE SCASB
        NOT ECX
        DEC ECX
        CMP ECX,0x1e
        JBE L_7125bd
        OR ECX,0xffffffff
        MOV EDI,0x7a02ac
        REPNE SCASB
        NOT ECX
        SUB EDI,ECX
        MOV EAX,ECX
        SHR ECX,0x2
        MOV ESI,EDI
        LEA EDX,[ESP + 0x1b8]
        MOV EDI,EDX
        REP MOVSD
        MOV ECX,EAX
        AND ECX,0x3
        REP MOVSB
        MOV EDX,dword ptr [EBX + 0x14]
        OR ECX,0xffffffff
        XOR EAX,EAX
        MOV EDI,EDX
        REPNE SCASB
        NOT ECX
        DEC ECX
        LEA EDI,[ECX + EDX*0x1 + -0x1c]
        OR ECX,0xffffffff
        REPNE SCASB
        NOT ECX
        SUB EDI,ECX
        MOV ESI,EDI
        LEA EDX,[ESP + 0x1b8]
        MOV EDI,EDX
        MOV EDX,ECX
        OR ECX,0xffffffff
        REPNE SCASB
        MOV ECX,EDX
        DEC EDI
        SHR ECX,0x2
        REP MOVSD
        MOV ECX,EDX
        JMP L_7125e0
L_7125bd:
        OR ECX,0xffffffff
        XOR EAX,EAX
        MOV EDI,EDX
        REPNE SCASB
        NOT ECX
        SUB EDI,ECX
        LEA ESI,[ESP + 0x1b8]
        MOV EDX,ESI
        MOV EAX,ECX
        MOV ESI,EDI
        SHR ECX,0x2
        MOV EDI,EDX
        REP MOVSD
        MOV ECX,EAX
L_7125e0:
        AND ECX,0x3
        LEA EAX,[ESP + 0x1b8]
        REP MOVSB
        PUSH EAX
        LEA ECX,[ESP + 0xbc]
        PUSH ECX
        CALL EBP
        ADD ESP,0x8
        LEA EDX,[ESP + 0xb8]
        PUSH EDX
        PUSH 0xc0c0c0
        CALL FUN_0073d3b0
        PUSH 0x77a078
        PUSH 0xc0c0c0
        CALL FUN_0073d3b0
        XOR ECX,ECX
        MOV CX,word ptr [EBX + 0x4]
        MOV EAX,ECX
        AND EAX,0x1c00
        TEST AX,AX
        JNZ L_712634
        MOV ESI,0x770a5c
        JMP L_71265e
L_712634:
        CMP AX,0x400
        JNZ L_712641
        MOV ESI,0x7a2318
        JMP L_71265e
L_712641:
        CMP AX,0x800
        JNZ L_71264e
        MOV ESI,0x770e5c
        JMP L_71265e
L_71264e:
        CMP AX,0xc00
        MOV ESI,0x7a2310
        JZ L_71265e
        MOV ESI,0x7a2308
L_71265e:
        MOV EAX,ECX
        SHR EAX,0x9
        TEST AL,0x1
        MOV EDI,0x7a2300
        JNZ L_712671
        MOV EDI,0x7a22f8
L_712671:
        XOR EAX,EAX
        MOV AX,word ptr [EBX + 0x6]
        SHR ECX,0xa
        AND ECX,0x7
        MOV EDX,EAX
        SHR EDX,0x7
        AND EDX,0x1
        LEA ECX,[EDX + ECX*0x2]
        SHR EAX,0xe
        LEA EAX,[EAX + ECX*0x4]
        MOV EDX,EAX
        SHL EDX,0x5
        SUB EDX,EAX
        LEA EAX,[EDX*0x4 + g_8b7b18]
        PUSH EAX
        CALL FUN_00751100
        PUSH EAX
        PUSH ESI
        PUSH EDI
        LEA ECX,[ESP + 0xc4]
        PUSH 0x7a22e0
        PUSH ECX
        CALL EBP
        ADD ESP,0x14
        LEA EDX,[ESP + 0xb8]
        PUSH EDX
        PUSH 0xc0c0c0
        CALL FUN_0073d3b0
        CMP dword ptr [g_87c548],0x1
        MOV EAX,0x7a22d8
        JZ L_7126dc
        MOV EAX,0x7a22d0
L_7126dc:
        PUSH EAX
        LEA EAX,[ESP + 0xbc]
        PUSH 0x7a22bc
        PUSH EAX
        CALL EBP
        ADD ESP,0xc
        LEA ECX,[ESP + 0xb8]
        PUSH ECX
        PUSH 0xc0c0c0
        CALL FUN_0073d3b0
        MOV ESI,dword ptr [ESP + 0x30]
        PUSH ESI
        LEA EDX,[ESP + 0xbc]
        PUSH 0x7a22a4
        PUSH EDX
        CALL EBP
        ADD ESP,0xc
        LEA EAX,[ESP + 0xb8]
        PUSH EAX
        PUSH 0xc0c0c0
        CALL FUN_0073d3b0
        MOV ECX,dword ptr [ESP + 0x20]
        PUSH ECX
        LEA EDX,[ESP + 0xbc]
        PUSH 0x7a2290
        PUSH EDX
        CALL EBP
        ADD ESP,0xc
        LEA EAX,[ESP + 0xb8]
        PUSH EAX
        PUSH 0xc0c0c0
        CALL FUN_0073d3b0
        XOR EBX,EBX
        MOV BX,word ptr [ESI + 0x6]
        MOV ECX,0x79e7f8
        MOV EAX,EBX
        SHR EAX,0x8
        AND EAX,0x3
        SUB EAX,0x0
        JZ L_712775
        DEC EAX
        JNZ L_71277a
        MOV ECX,0x76ffb4
        JMP L_71277a
L_712775:
        MOV ECX,0x770044
L_71277a:
        PUSH ECX
        LEA ECX,[ESP + 0xbc]
        PUSH 0x7a227c
        PUSH ECX
        CALL EBP
        ADD ESP,0xc
        LEA EDX,[ESP + 0xb8]
        PUSH EDX
        PUSH 0xc0c0c0
        CALL FUN_0073d3b0
        TEST BL,0x1
        JZ L_7127c8
        LEA EAX,[ESP + 0xb8]
        PUSH 0x7a225c
        PUSH EAX
        CALL EBP
        ADD ESP,0x8
        LEA ECX,[ESP + 0xb8]
        PUSH ECX
        PUSH 0xc0c0c0
        CALL FUN_0073d3b0
L_7127c8:
        TEST BL,0x40
        JZ L_7127f1
        LEA EDX,[ESP + 0xb8]
        PUSH 0x7a2240
        PUSH EDX
        CALL EBP
        ADD ESP,0x8
        LEA EAX,[ESP + 0xb8]
        PUSH EAX
        PUSH 0xc0c0c0
        CALL FUN_0073d3b0
L_7127f1:
        TEST BL,0x2
        JZ L_71281a
        LEA ECX,[ESP + 0xb8]
        PUSH 0x7a222c
        PUSH ECX
        CALL EBP
        ADD ESP,0x8
        LEA EDX,[ESP + 0xb8]
        PUSH EDX
        PUSH 0xc0c0c0
        CALL FUN_0073d3b0
L_71281a:
        TEST BL,0x4
        JZ L_712843
        LEA EAX,[ESP + 0xb8]
        PUSH 0x7a2214
        PUSH EAX
        CALL EBP
        ADD ESP,0x8
        LEA ECX,[ESP + 0xb8]
        PUSH ECX
        PUSH 0xc0c0c0
        CALL FUN_0073d3b0
L_712843:
        TEST BH,0x8
        JZ L_71286c
        LEA EDX,[ESP + 0xb8]
        PUSH 0x7a21f4
        PUSH EDX
        CALL EBP
        ADD ESP,0x8
        LEA EAX,[ESP + 0xb8]
        PUSH EAX
        PUSH 0xc0c0c0
        CALL FUN_0073d3b0
L_71286c:
        TEST BL,0x8
        JZ L_712895
        LEA ECX,[ESP + 0xb8]
        PUSH 0x7a21d4
        PUSH ECX
        CALL EBP
        ADD ESP,0x8
        LEA EDX,[ESP + 0xb8]
        PUSH EDX
        PUSH 0xc0c0c0
        CALL FUN_0073d3b0
L_712895:
        MOV EAX,dword ptr [ESI + 0x1c]
        TEST EAX,EAX
        JZ L_7128c5
        MOV ECX,dword ptr [ESI + 0x20]
        PUSH ECX
        PUSH EAX
        LEA EDX,[ESP + 0xc0]
        PUSH 0x7a21ac
        PUSH EDX
        CALL EBP
        ADD ESP,0x10
        LEA EAX,[ESP + 0xb8]
        PUSH EAX
        PUSH 0xc0c0c0
        CALL FUN_0073d3b0
L_7128c5:
        MOV EAX,dword ptr [g_858940]
        MOV EBX,0x200
        CMP EAX,EBX
        JZ L_7128e1
        MOV ECX,dword ptr [g_7b7088]
        LEA EAX,[ECX + 0x15e]
        JMP L_7128ed
L_7128e1:
        MOV EDX,dword ptr [g_7b7088]
        LEA EAX,[EDX + 0xfe]
L_7128ed:
        MOV dword ptr [g_8aaf2c],EAX
        MOV dword ptr [g_8aaf24],EAX
        MOV EAX,dword ptr [g_87c520]
        XOR ESI,ESI
        CMP EAX,0x1
        MOV EDI,0x18
        MOV dword ptr [g_8aaf38],ESI
        MOV dword ptr [g_8aaf34],ESI
        MOV dword ptr [g_8aaf1c],0x1e
        MOV dword ptr [g_8aaf18],EDI
        JNZ L_71292b
        MOV EAX,0x77008c
        JMP L_71293a
L_71292b:
        CMP EAX,0x2
        MOV EAX,0x7a21a0
        JZ L_71293a
        MOV EAX,0x7a2194
L_71293a:
        PUSH EAX
        LEA EAX,[ESP + 0xbc]
        PUSH 0x7a227c
        PUSH EAX
        CALL EBP
        ADD ESP,0xc
        LEA ECX,[ESP + 0xb8]
        PUSH ECX
        PUSH 0xc0c0c0
        CALL FUN_0073d3b0
        MOV EAX,dword ptr [g_87c544]
        CMP EAX,0x1
        JNZ L_712970
        MOV EAX,0x770e54
        JMP L_712997
L_712970:
        CMP EAX,0x2
        JNZ L_71297c
        MOV EAX,0x770e40
        JMP L_712997
L_71297c:
        CMP EAX,0x5
        JNZ L_712988
        MOV EAX,0x770e34
        JMP L_712997
L_712988:
        CMP EAX,0x4
        MOV EAX,0x770e0c
        JZ L_712997
        MOV EAX,0x770e18
L_712997:
        PUSH EAX
        LEA EDX,[ESP + 0xbc]
        PUSH 0x7a2180
        PUSH EDX
        CALL EBP
        ADD ESP,0xc
        LEA EAX,[ESP + 0xb8]
        PUSH EAX
        PUSH 0xc0c0c0
        CALL FUN_0073d3b0
        CMP dword ptr [g_87c54c],0x2
        MOV EAX,0x7a2178
        JZ L_7129cf
        MOV EAX,0x7a2170
L_7129cf:
        PUSH EAX
        LEA ECX,[ESP + 0xbc]
        PUSH 0x7a215c
        PUSH ECX
        CALL EBP
        ADD ESP,0xc
        LEA EDX,[ESP + 0xb8]
        PUSH EDX
        PUSH 0xc0c0c0
        CALL FUN_0073d3b0
        MOV EAX,dword ptr [g_87c550]
        CMP EAX,0x3
        JNZ L_712a05
        MOV EAX,0x7a214c
        JMP L_712a14
L_712a05:
        CMP EAX,0x2
        MOV EAX,0x7a2140
        JZ L_712a14
        MOV EAX,0x783a20
L_712a14:
        PUSH EAX
        LEA EAX,[ESP + 0xbc]
        PUSH 0x7a212c
        PUSH EAX
        CALL EBP
        ADD ESP,0xc
        LEA ECX,[ESP + 0xb8]
        PUSH ECX
        PUSH 0xc0c0c0
        CALL FUN_0073d3b0
        MOV EDX,dword ptr [g_87c554]
        PUSH EDX
        LEA EAX,[ESP + 0xbc]
        PUSH 0x7a2118
        PUSH EAX
        CALL EBP
        ADD ESP,0xc
        LEA ECX,[ESP + 0xb8]
        PUSH ECX
        PUSH 0xc0c0c0
        CALL FUN_0073d3b0
        MOV EAX,dword ptr [g_87c524]
        CMP EAX,0x1
        JNZ L_712a75
        MOV EAX,0x7a1ca8
        JMP L_712a84
L_712a75:
        CMP EAX,0x2
        MOV EAX,0x7a1cbc
        JZ L_712a84
        MOV EAX,0x7a2110
L_712a84:
        PUSH EAX
        LEA EDX,[ESP + 0xbc]
        PUSH 0x7a20fc
        PUSH EDX
        CALL EBP
        ADD ESP,0xc
        LEA EAX,[ESP + 0xb8]
        PUSH EAX
        PUSH 0xc0c0c0
        CALL FUN_0073d3b0
        CMP dword ptr [g_87c528],ESI
        MOV EAX,0x7a20f4
        JNZ L_712abb
        MOV EAX,0x7a2110
L_712abb:
        PUSH EAX
        LEA ECX,[ESP + 0xbc]
        PUSH 0x7a20e0
        PUSH ECX
        CALL EBP
        ADD ESP,0xc
        LEA EDX,[ESP + 0xb8]
        PUSH EDX
        PUSH 0xc0c0c0
        CALL FUN_0073d3b0
        CMP dword ptr [g_87c530],ESI
        MOV EAX,0x7a20f4
        JNZ L_712af2
        MOV EAX,0x7a2110
L_712af2:
        PUSH EAX
        LEA EAX,[ESP + 0xbc]
        PUSH 0x7a20cc
        PUSH EAX
        CALL EBP
        ADD ESP,0xc
        LEA ECX,[ESP + 0xb8]
        PUSH ECX
        PUSH 0xc0c0c0
        CALL FUN_0073d3b0
        CMP dword ptr [g_87c538],ESI
        MOV EAX,0x7a20f4
        JNZ L_712b29
        MOV EAX,0x7a2110
L_712b29:
        PUSH EAX
        LEA EDX,[ESP + 0xbc]
        PUSH 0x7a20b8
        PUSH EDX
        CALL EBP
        ADD ESP,0xc
        LEA EAX,[ESP + 0xb8]
        PUSH EAX
        PUSH 0xc0c0c0
        CALL FUN_0073d3b0
        CMP dword ptr [g_87c52c],ESI
        MOV EAX,0x7a20f4
        JNZ L_712b60
        MOV EAX,0x7a2110
L_712b60:
        PUSH EAX
        LEA ECX,[ESP + 0xbc]
        PUSH 0x7a20a4
        PUSH ECX
        CALL EBP
        ADD ESP,0xc
        LEA EDX,[ESP + 0xb8]
        PUSH EDX
        PUSH 0xc0c0c0
        CALL FUN_0073d3b0
        CMP dword ptr [g_858950],0x3
        MOV EAX,dword ptr [g_87c55c]
        JNZ L_712baa
        TEST AH,0x1
        JZ L_712baa
        TEST AL,0x1
        JZ L_712ba3
        MOV EAX,0x7a2094
        JMP L_712bb8
L_712ba3:
        MOV EAX,0x7a2084
        JMP L_712bb8
L_712baa:
        TEST AL,0x1
        MOV EAX,0x7a20f4
        JNZ L_712bb8
        MOV EAX,0x7a2110
L_712bb8:
        PUSH EAX
        LEA EAX,[ESP + 0xbc]
        PUSH 0x7a2070
        PUSH EAX
        CALL EBP
        ADD ESP,0xc
        LEA ECX,[ESP + 0xb8]
        PUSH ECX
        PUSH 0xc0c0c0
        CALL FUN_0073d3b0
        CMP dword ptr [g_87c534],ESI
        MOV EAX,0x7a20f4
        JNZ L_712bef
        MOV EAX,0x7a2110
L_712bef:
        PUSH EAX
        LEA EDX,[ESP + 0xbc]
        PUSH 0x7a205c
        PUSH EDX
        CALL EBP
        ADD ESP,0xc
        LEA EAX,[ESP + 0xb8]
        PUSH EAX
        PUSH 0xc0c0c0
        CALL FUN_0073d3b0
        MOV EAX,dword ptr [g_87c53c]
        CMP EAX,ESI
        JNZ L_712c24
        MOV EAX,0x7a2110
        JMP L_712c33
L_712c24:
        CMP EAX,0x1
        MOV EAX,0x7a20f4
        JZ L_712c33
        MOV EAX,0x7a2054
L_712c33:
        PUSH EAX
        LEA ECX,[ESP + 0xbc]
        PUSH 0x7a2040
        PUSH ECX
        CALL EBP
        ADD ESP,0xc
        LEA EDX,[ESP + 0xb8]
        PUSH EDX
        PUSH 0xc0c0c0
        CALL FUN_0073d3b0
        CMP dword ptr [g_87c540],ESI
        MOV EAX,0x7a20f4
        JNZ L_712c6a
        MOV EAX,0x7a2110
L_712c6a:
        PUSH EAX
        LEA EAX,[ESP + 0xbc]
        PUSH 0x7a202c
        PUSH EAX
        CALL EBP
        ADD ESP,0xc
        LEA ECX,[ESP + 0xb8]
        PUSH ECX
        PUSH 0xc0c0c0
        CALL FUN_0073d3b0
        MOV EAX,dword ptr [g_87c558]
        CMP EAX,ESI
        JNZ L_712cac
        LEA EDX,[ESP + 0xb8]
        PUSH 0x7a2010
        PUSH EDX
        CALL EBP
        ADD ESP,0x8
        JMP L_712cc4
L_712cac:
        AND EAX,0xffffff
        PUSH EAX
        LEA EAX,[ESP + 0xbc]
        PUSH 0x7a1ff8
        PUSH EAX
        CALL EBP
        ADD ESP,0xc
L_712cc4:
        LEA ECX,[ESP + 0xb8]
        PUSH ECX
        PUSH 0xc0c0c0
        CALL FUN_0073d3b0
        MOV EDX,dword ptr [g_7b7084]
        LEA EAX,[EDX + 0xc6]
        MOV dword ptr [g_8aaf30],EAX
        MOV dword ptr [g_8aaf28],EAX
        CMP dword ptr [g_858940],EBX
        JZ L_712d00
        MOV EAX,dword ptr [g_7b7088]
        ADD EAX,0x112
        JMP L_712d0c
L_712d00:
        MOV ECX,dword ptr [g_7b7088]
        LEA EAX,[ECX + 0xb2]
L_712d0c:
        LEA EDX,[ESP + 0xb8]
        PUSH 0x7a1ff4
        PUSH EDX
        MOV dword ptr [g_8aaf2c],EAX
        MOV dword ptr [g_8aaf24],EAX
        MOV dword ptr [g_8aaf38],ESI
        MOV dword ptr [g_8aaf34],ESI
        MOV dword ptr [g_8aaf1c],0xd
        MOV dword ptr [g_8aaf18],EDI
        CALL EBP
        ADD ESP,0x8
        LEA EAX,[ESP + 0xb8]
        PUSH EAX
        PUSH 0xf0f0f0
        CALL FUN_0073d3b0
        FLD dword ptr [g_87c4f0]
        SUB ESP,0x8
        FSTP qword ptr [ESP]
        LEA ECX,[ESP + 0xc0]
        PUSH 0x7a1fe8
        PUSH ECX
        CALL EBP
        ADD ESP,0x10
        LEA EDX,[ESP + 0xb8]
        PUSH EDX
        PUSH 0xc0c0c0
        CALL FUN_0073d3b0
        FLD dword ptr [g_87c4f4]
        SUB ESP,0x8
        FSTP qword ptr [ESP]
        LEA EAX,[ESP + 0xc0]
        PUSH 0x7a1fd8
        PUSH EAX
        CALL EBP
        ADD ESP,0x10
        LEA ECX,[ESP + 0xb8]
        PUSH ECX
        PUSH 0xc0c0c0
        CALL FUN_0073d3b0
        FLD dword ptr [g_87c4f8]
        SUB ESP,0x8
        FSTP qword ptr [ESP]
        LEA EDX,[ESP + 0xc0]
        PUSH 0x7a1fc8
        PUSH EDX
        CALL EBP
        ADD ESP,0x10
        LEA EAX,[ESP + 0xb8]
        PUSH EAX
        PUSH 0xc0c0c0
        CALL FUN_0073d3b0
        FLD dword ptr [g_87c4fc]
        SUB ESP,0x8
        FSTP qword ptr [ESP]
        LEA ECX,[ESP + 0xc0]
        PUSH 0x7a1fb8
        PUSH ECX
        CALL EBP
        ADD ESP,0x10
        LEA EDX,[ESP + 0xb8]
        PUSH EDX
        PUSH 0xc0c0c0
        CALL FUN_0073d3b0
        MOV EAX,dword ptr [g_87c500]
        PUSH EAX
        LEA ECX,[ESP + 0xbc]
        PUSH 0x7a1fac
        PUSH ECX
        CALL EBP
        ADD ESP,0xc
        LEA EDX,[ESP + 0xb8]
        PUSH EDX
        PUSH 0xc0c0c0
        CALL FUN_0073d3b0
        MOV EAX,dword ptr [g_87c504]
        PUSH EAX
        LEA ECX,[ESP + 0xbc]
        PUSH 0x7a1fa0
        PUSH ECX
        CALL EBP
        ADD ESP,0xc
        LEA EDX,[ESP + 0xb8]
        PUSH EDX
        PUSH 0xc0c0c0
        CALL FUN_0073d3b0
        CMP dword ptr [g_87c514],ESI
        JZ L_712e86
        MOV EAX,dword ptr [g_87c50c]
        MOV ECX,dword ptr [g_87c508]
        PUSH EAX
        PUSH ECX
        CALL FUN_00711060
        JMP L_712ea4
L_712e86:
        PUSH 0x7a1f98
        PUSH 0xc0c0c0
        CALL FUN_0073d3b0
        PUSH 0x7a1f90
        PUSH 0xc0c0c0
        CALL FUN_0073d3b0
L_712ea4:
        MOV EAX,dword ptr [g_8aaf2c]
        ADD EAX,0x2
        LEA EDX,[ESP + 0xb8]
        PUSH 0x7a1f8c
        PUSH EDX
        MOV dword ptr [g_8aaf2c],EAX
        MOV dword ptr [g_8aaf24],EAX
        CALL EBP
        ADD ESP,0x8
        LEA EAX,[ESP + 0xb8]
        PUSH EAX
        PUSH 0xf0f0f0
        CALL FUN_0073d3b0
        FLD dword ptr [g_87c4d0]
        SUB ESP,0x8
        FSTP qword ptr [ESP]
        LEA ECX,[ESP + 0xc0]
        PUSH 0x7a1fe8
        PUSH ECX
        CALL EBP
        ADD ESP,0x10
        LEA EDX,[ESP + 0xb8]
        PUSH EDX
        PUSH 0xc0c0c0
        CALL FUN_0073d3b0
        FLD dword ptr [g_87c4d4]
        SUB ESP,0x8
        FSTP qword ptr [ESP]
        LEA EAX,[ESP + 0xc0]
        PUSH 0x7a1fd8
        PUSH EAX
        CALL EBP
        ADD ESP,0x10
        LEA ECX,[ESP + 0xb8]
        PUSH ECX
        PUSH 0xc0c0c0
        CALL FUN_0073d3b0
        FLD dword ptr [g_87c4d8]
        SUB ESP,0x8
        FSTP qword ptr [ESP]
        LEA EDX,[ESP + 0xc0]
        PUSH 0x7a1fc8
        PUSH EDX
        CALL EBP
        ADD ESP,0x10
        LEA EAX,[ESP + 0xb8]
        PUSH EAX
        PUSH 0xc0c0c0
        CALL FUN_0073d3b0
        FLD dword ptr [g_87c4dc]
        SUB ESP,0x8
        FSTP qword ptr [ESP]
        LEA ECX,[ESP + 0xc0]
        PUSH 0x7a1fb8
        PUSH ECX
        CALL EBP
        ADD ESP,0x10
        LEA EDX,[ESP + 0xb8]
        PUSH EDX
        PUSH 0xc0c0c0
        CALL FUN_0073d3b0
        MOV EAX,dword ptr [g_87c4e0]
        PUSH EAX
        LEA ECX,[ESP + 0xbc]
        PUSH 0x7a1fac
        PUSH ECX
        CALL EBP
        ADD ESP,0xc
        LEA EDX,[ESP + 0xb8]
        PUSH EDX
        PUSH 0xc0c0c0
        CALL FUN_0073d3b0
        MOV EAX,dword ptr [g_87c4e4]
        PUSH EAX
        LEA ECX,[ESP + 0xbc]
        PUSH 0x7a1fa0
        PUSH ECX
        CALL EBP
        ADD ESP,0xc
        LEA EDX,[ESP + 0xb8]
        PUSH EDX
        PUSH 0xc0c0c0
        CALL FUN_0073d3b0
        CMP dword ptr [g_87c514],ESI
        JZ L_71300a
        MOV EAX,dword ptr [g_87c4ec]
        MOV ECX,dword ptr [g_87c4e8]
        PUSH EAX
        PUSH ECX
        CALL FUN_00711060
        JMP L_713028
L_71300a:
        PUSH 0x7a1f98
        PUSH 0xc0c0c0
        CALL FUN_0073d3b0
        PUSH 0x7a1f90
        PUSH 0xc0c0c0
        CALL FUN_0073d3b0
L_713028:
        MOV EAX,dword ptr [g_8aaf2c]
        ADD EAX,0x2
        LEA EDX,[ESP + 0xb8]
        PUSH 0x7a1f88
        PUSH EDX
        MOV dword ptr [g_8aaf2c],EAX
        MOV dword ptr [g_8aaf24],EAX
        CALL EBP
        ADD ESP,0x8
        LEA EAX,[ESP + 0xb8]
        PUSH EAX
        PUSH 0xf0f0f0
        CALL FUN_0073d3b0
        FLD dword ptr [g_87c4b0]
        SUB ESP,0x8
        FSTP qword ptr [ESP]
        LEA ECX,[ESP + 0xc0]
        PUSH 0x7a1fe8
        PUSH ECX
        CALL EBP
        ADD ESP,0x10
        LEA EDX,[ESP + 0xb8]
        PUSH EDX
        PUSH 0xc0c0c0
        CALL FUN_0073d3b0
        FLD dword ptr [g_87c4b4]
        SUB ESP,0x8
        FSTP qword ptr [ESP]
        LEA EAX,[ESP + 0xc0]
        PUSH 0x7a1fd8
        PUSH EAX
        CALL EBP
        ADD ESP,0x10
        LEA ECX,[ESP + 0xb8]
        PUSH ECX
        PUSH 0xc0c0c0
        CALL FUN_0073d3b0
        FLD dword ptr [g_87c4b8]
        SUB ESP,0x8
        FSTP qword ptr [ESP]
        LEA EDX,[ESP + 0xc0]
        PUSH 0x7a1fc8
        PUSH EDX
        CALL EBP
        ADD ESP,0x10
        LEA EAX,[ESP + 0xb8]
        PUSH EAX
        PUSH 0xc0c0c0
        CALL FUN_0073d3b0
        FLD dword ptr [g_87c4bc]
        SUB ESP,0x8
        FSTP qword ptr [ESP]
        LEA ECX,[ESP + 0xc0]
        PUSH 0x7a1fb8
        PUSH ECX
        CALL EBP
        ADD ESP,0x10
        LEA EDX,[ESP + 0xb8]
        PUSH EDX
        PUSH 0xc0c0c0
        CALL FUN_0073d3b0
        MOV EAX,dword ptr [g_87c4c0]
        PUSH EAX
        LEA ECX,[ESP + 0xbc]
        PUSH 0x7a1fac
        PUSH ECX
        CALL EBP
        ADD ESP,0xc
        LEA EDX,[ESP + 0xb8]
        PUSH EDX
        PUSH 0xc0c0c0
        CALL FUN_0073d3b0
        MOV EAX,dword ptr [g_87c4c4]
        PUSH EAX
        LEA ECX,[ESP + 0xbc]
        PUSH 0x7a1fa0
        PUSH ECX
        CALL EBP
        ADD ESP,0xc
        LEA EDX,[ESP + 0xb8]
        PUSH EDX
        PUSH 0xc0c0c0
        CALL FUN_0073d3b0
        CMP dword ptr [g_87c514],ESI
        JZ L_71318e
        MOV EAX,dword ptr [g_87c4cc]
        MOV ECX,dword ptr [g_87c4c8]
        PUSH EAX
        PUSH ECX
        CALL FUN_00711060
        JMP L_7131ac
L_71318e:
        PUSH 0x7a1f98
        PUSH 0xc0c0c0
        CALL FUN_0073d3b0
        PUSH 0x7a1f90
        PUSH 0xc0c0c0
        CALL FUN_0073d3b0
L_7131ac:
        MOV EAX,dword ptr [ESP + 0xb4]
        CMP EAX,0x2d
        JNZ L_7131d0
        MOV EAX,dword ptr [g_87bbf4]
        TEST EAX,EAX
        JZ L_71329a
        DEC EAX
        MOV dword ptr [g_87bbf4],EAX
        JMP L_71329a
L_7131d0:
        CMP EAX,0x2b
        JZ L_7131da
        CMP EAX,0x3d
        JNZ L_7131ec
L_7131da:
        MOV ECX,dword ptr [g_87bbf4]
        CMP ECX,0x4
        JNC L_7131ec
        INC ECX
        MOV dword ptr [g_87bbf4],ECX
L_7131ec:
        CMP EAX,0x31
        JNZ L_713200
        MOV dword ptr [g_7b70c4],0x1
        JMP L_71329a
L_713200:
        CMP EAX,0x32
        JNZ L_713214
        MOV dword ptr [g_7b70c4],0x2
        JMP L_71329a
L_713214:
        CMP EAX,0x33
        JNZ L_713225
        MOV dword ptr [g_7b70c4],0x3
        JMP L_71329a
L_713225:
        CMP EAX,0x34
        JNZ L_713236
        MOV dword ptr [g_7b70c4],0x4
        JMP L_71329a
L_713236:
        CMP EAX,0x35
        JNZ L_713247
        MOV dword ptr [g_7b70c4],0x5
        JMP L_71329a
L_713247:
        CMP EAX,0x36
        JNZ L_713258
        MOV dword ptr [g_7b70c4],0x6
        JMP L_71329a
L_713258:
        CMP EAX,0x37
        JNZ L_713269
        MOV dword ptr [g_7b70c4],0x7
        JMP L_71329a
L_713269:
        CMP EAX,0x38
        JNZ L_71327a
        MOV dword ptr [g_7b70c4],0x8
        JMP L_71329a
L_71327a:
        CMP EAX,0x39
        JNZ L_71328b
        MOV dword ptr [g_7b70c4],0x9
        JMP L_71329a
L_71328b:
        CMP EAX,0x30
        JNZ L_71329a
        MOV dword ptr [g_7b70c4],0xa
L_71329a:
        MOV ECX,dword ptr [g_87b61c]
        MOV EAX,dword ptr [g_87bc40]
        XOR EDX,EDX
        CMP ECX,EDX
        MOV ESI,0xc
        JZ L_7132ca
        SUB EAX,ECX
        CMP EAX,ESI
        MOV dword ptr [g_87bc40],EAX
        JLE L_7132bf
        MOV EAX,ESI
        JMP L_7132c5
L_7132bf:
        CMP EAX,EDX
        JGE L_7132ca
        XOR EAX,EAX
L_7132c5:
        MOV dword ptr [g_87bc40],EAX
L_7132ca:
        TEST byte ptr [g_87b620],0x1
        JZ L_7132fc
        CMP dword ptr [g_87bc44],EDX
        JNZ L_7132ec
        MOV EAX,dword ptr [g_87bc30]
        INC EAX
        MOV dword ptr [g_87bc40],EDX
        MOV dword ptr [g_87bc30],EAX
L_7132ec:
        CMP dword ptr [g_87bc30],ESI
        JLE L_71331e
        MOV dword ptr [g_87bc30],ESI
        JMP L_71331e
L_7132fc:
        MOV ECX,dword ptr [g_87bc30]
        CMP ECX,EAX
        MOV dword ptr [g_87bc44],EDX
        JLE L_713315
        DEC ECX
        MOV dword ptr [g_87bc30],ECX
        CMP ECX,EAX
L_713315:
        JGE L_71331e
        INC ECX
        MOV dword ptr [g_87bc30],ECX
L_71331e:
        MOV EAX,dword ptr [g_87b63c]
        MOV ECX,dword ptr [g_87b638]
        MOV dword ptr [g_87bc38],EAX
        MOV dword ptr [g_87bc3c],ECX
        MOV dword ptr [g_87c5b4],EDX
        MOV dword ptr [g_87c5b8],EDX
L_713340:
        POP EDI
        POP ESI
        POP EBP
        POP EBX
        MOV ESP,EBP
        POP EBP
        RET
    }
}
