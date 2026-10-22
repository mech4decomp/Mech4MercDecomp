/*
 * FUN_10039825 (4 B) - __cdecl. Returns 1.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __cdecl FUN_10039825(void)
{
    __asm {
        push    1
        pop     eax
        ret
    }
}
