/*
 * FUN_004E7CE0 (113 B) — MLR/Adept core update helper.
 *
 * __thiscall (ECX = this), RET 4, 1 float param at [ESP+0xc].
 * Calls FUN_004e7760(); if result != 2, updates this+0x18 target and
 * this+0x14, and if param == *(float*)0x0076c5b0 performs a virtual call
 * through this+0x2c's vtable slot +0x88.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004e7760(void);
extern float g_76c5b0;   /* 0x0076c5b0 */

__declspec(naked) void __fastcall FUN_004e7ce0(void)
{
    __asm {
        PUSH ECX
        PUSH ESI
        MOV ESI, ECX
        CALL FUN_004e7760
        CMP EAX, 0x2
        JZ l_done
        MOV ECX, dword ptr [ESI + 0x18]
        TEST ECX, ECX
        JZ l_skip18
        FLD dword ptr [ESP + 0xc]
        FMUL dword ptr [ESI + 0x10]
        FSUB dword ptr [ESI + 0x14]
        FADD dword ptr [ECX]
        FSTP dword ptr [ECX]
    l_skip18:
        FLD dword ptr [ESP + 0xc]
        FMUL dword ptr [ESI + 0x10]
        FSTP dword ptr [ESP + 0x4]
        FLD dword ptr [ESP + 0xc]
        MOV EAX, dword ptr [ESP + 0x4]
        FCOMP dword ptr [g_76c5b0]
        MOV dword ptr [ESI + 0x14], EAX
        __emit 0xDF        /* __emit: fnstsw ax no-WAIT (DF E0) */
        __emit 0xE0
        __emit 0xF6        /* __emit: test ah,imm8 (F6 C4 40) */
        __emit 0xC4
        __emit 0x40
        JZ l_done
        TEST ECX, ECX
        JZ l_skip18b
        FLD dword ptr [ESP + 0x4]
        FCHS
        FADD dword ptr [ECX]
        FSTP dword ptr [ECX]
    l_skip18b:
        MOV ECX, dword ptr [ESI + 0x2c]
        MOV EAX, dword ptr [ESI + 0x38]
        MOV EDX, dword ptr [ECX]
        PUSH 0x0
        PUSH EAX
        MOV dword ptr [ESI + 0x14], 0x0
        CALL dword ptr [EDX + 0x88]
    l_done:
        POP ESI
        POP ECX
        RET 0x4
    }
}
