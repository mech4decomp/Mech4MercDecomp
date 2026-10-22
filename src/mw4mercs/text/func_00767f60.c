/*
 * FUN_00767f60 (11 B) — __thiscall (ECX = this).
 * Writes vtable pointer 0x7afd38 into [this], then tail-jumps to FUN_00767ce0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00767ce0(void);

__declspec(naked) void __fastcall FUN_00767f60(void *this)
{
    __asm {
        mov     dword ptr [ecx], 0x7afd38
        jmp     FUN_00767ce0
    }
}
