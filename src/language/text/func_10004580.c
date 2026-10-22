/*
 * FUN_10004580 (9 B, __stdcall) — TLS getter wrapper: fetch the TLS block
 * via FUN_1000135c and return a pointer 8 bytes into it.
 *
 * CFLAGS: /O1
 * Match: target 100%
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * Language.dll FUN_10004580 (9 B) -- __stdcall. TLS getter wrapper:
 * returns FUN_1000135c() + 8.
 */

extern void *__stdcall FUN_1000135c(void);

__declspec(naked) void *__stdcall FUN_10004580(void)
{
    __asm {
        call    FUN_1000135c
        add     eax, 8
        ret
    }
}
