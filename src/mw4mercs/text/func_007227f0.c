/*
 * FUN_007227f0 (52 B) — Conditional init helper.
 *
 * If DAT_0085b4a0 != 1, clears DAT_00858138, and if DAT_008597ac == 0
 * and DAT_00857f40 != 0, calls FUN_007554f0(DAT_00857f40, 0,
 * FUN_00722830, 0, 1).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_85b4a0;                 /* DAT_0085b4a0 */
extern int g_8597ac;                 /* DAT_008597ac */
extern char g_858138;                /* DAT_00858138 */
extern int g_857f40;                 /* DAT_00857f40 */
extern void __cdecl FUN_00722830(void);
extern void __stdcall FUN_007554f0(void *a, int b, void *c, int d, int e);

__declspec(naked) void FUN_007227f0(void)
{
    __asm {
        cmp     dword ptr [g_85b4a0], 1
        jz      done
        mov     eax, dword ptr [g_8597ac]
        test    eax, eax
        mov     byte ptr [g_858138], 0
        jnz     done
        mov     eax, dword ptr [g_857f40]
        test    eax, eax
        jz      done
        push    1
        push    0
        push    offset FUN_00722830
        push    0
        push    eax
        call    FUN_007554f0
done:
        ret
    }
}
