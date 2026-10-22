/*
 * FUN_1000e220 (11 B) - __fastcall.
 * Vtable-pointer ctor: stores vtable 0x100496a4 into [ECX], then
 * tail-jumps to shared ctor FUN_1001c750.
 *
 * CFLAGS: /O1
 */

extern void __fastcall FUN_1001c750(void);

__declspec(naked) void __fastcall FUN_1000e220(void)
{
    __asm {
        mov     dword ptr [ecx], 0x100496a4
        jmp     FUN_1001c750
    }
}
