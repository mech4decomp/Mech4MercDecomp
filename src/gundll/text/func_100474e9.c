/*
 * FUN_100474e9 (11 B) - free-wrapper thunk (__stdcall, 1 stack arg).
 * Loads arg1 from [ebp+4], pushes it, calls shared_free FUN_10001d60,
 * pops the arg, returns. gaptext provenance (missed by Ghidra).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10001d60(void);   /* rel32 call */

__declspec(naked) void __stdcall FUN_100474e9(void)
{
    __asm {
        mov     eax, dword ptr [ebp + 4]
        push    eax
        call    FUN_10001d60
        pop     ecx
        ret
    }
}
