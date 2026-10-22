/*
 * FUN_1000fff0 (11 B) - __fastcall.
 * Vtable-pointer ctor: stores vtable 0x10049740 into [ECX], then
 * tail-jumps to shared ctor FUN_1001ca00.
 *
 * CFLAGS: /O1
 */

extern void __fastcall FUN_1001ca00(void);

__declspec(naked) void __fastcall FUN_1000fff0(void)
{
    __asm {
        mov     dword ptr [ecx], 0x10049740
        jmp     FUN_1001ca00
    }
}
