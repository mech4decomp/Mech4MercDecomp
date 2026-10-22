/*
 * FUN_005e1a60 (20 B) — Sets this->field_0x490 = 1, calls FUN_005e1b60(1).
 * __thiscall (ECX = this), RET 0x4 (one unused stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005e1b60(int param);

__declspec(naked) void __stdcall FUN_005e1a60(int param)
{
    __asm {
        push    0x1
        mov     dword ptr [ecx + 0x490], 0x1
        call    FUN_005e1b60
        ret     0x4
    }
}
