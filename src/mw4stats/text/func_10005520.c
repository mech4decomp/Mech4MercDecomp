/*
 * FUN_10005520 (8 B) - __fastcall. Tail-jumps to FUN_10012080(this+4).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10012080(void);

__declspec(naked) void __cdecl FUN_10005520(void)
{
    __asm {
        add     ecx, 4
        jmp     FUN_10012080
    }
}
