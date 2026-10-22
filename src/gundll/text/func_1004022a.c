/*
 * FUN_1004022a (86 B) - __stdcall.
 * Calls FUN_1003c5f0(g_10075708); computes a flag into g_10075704. If
 * zero, calls FUN_10040650(g_10075708) into g_10075700; else sets
 * g_10075700 = 2. Registers a callback via IAT(0x10049174) and clears
 * g_10075710 unless bit 2 is set.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1003c5f0(void);   /* rel32 call */
extern void __cdecl FUN_10040650(void);   /* rel32 call */
extern int *g_10049174;                   /* IAT call dword ptr */
extern int g_10075708;                    /* data */
extern int g_10075704;                    /* data */
extern int g_10075700;                    /* data */
extern int g_10075710;                    /* data */

__declspec(naked) void __stdcall FUN_1004022a(void)
{
    __asm {
        push    dword ptr [g_10075708]
        call    FUN_1003c5f0
        sub     eax, 3
        pop     ecx
        neg     eax
        sbb     eax, eax
        inc     eax
        mov     dword ptr [g_10075704], eax
        jz      L_40251
        mov     dword ptr [g_10075700], 2
        jmp     L_40262
    L_40251:
        push    dword ptr [g_10075708]
        call    FUN_10040650
        pop     ecx
        mov     dword ptr [g_10075700], eax
    L_40262:
        push    1
        push    0x10040280
        call    dword ptr [g_10049174]
        test    byte ptr [g_10075710], 4
        jnz     L_4027f
        and     dword ptr [g_10075710], 0
    L_4027f:
        ret
    }
}
