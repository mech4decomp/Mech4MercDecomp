/*
 * FUN_100423f9 (14 B) — __cdecl.
 * Pushes 8 and param_1, calls FUN_1003a6a8, cleans up 2 stack args.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1003a6a8(void);

__declspec(naked) void FUN_100423f9(void)
{
    __asm {
        push    0x8
        push    dword ptr [esp + 0x8]
        call    FUN_1003a6a8
        pop     ecx
        pop     ecx
        ret
    }
}
