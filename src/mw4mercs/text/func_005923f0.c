/*
 * FUN_005923F0 (1481 B) — Map point type parser.
 * Reads a string from config, compares against known types,
 * writes type ID and fields to a stream.
 *
 * CFLAGS: /O1
 */

extern void __fastcall FUN_00411bf0(void);
extern void __fastcall FUN_00411cb0(void);
extern void __fastcall FUN_00412780(void);
extern void __fastcall FUN_00412a50(void);
extern int  __cdecl   FUN_006fab90(const char *, ...);
extern void __cdecl   FUN_004084e0(void *ptr);
extern int  __cdecl   FUN_005929c0(int);

extern int DAT_0076B2AC;   /* global _stricmp function pointer */

__declspec(naked) void __stdcall FUN_005923F0(void)
{
    __asm {
        PUSH EBP
        MOV  EBP, ESP
        SUB  ESP, 0x50
        PUSH EBX
        PUSH ESI
        PUSH EDI

        /* param1 = [EBP + 8] (this/context), param2 = [EBP + 0xC] (stream) */
        MOV  EDI, [EBP + 8]

        /* First lookup: "NavPoint" etc */
        PUSH 0x1
        LEA  EAX, [EBP - 8]
        PUSH EAX
        XOR  EBX, EBX
        PUSH 0x773784
        MOV  ECX, EDI
        MOV  [EBP - 4], EBX
        CALL FUN_00411bf0

        MOV  ECX, [EBP - 8]

        MOV  ESI, dword ptr [DAT_0076B2AC]   /* _stricmp via global function pointer */

        PUSH 0x782a54
        PUSH ECX
        CALL ESI                 /* _stricmp via global function pointer */
        ADD  ESP, 0x8
        TEST EAX, EAX
        JNZ  not_navpoint
        MOV  dword ptr [EBP - 4], 0x1
        JMP  done_type_check

not_navpoint:
        MOV  EDX, [EBP - 8]
        PUSH 0x782a48
        PUSH EDX
        CALL ESI
        ADD  ESP, 0x8
        TEST EAX, EAX
        JNZ  not_droppoint
        MOV  [EBP - 4], EBX
        JMP  done_type_check

not_droppoint:
        MOV  EAX, [EBP - 8]
        PUSH 0x782a3c
        PUSH EAX
        CALL ESI
        ADD  ESP, 0x8
        TEST EAX, EAX
        JNZ  not_infopoint
        MOV  dword ptr [EBP - 4], 0x2
        JMP  done_type_check

not_infopoint:
        MOV  ECX, [EBP - 8]
        PUSH 0x782a28
        PUSH ECX
        CALL ESI
        ADD  ESP, 0x8
        TEST EAX, EAX
        JNZ  not_generalinfopoint
        MOV  dword ptr [EBP - 4], 0x3
        JMP  done_type_check

not_generalinfopoint:
        MOV  EDX, [EBP - 8]
        PUSH 0x782a18
        PUSH EDX
        CALL ESI
        ADD  ESP, 0x8
        TEST EAX, EAX
        JNZ  not_briefingtype
        MOV  dword ptr [EBP - 4], 0x4
        JMP  done_type_check

not_briefingtype:
        MOV  EAX, [EBP - 8]
        PUSH 0x7829fc
        PUSH EAX
        CALL ESI
        ADD  ESP, 0x8
        TEST EAX, EAX
        JNZ  not_campaigninterface
        MOV  dword ptr [EBP - 4], 0x5
        JMP  done_type_check

not_campaigninterface:
        MOV  ECX, [EBP - 8]
        PUSH ECX
        PUSH 0x7829d8
        CALL FUN_006fab90
        ADD  ESP, 0x8
        TEST EAX, EAX
        JZ   done_type_check
        INT  3                      /* __debugbreak */

done_type_check:
        MOV  ESI, [EBP + 0xC]       /* stream pointer */
        MOV  EDX, [ESI]             /* vtable */
        PUSH 0x4
        LEA  EAX, [EBP - 4]
        PUSH EAX
        MOV  ECX, ESI
        CALL dword ptr [EDX + 0x24] /* stream->write(&type, 4) */

        MOV  EAX, [EBP - 4]
        CMP  EAX, 0x4
        JNZ  check_type_5

        /* Type == 4 (BriefingType) */
        PUSH 0x1
        LEA  ECX, [EBP + 0xC]
        PUSH ECX
        PUSH 0x7829cc
        MOV  ECX, EDI
        MOV  [EBP + 0xC], EBX       /* stream = NULL */
        MOV  [EBP + 8], EBX         /* context = NULL */
        CALL FUN_00411bf0

        MOV  EDX, [EBP + 0xC]
        PUSH EDX
        LEA  ECX, [EBP + 8]
        CALL FUN_00412780

        LEA  EAX, [EBP + 8]
        PUSH EAX
        PUSH ESI
        CALL FUN_00412a50
        MOV  EAX, [EBP + 8]
        ADD  ESP, 0x8
        JMP  epilogue_check_cmp

check_type_5:
        CMP  EAX, 0x5
        PUSH 0x1
        JNZ  type_other

        /* Type == 5 (CampaignInterfaceInfoType) */
        LEA  ECX, [EBP + 8]
        PUSH ECX
        PUSH 0x7829bc
        MOV  ECX, EDI
        CALL FUN_00411cb0

        MOV  EDX, [ESI]
        PUSH 0x4
        LEA  EAX, [EBP + 8]
        PUSH EAX
        MOV  ECX, ESI
        CALL dword ptr [EDX + 0x24]

        PUSH 0x1
        LEA  ECX, [EBP + 8]
        PUSH ECX
        PUSH 0x7829ac
        MOV  ECX, EDI
        CALL FUN_00411cb0

        MOV  EDX, [ESI]
        PUSH 0x4
        LEA  EAX, [EBP + 8]
        PUSH EAX
        MOV  ECX, ESI
        CALL dword ptr [EDX + 0x24]

        PUSH 0x1
        LEA  ECX, [EBP + 8]
        PUSH ECX
        PUSH 0x78299c
        MOV  ECX, EDI
        CALL FUN_00411cb0

        MOV  EDX, [ESI]
        PUSH 0x4
        LEA  EAX, [EBP + 8]
        PUSH EAX
        MOV  ECX, ESI
        CALL dword ptr [EDX + 0x24]

        /* DebriefAudioPath */
        PUSH 0x1
        LEA  ECX, [EBP - 0x48]
        PUSH ECX
        PUSH 0x782988
        MOV  ECX, EDI
        MOV  [EBP - 0xC], EBX
        CALL FUN_00411bf0

        MOV  EDX, [EBP - 0x48]
        PUSH EDX
        LEA  ECX, [EBP - 0xC]
        CALL FUN_00412780

        LEA  EAX, [EBP - 0xC]
        PUSH EAX
        PUSH ESI
        CALL FUN_00412a50
        ADD  ESP, 0x8

        /* MapTextureName */
        PUSH 0x1
        LEA  ECX, [EBP - 0x4C]
        PUSH ECX
        PUSH 0x782978
        MOV  ECX, EDI
        MOV  [EBP + 0xC], EBX
        CALL FUN_00411bf0

        MOV  EDX, [EBP - 0x4C]
        PUSH EDX
        LEA  ECX, [EBP + 0xC]
        CALL FUN_00412780

        LEA  EAX, [EBP + 0xC]
        PUSH EAX
        PUSH ESI
        CALL FUN_00412a50
        ADD  ESP, 0x8

        /* WeightClass */
        PUSH EBX                    /* 0 */
        LEA  ECX, [EBP - 0x10]
        PUSH ECX
        PUSH 0x78296c
        MOV  ECX, EDI
        MOV  [EBP - 0x10], EBX
        CALL FUN_00411bf0

        MOV  EDX, [EBP - 0x10]
        PUSH EDX
        CALL FUN_005929c0
        ADD  ESP, 0x4
        MOV  [EBP - 0x50], EAX

        MOV  EAX, [ESI]
        PUSH 0x4
        LEA  ECX, [EBP - 0x50]
        PUSH ECX
        MOV  ECX, ESI
        CALL dword ptr [EAX + 0x24]

        /* EntryFee */
        PUSH EBX
        LEA  EDX, [EBP + 8]
        PUSH EDX
        PUSH 0x782960
        MOV  ECX, EDI
        MOV  [EBP + 8], EBX
        CALL FUN_00411cb0

        MOV  EAX, [ESI]
        PUSH 0x4
        LEA  ECX, [EBP + 8]
        PUSH ECX
        MOV  ECX, ESI
        CALL dword ptr [EAX + 0x24]

        /* FirstPrize */
        PUSH EBX
        LEA  EDX, [EBP + 8]
        PUSH EDX
        PUSH 0x782954
        MOV  ECX, EDI
        MOV  [EBP + 8], EBX
        CALL FUN_00411cb0

        MOV  EAX, [ESI]
        PUSH 0x4
        LEA  ECX, [EBP + 8]
        PUSH ECX
        MOV  ECX, ESI
        CALL dword ptr [EAX + 0x24]

        /* SecondPrize */
        PUSH EBX
        LEA  EDX, [EBP + 8]
        PUSH EDX
        PUSH 0x782948
        MOV  ECX, EDI
        MOV  [EBP + 8], EBX
        CALL FUN_00411cb0

        MOV  EAX, [ESI]
        PUSH 0x4
        LEA  ECX, [EBP + 8]
        PUSH ECX
        MOV  ECX, ESI
        CALL dword ptr [EAX + 0x24]

        /* ThirdPrize */
        PUSH EBX
        LEA  EDX, [EBP + 8]
        PUSH EDX
        PUSH 0x78293c
        MOV  ECX, EDI
        MOV  [EBP + 8], EBX
        CALL FUN_00411cb0

        MOV  EAX, [ESI]
        PUSH 0x4
        LEA  ECX, [EBP + 8]
        PUSH ECX
        MOV  ECX, ESI
        CALL dword ptr [EAX + 0x24]

        /* Initialize locals to -1 / 0 */
        OR   EAX, 0xFFFFFFFF        /* EAX = -1 */
        PUSH EBX
        LEA  EDX, [EBP - 0x14]
        PUSH EDX
        PUSH 0x782924
        MOV  ECX, EDI
        MOV  [EBP - 0x14], EAX
        MOV  [EBP - 0x18], EAX
        MOV  [EBP - 0x1C], EAX
        MOV  [EBP - 0x20], EAX
        MOV  [EBP - 0x24], EAX
        MOV  [EBP - 0x28], EAX
        MOV  [EBP - 0x2C], EBX
        MOV  [EBP - 0x30], EAX
        MOV  [EBP - 0x34], EBX
        MOV  [EBP - 0x38], EAX
        MOV  [EBP - 0x3C], EAX
        MOV  [EBP - 0x40], EAX
        MOV  [EBP - 0x44], EAX
        CALL FUN_00411cb0

        /* ClientNameStringIndex */
        PUSH EBX
        LEA  EAX, [EBP - 0x18]
        PUSH EAX
        PUSH 0x78290c
        MOV  ECX, EDI
        CALL FUN_00411cb0

        /* MissionTypeStringIndex */
        PUSH EBX
        LEA  ECX, [EBP - 0x1C]
        PUSH ECX
        PUSH 0x7828f8
        MOV  ECX, EDI
        CALL FUN_00411cb0

        /* LocationStringIndex */
        PUSH EBX
        LEA  EDX, [EBP - 0x20]
        PUSH EDX
        PUSH 0x7828e0
        MOV  ECX, EDI
        CALL FUN_00411cb0

        /* ThreatLevelStringIndex */
        PUSH EBX
        LEA  EAX, [EBP - 0x24]
        PUSH EAX
        PUSH 0x7828c8
        MOV  ECX, EDI
        CALL FUN_00411cb0

        /* AlignmentStringIndex */
        PUSH EBX
        LEA  ECX, [EBP - 0x28]
        PUSH ECX
        PUSH 0x7828b4
        MOV  ECX, EDI
        CALL FUN_00411cb0

        /* HeatSinkPercentage */
        PUSH EBX
        LEA  EDX, [EBP - 0x2C]
        PUSH EDX
        PUSH 0x782898
        MOV  ECX, EDI
        CALL FUN_00411cb0

        /* SolarisEndorsementWeight */
        PUSH EBX
        LEA  EAX, [EBP - 0x30]
        PUSH EAX
        PUSH 0x78288c
        MOV  ECX, EDI
        CALL FUN_00411cb0

        /* ArenaIndex */
        PUSH EBX
        LEA  ECX, [EBP - 0x34]
        PUSH ECX
        PUSH 0x782874
        MOV  ECX, EDI
        CALL FUN_00411cb0

        /* ExemptFromCycleExpenses */
        PUSH EBX
        LEA  EDX, [EBP - 0x38]
        PUSH EDX
        PUSH 0x782860
        MOV  ECX, EDI
        CALL FUN_00411cb0

        /* SalvagePercentage */
        PUSH EBX
        LEA  EAX, [EBP - 0x3C]
        PUSH EAX
        PUSH 0x78284c
        MOV  ECX, EDI
        CALL FUN_00411cb0

        /* DropFeePerTenTons */
        PUSH EBX
        LEA  ECX, [EBP - 0x40]
        PUSH ECX
        PUSH 0x78283c
        MOV  ECX, EDI
        CALL FUN_00411cb0

        /* TonnageLimit */
        PUSH EBX
        LEA  EDX, [EBP - 0x44]
        PUSH EDX
        PUSH 0x78281c
        MOV  ECX, EDI
        CALL FUN_00411cb0

        /* Write all 13 fields to stream */
        MOV  EAX, [ESI]
        PUSH 0x4
        LEA  ECX, [EBP - 0x14]
        PUSH ECX
        MOV  ECX, ESI
        CALL dword ptr [EAX + 0x24]

        MOV  EDX, [ESI]
        PUSH 0x4
        LEA  EAX, [EBP - 0x18]
        PUSH EAX
        MOV  ECX, ESI
        CALL dword ptr [EDX + 0x24]

        MOV  EDX, [ESI]
        PUSH 0x4
        LEA  EAX, [EBP - 0x1C]
        PUSH EAX
        MOV  ECX, ESI
        CALL dword ptr [EDX + 0x24]

        MOV  EDX, [ESI]
        PUSH 0x4
        LEA  EAX, [EBP - 0x20]
        PUSH EAX
        MOV  ECX, ESI
        CALL dword ptr [EDX + 0x24]

        MOV  EDX, [ESI]
        PUSH 0x4
        LEA  EAX, [EBP - 0x24]
        PUSH EAX
        MOV  ECX, ESI
        CALL dword ptr [EDX + 0x24]

        MOV  EDX, [ESI]
        PUSH 0x4
        LEA  EAX, [EBP - 0x28]
        PUSH EAX
        MOV  ECX, ESI
        CALL dword ptr [EDX + 0x24]

        MOV  EDX, [ESI]
        PUSH 0x4
        LEA  EAX, [EBP - 0x2C]
        PUSH EAX
        MOV  ECX, ESI
        CALL dword ptr [EDX + 0x24]

        MOV  EDX, [ESI]
        PUSH 0x4
        LEA  EAX, [EBP - 0x30]
        PUSH EAX
        MOV  ECX, ESI
        CALL dword ptr [EDX + 0x24]

        MOV  EDX, [ESI]
        PUSH 0x4
        LEA  EAX, [EBP - 0x34]
        PUSH EAX
        MOV  ECX, ESI
        CALL dword ptr [EDX + 0x24]

        MOV  EDX, [ESI]
        PUSH 0x4
        LEA  EAX, [EBP - 0x38]
        PUSH EAX
        MOV  ECX, ESI
        CALL dword ptr [EDX + 0x24]

        MOV  EDX, [ESI]
        PUSH 0x4
        LEA  EAX, [EBP - 0x3C]
        PUSH EAX
        MOV  ECX, ESI
        CALL dword ptr [EDX + 0x24]

        MOV  EDX, [ESI]
        PUSH 0x4
        LEA  EAX, [EBP - 0x40]
        PUSH EAX
        MOV  ECX, ESI
        CALL dword ptr [EDX + 0x24]

        MOV  EDX, [ESI]
        PUSH 0x4
        LEA  EAX, [EBP - 0x44]
        PUSH EAX
        MOV  ECX, ESI
        CALL dword ptr [EDX + 0x24]

        /* Refcount decrement on param2 (MapTextureName result) */
        MOV  EAX, [EBP + 0xC]
        CMP  EAX, EBX
        JZ   epilogue_check
        MOV  CL, [EAX - 1]
        DEC  EAX
        DEC  CL
        MOV  [EAX], CL
        JNZ  epilogue_check
        PUSH EAX
        CALL FUN_004084e0
        ADD  ESP, 0x4

epilogue_check:
        MOV  EAX, [EBP - 0xC]
epilogue_check_cmp:
        CMP  EAX, EBX
        JZ   epilogue_ret2
        MOV  CL, [EAX - 1]
        DEC  EAX
        DEC  CL
        MOV  [EAX], CL
        JNZ  epilogue_ret2
        PUSH EAX
        CALL FUN_004084e0
        ADD  ESP, 0x4

epilogue_ret:
        POP  EDI
        POP  ESI
        POP  EBX
        MOV  ESP, EBP
        POP  EBP
        RET

type_other:
        /* Type < 5 (0-3): XLocation, YLocation, Width, Height, PointNameIndex, RollOverIndex, RightClickIndex */
        LEA  ECX, [EBP + 8]
        PUSH ECX
        PUSH 0x7749d8
        MOV  ECX, EDI
        CALL FUN_00411cb0

        MOV  EDX, [ESI]
        PUSH 0x4
        LEA  EAX, [EBP + 8]
        PUSH EAX
        MOV  ECX, ESI
        CALL dword ptr [EDX + 0x24]

        PUSH 0x1
        LEA  ECX, [EBP + 8]
        PUSH ECX
        PUSH 0x7749a4
        MOV  ECX, EDI
        CALL FUN_00411cb0

        MOV  EDX, [ESI]
        PUSH 0x4
        LEA  EAX, [EBP + 8]
        PUSH EAX
        MOV  ECX, ESI
        CALL dword ptr [EDX + 0x24]

        PUSH 0x1
        LEA  ECX, [EBP + 8]
        PUSH ECX
        PUSH 0x774b3c
        MOV  ECX, EDI
        CALL FUN_00411cb0

        MOV  EDX, [ESI]
        PUSH 0x4
        LEA  EAX, [EBP + 8]
        PUSH EAX
        MOV  ECX, ESI
        CALL dword ptr [EDX + 0x24]

        PUSH 0x1
        LEA  ECX, [EBP + 8]
        PUSH ECX
        PUSH 0x774af4
        MOV  ECX, EDI
        CALL FUN_00411cb0

        MOV  EDX, [ESI]
        PUSH 0x4
        LEA  EAX, [EBP + 8]
        PUSH EAX
        MOV  ECX, ESI
        CALL dword ptr [EDX + 0x24]

        PUSH 0x1
        LEA  ECX, [EBP + 8]
        PUSH ECX
        PUSH 0x78280c
        MOV  ECX, EDI
        CALL FUN_00411cb0

        MOV  EDX, [ESI]
        PUSH 0x4
        LEA  EAX, [EBP + 8]
        PUSH EAX
        MOV  ECX, ESI
        CALL dword ptr [EDX + 0x24]

        PUSH 0x1
        LEA  ECX, [EBP + 8]
        PUSH ECX
        PUSH 0x7829bc
        MOV  ECX, EDI
        CALL FUN_00411cb0

        MOV  EDX, [ESI]
        PUSH 0x4
        LEA  EAX, [EBP + 8]
        PUSH EAX
        MOV  ECX, ESI
        CALL dword ptr [EDX + 0x24]

        PUSH 0x1
        LEA  ECX, [EBP + 8]
        PUSH ECX
        PUSH 0x7829ac
        MOV  ECX, EDI
        CALL FUN_00411cb0

        MOV  EDX, [ESI]
        PUSH 0x4
        LEA  EAX, [EBP + 8]
        PUSH EAX
        MOV  ECX, ESI
        CALL dword ptr [EDX + 0x24]

        /* If type >= 2, read IconName */
        CMP  dword ptr [EBP - 4], 0x2
        JL   epilogue_ret2

        PUSH 0x1
        LEA  ECX, [EBP - 0x50]
        PUSH ECX
        PUSH 0x782800
        MOV  ECX, EDI
        MOV  [EBP + 0xC], EBX
        CALL FUN_00411bf0

        MOV  EDX, [EBP - 0x50]
        PUSH EDX
        LEA  ECX, [EBP + 0xC]
        CALL FUN_00412780

        LEA  EAX, [EBP + 0xC]
        PUSH EAX
        PUSH ESI
        CALL FUN_00412a50
        MOV  EAX, [EBP + 0xC]
        ADD  ESP, 0x8

        /* Refcount decrement on IconName result */
        CMP  EAX, EBX
        JZ   epilogue_ret2
        MOV  CL, [EAX - 1]
        DEC  EAX
        DEC  CL
        MOV  [EAX], CL
        JNZ  epilogue_ret2
        PUSH EAX
        CALL FUN_004084e0
        ADD  ESP, 0x4

epilogue_ret2:
        POP  EDI
        POP  ESI
        POP  EBX
        MOV  ESP, EBP
        POP  EBP
        RET
    }
}
