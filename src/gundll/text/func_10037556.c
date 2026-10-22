/*
 * FUN_10037556 (7 B) - __stdcall. Tail thunk: pop 2 args, swap, jmp.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_10037556(void)
{
    __asm {
        pop     eax
        pop     ecx
        xchg    dword ptr [esp], eax
        jmp     eax
    }
}
