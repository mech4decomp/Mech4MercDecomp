/*
 * FUN_0074cd70 (45 B) — __stdcall, RET 4.
 *
 * If param == 1 returns "Server" (0x7ab7f4); otherwise sprintf's
 * "Player 0x%x" into buffer 0x8ba8a4 via the IAT at 0x0076b420 and
 * returns that buffer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int (__cdecl *g_76b420)(char *, const char *, ...);

__declspec(naked) void __stdcall FUN_0074cd70(int param)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        cmp     eax, 1
        jnz     L_sprintf
        mov     eax, 0x7ab7f4
        ret     4
L_sprintf:
        push    eax
        push    0x7ab8a4
        push    0x8ba8a4
        call    dword ptr [g_76b420]
        add     esp, 0xc
        mov     eax, 0x8ba8a4
        ret     4
    }
}
