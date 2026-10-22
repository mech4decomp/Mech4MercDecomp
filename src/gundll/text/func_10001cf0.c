/*
 * FUN_10001CF0 (10 B) - __stdcall thunk. Adjusts the return address on the
 * stack by -0x1c then tail-jumps to FUN_10001810. (The gaptext slot VA
 * 0x10001cea points at 6 leading int3 padding bytes; the real entry is
 * 0x10001cf0.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10001810(void);   /* rel32 jmp */

__declspec(naked) void __stdcall FUN_10001CF0(void)
{
    __asm {
        sub     dword ptr [esp + 4], 0x1c
        jmp     FUN_10001810
    }
}
