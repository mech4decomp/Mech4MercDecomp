/*
 * FUN_005bffb0 (11 B) — Vtable-set + tail-call thunk.
 *
 * Sets vtable pointer [this]=0x7872E8 then tail-jumps to FUN_005c0660.
 *
 * __thiscall (ECX = this), RET 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_005c0660(void);

__declspec(naked) void FUN_005bffb0(void)
{
    __asm {
        mov     dword ptr [ecx], 0x7872e8
        jmp     FUN_005c0660
    }
}
