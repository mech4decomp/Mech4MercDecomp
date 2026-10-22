/*
 * FUN_10042C7E (9 B) - __cdecl.  return FUN_10038512() + 0x54.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10038512(void);   /* rel32 call */

__declspec(naked) void FUN_10042C7E(void)
{
    __asm {
        call    FUN_10038512
        add     eax, 0x54
        ret
    }
}
