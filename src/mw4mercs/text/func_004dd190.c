/*
 * FUN_004DD190 (12 B) — Getter: reads field at +0x14 from this (ECX),
 * writes it to the output pointer at [ESP+4].
 *
 * __thiscall (ECX = this), RET 4 (one stack param: output pointer).
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_004dd190(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x14]
        mov     ecx, dword ptr [esp + 4]
        mov     dword ptr [ecx], eax
        ret     4
    }
}
