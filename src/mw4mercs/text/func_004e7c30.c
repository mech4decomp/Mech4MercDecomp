/*
 * FUN_004E7C30 (104 B) — MLR/Adept core update helper.
 *
 * __thiscall (ECX = this), RET 4, 1 float param at [ESP+0x8].
 * If this+0x40 != 0: *this+0x40 += param*this+0x10 - this+0x14.
 * this+0x14 = param*this+0x10. Then calls FUN_004e6480() and performs the
 * same ratio/store sequence as FUN_004e7b80.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004e6480(void);

__declspec(naked) void __fastcall FUN_004e7c30(void)
{
    __asm {
        PUSH ESI
        MOV ESI, ECX
        MOV EAX, dword ptr [ESI + 0x40]
        TEST EAX, EAX
        JZ l_skip40
        FLD dword ptr [ESP + 0x8]
        FMUL dword ptr [ESI + 0x10]
        FSUB dword ptr [ESI + 0x14]
        FADD dword ptr [EAX]
        FSTP dword ptr [EAX]
    l_skip40:
        FLD dword ptr [ESP + 0x8]
        MOV ECX, ESI
        FMUL dword ptr [ESI + 0x10]
        FSTP dword ptr [ESI + 0x14]
        CALL FUN_004e6480
        MOV ECX, dword ptr [ESI + 0x38]
        TEST ECX, ECX
        MOV dword ptr [ESI + 0x44], EAX
        JZ l_skip_ptr38
        MOV dword ptr [ECX], EAX
    l_skip_ptr38:
        MOV EAX, dword ptr [ESI + 0x28]
        TEST EAX, EAX
        JZ l_use_self
        FLD dword ptr [EAX + 0x14]
        FADD dword ptr [ESI + 0x14]
        FLD dword ptr [EAX + 0x10]
        FADD dword ptr [ESI + 0x10]
        FDIVP ST(1), ST(0)
        JMP l_store
    l_use_self:
        FLD dword ptr [ESI + 0x14]
        FDIV dword ptr [ESI + 0x10]
    l_store:
        FST dword ptr [ESI + 0x48]
        MOV ESI, dword ptr [ESI + 0x3c]
        TEST ESI, ESI
        JZ l_no_ptr3c
        FSTP dword ptr [ESI]
        POP ESI
        RET 0x4
    l_no_ptr3c:
        FSTP ST(0)
        POP ESI
        RET 0x4
    }
}
