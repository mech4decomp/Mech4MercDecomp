/*
 * FUN_1004792A (11 B) - __cdecl, RET 0x0.  Free-wrapper thunk: reads the
 * object pointer from [ebp+4] (caller's frame), pushes it, calls
 * FUN_10001d60 (shared_free), pops, returns.  (Ghidra missed this entry -
 * transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10001d60(void);   /* rel32 call (shared_free) */

__declspec(naked) void __cdecl FUN_1004792A(void)
{
    __asm {
        mov     eax, dword ptr [ebp + 0x4]
        push    eax
        call    FUN_10001d60
        pop     ecx
        ret
    }
}
