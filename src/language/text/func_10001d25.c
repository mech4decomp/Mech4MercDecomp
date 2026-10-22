/*
 * FUN_10001d25 (57 B) — if the language-init state (DAT_10008a44) is 1, or
 * it is 0 with DAT_10008a48 == 1, run FUN_10001d5e(0xfc), call the
 * registered callback at DAT_10008b98 if present, then FUN_10001d5e(0xff).
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * Language.dll FUN_10001d25 (57 B) -- __stdcall. If language-init state
 * (g_10008a44) is 1, or it is 0 while g_10008a48 == 1, run the init step
 * FUN_10001d5e(0xfc), call the registered callback at 0x10008b98 (if set),
 */

extern void __cdecl FUN_10001d5e(void);               /* language init step */

extern int g_10008a44;                                /* 0x10008a44 init state */
extern int g_10008a48;                                /* 0x10008a48 state flag */
extern void (*g_10008b98)(void);                      /* 0x10008b98 callback */

__declspec(naked) void __stdcall FUN_10001d25(void)
{
    __asm {
        mov     eax, dword ptr [g_10008a44]
        cmp     eax, 1
        jz      L_1d3c
        test    eax, eax
        jnz     L_1d5d
        cmp     dword ptr [g_10008a48], 1
        jnz     L_1d5d
L_1d3c:
        push    0xfc
        call    FUN_10001d5e
        mov     eax, dword ptr [g_10008b98]
        pop     ecx
        test    eax, eax
        jz      L_1d52
        call    eax
L_1d52:
        push    0xff
        call    FUN_10001d5e
        pop     ecx
L_1d5d:
        ret
    }
}
