/*
 * FUN_10005f40 (8 B) - __fastcall. Tail-jumps to FUN_10003fd0(this+4).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10003fd0(void);

__declspec(naked) void __cdecl FUN_10005f40(void)
{
    __asm {
        add     ecx, 4
        jmp     FUN_10003fd0
    }
}
