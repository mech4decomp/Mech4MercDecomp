/*
 * FUN_0060FA00 (19 B) — __thiscall, 1 stack param (RET 0x4). Writes
 * this->[0xc] to *param; if non-null, dead-code tail INC [ECX-0x1]
 * (unreachable, hidden by Ghidra's linear disasm — recovered from raw bytes).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_0060FA00(void)
{
    __asm {
        mov     ecx, dword ptr [ecx + 0xc]
        test    ecx, ecx
        mov     eax, dword ptr [esp + 0x4]
        mov     dword ptr [eax], ecx
        jz      L_610
        inc     byte ptr [ecx - 0x1]
L_610:
        ret     0x4
    }
}
