/*
 * FUN_10039887 (9 B) - Fragment (uses EBP frame set up by caller): returns
 * (byte [ebp+0xc] != 0). (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __cdecl FUN_10039887(void)
{
    __asm {
        xor     eax, eax
        cmp     byte ptr [ebp + 0xc], al
        setne   al
        ret
    }
}
