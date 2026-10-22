/* FUN_0058D3A0: Physics/animation update function (1225 B)
 * thiscall: ECX = this, stack: float param_1 (t)
 * References globals: 0x0077d094, 0x0076c5b0, 0x00781560, 0x007b8d88, 0x007b9460
 * Calls many sub-functions for joint/spring simulation
 */
extern float DAT_0077D094;
extern float DAT_0076C5B0;
extern float DAT_00781560;

extern void __cdecl FUN_0040C5D0(void);
extern void __cdecl FUN_0040CCD0(void);
extern void __cdecl FUN_00419460(void);
extern void __cdecl FUN_0058D870(void);
extern void __cdecl FUN_0041A070(void);
extern void __cdecl FUN_00428850(void);
extern void __cdecl FUN_00583E80(void);
extern void __cdecl FUN_00419480(void);
extern void __cdecl FUN_00591080(void);
extern void __cdecl FUN_00584520(void);
extern void __cdecl FUN_0053A4A0(void);
extern void __cdecl FUN_0041AFA0(void);
extern void __cdecl FUN_00419E70(void);
extern void __cdecl FUN_0040D030(void);
extern void __cdecl FUN_0041A160(void);
extern void __cdecl FUN_004DAA20(void);
extern void __cdecl FUN_00591060(void);

