/*
 * FUN_100479F0 (11 B) - free wrapper. Reads the object pointer at [ebp-0x10],
 * passes it to shared_free FUN_10001d60 (cdecl), returns. (Transcribed from
 * reference bytes; gaptext. Real entry after 12 leading int3 pads at
 * 0x100479e4.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10001d60(void);   /* rel32 call (shared_free) */

__declspec(naked) void FUN_100479F0(void)
{
    __asm {
        mov     eax, dword ptr [ebp - 0x10]
        push    eax
        call    FUN_10001d60
        pop     ecx
        ret
    }
}
