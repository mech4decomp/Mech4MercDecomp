/*
 * FUN_100102c0 (11 B) - __fastcall.
 * Vtable-pointer ctor: stores vtable 0x10049758 into [ECX], then
 * tail-jumps to shared ctor FUN_1001c750.
 *
 * CFLAGS: /O1
 */

extern void __fastcall FUN_1001c750(void);

__declspec(naked) void __fastcall FUN_100102c0(void)
{
    __asm {
        mov     dword ptr [ecx], 0x10049758
        jmp     FUN_1001c750
    }
}
