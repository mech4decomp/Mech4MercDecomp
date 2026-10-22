/*
 * FUN_004E7B80 (67 B) — MLR/Adept core helper.
 *
 * __thiscall (ECX = this). Calls FUN_004e6480() to obtain a value, stores it
 * at this+0x44 and (if this+0x38 != 0) at *this+0x38. Computes a ratio:
 *   if this+0x28 != 0: (this+0x14 + this+0x28+0x14) / (this+0x10 + this+0x28+0x10)
 *   else:              this+0x14 / this+0x10
 * stores it at this+0x48 and (if this+0x3c != 0) at *this+0x3c.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004e6480(void);

__declspec(naked) void __fastcall FUN_004e7b80(void)
{
    __asm {
        PUSH ESI
        MOV ESI, ECX
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
        RET
    l_no_ptr3c:
        FSTP ST(0)
        POP ESI
        RET
    }
}
