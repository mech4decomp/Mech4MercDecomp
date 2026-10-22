/*
 * FUN_1000dae0 (11 B) - __fastcall. Ctor: stores vtable 0x10049680 at
 * this+0, tail-jumps into FUN_1001ca00.
 *
 * CFLAGS: /O1
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * gundll FUN_1000dae0 (11 B) -- __fastcall. `mov [ecx],0x10049680; jmp
 * FUN_1001ca00` -- vtable-pointer ctor tail-calling the shared ctor.
 */

extern void __cdecl FUN_1001ca00(void);   /* rel32 jmp */

__declspec(naked) void __fastcall FUN_1000dae0(void)
{
    __asm {
        mov     dword ptr [ecx], 0x10049680
        jmp     FUN_1001ca00
    }
}
