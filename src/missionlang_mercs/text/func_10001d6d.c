/*
 * FUN_10001d6d (21 B) — leave the critical section for table index param_1.
 *
 * __cdecl, 1 arg.
 *
 * CFLAGS: /O1
 * Match: target 100%
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * MissionLang_MERCS.dll FUN_10001d6d (21 B) -- __cdecl. Collects the
 * critical section stored in slot n of the table at 0x100050f0 and leaves
 * it. Mirror of Language.dll FUN_10001fa7 (the CRT _unlock family).
 */

extern int g_100050f0;                                /* 0x100050f0 critical section table */

extern void (__stdcall *g_LeaveCriticalSection)(void *); /* IAT 0x10004070 */

__declspec(naked) void __cdecl FUN_10001d6d(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     eax, dword ptr [ebp + 8]
        push    dword ptr [eax*4 + g_100050f0]
        call    dword ptr [g_LeaveCriticalSection]
        pop     ebp
        ret
    }
}
