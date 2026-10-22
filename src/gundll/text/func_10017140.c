/*
 * FUN_10017140 (11 B) - __fastcall.
 * Vtable-pointer ctor: stores vtable 0x100499a4 into [ECX], then
 * tail-jumps to shared ctor FUN_1001c8a0.
 *
 * CFLAGS: /O1
 */

extern void __fastcall FUN_1001c8a0(void);

__declspec(naked) void __fastcall FUN_10017140(void)
{
    __asm {
        mov     dword ptr [ecx], 0x100499a4
        jmp     FUN_1001c8a0
    }
}
