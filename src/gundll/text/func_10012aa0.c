/*
 * FUN_10012aa0 (11 B) - __fastcall.
 * Vtable-pointer ctor: stores vtable 0x1004983c into [ECX], then
 * tail-jumps to shared ctor FUN_1001c8a0.
 *
 * CFLAGS: /O1
 */

extern void __fastcall FUN_1001c8a0(void);

__declspec(naked) void __fastcall FUN_10012aa0(void)
{
    __asm {
        mov     dword ptr [ecx], 0x1004983c
        jmp     FUN_1001c8a0
    }
}
