/*
 * FUN_10001D00 (10 B) - __stdcall thunk. Adjusts the return address on the
 * stack by -0x1c then tail-jumps to FUN_100017C0. (The gaptext slot VA
 * 0x10001cfa points at 6 leading int3 padding bytes; the real entry is
 * 0x10001d00.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_100017C0(void);   /* rel32 jmp */

__declspec(naked) void __stdcall FUN_10001D00(void)
{
    __asm {
        sub     dword ptr [esp + 4], 0x1c
        jmp     FUN_100017C0
    }
}
