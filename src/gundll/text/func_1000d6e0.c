/*
 * FUN_1000d6e0 (11 B) - __fastcall. Ctor: stores vtable 0x1004965c at
 * this+0, tail-jumps into FUN_1001c8a0.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c8a0(void);   /* rel32 jmp */

__declspec(naked) void __fastcall FUN_1000d6e0(void)
{
    __asm {
        mov     dword ptr [ecx], 0x1004965c
        jmp     FUN_1001c8a0
    }
}
