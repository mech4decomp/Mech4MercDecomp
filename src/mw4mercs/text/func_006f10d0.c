/*
 * FUN_006F10D0 (21 B) — Wrapper: adjusts ECX by +0x14, calls FUN_006f3960
 * with two stack params, RET 8.
 *
 * __thiscall (ECX = this), RET 8 (2 stack params).
 *
 * Disassembly:
 *   8B 44 24 08       mov     eax, [esp + 8]
 *   8B 54 24 04       mov     edx, [esp + 4]
 *   50                push    eax
 *   52                push    edx
 *   83 C1 14          add     ecx, 0x14
 *   E8 7E 28 00 00    call    0x006f3960
 *   C2 08 00          ret     8
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

void __fastcall FUN_006f3960(int, double);

__declspec(naked) void __stdcall FUN_006f10d0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 8]
        mov     edx, dword ptr [esp + 4]
        push    eax
        push    edx
        add     ecx, 0x14
        call    FUN_006f3960
        ret     8
    }
}
