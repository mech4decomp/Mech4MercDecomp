/*
 * FUN_10047220 (11 B) - __cdecl.  Free wrapper: reads first arg from
 * [ebp+4], forwards it to FUN_10001d60 (shared_free).  (Transcribed from
 * reference bytes; gaptext.  Leading int3 padding at 0x10047215 skipped.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10001d60(void);   /* rel32 call (shared_free) */

__declspec(naked) void __cdecl FUN_10047220(void)
{
    __asm {
        mov     eax, dword ptr [ebp + 0x4]
        push    eax
        call    FUN_10001d60
        pop     ecx
        ret
    }
}
