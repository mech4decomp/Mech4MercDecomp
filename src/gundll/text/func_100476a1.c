/*
 * FUN_100476A1 (11 B) - free-wrapper thunk: shared_free(this) via
 * FUN_10001d60.  (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10001d60(void);   /* rel32 call (shared_free) */

__declspec(naked) void FUN_100476A1(void)
{
    __asm {
        mov     eax, dword ptr [ebp + 4]
        push    eax
        call    FUN_10001d60
        pop     ecx
        ret
    }
}
