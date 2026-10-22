/*
 * FUN_004E2F40 (210 B) - Adept::CollisionGrid update/query (__thiscall, RET 0x4).
 *
 * Copies cell bounds from [EDI+0xc..0x14] into [ESI..+8]. If
 * (param[5] & 0x4000), calls FUN_00766cb0(this+0x180, &local_8),
 * sets byte[EBX+0xc]=2, and does FPU range checks against 0x0076c5b0
 * and [EDI+0x18]; on success copies [EBP..+8] into [ESI..+8], stores
 * fVar1 into [EDI+0x18], and computes a hash into local_c via
 * DAT_007dab44 / DAT_007dab40. Then calls FUN_004b7040(EBX, 0x4e8930).
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_00766cb0(void);
extern void __cdecl FUN_004b7040(void);

extern int g_0076c5b0;
extern int g_007dab44;
extern int g_007dab40;

__declspec(naked) void __stdcall FUN_004e2f40(void)
{
    __asm {
        SUB ESP, 0xc
        PUSH EBX
        MOV EBX, dword ptr [ESP + 0x14]
        PUSH EBP
        PUSH ESI
        MOV ESI, dword ptr [EBX + 0x4]
        PUSH EDI
        MOV EDI, dword ptr [EBX]
        MOV EAX, dword ptr [EDI + 0xc]
        MOV EDX, dword ptr [EDI + 0x10]
        MOV dword ptr [ESI], EAX
        MOV EAX, dword ptr [EDI + 0x14]
        MOV dword ptr [ESI + 0x8], EAX
        MOV EAX, dword ptr [EBX + 0x14]
        TEST AH, 0x40
        MOV dword ptr [ESP + 0x18], ECX
        MOV dword ptr [ESI + 0x4], EDX
        MOV dword ptr [ESP + 0x10], 0x0
        JZ l_skip
        LEA EBP, [ECX + 0x180]
        LEA ECX, [ESP + 0x14]
        PUSH ECX
        PUSH EBP
        MOV ECX, EDI
        CALL FUN_00766cb0
        FSTP dword ptr [ESP + 0x20]
        FLD dword ptr [ESP + 0x14]
        MOV byte ptr [EBX + 0xc], 0x2
        FCOMP dword ptr [g_0076c5b0]
        FNSTSW AX
        TEST AH, 0x1
        JZ l_skip
        FLD dword ptr [ESP + 0x20]
        FCOMP dword ptr [g_0076c5b0]
        FNSTSW AX
        TEST AH, 0x1
        JNZ l_skip
        FLD dword ptr [ESP + 0x20]
        FCOMP dword ptr [EDI + 0x18]
        FNSTSW AX
        TEST AH, 0x41
        JZ l_skip
        MOV EDX, dword ptr [EBP]
        MOV EAX, dword ptr [EBP + 0x4]
        MOV ECX, dword ptr [EBP + 0x8]
        MOV dword ptr [ESI], EDX
        MOV EDX, dword ptr [ESP + 0x20]
        MOV dword ptr [ESI + 0x4], EAX
        MOV EAX, dword ptr [g_007dab44]
        MOV dword ptr [ESI + 0x8], ECX
        MOV ECX, dword ptr [EAX]
        MOV dword ptr [EDI + 0x18], EDX
        XOR ECX, dword ptr [g_007dab40]
        MOV EAX, dword ptr [ECX + 0x1c]
        XOR EAX, 0x85739531
        MOV dword ptr [ESP + 0x10], EAX
    l_skip:
        MOV ECX, dword ptr [ESP + 0x18]
        PUSH 0x4e8930
        PUSH EBX
        CALL FUN_004b7040
        TEST EAX, EAX
        POP EDI
        POP ESI
        POP EBP
        POP EBX
        JNZ l_ret
        /* __emit: MSVC6 drops the 00 disp byte for [esp+0] (8B 04 24); ref needs 8B 44 24 00 */
        __emit 0x8B
        __emit 0x44
        __emit 0x24
        __emit 0x00
    l_ret:
        ADD ESP, 0xc
        RET 0x4
    }
}
