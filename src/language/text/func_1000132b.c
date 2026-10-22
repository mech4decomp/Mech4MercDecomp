/*
 * FUN_1000132b (30 B) — TLS teardown: TlsFree the slot and reset it
 * to 0xffffffff.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * Language.dll FUN_1000132b (30 B) -- __stdcall.
 * TLS teardown: first run the module-fini hook, then TlsFree the cached
 */

extern int (__stdcall *g_TlsFree)(unsigned int);   /* IAT 0x10005020 */

extern unsigned int g_10006034;   /* 0x10006034 */

extern void __stdcall FUN_10001eda(void);

__declspec(naked) void __stdcall FUN_1000132b(void)
{
    __asm {
        call    FUN_10001eda
        mov     eax, dword ptr [g_10006034]
        cmp     eax, -1
        jz      L_48
        push    eax
        call    dword ptr [g_TlsFree]
        or      dword ptr [g_10006034], 0xffffffff
L_48:
        ret
    }
}
