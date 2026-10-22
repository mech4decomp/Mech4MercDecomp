/*
 * FUN_004171B0 (5 B) — Iterator destructor thunk for vtable 0x7725A0.
 *
 * Called by FUN_004D2B80 (Database destructor body 1) after the iteration
 * loop completes.  This is a simple 5-byte tail-call thunk that jumps to
 * FUN_00415C40, which unlinks the iterator node from a doubly-linked list.
 *
 * The iterator object layout (at ECX):
 *   +0x00: vtable pointer (0x7725A0)
 *   +0x04: list_head pointer
 *   +0x08: next pointer
 *   +0x0C: prev pointer
 *
 * __thiscall (ECX = iterator), no stack params, plain RET.
 * CFLAGS: /O1
 */

void FUN_00415C40(void);

__declspec(naked) void __stdcall iterator_dtor(void)
{
    __asm {
        jmp     FUN_00415C40
    }
}
