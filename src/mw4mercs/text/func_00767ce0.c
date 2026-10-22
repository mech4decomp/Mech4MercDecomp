/*
 * FUN_00767ce0 (11 B) — __thiscall (ECX = this).
 * Writes vtable pointer 0x7afd30 into [this], then tail-jumps to FUN_00767a60.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00767a60(void);

__declspec(naked) void __fastcall FUN_00767ce0(void *this)
{
    __asm {
        mov     dword ptr [ecx], 0x7afd30
        jmp     FUN_00767a60
    }
}
