/*
 * FUN_004D2B00 (15 B) — Setter: reads a 16-bit value from input+2
 * and writes it to this+0x18.
 *
 * __thiscall (ECX = this), RET 4 (one stack param: input struct).
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_004d2b00(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     dx, word ptr [eax + 2]
        mov     word ptr [ecx + 0x18], dx
        ret     4
    }
}
