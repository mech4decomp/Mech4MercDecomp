/*
 * FUN_100012cd (84 B) — TLS slot setup: TlsAlloc, allocate 0x74-byte
 * block, TlsSetValue, init block, return 1 on success else 0.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * FUN_100012cd (84 B) -- TLS initialize: Func_10001c77; g_10005034 = TlsAlloc;
 * if valid: alloc 0x74 bytes; TlsSetValue; init slot; GetCurrentThreadId ->
 * v[1]=0xffffffff; v[0]=tid; return 1. /O1. Store order matters (tid cached
 * in temp BEFORE v[1] store).
 */

extern unsigned int (__stdcall *g_TlsAlloc)(void);              /* IAT 0x1000401c */
extern int (__stdcall *g_TlsSetValue)(unsigned int, void *);    /* IAT 0x10004018 */
extern unsigned int (__stdcall *g_GetCurrentThreadId)(void);    /* IAT 0x10004014 */

extern unsigned int g_10005034;   /* 0x10005034 */

extern void __stdcall FUN_10001c77(void);
extern void *__stdcall FUN_10001d82(int, int);
extern void __stdcall FUN_1000133f(void *);

__declspec(naked) void __stdcall FUN_100012cd(void)
{
    __asm {
        push    esi
        call    FUN_10001c77
        call    dword ptr [g_TlsAlloc]
        cmp     eax, -1
        mov     dword ptr [g_10005034], eax
        jz      L_1d
        push    0x74
        push    1
        call    FUN_10001d82
        mov     esi, eax
        pop     ecx
        test    esi, esi
        pop     ecx
        jz      L_1d
        push    esi
        push    dword ptr [g_10005034]
        call    dword ptr [g_TlsSetValue]
        test    eax, eax
        jz      L_1d
        push    esi
        call    FUN_1000133f
        pop     ecx
        call    dword ptr [g_GetCurrentThreadId]
        or      dword ptr [esi + 4], 0xffffffff
        push    1
        mov     dword ptr [esi], eax
        pop     eax
        pop     esi
        ret
L_1d:
        xor     eax, eax
        pop     esi
        ret
    }
}
