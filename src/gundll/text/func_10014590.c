/*
 * FUN_10014590 (11 B) - __fastcall. Vtable-pointer ctor: stores vtable
 * 0x100498cc at [ecx], then tail-jumps to shared ctor FUN_1001c750.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_1001c750(void);   /* rel32 jmp */

__declspec(naked) void __fastcall FUN_10014590(void)
{
    __asm {
        mov     dword ptr [ecx], 0x100498cc
        jmp     FUN_1001c750
    }
}
