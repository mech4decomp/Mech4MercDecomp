/*
 * FUN_100477F6 (11 B) - free-wrapper thunk. Loads arg0 from [ebp+4], pushes it
 * onto FUN_10001d60 (shared_free), pops, ret. (Transcribed from reference
 * bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10001d60(void);   /* rel32 call (shared_free) */

__declspec(naked) void FUN_100477F6(void)
{
    __asm {
        mov     eax, dword ptr [ebp + 0x4]
        push    eax
        call    FUN_10001d60
        pop     ecx
        ret
    }
}
