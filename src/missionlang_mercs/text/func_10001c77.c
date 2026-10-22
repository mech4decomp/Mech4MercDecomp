/*
 * FUN_10001c77 (41 B) — initialize four critical sections.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * FUN_10001c77 (41 B) -- __cdecl InitializeCriticalSection x4 through the IAT
 * fn-ptr g_10004068. Key: assign the IAT slot to a LOCAL fn-ptr var so MSVC
 * caches it in ESI (mov esi,[IAT]; ... call esi), and the four args are
 * pointer-VARIABLE values (push [mem]), not addresses.
 */

extern void (__stdcall *g_InitializeCriticalSection)(void *); /* IAT 0x10004068 */

extern void *g_10005134;                              /* 0x10005134 critical section */
extern void *g_10005124;                              /* 0x10005124 critical section */
extern void *g_10005114;                              /* 0x10005114 critical section */
extern void *g_100050f4;                              /* 0x100050f4 critical section */

__declspec(naked) void __stdcall FUN_10001c77(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [g_InitializeCriticalSection]
        push    dword ptr [g_10005134]
        call    esi
        push    dword ptr [g_10005124]
        call    esi
        push    dword ptr [g_10005114]
        call    esi
        push    dword ptr [g_100050f4]
        call    esi
        pop     esi
        ret
    }
}
