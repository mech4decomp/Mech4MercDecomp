/*
 * FUN_10005a30 (8 B) - __fastcall. Tail-jumps to FUN_10003fa0(this+4).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10003fa0(void);

__declspec(naked) void __cdecl FUN_10005a30(void)
{
    __asm {
        add     ecx, 4
        jmp     FUN_10003fa0
    }
}
