/* FUN_00743EE0 - DirectX/graphics adapter setup (mode enumeration, caps, formats)
 * __stdcall, ret 0xc, returns int in EAX
 * Transcribed from reference MW4Mercs.exe @ 0x00743EE0 (5023 bytes)
 */

/* IAT function pointers */
extern void *g_76b144;   /* (some DirectX call) */
extern void *g_76b294;   /* malloc */
extern void *g_76b2d0;   /* free */
extern void *g_76b2ac;   /* (function pointer used via CALL EDI) */

/* globals */
extern unsigned char g_87dd0a;
extern int g_85a22c;
extern int g_858bf8;
extern int g_85a210;
extern int g_85a214;
extern int g_85a244;
extern int g_85a248;
extern int g_8abe58;
extern int g_8abe54;
extern int g_8abe50;
extern unsigned char g_8abd58;
extern int g_8abdd4;
extern int g_8b2520;
extern int g_8b2608;
extern int g_8b260c;
extern int g_8b2614;
extern int g_8b2618;
extern int g_8b261c;
extern int g_8b2620;
extern int g_8597b0;
extern int g_8597b4;
extern int g_8597b8;
extern unsigned char g_8aa9e4;
extern int g_8abd60[];

/* game functions */
extern void __cdecl FUN_00734e70(void);
extern void __cdecl FUN_00735280(void);
extern void __cdecl FUN_00735230(void);
extern void __cdecl FUN_00734f60(void);
extern void __cdecl FUN_00735790(void);
extern void __cdecl FUN_00740db0(void);
extern void __cdecl FUN_00735150(void);
extern void __cdecl FUN_007351b0(void);
extern void __cdecl FUN_00735030(void);
extern void __cdecl FUN_00735710(void);
extern void __cdecl FUN_00734ff0(void);
extern void __cdecl FUN_0075c240(void);
extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_007189c0(void);
extern void __cdecl FUN_00734fb0(void);
extern void __cdecl FUN_007350c0(void);
extern void __cdecl FUN_00740d60(void);
extern void __cdecl FUN_0074a1e0(void);
extern void __cdecl FUN_0074a1a0(void);
extern void __cdecl FUN_0074a150(void);
extern void __cdecl FUN_0074a5e0(void);
extern void __cdecl FUN_0074a670(void);
extern void __cdecl FUN_0074a6d0(void);

