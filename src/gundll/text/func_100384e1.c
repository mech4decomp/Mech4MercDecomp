/*
 * FUN_100384e1 (30 B) - __stdcall. Calls FUN_10039aad, then if
 * g_100518b4 != -1, calls IAT 0x100490e0(g_100518b4) and sets it to -1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10039aad(void);   /* rel32 call */
extern int g_100518b4;                    /* abs data ref (reloc-masked) */
extern int *g_100490e0;                   /* IAT call target (reloc-masked) */

__declspec(naked) void __stdcall FUN_100384e1(void)
{
    __asm {
        call    FUN_10039aad
        mov     eax, dword ptr [g_100518b4]
        cmp     eax, -1
        jz      L_done
        push    eax
        call    dword ptr [g_100490e0]
        or      dword ptr [g_100518b4], 0xffffffff
L_done:
        ret
    }
}
