/*
 * FUN_004BBF70 (23 B) — __stdcall (RET 0x4). Pushes an assert message
 * string and calls the assert dispatcher FUN_006FAB90; traps (int3) if
 * the assert fails, then returns 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_0077124c[];
extern void __cdecl FUN_006FAB90(void);

__declspec(naked) void FUN_004BBF70(void)
{
    __asm {
        push    offset g_0077124c
        call    FUN_006FAB90
        add     esp, 4
        test    eax, eax
        je      L_4bbf82
        int     3
L_4bbf82:
        xor     eax, eax
        ret     4
    }
}
