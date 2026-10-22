/*
 * FUN_10001eb1 (41 B) — initialize four critical sections at 0x10006134,
 * 0x10006124, 0x10006114, 0x100060f4 via InitializeCriticalSection.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * Language.dll FUN_10001eb1 (41 B) -- __stdcall. Initialize the four
 * critical sections whose descriptors are pointed to at 0x10006134,
 */

extern void *g_10006134;                              /* 0x10006134 critical section */
extern void *g_10006124;                              /* 0x10006124 critical section */
extern void *g_10006114;                              /* 0x10006114 critical section */
extern void *g_100060f4;                              /* 0x100060f4 critical section */

extern void (__stdcall *g_InitializeCriticalSection)(void *); /* IAT 0x1000507c */

__declspec(naked) void __stdcall FUN_10001eb1(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [g_InitializeCriticalSection]
        push    dword ptr [g_10006134]
        call    esi
        push    dword ptr [g_10006124]
        call    esi
        push    dword ptr [g_10006114]
        call    esi
        push    dword ptr [g_100060f4]
        call    esi
        pop     esi
        ret
    }
}
