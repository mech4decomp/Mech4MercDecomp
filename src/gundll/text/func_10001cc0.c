/*
 * FUN_10001CC0 (10 B) - __stdcall thunk. Adjusts the return address on the
 * stack by -0x18 then tail-jumps to FUN_10001810. (The gaptext slot VA
 * 0x10001cba points at 6 leading int3 padding bytes; the real entry is
 * 0x10001cc0.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10001810(void);   /* rel32 jmp */

__declspec(naked) void __stdcall FUN_10001CC0(void)
{
    __asm {
        sub     dword ptr [esp + 4], 0x18
        jmp     FUN_10001810
    }
}
