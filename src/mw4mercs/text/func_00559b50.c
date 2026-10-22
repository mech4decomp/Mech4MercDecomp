/*
 * FUN_00559b50 (11 B) — Adds 0x6A8 to ecx and jumps to FUN_0040FD80.
 * Bytes: 81 C1 A8 06 00 00 E9 25 62 EC FF
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_00559b50(void)
{
    

extern void __cdecl FUN_10041fd7f(void);
__asm {
add     ecx, 0x6A8
        jmp FUN_10041fd7f
    }


}
