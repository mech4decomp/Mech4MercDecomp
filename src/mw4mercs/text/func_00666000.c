/*
 * FUN_00666000 (11 B) — __fastcall constructor: sets vtable pointer
 * 0x795480 then tail-jumps to FUN_00561730.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00561730(void);

__declspec(naked) void FUN_00666000(void)
{
    __asm {
        mov     dword ptr [ecx], 0x795480
        jmp     FUN_00561730
    }
}