__declspec(naked) void FUN_0058D3A0(void)
{
    __asm {
        SUB ESP, 0x94
        FLD dword ptr [ESP + 0x98]
        MOV EAX, dword ptr [ESP + 0x98]
        fcomp dword ptr [DAT_0077D094]
        PUSH EBX
        MOV dword ptr [ESP + 0x4], EAX
        PUSH ESI
        PUSH EDI
        FNSTSW AX
        MOV ESI, ECX
        TEST AH, 0x41
        JNZ skip_clamp
        MOV dword ptr [ESP + 0xC], 0x3E4CCCCD
skip_clamp:
        PUSH 0x7B8D88
        LEA ECX, [ESP + 0x8C]
        call FUN_0040C5D0
        PUSH 0x7B8D88
        LEA ECX, [ESP + 0x98]
        call FUN_0040C5D0
        PUSH 0x7B8D88
        LEA ECX, [ESP + 0x14]
        call FUN_0040C5D0
        LEA ECX, [ESI + 0x67C]
        PUSH ECX
        LEA ECX, [ESP + 0x80]
        call FUN_0040C5D0

        XOR EDI, EDI
        LEA ECX, [ESI + 0x688]
        XOR EDX, EDX

loop_start:
        FLD dword ptr [ECX - 0x24]
        FMUL dword ptr [ECX - 0x0C]
        FCHS
        fst dword ptr [ESP + EDX + 0x94]
        FMUL dword ptr [ESP + 0x0C]
        fst dword ptr [ESP + EDX + 0x88]
        FADD dword ptr [ECX]
        FSTP dword ptr [ECX]
        FLD dword ptr [ECX - 0x18]
        FADD dword ptr [ECX]
        FSTP dword ptr [ECX]

        FLD dword ptr [ECX - 0x0C]
        fcomp dword ptr [DAT_0076C5B0]
        FNSTSW AX
        TEST AH, 0x41
        JNZ else_branch_1

        FLD dword ptr [ECX]
        fcomp dword ptr [DAT_0076C5B0]
        FNSTSW AX
        TEST AH, 0x01
        JZ continue_1

        FLD dword ptr [ECX + 0x18]
        FCHS
        FCOM dword ptr [ECX]
        FNSTSW AX
        TEST AH, 0x01
        JZ pop_st0_1
        FSTP dword ptr [ECX]
        JMP continue_1

else_branch_1:
        FLD dword ptr [ECX - 0x0C]
        fcomp dword ptr [DAT_0076C5B0]
        FNSTSW AX
        TEST AH, 0x01
        JZ continue_1

        FLD dword ptr [ECX]
        fcomp dword ptr [DAT_0076C5B0]
        FNSTSW AX
        TEST AH, 0x41
        JNZ continue_1

        FLD dword ptr [ECX]
        FCOMP dword ptr [ECX + 0x18]
        FNSTSW AX
        TEST AH, 0x01
        JZ continue_1
        MOV EAX, dword ptr [ECX + 0x18]
        MOV dword ptr [ECX], EAX
        JMP continue_1

pop_st0_1:
        fstp st(0)

continue_1:
        FLD dword ptr [ESP + 0x0C]
        FMUL dword ptr [ECX]
        fst dword ptr [ESP + EDX + 0x10]
        FADD dword ptr [ECX - 0x0C]
        FSTP dword ptr [ECX - 0x0C]

        FLD dword ptr [ECX]
        fcomp dword ptr [DAT_0076C5B0]
        FLD dword ptr [ECX]
        FNSTSW AX
        TEST AH, 0x41
        JZ no_neg
        FCHS
no_neg:
        FCOMP dword ptr [ECX + 0x18]
        FNSTSW AX
        TEST AH, 0x41
        JZ skip_zero_check

        fld dword ptr [ESP + EDX + 0x7C]
        fcomp dword ptr [DAT_0076C5B0]
        FNSTSW AX
        TEST AH, 0x41
        JNZ check_neg_2

        FLD dword ptr [ECX - 0x0C]
        fcomp dword ptr [DAT_0076C5B0]
        FNSTSW AX
        TEST AH, 0x41
        JNZ do_zero

check_neg_2:
        fld dword ptr [ESP + EDX + 0x7C]
        fcomp dword ptr [DAT_0076C5B0]
        FNSTSW AX
        TEST AH, 0x01
        JZ skip_zero_check

        FLD dword ptr [ECX - 0x0C]
        fcomp dword ptr [DAT_0076C5B0]
        FNSTSW AX
        TEST AH, 0x01
        JNZ skip_zero_check

do_zero:
        MOV dword ptr [ECX], EDI
        MOV dword ptr [ECX - 0x0C], EDI

skip_zero_check:
        FLD dword ptr [ECX - 0x0C]
        fcomp dword ptr [DAT_0076C5B0]
        FNSTSW AX
        TEST AH, 0x41
        JNZ else_branch_2

        FLD dword ptr [ECX]
        fcomp dword ptr [DAT_0076C5B0]
        FNSTSW AX
        TEST AH, 0x01
        JZ else_branch_2

        FLD dword ptr [ESP + 0x0C]
        FMUL dword ptr [ECX + 0x0C]
        FADD dword ptr [ECX]
        FSTP dword ptr [ECX]
        FLD dword ptr [ECX]
        fcomp dword ptr [DAT_0076C5B0]
        FNSTSW AX
        TEST AH, 0x41
        JNZ continue_2
        JMP do_zero_2

else_branch_2:
        FLD dword ptr [ECX - 0x0C]
        fcomp dword ptr [DAT_0076C5B0]
        FNSTSW AX
        TEST AH, 0x01
        JZ continue_2

        FLD dword ptr [ECX]
        fcomp dword ptr [DAT_0076C5B0]
        FNSTSW AX
        TEST AH, 0x41
        JNZ continue_2

        FLD dword ptr [ESP + 0x0C]
        FMUL dword ptr [ECX + 0x0C]
        FSUBR dword ptr [ECX]
        FSTP dword ptr [ECX]
        FLD dword ptr [ECX]
        fcomp dword ptr [DAT_0076C5B0]
        FNSTSW AX
        TEST AH, 0x01
        JZ continue_2

do_zero_2:
        MOV dword ptr [ECX], EDI

continue_2:
        FLD dword ptr [ECX - 0x0C]
        FCOMP dword ptr [ECX - 0x30]
        FNSTSW AX
        TEST AH, 0x41
        JNZ else_branch_3

        MOV dword ptr [ECX], EDI
        MOV EAX, dword ptr [ECX - 0x30]
        MOV dword ptr [ECX - 0x0C], EAX
        JMP loop_next

else_branch_3:
        FLD dword ptr [ECX - 0x30]
        FCHS
        FCOMP dword ptr [ECX - 0x0C]
        FNSTSW AX
        TEST AH, 0x41
        JNZ loop_next

        MOV dword ptr [ECX], EDI
        FLD dword ptr [ECX - 0x30]
        FCHS
        FSTP dword ptr [ECX - 0x0C]

loop_next:
        ADD EDX, 0x4
        ADD ECX, 0x4
        CMP EDX, 0xC
        JL loop_start

        PUSH 0x7B8D88
        LEA ECX, [ESI + 0x670]
        call FUN_0040CCD0

        PUSH 0x7B9460
        LEA ECX, [ESP + 0x44]
        call FUN_00419460

        LEA ECX, [ESI + 0x67C]
        PUSH ECX
        LEA ECX, [ESP + 0x14]
        call FUN_0040C5D0

        LEA EDX, [ESP + 0x10]
        PUSH EDX
        LEA ECX, [ESP + 0x20]
        call FUN_0040C5D0

        fld dword ptr [DAT_00781560]
        FMUL dword ptr [ESP + 0x24]
        LEA EAX, [ESP + 0x0C]
        PUSH EAX
        LEA ECX, [ESP + 0x2C]
        FSTP dword ptr [ESP + 0x10]
        PUSH ECX
        fld dword ptr [DAT_00781560]
        LEA EDX, [ESP + 0x34]
        FMUL dword ptr [ESP + 0x28]
        PUSH EDX
        LEA ECX, [ESP + 0x1C]
        FSTP dword ptr [ESP + 0x34]
        fld dword ptr [DAT_00781560]
        FMUL dword ptr [ESP + 0x28]
        FSTP dword ptr [ESP + 0x38]
        call FUN_0058D870

        PUSH EAX
        LEA ECX, [ESP + 0x44]
        call FUN_0041A070

        MOV ECX, dword ptr [ESI + 0x9AC]
        LEA EAX, [ESP + 0x40]
        PUSH EAX
        ADD ECX, 0xA4
        call FUN_00428850

        PUSH 0x7B9460
        LEA ECX, [ESP + 0x44]
        call FUN_00419460

        LEA ECX, [ESP + 0x70]
        call FUN_00583E80

        MOV ECX, dword ptr [ESI + 0xE0]
        CMP dword ptr [ECX + 0x14], 0x8
        MOV EBX, dword ptr [ESP + 0xA4]
        JZ branch_type8

        MOV EDX, dword ptr [ESI + 0x7CC]
        MOV EAX, dword ptr [ESI + 0x2C0]
        MOV ECX, dword ptr [EAX + EDX*0x4]
        MOV EDX, dword ptr [ECX + 0xD8]
        ADD EDX, 0x20
        PUSH EDX
        LEA ECX, [ESP + 0x20]
        call FUN_00419480

        PUSH EBX
        LEA ECX, [ESI + 0x6B0]
        call FUN_00591080

        LEA EAX, [ESI + 0x6EC]
        PUSH EAX
        LEA ECX, [ESP + 0x14]
        call FUN_00584520

        LEA ECX, [ESP + 0x10]
        PUSH ECX
        LEA ECX, [ESP + 0x74]
        call FUN_0053A4A0

        FLD dword ptr [ESI + 0x830]
        FCHS
        LEA EDX, [ESP + 0x70]
        FSTP dword ptr [ESP + 0x78]
        PUSH EDX
        LEA ECX, [ESP + 0x34]
        call FUN_0041AFA0

        LEA ECX, [ESP + 0x40]
        call FUN_00419E70

        LEA EAX, [ESP + 0x1C]
        PUSH EAX
        LEA ECX, [ESP + 0x44]
        call FUN_0040D030

        LEA ECX, [ESP + 0x30]
        PUSH ECX
        LEA ECX, [ESP + 0x44]
        call FUN_0041A160

        MOV EAX, dword ptr [ESI + 0x7CC]
        MOV ECX, dword ptr [ESI + 0x2C0]
        MOV ECX, dword ptr [ECX + EAX*0x4]
        LEA EDX, [ESP + 0x40]
        PUSH EDX
        call FUN_004DAA20
        JMP after_type_check

branch_type8:
        LEA ECX, [ESI + 0x6B0]
        call FUN_00591060

after_type_check:
        MOV EDX, dword ptr [ESI + 0x7B8]
        MOV EAX, dword ptr [ESI + 0x2C0]
        MOV ECX, dword ptr [EAX + EDX*0x4]
        MOV EDX, dword ptr [ECX + 0xD8]
        ADD EDX, 0x20
        PUSH EDX
        LEA ECX, [ESP + 0x20]
        call FUN_00419480

        PUSH EBX
        LEA ECX, [ESI + 0x708]
        call FUN_00591080

        LEA EAX, [ESI + 0x744]
        PUSH EAX
        LEA ECX, [ESP + 0x14]
        call FUN_00584520

        LEA ECX, [ESP + 0x10]
        PUSH ECX
        LEA ECX, [ESP + 0x34]
        call FUN_0041AFA0

        LEA ECX, [ESP + 0x40]
        call FUN_00419E70

        LEA EDX, [ESP + 0x1C]
        PUSH EDX
        LEA ECX, [ESP + 0x44]
        call FUN_0040D030

        LEA EAX, [ESP + 0x30]
        PUSH EAX
        LEA ECX, [ESP + 0x44]
        call FUN_0041A160

        MOV EDX, dword ptr [ESI + 0x7B8]
        MOV EDI, dword ptr [ESI + 0x2C0]
        LEA ECX, [ESP + 0x40]
        PUSH ECX
        MOV ECX, dword ptr [EDI + EDX*0x4]
        call FUN_004DAA20

        MOV EAX, dword ptr [ESI + 0x7BC]
        MOV ECX, dword ptr [EDI + EAX*0x4]
        MOV EDX, dword ptr [ECX + 0xD8]
        ADD EDX, 0x20
        PUSH EDX
        LEA ECX, [ESP + 0x20]
        call FUN_00419480

        PUSH EBX
        LEA ECX, [ESI + 0x760]
        call FUN_00591080

        LEA EAX, [ESI + 0x79C]
        PUSH EAX
        LEA ECX, [ESP + 0x14]
        call FUN_00584520

        LEA ECX, [ESP + 0x10]
        PUSH ECX
        LEA ECX, [ESP + 0x34]
        call FUN_0041AFA0

        LEA ECX, [ESP + 0x40]
        call FUN_00419E70

        LEA EDX, [ESP + 0x1C]
        PUSH EDX
        LEA ECX, [ESP + 0x44]
        call FUN_0040D030

        LEA EAX, [ESP + 0x30]
        PUSH EAX
        LEA ECX, [ESP + 0x44]
        call FUN_0041A160

        MOV EDX, dword ptr [ESI + 0x7BC]
        MOV EAX, dword ptr [ESI + 0x2C0]
        LEA ECX, [ESP + 0x40]
        PUSH ECX
        MOV ECX, dword ptr [EAX + EDX*0x4]
        call FUN_004DAA20

        POP EDI
        POP ESI
        POP EBX
        ADD ESP, 0x94
        RET 0x4
    }
}
