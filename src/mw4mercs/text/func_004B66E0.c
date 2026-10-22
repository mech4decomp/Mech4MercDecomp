/*
 * FUN_004B66E0 (23 B) — __stdcall (RET 0x4). Pushes an assert message
 * string and calls the assert dispatcher FUN_006FAB90; traps (int3) if
 * the assert fails, then returns 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_00770918[];
extern void __cdecl FUN_006FAB90(void);

__declspec(naked) void FUN_004B66E0(void)
{
    __asm {
        push    offset g_00770918
        call    FUN_006FAB90
        add     esp, 4
        test    eax, eax
        je      L_4b66f2
        int     3
L_4b66f2:
        xor     eax, eax
        ret     4
    }
}
