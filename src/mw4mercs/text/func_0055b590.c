/*
 * FUN_0055b590 (11 B) — Adds 0x6A0 to ecx and jumps to FUN_0040FD80.
 * Bytes: 81 C1 A0 06 00 00 E9 E5 47 EC FF
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_0055b590(void)
{
    

extern void __cdecl FUN_10041fd7f(void);
__asm {
add     ecx, 0x6A0
        jmp FUN_10041fd7f
    }


}
