/*
 * FUN_10016540 (11 B) - __fastcall. Vtable-pointer ctor: stores vtable
 * 0x10049950 at [ecx], then tail-jumps to shared ctor FUN_1001c8a0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_1001c8a0(void);   /* rel32 jmp */

__declspec(naked) void __fastcall FUN_10016540(void)
{
    __asm {
        mov     dword ptr [ecx], 0x10049950
        jmp     FUN_1001c8a0
    }
}
