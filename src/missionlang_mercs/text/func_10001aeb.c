/*
 * FUN_10001aeb (57 B) — if the language table is loaded (or pending load),
 * run the load routine (0xfc) and the finalize routine (0xff).
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_1000536c;                                /* 0x1000536c state */
extern int g_10005370;                                /* 0x10005370 pending flag */
extern void *g_100054c0;                              /* 0x100054c0 callback fn ptr */

extern void __cdecl FUN_10001b24(int);

__declspec(naked) void __stdcall FUN_10001aeb(void)
{
    __asm {
        mov     eax, dword ptr [g_1000536c]
        cmp     eax, 1
        jz      L_b02
        test    eax, eax
        jnz     L_b23
        cmp     dword ptr [g_10005370], 1
        jnz     L_b23
L_b02:
        push    0xfc
        call    FUN_10001b24
        mov     eax, dword ptr [g_100054c0]
        pop     ecx
        test    eax, eax
        jz      L_b18
        call    eax
L_b18:
        push    0xff
        call    FUN_10001b24
        pop     ecx
L_b23:
        ret
    }
}
