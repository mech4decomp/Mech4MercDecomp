/*
 * FUN_10047347 (11 B) - __cdecl, RET 0x0.  Free-wrapper thunk: reads the
 * single arg at [ebp+4] and forwards it to shared_free (FUN_10001d60).
 * (Ghidra missed this entry - transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10001d60(void);   /* rel32 call (shared_free) */

__declspec(naked) void __cdecl FUN_10047347(void)
{
    __asm {
        mov     eax, dword ptr [ebp + 0x4]
        push    eax
        call    FUN_10001d60
        pop     ecx
        ret
    }
}
