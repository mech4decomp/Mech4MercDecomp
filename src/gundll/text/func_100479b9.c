/*
 * FUN_100479B9 (11 B) - free wrapper. Reads the object pointer at [ebp+4],
 * passes it to shared_free FUN_10001d60 (cdecl), returns. (Transcribed from
 * reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10001d60(void);   /* rel32 call (shared_free) */

__declspec(naked) void FUN_100479B9(void)
{
    __asm {
        mov     eax, dword ptr [ebp + 0x4]
        push    eax
        call    FUN_10001d60
        pop     ecx
        ret
    }
}
