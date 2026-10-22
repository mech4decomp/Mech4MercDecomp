/*
 * FUN_100475DB (11 B) - __cdecl, 1 arg.  Free wrapper: reads the pointer arg
 * at [ebp+4], forwards it to shared_free (FUN_10001d60), cdecl-cleans the
 * pushed arg (pop ecx), returns FUN_10001d60's result in eax.
 * (Ghidra missed this entry - transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10001d60(void);   /* rel32 call (shared_free) */

__declspec(naked) void __cdecl FUN_100475DB(void)
{
    __asm {
        mov     eax, dword ptr [ebp + 0x4]
        push    eax
        call    FUN_10001d60
        pop     ecx
        ret
    }
}
