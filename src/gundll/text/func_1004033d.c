/*
 * FUN_1004033d (55 B) — __stdcall. Sets DAT_100756fc = (FUN_1003c5f0()==3),
 * then calls an IAT function and clears a flag.
 */

extern void *g_1007570c;
extern void *g_10049174;
extern int   g_100756fc;
extern int   g_10075710;
extern void __cdecl FUN_1003c5f0(void);

__declspec(naked) void __stdcall FUN_1004033d(void)
{
    __asm {
        push    dword ptr [g_1007570c]
        call    FUN_1003c5f0
        sub     eax, 3
        pop     ecx
        neg     eax
        sbb     eax, eax
        push    1
        inc     eax
        push    0x10040374
        mov     dword ptr [g_100756fc], eax
        call    dword ptr [g_10049174]
        test    byte ptr [g_10075710], 4
        jnz     L_ret
        and     dword ptr [g_10075710], 0
L_ret:
        ret
    }
}
