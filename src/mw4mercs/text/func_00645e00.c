/*
 * FUN_00645E00 (11 B) — __thiscall (ECX = this), tail-call thunk.
 *
 * Sets the object's vtable pointer to 0x792694 then tail-jumps to
 * FUN_00561730 (shared destructor/cleanup).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00561730(void);

__declspec(naked) void __fastcall FUN_00645e00(void *this)
{
    __asm {
        mov     dword ptr [ecx], 0x792694
        jmp     FUN_00561730
    }
}
