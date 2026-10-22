/*
 * FUN_10010190 (11 B) - __fastcall.
 * Vtable-pointer ctor: stores vtable 0x1004974c into [ECX], then
 * tail-jumps to shared ctor FUN_1001ca00.
 * (Referenced by wave-1's FUN_10010090 via `call FUN_10010190`.)
 *
 * CFLAGS: /O1
 */

extern void __fastcall FUN_1001ca00(void);

__declspec(naked) void __fastcall FUN_10010190(void)
{
    __asm {
        mov     dword ptr [ecx], 0x1004974c
        jmp     FUN_1001ca00
    }
}
