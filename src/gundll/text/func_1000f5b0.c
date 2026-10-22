/*
 * FUN_1000f5b0 (11 B) - __fastcall.
 * Vtable-pointer ctor: stores vtable 0x100496ec into [ECX], then
 * tail-jumps to shared ctor FUN_1001c8a0.
 *
 * CFLAGS: /O1
 */

extern void __fastcall FUN_1001c8a0(void);

__declspec(naked) void __fastcall FUN_1000f5b0(void)
{
    __asm {
        mov     dword ptr [ecx], 0x100496ec
        jmp     FUN_1001c8a0
    }
}
