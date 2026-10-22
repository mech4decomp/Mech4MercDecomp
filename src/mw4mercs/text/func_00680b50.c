/*
 * thunk_FUN_0041fd80 (5 B) — E9 alias thunk to FUN_0041fd80.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041fd80(void);

__declspec(naked) void __stdcall thunk_FUN_0041fd80(void)
{
    __asm {
        jmp     FUN_0041fd80
    }
}
