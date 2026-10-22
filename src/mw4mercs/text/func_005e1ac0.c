/*
 * FUN_005e1ac0 (18 B) — Sets this->field_0x490 = 3, calls FUN_005e1b60(3).
 * __thiscall (ECX = this), RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005e1b60(int param);

__declspec(naked) void __cdecl FUN_005e1ac0(void)
{
    __asm {
        push    0x3
        mov     dword ptr [ecx + 0x490], 0x3
        call    FUN_005e1b60
        ret
    }
}
