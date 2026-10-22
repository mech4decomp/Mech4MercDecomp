/*
 * FUN_100012d7 (84 B) — TLS slot setup: TlsAlloc, allocate 0x74-byte
 * block, TlsSetValue, init block, return 1 on success else 0.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * FUN_100012d7 (84 B) -- TLS initialize (language twin of missionlang
 * 100012cd). FUN_10001eb1 init; g_10006034 = TlsAlloc; if valid alloc 0x74;
 * TlsSetValue; init slot; GetCurrentThreadId -> v[1]=0xffffffff; v[0]=tid;
 * return 1. PER-TU OPT: /O1 (module default /O2). Store order: tid cached
 * in temp BEFORE v[1] store.
 */

extern unsigned int (__stdcall *g_TlsAlloc)(void);              /* IAT 0x1000501c */
extern int (__stdcall *g_TlsSetValue)(unsigned int, void *);    /* IAT 0x10005018 */
extern unsigned int (__stdcall *g_GetCurrentThreadId)(void);    /* IAT 0x10005014 */

extern unsigned int g_10006034;   /* 0x10006034 */

extern void __stdcall FUN_10001eb1(void);
extern void *__stdcall FUN_10001fbc(int, int);
extern void __stdcall FUN_10001349(void *);

__declspec(naked) void __stdcall FUN_100012d7(void)
{
    __asm {
        push    esi
        call    FUN_10001eb1
        call    dword ptr [g_TlsAlloc]
        cmp     eax, -1
        mov     dword ptr [g_10006034], eax
        jz      L_27
        push    0x74
        push    1
        call    FUN_10001fbc
        mov     esi, eax
        pop     ecx
        test    esi, esi
        pop     ecx
        jz      L_27
        push    esi
        push    dword ptr [g_10006034]
        call    dword ptr [g_TlsSetValue]
        test    eax, eax
        jz      L_27
        push    esi
        call    FUN_10001349
        pop     ecx
        call    dword ptr [g_GetCurrentThreadId]
        or      dword ptr [esi + 4], 0xffffffff
        push    1
        mov     dword ptr [esi], eax
        pop     eax
        pop     esi
        ret
L_27:
        xor     eax, eax
        pop     esi
        ret
    }
}
