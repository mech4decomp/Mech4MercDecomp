/*
 * FUN_1000d9b0 (11 B) - __fastcall. Ctor: stores vtable 0x10049674 at
 * this+0, tail-jumps into FUN_1001ca00.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001ca00(void);   /* rel32 jmp */

__declspec(naked) void __fastcall FUN_1000d9b0(void)
{
    __asm {
        mov     dword ptr [ecx], 0x10049674
        jmp     FUN_1001ca00
    }
}
