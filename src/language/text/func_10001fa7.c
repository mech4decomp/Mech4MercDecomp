/*
 * FUN_10001fa7 (21 B) — LeaveCriticalSection on the section in slot
 * param_1 of the table at 0x100060f0.
 *
 * __cdecl.
 *
 * CFLAGS: /O1
 * Match: target 100%
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * Language.dll FUN_10001fa7 (21 B) -- __cdecl. LeaveCriticalSection on the
 * section stored in slot n of the table at 0x100060f0.
 */

extern char g_100060f0;                               /* 0x100060f0 section table */

extern void (__stdcall *g_LeaveCriticalSection)(void *); /* IAT 0x10005084 */

__declspec(naked) void __cdecl FUN_10001fa7(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     eax, dword ptr [ebp + 8]
        push    dword ptr [eax*4 + g_100060f0]
        call    dword ptr [g_LeaveCriticalSection]
        pop     ebp
        ret
    }
}
