/*
 * FUN_10001CD0 (10 B) - __stdcall thunk. Adjusts the return address on the
 * stack by -0x18 then tail-jumps to FUN_100017C0. (The gaptext slot VA
 * 0x10001cca points at 6 leading int3 padding bytes; the real entry is
 * 0x10001cd0.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_100017C0(void);   /* rel32 jmp */

__declspec(naked) void __stdcall FUN_10001CD0(void)
{
    __asm {
        sub     dword ptr [esp + 4], 0x18
        jmp     FUN_100017C0
    }
}