__declspec(naked) void FUN_00743EE0(void)
{
    __asm {
        PUSH EBP
        MOV EBP,ESP
        SUB ESP,0x16c
        MOV EAX,dword ptr [EBP + 0x8]
        PUSH EBX
        PUSH ESI
        PUSH EDI
        XOR ESI,ESI
        PUSH ESI
        PUSH 0x7a2d10
        PUSH 0x85a22c
        MOV EBX,0x1
        PUSH EAX
        MOV byte ptr [EBP + -0x5],0x0
        MOV byte ptr [g_87dd0a],BL
        CALL FUN_00734e70
        CMP EAX,ESI
        MOV byte ptr [g_87dd0a],0x0
        JGE L_743f2d
        MOV dword ptr [g_85a22c],ESI
        MOV EAX,EBX
        POP EDI
        POP ESI
        POP EBX
        MOV ESP,EBP
        POP EBP
        RET 0xc
L_743f2d:
        MOV ECX,dword ptr [g_858bf8]
        MOV EDX,dword ptr [g_85a22c]
        PUSH 0x8
        PUSH ECX
        PUSH EDX
        CALL FUN_00735280
        XOR EAX,EAX
        PUSH ESI
        MOV ECX,0x1f
        LEA EDI,[EBP + 0xffffff5c]
        REP STOSD
        MOV ECX,dword ptr [g_85a22c]
        PUSH 0x85a210
        LEA EAX,[EBP + 0xffffff5c]
        PUSH EAX
        PUSH ECX
        MOV dword ptr [EBP + 0xffffff5c],0x7c
        MOV dword ptr [EBP + 0xffffff60],EBX
        MOV dword ptr [EBP + -0x3c],0x200
        MOV byte ptr [g_87dd0a],0x1
        CALL FUN_00735230
        CMP EAX,ESI
        MOV byte ptr [g_87dd0a],0x0
        JGE L_743fa4
        MOV dword ptr [g_85a22c],ESI
        MOV EAX,EBX
        POP EDI
        POP ESI
        POP EBX
        MOV ESP,EBP
        POP EBP
        RET 0xc
L_743fa4:
        XOR EDX,EDX
        MOV dword ptr [EBP + -0x20],EDX
        MOV dword ptr [EBP + -0x1c],EDX
        MOV dword ptr [EBP + -0x18],EDX
        LEA EAX,[EBP + -0x10]
        PUSH EAX
        MOV EAX,dword ptr [g_85a22c]
        LEA ECX,[EBP + -0x24]
        MOV dword ptr [EBP + -0x14],EDX
        PUSH ECX
        LEA EDX,[EBP + -0x20]
        PUSH EDX
        PUSH EAX
        MOV dword ptr [EBP + -0x20],0x4200
        MOV dword ptr [EBP + -0x24],ESI
        MOV byte ptr [g_87dd0a],0x1
        CALL FUN_00734f60
        MOV EDX,dword ptr [g_85a210]
        XOR EAX,EAX
        MOV ECX,0x8
        LEA EDI,[EBP + 0xffffff30]
        REP STOSD
        LEA ECX,[EBP + 0xffffff30]
        PUSH ECX
        PUSH EDX
        MOV dword ptr [EBP + 0xffffff30],0x20
        MOV byte ptr [g_87dd0a],0x1
        CALL FUN_00735790
        TEST byte ptr [EBP + 0xffffff34],0x20
        MOV byte ptr [g_87dd0a],0x0
        JNZ L_74402a
        CMP dword ptr [EBP + -0x24],0x800000
        JNC L_7440c3
L_74402a:
        MOV EAX,dword ptr [g_85a210]
        PUSH EAX
        MOV byte ptr [EBP + -0x5],0x1
        MOV byte ptr [g_87dd0a],0x1
        CALL FUN_00740db0
        MOV ECX,dword ptr [g_858bf8]
        MOV EDX,dword ptr [g_85a22c]
        PUSH 0x13
        PUSH ECX
        PUSH EDX
        CALL FUN_00735280
        MOV EAX,dword ptr [g_85a22c]
        PUSH ESI
        PUSH ESI
        PUSH 0x10
        PUSH 0x258
        PUSH 0x320
        PUSH EAX
        CALL FUN_00735150
        MOV EDX,dword ptr [g_85a22c]
        PUSH ESI
        PUSH 0x85a210
        LEA ECX,[EBP + 0xffffff5c]
        PUSH ECX
        PUSH EDX
        CALL FUN_00735230
        CMP EAX,ESI
        MOV byte ptr [g_87dd0a],0x0
        JGE L_7440c3
        MOV EAX,dword ptr [g_85a22c]
        PUSH EAX
        CALL FUN_007351b0
        MOV ECX,dword ptr [g_858bf8]
        MOV EDX,dword ptr [g_85a22c]
        PUSH 0x8
        PUSH ECX
        PUSH EDX
        CALL FUN_00735280
        MOV dword ptr [g_85a22c],ESI
        MOV EAX,EBX
        POP EDI
        POP ESI
        POP EBX
        MOV ESP,EBP
        POP EBP
        RET 0xc
L_7440c3:
        MOV EAX,dword ptr [g_8abe58]
        MOV ECX,dword ptr [g_85a22c]
        ADD EAX,0x440
        PUSH ESI
        PUSH EAX
        PUSH ECX
        MOV dword ptr [EAX],0x17c
        CALL FUN_00735030
        MOV EAX,dword ptr [g_85a210]
        LEA EDX,[EBP + 0xfffffe94]
        PUSH EDX
        PUSH EAX
        MOV dword ptr [EBP + 0xfffffe94],0x7c
        CALL FUN_00735710
        MOV EAX,dword ptr [g_8abe58]
        MOV ECX,dword ptr [g_85a22c]
        MOV dword ptr [EAX + 0xbb4],EBX
        MOV dword ptr [EAX + 0xbb8],EBX
        MOV dword ptr [EAX + 0xbbc],EBX
        MOV dword ptr [EAX + 0xbc0],ESI
        MOV dword ptr [EAX + 0xbc4],ESI
        MOV dword ptr [EAX + 0xbc8],ESI
        PUSH ESI
        ADD EAX,0x10
        PUSH EAX
        PUSH ECX
        MOV byte ptr [g_87dd0a],0x1
        CALL FUN_00734ff0
        TEST EAX,EAX
        JGE L_74419e
        MOV EBX,dword ptr [g_8abe58]
        XOR EAX,EAX
        LEA EDX,[EBX + 0x10]
        MOV EDI,EDX
        MOV ECX,0x10b
        REP STOSD
        OR ECX,0xffffffff
        MOV EDI,0x772c5c
        REPNE SCASB
        NOT ECX
        SUB EDI,ECX
        MOV EAX,ECX
        SHR ECX,0x2
        MOV ESI,EDI
        MOV EDI,EDX
        REP MOVSD
        MOV ECX,EAX
        AND ECX,0x3
        REP MOVSB
        OR ECX,0xffffffff
        XOR EAX,EAX
        MOV EDI,0x772c5c
        REPNE SCASB
        NOT ECX
        SUB EDI,ECX
        MOV EAX,ECX
        MOV ESI,EDI
        SHR ECX,0x2
        LEA EDX,[EBX + 0x210]
        MOV EDI,EDX
        REP MOVSD
        MOV ECX,EAX
        AND ECX,0x3
        REP MOVSB
L_74419e:
        XOR ECX,ECX
        MOV dword ptr [EBP + -0x20],ECX
        MOV dword ptr [EBP + -0x1c],ECX
        MOV dword ptr [EBP + -0x18],ECX
        LEA EDX,[EBP + -0x10]
        PUSH EDX
        MOV EDX,dword ptr [g_85a22c]
        LEA EAX,[EBP + -0xc]
        MOV dword ptr [EBP + -0x14],ECX
        PUSH EAX
        LEA ECX,[EBP + -0x20]
        PUSH ECX
        PUSH EDX
        MOV dword ptr [EBP + -0x20],0x4200
        MOV byte ptr [g_87dd0a],0x1
        CALL FUN_00734f60
        MOV EAX,dword ptr [EBP + -0xc]
        CMP EAX,0x1000000
        MOV byte ptr [g_87dd0a],0x0
        JA L_7441ef
        ADD EAX,0x7fffff
        AND EAX,0xff800000
        JMP L_74420c
L_7441ef:
        CMP EAX,0x4000000
        JA L_744202
        ADD EAX,0x1ffffff
        AND EAX,0xfe000000
        JMP L_74420c
L_744202:
        ADD EAX,0x3ffffff
        AND EAX,0xfc000000
L_74420c:
        MOV dword ptr [EBP + -0xc],EAX
        LEA EAX,[EBP + 0xffffff10]
        PUSH EAX
        CALL dword ptr [g_76b144]
        MOV ECX,dword ptr [EBP + 0xffffff18]
        MOV EDX,dword ptr [EBP + -0xc]
        LEA EAX,[ECX + 0xffffff]
        AND EAX,0xff000000
        SHR EDX,0x14
        PUSH EDX
        SHR EAX,0x14
        PUSH EAX
        MOV EAX,dword ptr [g_8abe58]
        PUSH 0x7a9d48
        SUB ESP,0x42c
        LEA ESI,[EAX + 0x10]
        MOV EDI,ESP
        MOV ECX,0x10b
        REP MOVSD
        CALL FUN_0075c240
        MOV EBX,EAX
        CMP dword ptr [EBX],0x0
        JNZ L_744271
        MOV ECX,dword ptr [EBX + 0x4]
        PUSH ECX
        CALL FUN_006fab90
        ADD ESP,0x4
        TEST EAX,EAX
        JZ L_744271
        INT 3
L_744271:
        MOV EDI,dword ptr [EBX]
        MOV EDX,dword ptr [g_8abe58]
        OR ECX,0xffffffff
        XOR EAX,EAX
        REPNE SCASB
        NOT ECX
        SUB EDI,ECX
        MOV EAX,ECX
        SHR ECX,0x2
        LEA ESI,[EDX + 0xbd0]
        MOV dword ptr [EBP + -0x4],ESI
        MOV ESI,EDI
        MOV EDI,dword ptr [EBP + -0x4]
        REP MOVSD
        MOV ECX,EAX
        AND ECX,0x3
        REP MOVSB
        MOV EDI,dword ptr [EBX + 0x4]
        OR ECX,0xffffffff
        XOR EAX,EAX
        REPNE SCASB
        NOT ECX
        SUB EDI,ECX
        MOV EAX,ECX
        LEA ESI,[EDX + 0xc50]
        MOV dword ptr [EBP + -0x4],ESI
        SHR ECX,0x2
        MOV ESI,EDI
        MOV EDI,dword ptr [EBP + -0x4]
        REP MOVSD
        MOV ECX,EAX
        AND ECX,0x3
        REP MOVSB
        MOV ESI,dword ptr [EBX + 0x8]
        TEST ESI,ESI
        LEA EAX,[EBX + 0x8]
        MOV dword ptr [EDX + 0xbcc],0x0
        JZ L_744637
        MOV EDI,dword ptr [g_76b2ac]
        MOV dword ptr [EBP + -0x4],EAX
        MOV EBX,0x10000000
L_7442f0:
        PUSH ESI
        PUSH 0x7a9d38
        CALL EDI
        ADD ESP,0x8
        TEST EAX,EAX
        JNZ L_74430b
        MOV EAX,dword ptr [g_8abe58]
        OR dword ptr [EAX + 0xbcc],0x1
L_74430b:
        PUSH ESI
        PUSH 0x7a9d2c
        CALL EDI
        ADD ESP,0x8
        TEST EAX,EAX
        JNZ L_744326
        MOV EAX,dword ptr [g_8abe58]
        OR dword ptr [EAX + 0xbcc],0x2
L_744326:
        PUSH ESI
        PUSH 0x7a9d20
        CALL EDI
        ADD ESP,0x8
        TEST EAX,EAX
        JNZ L_744341
        MOV EAX,dword ptr [g_8abe58]
        OR dword ptr [EAX + 0xbcc],0x4
L_744341:
        PUSH ESI
        PUSH 0x7a9d10
        CALL EDI
        ADD ESP,0x8
        TEST EAX,EAX
        JNZ L_74435c
        MOV EAX,dword ptr [g_8abe58]
        OR dword ptr [EAX + 0xbcc],0x8
L_74435c:
        PUSH ESI
        PUSH 0x7a9cfc
        CALL EDI
        ADD ESP,0x8
        TEST EAX,EAX
        JNZ L_744377
        MOV EAX,dword ptr [g_8abe58]
        OR dword ptr [EAX + 0xbcc],0x10
L_744377:
        PUSH ESI
        PUSH 0x7a9cec
        CALL EDI
        ADD ESP,0x8
        TEST EAX,EAX
        JNZ L_744392
        MOV EAX,dword ptr [g_8abe58]
        OR dword ptr [EAX + 0xbcc],0x40
L_744392:
        PUSH ESI
        PUSH 0x7a9cdc
        CALL EDI
        ADD ESP,0x8
        TEST EAX,EAX
        JNZ L_7443b0
        MOV EAX,dword ptr [g_8abe58]
        OR dword ptr [EAX + 0xbcc],0x80
L_7443b0:
        PUSH ESI
        PUSH 0x7a9ccc
        CALL EDI
        ADD ESP,0x8
        TEST EAX,EAX
        JNZ L_7443ce
        MOV EAX,dword ptr [g_8abe58]
        OR dword ptr [EAX + 0xbcc],0x100
L_7443ce:
        PUSH ESI
        PUSH 0x7a9cbc
        CALL EDI
        ADD ESP,0x8
        TEST EAX,EAX
        JNZ L_7443ec
        MOV EAX,dword ptr [g_8abe58]
        OR dword ptr [EAX + 0xbcc],0x200
L_7443ec:
        PUSH ESI
        PUSH 0x7a9cb0
        CALL EDI
        ADD ESP,0x8
        TEST EAX,EAX
        JNZ L_74440a
        MOV EAX,dword ptr [g_8abe58]
        OR dword ptr [EAX + 0xbcc],0x400
L_74440a:
        PUSH ESI
        PUSH 0x7a9ca4
        CALL EDI
        ADD ESP,0x8
        TEST EAX,EAX
        JNZ L_744428
        MOV EAX,dword ptr [g_8abe58]
        OR dword ptr [EAX + 0xbcc],0x800
L_744428:
        PUSH ESI
        PUSH 0x7a9c98
        CALL EDI
        ADD ESP,0x8
        TEST EAX,EAX
        JNZ L_744446
        MOV EAX,dword ptr [g_8abe58]
        OR dword ptr [EAX + 0xbcc],0x1000
L_744446:
        PUSH ESI
        PUSH 0x7a9c90
        CALL EDI
        ADD ESP,0x8
        TEST EAX,EAX
        JNZ L_744464
        MOV EAX,dword ptr [g_8abe58]
        OR dword ptr [EAX + 0xbcc],0x2000
L_744464:
        PUSH ESI
        PUSH 0x7a9c88
        CALL EDI
        ADD ESP,0x8
        TEST EAX,EAX
        JNZ L_744482
        MOV EAX,dword ptr [g_8abe58]
        OR dword ptr [EAX + 0xbcc],0x4000
L_744482:
        PUSH ESI
        PUSH 0x7a9c70
        CALL EDI
        ADD ESP,0x8
        TEST EAX,EAX
        JNZ L_7444a0
        MOV EAX,dword ptr [g_8abe58]
        OR dword ptr [EAX + 0xbcc],0x8000
L_7444a0:
        PUSH ESI
        PUSH 0x7a9c5c
        CALL EDI
        ADD ESP,0x8
        TEST EAX,EAX
        JNZ L_7444be
        MOV EAX,dword ptr [g_8abe58]
        OR dword ptr [EAX + 0xbcc],0x10000
L_7444be:
        PUSH ESI
        PUSH 0x7a9c48
        CALL EDI
        ADD ESP,0x8
        TEST EAX,EAX
        JNZ L_7444dc
        MOV EAX,dword ptr [g_8abe58]
        OR dword ptr [EAX + 0xbcc],0x20000
L_7444dc:
        PUSH ESI
        PUSH 0x7a9c34
        CALL EDI
        ADD ESP,0x8
        TEST EAX,EAX
        JNZ L_7444fa
        MOV EAX,dword ptr [g_8abe58]
        OR dword ptr [EAX + 0xbcc],0x40000
L_7444fa:
        PUSH ESI
        PUSH 0x7a9c20
        CALL EDI
        ADD ESP,0x8
        TEST EAX,EAX
        JNZ L_744518
        MOV EAX,dword ptr [g_8abe58]
        OR dword ptr [EAX + 0xbcc],0x80000
L_744518:
        PUSH ESI
        PUSH 0x7a9c10
        CALL EDI
        ADD ESP,0x8
        TEST EAX,EAX
        JNZ L_744536
        MOV EAX,dword ptr [g_8abe58]
        OR dword ptr [EAX + 0xbcc],0x100000
L_744536:
        PUSH ESI
        PUSH 0x7a9c00
        CALL EDI
        ADD ESP,0x8
        TEST EAX,EAX
        JNZ L_744554
        MOV EAX,dword ptr [g_8abe58]
        OR dword ptr [EAX + 0xbcc],0x200000
L_744554:
        PUSH ESI
        PUSH 0x7a9be8
        CALL EDI
        ADD ESP,0x8
        TEST EAX,EAX
        JNZ L_744572
        MOV EAX,dword ptr [g_8abe58]
        OR dword ptr [EAX + 0xbcc],0x400000
L_744572:
        PUSH ESI
        PUSH 0x7a9bd0
        CALL EDI
        ADD ESP,0x8
        TEST EAX,EAX
        JNZ L_744590
        MOV EAX,dword ptr [g_8abe58]
        OR dword ptr [EAX + 0xbcc],0x800000
L_744590:
        PUSH ESI
        PUSH 0x7a9bbc
        CALL EDI
        ADD ESP,0x8
        TEST EAX,EAX
        JNZ L_7445ae
        MOV EAX,dword ptr [g_8abe58]
        OR dword ptr [EAX + 0xbcc],0x1000000
L_7445ae:
        PUSH ESI
        PUSH 0x7a9ba8
        CALL EDI
        ADD ESP,0x8
        TEST EAX,EAX
        JNZ L_7445cc
        MOV EAX,dword ptr [g_8abe58]
        OR dword ptr [EAX + 0xbcc],0x2000000
L_7445cc:
        PUSH ESI
        PUSH 0x7a9ba0
        CALL EDI
        ADD ESP,0x8
        TEST EAX,EAX
        JNZ L_7445ea
        MOV EAX,dword ptr [g_8abe58]
        OR dword ptr [EAX + 0xbcc],0x4000000
L_7445ea:
        PUSH ESI
        PUSH 0x7a9b8c
        CALL EDI
        ADD ESP,0x8
        TEST EAX,EAX
        JNZ L_744608
        MOV EAX,dword ptr [g_8abe58]
        OR dword ptr [EAX + 0xbcc],0x8000000
L_744608:
        PUSH ESI
        PUSH 0x7a9b78
        CALL EDI
        MOV EDX,dword ptr [g_8abe58]
        ADD ESP,0x8
        TEST EAX,EAX
        JNZ L_744623
        OR dword ptr [EDX + 0xbcc],EBX
L_744623:
        MOV EAX,dword ptr [EBP + -0x4]
        MOV ESI,dword ptr [EAX + 0x8]
        ADD EAX,0x8
        TEST ESI,ESI
        MOV dword ptr [EBP + -0x4],EAX
        JNZ L_7442f0
L_744637:
        CMP dword ptr [g_8597b0],0x2
        MOV EAX,dword ptr [EDX + 0xbcc]
        MOV dword ptr [g_8b2520],EAX
        JNZ L_744663
        MOV ECX,dword ptr [g_8597b4]
        NOT ECX
        AND ECX,EAX
        OR ECX,dword ptr [g_8597b8]
        MOV dword ptr [g_8b2520],ECX
        JMP L_744671
L_744663:
        MOV EAX,dword ptr [g_8597b4]
        TEST EAX,EAX
        JZ L_744671
        MOV dword ptr [g_8b2520],EAX
L_744671:
        MOV AL,byte ptr [g_8aa9e4]
        TEST AL,AL
        JZ L_7446e8
        PUSH 0x400
        CALL dword ptr [g_76b294]
        MOV EDX,dword ptr [g_8abe58]
        ADD ESP,0x4
        XOR EBX,EBX
        MOV dword ptr [EBP + 0xffffff58],EAX
        PUSH EBX
        MOV dword ptr [EBP + 0xffffff50],0x400
        MOV dword ptr [EBP + 0xffffff54],EBX
        ADD EDX,0x10
        MOV byte ptr [EAX],BL
        PUSH EDX
        LEA EAX,[EBP + 0xffffff50]
        PUSH EAX
        CALL FUN_007189c0
        MOV ECX,EDX
        SAR ECX,0x1f
        MOV ECX,dword ptr [g_8abe58]
        MOV dword ptr [ECX + 0x414],EDX
        MOV dword ptr [ECX + 0x410],EAX
        MOV EDX,dword ptr [EBP + 0xffffff58]
        PUSH EDX
        CALL dword ptr [g_76b2d0]
        MOV EDX,dword ptr [g_8abe58]
        ADD ESP,0x4
        JMP L_7446ea
L_7446e8:
        XOR EBX,EBX
L_7446ea:
        ADD EDX,0x6a8
        MOV ECX,0x10
        MOV dword ptr [EBP + -0x28],ECX
        MOV EAX,0x20202020
        MOV EDI,EDX
        REP STOSD
        MOV ECX,dword ptr [g_85a22c]
        PUSH EDX
        LEA EAX,[EBP + -0x28]
        PUSH EAX
        PUSH ECX
        CALL FUN_00734fb0
        MOV EAX,dword ptr [g_8abe58]
        CMP dword ptr [EAX + 0x418],0x121a
        MOV dword ptr [g_8b260c],EBX
        JNZ L_744743
        MOV ECX,dword ptr [EAX + 0x41c]
        CMP ECX,0x1
        JZ L_744739
        CMP ECX,0x2
        JNZ L_744743
L_744739:
        MOV dword ptr [g_8b260c],0x1
L_744743:
        XOR EDX,EDX
        MOV dword ptr [EBP + -0x20],EDX
        MOV dword ptr [EBP + -0x1c],EDX
        MOV dword ptr [EBP + -0x18],EDX
        LEA ECX,[EBP + -0x10]
        PUSH ECX
        ADD EAX,0xba8
        PUSH EAX
        MOV EAX,dword ptr [g_85a22c]
        MOV dword ptr [EBP + -0x14],EDX
        LEA EDX,[EBP + -0x20]
        PUSH EDX
        PUSH EAX
        MOV dword ptr [EBP + -0x20],0x4200
        MOV byte ptr [g_87dd0a],0x1
        CALL FUN_00734f60
        MOV EDX,dword ptr [g_8abe58]
        LEA ECX,[EBP + -0x10]
        PUSH ECX
        MOV ECX,dword ptr [g_85a22c]
        ADD EDX,0xbac
        PUSH EDX
        LEA EAX,[EBP + -0x20]
        PUSH EAX
        PUSH ECX
        MOV dword ptr [EBP + -0x20],0x10005000
        CALL FUN_00734f60
        MOV EAX,dword ptr [g_8abe58]
        LEA EDX,[EBP + -0x10]
        PUSH EDX
        MOV EDX,dword ptr [g_85a22c]
        ADD EAX,0xbb0
        PUSH EAX
        LEA ECX,[EBP + -0x20]
        PUSH ECX
        PUSH EDX
        MOV dword ptr [EBP + -0x20],0x20005000
        CALL FUN_00734f60
        MOV EAX,dword ptr [g_8b2520]
        TEST AH,0x40
        MOV EDX,dword ptr [g_8abe58]
        MOV byte ptr [g_87dd0a],0x0
        JZ L_7447e3
        MOV dword ptr [EDX + 0xbb0],EBX
L_7447e3:
        MOV EAX,dword ptr [EDX + 0xba8]
        MOV dword ptr [g_8b2608],EAX
        XOR EAX,EAX
        LEA EDI,[EDX + 0x8e8]
        MOV ECX,0x10
        REP STOSD
        LEA EDI,[EDX + 0x948]
        MOV ECX,0x10
        REP STOSD
        MOV ESI,0x80
        LEA EDI,[EDX + 0x9a8]
        PUSH 0x743c20
        MOV ECX,ESI
        REP STOSD
        LEA EDI,[EDX + 0x5bc]
        PUSH EBX
        MOV ECX,0x3b
        REP STOSD
        LEA EDI,[EDX + 0x6e8]
        PUSH EBX
        MOV ECX,ESI
        REP STOSD
        MOV ECX,dword ptr [g_85a22c]
        PUSH 0x1
        PUSH ECX
        MOV byte ptr [g_8abd58],AL
        MOV dword ptr [g_8b2614],EBX
        MOV dword ptr [g_8b2618],EBX
        MOV dword ptr [g_8b261c],EBX
        CALL FUN_007350c0
        MOV EDX,dword ptr [g_8abe58]
        XOR EAX,EAX
        LEA EDI,[EDX + 0x5bc]
        PUSH 0x85a244
        MOV ECX,0x3b
        REP STOSD
        MOV EAX,dword ptr [g_85a22c]
        PUSH 0x7a2b30
        PUSH EAX
        CALL FUN_00740d60
        MOV ECX,dword ptr [g_85a244]
        PUSH EBX
        PUSH 0x743e20
        PUSH 0x7a2b60
        PUSH ECX
        MOV byte ptr [g_87dd0a],0x1
        CALL FUN_0074a1e0
        MOV EAX,dword ptr [g_85a22c]
        PUSH EBX
        PUSH 0x85a214
        LEA EDX,[EBP + 0xffffff5c]
        MOV dword ptr [EBP + 0xffffff68],ESI
        MOV dword ptr [EBP + 0xffffff64],ESI
        PUSH EDX
        MOV EDI,0x20
        MOV ESI,0x1f
        PUSH EAX
        MOV dword ptr [g_85a214],EBX
        MOV dword ptr [EBP + 0xffffff60],0x1007
        MOV dword ptr [EBP + -0x3c],0x10006000
        MOV dword ptr [EBP + -0x5c],EDI
        MOV dword ptr [EBP + -0x58],0x40
        MOV dword ptr [EBP + -0x50],0x10
        MOV dword ptr [EBP + -0x4c],0xf800
        MOV dword ptr [EBP + -0x48],0x7e0
        MOV dword ptr [EBP + -0x44],ESI
        MOV byte ptr [g_87dd0a],0x1
        CALL FUN_00735230
        CMP EAX,EBX
        MOV byte ptr [g_87dd0a],0x0
        JGE L_744955
        MOV EDX,dword ptr [g_85a22c]
        PUSH EBX
        PUSH 0x85a214
        LEA ECX,[EBP + 0xffffff5c]
        PUSH ECX
        PUSH EDX
        MOV dword ptr [EBP + -0x4c],0x7c00
        MOV dword ptr [EBP + -0x48],0x3e0
        MOV dword ptr [EBP + -0x44],ESI
        MOV byte ptr [g_87dd0a],0x1
        CALL FUN_00735230
        MOV byte ptr [g_87dd0a],0x0
L_744955:
        CMP dword ptr [EBP + 0xfffffee8],EDI
        JNZ L_7449a4
        CMP EAX,EBX
        JGE L_744abf
        MOV ECX,dword ptr [g_85a22c]
        PUSH EBX
        PUSH 0x85a214
        LEA EAX,[EBP + 0xffffff5c]
        PUSH EAX
        PUSH ECX
        MOV dword ptr [EBP + -0x50],EDI
        MOV dword ptr [EBP + -0x4c],0xff0000
        MOV dword ptr [EBP + -0x48],0xff00
        MOV dword ptr [EBP + -0x44],0xff
        MOV byte ptr [g_87dd0a],0x1
        CALL FUN_00735230
        MOV byte ptr [g_87dd0a],0x0
L_7449a4:
        CMP EAX,EBX
        JGE L_744abf
        MOV EAX,dword ptr [g_85a22c]
        PUSH EBX
        PUSH 0x85a214
        LEA EDX,[EBP + 0xffffff5c]
        PUSH EDX
        PUSH EAX
        MOV dword ptr [EBP + -0x50],0x10
        MOV dword ptr [EBP + -0x3c],0x10007000
        MOV dword ptr [EBP + -0x4c],0x7c00
        MOV dword ptr [EBP + -0x48],0x3e0
        MOV dword ptr [EBP + -0x44],ESI
        MOV byte ptr [g_87dd0a],0x1
        CALL FUN_00735230
        CMP EAX,EBX
        MOV byte ptr [g_87dd0a],0x0
        JGE L_744abf
        MOV EDX,dword ptr [g_85a22c]
        PUSH EBX
        PUSH 0x85a214
        LEA ECX,[EBP + 0xffffff5c]
        PUSH ECX
        PUSH EDX
        MOV dword ptr [EBP + -0x4c],0xf800
        MOV dword ptr [EBP + -0x48],0x7e0
        MOV dword ptr [EBP + -0x44],ESI
        MOV byte ptr [g_87dd0a],0x1
        CALL FUN_00735230
        CMP EAX,EBX
        MOV byte ptr [g_87dd0a],0x0
        JGE L_744abf
        MOV ECX,dword ptr [g_85a22c]
        PUSH EBX
        PUSH 0x85a214
        LEA EAX,[EBP + 0xffffff5c]
        PUSH EAX
        MOV ESI,0xff00
        PUSH ECX
        MOV dword ptr [EBP + -0x50],EDI
        MOV dword ptr [EBP + -0x4c],0xff0000
        MOV dword ptr [EBP + -0x48],ESI
        MOV dword ptr [EBP + -0x44],0xff
        MOV byte ptr [g_87dd0a],0x1
        CALL FUN_00735230
        CMP EAX,EBX
        MOV byte ptr [g_87dd0a],0x0
        JGE L_744abf
        MOV EAX,dword ptr [g_85a22c]
        PUSH EBX
        PUSH 0x85a214
        LEA EDX,[EBP + 0xffffff5c]
        PUSH EDX
        PUSH EAX
        MOV dword ptr [EBP + -0x50],EDI
        MOV dword ptr [EBP + -0x4c],0xff0000
        MOV dword ptr [EBP + -0x48],ESI
        MOV dword ptr [EBP + -0x44],0xff
        MOV byte ptr [g_87dd0a],0x1
        CALL FUN_00735230
        CMP EAX,EBX
        MOV byte ptr [g_87dd0a],0x0
        JL L_74519b
L_744abf:
        MOV EDX,dword ptr [g_85a214]
        LEA ECX,[EBP + 0xffffff5c]
        PUSH ECX
        PUSH EDX
        CALL FUN_00735710
        MOV EAX,dword ptr [EBP + -0x50]
        MOV EDI,dword ptr [EBP + 0xffffff6c]
        MOV EDX,dword ptr [g_8abe58]
        SHR EAX,0x3
        IMUL EAX,dword ptr [EBP + 0xffffff68]
        PUSH EBX
        CMP EDI,EAX
        MOV EAX,dword ptr [g_85a244]
        PUSH 0x743ea0
        SETZ CL
        PUSH EAX
        MOV byte ptr [EDX + 0xcd1],CL
        CALL FUN_0074a1a0
        MOV AL,byte ptr [g_8abd58]
        TEST AL,AL
        JZ L_745189
        MOV EDX,dword ptr [g_8abe58]
        MOV EAX,dword ptr [g_8abdd4]
        TEST AH,0x1
        LEA EDI,[EDX + 0x5bc]
        MOV ECX,0x3b
        MOV ESI,0x8abd60
        REP MOVSD
        JNZ L_744b45
        MOV ECX,0x10
        XOR EAX,EAX
        LEA EDI,[EDX + 0x948]
        REP STOSD
L_744b45:
        TEST byte ptr [EDX + 0x618],0x1
        MOV dword ptr [g_8b2620],EBX
        JZ L_745189
        MOV ECX,dword ptr [g_85a214]
        MOV EDX,dword ptr [g_85a244]
        PUSH 0x85a248
        PUSH ECX
        PUSH 0x7a2b60
        PUSH EDX
        MOV byte ptr [g_87dd0a],0x1
        CALL FUN_0074a150
        CMP EAX,EBX
        MOV byte ptr [g_87dd0a],0x0
        JL L_745189
        MOV EAX,dword ptr [g_85a248]
        PUSH EBX
        PUSH 0x743e60
        PUSH EAX
        CALL FUN_0074a5e0
        MOV ECX,dword ptr [g_8abe58]
        MOV EAX,dword ptr [ECX + 0x5bc]
        TEST AH,0x40
        JNZ L_745177
        TEST AH,0x20
        JZ L_745177
        MOV EDI,0x2
        CMP word ptr [ECX + 0x674],DI
        JC L_745177
        CMP word ptr [ECX + 0x676],DI
        JC L_745177
        MOV ECX,dword ptr [g_85a248]
        PUSH EDI
        PUSH 0x11
        PUSH EBX
        PUSH ECX
        CALL FUN_0074a670
        MOV EDX,dword ptr [g_85a248]
        PUSH EDI
        PUSH 0x10
        PUSH EBX
        PUSH EDX
        CALL FUN_0074a670
        MOV EAX,dword ptr [g_85a248]
        PUSH 0x3
        PUSH 0x12
        PUSH EBX
        PUSH EAX
        CALL FUN_0074a670
        MOV ECX,dword ptr [g_85a248]
        PUSH EDI
        PUSH 0x11
        MOV ESI,0x1
        PUSH ESI
        PUSH ECX
        CALL FUN_0074a670
        MOV EDX,dword ptr [g_85a248]
        PUSH EDI
        PUSH 0x10
        PUSH ESI
        PUSH EDX
        CALL FUN_0074a670
        MOV EAX,dword ptr [g_85a248]
        PUSH ESI
        PUSH 0x12
        PUSH ESI
        PUSH EAX
        CALL FUN_0074a670
        MOV ECX,dword ptr [g_85a248]
        PUSH EDI
        PUSH EDI
        PUSH EBX
        PUSH ECX
        CALL FUN_0074a670
        MOV EDX,dword ptr [g_85a248]
        PUSH EBX
        PUSH 0x3
        PUSH EBX
        PUSH EDX
        CALL FUN_0074a670
        MOV EAX,dword ptr [g_85a248]
        PUSH 0x4
        PUSH ESI
        PUSH EBX
        PUSH EAX
        CALL FUN_0074a670
        MOV ECX,dword ptr [g_85a248]
        PUSH EDI
        PUSH 0x5
        PUSH EBX
        PUSH ECX
        CALL FUN_0074a670
        MOV EDX,dword ptr [g_85a248]
        PUSH EBX
        PUSH 0x6
        PUSH EBX
        PUSH EDX
        CALL FUN_0074a670
        MOV EAX,dword ptr [g_85a248]
        PUSH EDI
        PUSH 0x4
        PUSH EBX
        PUSH EAX
        CALL FUN_0074a670
        MOV ECX,dword ptr [g_85a248]
        PUSH EDI
        PUSH EDI
        PUSH ESI
        PUSH ECX
        CALL FUN_0074a670
        PUSH ESI
        PUSH 0x3
        MOV EDX,dword ptr [g_85a248]
        PUSH ESI
        PUSH EDX
        CALL FUN_0074a670
        MOV EAX,dword ptr [g_85a248]
        PUSH 0x5
        PUSH ESI
        PUSH ESI
        PUSH EAX
        CALL FUN_0074a670
        MOV ECX,dword ptr [g_85a248]
        PUSH EDI
        PUSH 0x5
        PUSH ESI
        PUSH ECX
        CALL FUN_0074a670
        MOV EDX,dword ptr [g_85a248]
        PUSH ESI
        PUSH 0x6
        PUSH ESI
        PUSH EDX
        CALL FUN_0074a670
        MOV EAX,dword ptr [g_85a248]
        PUSH EDI
        PUSH 0x4
        PUSH ESI
        PUSH EAX
        CALL FUN_0074a670
        MOV ECX,dword ptr [g_85a248]
        PUSH ESI
        PUSH ESI
        PUSH EDI
        PUSH ECX
        CALL FUN_0074a670
        MOV EDX,dword ptr [g_85a248]
        PUSH ESI
        PUSH 0x4
        PUSH EDI
        PUSH EDX
        CALL FUN_0074a670
        MOV EAX,dword ptr [g_8abe58]
        MOV EDX,dword ptr [g_85a248]
        LEA ECX,[EBP + -0x4]
        PUSH ECX
        MOV dword ptr [EAX + 0xbc0],EBX
        PUSH EDX
        MOV dword ptr [EBP + -0x4],EBX
        MOV byte ptr [g_87dd0a],0x1
        CALL FUN_0074a6d0
        MOV ECX,dword ptr [g_8abe58]
        MOV dword ptr [ECX + 0xbb4],EAX
        CMP dword ptr [EBP + -0x4],ESI
        MOV byte ptr [g_87dd0a],0x0
        JZ L_744d5d
        CMP EAX,EBX
        JNZ L_744d5d
        MOV dword ptr [ECX + 0xbb4],ESI
L_744d5d:
        CMP dword ptr [ECX + 0xbb4],EBX
        JZ L_744dbb
        MOV EAX,dword ptr [g_85a248]
        PUSH ESI
        PUSH 0x12
        PUSH EBX
        PUSH EAX
        CALL FUN_0074a670
        MOV EDX,dword ptr [g_85a248]
        LEA ECX,[EBP + -0x4]
        PUSH ECX
        PUSH EDX
        MOV byte ptr [g_87dd0a],0x1
        CALL FUN_0074a6d0
        MOV ECX,dword ptr [g_8abe58]
        MOV dword ptr [ECX + 0xbb4],EAX
        CMP dword ptr [EBP + -0x4],ESI
        MOV byte ptr [g_87dd0a],0x0
        JZ L_744dad
        CMP EAX,EBX
        JNZ L_744dad
        MOV dword ptr [ECX + 0xbb4],ESI
L_744dad:
        CMP dword ptr [ECX + 0xbb4],EBX
        JNZ L_744dbb
        MOV dword ptr [ECX + 0xbc0],ESI
L_744dbb:
        MOV EAX,dword ptr [g_85a248]
        PUSH EDI
        PUSH 0x11
        PUSH EBX
        PUSH EAX
        CALL FUN_0074a670
        MOV ECX,dword ptr [g_85a248]
        PUSH EDI
        PUSH 0x10
        PUSH EBX
        PUSH ECX
        CALL FUN_0074a670
        MOV EDX,dword ptr [g_85a248]
        PUSH 0x3
        PUSH 0x12
        PUSH EBX
        PUSH EDX
        CALL FUN_0074a670
        MOV EAX,dword ptr [g_85a248]
        PUSH EDI
        PUSH 0x11
        PUSH ESI
        PUSH EAX
        CALL FUN_0074a670
        MOV ECX,dword ptr [g_85a248]
        PUSH EDI
        PUSH 0x10
        PUSH ESI
        PUSH ECX
        CALL FUN_0074a670
        MOV EDX,dword ptr [g_85a248]
        PUSH ESI
        PUSH 0x12
        PUSH ESI
        PUSH EDX
        CALL FUN_0074a670
        MOV EAX,dword ptr [g_85a248]
        PUSH EDI
        PUSH EDI
        PUSH EBX
        PUSH EAX
        CALL FUN_0074a670
        MOV ECX,dword ptr [g_85a248]
        PUSH EBX
        PUSH 0x3
        PUSH EBX
        PUSH ECX
        CALL FUN_0074a670
        MOV EDX,dword ptr [g_85a248]
        PUSH 0x4
        PUSH ESI
        PUSH EBX
        PUSH EDX
        CALL FUN_0074a670
        MOV EAX,dword ptr [g_85a248]
        PUSH EDI
        PUSH 0x5
        PUSH EBX
        PUSH EAX
        CALL FUN_0074a670
        MOV ECX,dword ptr [g_85a248]
        PUSH EBX
        PUSH 0x6
        PUSH EBX
        PUSH ECX
        CALL FUN_0074a670
        MOV EDX,dword ptr [g_85a248]
        PUSH 0x4
        PUSH 0x4
        PUSH EBX
        PUSH EDX
        CALL FUN_0074a670
        MOV EAX,dword ptr [g_85a248]
        PUSH EDI
        PUSH EDI
        PUSH ESI
        PUSH EAX
        CALL FUN_0074a670
        PUSH ESI
        PUSH 0x3
        PUSH ESI
        MOV ECX,dword ptr [g_85a248]
        PUSH ECX
        CALL FUN_0074a670
        MOV EDX,dword ptr [g_85a248]
        PUSH 0x7
        PUSH ESI
        PUSH ESI
        PUSH EDX
        CALL FUN_0074a670
        MOV EAX,dword ptr [g_85a248]
        PUSH EDI
        PUSH 0x5
        PUSH ESI
        PUSH EAX
        CALL FUN_0074a670
        MOV ECX,dword ptr [g_85a248]
        PUSH ESI
        PUSH 0x6
        PUSH ESI
        PUSH ECX
        CALL FUN_0074a670
        MOV EDX,dword ptr [g_85a248]
        PUSH 0x3
        PUSH 0x4
        PUSH ESI
        PUSH EDX
        CALL FUN_0074a670
        MOV EAX,dword ptr [g_85a248]
        PUSH ESI
        PUSH ESI
        PUSH EDI
        PUSH EAX
        CALL FUN_0074a670
        MOV ECX,dword ptr [g_85a248]
        PUSH ESI
        PUSH 0x4
        PUSH EDI
        PUSH ECX
        CALL FUN_0074a670
        MOV EDX,dword ptr [g_8abe58]
        MOV ECX,dword ptr [g_85a248]
        LEA EAX,[EBP + -0x4]
        PUSH EAX
        MOV dword ptr [EDX + 0xbc4],EBX
        PUSH ECX
        MOV byte ptr [g_87dd0a],0x1
        MOV dword ptr [EBP + -0x4],EBX
        CALL FUN_0074a6d0
        MOV ECX,dword ptr [g_8abe58]
        MOV dword ptr [ECX + 0xbb8],EAX
        CMP dword ptr [EBP + -0x4],ESI
        MOV byte ptr [g_87dd0a],0x0
        JZ L_744f3c
        CMP EAX,EBX
        JNZ L_744f3c
        MOV dword ptr [ECX + 0xbb8],ESI
L_744f3c:
        CMP dword ptr [ECX + 0xbb8],EBX
        JZ L_744f9b
        MOV EDX,dword ptr [g_85a248]
        PUSH ESI
        PUSH 0x12
        PUSH EBX
        PUSH EDX
        CALL FUN_0074a670
        MOV ECX,dword ptr [g_85a248]
        LEA EAX,[EBP + -0x4]
        PUSH EAX
        PUSH ECX
        MOV byte ptr [g_87dd0a],0x1
        CALL FUN_0074a6d0
        MOV ECX,dword ptr [g_8abe58]
        MOV dword ptr [ECX + 0xbb8],EAX
        CMP dword ptr [EBP + -0x4],ESI
        MOV byte ptr [g_87dd0a],0x0
        JZ L_744f8d
        CMP EAX,EBX
        JNZ L_744f8d
        MOV dword ptr [ECX + 0xbb8],ESI
L_744f8d:
        CMP dword ptr [ECX + 0xbb8],EBX
        JNZ L_744f9b
        MOV dword ptr [ECX + 0xbc4],ESI
L_744f9b:
        MOV EDX,dword ptr [g_85a248]
        PUSH EDI
        PUSH 0x11
        PUSH EBX
        PUSH EDX
        CALL FUN_0074a670
        MOV EAX,dword ptr [g_85a248]
        PUSH EDI
        PUSH 0x10
        PUSH EBX
        PUSH EAX
        CALL FUN_0074a670
        MOV ECX,dword ptr [g_85a248]
        PUSH 0x3
        PUSH 0x12
        PUSH EBX
        PUSH ECX
        CALL FUN_0074a670
        MOV EDX,dword ptr [g_85a248]
        PUSH EDI
        PUSH 0x11
        PUSH ESI
        PUSH EDX
        CALL FUN_0074a670
        MOV EAX,dword ptr [g_85a248]
        PUSH EDI
        PUSH 0x10
        PUSH ESI
        PUSH EAX
        CALL FUN_0074a670
        MOV ECX,dword ptr [g_85a248]
        PUSH ESI
        PUSH 0x12
        PUSH ESI
        PUSH ECX
        CALL FUN_0074a670
        MOV EDX,dword ptr [g_85a248]
        PUSH EDI
        PUSH EDI
        PUSH EBX
        PUSH EDX
        CALL FUN_0074a670
        MOV EAX,dword ptr [g_85a248]
        PUSH EBX
        PUSH 0x3
        PUSH EBX
        PUSH EAX
        CALL FUN_0074a670
        MOV ECX,dword ptr [g_85a248]
        PUSH EDI
        PUSH ESI
        PUSH EBX
        PUSH ECX
        CALL FUN_0074a670
        MOV EDX,dword ptr [g_85a248]
        PUSH EDI
        PUSH 0x5
        PUSH EBX
        PUSH EDX
        CALL FUN_0074a670
        MOV EAX,dword ptr [g_85a248]
        PUSH EBX
        PUSH 0x6
        PUSH EBX
        PUSH EAX
        CALL FUN_0074a670
        MOV ECX,dword ptr [g_85a248]
        PUSH EDI
        PUSH 0x4
        PUSH EBX
        PUSH ECX
        CALL FUN_0074a670
        MOV EDX,dword ptr [g_85a248]
        PUSH EDI
        PUSH EDI
        PUSH ESI
        PUSH EDX
        CALL FUN_0074a670
        PUSH ESI
        PUSH 0x3
        PUSH ESI
        MOV EAX,dword ptr [g_85a248]
        PUSH EAX
        CALL FUN_0074a670
        MOV ECX,dword ptr [g_85a248]
        PUSH 0xd
        PUSH ESI
        PUSH ESI
        PUSH ECX
        CALL FUN_0074a670
        MOV EDX,dword ptr [g_85a248]
        PUSH EDI
        PUSH 0x5
        PUSH ESI
        PUSH EDX
        CALL FUN_0074a670
        MOV EAX,dword ptr [g_85a248]
        PUSH ESI
        PUSH 0x6
        PUSH ESI
        PUSH EAX
        CALL FUN_0074a670
        MOV ECX,dword ptr [g_85a248]
        PUSH 0x3
        PUSH 0x4
        PUSH ESI
        PUSH ECX
        CALL FUN_0074a670
        MOV EDX,dword ptr [g_85a248]
        PUSH ESI
        PUSH ESI
        PUSH EDI
        PUSH EDX
        CALL FUN_0074a670
        MOV EAX,dword ptr [g_85a248]
        PUSH ESI
        PUSH 0x4
        PUSH EDI
        PUSH EAX
        CALL FUN_0074a670
        MOV ECX,dword ptr [g_8abe58]
        MOV EAX,dword ptr [g_85a248]
        LEA EDX,[EBP + -0x4]
        PUSH EDX
        MOV dword ptr [ECX + 0xbc8],EBX
        PUSH EAX
        MOV byte ptr [g_87dd0a],0x1
        MOV dword ptr [EBP + -0x4],EBX
        CALL FUN_0074a6d0
        MOV ECX,dword ptr [g_8abe58]
        MOV dword ptr [ECX + 0xbbc],EAX
        CMP dword ptr [EBP + -0x4],ESI
        MOV byte ptr [g_87dd0a],0x0
        JZ L_745119
        CMP EAX,EBX
        JNZ L_745119
        MOV dword ptr [ECX + 0xbbc],ESI
L_745119:
        CMP dword ptr [ECX + 0xbbc],EBX
        JZ L_745177
        MOV ECX,dword ptr [g_85a248]
        PUSH ESI
        PUSH 0x12
        PUSH EBX
        PUSH ECX
        CALL FUN_0074a670
        MOV EAX,dword ptr [g_85a248]
        LEA EDX,[EBP + -0x4]
        PUSH EDX
        PUSH EAX
        MOV byte ptr [g_87dd0a],0x1
        CALL FUN_0074a6d0
        MOV ECX,dword ptr [g_8abe58]
        MOV dword ptr [ECX + 0xbbc],EAX
        CMP dword ptr [EBP + -0x4],ESI
        MOV byte ptr [g_87dd0a],0x0
        JZ L_745169
        CMP EAX,EBX
        JNZ L_745169
        MOV dword ptr [ECX + 0xbbc],ESI
L_745169:
        CMP dword ptr [ECX + 0xbbc],EBX
        JNZ L_745177
        MOV dword ptr [ECX + 0xbc8],ESI
L_745177:
        MOV ECX,dword ptr [g_85a248]
        PUSH ECX
        CALL FUN_00740db0
        MOV dword ptr [g_85a248],EBX
L_745189:
        MOV EDX,dword ptr [g_85a214]
        PUSH EDX
        CALL FUN_00740db0
        MOV dword ptr [g_85a214],EBX
L_74519b:
        MOV EAX,dword ptr [g_85a244]
        PUSH EAX
        CALL FUN_00740db0
        MOV ECX,dword ptr [g_85a210]
        PUSH ECX
        MOV dword ptr [g_85a244],EBX
        CALL FUN_00740db0
        MOV AL,byte ptr [EBP + -0x5]
        TEST AL,AL
        MOV dword ptr [g_85a210],EBX
        JZ L_7451f3
        MOV EDX,dword ptr [g_85a22c]
        PUSH EDX
        MOV byte ptr [g_87dd0a],0x1
        CALL FUN_007351b0
        MOV EAX,dword ptr [g_858bf8]
        MOV ECX,dword ptr [g_85a22c]
        PUSH 0x8
        PUSH EAX
        PUSH ECX
        CALL FUN_00735280
        MOV byte ptr [g_87dd0a],0x0
L_7451f3:
        MOV EDX,dword ptr [g_85a22c]
        PUSH EDX
        CALL FUN_00740db0
        MOV EAX,dword ptr [EBP + 0x8]
        CMP EAX,EBX
        MOV dword ptr [g_85a22c],EBX
        JZ L_74522a
        MOV EDX,dword ptr [EAX]
        MOV ECX,dword ptr [g_8abe58]
        MOV dword ptr [ECX],EDX
        MOV EDX,dword ptr [EAX + 0x4]
        MOV dword ptr [ECX + 0x4],EDX
        MOV EDX,dword ptr [EAX + 0x8]
        MOV EAX,dword ptr [EAX + 0xc]
        MOV dword ptr [ECX + 0x8],EDX
        MOV dword ptr [ECX + 0xc],EAX
        JMP L_74523d
L_74522a:
        MOV EDX,dword ptr [g_8abe58]
        XOR ECX,ECX
        MOV dword ptr [EDX],ECX
        MOV dword ptr [EDX + 0x4],ECX
        MOV dword ptr [EDX + 0x8],ECX
        MOV dword ptr [EDX + 0xc],ECX
L_74523d:
        MOV EDX,dword ptr [g_8abe58]
        MOV ECX,dword ptr [g_8abe54]
        MOV AL,byte ptr [g_8abd58]
        ADD EDX,0xcd8
        INC ECX
        TEST AL,AL
        MOV dword ptr [g_8abe58],EDX
        MOV dword ptr [g_8abe54],ECX
        JZ L_74526b
        INC dword ptr [g_8abe50]
L_74526b:
        CMP dword ptr [g_8abe54],0x8
        POP EDI
        SBB EAX,EAX
        POP ESI
        NEG EAX
        POP EBX
        MOV ESP,EBP
        POP EBP
        RET 0xc
    }
}
