/*
 * FUN_10001321 (30 B) — TLS teardown: TlsFree the slot and reset it.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * FUN_10001321 (30 B) -- __cdecl TLS teardown: init, then if (g_10005034 != -1)
 * TlsFree via IAT fn-ptr and stamp -1. The XOR-and-OR forms matched naturally.
 */

extern int (__stdcall *g_TlsFree)(unsigned int);   /* IAT 0x10004020 */

extern unsigned int g_10005034;   /* 0x10005034 */

extern void __stdcall FUN_10001ca0(void);

__declspec(naked) void __stdcall FUN_10001321(void)
{
    __asm {
        call    FUN_10001ca0
        mov     eax, dword ptr [g_10005034]
        cmp     eax, -1
        jz      L_3e
        push    eax
        call    dword ptr [g_TlsFree]
        or      dword ptr [g_10005034], 0xffffffff
L_3e:
        ret
    }
}
