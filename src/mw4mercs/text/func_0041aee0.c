/*
 * FUN_0041aee0 (49 B) — registers two animation-library config options
 * ("Use Fast Lerp", "Use Fast Normalize") with FUN_0070f090, passing
 * string pointers and callback function addresses.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0070f090(void);

__declspec(naked) void FUN_0041aee0(void)
{
    __asm {
        push    0x0
        push    0x0
        push    0x41af40
        push    0x41af20
        push    0x76d5c8
        call    FUN_0070f090
        push    0x0
        push    0x0
        push    0x41af50
        push    0x41af30
        push    0x76d5a0
        call    FUN_0070f090
        ret
    }
}
