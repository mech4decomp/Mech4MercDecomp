/*
 * FUN_10010fd0 (11 B) - __fastcall.
 * Vtable-pointer ctor: stores vtable 0x100497a0 into [ECX], then
 * tail-jumps to shared ctor FUN_1001c750.
 *
 * CFLAGS: /O1
 */

extern void __fastcall FUN_1001c750(void);

__declspec(naked) void __fastcall FUN_10010fd0(void)
{
    __asm {
        mov     dword ptr [ecx], 0x100497a0
        jmp     FUN_1001c750
    }
}
