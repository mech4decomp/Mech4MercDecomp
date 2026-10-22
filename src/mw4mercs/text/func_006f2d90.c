/*
 * FUN_006F2D90 (34 B) — Switch on param_1: if 1, return this+0x138;
 * if 2, return this+0x13C; else return -1. RET 4.
 *
 * __thiscall (ECX = this), RET 4 (1 stack param).
 *
 * Disassembly:
 *   8B 44 24 04       mov     eax, [esp + 4]
 *   48                dec     eax
 *   74 12             jz      case1
 *   48                dec     eax
 *   74 06             jz      case2
 *   83 C8 FF          or      eax, -1
 *   C2 04 00          ret     4
 *   8B 81 3C 01 00 00 mov     eax, [ecx + 0x13c]
 *   C2 04 00          ret     4
 *   8B 81 38 01 00 00 mov     eax, [ecx + 0x138]
 *   C2 04 00          ret     4
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __stdcall FUN_006f2d90(int param_1)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        dec     eax
        jz      case1
        dec     eax
        jz      case2
        or      eax, -1
        ret     4
case2:
        mov     eax, dword ptr [ecx + 0x13c]
        ret     4
case1:
        mov     eax, dword ptr [ecx + 0x138]
        ret     4
    }
}
