/*
 * FUN_005e8990 (8 B) - Sets a byte flag at this+0x4A4 to 1.
 *
 * __thiscall (ECX = this), no stack params, RET 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_005e8990(void)
{
    __asm {
        mov     byte ptr [ecx + 0x4A4], 1
        ret
    }
}
