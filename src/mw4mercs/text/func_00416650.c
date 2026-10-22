/*
 * FUN_00416650 (25 B) — "Not implemented" guard. Pushes the string
 * "Not implemented" to FUN_006fab90 (assert/error); if it returns
 * nonzero, traps (INT3). Returns the incoming ECX (param_1) in EAX.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_0076d414[];                 /* "Not implemented" */
extern int  __cdecl FUN_006fab90(void *);

__declspec(naked) void FUN_00416650(void)
{
    __asm {
        push    esi
        push    offset g_0076d414
        mov     esi, ecx
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      done
        int     3
done:
        mov     eax, esi
        pop     esi
        ret
    }
}
