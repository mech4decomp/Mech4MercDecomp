/*
 * FUN_004BBF50 (23 B) — __stdcall (RET 0x4). Pushes an assert message
 * string and calls the assert dispatcher FUN_006FAB90; traps (int3) if
 * the assert fails, then returns 0 (al).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_0077124c[];
extern void __cdecl FUN_006FAB90(void);

__declspec(naked) void FUN_004BBF50(void)
{
    __asm {
        push    offset g_0077124c
        call    FUN_006FAB90
        add     esp, 4
        test    eax, eax
        je      L_4bbf62
        int     3
L_4bbf62:
        xor     al, al
        ret     4
    }
}
