/*
 * FUN_006F4940 (3 B) — Heap table decrement thunk.
 *
 * This is a tiny __stdcall function that takes 3 DWORD parameters
 * (heap_entry, size, flags) and immediately returns, cleaning 12 bytes
 * from the stack. It is called from the GameOS heap allocator
 * (FUN_006F3C80 / alloc_impl.c) and free (FUN_006F4230 / free_impl.c)
 * as a "heap_table decrement" operation.
 *
 * The function body is just:
 *   C2 0C 00    RET 0xC
 *
 * Calling convention: __stdcall, RET 0xC (3 DWORD params).
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_006f4940(void)
{
    __asm {
        ret     0x0C
    }
}
