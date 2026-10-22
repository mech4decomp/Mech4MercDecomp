/*
 * FUN_004BBF10 (21 B) — __stdcall (RET 0x4). Pushes an assert message
 * string and calls the assert dispatcher FUN_006FAB90; traps (int3) if
 * the assert fails.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_00771220[];
extern void __cdecl FUN_006FAB90(void);

__declspec(naked) void FUN_004BBF10(void)
{
    __asm {
        push    offset g_00771220
        call    FUN_006FAB90
        add     esp, 4
        test    eax, eax
        je      L_4bbf22
        int     3
L_4bbf22:
        ret     4
    }
}
