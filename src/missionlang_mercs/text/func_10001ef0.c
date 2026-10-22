/*
 * FUN_10001ef0 (7 B) — strcpy thunk: load dest into EDI and tail-jump into
 * the shared string-copy loop at 0x10001f61 (inside FUN_10001f00).
 *
 * __cdecl, 2 args.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void *__cdecl FUN_10001ef0(void)
{
    __asm {
        push    edi
        mov     edi, dword ptr [esp + 8]
        /* __emit: rel8 tail-jump into FUN_10001f00's loop at 0x10001f61;
           MSVC6 emits rel32 (E9) for any jmp target, never rel8 (EB) */
        __emit 0xEB
        __emit 0x6A
    }
}
