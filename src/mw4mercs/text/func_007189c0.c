/* FUN_007189c0 - driver info dump (FindFirstFileA/version-info report builder)
 * __stdcall, ret 0xc, returns 64-bit value in EDX:EAX
 * Transcribed from reference MW4Mercs.exe @ 0x007189C0 (4145 bytes)
 */

/* IAT function pointers */
extern void *g_76b248;   /* GetSystemDirectoryA */
extern void *g_76b1a4;   /* FindFirstFileA */
extern void *g_76b19c;   /* FindClose */
extern void *g_76b1b4;   /* FileTimeToLocalFileTime */
extern void *g_76b1b0;   /* FileTimeToSystemTime */
extern void *g_76b4f8;   /* wsprintfA */
extern void *g_76b294;   /* malloc */
extern void *g_76b2d0;   /* free */

/* game functions */
extern void __cdecl FUN_0071ddf0(void);
extern void __cdecl FUN_0075e352(void);
extern void __cdecl FUN_0075e34c(void);
extern void __cdecl FUN_0075e346(void);
extern void __cdecl FUN_0075dc60(void);
extern void __cdecl FUN_006fa880(void);

__declspec(naked) void FUN_007189c0(void)
{
    __asm {
        SUB ESP,0x38c
        PUSH EBX
        XOR EAX,EAX
        PUSH EBP
        PUSH ESI
        MOV dword ptr [ESP + 0x1c],EAX
        MOV dword ptr [ESP + 0x20],EAX
        MOV AL,byte ptr [ESP + 0x3a4]
        TEST AL,AL
        MOV ESI,0x76b768
        PUSH EDI
        MOV dword ptr [ESP + 0x14],ESI
        JZ L_7189f1
        MOV ESI,0x7a3668
        MOV dword ptr [ESP + 0x14],ESI
L_7189f1:
        MOV EBX,dword ptr [ESP + 0x3a0]
        MOV EAX,0x7a3654
        TEST EAX,EAX
        JZ L_718a4f
        MOV EDX,dword ptr [EBX + 0x4]
        OR ECX,0xffffffff
        MOV EDI,EAX
        XOR EAX,EAX
        REPNE SCASB
        NOT ECX
        DEC ECX
        MOV EAX,ECX
        MOV ECX,dword ptr [EBX]
        INC EAX
        LEA ESI,[EAX + EDX*0x1]
        CMP ESI,ECX
        JLE L_718a20
        SUB ECX,EDX
        MOV EAX,ECX
L_718a20:
        MOV EDX,dword ptr [EBX + 0x8]
        MOV EDI,dword ptr [EBX + 0x4]
        MOV ECX,EAX
        MOV EBP,ECX
        SHR ECX,0x2
        ADD EDI,EDX
        MOV ESI,0x7a3654
        REP MOVSD
        MOV ECX,EBP
        AND ECX,0x3
        REP MOVSB
        MOV ECX,dword ptr [EBX + 0x4]
        MOV ESI,dword ptr [ESP + 0x14]
        LEA EAX,[EAX + ECX*0x1 + -0x1]
        MOV dword ptr [EBX + 0x4],EAX
        MOV byte ptr [EAX + EDX*0x1],0x0
L_718a4f:
        TEST ESI,ESI
        JZ L_718a98
        MOV EDX,dword ptr [EBX + 0x4]
        OR ECX,0xffffffff
        XOR EAX,EAX
        MOV EDI,ESI
        REPNE SCASB
        NOT ECX
        DEC ECX
        MOV EAX,ECX
        MOV ECX,dword ptr [EBX]
        INC EAX
        LEA EDI,[EAX + EDX*0x1]
        CMP EDI,ECX
        JLE L_718a72
        SUB ECX,EDX
        MOV EAX,ECX
L_718a72:
        MOV EDX,dword ptr [EBX + 0x8]
        MOV EDI,dword ptr [EBX + 0x4]
        MOV ECX,EAX
        MOV EBP,ECX
        SHR ECX,0x2
        ADD EDI,EDX
        REP MOVSD
        MOV ECX,EBP
        AND ECX,0x3
        REP MOVSB
        MOV ECX,dword ptr [EBX + 0x4]
        LEA EAX,[EAX + ECX*0x1 + -0x1]
        MOV dword ptr [EBX + 0x4],EAX
        MOV byte ptr [EAX + EDX*0x1],0x0
L_718a98:
        MOV ECX,0x79ffd0
        TEST ECX,ECX
        JZ L_718aeb
        MOV EDX,dword ptr [EBX + 0x4]
        MOV EDI,ECX
        OR ECX,0xffffffff
        XOR EAX,EAX
        REPNE SCASB
        NOT ECX
        DEC ECX
        MOV EAX,ECX
        MOV ECX,dword ptr [EBX]
        INC EAX
        LEA ESI,[EAX + EDX*0x1]
        CMP ESI,ECX
        JLE L_718ac0
        SUB ECX,EDX
        MOV EAX,ECX
L_718ac0:
        MOV EDX,dword ptr [EBX + 0x8]
        MOV EDI,dword ptr [EBX + 0x4]
        MOV ECX,EAX
        MOV EBP,ECX
        SHR ECX,0x2
        ADD EDI,EDX
        MOV ESI,0x79ffd0
        REP MOVSD
        MOV ECX,EBP
        AND ECX,0x3
        REP MOVSB
        MOV ECX,dword ptr [EBX + 0x4]
        LEA EAX,[EAX + ECX*0x1 + -0x1]
        MOV dword ptr [EBX + 0x4],EAX
        MOV byte ptr [EAX + EDX*0x1],0x0
L_718aeb:
        MOV ESI,dword ptr [ESP + 0x3a4]
        TEST ESI,ESI
        JZ L_718b3b
        MOV EDX,dword ptr [EBX + 0x4]
        OR ECX,0xffffffff
        XOR EAX,EAX
        MOV EDI,ESI
        REPNE SCASB
        NOT ECX
        DEC ECX
        MOV EAX,ECX
        MOV ECX,dword ptr [EBX]
        INC EAX
        LEA EDI,[EAX + EDX*0x1]
        CMP EDI,ECX
        JLE L_718b15
        SUB ECX,EDX
        MOV EAX,ECX
L_718b15:
        MOV EDX,dword ptr [EBX + 0x8]
        MOV EDI,dword ptr [EBX + 0x4]
        MOV ECX,EAX
        MOV EBP,ECX
        SHR ECX,0x2
        ADD EDI,EDX
        REP MOVSD
        MOV ECX,EBP
        AND ECX,0x3
        REP MOVSB
        MOV ECX,dword ptr [EBX + 0x4]
        LEA EAX,[EAX + ECX*0x1 + -0x1]
        MOV dword ptr [EBX + 0x4],EAX
        MOV byte ptr [EAX + EDX*0x1],0x0
L_718b3b:
        MOV EDX,0x77a078
        TEST EDX,EDX
        JZ L_718b8e
        OR ECX,0xffffffff
        XOR EAX,EAX
        MOV EDI,EDX
        MOV EDX,dword ptr [EBX + 0x4]
        REPNE SCASB
        NOT ECX
        DEC ECX
        MOV EAX,ECX
        MOV ECX,dword ptr [EBX]
        INC EAX
        LEA ESI,[EAX + EDX*0x1]
        CMP ESI,ECX
        JLE L_718b63
        SUB ECX,EDX
        MOV EAX,ECX
L_718b63:
        MOV EDX,dword ptr [EBX + 0x8]
        MOV EDI,dword ptr [EBX + 0x4]
        MOV ECX,EAX
        MOV EBP,ECX
        SHR ECX,0x2
        ADD EDI,EDX
        MOV ESI,0x77a078
        REP MOVSD
        MOV ECX,EBP
        AND ECX,0x3
        REP MOVSB
        MOV ECX,dword ptr [EBX + 0x4]
        LEA EAX,[EAX + ECX*0x1 + -0x1]
        MOV dword ptr [EBX + 0x4],EAX
        MOV byte ptr [EAX + EDX*0x1],0x0
L_718b8e:
        PUSH 0x104
        LEA EAX,[ESP + 0x7c]
        PUSH EAX
        CALL dword ptr [g_76b248]
        OR ECX,0xffffffff
        XOR EAX,EAX
        MOV EDI,0x76c5a8
        REPNE SCASB
        NOT ECX
        SUB EDI,ECX
        MOV EBP,ECX
        OR ECX,0xffffffff
        MOV ESI,EDI
        LEA EDX,[ESP + 0x78]
        MOV EDI,EDX
        REPNE SCASB
        DEC EDI
        MOV ECX,EBP
        SHR ECX,0x2
        REP MOVSD
        MOV ECX,EBP
        AND ECX,0x3
        REP MOVSB
        MOV EDI,dword ptr [ESP + 0x3a4]
        OR ECX,0xffffffff
        REPNE SCASB
        NOT ECX
        SUB EDI,ECX
        MOV EBP,ECX
        OR ECX,0xffffffff
        MOV ESI,EDI
        LEA EDX,[ESP + 0x78]
        MOV EDI,EDX
        REPNE SCASB
        DEC EDI
        MOV ECX,EBP
        SHR ECX,0x2
        REP MOVSD
        MOV ECX,EBP
        AND ECX,0x3
        REP MOVSB
        MOV EBP,dword ptr [g_76b1a4]
        OR ECX,0xffffffff
        LEA EDI,[ESP + 0x78]
        REPNE SCASB
        NOT ECX
        DEC ECX
        LEA EAX,[ESP + 0x25c]
        MOV dword ptr [ESP + 0x10],ECX
        PUSH EAX
        LEA ECX,[ESP + 0x7c]
        PUSH ECX
        CALL EBP
        CMP EAX,-0x1
        JNZ L_719105
        OR ECX,EAX
        XOR EAX,EAX
        MOV EDI,0x7a364c
        REPNE SCASB
        NOT ECX
        SUB EDI,ECX
        MOV ESI,EDI
        LEA EDX,[ESP + 0x78]
        MOV EDI,EDX
        MOV EDX,ECX
        OR ECX,0xffffffff
        REPNE SCASB
        MOV ECX,EDX
        SHR ECX,0x2
        DEC EDI
        REP MOVSD
        MOV ECX,EDX
        AND ECX,0x3
        LEA EAX,[ESP + 0x25c]
        REP MOVSB
        PUSH EAX
        LEA ECX,[ESP + 0x7c]
        PUSH ECX
        CALL EBP
        CMP EAX,-0x1
        JNZ L_719105
        MOV EDX,dword ptr [ESP + 0x10]
        OR ECX,0xffffffff
        LEA EAX,[ESP + EDX*0x1 + 0x78]
        MOV byte ptr [EAX],0x0
        MOV dword ptr [ESP + 0x10],EAX
        XOR EAX,EAX
        MOV EDI,0x7a3644
        REPNE SCASB
        NOT ECX
        SUB EDI,ECX
        MOV ESI,EDI
        LEA EDX,[ESP + 0x78]
        MOV EDI,EDX
        MOV EDX,ECX
        OR ECX,0xffffffff
        REPNE SCASB
        MOV ECX,EDX
        SHR ECX,0x2
        DEC EDI
        REP MOVSD
        MOV ECX,EDX
        AND ECX,0x3
        LEA EAX,[ESP + 0x25c]
        REP MOVSB
        PUSH EAX
        LEA ECX,[ESP + 0x7c]
        PUSH ECX
        CALL EBP
        CMP EAX,-0x1
        JNZ L_719105
        MOV EDX,dword ptr [ESP + 0x10]
        OR ECX,EAX
        XOR EAX,EAX
        MOV EDI,0x7a363c
        REPNE SCASB
        NOT ECX
        SUB EDI,ECX
        MOV byte ptr [EDX],0x0
        MOV ESI,EDI
        LEA EDX,[ESP + 0x78]
        MOV EDI,EDX
        MOV EDX,ECX
        OR ECX,0xffffffff
        REPNE SCASB
        MOV ECX,EDX
        SHR ECX,0x2
        DEC EDI
        REP MOVSD
        MOV ECX,EDX
        AND ECX,0x3
        LEA EAX,[ESP + 0x25c]
        REP MOVSB
        PUSH EAX
        LEA ECX,[ESP + 0x7c]
        PUSH ECX
        CALL EBP
        CMP EAX,-0x1
        JNZ L_719105
        PUSH 0x104
        LEA EDX,[ESP + 0x7c]
        PUSH EDX
        CALL dword ptr [g_76b248]
        OR ECX,0xffffffff
        XOR EAX,EAX
        MOV EDI,0x7a3630
        REPNE SCASB
        NOT ECX
        SUB EDI,ECX
        MOV ESI,EDI
        LEA EDX,[ESP + 0x78]
        MOV EDI,EDX
        MOV EDX,ECX
        OR ECX,0xffffffff
        REPNE SCASB
        DEC EDI
        MOV ECX,EDX
        SHR ECX,0x2
        REP MOVSD
        MOV ECX,EDX
        AND ECX,0x3
        REP MOVSB
        MOV EDI,dword ptr [ESP + 0x3a4]
        OR ECX,0xffffffff
        REPNE SCASB
        NOT ECX
        SUB EDI,ECX
        MOV ESI,EDI
        LEA EDX,[ESP + 0x78]
        MOV EDI,EDX
        MOV EDX,ECX
        OR ECX,0xffffffff
        REPNE SCASB
        DEC EDI
        MOV ECX,EDX
        SHR ECX,0x2
        REP MOVSD
        MOV ECX,EDX
        AND ECX,0x3
        REP MOVSB
        OR ECX,0xffffffff
        LEA EDI,[ESP + 0x78]
        REPNE SCASB
        NOT ECX
        DEC ECX
        LEA EAX,[ESP + 0x25c]
        MOV dword ptr [ESP + 0x10],ECX
        PUSH EAX
        LEA ECX,[ESP + 0x7c]
        PUSH ECX
        CALL EBP
        CMP EAX,-0x1
        JNZ L_719105
        OR ECX,EAX
        XOR EAX,EAX
        MOV EDI,0x7a364c
        REPNE SCASB
        NOT ECX
        SUB EDI,ECX
        MOV ESI,EDI
        LEA EDX,[ESP + 0x78]
        MOV EDI,EDX
        MOV EDX,ECX
        OR ECX,0xffffffff
        REPNE SCASB
        MOV ECX,EDX
        SHR ECX,0x2
        DEC EDI
        REP MOVSD
        MOV ECX,EDX
        AND ECX,0x3
        LEA EAX,[ESP + 0x25c]
        REP MOVSB
        PUSH EAX
        LEA ECX,[ESP + 0x7c]
        PUSH ECX
        CALL EBP
        CMP EAX,-0x1
        JNZ L_719105
        MOV EDX,dword ptr [ESP + 0x10]
        OR ECX,0xffffffff
        LEA EAX,[ESP + EDX*0x1 + 0x78]
        MOV byte ptr [EAX],0x0
        MOV dword ptr [ESP + 0x10],EAX
        XOR EAX,EAX
        MOV EDI,0x7a3644
        REPNE SCASB
        NOT ECX
        SUB EDI,ECX
        MOV ESI,EDI
        LEA EDX,[ESP + 0x78]
        MOV EDI,EDX
        MOV EDX,ECX
        OR ECX,0xffffffff
        REPNE SCASB
        MOV ECX,EDX
        SHR ECX,0x2
        DEC EDI
        REP MOVSD
        MOV ECX,EDX
        AND ECX,0x3
        LEA EAX,[ESP + 0x25c]
        REP MOVSB
        PUSH EAX
        LEA ECX,[ESP + 0x7c]
        PUSH ECX
        CALL EBP
        CMP EAX,-0x1
        JNZ L_719105
        MOV EDX,dword ptr [ESP + 0x10]
        OR ECX,EAX
        XOR EAX,EAX
        MOV EDI,0x7a363c
        REPNE SCASB
        NOT ECX
        SUB EDI,ECX
        MOV byte ptr [EDX],0x0
        MOV ESI,EDI
        LEA EDX,[ESP + 0x78]
        MOV EDI,EDX
        MOV EDX,ECX
        OR ECX,0xffffffff
        REPNE SCASB
        MOV ECX,EDX
        SHR ECX,0x2
        DEC EDI
        REP MOVSD
        MOV ECX,EDX
        AND ECX,0x3
        LEA EAX,[ESP + 0x25c]
        REP MOVSB
        PUSH EAX
        LEA ECX,[ESP + 0x7c]
        PUSH ECX
        CALL EBP
        CMP EAX,-0x1
        JNZ L_719105
        PUSH 0x104
        LEA EDX,[ESP + 0x7c]
        PUSH EDX
        CALL dword ptr [g_76b248]
        OR ECX,0xffffffff
        XOR EAX,EAX
        MOV EDI,0x7a3624
        REPNE SCASB
        NOT ECX
        SUB EDI,ECX
        MOV ESI,EDI
        LEA EDX,[ESP + 0x78]
        MOV EDI,EDX
        MOV EDX,ECX
        OR ECX,0xffffffff
        REPNE SCASB
        DEC EDI
        MOV ECX,EDX
        SHR ECX,0x2
        REP MOVSD
        MOV ECX,EDX
        AND ECX,0x3
        REP MOVSB
        MOV EDI,dword ptr [ESP + 0x3a4]
        OR ECX,0xffffffff
        REPNE SCASB
        NOT ECX
        SUB EDI,ECX
        MOV ESI,EDI
        LEA EDX,[ESP + 0x78]
        MOV EDI,EDX
        MOV EDX,ECX
        OR ECX,0xffffffff
        REPNE SCASB
        DEC EDI
        MOV ECX,EDX
        SHR ECX,0x2
        REP MOVSD
        MOV ECX,EDX
        AND ECX,0x3
        REP MOVSB
        OR ECX,0xffffffff
        LEA EDI,[ESP + 0x78]
        REPNE SCASB
        NOT ECX
        DEC ECX
        LEA EAX,[ESP + 0x25c]
        MOV dword ptr [ESP + 0x10],ECX
        PUSH EAX
        LEA ECX,[ESP + 0x7c]
        PUSH ECX
        CALL EBP
        CMP EAX,-0x1
        JNZ L_719105
        OR ECX,EAX
        XOR EAX,EAX
        MOV EDI,0x7a364c
        REPNE SCASB
        NOT ECX
        SUB EDI,ECX
        MOV ESI,EDI
        LEA EDX,[ESP + 0x78]
        MOV EDI,EDX
        MOV EDX,ECX
        OR ECX,0xffffffff
        REPNE SCASB
        MOV ECX,EDX
        SHR ECX,0x2
        DEC EDI
        REP MOVSD
        MOV ECX,EDX
        AND ECX,0x3
        LEA EAX,[ESP + 0x25c]
        REP MOVSB
        PUSH EAX
        LEA ECX,[ESP + 0x7c]
        PUSH ECX
        CALL EBP
        CMP EAX,-0x1
        JNZ L_719105
        MOV EDX,dword ptr [ESP + 0x10]
        OR ECX,0xffffffff
        LEA EAX,[ESP + EDX*0x1 + 0x78]
        MOV byte ptr [EAX],0x0
        MOV dword ptr [ESP + 0x10],EAX
        XOR EAX,EAX
        MOV EDI,0x7a3644
        REPNE SCASB
        NOT ECX
        SUB EDI,ECX
        MOV ESI,EDI
        LEA EDX,[ESP + 0x78]
        MOV EDI,EDX
        MOV EDX,ECX
        OR ECX,0xffffffff
        REPNE SCASB
        MOV ECX,EDX
        SHR ECX,0x2
        DEC EDI
        REP MOVSD
        MOV ECX,EDX
        AND ECX,0x3
        LEA EAX,[ESP + 0x25c]
        REP MOVSB
        PUSH EAX
        LEA ECX,[ESP + 0x7c]
        PUSH ECX
        CALL EBP
        CMP EAX,-0x1
        JNZ L_719105
        MOV EDX,dword ptr [ESP + 0x10]
        OR ECX,EAX
        XOR EAX,EAX
        MOV EDI,0x7a363c
        REPNE SCASB
        NOT ECX
        SUB EDI,ECX
        MOV byte ptr [EDX],0x0
        MOV ESI,EDI
        LEA EDX,[ESP + 0x78]
        MOV EDI,EDX
        MOV EDX,ECX
        OR ECX,0xffffffff
        REPNE SCASB
        MOV ECX,EDX
        SHR ECX,0x2
        DEC EDI
        REP MOVSD
        MOV ECX,EDX
        AND ECX,0x3
        LEA EAX,[ESP + 0x25c]
        REP MOVSB
        PUSH EAX
        LEA ECX,[ESP + 0x7c]
        PUSH ECX
        CALL EBP
        CMP EAX,-0x1
        JNZ L_719105
        MOV EDX,0x7a3610
        TEST EDX,EDX
        JZ L_719054
        OR ECX,EAX
        XOR EAX,EAX
        MOV EDI,EDX
        MOV EDX,dword ptr [EBX + 0x4]
        REPNE SCASB
        NOT ECX
        DEC ECX
        MOV EAX,ECX
        MOV ECX,dword ptr [EBX]
        INC EAX
        LEA ESI,[EAX + EDX*0x1]
        CMP ESI,ECX
        JLE L_719029
        SUB ECX,EDX
        MOV EAX,ECX
L_719029:
        MOV EDX,dword ptr [EBX + 0x8]
        MOV EDI,dword ptr [EBX + 0x4]
        MOV ECX,EAX
        MOV EBP,ECX
        SHR ECX,0x2
        ADD EDI,EDX
        MOV ESI,0x7a3610
        REP MOVSD
        MOV ECX,EBP
        AND ECX,0x3
        REP MOVSB
        MOV ECX,dword ptr [EBX + 0x4]
        LEA EAX,[EAX + ECX*0x1 + -0x1]
        MOV dword ptr [EBX + 0x4],EAX
        MOV byte ptr [EAX + EDX*0x1],0x0
L_719054:
        MOV ESI,dword ptr [ESP + 0x14]
        TEST ESI,ESI
        JZ L_7190a1
        MOV EDX,dword ptr [EBX + 0x4]
        OR ECX,0xffffffff
        XOR EAX,EAX
        MOV EDI,ESI
        REPNE SCASB
        NOT ECX
        DEC ECX
        MOV EAX,ECX
        MOV ECX,dword ptr [EBX]
        INC EAX
        LEA EDI,[EAX + EDX*0x1]
        CMP EDI,ECX
        JLE L_71907b
        SUB ECX,EDX
        MOV EAX,ECX
L_71907b:
        MOV EDX,dword ptr [EBX + 0x8]
        MOV EDI,dword ptr [EBX + 0x4]
        MOV ECX,EAX
        MOV EBP,ECX
        SHR ECX,0x2
        ADD EDI,EDX
        REP MOVSD
        MOV ECX,EBP
        AND ECX,0x3
        REP MOVSB
        MOV ECX,dword ptr [EBX + 0x4]
        LEA EAX,[EAX + ECX*0x1 + -0x1]
        MOV dword ptr [EBX + 0x4],EAX
        MOV byte ptr [EAX + EDX*0x1],0x0
L_7190a1:
        MOV EAX,0x7a35f4
        TEST EAX,EAX
        JZ L_7190f4
        MOV EDX,dword ptr [EBX + 0x4]
        OR ECX,0xffffffff
        MOV EDI,EAX
        XOR EAX,EAX
        REPNE SCASB
        NOT ECX
        DEC ECX
        MOV EAX,ECX
        MOV ECX,dword ptr [EBX]
        INC EAX
        LEA ESI,[EAX + EDX*0x1]
        CMP ESI,ECX
        JLE L_7190c9
        SUB ECX,EDX
        MOV EAX,ECX
L_7190c9:
        MOV EDX,dword ptr [EBX + 0x8]
        MOV EDI,dword ptr [EBX + 0x4]
        MOV ECX,EAX
        MOV EBP,ECX
        SHR ECX,0x2
        ADD EDI,EDX
        MOV ESI,0x7a35f4
        REP MOVSD
        MOV ECX,EBP
        AND ECX,0x3
        REP MOVSB
        MOV ECX,dword ptr [EBX + 0x4]
        LEA EAX,[EAX + ECX*0x1 + -0x1]
        MOV dword ptr [EBX + 0x4],EAX
        MOV byte ptr [EAX + EDX*0x1],0x0
L_7190f4:
        POP EDI
        POP ESI
        POP EBP
        XOR EAX,EAX
        XOR EDX,EDX
        POP EBX
        ADD ESP,0x38c
        RET 0xc
L_719105:
        PUSH EAX
        CALL dword ptr [g_76b19c]
        MOV ECX,0x7a35e0
        TEST ECX,ECX
        JZ L_71915f
        MOV EDX,dword ptr [EBX + 0x4]
        MOV EDI,ECX
        OR ECX,0xffffffff
        XOR EAX,EAX
        REPNE SCASB
        NOT ECX
        DEC ECX
        MOV EAX,ECX
        MOV ECX,dword ptr [EBX]
        INC EAX
        LEA ESI,[EAX + EDX*0x1]
        CMP ESI,ECX
        JLE L_719134
        SUB ECX,EDX
        MOV EAX,ECX
L_719134:
        MOV EDX,dword ptr [EBX + 0x8]
        MOV EDI,dword ptr [EBX + 0x4]
        MOV ECX,EAX
        MOV EBP,ECX
        SHR ECX,0x2
        ADD EDI,EDX
        MOV ESI,0x7a35e0
        REP MOVSD
        MOV ECX,EBP
        AND ECX,0x3
        REP MOVSB
        MOV ECX,dword ptr [EBX + 0x4]
        LEA EAX,[EAX + ECX*0x1 + -0x1]
        MOV dword ptr [EBX + 0x4],EAX
        MOV byte ptr [EAX + EDX*0x1],0x0
L_71915f:
        MOV ESI,dword ptr [ESP + 0x14]
        TEST ESI,ESI
        JZ L_7191ac
        MOV EDX,dword ptr [EBX + 0x4]
        OR ECX,0xffffffff
        XOR EAX,EAX
        MOV EDI,ESI
        REPNE SCASB
        NOT ECX
        DEC ECX
        MOV EAX,ECX
        MOV ECX,dword ptr [EBX]
        INC EAX
        LEA EDI,[EAX + EDX*0x1]
        CMP EDI,ECX
        JLE L_719186
        SUB ECX,EDX
        MOV EAX,ECX
L_719186:
        MOV EDX,dword ptr [EBX + 0x8]
        MOV EDI,dword ptr [EBX + 0x4]
        MOV ECX,EAX
        MOV EBP,ECX
        SHR ECX,0x2
        ADD EDI,EDX
        REP MOVSD
        MOV ECX,EBP
        AND ECX,0x3
        REP MOVSB
        MOV ECX,dword ptr [EBX + 0x4]
        LEA EAX,[EAX + ECX*0x1 + -0x1]
        MOV dword ptr [EBX + 0x4],EAX
        MOV byte ptr [EAX + EDX*0x1],0x0
L_7191ac:
        MOV EDX,0x79ffd0
        TEST EDX,EDX
        JZ L_7191ff
        OR ECX,0xffffffff
        XOR EAX,EAX
        MOV EDI,EDX
        MOV EDX,dword ptr [EBX + 0x4]
        REPNE SCASB
        NOT ECX
        DEC ECX
        MOV EAX,ECX
        MOV ECX,dword ptr [EBX]
        INC EAX
        LEA ESI,[EAX + EDX*0x1]
        CMP ESI,ECX
        JLE L_7191d4
        SUB ECX,EDX
        MOV EAX,ECX
L_7191d4:
        MOV EDX,dword ptr [EBX + 0x8]
        MOV EDI,dword ptr [EBX + 0x4]
        MOV ECX,EAX
        MOV EBP,ECX
        SHR ECX,0x2
        ADD EDI,EDX
        MOV ESI,0x79ffd0
        REP MOVSD
        MOV ECX,EBP
        AND ECX,0x3
        REP MOVSB
        MOV ECX,dword ptr [EBX + 0x4]
        LEA EAX,[EAX + ECX*0x1 + -0x1]
        MOV dword ptr [EBX + 0x4],EAX
        MOV byte ptr [EAX + EDX*0x1],0x0
L_7191ff:
        MOV EAX,dword ptr [ESP + 0x27c]
        PUSH 0x0
        PUSH EAX
        CALL FUN_0071ddf0
        MOV ESI,EAX
        TEST ESI,ESI
        JZ L_719259
        MOV EDX,dword ptr [EBX + 0x4]
        OR ECX,0xffffffff
        XOR EAX,EAX
        MOV EDI,ESI
        REPNE SCASB
        NOT ECX
        DEC ECX
        MOV EAX,ECX
        MOV ECX,dword ptr [EBX]
        INC EAX
        LEA EDI,[EAX + EDX*0x1]
        CMP EDI,ECX
        JLE L_719233
        SUB ECX,EDX
        MOV EAX,ECX
L_719233:
        MOV EDX,dword ptr [EBX + 0x8]
        MOV EDI,dword ptr [EBX + 0x4]
        MOV ECX,EAX
        MOV EBP,ECX
        SHR ECX,0x2
        ADD EDI,EDX
        REP MOVSD
        MOV ECX,EBP
        AND ECX,0x3
        REP MOVSB
        MOV ECX,dword ptr [EBX + 0x4]
        LEA EAX,[EAX + ECX*0x1 + -0x1]
        MOV dword ptr [EBX + 0x4],EAX
        MOV byte ptr [EAX + EDX*0x1],0x0
L_719259:
        MOV ECX,0x77a078
        TEST ECX,ECX
        JZ L_7192ac
        MOV EDX,dword ptr [EBX + 0x4]
        MOV EDI,ECX
        OR ECX,0xffffffff
        XOR EAX,EAX
        REPNE SCASB
        NOT ECX
        DEC ECX
        MOV EAX,ECX
        MOV ECX,dword ptr [EBX]
        INC EAX
        LEA ESI,[EAX + EDX*0x1]
        CMP ESI,ECX
        JLE L_719281
        SUB ECX,EDX
        MOV EAX,ECX
L_719281:
        MOV EDX,dword ptr [EBX + 0x8]
        MOV EDI,dword ptr [EBX + 0x4]
        MOV ECX,EAX
        MOV EBP,ECX
        SHR ECX,0x2
        ADD EDI,EDX
        MOV ESI,0x77a078
        REP MOVSD
        MOV ECX,EBP
        AND ECX,0x3
        REP MOVSB
        MOV ECX,dword ptr [EBX + 0x4]
        LEA EAX,[EAX + ECX*0x1 + -0x1]
        MOV dword ptr [EBX + 0x4],EAX
        MOV byte ptr [EAX + EDX*0x1],0x0
L_7192ac:
        LEA EDX,[ESP + 0x3c]
        PUSH EDX
        LEA EAX,[ESP + 0x264]
        PUSH EAX
        CALL dword ptr [g_76b1b4]
        LEA ECX,[ESP + 0x28]
        PUSH ECX
        LEA EDX,[ESP + 0x40]
        PUSH EDX
        CALL dword ptr [g_76b1b0]
        MOV EAX,dword ptr [ESP + 0x28]
        MOV ECX,dword ptr [ESP + 0x2e]
        MOV EDX,dword ptr [ESP + 0x2a]
        AND EAX,0xffff
        PUSH EAX
        MOV EAX,dword ptr [ESP + 0x30]
        AND ECX,0xffff
        PUSH ECX
        AND EDX,0xffff
        PUSH EDX
        MOV EDX,dword ptr [ESP + 0x40]
        AND EAX,0xffff
        MOV ECX,dword ptr [EAX*0x4 + 0x7b70e4]
        MOV EAX,dword ptr [ESP + 0x3e]
        PUSH ECX
        MOV ECX,dword ptr [ESP + 0x40]
        AND EDX,0xffff
        PUSH EDX
        AND EAX,0xffff
        PUSH EAX
        AND ECX,0xffff
        PUSH ECX
        LEA EDX,[ESP + 0x218]
        PUSH 0x7a02b0
        PUSH EDX
        CALL dword ptr [g_76b4f8]
        MOV EAX,0x7a35cc
        ADD ESP,0x24
        TEST EAX,EAX
        JZ L_719389
        MOV EDX,dword ptr [EBX + 0x4]
        OR ECX,0xffffffff
        MOV EDI,EAX
        XOR EAX,EAX
        REPNE SCASB
        NOT ECX
        DEC ECX
        MOV EAX,ECX
        MOV ECX,dword ptr [EBX]
        INC EAX
        LEA ESI,[EAX + EDX*0x1]
        CMP ESI,ECX
        JLE L_71935e
        SUB ECX,EDX
        MOV EAX,ECX
L_71935e:
        MOV EDX,dword ptr [EBX + 0x8]
        MOV EDI,dword ptr [EBX + 0x4]
        MOV ECX,EAX
        MOV EBP,ECX
        SHR ECX,0x2
        ADD EDI,EDX
        MOV ESI,0x7a35cc
        REP MOVSD
        MOV ECX,EBP
        AND ECX,0x3
        REP MOVSB
        MOV ECX,dword ptr [EBX + 0x4]
        LEA EAX,[EAX + ECX*0x1 + -0x1]
        MOV dword ptr [EBX + 0x4],EAX
        MOV byte ptr [EAX + EDX*0x1],0x0
L_719389:
        MOV ESI,dword ptr [ESP + 0x14]
        TEST ESI,ESI
        JZ L_7193d6
        MOV EDX,dword ptr [EBX + 0x4]
        OR ECX,0xffffffff
        XOR EAX,EAX
        MOV EDI,ESI
        REPNE SCASB
        NOT ECX
        DEC ECX
        MOV EAX,ECX
        MOV ECX,dword ptr [EBX]
        INC EAX
        LEA EDI,[EAX + EDX*0x1]
        CMP EDI,ECX
        JLE L_7193b0
        SUB ECX,EDX
        MOV EAX,ECX
L_7193b0:
        MOV EDX,dword ptr [EBX + 0x8]
        MOV EDI,dword ptr [EBX + 0x4]
        MOV ECX,EAX
        MOV EBP,ECX
        SHR ECX,0x2
        ADD EDI,EDX
        REP MOVSD
        MOV ECX,EBP
        AND ECX,0x3
        REP MOVSB
        MOV ECX,dword ptr [EBX + 0x4]
        LEA EAX,[EAX + ECX*0x1 + -0x1]
        MOV dword ptr [EBX + 0x4],EAX
        MOV byte ptr [EAX + EDX*0x1],0x0
L_7193d6:
        MOV ECX,0x79ffd0
        TEST ECX,ECX
        JZ L_719429
        MOV EDX,dword ptr [EBX + 0x4]
        MOV EDI,ECX
        OR ECX,0xffffffff
        XOR EAX,EAX
        REPNE SCASB
        NOT ECX
        DEC ECX
        MOV EAX,ECX
        MOV ECX,dword ptr [EBX]
        INC EAX
        LEA ESI,[EAX + EDX*0x1]
        CMP ESI,ECX
        JLE L_7193fe
        SUB ECX,EDX
        MOV EAX,ECX
L_7193fe:
        MOV EDX,dword ptr [EBX + 0x8]
        MOV EDI,dword ptr [EBX + 0x4]
        MOV ECX,EAX
        MOV EBP,ECX
        SHR ECX,0x2
        ADD EDI,EDX
        MOV ESI,0x79ffd0
        REP MOVSD
        MOV ECX,EBP
        AND ECX,0x3
        REP MOVSB
        MOV ECX,dword ptr [EBX + 0x4]
        LEA EAX,[EAX + ECX*0x1 + -0x1]
        MOV dword ptr [EBX + 0x4],EAX
        MOV byte ptr [EAX + EDX*0x1],0x0
L_719429:
        LEA EDX,[ESP + 0x1fc]
        TEST EDX,EDX
        JZ L_719485
        MOV EDX,dword ptr [EBX + 0x4]
        OR ECX,0xffffffff
        XOR EAX,EAX
        LEA EDI,[ESP + 0x1fc]
        REPNE SCASB
        NOT ECX
        DEC ECX
        MOV EAX,ECX
        MOV ECX,dword ptr [EBX]
        INC EAX
        LEA ESI,[EAX + EDX*0x1]
        CMP ESI,ECX
        JLE L_719458
        SUB ECX,EDX
        MOV EAX,ECX
L_719458:
        MOV EDX,dword ptr [EBX + 0x8]
        MOV EDI,dword ptr [EBX + 0x4]
        MOV ECX,EAX
        MOV EBP,ECX
        SHR ECX,0x2
        ADD EDI,EDX
        LEA ESI,[ESP + 0x1fc]
        REP MOVSD
        MOV ECX,EBP
        AND ECX,0x3
        REP MOVSB
        MOV ECX,dword ptr [EBX + 0x4]
        LEA EAX,[EAX + ECX*0x1 + -0x1]
        MOV dword ptr [EBX + 0x4],EAX
        MOV byte ptr [EAX + EDX*0x1],0x0
L_719485:
        MOV EAX,0x77a078
        TEST EAX,EAX
        JZ L_7194d8
        MOV EDX,dword ptr [EBX + 0x4]
        OR ECX,0xffffffff
        MOV EDI,EAX
        XOR EAX,EAX
        REPNE SCASB
        NOT ECX
        DEC ECX
        MOV EAX,ECX
        MOV ECX,dword ptr [EBX]
        INC EAX
        LEA ESI,[EAX + EDX*0x1]
        CMP ESI,ECX
        JLE L_7194ad
        SUB ECX,EDX
        MOV EAX,ECX
L_7194ad:
        MOV EDX,dword ptr [EBX + 0x8]
        MOV EDI,dword ptr [EBX + 0x4]
        MOV ECX,EAX
        MOV EBP,ECX
        SHR ECX,0x2
        ADD EDI,EDX
        MOV ESI,0x77a078
        REP MOVSD
        MOV ECX,EBP
        AND ECX,0x3
        REP MOVSB
        MOV ECX,dword ptr [EBX + 0x4]
        LEA EAX,[EAX + ECX*0x1 + -0x1]
        MOV dword ptr [EBX + 0x4],EAX
        MOV byte ptr [EAX + EDX*0x1],0x0
L_7194d8:
        LEA ECX,[ESP + 0x38]
        PUSH ECX
        LEA EDX,[ESP + 0x7c]
        PUSH EDX
        CALL FUN_0075e352
        MOV ESI,EAX
        TEST ESI,ESI
        JBE L_7199dc
        PUSH ESI
        CALL dword ptr [g_76b294]
        ADD ESP,0x4
        MOV EDI,EAX
        MOV EAX,dword ptr [ESP + 0x38]
        PUSH EDI
        PUSH ESI
        PUSH EAX
        LEA ECX,[ESP + 0x84]
        PUSH ECX
        MOV dword ptr [ESP + 0x20],EDI
        CALL FUN_0075e34c
        LEA EDX,[ESP + 0x1c]
        PUSH EDX
        LEA EAX,[ESP + 0x1c]
        PUSH EAX
        PUSH 0x77a7b0
        PUSH EDI
        CALL FUN_0075e346
        TEST EAX,EAX
        JZ L_7199d2
        MOV EAX,dword ptr [ESP + 0x18]
        XOR ECX,ECX
        MOV CX,word ptr [EAX + 0x2]
        XOR EDX,EDX
        MOV DX,word ptr [EAX]
        LEA EAX,[ESP + 0x21c]
        PUSH ECX
        PUSH EDX
        PUSH 0x7a35a4
        PUSH EAX
        CALL dword ptr [g_76b4f8]
        ADD ESP,0x10
        LEA ECX,[ESP + 0x1c]
        PUSH ECX
        LEA EDX,[ESP + 0x1c]
        PUSH EDX
        PUSH 0x76c5a8
        PUSH EDI
        CALL FUN_0075e346
        TEST EAX,EAX
        JZ L_719944
        MOV ESI,dword ptr [ESP + 0x18]
        PUSH 0x1
        PUSH 0x0
        MOV ECX,0xd
        LEA EDI,[ESP + 0x4c]
        REP MOVSD
        MOV EAX,dword ptr [ESP + 0x5c]
        PUSH 0x0
        PUSH EAX
        CALL FUN_0075dc60
        MOV ECX,dword ptr [ESP + 0x58]
        XOR ESI,ESI
        ADD EAX,ECX
        ADC EDX,ESI
        MOV dword ptr [ESP + 0x24],EDX
        MOV DL,byte ptr [ESP + 0x5c]
        TEST DL,0x2
        MOV dword ptr [ESP + 0x20],EAX
        MOV byte ptr [ESP + 0x17c],0x0
        JZ L_7195f5
        TEST byte ptr [ESP + 0x60],0x2
        LEA EBP,[ESP + 0x17c]
        MOV EDI,0x7a359c
        JNZ L_7195d0
        MOV EDI,0x7a3594
L_7195d0:
        OR ECX,0xffffffff
        XOR EAX,EAX
        REPNE SCASB
        NOT ECX
        SUB EDI,ECX
        MOV ESI,EDI
        MOV EDI,EBP
        MOV EBP,ECX
        OR ECX,0xffffffff
        REPNE SCASB
        MOV ECX,EBP
        SHR ECX,0x2
        DEC EDI
        REP MOVSD
        MOV ECX,EBP
        AND ECX,0x3
        REP MOVSB
L_7195f5:
        TEST DL,0x1
        JZ L_719637
        TEST byte ptr [ESP + 0x60],0x1
        LEA EBP,[ESP + 0x17c]
        MOV EDI,0x7a358c
        JNZ L_719612
        MOV EDI,0x7a3584
L_719612:
        OR ECX,0xffffffff
        XOR EAX,EAX
        REPNE SCASB
        NOT ECX
        SUB EDI,ECX
        MOV ESI,EDI
        MOV EDI,EBP
        MOV EBP,ECX
        OR ECX,0xffffffff
        REPNE SCASB
        MOV ECX,EBP
        SHR ECX,0x2
        DEC EDI
        REP MOVSD
        MOV ECX,EBP
        AND ECX,0x3
        REP MOVSB
L_719637:
        TEST DL,0x4
        JZ L_7196b0
        TEST byte ptr [ESP + 0x60],0x4
        JZ L_7196b0
        MOV AL,byte ptr [ESP + 0x17c]
        TEST AL,AL
        JZ L_71967f
        OR ECX,0xffffffff
        XOR EAX,EAX
        MOV EDI,0x794df4
        REPNE SCASB
        NOT ECX
        SUB EDI,ECX
        MOV ESI,EDI
        LEA EBP,[ESP + 0x17c]
        MOV EDI,EBP
        MOV EBP,ECX
        OR ECX,0xffffffff
        REPNE SCASB
        MOV ECX,EBP
        SHR ECX,0x2
        DEC EDI
        REP MOVSD
        MOV ECX,EBP
        AND ECX,0x3
        REP MOVSB
L_71967f:
        OR ECX,0xffffffff
        XOR EAX,EAX
        MOV EDI,0x7a357c
        REPNE SCASB
        NOT ECX
        SUB EDI,ECX
        MOV ESI,EDI
        LEA EBP,[ESP + 0x17c]
        MOV EDI,EBP
        MOV EBP,ECX
        OR ECX,0xffffffff
        REPNE SCASB
        MOV ECX,EBP
        SHR ECX,0x2
        DEC EDI
        REP MOVSD
        MOV ECX,EBP
        AND ECX,0x3
        REP MOVSB
L_7196b0:
        TEST DL,0x8
        JZ L_719729
        TEST byte ptr [ESP + 0x60],0x8
        JZ L_719729
        MOV AL,byte ptr [ESP + 0x17c]
        TEST AL,AL
        JZ L_7196f8
        OR ECX,0xffffffff
        XOR EAX,EAX
        MOV EDI,0x794df4
        REPNE SCASB
        NOT ECX
        SUB EDI,ECX
        MOV ESI,EDI
        LEA EBP,[ESP + 0x17c]
        MOV EDI,EBP
        MOV EBP,ECX
        OR ECX,0xffffffff
        REPNE SCASB
        MOV ECX,EBP
        SHR ECX,0x2
        DEC EDI
        REP MOVSD
        MOV ECX,EBP
        AND ECX,0x3
        REP MOVSB
L_7196f8:
        OR ECX,0xffffffff
        XOR EAX,EAX
        MOV EDI,0x7a356c
        REPNE SCASB
        NOT ECX
        SUB EDI,ECX
        MOV ESI,EDI
        LEA EBP,[ESP + 0x17c]
        MOV EDI,EBP
        MOV EBP,ECX
        OR ECX,0xffffffff
        REPNE SCASB
        MOV ECX,EBP
        SHR ECX,0x2
        DEC EDI
        REP MOVSD
        MOV ECX,EBP
        AND ECX,0x3
        REP MOVSB
L_719729:
        TEST DL,0x20
        JZ L_7197a2
        TEST byte ptr [ESP + 0x60],0x20
        JZ L_7197a2
        MOV AL,byte ptr [ESP + 0x17c]
        TEST AL,AL
        JZ L_719771
        OR ECX,0xffffffff
        XOR EAX,EAX
        MOV EDI,0x794df4
        REPNE SCASB
        NOT ECX
        SUB EDI,ECX
        MOV EBP,ECX
        OR ECX,0xffffffff
        MOV ESI,EDI
        LEA EDX,[ESP + 0x17c]
        MOV EDI,EDX
        REPNE SCASB
        MOV ECX,EBP
        SHR ECX,0x2
        DEC EDI
        REP MOVSD
        MOV ECX,EBP
        AND ECX,0x3
        REP MOVSB
L_719771:
        OR ECX,0xffffffff
        XOR EAX,EAX
        MOV EDI,0x7a355c
        REPNE SCASB
        NOT ECX
        SUB EDI,ECX
        MOV EBP,ECX
        OR ECX,0xffffffff
        MOV ESI,EDI
        LEA EDX,[ESP + 0x17c]
        MOV EDI,EDX
        REPNE SCASB
        MOV ECX,EBP
        SHR ECX,0x2
        DEC EDI
        REP MOVSD
        MOV ECX,EBP
        AND ECX,0x3
        REP MOVSB
L_7197a2:
        MOV EAX,0x7a3548
        TEST EAX,EAX
        JZ L_7197f5
        MOV EDX,dword ptr [EBX + 0x4]
        OR ECX,0xffffffff
        MOV EDI,EAX
        XOR EAX,EAX
        REPNE SCASB
        NOT ECX
        DEC ECX
        MOV EAX,ECX
        MOV ECX,dword ptr [EBX]
        INC EAX
        LEA ESI,[EAX + EDX*0x1]
        CMP ESI,ECX
        JLE L_7197ca
        SUB ECX,EDX
        MOV EAX,ECX
L_7197ca:
        MOV EDX,dword ptr [EBX + 0x8]
        MOV EDI,dword ptr [EBX + 0x4]
        MOV ECX,EAX
        MOV EBP,ECX
        SHR ECX,0x2
        ADD EDI,EDX
        MOV ESI,0x7a3548
        REP MOVSD
        MOV ECX,EBP
        AND ECX,0x3
        REP MOVSB
        MOV ECX,dword ptr [EBX + 0x4]
        LEA EAX,[EAX + ECX*0x1 + -0x1]
        MOV dword ptr [EBX + 0x4],EAX
        MOV byte ptr [EAX + EDX*0x1],0x0
L_7197f5:
        MOV ESI,dword ptr [ESP + 0x14]
        TEST ESI,ESI
        JZ L_719842
        MOV EDX,dword ptr [EBX + 0x4]
        OR ECX,0xffffffff
        XOR EAX,EAX
        MOV EDI,ESI
        REPNE SCASB
        NOT ECX
        DEC ECX
        MOV EAX,ECX
        MOV ECX,dword ptr [EBX]
        INC EAX
        LEA EDI,[EAX + EDX*0x1]
        CMP EDI,ECX
        JLE L_71981c
        SUB ECX,EDX
        MOV EAX,ECX
L_71981c:
        MOV EDX,dword ptr [EBX + 0x8]
        MOV EDI,dword ptr [EBX + 0x4]
        MOV ECX,EAX
        MOV EBP,ECX
        SHR ECX,0x2
        ADD EDI,EDX
        REP MOVSD
        MOV ECX,EBP
        AND ECX,0x3
        REP MOVSB
        MOV ECX,dword ptr [EBX + 0x4]
        LEA EAX,[EAX + ECX*0x1 + -0x1]
        MOV dword ptr [EBX + 0x4],EAX
        MOV byte ptr [EAX + EDX*0x1],0x0
L_719842:
        MOV ECX,0x79ffd0
        TEST ECX,ECX
        JZ L_719895
        MOV EDX,dword ptr [EBX + 0x4]
        MOV EDI,ECX
        OR ECX,0xffffffff
        XOR EAX,EAX
        REPNE SCASB
        NOT ECX
        DEC ECX
        MOV EAX,ECX
        MOV ECX,dword ptr [EBX]
        INC EAX
        LEA ESI,[EAX + EDX*0x1]
        CMP ESI,ECX
        JLE L_71986a
        SUB ECX,EDX
        MOV EAX,ECX
L_71986a:
        MOV EDX,dword ptr [EBX + 0x8]
        MOV EDI,dword ptr [EBX + 0x4]
        MOV ECX,EAX
        MOV EBP,ECX
        SHR ECX,0x2
        ADD EDI,EDX
        MOV ESI,0x79ffd0
        REP MOVSD
        MOV ECX,EBP
        AND ECX,0x3
        REP MOVSB
        MOV ECX,dword ptr [EBX + 0x4]
        LEA EAX,[EAX + ECX*0x1 + -0x1]
        MOV dword ptr [EBX + 0x4],EAX
        MOV byte ptr [EAX + EDX*0x1],0x0
L_719895:
        LEA EDX,[ESP + 0x17c]
        TEST EDX,EDX
        JZ L_7198f1
        MOV EDX,dword ptr [EBX + 0x4]
        OR ECX,0xffffffff
        XOR EAX,EAX
        LEA EDI,[ESP + 0x17c]
        REPNE SCASB
        NOT ECX
        DEC ECX
        MOV EAX,ECX
        MOV ECX,dword ptr [EBX]
        INC EAX
        LEA ESI,[EAX + EDX*0x1]
        CMP ESI,ECX
        JLE L_7198c4
        SUB ECX,EDX
        MOV EAX,ECX
L_7198c4:
        MOV EDX,dword ptr [EBX + 0x8]
        MOV EDI,dword ptr [EBX + 0x4]
        MOV ECX,EAX
        MOV EBP,ECX
        SHR ECX,0x2
        ADD EDI,EDX
        LEA ESI,[ESP + 0x17c]
        REP MOVSD
        MOV ECX,EBP
        AND ECX,0x3
        REP MOVSB
        MOV ECX,dword ptr [EBX + 0x4]
        LEA EAX,[EAX + ECX*0x1 + -0x1]
        MOV dword ptr [EBX + 0x4],EAX
        MOV byte ptr [EAX + EDX*0x1],0x0
L_7198f1:
        MOV EAX,0x77a078
        TEST EAX,EAX
        JZ L_719944
        MOV EDX,dword ptr [EBX + 0x4]
        OR ECX,0xffffffff
        MOV EDI,EAX
        XOR EAX,EAX
        REPNE SCASB
        NOT ECX
        DEC ECX
        MOV EAX,ECX
        MOV ECX,dword ptr [EBX]
        INC EAX
        LEA ESI,[EAX + EDX*0x1]
        CMP ESI,ECX
        JLE L_719919
        SUB ECX,EDX
        MOV EAX,ECX
L_719919:
        MOV EDX,dword ptr [EBX + 0x8]
        MOV EDI,dword ptr [EBX + 0x4]
        MOV ECX,EAX
        MOV EBP,ECX
        SHR ECX,0x2
        ADD EDI,EDX
        MOV ESI,0x77a078
        REP MOVSD
        MOV ECX,EBP
        AND ECX,0x3
        REP MOVSB
        MOV ECX,dword ptr [EBX + 0x4]
        LEA EAX,[EAX + ECX*0x1 + -0x1]
        MOV dword ptr [EBX + 0x4],EAX
        MOV byte ptr [EAX + EDX*0x1],0x0
L_719944:
        MOV EDI,dword ptr [ESP + 0x10]
        LEA ECX,[ESP + 0x1c]
        PUSH ECX
        LEA EDX,[ESP + 0x1c]
        PUSH EDX
        LEA EAX,[ESP + 0x224]
        PUSH EAX
        PUSH EDI
        CALL FUN_0075e346
        TEST EAX,EAX
        JNZ L_719996
        LEA EAX,[ESP + 0x21c]
        PUSH 0x7a3520
        PUSH EAX
        CALL dword ptr [g_76b4f8]
        ADD ESP,0x8
        LEA ECX,[ESP + 0x1c]
        PUSH ECX
        LEA EDX,[ESP + 0x1c]
        PUSH EDX
        LEA EAX,[ESP + 0x224]
        PUSH EAX
        PUSH EDI
        CALL FUN_0075e346
        TEST EAX,EAX
        JZ L_7199d2
L_719996:
        MOV ECX,dword ptr [ESP + 0x18]
        MOV EDX,dword ptr [ESP + 0x14]
        PUSH 0x77a078
        PUSH ECX
        PUSH 0x79ffd0
        PUSH EDX
        PUSH 0x7a350c
        MOV ECX,EBX
        CALL FUN_006fa880
        MOV ECX,EAX
        CALL FUN_006fa880
        MOV ECX,EAX
        CALL FUN_006fa880
        MOV ECX,EAX
        CALL FUN_006fa880
        MOV ECX,EAX
        CALL FUN_006fa880
L_7199d2:
        PUSH EDI
        CALL dword ptr [g_76b2d0]
        ADD ESP,0x4
L_7199dc:
        MOV EAX,dword ptr [ESP + 0x20]
        MOV EDX,dword ptr [ESP + 0x24]
        POP EDI
        POP ESI
        POP EBP
        POP EBX
        ADD ESP,0x38c
        RET 0xc
    }
}
